# Run 2026-09-16-008-consolidate — consolidate

- Target: fate-unlimited-codes-jp
- Step: consolidate (S8) — proposed by next_step.py
- Started: 2026-09-16T23:22:55Z · Finished: 2026-09-16T23:36:06Z
- Commit: the commit whose message starts `run 2026-09-16-008-consolidate:` (git log --grep)

## What changed

- Ledger: no status changes.
- Decisive: nothing in the matched set clears the S8 evidence bar. Of the 30 functions, none references a string, none has a named caller (config/symbol_addrs.txt holds no names at all), no Ghidra export exists because S5 has never been run, and the one TCRF fact in K7 points at a bss range (0x0051C904-0x0051C920) whose six referents are still asm. The strongest thread is one inference step short: func_001A3800 writes D_0051D890+i*0x18+0xE8, which is 0x0051D978 and 0x0051D990 for i=0/1, and func_00333920 -- the only function in the image referencing 'SCORE %7d', '%3dWIN', 'STAGE %d %3dWIN' and 'GAME OVER' -- references both of those symbols; its value is produced by the four formulas at func_001A36D0 (50000 or (a-b)*1000), func_001A3700 (a*10000+b*1000), func_001A3730 (i*300) and func_001A3750 ((D_00531C58[0]*99-t)*500, clamped), all reached only from the func_00241C10 jump-table dispatcher. That is a co-reference, not a string the function itself loads, so the systematic names stayed and the chain went into the ledger instead. A rename would have been impossible in any case: ledger.py has no rename command and K2 forbids hand-editing the ledger (F-4). What the run did change is structural -- four headers for the four layouts two or more functions agree on, twelve sources rewritten onto them and each re-verified at objdiff 100 byte-identical, and three functions that had been recorded as matched since S2/S3 but never built (F-3) re-marked into src/game_00/ and linked, taking the YAML from 27 to 30 c subsegments with check.json still green.

## Build check

`check.json`: ok = **True**, checked 2026-09-16T23:35:57Z, regime `full`; image 0x00100000–0x00509100, rebuilt 4231424 of 4231424 bytes; first diff None, 0 differing byte(s). Segments: crt0 ok; sdk_dma_graph ok; sdk_kernel ok; sdk_stdio ok; sdk_loadfile ok; sdk_mc ok; sdk_ipu ok; sdk_pad_scf ok.

## Step table

# Rename table — run 2026-09-16-008-consolidate

Every matched function and every global the matched set touches, with the evidence found
for it and the decision. Evidence classes are the ones S8 accepts: a string referenced by
the function, an SDK call pattern, an xref from an already-named caller, a TCRF fact, a
Ghidra hint. `co-ref` marks a string referenced not by the function but by another
function that references the same global — one inference step removed, recorded but not
accepted as a name. **0 of 30 renamed.**

## Functions

| old | new | evidence found | class | decision |
|---|---|---|---|---|
| func_001766A0 | func_001766A0 | releases slot in D_00528A00[12] two-sided table; other referents func_0015CF80, func_001767B0 — neither names a string | none | kept |
| func_00176740 | func_00176740 | lookup counterpart of func_001766A0 over the same table | none | kept |
| func_00176BC0 | func_00176BC0 | `table[i] = v; return table[i]`; sole caller func_001768D0 | none | kept |
| func_00176BE0 | func_00176BE0 | tail-call through jtbl_003D66B0 indexed by `*(u8*)arg2`; other referent func_00176C60 (304 insns) | pattern, unnamed | kept |
| func_00176C00 | func_00176C00 | `return table[i]`; callers func_001768D0, func_00176C60 | none | kept |
| func_00176C10 | func_00176C10 | `table[i] = v`; caller func_001768D0 | none | kept |
| func_00176C30 | func_00176C30 | `table[i] += v`; caller func_001768D0 | none | kept |
| func_00176C50 | func_00176C50 | `return table[i]`; caller func_001768D0 | none | kept |
| func_001775A0 | func_001775A0 | clears bit 0x20000 and sets bit 0 on the head entry of each of 10 nodes; sole caller func_00176C60 | none | kept |
| func_00177B00 | func_00177B00 | free-list pop returning the payload after the header; 14 callers spanning `.amo/.anm/.bpo/.bsp/.col/.dff/.fan/.fld` (func_001FF000), `.txd` (func_00204650), `%d%s`/`%s%02d` formatting and `snd/se/` — a general-purpose allocator | co-ref | kept |
| func_00178060 | func_00178060 | circular list head init (`f0=1; next=prev=self`); 31 direct callers; caller func_001F5570 references `%s_%02d` | co-ref | kept |
| func_001990B0 | func_001990B0 | empty body; caller chain func_0019BC90 → func_00159E40 (`cmn/0000`, `cmn/coin`, `cmn/fade`, `cmn/joinin`) | co-ref, 2 hops | kept |

(first 25 lines; every row is in `rename-table.md`)

## Proposed next step

S6 match-batch — 5865 game function(s) still asm/wip; batch size 12

## Friction filed

4 entries (major 3, minor 1); stages attested: E, R, S, V, X; export: FRICTION-REPORT.md
- F-1 [minor/doctrine-gap] external MatchRunner lane left the tree uncommitted
- F-2 [major/tool-gap] no xref/string-evidence script for S8
- F-3 [major/doctrine-gap] three matched functions were never linked; the promised YAML flip never happens
- F-4 [major/tool-gap] ledger.py has no rename command, so S8 cannot perform a rename at all
