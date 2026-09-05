# Friction Report — 2026-09-05-001-bootstrap

**Job folder:** `2026-09-05-001-bootstrap`  
**Log:** `friction-log.jsonl` (3 entries; opened 2026-09-05T19:27:54Z, exported 2026-09-05T19:44:50Z)  
**Skills build:** v1-build-2026-09-05  
**Severity counts:** major 2, minor 1  

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

### F-2 — [major / environment] git cannot unlink its lock and temp-object files on the mounted folder; every second git command stops on a stale index.lock

- **Stage:** Stage E EXECUTE | **Tool:** `git` | **Logged:** 2026-09-05T19:33:01Z
- **Observed (fact):** git add -A printed: warning: unable to unlink '.git/index.lock': Operation not permitted; the following git commit stopped with 'remove the file manually to continue'. git clone into tools/m2c failed: could not lock config file .git/config: File exists. Moving *.lock and tmp_obj_* files into _delete/git-locks/ before and after each command lets add/commit/log/status/fsck complete (2 test commits, fsck clean, status clean).
- **Expected:** git add/commit/clone work on the mount as the design assumes (§1, §6.1)
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** The mount forbids unlink() for every file; git removes locks with unlink and only renames on the success path. Not verified beyond the observed commands.
- **Repro:** `cd targets/fate-unlimited-codes-jp && git add -A && git commit -m x`

### F-3 — [major / toolchain-drift] ASSUMPTION A2: neither decompals binutils nor ee-gcc2.96's ee-as runs in the VM; Debian bullseye binutils-mipsel-linux-gnu 2.35.2 (unpacked .deb) is the working EE assembler

- **Stage:** Stage E EXECUTE | **Tool:** `bootstrap.sh` | **Logged:** 2026-09-05T19:37:25Z
- **Observed (fact):** mips-ps2-decompals-as v0.10: /lib/x86_64-linux-gnu/libc.so.6: version GLIBC_2.38 not found (VM glibc 2.35). ee-gcc2.96/bin/ee-as: ELF 32-bit i386, interpreter /lib/ld-linux.so.2 absent -> 'No such file or directory'. Ubuntu pool has no jammy binutils-mips-linux-gnu (only 2.26/2.30). Debian binutils-mipsel-linux-gnu_2.40-2cross2 needs libsframe.so.0 (absent). binutils-mipsel-linux-gnu_2.35.2-2cross2_amd64.deb unpacked with ar+tar, LD_LIBRARY_PATH=usr/lib/x86_64-linux-gnu: assembles paddub/lq/pmfhl.lw with -EL -march=r5900 -mabi=eabi; ld 2.35.2 links.
- **Expected:** One of the two assemblers named in design §12 A2 works
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** decompals ships binaries built on a newer distro; decomp.me runs them in Docker. Not verified beyond the loader errors.
- **Repro:** `bash skills/dps2-toolkit/scripts/bootstrap.sh --repo targets/fate-unlimited-codes-jp --stage assembler`

### F-1 — [minor / environment] python3 -m venv (with ensurepip) fails on the mounted folder

- **Stage:** Stage E EXECUTE | **Tool:** `bootstrap.sh` | **Logged:** 2026-09-05T19:30:58Z
- **Observed (fact):** python3 -m venv tools/venv exited after ~67 s with: Command ['.../tools/venv/bin/python3','-m','ensurepip','--upgrade','--default-pip'] returned non-zero exit status 1. python3 -m venv --without-pip succeeds in 0.3 s and 'python3 -m pip --python tools/venv/bin/python install ...' installs splat64[mips] etc. in 47 s.
- **Expected:** venv with pip created
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** ensurepip's wheel bootstrap writes or renames files in a way the mount refuses (the mount refuses unlink); not verified.
- **Repro:** `python3 -m venv targets/fate-unlimited-codes-jp/tools/venv-probe2`

## Suggested remediation order

Blockers and majors first, then whichever minor/papercut fixes share a root cause with them (fixing one layer often clears several entries — and mis-locating the layer often "fixes" none; see rule 2 of the consumption contract).

## Evidence accounting

Cited artifacts: 0 — 0 present, 0 inside a checkpoint archive, 0 on another filesystem, 0 ephemeral (declared or retired), 0 unexplained. Archives searched: no checkpoint archives in the job folder.

## Machine-readable summary

```json
{
  "job": "2026-09-05-001-bootstrap",
  "exported": "2026-09-05T19:44:50Z",
  "build": "v1-build-2026-09-05",
  "entry_count": 3,
  "severity_counts": {
    "major": 2,
    "minor": 1
  },
  "stages": {
    "R": "attested clear",
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
      "category": "environment",
      "title": "git cannot unlink its lock and temp-object files on the mounted folder; every second git command stops on a stale index.lock",
      "tool": "git"
    },
    {
      "id": "F-3",
      "stage": "E",
      "severity": "major",
      "category": "toolchain-drift",
      "title": "ASSUMPTION A2: neither decompals binutils nor ee-gcc2.96's ee-as runs in the VM; Debian bullseye binutils-mipsel-linux-gnu 2.35.2 (unpacked .deb) is the working EE assembler",
      "tool": "bootstrap.sh"
    },
    {
      "id": "F-1",
      "stage": "E",
      "severity": "minor",
      "category": "environment",
      "title": "python3 -m venv (with ensurepip) fails on the mounted folder",
      "tool": "bootstrap.sh"
    }
  ]
}
```
