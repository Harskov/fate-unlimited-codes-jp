# Run 2026-09-08-006-match-batch — match-batch

- Target: fate-unlimited-codes-jp
- Step: match-batch (S6) — proposed by next_step.py
- Started: 2026-09-08T04:05:41Z · Finished: 2026-09-08T04:33:00Z
- Commit: the commit whose message starts `run 2026-09-08-006-match-batch:` (git log --grep)

## What changed

- Ledger: matched 3 → 13 (+10), wip 5 → 7 (+2), asm 5887 → 5875 (-12).
- Ten of the twelve batch functions matched byte-identical on the first or second attempt; the batch table lists every attempt at every score. Decisive: the two parked functions are both at the compiler boundary, not at the source level. func_001A4870 (a sparse switch over five cases) has the right structure — the permuter reproduced the target's dispatch chain instruction for instruction at 91.05 — but the pinned b151 emits beql with the case body's lwc1 in the annulled slot where the target emits beq + nop, the same class of difference as calibrate friction F-2. func_00177580 has all five instructions in the target's order at 96.0 with only the v1/a2 pair swapped; six C shapes and 208 permuter iterations did not move it. The run is partial for a reason unrelated to any function: linking the ten matched functions turned check.json red because ld aligns every input .text to 16 (sh_addralign 16 on both the mwccps2 and the gas objects), so a matched function whose end is not 16-byte aligned pads the image and shifts everything after it. The cause was confirmed by experiment — SUBALIGN(4) on the .main output section put all ten functions at their target addresses — and the .ld was then restored so check.json records the real state. Nine of the ten have a non-16-aligned end, so this blocks every future match batch, not just this one; F-7 carries the verified one-line fix.

## Build check

`check.json`: ok = **False**, checked 2026-09-08T04:32:47Z, regime `full`; image 0x00100000–0x00509100, rebuilt 4231568 of 4231424 bytes; first diff 0x0010026C, 2981167 differing byte(s). Segments: crt0 ok; sdk_dma_graph DIFF@0x0010026C; sdk_kernel DIFF@0x00103FD4; sdk_stdio DIFF@0x00107A74; sdk_loadfile DIFF@0x0010C760; sdk_mc DIFF@0x0010E10C; sdk_ipu DIFF@0x00111B48; sdk_pad_scf DIFF@0x0011B894.

## Step table

# Batch table — run 2026-09-08-006-match-batch (S6 match-batch)

Segment focus `game_00`; batch size 12 from `select_batch.py`; attempt cap 3.
Every attempt of every function, at every score.

| function      | addr       | size | att | attempt scores (objdiff)                        | best    | status  | linked |
|---------------|------------|------|-----|-------------------------------------------------|---------|---------|--------|
| func_001990B0 | 0x001990B0 | 8    | 2   | 100 → 100                                       | 100     | matched | yes    |
| func_001A49A0 | 0x001A49A0 | 52   | 3   | 71.9231 → 100 → 100                             | 100     | matched | yes    |
| func_001A4870 | 0x001A4870 | 228  | 5   | 60.9649 → 76.4912 → 76.4912 → 91.0526 → 76.4912 | 91.0526 | wip     | no     |
| func_001A47A0 | 0x001A47A0 | 40   | 2   | 100 → 100                                       | 100     | matched | yes    |
| func_00178060 | 0x00178060 | 20   | 2   | 100 → 100                                       | 100     | matched | yes    |
| func_001775A0 | 0x001775A0 | 120  | 2   | 100 → 100                                       | 100     | matched | yes    |
| func_00177580 | 0x00177580 | 20   | 6   | 96 → 96 → 96 → 95.6 → 96 → 96                   | 96      | wip     | no     |
| func_001A3EA0 | 0x001A3EA0 | 116  | 3   | 99.931 → 100 → 100                              | 100     | matched | yes    |
| func_001A5450 | 0x001A5450 | 108  | 2   | 100 → 100                                       | 100     | matched | yes    |
| func_001A3E30 | 0x001A3E30 | 108  | 2   | 100 → 100                                       | 100     | matched | yes    |
| func_00199CF0 | 0x00199CF0 | 12   | 2   | 100 → 100                                       | 100     | matched | yes    |
| func_00176C50 | 0x00176C50 | 16   | 2   | 100 → 100                                       | 100     | matched | yes    |

## Proposed next step

S9 repair — check.json red (first diff 0x0010026C) with C present

## Friction filed

7 entries (blocker 3, major 2, minor 2); stages attested: E, R, S, V, X; export: FRICTION-REPORT.md
- F-1 [minor/doc-gap] extern scalar compiles to %gp_rel where the target uses %hi/%lo; K1 gives only the reverse direction
- F-2 [major/toolchain-drift] pinned build emits branch-likely dispatch with hoisted loads where the target emits beq + nop
- F-3 [blocker/tool-gap] match.py permute cannot run: decomp-permuter looks for mips-linux-gnu-objdump, the manifest ships mipsel-linux-gnu-objdump
- F-4 [blocker/tool-bug] match.py permute writes compile.sh with unquoted paths; the project folder name breaks it
- F-5 [minor/environment] device_bash hit the call time cap twice while running the permuter by hand
- F-6 [major/doc-gap] SHIP's 'configure.py --no-split --build' leaves a match batch's C out of the build, so check.json is a false signal for S6
- … 1 more in FRICTION-REPORT.md
