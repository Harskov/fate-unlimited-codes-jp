# Run 2026-09-19-014-consolidate — consolidate

- Target: fate-unlimited-codes-jp
- Step: consolidate (S8) — proposed by next_step.py
- Started: 2026-09-19T05:59:44Z · Finished: 2026-09-19T06:21:01Z
- Commit: the commit whose message starts `run 2026-09-19-014-consolidate:` (git log --grep)

## What changed

- Ledger: no status changes.
- The step's finding is that the naming census was reading the wrong file: xrefs.py --naming-census took the Ghidra hints from reference/ghidra/MANIFEST.json, which has no 'functions' key, and then compared them to our func_<addr> names, so it reported 'ghidra 0' whatever the S5 export contained. Read correctly - functions.json, keyed by address - the same export yields 71 recovered names, all 71 on a ledger function: 59 renameable and 12 blocked because one name (RFU091, RFU116_SetSyscall, AddIntcHandler, AddDmacHandler) covers several addresses. That 0 was about to send the report back to propose S5 ghidra-hints, which had already run; the fix is in skills/dps2-toolkit/scripts/xrefs.py with the pre-fix copy at _backup/run-fixes/2026-09-19-014-consolidate-xrefs.py (F-2). The 59 renames are the SDK/library-stub pass run 008's report proposed: PS2 kernel entry points (SetGsCrt, CreateThread, AddIntcHandler, sceSifGetReg) in sdk_dma_graph and sdk_loadfile, plus entry in crt0, each carrying the export's provenance as its evidence. None of the 94 matched functions gained a name - Ghidra recovered nothing for game code - so re-running S5 would change nothing and the census now says so instead of proposing it. Struct consolidation was examined and nothing was merged: the 35 local 'Obj' typedefs under src/game_00 share exactly one field offset, 32 of them reach no field past 0x100 against func_001AD250's 0x238C, and the 11 callers that reach two or more Obj-defining functions are all still asm, so no artifact establishes that any two are the same object; the rename table records the check. The one lint error is gone - func_001AE2F0's byte offset through a void* became a typed Node* element, re-marked at objdiff 100.0 with the object unchanged - and the four goto advisories now all carry an evidence note. Cost of the pass, filed as F-3: ledger.py rename rescans all 1421 source files per call, so 59 renames took about 12 minutes across five device_bash calls.

## Build check

`check.json`: ok = **True**, checked 2026-09-19T06:20:49Z, regime `full`; image 0x00100000–0x00509100, rebuilt 4231424 of 4231424 bytes; first diff None, 0 differing byte(s). Segments: crt0 ok; sdk_dma_graph ok; sdk_kernel ok; sdk_stdio ok; sdk_loadfile ok; sdk_mc ok; sdk_ipu ok; sdk_pad_scf ok.

## Step table

# Rename table — 2026-09-19-014-consolidate (S8 consolidate, fate-unlimited-codes-jp)

Every Ghidra-recovered name that landed on a ledger function, and what was done with it.
Source for all of them: the S5 headless export of run 2026-09-19-013 (Ghidra 12.1.3 + ghidra-emotionengine-reloaded v2.1.37, `reference/ghidra/MANIFEST.json`), matched to the ledger by address.

## Renamed (59)

| old | new | addr | status | segment | evidence |
|---|---|---|---|---|---|
| `func_00100008` | `entry` | 0x00100008 | asm | crt0 | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00102E60` | `SetGsCrt` | 0x00102E60 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00102E80` | `_Exit` | 0x00102E80 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00102EA0` | `_LoadExecPS2` | 0x00102EA0 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00102F10` | `SetVTLBRefillHandler` | 0x00102F10 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00102F60` | `RemoveIntcHandler` | 0x00102F60 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00102F90` | `RemoveDmacHandler` | 0x00102F90 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00102FA0` | `_EnableIntc` | 0x00102FA0 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00102FB0` | `_DisableIntc` | 0x00102FB0 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00102FC0` | `_EnableDmac` | 0x00102FC0 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00102FD0` | `_DisableDmac` | 0x00102FD0 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00102FE0` | `SetAlarm` | 0x00102FE0 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00103000` | `_iEnableIntc` | 0x00103000 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00103010` | `_iDisableIntc` | 0x00103010 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00103020` | `_iEnableDmac` | 0x00103020 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00103030` | `_iDisableDmac` | 0x00103030 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |

(first 25 lines; every row is in `rename-table.md`)

## Proposed next step

S6 match-batch — 5801 game function(s) still asm/wip; batch size 12
- note: external lane: 17 runner batch(es), 33 matched, $1.09 in state/runner-steps.jsonl (never a step of a run)

## Friction filed

3 entries (major 1, minor 2); stages attested: E, R, S, V, X; export: FRICTION-REPORT.md
- F-1 [minor/doctrine-gap] out-of-run change to config/policy.json found uncommitted at RESUME
- F-2 [major/tool-bug] naming census read MANIFEST.json for the Ghidra hints and matched them by name, so it always reported ghidra 0
- F-3 [minor/tool-gap] rename is O(all source files) per call and has no batch mode, so a 59-rename library pass costs ~12 minutes
