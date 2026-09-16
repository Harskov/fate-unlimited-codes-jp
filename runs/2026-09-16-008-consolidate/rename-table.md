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
| func_001990C0 | func_001990C0 | sets bit 2 of +0x10 and bit 7 when +0x0 has bit 5; caller func_0019BA00 | none | kept |
| func_00199CF0 | func_00199CF0 | clears +0x13C and +0x168; caller func_0019BA00 | none | kept |
| func_001A36D0 | func_001A36D0 | `(a-b)*1000`, or 50000 when b==0; sole caller is the func_00241C10 jump-table dispatcher | co-ref | kept |
| func_001A3700 | func_001A3700 | `a*10000 + b*1000`; same dispatcher | co-ref | kept |
| func_001A3730 | func_001A3730 | `i*300`; same dispatcher | co-ref | kept |
| func_001A3750 | func_001A3750 | `(D_00531C58[0]*99 - t)*500` clamped at 0; the 99 factor and the clamp read as a remaining-time term; same dispatcher | co-ref | kept |
| func_001A3790 | func_001A3790 | clears D_0051D890+i*0x18+0xF4 | none | kept |
| func_001A37B0 | func_001A37B0 | writes the same +0xF4 field | none | kept |
| func_001A37D0 | func_001A37D0 | increments the same +0xF4 field by one (a per-side counter) | none | kept |
| func_001A3800 | func_001A3800 | writes D_0051D890+i*0x18+0xE8 = 0x0051D978 / 0x0051D990 for i=0/1; func_00333920, the only function referencing `SCORE %7d`, `%3dWIN`, `STAGE %d %3dWIN`, `GAME OVER`, references both symbols; its value comes from the four formulas above | co-ref | kept |
| func_001A3820 | func_001A3820 | clears the same +0xE8 field | co-ref | kept |
| func_001A3A80 | func_001A3A80 | `return o->flags & mask` at +0x230; callers func_0019F9F0, func_001B1440 | none | kept |
| func_001A3E30 | func_001A3E30 | walks D_0051C858[index]->list testing +0x1F0 & 0x10 and +0x24C0; 49 asm functions reference D_0051C858 | none | kept |
| func_001A3EA0 | func_001A3EA0 | same walk over +0x1F4 & 0x18000 and +0x24BC | none | kept |
| func_001A47A0 | func_001A47A0 | divides a float at +0xC of the object at +0x40 by 1/60 (seconds → 60 Hz frames); 19 direct callers | none | kept |
| func_001A4960 | func_001A4960 | indexed element of the counted 28-byte array at +0x220; sole caller func_0023E280 | none | kept |
| func_001A49A0 | func_001A49A0 | sets index and cursor of the same array; callers func_001A5130, func_0023E8D0 | none | kept |
| func_001A5450 | func_001A5450 | writes +0x18 of one element or of all of them when i<0; sole caller func_0023E8D0 | none | kept |

## Globals

| symbol | evidence found | class | decision |
|---|---|---|---|
| D_0051D890 | 29 asm referents; co-referents name `cmn/boot` (func_0015AA40), `cmn/camera` (func_001C6B70) and the whole match-status string set (func_00333920); the block spans at least +0x0..+0x11C | co-ref | kept |
| D_00528A00 / 08 / 10 | 12 entries × 2 sides; referents func_0015CF80, func_001767B0 (parked at 85.8) | none | kept |
| D_0051C858 | array of list heads indexed per context; 49 referents across game_00, game_01, game_02 and game_model | none | kept |
| D_00531C58 | bss; read by func_001A3750 as `[0]*99`, also by func_001A5130, func_001C9C60, func_00332D50, func_00351F10 | none | kept |
| jtbl_003D66B0 | handler table indexed by a command byte; referents func_00175390, func_00176C60 | pattern, unnamed | kept |
| D_0051C904 – D_0051C910 | TCRF documents an unused input record/playback and a debug display at 0x0051C904–0x0051C920 (K7); referents func_001B02A0, func_001B0390, func_001B03A0, func_001B03B0, func_001B0770, func_001B0CD0 — none matched | **TCRF** | deferred: the fact names the region, not the individual fields; the six functions are the naming target of a future S6 batch |

## Headers introduced

| header | layout | functions agreeing |
|---|---|---|
| `include/game_00/tbl_0051D890.h` | `Rec0051D890` (stride 0x18), `Ent0051D890` (+0xE8, +0xEC, +0xF0, +0xF4), `extern Rec0051D890 D_0051D890[]` | func_001A3790, func_001A37B0, func_001A37D0, func_001A3800, func_001A3820 |
| `include/game_00/tbl_00528A00.h` | `Slot00528A00` (used/unk_8/id, each [2]), `Row00528A00`, the three externs | func_001766A0, func_00176740 |
| `include/game_00/tbl_0051C858.h` | `Node0051C858` (untyped payload + next), `Entry0051C858`, `Ctx0051C858`, `extern Entry0051C858 *D_0051C858[]` | func_001A3E30, func_001A3EA0 |
| `include/game_00/arr220.h` | `Elem220` (0x1C, field at +0x18), `Sub220` (unk_0, base, count, index, cur), `Arr220` | func_001A4960, func_001A49A0, func_001A5450 |

Each of the twelve rewritten sources was re-verified with `match.py try` before
`ledger.py mark`: all twelve came back objdiff 100.0, `.text` byte-identical, at the same
sizes as before the rewrite.

## Regrouped

| function | from | to | why |
|---|---|---|---|
| func_00177B00 | `src/main/func_00177B00.c` | `src/game_00/func_00177B00.c` | marked before S4, so it landed in the default `main` segment; the old file is in `_delete/` |
| func_001990C0 | `calibration/func_001990C0/attempt.c` | `src/game_00/func_001990C0.c` | matched during S2 calibrate and never moved into `src/` |
| func_001A4960 | `calibration/func_001A4960/attempt.c` | `src/game_00/func_001A4960.c` | same |

All three carried `linked: false` and were absent from the split YAML; re-marking set
`linked: true` and the YAML gained three `c` subsegments (27 → 30). See friction F-3.
