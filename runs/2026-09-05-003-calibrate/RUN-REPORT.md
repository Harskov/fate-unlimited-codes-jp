# Run 2026-09-05-003-calibrate — calibrate

- Target: fate-unlimited-codes-jp
- Step: calibrate (S2) — proposed by next_step.py
- Started: 2026-09-05T19:59:08Z · Finished: 2026-09-05T20:22:18Z
- Commit: the commit whose message starts `run 2026-09-05-003-calibrate:` (git log --grep)

## What changed

- Ledger: functions 0 → 3 (+3), matched 0 → 3 (+3).
- config/compiler.json: `mwcps2-3.0.1b151-050317` flags `-O4,p`, calibrated: True, 3 of 8 candidate functions byte-matched.
- Judgment: b145 and b151 tie at 3/8; b151 -O4,p pinned by override (later build; the only 3.0.1b-line decomp.me preset uses -O4,p). The 5 non-matching cells differ by annulled-delay-slot branch-likely scheduling no published build reproduced; 2 candidates (func_001319A0 mid-function start, func_00153BE8 nop delay loop) were skipped as not compiler output.

## Build check

`check.json`: ok = **True**, checked 2026-09-05T19:55:54Z, regime `undecided`; image 0x00100000–0x00509100, rebuilt 4231424 of 4231424 bytes; first diff None, 0 differing byte(s). Segments: main ok.

## Step table

# Calibration table — every (compiler, flags) x function cell, every score (2026-09-05T20:21:41Z)

Cell = objdiff match % (B = .text bytes identical to the target; err = compile error). Judgment is a separate paragraph in the run report, never a filter on this table.

| compiler | flags | func_00100350 | func_001175A8 | func_00121558 | func_00141828 | func_001619C0 | func_00177B00 | func_001990C0 | func_001A4960 | byte-identical | score 100 |
|---|---|---|---|---|---|---|---|---|---|---|---|
| mwcps2-3.0.1b145-050209 | `-O3,p` | 55.2 | 54.3 | 69.0 | 33.8 | 76.0 | 100.0 B | 100.0 B | 100.0 B | 3/8 | 3/8 |
| mwcps2-3.0.1b145-050209 | `-O3,s` | 55.2 | 54.3 | 69.0 | 33.8 | 76.0 | 100.0 B | 100.0 B | 100.0 B | 3/8 | 3/8 |
| mwcps2-3.0.1b145-050209 | `-O4,p` | 55.2 | 54.3 | 69.0 | 33.8 | 76.0 | 100.0 B | 100.0 B | 100.0 B | 3/8 | 3/8 |
| mwcps2-3.0.1b145-050209 | `-O4,s` | 55.2 | 54.3 | 69.0 | 33.8 | 76.0 | 100.0 B | 100.0 B | 100.0 B | 3/8 | 3/8 |
| mwcps2-3.0.1b151-050317 | `-O3,p` | 55.2 | 54.3 | 69.0 | 33.8 | 76.0 | 100.0 B | 100.0 B | 100.0 B | 3/8 | 3/8 |
| mwcps2-3.0.1b151-050317 | `-O3,s` | 55.2 | 54.3 | 69.0 | 33.8 | 76.0 | 100.0 B | 100.0 B | 100.0 B | 3/8 | 3/8 |
| mwcps2-3.0.1b151-050317 | `-O4,p` | 55.2 | 54.3 | 69.0 | 33.8 | 76.0 | 100.0 B | 100.0 B | 100.0 B | 3/8 | 3/8 |
| mwcps2-3.0.1b151-050317 | `-O4,s` | 55.2 | 54.3 | 69.0 | 33.8 | 76.0 | 100.0 B | 100.0 B | 100.0 B | 3/8 | 3/8 |
| mwcps2-3.0.1b198-051011 | `-O3,p` | 55.2 | 46.7 | 64.0 | 79.1 | 0.0 | 55.0 | 67.1 | 100.0 B | 1/8 | 1/8 |
| mwcps2-3.0.1b198-051011 | `-O3,s` | 55.2 | 46.7 | 64.0 | 79.1 | 0.0 | 55.0 | 67.1 | 100.0 B | 1/8 | 1/8 |
| mwcps2-3.0.1b198-051011 | `-O4,p` | 55.2 | 46.7 | 64.0 | 79.1 | 0.0 | 55.0 | 67.1 | 100.0 B | 1/8 | 1/8 |
| mwcps2-3.0.1b198-051011 | `-O4,s` | 55.2 | 46.7 | 64.0 | 79.1 | 0.0 | 55.0 | 67.1 | 100.0 B | 1/8 | 1/8 |
| mwcps2-3.0.1b205-051227 | `-O3,p` | 55.2 | 46.7 | 64.0 | 79.1 | 0.0 | 55.0 | 67.1 | 100.0 B | 1/8 | 1/8 |
| mwcps2-3.0.1b205-051227 | `-O3,s` | 55.2 | 46.7 | 64.0 | 79.1 | 0.0 | 55.0 | 67.1 | 100.0 B | 1/8 | 1/8 |
| mwcps2-3.0.1b205-051227 | `-O4,p` | 55.2 | 46.7 | 64.0 | 79.1 | 0.0 | 55.0 | 67.1 | 100.0 B | 1/8 | 1/8 |
| mwcps2-3.0.1b205-051227 | `-O4,s` | 55.2 | 46.7 | 64.0 | 79.1 | 0.0 | 55.0 | 67.1 | 100.0 B | 1/8 | 1/8 |
| mwcps2-3.0.1b210-060308 | `-O3,p` | 55.2 | 46.7 | 64.0 | 79.1 | 0.0 | 55.0 | 67.1 | 100.0 B | 1/8 | 1/8 |
| mwcps2-3.0.1b210-060308 | `-O3,s` | 55.2 | 46.7 | 64.0 | 79.1 | 0.0 | 55.0 | 67.1 | 100.0 B | 1/8 | 1/8 |
| mwcps2-3.0.1b210-060308 | `-O4,p` | 55.2 | 46.7 | 64.0 | 79.1 | 0.0 | 55.0 | 67.1 | 100.0 B | 1/8 | 1/8 |

(first 25 lines; every row is in `calibration-table.md`)

## Proposed next step

S4 segment-map — ledger/segments.json missing or provisional

## Friction filed

2 entries (major 1, minor 1); stages attested: E, R, S, V, X; export: FRICTION-REPORT.md
- F-1 [major/toolchain-drift] ASSUMPTION A1: the three default compiler candidates (2.3.3, 2.4-001213, 3.0-011126) byte-match 0/8 calibration functions; the image's idioms (sd $ra, daddu moves, 22k branch-likely) match MW 3.0-line output, not 2.4-001213 (paddub moves, sq $ra)
- F-2 [minor/evidence-gap] Calibration pin is a tie broken by the operator: 3.0.1b145 and 3.0.1b151 give identical results (3/8 byte-identical) at -O3,p/-O3,s/-O4,p/-O4,s; no cell distinguishes the four flag sets on leaf functions
