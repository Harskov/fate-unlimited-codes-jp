# Run 2026-09-19-015-consolidate — consolidate

- Target: fate-unlimited-codes-jp
- Step: consolidate (S8) — proposed by next_step.py
- Started: 2026-09-19T08:31:02Z · Finished: 2026-09-19T08:39:43Z
- Commit: the commit whose message starts `run 2026-09-19-015-consolidate:` (git log --grep)

## What changed

- Ledger: no status changes.
- The consolidate merged duplicated per-file structure onto two shared headers and cleared the three byte-offset lint errors, all in runner-origin C. include/game_00/obj2524.h types the object the eight func_001BB* predicates test: every one of them rejects a null argument and compares the int at +0xC, then reads either the object pointed to from +0x2508 or the pair at +0x2524. The +0x2508 word was the one disagreement between views — func_001AB770 stored its second argument there while func_001BB220 and func_001BB3C0 dereferenced it at +0x53C — so it is typed Obj53C * and func_001AB770's parameter with it; the function recompiled byte-identical that way, which is the evidence the two views describe one pointer. include/game_00/vec.h replaces ten byte-identical copies of a four-float typedef and resolves a name collision: func_001B6F00 had called its three-float struct Vec, the name the four-float record carried in the ten func_0016*/func_00175* helpers. The two layouts are now Vec4 and Vec3. All 22 rewritten functions were re-marked and every one is still objdiff 100.0 byte-identical; check.json is green and lint_c.py exits 0. No function was renamed: the naming census reports 0 of 138 matched functions with machine-checkable evidence and the Ghidra export exhausted (59 renamed in run 014, 0 renameable, 12 blocked by a duplicate name), so the rename table lists the candidate sets and why each failed. A type name is not a function name and none was written to renames.jsonl. next_step.py proposes S6 match-batch; that is the right next step, since naming evidence on this target now has to come from matching callers rather than from another export.

## Build check

`check.json`: ok = **True**, checked 2026-09-19T08:39:30Z, regime `full`; image 0x00100000–0x00509100, rebuilt 4231424 of 4231424 bytes; first diff None, 0 differing byte(s). Segments: crt0 ok; sdk_dma_graph ok; sdk_kernel ok; sdk_stdio ok; sdk_loadfile ok; sdk_mc ok; sdk_ipu ok; sdk_pad_scf ok.

## Step table

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

## Proposed next step

S6 match-batch — 5757 game function(s) still asm/wip; batch size 12
- note: external lane: 24 runner batch(es), 77 matched, $2.48 in state/runner-steps.jsonl (never a step of a run)

## Friction filed

1 entry (minor 1); stages attested: E, R, S, V, X; export: FRICTION-REPORT.md
- F-1 [minor/doctrine-gap] external lane emits a fresh local typedef per function, so duplicates accumulate until S8
