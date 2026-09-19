# Run 2026-09-19-012-match-batch — match-batch

- Target: fate-unlimited-codes-jp
- Step: match-batch (S6) — proposed by next_step.py
- Started: 2026-09-19T03:33:40Z · Finished: 2026-09-19T03:48:33Z
- Commit: the commit whose message starts `run 2026-09-19-012-match-batch:` (git log --grep)

## What changed

- Ledger: matched 82 → 94 (+12), wip 44 → 32 (-12).
- All 12 batch functions reached objdiff 100 with byte-identical .text and are linked; the batch is closed with nothing parked. Five of the twelve were MatchRunner escalations (best 97.2-100.0 after 8-42 cheap-model attempts each); all five matched on the first or second hand-written attempt, so the escalation threshold is doing its job and the operator lane is what the parked runner work needed. Decisive results, in order of what they teach: func_0017A670 (87.7 -> 100) settles two source shapes at once — a null check that branches straight to jr ra with the pointer still live in $v0 means the function returns that pointer (single exit, no move on the null path), and a chained assignment x = y = z = v stores right to left, which is what produced the target's descending 0x18/0x14/0x10 groups where three separate statements store ascending. func_001AB340 (56.7 -> 100) shows K1 3's branch-likely gap is not a blanket compiler boundary: of three spellings of the same two-way return, only 'if (skip == 0) return D[0]; return 0;' gives the target's bnezl with the zero annulled — the ternary and the inverted-order version both give beqz + b and 32 bytes. func_001AE860 (69.6 -> 100 over five attempts) is two independent lessons: a flags local typed unsigned char adds andi 0xFF after every operation (an int local does not), and the last 2.5 points were pure register allocation, closed by reordering the four locals until declaration order put the walking pointer in $11 and the flags local in $13. func_001A9D80 and func_001AB2B0 needed no new doctrine at all — the runner's 42 and 40 attempts had used, respectively, a struct whose members were declared out of address order and byte-offset views of an object already typed by include/game_00/tbl_0051C858.h; writing the address-ordered struct and reusing the existing header matched both on attempt 1. Three of the twelve (func_001AB2B0, func_001AD3D0, func_001AD0E0) walk the D_0051C858 table through the existing Entry0051C858/Node0051C858 types, and their three Obj views (fields at 0x2390/0x238C, 0x23A4/0x23AC[10]/0x23D4, 0x23FC) are separate local views of one object that the proposed consolidate should merge into one struct. lint_c.py is clean on all 12; the one error finding in the tree is func_001AE2F0.c:36, a byte-offset in runner-marked C committed at RESUME, which is S8 work.

## Build check

`check.json`: ok = **True**, checked 2026-09-19T03:48:21Z, regime `full`; image 0x00100000–0x00509100, rebuilt 4231424 of 4231424 bytes; first diff None, 0 differing byte(s). Segments: crt0 ok; sdk_dma_graph ok; sdk_kernel ok; sdk_stdio ok; sdk_loadfile ok; sdk_mc ok; sdk_ipu ok; sdk_pad_scf ok.

## Step table

# Batch table — 2026-09-19-012-match-batch

Every function of the batch, every attempt recorded in the ledger, and the final status.

| # | function | addr | size | attempts (all lanes) | this run | best | status |
|---|---|---|---|---|---|---|---|
| 1 | func_001AB2B0 | 0x001AB2B0 | 128 | 22 | attempt-1 = 100 | 100 | matched |
| 2 | func_0017A670 | 0x0017A670 | 156 | 31 | attempt-1 = 87.7, attempt-2 = 100 | 100 | matched |
| 3 | func_0019D4E0 | 0x0019D4E0 | 96 | 40 | attempt-1 = 100 | 100 | matched |
| 4 | func_001A9D80 | 0x001A9D80 | 28 | 44 | attempt-1 = 100 | 100 | matched |
| 5 | func_0019CB40 | 0x0019CB40 | 100 | 27 | attempt-1 = 100 | 100 | matched |
| 6 | func_001AB340 | 0x001AB340 | 24 | 19 | attempt-1 = 56.7, attempt-2 = 100, attempt-3 = 56.7 | 100 | matched |
| 7 | func_0019D750 | 0x0019D750 | 12 | 10 | attempt-1 = 100 | 100 | matched |
| 8 | func_001AE860 | 0x001AE860 | 152 | 14 | attempt-1 = 69.6, -2 = 97.5, -3 = 98.0, -4 = 98.4, -5 = 100 | 100 | matched |
| 9 | func_001AD0E0 | 0x001AD0E0 | 232 | 13 | attempt-1 = 100 | 100 | matched |
| 10 | func_001AD3D0 | 0x001AD3D0 | 136 | 12 | attempt-1 = 100 | 100 | matched |
| 11 | func_001AB030 | 0x001AB030 | 8 | 11 | attempt-1 = 100 | 100 | matched |
| 12 | func_0019C7F0 | 0x0019C7F0 | 48 | 6 | attempt-1 = 100 | 100 | matched |


## Proposed next step

S8 consolidate — 31 matches since the last consolidate (threshold 25)
- note: external lane: 17 runner batch(es), 33 matched, $1.09 in state/runner-steps.jsonl (never a step of a run)

## Friction filed

4 entries (minor 4); stages attested: E, R, S, V, X; export: FRICTION-REPORT.md
- F-1 [minor/evidence-gap] runner C carries a byte-offset lint error
- F-2 [minor/doc-gap] K1 6 has no row for out-of-address-order struct members
- F-3 [minor/doc-gap] K1 6 has no row for chained assignment store order or for the returns-its-own-pointer shape
- F-4 [minor/doc-gap] K1 3's branch-likely gap is not absolute: the order of two returns decides the form
