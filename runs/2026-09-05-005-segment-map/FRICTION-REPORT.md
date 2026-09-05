# Friction Report — 2026-09-05-005-segment-map

**Job folder:** `2026-09-05-005-segment-map`  
**Log:** `friction-log.jsonl` (6 entries; opened 2026-09-05T22:17:23Z, exported 2026-09-05T22:39:48Z)  
**Skills build:** v1 2026-09-05  
**Severity counts:** blocker 3, major 2, minor 1  

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
| Stage E EXECUTE | 6 entries + attested complete |
| Stage V SHIP | attested clear |
| Cross-cutting / environment | attested clear |

## Entries (most severe first)

### F-1 — [blocker / doc-gap] config/symbol_addrs.txt header used # comments; splat rejects them

- **Stage:** Stage E EXECUTE | **Tool:** `configure.py` | **Logged:** 2026-09-05T22:27:31Z
- **Observed (fact):** gen_splat_yaml.py --from-segments then configure.py --repo targets/fate-unlimited-codes-jp --build exited rc=1 in 2.0s: splat/util/symbols.py:111 ValueError: invalid literal for int() with base 0: '0xADDR'. The file's 3 lines were all '#'-prefixed prose written by run 2026-09-05-004-split-baseline (commit 943543b); splat/util/symbols.py:98 skips only lines starting with '//'.
- **Expected:** splat parses config/symbol_addrs.txt and the split proceeds
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** S3 wrote the header after its last successful splat run, so the baseline never exercised it; neither K2 nor dps2-step/SKILL.md states the comment syntax splat accepts for symbol_addrs.txt
- **Artifact:** `../../config/symbol_addrs.txt` (exists)
- **Repro:** `python3 skills/dps2-toolkit/scripts/configure.py --repo targets/fate-unlimited-codes-jp --build`
- **Note (appended later):** FIXED IN THIS RUN: config/symbol_addrs.txt rewritten with // comments plus a line stating that splat rejects #.
- **Amended through the tool:** `note` at 2026-09-05T22:39:41Z (record the fix so a remediating run does not redo it)

### F-2 — [blocker / false-signal] configure.py reported build rc=0 and check_build.py OK while ninja had failed and the ELF was stale

- **Stage:** Stage E EXECUTE | **Tool:** `configure.py` | **Logged:** 2026-09-05T22:29:30Z
- **Observed (fact):** build/configure.json build.output_tail: "ninja: error: 'asm/data/bss.bss.s', needed by 'build/asm/data/bss.bss.s.o', missing and no known rule to make it / ninja: error: remove(.ninja_lock): Operation not permitted" yet build.rc=0, seconds=0.1, and configure.py printed 'build: rc=0 in 0.1s'. build/SLPM_551.08.elf mtime stayed 2026-09-05 20:28:24 (the S3 link) while the run was at 22:28; build/build.ninja does not exist (configure.py writes build.ninja at the repo root). check_build.py then printed 'check: OK ... 4231424 bytes' against that stale ELF.
- **Expected:** a ninja failure gives build rc!=0, and check_build.py does not certify an ELF older than the objects it was supposed to be built from
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** configure.py lines 205-207 clear rc whenever the output contains 'remove(.ninja_lock)' and lacks 'subcommand failed' and a non-empty ELF exists; a genuine 'missing and no known rule' error also lacks 'subcommand failed', so any pre-existing ELF turns a failed build green. check_build.py has no freshness test against the .s/.o inputs.
- **Repro:** `python3 skills/dps2-toolkit/scripts/configure.py --repo targets/fate-unlimited-codes-jp --build && python3 skills/dps2-toolkit/scripts/check_build.py --repo targets/fate-unlimited-codes-jp`
- **Note (appended later):** NOT FIXED: configure.py still clears a non-zero ninja rc whenever the output mentions remove(.ninja_lock) and an ELF exists. Every green in this run was confirmed by comparing build/SLPM_551.08.elf's mtime against the time of the split.
- **Amended through the tool:** `note` at 2026-09-05T22:39:41Z (record that the blocker is open)

### F-5 — [blocker / tool-gap] gen_splat_yaml.py sets no string-guesser level, so data/rodata subsegments do not round-trip

- **Stage:** Stage E EXECUTE | **Tool:** `gen_splat_yaml.py` | **Logged:** 2026-09-05T22:35:28Z
- **Observed (fact):** with data/rodata subsegments the rebuilt image is 0x1F0 bytes long (4231920 vs 4231424). Object section sizes vs their address ranges: data_00 0x2BA80 +0x0, data_sdk 0x23000 +0x0, data_01 0x10F130 vs 0x10F000 (+0x130), rodata_str .rodata 0x271B8 vs 0x27100 (+0xB8). asm/data/data_01.data.s has 626 '.align' directives and asm/data/rodata_str.rodata.s has 13222, emitted around guessed .asciz strings (e.g. D_003D3420 '.asciz "p<sjis>N"' whose bytes are the pointer 0x004EA670, and a '.asciz ""' + '.align 2' pair after every string).
- **Expected:** an asm-only re-split reproduces the image byte for byte, as it did at S3 when the same bytes were one asm subsegment
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** splat's data and rodata string guessers run by default; with string_encoding/data_string_encoding SHIFT-JIS they read pointer words and padding as strings and re-emit them as .asciz plus .align 2, whose assembled padding does not always equal the original bytes. gen_splat_yaml.py's header() sets the encodings but never sets rodata_string_guesser_level / data_string_guesser_level, which splat documents as 0 = disabled.
- **Repro:** `python3 skills/dps2-toolkit/scripts/gen_splat_yaml.py --repo targets/fate-unlimited-codes-jp --from-segments --force && python3 skills/dps2-toolkit/scripts/configure.py --repo targets/fate-unlimited-codes-jp --build && python3 skills/dps2-toolkit/scripts/check_build.py --repo targets/fate-unlimited-codes-jp`
- **Note (appended later):** FIXED IN THIS RUN: skills/dps2-toolkit/scripts/gen_splat_yaml.py header() now emits rodata_string_guesser_level: 0 and data_string_guesser_level: 0, with a comment citing this entry. After the fix the same split checked green (4231424 of 4231424 bytes, first diff None).
- **Amended through the tool:** `note` at 2026-09-05T22:39:41Z (record the fix so a remediating run does not redo it)

### F-3 — [major / tool-bug] splat emits build/asm/data/bss.bss.s.o in the ld but writes no asm/data/bss.bss.s when the bss segment is named 'bss'

- **Stage:** Stage E EXECUTE | **Tool:** `gen_splat_yaml.py` | **Logged:** 2026-09-05T22:29:30Z
- **Observed (fact):** ledger/segments.json named the last segment 'bss'; config/SLPM_551.08.yaml got '- [0x00409180, bss, bss]'; build/SLPM_551.08.ld line 100 references build/asm/data/bss.bss.s.o but asm/data/ contains only data_00/data_01/data_sdk/rodata_str .s plus main_bss.bss.s from the S3 split — no bss.bss.s. splat exited rc=0 in 47.4s with no error about it.
- **Expected:** splat writes asm/data/<name>.bss.s for every bss subsegment it puts in the ld script
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** the subsegment name 'bss' collides with splat's section naming for bss subsegments, so the file is skipped while the ld entry is still emitted; renaming the segment to main_bss (the S3 baseline name) avoids it
- **Repro:** `name the last segment 'bss' in ledger/segments.json, then gen_splat_yaml.py --from-segments --force && configure.py --build`
- **Note (appended later):** WORKED AROUND IN THIS RUN: the segment is named main_bss in ledger/segments.json. The splat behaviour itself is unfixed and will bite any repo that names a bss segment 'bss'.
- **Amended through the tool:** `note` at 2026-09-05T22:39:41Z (record the workaround)

### F-4 — [major / doctrine-gap] segment boundaries must be 16-byte aligned (subalign: 16); three function-aligned boundaries were not, and the check went red

- **Stage:** Stage E EXECUTE | **Tool:** `gen_splat_yaml.py` | **Logged:** 2026-09-05T22:31:38Z
- **Observed (fact):** boundaries 0x00104038, 0x002A6078 and 0x00354148 are function starts but 8 mod 16. build/check.json ok=false, rebuilt_size 4231968 vs original 4231424 (+0x220 = 3 x 8 bytes of subsegment padding plus the 0x208 knock-on), first_diff 0x001001E8, diff_count 3355107, every segment from sdk_kernel onward fully diffed. The 4 pre-shift byte diffs in crt0 and 143 in sdk_dma_graph are jal/%hi-%lo immediates pointing at symbols the padding moved.
- **Expected:** the S4 procedure states that a segment boundary must be both a function start and 16-byte aligned, because gen_splat_yaml.py writes 'subalign: 16' unconditionally
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** dps2-step/SKILL.md S4 and K5 describe boundaries only as contiguous and address-ordered; nothing links them to the subalign the generated YAML fixes at 16, so a boundary picked from the evidence lands on an 8-aligned function about half the time
- **Artifact:** `../../build/check.json` (exists)
- **Repro:** `set a segment start to an 8-mod-16 function address, gen_splat_yaml.py --from-segments --force, configure.py --build, check_build.py`
- **Note (appended later):** WORKED AROUND IN THIS RUN: the three boundaries were moved to 0x00103F60, 0x002A5FC0 and 0x00353FF0. The doctrine gap is unfixed — dps2-step/SKILL.md S4 and K5 still do not state the 16-byte alignment rule.
- **Amended through the tool:** `note` at 2026-09-05T22:39:41Z (record the workaround and what remains)

### F-6 — [minor / tool-gap] ledger.py import-functions leaves segment null on entries that already exist

- **Stage:** Stage E EXECUTE | **Tool:** `ledger.py` | **Logged:** 2026-09-05T22:37:31Z
- **Observed (fact):** after 'ledger.py --repo targets/fate-unlimited-codes-jp import-functions' (8226 added, 8 already present, 8234 total) the 8 calibration entries func_00100350, func_001175A8, func_00121558, func_00141828, func_001619C0, func_00177B00, func_001990C0, func_001A4960 still had segment=null; ledger.py stats printed them under '(none): matched 3, wip 5'. cmd_import does 'if name in have: skipped += 1; continue' before seg_for(addr) is called.
- **Expected:** after segment-map every ledger entry names the segment its address falls in
- **Operator hypothesis — UNVERIFIED, verify against the artifacts before building on it:** cmd_import was written as an add-only importer; the S2 calibrate step is the only thing that creates ledger entries before segments.json exists, so exactly those entries are the ones it can never fill in
- **Repro:** `python3 skills/dps2-toolkit/scripts/ledger.py --repo targets/fate-unlimited-codes-jp import-functions && python3 skills/dps2-toolkit/scripts/ledger.py --repo targets/fate-unlimited-codes-jp stats`
- **Note (appended later):** FIXED IN THIS RUN: skills/dps2-toolkit/scripts/ledger.py cmd_import now backfills segment/file/kind on entries that already exist (status untouched); the re-run printed '0 added, 8234 already present (8 segment backfilled)'.
- **Amended through the tool:** `note` at 2026-09-05T22:39:41Z (record the fix so a remediating run does not redo it)

## Suggested remediation order

Blockers and majors first, then whichever minor/papercut fixes share a root cause with them (fixing one layer often clears several entries — and mis-locating the layer often "fixes" none; see rule 2 of the consumption contract).

## Evidence accounting

Cited artifacts: 2 — 2 present, 0 inside a checkpoint archive, 0 on another filesystem, 0 ephemeral (declared or retired), 0 unexplained. Archives searched: no checkpoint archives in the job folder.

## Machine-readable summary

```json
{
  "job": "2026-09-05-005-segment-map",
  "exported": "2026-09-05T22:39:48Z",
  "build": "v1 2026-09-05",
  "entry_count": 6,
  "severity_counts": {
    "blocker": 3,
    "major": 2,
    "minor": 1
  },
  "stages": {
    "R": "attested clear",
    "S": "attested clear",
    "E": "6 entries + attested complete",
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
      "severity": "blocker",
      "category": "doc-gap",
      "title": "config/symbol_addrs.txt header used # comments; splat rejects them",
      "tool": "configure.py"
    },
    {
      "id": "F-2",
      "stage": "E",
      "severity": "blocker",
      "category": "false-signal",
      "title": "configure.py reported build rc=0 and check_build.py OK while ninja had failed and the ELF was stale",
      "tool": "configure.py"
    },
    {
      "id": "F-5",
      "stage": "E",
      "severity": "blocker",
      "category": "tool-gap",
      "title": "gen_splat_yaml.py sets no string-guesser level, so data/rodata subsegments do not round-trip",
      "tool": "gen_splat_yaml.py"
    },
    {
      "id": "F-3",
      "stage": "E",
      "severity": "major",
      "category": "tool-bug",
      "title": "splat emits build/asm/data/bss.bss.s.o in the ld but writes no asm/data/bss.bss.s when the bss segment is named 'bss'",
      "tool": "gen_splat_yaml.py"
    },
    {
      "id": "F-4",
      "stage": "E",
      "severity": "major",
      "category": "doctrine-gap",
      "title": "segment boundaries must be 16-byte aligned (subalign: 16); three function-aligned boundaries were not, and the check went red",
      "tool": "gen_splat_yaml.py"
    },
    {
      "id": "F-6",
      "stage": "E",
      "severity": "minor",
      "category": "tool-gap",
      "title": "ledger.py import-functions leaves segment null on entries that already exist",
      "tool": "ledger.py"
    }
  ]
}
```
