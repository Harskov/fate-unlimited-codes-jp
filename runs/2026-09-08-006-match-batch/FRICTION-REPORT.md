# Friction Report — 2026-09-08-006-match-batch

**Job folder:** `2026-09-08-006-match-batch`  
**Log:** `friction-log.jsonl` (7 entries; opened 2026-09-08T04:05:45Z, exported 2026-09-08T04:33:06Z)  
**Skills build:** mwcps2-3.0.1b151-050317 -O4,p / splat64 / binutils-deb 2.35.2  
**Severity counts:** blocker 3, major 2, minor 2  

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
| Stage E EXECUTE | 5 entries + attested complete |
| Stage V SHIP | 2 entries + attested complete |
| Cross-cutting / environment | attested clear |

## Entries (most severe first)

### F-3 — [blocker / tool-gap] match.py permute cannot run: decomp-permuter looks for mips-linux-gnu-objdump, the manifest ships mipsel-linux-gnu-objdump

- **Stage:** Stage E EXECUTE | **Function:** `func_001A4870` | **Tool:** `match.py` | **Logged:** 2026-09-08T04:11:41Z
- **Observed (fact):** match.py --repo targets/fate-unlimited-codes-jp permute func_001A4870 --timeout 120 exits rc=1 with 'Exception: Could not find any objdump executables: [mips-linux-gnu-objdump, mips64-linux-gnu-objdump, mips64-elf-objdump] for mips' from tools/decomp-permuter/src/objdump.py:701. tools/manifest.json assembler.objdump is 'tools/binutils-deb/usr/bin/mipsel-linux-gnu-objdump' and that file exists; tools/binutils-decompals/mips-ps2-decompals-objdump also exists. Neither name is in the permuter's search list.
- **Expected:** match.py permute to put the manifest's objdump on PATH under a name decomp-permuter accepts, so the permuter lane runs on the first function that reaches the attempt cap.
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** match.py permute execs the permuter without exporting a PATH or MIPS_OBJDUMP for it; the toolkit never exercised the permuter lane before this run (0 permute calls in state/steps.jsonl through run 005). UNVERIFIED.
- **Repro:** `python3 skills/dps2-toolkit/scripts/match.py --repo targets/fate-unlimited-codes-jp permute func_001A4870 --timeout 120`

### F-4 — [blocker / tool-bug] match.py permute writes compile.sh with unquoted paths; the project folder name breaks it

- **Stage:** Stage E EXECUTE | **Function:** `func_001A4870` | **Tool:** `match.py` | **Logged:** 2026-09-08T04:12:11Z
- **Observed (fact):** wip/func_001A4870/permuter/compile.sh line 5 is 'exec /sessions/.../mnt/Decompilation Assistant (PS2)/targets/.../tools/wibo ... ' with no quotes; bash reports 'syntax error near unexpected token ((' and the permuter answers 'Unable to compile .../permuter/base.c'. The same run's match.py try compiles the same C fine, so only the generated script is affected. Both the space and the parentheses in 'Decompilation Assistant (PS2)' are unquoted.
- **Expected:** compile.sh to quote every interpolated path, as K6 requires of every command on the mount.
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** The compile.sh template in match.py interpolates the wibo, compiler and include paths with plain f-string substitution instead of shlex.quote. UNVERIFIED.
- **Artifact:** `../../wip/func_001A4870/permuter/compile.sh` (exists)

### F-7 — [blocker / tool-bug] linking a matched function whose end is not 16-byte aligned pads the image and turns check.json red

- **Stage:** Stage V SHIP | **Tool:** `configure.py` | **Logged:** 2026-09-08T04:31:23Z
- **Observed (fact):** After gen_splat_yaml.py --from-segments --force emitted 10 c subsegments and configure.py --build linked them, check_build.py went RED: first diff 0x0010026C, 2981167 differing bytes, rebuilt image 0x00100000-0x00509190 vs original 0x00100000-0x00509100 (144 bytes longer). readelf -S shows sh_addralign 16 on .text of both the mwccps2 objects (build/src/game_00/func_001775A0.c.o) and the gas objects (build/asm/game_00_2.s.o), so ld aligns every subsegment boundary to 16. func_001775A0 is 120 bytes at 0x001775A0, so the following asm subsegment was pushed from 0x00177618 to 0x00177620 and nm put func_00178060 at 0x00178070 instead of 0x00178060; the shift cascades through the rest of the image and every %hi/%lo reference into the shifted region differs, which is why segments as early as sdk_dma_graph show diffs. Setting the YAML's subalign to null did not help (input-section alignment, not the script's ALIGN, is what pads). 9 of the 10 functions in this batch have a non-16-aligned end; only func_00176C50 (16 bytes) does not.
- **Expected:** A matched function links at its own address whatever its size; check.json stays green.
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** VERIFIED BY EXPERIMENT, not a guess: adding SUBALIGN(4) to the .main output section of build/SLPM_551.08.ld and relinking (configure.py --no-split --build) put all 10 functions at their target addresses (nm: 00176c50, 001775a0, 00178060, 001990b0, 00199cf0, 001a3e30, 001a3ea0, 001a47a0, 001a49a0, 001a5450). splat writes the .ld from the YAML and exposes no SUBALIGN option, so the durable fix is one line in configure.py post-processing the .ld after splat (or objcopy --set-section-alignment .text=4 on every object). The .ld was restored afterwards so check.json records the real, reproducible state.
- **Repro:** `python3 skills/dps2-toolkit/scripts/gen_splat_yaml.py --repo targets/fate-unlimited-codes-jp --from-segments --force && python3 skills/dps2-toolkit/scripts/configure.py --repo targets/fate-unlimited-codes-jp --build && python3 skills/dps2-toolkit/scripts/check_build.py --repo targets/fate-unlimited-codes-jp`

### F-2 — [major / toolchain-drift] pinned build emits branch-likely dispatch with hoisted loads where the target emits beq + nop

- **Stage:** Stage E EXECUTE | **Function:** `func_001A4870` | **Tool:** `match.py` | **Logged:** 2026-09-08T04:11:15Z
- **Observed (fact):** func_001A4870 (switch on 5 sparse cases): target rows 08-19 are 'beq a1,v0,<case>' + 'nop' five times plus an explicit 'b <exit>; nop' default block; the pinned mwcps2-3.0.1b151-050317 -O4,p emits 'beql a1,v0,<case>' with the case body's first lwc1 in the annulled slot and no default block. 196 bytes vs target 228. Three C shapes (attempt-1/2/3: switch with break, switch with per-case temporaries and an explicit default) all produced 76.49123.
- **Expected:** The same branch-likely usage as the shipping compiler, as on the 3 byte-identical calibration leaves.
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** The same unpublished-build gap recorded as calibrate friction F-2 (run 2026-09-05-003), here in the opposite direction: b151 uses MORE branch-likely than the shipping build on switch dispatch chains. UNVERIFIED.
- **Artifact:** `../../wip/func_001A4870/attempt-3.c` (exists)

### F-6 — [major / doc-gap] SHIP's 'configure.py --no-split --build' leaves a match batch's C out of the build, so check.json is a false signal for S6

- **Stage:** Stage V SHIP | **Tool:** `configure.py` | **Logged:** 2026-09-08T04:24:09Z
- **Observed (fact):** After marking 10 functions (linked=true, src/game_00/*.c present), 'python3 skills/dps2-toolkit/scripts/configure.py --repo targets/fate-unlimited-codes-jp --no-split --build' printed 'ninja: 22 asm object(s), 0 C object(s)'. config/SLPM_551.08.yaml still had only asm subsegments. gen_splat_yaml.py:166 is what turns a matched linked function into a c subsegment, and nothing in the S6 procedure or the SHIP block calls it; --no-split also skips the splat that the new YAML needs.
- **Expected:** The S6 procedure and the SHIP block to run 'gen_splat_yaml.py --from-segments --force' then 'configure.py --build' (with split) then 'check_build.py', so the batch's C is actually linked before the check is quoted.
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** The SHIP block was written for steps that do not add C (S4, S9) and S6 inherited it; the S6 text says 'configure.py --build' but the lifecycle block, which is what a run follows, says '--no-split'. UNVERIFIED.
- **Repro:** `python3 skills/dps2-toolkit/scripts/configure.py --repo targets/fate-unlimited-codes-jp --no-split --build`

### F-1 — [minor / doc-gap] extern scalar compiles to %gp_rel where the target uses %hi/%lo; K1 gives only the reverse direction

- **Stage:** Stage E EXECUTE | **Function:** `func_001A4870` | **Tool:** `match.py` | **Logged:** 2026-09-08T04:11:15Z
- **Observed (fact):** func_001A4870 attempt-1 with 'extern int D_0051D894;' compiled to 'lw v0, %gp_rel(D_0051D894)(gp)'; target row 0000 is 'lui v0, %hi(D_0051D894)' + 'lw v0, %lo(D_0051D894)(v0)'. Score 61.0. attempt-2 changed the declaration to 'extern int D_0051D894[];' (incomplete array type) and the reference to D_0051D894[0]; the two rows then matched and the score rose to 76.5. Pinned flags are '-O4,p' with no -sdatathreshold (config/compiler.json).
- **Expected:** K1 section 3 (Small data) to say how to force absolute addressing from the C side; it documents only the opposite case ('try -sdatathreshold 0 when a %gp_rel access in the target is an absolute lui/lw in the compiled object').
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** The compiler's default small-data threshold (8) puts any complete extern object of 4 bytes into .sdata; declaring the symbol with an incomplete array type hides its size and forces absolute addressing. The shipping game most likely declared this symbol inside a larger object.
- **Repro:** `python3 skills/dps2-toolkit/scripts/match.py --repo targets/fate-unlimited-codes-jp try func_001A4870 wip/func_001A4870/attempt-1.c`

### F-5 — [minor / environment] device_bash hit the call time cap twice while running the permuter by hand

- **Stage:** Stage E EXECUTE | **Logged:** 2026-09-08T04:21:52Z
- **Observed (fact):** Two calls were killed by the bridge at ~120 s: 'timeout 150 tools/venv/bin/python tools/decomp-permuter/permuter.py <dir> -j 2 --stop-on-zero' returned 'Command timed out after 120000ms', and a second run with 'timeout 85' plus output redirection completed inside the cap (rc=124 from timeout, log intact). The observed cap is ~120 s, not the ~180 s that dps2-step's preamble implies.
- **Expected:** Either a documented 120 s budget for device_bash, or match.py permute owning the permuter run so no hand-run is needed (see F-3, F-4).
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** The bridge's per-call limit on this device is 120 s; the ~3-minute figure in dps2-step and K6 is the upper bound of the tool's schema, not this device's. UNVERIFIED.

## Suggested remediation order

Blockers and majors first, then whichever minor/papercut fixes share a root cause with them (fixing one layer often clears several entries — and mis-locating the layer often "fixes" none; see rule 2 of the consumption contract).

## Evidence accounting

Cited artifacts: 2 — 2 present, 0 inside a checkpoint archive, 0 on another filesystem, 0 ephemeral (declared or retired), 0 unexplained. Archives searched: no checkpoint archives in the job folder.

## Machine-readable summary

```json
{
  "job": "2026-09-08-006-match-batch",
  "exported": "2026-09-08T04:33:06Z",
  "build": "mwcps2-3.0.1b151-050317 -O4,p / splat64 / binutils-deb 2.35.2",
  "entry_count": 7,
  "severity_counts": {
    "blocker": 3,
    "major": 2,
    "minor": 2
  },
  "stages": {
    "R": "attested clear",
    "S": "attested clear",
    "E": "5 entries + attested complete",
    "V": "2 entries + attested complete",
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
      "id": "F-3",
      "stage": "E",
      "severity": "blocker",
      "category": "tool-gap",
      "title": "match.py permute cannot run: decomp-permuter looks for mips-linux-gnu-objdump, the manifest ships mipsel-linux-gnu-objdump",
      "tool": "match.py",
      "function": "func_001A4870"
    },
    {
      "id": "F-4",
      "stage": "E",
      "severity": "blocker",
      "category": "tool-bug",
      "title": "match.py permute writes compile.sh with unquoted paths; the project folder name breaks it",
      "tool": "match.py",
      "function": "func_001A4870"
    },
    {
      "id": "F-7",
      "stage": "V",
      "severity": "blocker",
      "category": "tool-bug",
      "title": "linking a matched function whose end is not 16-byte aligned pads the image and turns check.json red",
      "tool": "configure.py"
    },
    {
      "id": "F-2",
      "stage": "E",
      "severity": "major",
      "category": "toolchain-drift",
      "title": "pinned build emits branch-likely dispatch with hoisted loads where the target emits beq + nop",
      "tool": "match.py",
      "function": "func_001A4870"
    },
    {
      "id": "F-6",
      "stage": "V",
      "severity": "major",
      "category": "doc-gap",
      "title": "SHIP's 'configure.py --no-split --build' leaves a match batch's C out of the build, so check.json is a false signal for S6",
      "tool": "configure.py"
    },
    {
      "id": "F-1",
      "stage": "E",
      "severity": "minor",
      "category": "doc-gap",
      "title": "extern scalar compiles to %gp_rel where the target uses %hi/%lo; K1 gives only the reverse direction",
      "tool": "match.py",
      "function": "func_001A4870"
    },
    {
      "id": "F-5",
      "stage": "E",
      "severity": "minor",
      "category": "environment",
      "title": "device_bash hit the call time cap twice while running the permuter by hand"
    }
  ]
}
```
