# Run 2026-09-17-010-match-batch — match-batch

- Target: fate-unlimited-codes-jp
- Step: match-batch (S6) — proposed by next_step.py
- Started: 2026-09-17T06:41:35Z · Finished: 2026-09-17T06:45:43Z
- Commit: the commit whose message starts `run 2026-09-17-010-match-batch:` (git log --grep)

## What changed

- Ledger: matched 41 → 53 (+12), wip 9 → 8 (-1), asm 5845 → 5834 (-11).
- All 12 batch functions matched byte-identical on the first or second substantive attempt; 11 were leaf accessors and list/flag helpers. The decisive result is func_00176140: last run's 99.77 ceiling was the two %hi/%lo(jtbl_004FEA50) rows, and this run's prepare cut the table into target.s so the unchanged C scored 100 and mark placed the object's .rodata at 0x004FEA50 — the split build with that .rodata subsegment is green. func_00175090 closed from 77.1 to 100 by writing the early return (if (x) return p; return p + 1;) instead of a conditional increment, the beqzl-slot shape of K1 §6 item 2. One friction entry (F-1, tool-gap): match.py try refused the byte-identical C after prepare had re-cut the target; a comment line worked around it.

## Build check

`check.json`: ok = **True**, checked 2026-09-17T06:45:41Z, regime `full`; image 0x00100000–0x00509100, rebuilt 4231424 of 4231424 bytes; first diff None, 0 differing byte(s). Segments: crt0 ok; sdk_dma_graph ok; sdk_kernel ok; sdk_stdio ok; sdk_loadfile ok; sdk_mc ok; sdk_ipu ok; sdk_pad_scf ok.

## Step table

# Batch table — 2026-09-17-010-match-batch

| function | addr | size | attempts (score) | final | status |
|---|---|---|---|---|---|
| func_0019AE60 | 0x0019AE60 | 40 | #1 100.00, #2 100.00 | 100.00 | matched |
| func_0019AE90 | 0x0019AE90 | 12 | #1 100.00, #2 100.00 | 100.00 | matched |
| func_0019AEA0 | 0x0019AEA0 | 12 | #1 100.00, #2 100.00 | 100.00 | matched |
| func_00176140 | 0x00176140 | 176 | #1 99.77, #2 100.00, #3 100.00 | 100.00 | matched |
| func_0019B470 | 0x0019B470 | 44 | #1 100.00, #2 100.00 | 100.00 | matched |
| func_00175090 | 0x00175090 | 28 | #1 77.14, #2 100.00, #3 77.14, #4 100.00 | 100.00 | matched |
| func_00175080 | 0x00175080 | 8 | #1 100.00, #2 100.00 | 100.00 | matched |
| func_00175070 | 0x00175070 | 8 | #1 100.00, #2 100.00 | 100.00 | matched |
| func_001A6370 | 0x001A6370 | 12 | #1 100.00, #2 100.00 | 100.00 | matched |
| func_001A6380 | 0x001A6380 | 12 | #1 100.00, #2 100.00 | 100.00 | matched |
| func_001A6390 | 0x001A6390 | 12 | #1 100.00, #2 100.00 | 100.00 | matched |
| func_00179380 | 0x00179380 | 20 | #1 100.00, #2 100.00 | 100.00 | matched |

## Proposed next step

S6 match-batch — 5842 game function(s) still asm/wip; batch size 12
- note: external lane: 2 runner batch(es), 4 matched, $0.24 in state/runner-steps.jsonl (never a step of a run)

## Friction filed

1 entry (minor 1); stages attested: E, R, S, V, X; export: FRICTION-REPORT.md
- F-1 [minor/tool-gap] try refuses a byte-identical C after prepare re-cut the target
