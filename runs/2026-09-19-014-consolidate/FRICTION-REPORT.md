# Friction Report — 2026-09-19-014-consolidate

**Job folder:** `2026-09-19-014-consolidate`  
**Log:** `friction-log.jsonl` (3 entries; opened 2026-09-19T05:59:56Z, exported 2026-09-19T06:21:35Z)  
**Skills build:** dsstep ladder + S8 consolidate 2026-09-19  
**Severity counts:** major 1, minor 2  

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
| Stage E EXECUTE | 2 entries + attested complete |
| Stage V SHIP | attested clear |
| Cross-cutting / environment | attested clear |

## Entries (most severe first)

### F-2 — [major / tool-bug] naming census read MANIFEST.json for the Ghidra hints and matched them by name, so it always reported ghidra 0

- **Stage:** Stage E EXECUTE | **Tool:** `xrefs.py` | **Logged:** 2026-09-19T06:03:20Z
- **Observed (fact):** xrefs.py --naming-census printed 'ghidra 0' on a target whose S5 export is on disk (reference/ghidra/functions.json, 891 KB, 7263 functions; xrefs.json 17 MB). naming_census() read reference/ghidra/MANIFEST.json and iterated man.get('functions'); that file has keys step/target/elf/.../counts/exports/use and no 'functions' key, so the hint dict was always empty. It then tested 'any(n in ghidra for n in names)' — our names are func_<addr>, Ghidra's are FUN_<addr> and its recovered names are neither, so the test could not match even with the dict populated. Corrected census on the same data: 71 recovered names, all 71 on a ledger function, 59 renameable, 12 blocked by a duplicate name.
- **Expected:** The census reports the naming evidence the S5 export actually contains, keyed by address.
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** naming_census was written in remediation 12 against the run-008 state, where no target had run S5, so the MANIFEST-shaped reader was never exercised against a real export. The 0 it printed was read as 'no Ghidra evidence exists' and the doctrine's fallback is 'propose S5 ghidra-hints' — which had already run, so the proposal would have looped.
- **Artifact:** `../../reference/naming-census.json` (exists)
- **Repro:** `python3 skills/dps2-toolkit/scripts/xrefs.py --repo targets/fate-unlimited-codes-jp --naming-census`

### F-1 — [minor / doctrine-gap] out-of-run change to config/policy.json found uncommitted at RESUME

- **Stage:** Stage R RESUME | **Logged:** 2026-09-19T05:59:56Z
- **Observed (fact):** git status at RESUME showed ' M config/policy.json' on both targets, changed outside any run (DeepSeek runner ladder + usd_cap_per_function 0.25->2.5, usd_cap_per_queue 10->50). git_sync.sh pull refuses a dirty tree (exit 2), so the pull could not run until it was committed. Committed as its own commit 65e146f 'config: DeepSeek runner ladder and raised cost caps for the external lane'.
- **Expected:** dps2-step RESUME has a rule for one kind of out-of-run change — uncommitted runner batches, committed first as their own commit — and none for an out-of-run edit to config/ or to the external lane's own code under _external/.
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** The external MatchRunner lane was specified as writing only ledger/state/wip/runs paths, so its configuration living in the target's config/policy.json was not considered as a thing that changes between runs. The runner-batch rule generalises: any out-of-run change to a tracked file is committed as its own commit at RESUME, before the pull, so the tree a run starts from is the tree it reads.
- **Repro:** `bash skills/dps2-toolkit/scripts/git_sync.sh targets/fate-unlimited-codes-jp pull`

### F-3 — [minor / tool-gap] rename is O(all source files) per call and has no batch mode, so a 59-rename library pass costs ~12 minutes

- **Stage:** Stage E EXECUTE | **Tool:** `ledger.py` | **Logged:** 2026-09-19T06:06:56Z
- **Observed (fact):** ledger.py rename --dry-run reports 'text replace in up to 1421 file(s) under src/, include/, wip/, calibration/' for every single rename. Measured in this run: 12 renames in 149 s, ~12.4 s each; the full 59-candidate SDK stub pass needs ~12 min of wall clock and 5 device_bash calls against the 180 s cap, with a resume file to survive the cap.
- **Expected:** A pass that renames N functions from one evidence source scans the tree once, not N times.
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** rename was designed for the handful of renames an evidence-by-evidence S8 produces, where one scan per rename is invisible. The Ghidra library-stub pass is the first bulk source of names, and it makes the per-call scan the dominant cost. A 'rename --from <jsonl of old,new,evidence>' that applies every pair in one pass over the tree would turn 12 min into seconds.
- **Repro:** `python3 skills/dps2-toolkit/scripts/ledger.py --repo targets/fate-unlimited-codes-jp rename func_00102E60 SetGsCrt --dry-run --evidence x`

## Suggested remediation order

Blockers and majors first, then whichever minor/papercut fixes share a root cause with them (fixing one layer often clears several entries — and mis-locating the layer often "fixes" none; see rule 2 of the consumption contract).

## Evidence accounting

Cited artifacts: 1 — 1 present, 0 inside a checkpoint archive, 0 on another filesystem, 0 ephemeral (declared or retired), 0 unexplained. Archives searched: no checkpoint archives in the job folder.

## Machine-readable summary

```json
{
  "job": "2026-09-19-014-consolidate",
  "exported": "2026-09-19T06:21:35Z",
  "build": "dsstep ladder + S8 consolidate 2026-09-19",
  "entry_count": 3,
  "severity_counts": {
    "major": 1,
    "minor": 2
  },
  "stages": {
    "R": "1 entry + attested complete",
    "S": "attested clear",
    "E": "2 entries + attested complete",
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
      "id": "F-2",
      "stage": "E",
      "severity": "major",
      "category": "tool-bug",
      "title": "naming census read MANIFEST.json for the Ghidra hints and matched them by name, so it always reported ghidra 0",
      "tool": "xrefs.py"
    },
    {
      "id": "F-1",
      "stage": "R",
      "severity": "minor",
      "category": "doctrine-gap",
      "title": "out-of-run change to config/policy.json found uncommitted at RESUME"
    },
    {
      "id": "F-3",
      "stage": "E",
      "severity": "minor",
      "category": "tool-gap",
      "title": "rename is O(all source files) per call and has no batch mode, so a 59-rename library pass costs ~12 minutes",
      "tool": "ledger.py"
    }
  ]
}
```
