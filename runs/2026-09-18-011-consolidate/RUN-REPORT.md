# Run 2026-09-18-011-consolidate — consolidate

- Target: fate-unlimited-codes-jp
- Step: consolidate (S8) — proposed by next_step.py
- Started: 2026-09-18T20:32:26Z · Finished: 2026-09-18T20:44:09Z
- Commit: the commit whose message starts `run 2026-09-18-011-consolidate:` (git log --grep)

## What changed

- Ledger: no status changes.
- The eight lint error findings were the whole of this consolidate's rewriting work, and all eight came from one unsettled layout. K1 6.9 left D_0051D890 'layout unresolved' and told S8 to settle it from every function that touches the symbol; the deciding function is func_0019A9A0 (still asm), which forms the bare symbol plus i*0x18 and then adds 0xE8 into a live pointer (addiu $s0, $v1, 0xE8) before reading 0x0 through it. That is an element pointer with a constant step, not a second struct: the record is 0x18 bytes and the accessors reach records i+9 and i+10. The struct-member spelling (D_0051D890.list[i].unk_0) folds the 0xE8 into the relocation and scores 98.6 — K1 6.9 already recorded that result from remediation 7, and re-running it is this run's one friction entry. All seven accessors plus func_0019A9A0 recompiled byte-identical in the element-pointer form and were re-marked; lint_c.py went from 8 error findings to 0. Of the six goto advisories, only func_0019D6E0's was gratuitous: break is byte-identical there. The other two functions' gotos are the source form — early returns score 50.0 in func_0017A590 (the target branches to a common epilogue, the structured spelling produces beqzl with the return value in the annulled slot) and 58.2 in func_0019D0B0 — so both kept the goto and gained the ledger note the advisory needs. The three D_0051C870 functions turned out to be one allocate/release/lookup family over a 10-entry, 8-byte slot table and now share a header, with the owner word typed as int * rather than cast from one. No name was written: all five admitted evidence sources come up empty on the 63 matched functions, and the one that would not is S5 ghidra-hints, which has never been run on this target.

## Build check

`check.json`: ok = **True**, checked 2026-09-18T20:43:57Z, regime `full`; image 0x00100000–0x00509100, rebuilt 4231424 of 4231424 bytes; first diff None, 0 differing byte(s). Segments: crt0 ok; sdk_dma_graph ok; sdk_kernel ok; sdk_stdio ok; sdk_loadfile ok; sdk_mc ok; sdk_ipu ok; sdk_pad_scf ok.

## Step table

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


(first 25 lines; every row is in `rename-table.md`)

## Proposed next step

S6 match-batch — 5832 game function(s) still asm/wip; batch size 12
- note: external lane: 6 runner batch(es), 14 matched, $0.29 in state/runner-steps.jsonl (never a step of a run)

## Friction filed

1 entry (papercut 1); stages attested: E, R, S, V, X; export: FRICTION-REPORT.md
- F-1 [papercut/operator-drift] re-ran a spelling K1 6.9 already scored
