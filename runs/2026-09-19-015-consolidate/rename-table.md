# Rename table — run 2026-09-19-015-consolidate

n/a — no function clears the evidence bar this run. Every candidate examined is
listed below with the source that was checked and why it did not name a function.

| Candidate set | n | Source checked | Outcome |
|---|---|---|---|
| All matched functions | 138 | referenced string (`xrefs.py --naming-census`) | 0 — no matched function references a string that reads as text |
| All matched functions | 138 | named caller | 0 — no matched function has a caller that carries a name |
| All matched functions | 138 | named callee | 0 — matching is still at the leaves; no matched function calls a named function |
| Ghidra export, names on a ledger function | 71 | `reference/ghidra/` (12.1.3, ee-reloaded v2.1.37) | 59 renamed in run 014; 0 renameable remain |
| Ghidra names shared by several addresses | 12 | same export | blocked — the name (reserved `RFU*` slots, the paired `AddIntcHandler`/`AddDmacHandler` stubs) does not identify one address; systematic names kept |
| `func_001BB*` predicate family | 8 | layout agreement (this run) | type named (`Obj2524`), functions left systematic — a layout is not a name |
| `game_00` vector helpers | 13 | layout agreement (this run) | types named (`Vec4`, `Vec3`), functions left systematic |

The two type names this run introduces are not function renames and are not recorded
in `ledger/renames.jsonl`; their evidence is the layout agreement quoted in
`include/game_00/obj2524.h` and `include/game_00/vec.h` and in the ledger notes of
func_001BB220, func_001AB770, func_0016D070 and func_001B6F00.
