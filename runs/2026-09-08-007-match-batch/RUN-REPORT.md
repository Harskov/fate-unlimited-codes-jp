# Run 2026-09-08-007-match-batch — match-batch

- Target: fate-unlimited-codes-jp
- Step: match-batch (S6) — proposed by next_step.py
- Started: 2026-09-08T05:05:10Z · Finished: 2026-09-08T05:22:11Z
- Commit: the commit whose message starts `run 2026-09-08-007-match-batch:` (git log --grep)

## What changed

- Ledger: matched 13 → 24 (+11), wip 7 → 8 (+1), asm 5875 → 5863 (-12).
- 11 of 12 matched byte-identical; 24 matched functions in the ledger, up from 13. The decisive results: functions 10-12 (D_0051D890) and function 9 (D_00528A00) all turned on how the constant field offset reaches the relocation — keeping %hi/%lo(sym) pure and the offset in the memory operand is what took 98.6/99.5 to 100.0, and that is now the first thing to check on a 98-99 % diff against a global. func_00176BE0 confirms mwccps2 3.0.1 emits real tail calls, so a bare 'jr $vN' is a call, not a switch. The one parked function, func_001767B0, is structurally complete at 200/200 bytes with both loop bodies correct; its residue is the allocation of side*4 against the loop base pointer (a4/a5 swapped) and the scheduling that follows, and the permuter found nothing better in 120 s — the same class of scratch-register difference K1 section 6 says to park rather than contort. The batch also settled that 'sdr $zero,0x1($zero) / sdl $zero,0x8($zero)' is genuine code, not a disassembly fault (F-3), which matters for the 200-odd other sites in the image.

## Build check

`check.json`: ok = **True**, checked 2026-09-08T05:21:40Z, regime `full`; image 0x00100000–0x00509100, rebuilt 4231424 of 4231424 bytes; first diff None, 0 differing byte(s). Segments: crt0 ok; sdk_dma_graph ok; sdk_kernel ok; sdk_stdio ok; sdk_loadfile ok; sdk_mc ok; sdk_ipu ok; sdk_pad_scf ok.

## Step table

# Batch table — run 2026-09-08-007-match-batch (S6 match-batch)

Pool 5878 asm/wip game functions, segment focus `game_00`, batch size 12 (`policy.batch_size`).
Every attempt at every score; the judgment is in the run report's paragraph.

| # | Function | Addr | Size | Attempts (objdiff score) | Final | Status |
|---|---|---|---|---|---|---|
| 1 | func_00176C30 | 0x00176C30 | 28 | a1 100.0 | 100.0 | matched |
| 2 | func_00176C10 | 0x00176C10 | 20 | a1 100.0 | 100.0 | matched |
| 3 | func_00176C00 | 0x00176C00 | 16 | a1 100.0 | 100.0 | matched |
| 4 | func_00176BE0 | 0x00176BE0 | 32 | a1 100.0 | 100.0 | matched |
| 5 | func_00176BC0 | 0x00176BC0 | 20 | a1 100.0 | 100.0 | matched |
| 6 | func_001A3A80 | 0x001A3A80 | 16 | a1 100.0 | 100.0 | matched |
| 7 | func_001767B0 | 0x001767B0 | 200 | a1 83.4; a2 85.8; a3 77.1; permuter 120 s no improvement | 85.8 | wip (parked) |
| 8 | func_00176740 | 0x00176740 | 112 | a1 100.0 | 100.0 | matched |
| 9 | func_001766A0 | 0x001766A0 | 160 | a1 76.1; a2 99.5; a3 0.0; a4 100.0 | 100.0 | matched |
| 10 | func_001A3820 | 0x001A3820 | 32 | a1 98.6; a2 100.0 | 100.0 | matched |
| 11 | func_001A3800 | 0x001A3800 | 32 | a1 98.6; a2 100.0 | 100.0 | matched |
| 12 | func_001A37D0 | 0x001A37D0 | 40 | a1 98.8; a2 100.0 | 100.0 | matched |

11 matched byte-identical, 1 parked. Compiler `mwcps2-3.0.1b151-050317`, flags `-O4,p`
(`config/compiler.json`). `build/check.json`: ok, rebuilt image equals the original's
loaded segment 0x00100000-0x00509100 (4231424 bytes), regime full.

## What the batch showed

(first 25 lines; every row is in `batch-table.md`)

## Proposed next step

S6 match-batch — 5871 game function(s) still asm/wip; batch size 12

## Friction filed

4 entries (major 1, minor 2, papercut 1); stages attested: E, R, S, V, X; export: FRICTION-REPORT.md
- F-1 [minor/doc-gap] K1 is silent on MWCC tail calls (jr $rN) and function-pointer tables splat names jtbl_*
- F-2 [minor/doc-gap] K1 section 6 has no entry for symbol+constant relocation folding as a 98-99 % diff cause
- F-3 [major/doc-gap] K1 does not name the 'sdr zero,0x1(zero) / sdl zero,0x8(zero)' idiom, which is a real 64-bit store to address 1 and appears ~200 times in the image
- F-4 [papercut/operator-drift] cat of config/compiler.json dumped ~350 lines of candidates_tried into the run for two fields
