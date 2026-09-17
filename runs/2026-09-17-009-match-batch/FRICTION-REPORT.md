# Friction Report — 2026-09-17-009-match-batch

**Job folder:** `2026-09-17-009-match-batch`  
**Log:** `friction-log.jsonl` (3 entries; opened 2026-09-17T04:07:28Z, exported 2026-09-17T04:17:11Z)  
**Skills build:** mwcps2-3.0.1b151-050317 -O4,p; splat+ninja; check OK  
**Severity counts:** major 2, papercut 1  

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
| Stage E EXECUTE | 3 entries + attested complete |
| Stage V SHIP | attested clear |
| Cross-cutting / environment | attested clear |

## Entries (most severe first)

### F-2 — [major / false-signal] target.o keeps unresolved PC16 relocations on jlabel branch targets, so objdiff rows show false branch diffs

- **Stage:** Stage E EXECUTE | **Function:** `func_00176140` | **Tool:** `match.py` | **Logged:** 2026-09-17T04:12:17Z
- **Observed (fact):** wip/func_00176140/target.o.text.bin holds 'ffff2010' at +0x08 and 'ffff0010' at +0x34,0x44,0x54,0x64,0x74,0x84,0x94 where target.s quotes the ELF words 27002010 and 1C/18/14/10/0C/08/04-000010; the compiled attempt-1.o.text.bin carries exactly the ELF words. objdiff reported 6 of its 8 rows as 'target: b .L001761E8 / yours: b 0xa8' style differences that are not differences in the ELF.
- **Expected:** match.py prepare assembles target.s into the baseline objdiff compares against; branches to .L/jlabel labels inside the same cut function should assemble to their final PC-relative encodings, as the ELF has them.
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** the jlabel macro in include/macro.inc marks the jump-table targets global, so ee-as cannot resolve the branches locally and emits R_MIPS_PC16 relocations with 0xffff placeholders instead.
- **Artifact:** `../../wip/func_00176140/target.o.text.bin` (exists)
- **Repro:** `python3 skills/dps2-toolkit/scripts/match.py --repo targets/fate-unlimited-codes-jp try func_00176140 wip/func_00176140/attempt-1.c; xxd -g4 targets/fate-unlimited-codes-jp/wip/func_00176140/target.o.text.bin | head -12`

### F-3 — [major / doctrine-gap] no procedure for a dense switch whose jump table lives in a foreign rodata segment

- **Stage:** Stage E EXECUTE | **Function:** `func_00176140` | **Logged:** 2026-09-17T04:12:27Z
- **Observed (fact):** func_00176140 is a dense switch on kind 34..42 dispatched through jtbl_004FEA50 at 0x004FEA50, which splat emits into asm/data/rodata_str.rodata.s. The C reproduces the whole instruction stream (attempt-1.o.text.bin equals the ELF words quoted in target.s) but mwcc generates its own local table '@16' in the object's .rodata, so the two lui/addiu rows carry different relocation symbols and objdiff stops at 99.77.
- **Expected:** dps2-step S6 and K1 section 3 describe jtbl_* dispatch tables of .word func_* (a function-pointer table, written as an indexed call) but say nothing about a jtbl_* of jlabel targets, which is a real compiler-generated switch table and cannot be referenced from C.
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** closing this needs the rodata region holding jtbl_004FEA50 to be produced by this translation unit, i.e. an S7 data-migrate of that region ordered so the compiler's own table lands at 0x004FEA50; until then such functions are parked at the score the relocation difference allows.
- **Repro:** `python3 skills/dps2-toolkit/scripts/match.py --repo targets/fate-unlimited-codes-jp try func_00176140 wip/func_00176140/attempt-1.c`

### F-1 — [papercut / doc-gap] three-operand mult rs/rt order not covered by K1

- **Stage:** Stage E EXECUTE | **Function:** `func_001A3600` | **Logged:** 2026-09-17T04:09:39Z
- **Observed (fact):** attempt-2 and attempt-3 both scored 99.75 with the single row '0070 target: mult v1, v0, v1 / yours: mult v1, v1, v0'; writing the product inline as either '(base + diff/step) * diff' or 'diff * (base + diff/step)' gave the same encoding. attempt-4 assigned the quotient sum to its own local ('n = base + diff/step; return n * diff / 10 + 30000;') and scored 100.0 byte-identical.
- **Expected:** K1 section 6 lists what closes a 95-99% diff; nothing there covers the rs/rt operand order of the R5900 three-operand mult.
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** mwcc canonicalises the operands of a mult written as one expression and takes the order from the temporaries when each factor is a named local; a product whose left factor is a separate local becomes rs.
- **Artifact:** `../../wip/func_001A3600/attempt-4.c` (exists)
- **Repro:** `python3 skills/dps2-toolkit/scripts/match.py --repo targets/fate-unlimited-codes-jp try func_001A3600 wip/func_001A3600/attempt-3.c`

## Suggested remediation order

Blockers and majors first, then whichever minor/papercut fixes share a root cause with them (fixing one layer often clears several entries — and mis-locating the layer often "fixes" none; see rule 2 of the consumption contract).

## Evidence accounting

Cited artifacts: 2 — 2 present, 0 inside a checkpoint archive, 0 on another filesystem, 0 ephemeral (declared or retired), 0 unexplained. Archives searched: no checkpoint archives in the job folder.

## Machine-readable summary

```json
{
  "job": "2026-09-17-009-match-batch",
  "exported": "2026-09-17T04:17:11Z",
  "build": "mwcps2-3.0.1b151-050317 -O4,p; splat+ninja; check OK",
  "entry_count": 3,
  "severity_counts": {
    "major": 2,
    "papercut": 1
  },
  "stages": {
    "R": "attested clear",
    "S": "attested clear",
    "E": "3 entries + attested complete",
    "V": "attested clear",
    "X": "attested clear"
  },
  "artifact_accounting": {
    "total": 2,
    "present": 2,
    "archived": 0,
    "other_fs": 0,
    "ephemeral": 0,
    "missing": 0
  },
  "retired_artifacts": [],
  "entries": [
    {
      "id": "F-2",
      "stage": "E",
      "severity": "major",
      "category": "false-signal",
      "title": "target.o keeps unresolved PC16 relocations on jlabel branch targets, so objdiff rows show false branch diffs",
      "tool": "match.py",
      "function": "func_00176140"
    },
    {
      "id": "F-3",
      "stage": "E",
      "severity": "major",
      "category": "doctrine-gap",
      "title": "no procedure for a dense switch whose jump table lives in a foreign rodata segment",
      "function": "func_00176140"
    },
    {
      "id": "F-1",
      "stage": "E",
      "severity": "papercut",
      "category": "doc-gap",
      "title": "three-operand mult rs/rt order not covered by K1",
      "function": "func_001A3600"
    }
  ]
}
```
