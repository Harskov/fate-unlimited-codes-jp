# Friction Report — 2026-09-08-007-match-batch

**Job folder:** `2026-09-08-007-match-batch`  
**Log:** `friction-log.jsonl` (4 entries; opened 2026-09-08T05:05:15Z, exported 2026-09-08T05:22:12Z)  
**Skills build:** mwcps2-3.0.1b151-050317 -O4,p; splat 58.3s; ninja 39 asm + 21 C objects  
**Severity counts:** major 1, minor 2, papercut 1  

## How to consume this report (for the remediating model)

You are reading an operator's friction log from one run (one step) of the
Decompilation Assistant (PS2) project. Before you implement anything,
internalize the rules the sibling projects' remediation rounds paid for:

1. **Reproduce every claim from its artifacts before implementing its fix.**
   Each entry separates OBSERVED (facts the operator saw, with artifact paths)
   from HYPOTHESIS (the operator's guess at the cause — explicitly unverified).
   A sibling project's report once proposed a remedy that verification showed
   would have turned 8 false positives into 31 false negatives. Reproduce first.
2. **Right symptom, wrong layer is the common failure.** Three diagnoses in
   one sibling remediation round were correct about the symptom and wrong
   about which layer owned the defect (instructions / knowledge / skill script
   / template), and each proposed fix would have passed its own test while
   leaving the defect in place. Trace the defect to the layer that owns it.
3. **A fix without a discriminating check is not a fix.** Every fix ships with
   a check that fails on the pre-fix version: a script test, a build-evidence
   transcript, or a `check.json` / ledger record that the old build could not
   have produced. A check that passes when the fix is absent tests nothing.
4. **Measure thresholds before shipping them.** Every cutoff you change in
   config/policy.json (batch size, attempt cap, permuter timeout) should cite
   the ledger or friction evidence that justifies it, in the commit message.
5. **Structural truncation check on every revised file:** no definitions lost,
   and growth accounted for. Never let a revised file ship truncated.
6. **Entries are review sites, not verdicts.** An operator can misread a tool
   (see any entry whose category is `operator-drift` or `evidence-gap`).
   Rejecting an entry with a reasoned refutation is a legitimate resolution —
   record it.

**Severity vocabulary:** **blocker** = stopped the pipeline or forced a forbidden action (e.g. a hand-edit); **major** = wrong output, missed detection, or substantial rework; **minor** = friction worked around within the sanctioned toolset; **papercut** = annoyance; no rework, but worth fixing.

**Category vocabulary:** **tool-bug** = a toolkit script or third-party tool (wibo, mwccps2, objdiff, splat, m2c, permuter) produced wrong output or crashed on sanctioned input; **tool-gap** = a needed capability is missing from the toolkit or the pinned toolchain; **toolchain-drift** = compiler, assembler, linker or objdiff behaviour differs from tools/manifest.json or from the doctrine in K1/K2 (a version that differs from the manifest, a preset that does not exist for the compiler); **doc-gap** = K1-K8, a SKILL.md or PROJECT-INSTRUCTIONS.md is silent or wrong where the run needed guidance; **doctrine-gap** = a step procedure in dps2-step is unclear or contradicts observed behaviour (a segment boundary found wrong, an entry state next_step.py misjudged); **evidence-gap** = a status, name, type or address could not be grounded in an artifact (no cited evidence for a name; objdiff could not read a compile that succeeded under wibo); **environment** = the VM bit: the ~3-minute device_bash cap, memory, network, the no-delete mount, host binutils without R5900; **operator-drift** = the operator caught itself outside the step: wanting to start a second step, a report over its length target, an unplanned subagent, instructed-looking re-checking of its own work; **false-signal** = a check false-positived or false-negatived (objdiff 100 but check.json red; check.json green with a wrong segment).

## Stage attestation

Silence is not evidence of frictionlessness: a stage is either attested (`clear-stage` recorded, with or without entries) or UNATTESTED (never examined — the operator never said). Entries without a `clear-stage` mean friction was seen and the review was not finished. UNATTESTED stages are holes in this report's coverage, not clean bills of health.

| Stage | Status |
|---|---|
| Stage R RESUME | attested clear |
| Stage S SELECT | attested clear |
| Stage E EXECUTE | 4 entries + attested complete |
| Stage V SHIP | attested clear |
| Cross-cutting / environment | attested clear |

## Entries (most severe first)

### F-3 — [major / doc-gap] K1 does not name the 'sdr zero,0x1(zero) / sdl zero,0x8(zero)' idiom, which is a real 64-bit store to address 1 and appears ~200 times in the image

- **Stage:** Stage E EXECUTE | **Function:** `func_001767B0` | **Logged:** 2026-09-08T05:20:04Z
- **Observed (fact):** func_001767B0 has 'sdr $zero, 0x1($zero); sdl $zero, 0x8($zero)' as the two-instruction body of an if. The words 0xB4000001 / 0xB0000008 are in the ELF itself (hexdump at file offset 0x76868) and occur 207 / 195 times in the image; 397 sdl/sdr lines with a $zero base across asm/. Compiling 'void probe(void){ *(long long *)1 = 0; }' with the pinned mwcps2-3.0.1b151-050317 -O4,p emits exactly B4000001 / B0000008 (probe object, .text words). Writing that statement into the if body moved func_001767B0 from 83.4 to 85.8 with both rows matching.
- **Expected:** K1 section 4 (reading the target asm) or the section 8 cheat sheet to say that an sdl/sdr pair with a $zero base and offsets N and N+7 is an unaligned 64-bit store to the absolute address N, that mwcc emits it for '*(long long *)N = 0', and that this game uses the address-1 form as a recurring idiom rather than it being a disassembly error.
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** The shipping source has a macro (an assert or a deliberate trap) that writes 8 bytes at address 1 to fault; 200 occurrences argue for a macro rather than hand-written statements.
- **Repro:** `python3 skills/dps2-toolkit/scripts/match.py --repo targets/fate-unlimited-codes-jp try func_001767B0 wip/func_001767B0/attempt-2.c`

### F-1 — [minor / doc-gap] K1 is silent on MWCC tail calls (jr $rN) and function-pointer tables splat names jtbl_*

- **Stage:** Stage E EXECUTE | **Function:** `func_00176BE0` | **Logged:** 2026-09-08T05:07:31Z
- **Observed (fact):** func_00176BE0 is 7 insns ending 'lw $v0,0($v0); jr $v0; nop' with no frame and no jal; splat named the table jtbl_003D66B0 but its contents are .word func_00175390, func_001750B0, ... (asm/data/data_01.data.s:3759-3852), i.e. function pointers, not jump-table labels. 'return jtbl_003D66B0[*cmd](a0,a1,cmd);' matched 100.0 byte-identical on attempt 1.
- **Expected:** K1 section 3 or the section 8 cheat sheet to say that mwccps2 3.0.1 emits a real tail call (jr $rN, no frame) for a return of a call in tail position, and that a splat 'jtbl_' symbol can be a function-pointer table rather than a jump table.
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** The jtbl_ naming comes from spimdisasm's lui/addiu+sll+addu+lw+jr pattern match, which cannot tell a switch jump table from a dispatch table; K1 section 11 documents the jump-table shape but not this collision.
- **Artifact:** `../../wip/func_00176BE0/attempt-1.c` (exists)

### F-2 — [minor / doc-gap] K1 section 6 has no entry for symbol+constant relocation folding as a 98-99 % diff cause

- **Stage:** Stage E EXECUTE | **Function:** `func_001A3800` | **Logged:** 2026-09-08T05:09:46Z
- **Observed (fact):** func_001A3820/3800/37D0: 'D_0051D890.slots[i].unk_0 = v' with slots at struct offset 0xE8 compiled to 'lui v1,%hi(D_0051D890+0xe8); addiu v1,v1,%lo(D_0051D890+0xe8); sw a1,0x0(v1)' — 98.6, three rows. The target has 'lui v1,%hi(D_0051D890); addiu v1,v1,%lo(D_0051D890); sw a1,0xe8(v1)'. Rewriting as '((Ent *)&D_0051D890[i])->unk_E8 = v' with D_0051D890 an array of the 0x18-byte stride type matched 100.0 byte-identical on all three.
- **Expected:** K1 section 6 (what closes a 95-99 % diff) to list relocation folding: when a constant field offset is reachable from the symbol at compile time mwcc folds it into %hi/%lo, so a target that keeps the bare symbol and puts the offset in the load/store operand means the source computed the element address first.
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** The shipping source declared the array at the symbol and reached the field through a pointer of another type (or a union), which is what the cast form reproduces.
- **Repro:** `python3 skills/dps2-toolkit/scripts/match.py --repo targets/fate-unlimited-codes-jp try func_001A3800 wip/func_001A3800/attempt-1.c`

### F-4 — [papercut / operator-drift] cat of config/compiler.json dumped ~350 lines of candidates_tried into the run for two fields

- **Stage:** Stage E EXECUTE | **Logged:** 2026-09-08T05:20:04Z
- **Observed (fact):** 'cat targets/fate-unlimited-codes-jp/config/compiler.json' printed the whole candidates_tried array (over 150 entries) when only compiler_id, flags and compiler_dir were wanted; the compile command was already documented in wip/<fn>/permuter/compile.sh.
- **Expected:** read the two fields (python3 -c json.load, or grep) instead of the whole file.
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** No script prints a compiler summary; the file is the only place the compile command lives, so an operator wanting the command reads all of it.

## Suggested remediation order

Blockers and majors first, then whichever minor/papercut fixes share a root cause with them (fixing one layer often clears several entries — and mis-locating the layer often "fixes" none; see rule 2 of the consumption contract).

## Evidence accounting

Cited artifacts: 1 — 1 present, 0 inside a checkpoint archive, 0 on another filesystem, 0 ephemeral (declared or retired), 0 unexplained. Archives searched: no checkpoint archives in the job folder.

## Machine-readable summary

```json
{
  "job": "2026-09-08-007-match-batch",
  "exported": "2026-09-08T05:22:12Z",
  "build": "mwcps2-3.0.1b151-050317 -O4,p; splat 58.3s; ninja 39 asm + 21 C objects",
  "entry_count": 4,
  "severity_counts": {
    "major": 1,
    "minor": 2,
    "papercut": 1
  },
  "stages": {
    "R": "attested clear",
    "S": "attested clear",
    "E": "4 entries + attested complete",
    "V": "attested clear",
    "X": "attested clear"
  },
  "artifact_accounting": {
    "total": 1,
    "present": 1,
    "archived": 0,
    "other_fs": 0,
    "ephemeral": 0,
    "missing": 0
  },
  "retired_artifacts": [],
  "entries": [
    {
      "id": "F-3",
      "stage": "E",
      "severity": "major",
      "category": "doc-gap",
      "title": "K1 does not name the 'sdr zero,0x1(zero) / sdl zero,0x8(zero)' idiom, which is a real 64-bit store to address 1 and appears ~200 times in the image",
      "function": "func_001767B0"
    },
    {
      "id": "F-1",
      "stage": "E",
      "severity": "minor",
      "category": "doc-gap",
      "title": "K1 is silent on MWCC tail calls (jr $rN) and function-pointer tables splat names jtbl_*",
      "function": "func_00176BE0"
    },
    {
      "id": "F-2",
      "stage": "E",
      "severity": "minor",
      "category": "doc-gap",
      "title": "K1 section 6 has no entry for symbol+constant relocation folding as a 98-99 % diff cause",
      "function": "func_001A3800"
    },
    {
      "id": "F-4",
      "stage": "E",
      "severity": "papercut",
      "category": "operator-drift",
      "title": "cat of config/compiler.json dumped ~350 lines of candidates_tried into the run for two fields"
    }
  ]
}
```
