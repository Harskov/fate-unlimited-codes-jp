# Friction Report — 2026-09-19-013-ghidra-hints

**Job folder:** `2026-09-19-013-ghidra-hints`  
**Log:** `friction-log.jsonl` (4 entries; opened 2026-09-19T04:19:49Z, exported 2026-09-19T04:36:27Z)  
**Skills build:** Ghidra 12.1.3 PUBLIC / ee-reloaded v2.1.37 / JDK 21.0.10 (cloud sandbox)  
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
| Stage R RESUME | attested clear |
| Stage S SELECT | attested clear |
| Stage E EXECUTE | 4 entries + attested complete |
| Stage V SHIP | attested clear |
| Cross-cutting / environment | attested clear |

## Entries (most severe first)

### F-1 — [major / environment] github.com blocked by egress policy in the cloud sandbox (S5's designated lane)

- **Stage:** Stage E EXECUTE | **Logged:** 2026-09-19T04:20:50Z
- **Observed (fact):** cloud sandbox: curl -sSIL https://github.com/NationalSecurityAgency/ghidra/releases/latest -> 403 from the agent proxy; api.github.com -> 'GitHub access to this repository is not enabled for this session'. Device VM: the same URL -> 200 (Ghidra_12.1.3_build), api.github.com -> 200. Sandbox java: openjdk 21.0.10 (A4 holds, pre-installed). Device VM java: openjdk 11.0.32; openjdk-21-jdk candidate 21.0.12+8-1~22.04 available via apt.
- **Expected:** K3 §8 has the sandbox download Ghidra and the extension itself
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** the sandbox's egress allowlist does not carry github.com while the device VM's does; S5 must split across the two machines - download on the VM, stage, analyze in the sandbox
- **Repro:** `curl -sSIL -o /dev/null -w '%{http_code}' https://github.com/NationalSecurityAgency/ghidra/releases/latest`

### F-2 — [major / doctrine-gap] K3 §8 says commit the Ghidra exports; publication hygiene forbids them in a public repo

- **Stage:** Stage E EXECUTE | **Logged:** 2026-09-19T04:34:07Z
- **Observed (fact):** K3 §8: 'Copy the results into reference/ghidra/ with MANIFEST.json ... and commit.' The exports are 7122 decompiler C files (34 MB), strings.json with 10098 decoded game strings, xrefs.json with 142747 edges - the same class as asm/ and reference/xrefs-index.json, which remediation 12 (commit 2f0a812) gitignored for exactly this reason. targets/<slug>/.gitignore had no reference/ghidra rule.
- **Expected:** one rule for what S5 output may be published
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** K3 §8 predates the 2026-09-16 publication setup and remediation 12; the step doctrine was never reconciled with it. Resolved this run by ignoring reference/ghidra/* with !reference/ghidra/MANIFEST.json (target and template .gitignore) so MANIFEST.json is the committed record and the exports are regenerated by re-running S5.
- **Artifact:** `../../.gitignore` (exists)

### F-3 — [major / tool-gap] S5 has no export script and no transfer procedure in the toolkit

- **Stage:** Stage E EXECUTE | **Tool:** `none (S5 has no script)` | **Logged:** 2026-09-19T04:34:07Z
- **Observed (fact):** K3 §8 names 'a postScript <export script>' but no such script exists under skills/dps2-toolkit/scripts/ or anywhere in the project; the 169-line ExportHints.java was written from scratch this run and lives only in the sandbox. The two-machine transfer (download on the VM, split -b 190M for the 400 MB per-file stage cap, reassemble and sha256-verify in the sandbox, tar the 37 MB result back through device_commit_files) is likewise undocumented.
- **Expected:** a checked-in export script and a documented S5 transfer path, as every other step has scripts
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** S5 was designed but never run before this one (A4 untested), so nothing was ever written down; the script and the transfer steps belong in dps2-toolkit as ghidra_export.java + a ghidra_hints.py driver

### F-4 — [minor / toolchain-drift] DefinedDataIterator.definedStrings does not exist in Ghidra 12.1.3

- **Stage:** Stage E EXECUTE | **Logged:** 2026-09-19T04:34:07Z
- **Observed (fact):** ExportHints.java:98 'cannot find symbol: method definedStrings(Program)' in class ghidra.program.util.DefinedDataIterator; the whole postScript failed to compile and analyzeHeadless reported 'Import succeeded' with an empty out/ dir. SoftwareModeling-src.zip shows the class offers byDataType and byDataInstance only. Cost one 111 s analysis pass; recovered with -process SLPM_551.08 -noanalysis against the saved project.
- **Expected:** the helper named in older Ghidra API docs
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** definedStrings was removed or moved in a Ghidra 12 API change; byDataInstance(program, d -> d.getBaseDataType() instanceof AbstractStringDataType) is the 12.1.3 spelling and is what the script now uses
- **Repro:** `analyzeHeadless <proj> fate -process SLPM_551.08 -noanalysis -postScript ExportHints.java <out>`

## Suggested remediation order

Blockers and majors first, then whichever minor/papercut fixes share a root cause with them (fixing one layer often clears several entries — and mis-locating the layer often "fixes" none; see rule 2 of the consumption contract).

## Evidence accounting

Cited artifacts: 1 — 1 present, 0 inside a checkpoint archive, 0 on another filesystem, 0 ephemeral (declared or retired), 0 unexplained. Archives searched: no checkpoint archives in the job folder.

## Machine-readable summary

```json
{
  "job": "2026-09-19-013-ghidra-hints",
  "exported": "2026-09-19T04:36:27Z",
  "build": "Ghidra 12.1.3 PUBLIC / ee-reloaded v2.1.37 / JDK 21.0.10 (cloud sandbox)",
  "entry_count": 4,
  "severity_counts": {
    "major": 3,
    "minor": 1
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
      "id": "F-1",
      "stage": "E",
      "severity": "major",
      "category": "environment",
      "title": "github.com blocked by egress policy in the cloud sandbox (S5's designated lane)"
    },
    {
      "id": "F-2",
      "stage": "E",
      "severity": "major",
      "category": "doctrine-gap",
      "title": "K3 §8 says commit the Ghidra exports; publication hygiene forbids them in a public repo"
    },
    {
      "id": "F-3",
      "stage": "E",
      "severity": "major",
      "category": "tool-gap",
      "title": "S5 has no export script and no transfer procedure in the toolkit",
      "tool": "none (S5 has no script)"
    },
    {
      "id": "F-4",
      "stage": "E",
      "severity": "minor",
      "category": "toolchain-drift",
      "title": "DefinedDataIterator.definedStrings does not exist in Ghidra 12.1.3"
    }
  ]
}
```
