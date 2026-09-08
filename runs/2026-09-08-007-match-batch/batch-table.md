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

Functions 1-6 and 8 are accessors and dispatchers over two structures and matched from
the asm alone. Functions 9-12 and the parked 7 all address the same two globals:
`D_0051D890` (records of stride 0x18, fields read at +0xE8/+0xF4) and `D_00528A00`
(12 records of stride 0x18, a second index `side*4`, with `D_00528A08` and `D_00528A10`
naming the same records' second and third field pairs).

Three shapes carried the batch and are worth reusing:

- A `jr $vN` with no frame and no `jal` is a tail call; `func_00176BE0` is
  `return jtbl_003D66B0[*cmd](a0, a1, cmd);` where splat's `jtbl_` symbol is a
  function-pointer table, not a switch jump table (F-1).
- When the target keeps `%hi/%lo(sym)` pure and puts the field offset in the load or
  store operand, the source formed the element address first; writing the access as
  `D_0051D890.slots[i].f` folds the offset into the relocation and costs 2-3 rows
  (98.6 -> 100.0 on functions 10-12, F-2). The same rule runs the other way in
  function 9: the loop test reads one base with operand offsets 0x0/0x10, while the
  three clearing stores go through `D_00528A00`, `D_00528A10` and `D_00528A08`
  themselves.
- `sdr $zero, 0x1($zero)` / `sdl $zero, 0x8($zero)` is not a disassembly error: the
  words are in the ELF, they occur 207 and 195 times in the image, and the pinned
  compiler emits exactly them for `*(long long *)1 = 0;` (F-3).
