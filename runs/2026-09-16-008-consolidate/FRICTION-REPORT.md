# Friction Report — 2026-09-16-008-consolidate

**Job folder:** `2026-09-16-008-consolidate`  
**Log:** `friction-log.jsonl` (4 entries; opened 2026-09-16T23:23:04Z, exported 2026-09-16T23:36:12Z)  
**Skills build:** mwcps2-3.0.1b151-050317 -O4,p; splat 50.4s build 16.0s; check OK  
**Severity counts:** major 3, minor 1  

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
| Stage R RESUME | 1 entry + attested complete |
| Stage S SELECT | attested clear |
| Stage E EXECUTE | 3 entries + attested complete |
| Stage V SHIP | attested clear |
| Cross-cutting / environment | attested clear |

## Entries (most severe first)

### F-2 — [major / tool-gap] no xref/string-evidence script for S8

- **Stage:** Stage E EXECUTE | **Tool:** `dps2-toolkit` | **Logged:** 2026-09-16T23:24:22Z
- **Observed (fact):** S8's evidence sources are 'a referenced string, an SDK call pattern, an xref from a named caller, a TCRF fact, a Ghidra hint'. skills/dps2-toolkit/scripts/ has bootstrap, extract_elf, fingerprint, calibrate_compiler, gen_splat_yaml, configure, check_build, select_batch, match, ledger, next_step, progress, git_mount — none of them reports callers, callees or referenced strings for a function. asm/ is 61 MB across 40+ .s files and the 30 matched functions are spread over game_00.s and game_00_1..14.s, so the evidence has to be recovered by ad-hoc grep/parse in the run.
- **Expected:** A toolkit script (e.g. xrefs.py) that, given a function or an address, prints its callers, its callees and the data/string symbols it references, so every consolidate run cites evidence the same way.
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** S8 was specified before any run reached it; the evidence sources were written assuming the S5 Ghidra exports (xrefs.json, strings.json) would exist, and S5 has never been run, leaving S8 with no tooling of its own.
- **Repro:** `ls skills/dps2-toolkit/scripts/`

### F-3 — [major / doctrine-gap] three matched functions were never linked; the promised YAML flip never happens

- **Stage:** Stage E EXECUTE | **Tool:** `ledger.py` | **Logged:** 2026-09-16T23:30:36Z
- **Observed (fact):** Before this run the ledger held 30 matched functions but config/SLPM_551.08.yaml had 27 c subsegments. func_00177B00, func_001990C0 and func_001A4960 carried linked:false and src_path src/main/func_00177B00.c, calibration/func_001990C0/attempt.c, calibration/func_001A4960/attempt.c. Their ledger note reads 'linked=false — segments.json absent at mark time; the YAML flip happens at the first build after segment-map' (ledger.py line 180), but gen_splat_yaml.py line 166 selects only functions with linked:true and nothing sets linked:true after the fact, so segment-map (run 2026-09-05-005) and five later builds left them out. Re-running ledger.py mark on all three in this run recompiled them at objdiff 100 byte-identical and set linked:true.
- **Expected:** A function recorded as matched is built from its C in every build after the link regime is full and segments.json exists; or the note says the operator must re-mark it.
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** The note was written as a promise about a mechanism that was never implemented: no script reconciles linked:false records once segments.json appears, so a function marked before S4 stays out of the build silently and its C is never re-verified against the image.
- **Repro:** `python3 skills/dps2-toolkit/scripts/ledger.py --repo targets/fate-unlimited-codes-jp stats; grep -c ', c, ' targets/fate-unlimited-codes-jp/config/SLPM_551.08.yaml`

### F-4 — [major / tool-gap] ledger.py has no rename command, so S8 cannot perform a rename at all

- **Stage:** Stage E EXECUTE | **Tool:** `ledger.py` | **Logged:** 2026-09-16T23:32:55Z
- **Observed (fact):** S8's exit condition is a rename table and its procedure says to rename 'in src/, config/symbol_addrs.txt and the ledger name'. ledger.py --help lists mark, unmark, set-status, note, stats, import-functions — there is no rename. K2 says ledger/functions.jsonl is never hand-edited, so the ledger half of a rename has no legal writer. config/symbol_addrs.txt holds 4 lines, all comments: no name has ever been recorded there either.
- **Expected:** ledger.py rename <old> <new> --evidence "..." that rewrites the ledger name, the src/<segment>/<fn>.c file name and its function name, and appends the symbol_addrs.txt line, so a consolidate run can carry out the rename it is asked to table.
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** Renaming was specified as doctrine (K3 S8, dps2-step S8) without a corresponding script; every earlier run was S0-S6, so no run had reached the point of needing one.
- **Repro:** `python3 skills/dps2-toolkit/scripts/ledger.py --repo targets/fate-unlimited-codes-jp --help`

### F-1 — [minor / doctrine-gap] external MatchRunner lane left the tree uncommitted

- **Stage:** Stage R RESUME | **Logged:** 2026-09-16T23:23:04Z
- **Observed (fact):** git status at RESUME: 6 modified tracked files (README.md, config/SLPM_551.08.yaml, config/splat-yaml.json, ledger/functions.jsonl, progress.json, state/next-step.json) and 11 untracked paths (bench/, ledger/batch.json, runs/runner/, state/runner-queue.jsonl, state/runner-steps.jsonl, 6 src/game_00/*.c, wip/*); state/runner-steps.jsonl records runs 2026-09-11-001 and -002 (4 functions matched by MatchRunner 0.3.0, zai:glm-5.3) with no entry in state/steps.jsonl and no commit since c03fcba (2026-09-08).
- **Expected:** Every change to the target repo reaches a commit; the deliverable set of the lane that made it says who made it.
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** The external MatchRunner writes ledger and src changes but has no SHIP stage, so its work sits in the working tree until the next dps2-step run sweeps it into an unrelated commit.
- **Repro:** `bash skills/dps2-toolkit/scripts/git_mount.sh targets/fate-unlimited-codes-jp status --short`

## Suggested remediation order

Blockers and majors first, then whichever minor/papercut fixes share a root cause with them (fixing one layer often clears several entries — and mis-locating the layer often "fixes" none; see rule 2 of the consumption contract).

## Evidence accounting

Cited artifacts: 0 — 0 present, 0 inside a checkpoint archive, 0 on another filesystem, 0 ephemeral (declared or retired), 0 unexplained. Archives searched: no checkpoint archives in the job folder.

## Machine-readable summary

```json
{
  "job": "2026-09-16-008-consolidate",
  "exported": "2026-09-16T23:36:12Z",
  "build": "mwcps2-3.0.1b151-050317 -O4,p; splat 50.4s build 16.0s; check OK",
  "entry_count": 4,
  "severity_counts": {
    "major": 3,
    "minor": 1
  },
  "stages": {
    "R": "1 entry + attested complete",
    "S": "attested clear",
    "E": "3 entries + attested complete",
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
      "id": "F-2",
      "stage": "E",
      "severity": "major",
      "category": "tool-gap",
      "title": "no xref/string-evidence script for S8",
      "tool": "dps2-toolkit"
    },
    {
      "id": "F-3",
      "stage": "E",
      "severity": "major",
      "category": "doctrine-gap",
      "title": "three matched functions were never linked; the promised YAML flip never happens",
      "tool": "ledger.py"
    },
    {
      "id": "F-4",
      "stage": "E",
      "severity": "major",
      "category": "tool-gap",
      "title": "ledger.py has no rename command, so S8 cannot perform a rename at all",
      "tool": "ledger.py"
    },
    {
      "id": "F-1",
      "stage": "R",
      "severity": "minor",
      "category": "doctrine-gap",
      "title": "external MatchRunner lane left the tree uncommitted"
    }
  ]
}
```
