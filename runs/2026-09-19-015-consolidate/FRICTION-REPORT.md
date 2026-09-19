# Friction Report — 2026-09-19-015-consolidate

**Job folder:** `2026-09-19-015-consolidate`  
**Log:** `friction-log.jsonl` (1 entry; opened 2026-09-19T08:31:05Z, exported 2026-09-19T08:40:06Z)  
**Skills build:** mwcps2-3.0.1b151-050317  
**Severity counts:** minor 1  

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
| Stage E EXECUTE | 1 entry + attested complete |
| Stage V SHIP | attested clear |
| Cross-cutting / environment | attested clear |

## Entries (most severe first)

### F-1 — [minor / doctrine-gap] external lane emits a fresh local typedef per function, so duplicates accumulate until S8

- **Stage:** Stage E EXECUTE | **Tool:** `lint_c.py` | **Logged:** 2026-09-19T08:37:39Z
- **Observed (fact):** This consolidate found ten byte-identical copies of one four-float typedef (func_0016CFD0, func_0016D000, func_0016D070, func_0016D0B0, func_0016E8F0, func_0016E9E0, func_0016F680, func_0016F6D0, func_00175070, func_00175080), and the name 'Vec' carrying two different layouts across files: four floats in those ten, three floats in func_001B6F00. Separately func_001AB770 and func_001BB220 described the same object with different local structs and disagreed on the type of +0x2508 (int store vs dereferenced pointer). lint_c.py reported 3 byte-offset errors, all in runner-origin C (func_001BB220, func_001BB3C0, func_001BB6D0).
- **Expected:** A function whose object already has a shared header in include/ reuses that header, so S8 merges few duplicates rather than ten copies of one type.
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** The MatchRunner matches one function at a time with no cross-function view and no instruction to read include/, so each match necessarily invents a file-local typedef; the duplication is structural to the lane, not a defect in any one batch. A runner prompt that listed the existing headers, or an S8-side script that reported identical typedef bodies across files, would cut the merge work.
- **Repro:** `grep -l 'typedef struct Vec' src/game_00/*.c`

## Suggested remediation order

Blockers and majors first, then whichever minor/papercut fixes share a root cause with them (fixing one layer often clears several entries — and mis-locating the layer often "fixes" none; see rule 2 of the consumption contract).

## Evidence accounting

Cited artifacts: 0 — 0 present, 0 inside a checkpoint archive, 0 on another filesystem, 0 ephemeral (declared or retired), 0 unexplained. Archives searched: no checkpoint archives in the job folder.

## Machine-readable summary

```json
{
  "job": "2026-09-19-015-consolidate",
  "exported": "2026-09-19T08:40:06Z",
  "build": "mwcps2-3.0.1b151-050317",
  "entry_count": 1,
  "severity_counts": {
    "minor": 1
  },
  "stages": {
    "R": "attested clear",
    "S": "attested clear",
    "E": "1 entry + attested complete",
    "V": "attested clear",
    "X": "attested clear"
  },
  "artifact_accounting": {
    "total": 0,
    "present": 0,
    "archived": 0,
    "other_fs": 0,
    "ephemeral": 0,
    "missing": 0
  },
  "retired_artifacts": [],
  "entries": [
    {
      "id": "F-1",
      "stage": "E",
      "severity": "minor",
      "category": "doctrine-gap",
      "title": "external lane emits a fresh local typedef per function, so duplicates accumulate until S8",
      "tool": "lint_c.py"
    }
  ]
}
```
