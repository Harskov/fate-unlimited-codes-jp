# Friction Report — 2026-09-05-003-calibrate

**Job folder:** `2026-09-05-003-calibrate`  
**Log:** `friction-log.jsonl` (2 entries; opened 2026-09-05T19:59:08Z, exported 2026-09-05T20:22:19Z)  
**Skills build:** v1-build-2026-09-05  
**Severity counts:** major 1, minor 1  

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
| Stage E EXECUTE | 2 entries + attested complete |
| Stage V SHIP | attested clear |
| Cross-cutting / environment | attested clear |

## Entries (most severe first)

### F-1 — [major / toolchain-drift] ASSUMPTION A1: the three default compiler candidates (2.3.3, 2.4-001213, 3.0-011126) byte-match 0/8 calibration functions; the image's idioms (sd $ra, daddu moves, 22k branch-likely) match MW 3.0-line output, not 2.4-001213 (paddub moves, sq $ra)

- **Stage:** Stage E EXECUTE | **Tool:** `calibrate_compiler.py` | **Logged:** 2026-09-05T20:09:03Z
- **Observed (fact):** calibration table after 552 cells: best objdiff scores 79.2 (3.0-011126 -O3,p) / 67.1; byte-identical 0/8 for every cell. fingerprint.py totals: mw_move(paddub rd,zero,zero)=0, gcc_move(daddu)=58677, branch_likely=22461, sq_save=12091, sd/sw ra saves 5560 vs sq ra 3 (handwritten). mwccps2 2.4-001213 -O4 emits paddub moves and sq $ra; 3.0-011126 emits daddu moves and sd $ra but no branch-likely on the test functions.
- **Expected:** mwcps2-2.4-001213 byte-matches >= 3 of the leaf candidates (design A1)
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** The shipping compiler is a later 3.0.x build (the .comment string 2.4.1.01 may name the toolchain package, not the code generator) or the game code was scheduled with an option the presets do not carry. Sweep every published mwcps2 build with the -O ladder; unverified until the sweep runs.
- **Artifact:** `calibration-table.md` (exists)
- **Repro:** `python3 skills/dps2-toolkit/scripts/fingerprint.py --repo targets/fate-unlimited-codes-jp`

### F-2 — [minor / evidence-gap] Calibration pin is a tie broken by the operator: 3.0.1b145 and 3.0.1b151 give identical results (3/8 byte-identical) at -O3,p/-O3,s/-O4,p/-O4,s; no cell distinguishes the four flag sets on leaf functions

- **Stage:** Stage E EXECUTE | **Tool:** `calibrate_compiler.py` | **Logged:** 2026-09-05T20:21:28Z
- **Observed (fact):** calibration-table.md: 1176 cells over 21 compilers x 7 flag sets x 8 functions; b145 and b151 tie at 3/8 (func_00177B00, func_001990C0, func_001A4960); every later build (b198/b205/b210) drops to 1/8. Non-matching cells differ from the target by annulled-delay-slot branch-likely scheduling (func_001175A8: target bnezl+sw, compiled beqz+nop+sw) that no available build or flag reproduced (-opt schedule, -O3/-O4 p/s, -fp single, -inline auto tried). Pinned b151 -O4,p by override (later build; -O4,p is the flag of the only 3.0.1b-line decomp.me preset).
- **Expected:** one (compiler, flags) cell strictly ahead of the others
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** The shipping compiler is a 3.0.1b build between b151 (2005-03) and b198 (2005-10) or a customised build; decomp.me does not publish it. A future calibrate step with non-leaf candidates (calls, loops with data) can separate -O3 from -O4 and p from s.
- **Artifact:** `calibration-table.md` (exists)
- **Repro:** `python3 skills/dps2-toolkit/scripts/calibrate_compiler.py --repo targets/fate-unlimited-codes-jp run --flagsets sweep`

## Suggested remediation order

Blockers and majors first, then whichever minor/papercut fixes share a root cause with them (fixing one layer often clears several entries — and mis-locating the layer often "fixes" none; see rule 2 of the consumption contract).

## Evidence accounting

Cited artifacts: 2 — 2 present, 0 inside a checkpoint archive, 0 on another filesystem, 0 ephemeral (declared or retired), 0 unexplained. Archives searched: no checkpoint archives in the job folder.

## Machine-readable summary

```json
{
  "job": "2026-09-05-003-calibrate",
  "exported": "2026-09-05T20:22:19Z",
  "build": "v1-build-2026-09-05",
  "entry_count": 2,
  "severity_counts": {
    "major": 1,
    "minor": 1
  },
  "stages": {
    "R": "attested clear",
    "S": "attested clear",
    "E": "2 entries + attested complete",
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
      "id": "F-1",
      "stage": "E",
      "severity": "major",
      "category": "toolchain-drift",
      "title": "ASSUMPTION A1: the three default compiler candidates (2.3.3, 2.4-001213, 3.0-011126) byte-match 0/8 calibration functions; the image's idioms (sd $ra, daddu moves, 22k branch-likely) match MW 3.0-line output, not 2.4-001213 (paddub moves, sq $ra)",
      "tool": "calibrate_compiler.py"
    },
    {
      "id": "F-2",
      "stage": "E",
      "severity": "minor",
      "category": "evidence-gap",
      "title": "Calibration pin is a tie broken by the operator: 3.0.1b145 and 3.0.1b151 give identical results (3/8 byte-identical) at -O3,p/-O3,s/-O4,p/-O4,s; no cell distinguishes the four flag sets on leaf functions",
      "tool": "calibrate_compiler.py"
    }
  ]
}
```
