# Friction Report — 2026-09-19-012-match-batch

**Job folder:** `2026-09-19-012-match-batch`  
**Log:** `friction-log.jsonl` (4 entries; opened 2026-09-19T03:33:46Z, exported 2026-09-19T03:48:59Z)  
**Skills build:** mwcps2-3.0.1b151-050317 -O4,p; splat 57.6s; build 32.3s  
**Severity counts:** minor 4  

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

### F-1 — [minor / evidence-gap] runner C carries a byte-offset lint error

- **Stage:** Stage R RESUME | **Function:** `func_001AE2F0` | **Tool:** `lint_c.py` | **Logged:** 2026-09-19T03:33:46Z
- **Observed (fact):** lint_c.py --repo targets/fate-unlimited-codes-jp exit 1: src/game_00/func_001AE2F0.c:36 byte-offset: s->field_3C = *(int *)((char *)v + 0x38); 89 files, 1 error, 9 advisory (goto)
- **Expected:** runner-marked C passes lint_c.py with no error findings
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** the MatchRunner's cheap model reached the field by byte arithmetic instead of extending the struct; K1 6.9 rewrite is S8 work

### F-2 — [minor / doc-gap] K1 6 has no row for out-of-address-order struct members

- **Stage:** Stage E EXECUTE | **Function:** `func_001A9D80` | **Logged:** 2026-09-19T03:36:44Z
- **Observed (fact):** func_001A9D80 (7 insns): the runner's attempt-11, struct {pad[0x1F4]; flags; pad2[0x2F4]; unk_4EC; pad3[0x4EC]; unk_49C} scored 99.857 over 42 attempts; the same two statements over a struct whose members are declared in address order scored 100 byte-identical on attempt 1. Same for func_001AB2B0 (byte-offset views, 40 attempts, best 98.4 -> 100 on attempt 1 with the existing tbl_0051C858.h types)
- **Expected:** K1 6's spellings-already-scored table names struct field order as a thing to get right before spending attempts
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** member order changes the compiler's field-offset constant materialization and so the scheduling slot of the mask addiu; the operator lane knows to write address-ordered structs, the runner's cheap model does not

### F-3 — [minor / doc-gap] K1 6 has no row for chained assignment store order or for the returns-its-own-pointer shape

- **Stage:** Stage E EXECUTE | **Function:** `func_0017A670` | **Logged:** 2026-09-19T03:40:16Z
- **Observed (fact):** func_0017A670: attempt-1 (void return, early return 0, separate x/y/z statements) = 87.7, 168 bytes vs target 156, stores ascending 0x10,0x14,0x18 where the target stores 0x18,0x14,0x10, tail if inverted with two extra b. attempt-2 (return type Ent*, body wrapped in if (e != 0), single return e, x = y = z = 0.0f) = 100 byte-identical
- **Expected:** K1 6 names both shapes: a chained assignment stores right to left, and a target whose null check branches straight to jr ra with the pointer live in $v0 is returning that pointer
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** chained assignment evaluates right to left and mwcc emits the stores in that order; the single-exit return keeps the pointer in $v0 and removes the branch-around the early return forces

### F-4 — [minor / doc-gap] K1 3's branch-likely gap is not absolute: the order of two returns decides the form

- **Stage:** Stage E EXECUTE | **Function:** `func_001AB340` | **Logged:** 2026-09-19T03:41:32Z
- **Observed (fact):** func_001AB340, 3 spellings of the same two-way return: 'if (skip != 0) return 0; return D_0051D968[0];' = 56.7 (beqz + nop + b, 32 bytes); 'return skip != 0 ? 0 : D_0051D968[0];' = 56.7, same rows; 'if (skip == 0) return D_0051D968[0]; return 0;' = 100 byte-identical, 24 bytes, bnezl with daddu v0,zero,zero annulled. func_0019CB40 also reproduced two beql rows this run
- **Expected:** K1 3 says b151 emits beqz+nop where the target uses branch-likely and calls it the main unexplained compiler-boundary gap; it does not say the pinned build emits the likely form when the annulled instruction belongs to the second return
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** mwcc emits the likely form for the branch whose taken path is the shorter tail; writing the fall-through return first puts the constant return on the taken path. The blanket boundary reading in K1 3 costs attempts on every two-way return

## Suggested remediation order

Blockers and majors first, then whichever minor/papercut fixes share a root cause with them (fixing one layer often clears several entries — and mis-locating the layer often "fixes" none; see rule 2 of the consumption contract).

## Evidence accounting

Cited artifacts: 0 — 0 present, 0 inside a checkpoint archive, 0 on another filesystem, 0 ephemeral (declared or retired), 0 unexplained. Archives searched: no checkpoint archives in the job folder.

## Machine-readable summary

```json
{
  "job": "2026-09-19-012-match-batch",
  "exported": "2026-09-19T03:48:59Z",
  "build": "mwcps2-3.0.1b151-050317 -O4,p; splat 57.6s; build 32.3s",
  "entry_count": 4,
  "severity_counts": {
    "minor": 4
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
      "id": "F-1",
      "stage": "R",
      "severity": "minor",
      "category": "evidence-gap",
      "title": "runner C carries a byte-offset lint error",
      "tool": "lint_c.py",
      "function": "func_001AE2F0"
    },
    {
      "id": "F-2",
      "stage": "E",
      "severity": "minor",
      "category": "doc-gap",
      "title": "K1 6 has no row for out-of-address-order struct members",
      "function": "func_001A9D80"
    },
    {
      "id": "F-3",
      "stage": "E",
      "severity": "minor",
      "category": "doc-gap",
      "title": "K1 6 has no row for chained assignment store order or for the returns-its-own-pointer shape",
      "function": "func_0017A670"
    },
    {
      "id": "F-4",
      "stage": "E",
      "severity": "minor",
      "category": "doc-gap",
      "title": "K1 3's branch-likely gap is not absolute: the order of two returns decides the form",
      "function": "func_001AB340"
    }
  ]
}
```
