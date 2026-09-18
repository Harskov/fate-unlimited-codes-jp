# Rename table — run 2026-09-18-011-consolidate

| old | new | evidence |
|---|---|---|
| — | — | n/a — no function clears the evidence bar |

No name was written this run. `ledger/renames.jsonl` is unchanged.

## Evidence sources checked

All five sources the naming rule admits were checked against the 63 matched functions:

| source | result |
|---|---|
| a referenced string | 0 of 63 matched functions reference a string; `xrefs.py` decoded none in any `wip/<fn>/xrefs.json` |
| an SDK call pattern | 0 non-systematic callees across the 63; every callee is a `func_*` |
| an xref from a named caller | every caller of every matched function is an unnamed `func_*` in `asm/game_00*` |
| a TCRF fact (K7) | K7 records the debug display and unused input record/playback at `0x0051C904–0x0051C920`; no matched function references that range (only `asm/game_00_55.s` does) |
| a Ghidra hint | `reference/ghidra/` does not exist — S5 has not been run on this target |

## Candidates examined and left systematic

The three clusters whose shape is understood well enough that a name was considered,
and why the systematic name stays:

| candidate | shape established this run | why no name |
|---|---|---|
| `func_0019D6E0` | walks a 10-entry table for the first free slot, claims it, stores the caller's pointer and writes the index back — an allocate/acquire | shape alone is not one of the five admitted sources |
| `func_0019D6A0` | clears both words of the slot its argument names — the matching release | as above |
| `func_0019D0B0` | range-checks 0..9 and returns the slot's owner pointer — the lookup | as above |
| the seven `D_0051D890` accessors | set, clear and increment four words of one record — a field-accessor family | the record's meaning is not established; see `include/game_00/tbl_0051D890.h` |

## Headers written

| header | agreed by | content |
|---|---|---|
| `include/game_00/tbl_0051C870.h` (new) | `func_0019D0B0`, `func_0019D6A0`, `func_0019D6E0` | the 10-entry, 8-byte slot record: `used` at +0x0, `owner` at +0x4, with the two words addressed through their own symbols |
| `include/game_00/tbl_0051D890.h` (replaced) | the seven accessors + `func_0019A9A0` | the 0x18-byte record array; replaces the `Ent0051D890` overlay that runs 006–009 laid over it |
