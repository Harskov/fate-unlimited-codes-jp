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
| `func_00103060` | `CreateThread` | 0x00103060 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00103070` | `DeleteThread` | 0x00103070 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00103080` | `_StartThread` | 0x00103080 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_001030A0` | `ExitDeleteThread` | 0x001030A0 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_001030B0` | `TerminateThread` | 0x001030B0 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_001030F0` | `ChangeThreadPriority` | 0x001030F0 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00103110` | `RotateThreadReadyQueue` | 0x00103110 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00103150` | `GetThreadId` | 0x00103150 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00103160` | `ReferThreadStatus` | 0x00103160 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00103170` | `iReferThreadStatus` | 0x00103170 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00103180` | `SleepThread` | 0x00103180 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00103190` | `WakeupThread` | 0x00103190 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_001031A0` | `_iWakeupThread` | 0x001031A0 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_001031D0` | `SuspendThread` | 0x001031D0 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_001031E0` | `_iSuspendThread` | 0x001031E0 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_001031F0` | `ResumeThread` | 0x001031F0 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00103240` | `EndOfHeap` | 0x00103240 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00103260` | `CreateSema` | 0x00103260 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00103270` | `DeleteSema` | 0x00103270 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00103280` | `SignalSema` | 0x00103280 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00103290` | `iSignalSema` | 0x00103290 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_001032A0` | `WaitSema` | 0x001032A0 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_001032B0` | `PollSema` | 0x001032B0 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00103300` | `SetOsdConfigParam` | 0x00103300 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00103310` | `GetOsdConfigParam` | 0x00103310 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_001034E0` | `FlushCache` | 0x001034E0 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00103530` | `sceSifStopDma` | 0x00103530 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00103570` | `GetOsdConfigParam2` | 0x00103570 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00103580` | `GsGetIMR` | 0x00103580 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_001035A0` | `GsPutIMR` | 0x001035A0 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_001035D0` | `SetVSyncFlag` | 0x001035D0 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00103600` | `sceSifDmaStat` | 0x00103600 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00103620` | `sceSifSetDma` | 0x00103620 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00103630` | `isceSifSetDma` | 0x00103630 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00103640` | `sceSifSetDChain` | 0x00103640 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00103650` | `isceSifSetDChain` | 0x00103650 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00103660` | `sceSifSetReg` | 0x00103660 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00103670` | `sceSifGetReg` | 0x00103670 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00103680` | `_ExecOSD` | 0x00103680 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_00103690` | `Deci2Call` | 0x00103690 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_001036C0` | `GetMemorySize` | 0x001036C0 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_001036D0` | `_InitTLB` | 0x001036D0 | library | sdk_dma_graph | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |
| `func_0010CE60` | `RFU086_WaitEvnetFlag` | 0x0010CE60 | library | sdk_loadfile | Ghidra recovered symbol at that address (S5 run 2026-09-19-013) |

## Not renamed — one Ghidra name on several addresses (12)

A name that identifies more than one address does not identify a function. These are the PS2 SDK's reserved syscall slots and the paired Intc/Dmac stubs; the export gives no way to tell them apart, so the systematic name stays.

| ghidra name | addresses | ledger functions |
|---|---|---|
| `AddDmacHandler` | 0x102f70, 0x102f80 | `func_00102F70`, `func_00102F80` |
| `AddIntcHandler` | 0x102f40, 0x102f50 | `func_00102F40`, `func_00102F50` |
| `RFU091` | 0x10cd58, 0x10d808, 0x10dc28 | `func_0010CD58`, `func_0010D808`, `func_0010DC28` |
| `RFU116_SetSyscall` | 0x10cd68, 0x10d748, 0x10d7b0, 0x10d970, 0x10dbd0 | `func_0010CD68`, `func_0010D748`, `func_0010D7B0`, `func_0010D970`, `func_0010DBD0` |

## Rejected — Ghidra placeholder, not a recovered name (18)

`caseD_*` / `switchD_*` are Ghidra's own labels for switch arms, derived from the structure it found, not names it recovered. They carry no information the systematic name does not.

| ledger function | ghidra label | addr |
|---|---|---|
| `func_00168280` | `caseD_12` | 0x00168280 |
| `func_0016D230` | `caseD_11` | 0x0016D230 |
| `func_0016EA20` | `caseD_10` | 0x0016EA20 |
| `func_0016F720` | `caseD_f` | 0x0016F720 |
| `func_00171210` | `caseD_e` | 0x00171210 |
| `func_00171E90` | `caseD_d` | 0x00171E90 |
| `func_001723B0` | `caseD_c` | 0x001723B0 |
| `func_001727B0` | `caseD_b` | 0x001727B0 |
| `func_00173190` | `caseD_a` | 0x00173190 |
| `func_001735C0` | `caseD_9` | 0x001735C0 |
| `func_001736F0` | `caseD_8` | 0x001736F0 |
| `func_00173E60` | `caseD_7` | 0x00173E60 |
| `func_001740E0` | `caseD_6` | 0x001740E0 |
| `func_00174600` | `caseD_5` | 0x00174600 |
| `func_00174A80` | `caseD_4` | 0x00174A80 |
| `func_00174CE0` | `caseD_3` | 0x00174CE0 |
| `func_001750B0` | `caseD_1` | 0x001750B0 |
| `func_00175390` | `caseD_0` | 0x00175390 |

## Struct consolidation — examined, nothing merged

35 files under `src/game_00/` each define a local `typedef struct Obj`. They were checked for the 'one object, one struct' merge and the evidence does not support one:

- Of the 35, 32 reach no field past 0x100 and one (`func_001AD250`) reaches 0x238C-0x23A8: they are not one object by size class.
- Exactly one field offset (0x3C) appears in more than one of the 35 definitions. There is no overlapping layout to merge.
- 11 callers reach two or more of the `Obj`-defining functions, which is the only identity evidence available — and every one of those callers is still `asm`. A caller may pass a different object to each callee, so an unmatched caller cannot establish identity.

`Obj` is the default name a match gives its pointer parameter, so 35 of them is a naming coincidence, not 35 views of one object. Merging them would assert an identity no artifact supports. The work is unblocked by matching those 11 callers, not by more S8 effort.

