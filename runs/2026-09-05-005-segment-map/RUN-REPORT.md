# Run 2026-09-05-005-segment-map — segment-map

- Target: fate-unlimited-codes-jp
- Step: segment-map (S4) — proposed by next_step.py
- Started: 2026-09-05T22:17:21Z · Finished: 2026-09-05T22:38:11Z
- Commit: the commit whose message starts `run 2026-09-05-005-segment-map:` (git log --grep)

## What changed

- Ledger: functions 8 → 8234 (+8226), asm 0 → 5887 (+5887), library 0 → 2339 (+2339).
- Judgment. The image is laid out SDK-first: crt0 at 0x00100000, then eight Sony library blocks in link order (libdma/libgraph, kernel+sifrpc, stdio, loadfile, libmc, libipu, libpad/libscf) through 0x0011E260, then libc and libm, then CRI ADX/Sofdec middleware to 0x00158030, then 2.3 MB of game code, then a 0x940 libcdvd island at 0x003536B0, then the character-model cluster to the end of text at 0x00384580. The decisive evidence is the diagnostic-string block at 0x004E2000-0x004E3400, whose 97 referencing functions all sit below 0x00128168 and fall into per-library address runs with no overlap; the PsII<lib>3100 version stamps at 0x003B0380-0x003B1EE0 corroborate the same library set, and PsIIlibcdvd standing alone at 0x004DA440 corroborates libcdvd being linked after the game objects. Boundaries inside the SDK block are the nearest 16-byte-aligned function start below each cluster's first referencing function. game_render is typed game, not sdk: its strings (FastIm3DTransform, PS2AllMatProcessInitData, toon ink stream) name a renderer but nothing shows a third-party binary library, and typing it sdk would park 1056 matchable functions as library. sdk_cdvd is deliberately narrow (0x940, 12 functions) for the same reason - an over-wide sdk segment costs matchable game code, an over-narrow one costs only some wasted matching effort. game_02 (0x00353FF0-0x0036EB30, 205 functions) has no string evidence at all and is typed game by position. The four data segments split on measured content, not on a rodata/data distinction the target does not carry: the ELF has one PROGBITS section (WAX) covering 0x00100000-0x00509100, so only rodata_str, 70-85 percent printable with ~3500 strings, is typed rodata; data_00 is the one region no function references directly. Two other findings worth carrying forward: the S2 calibration drew 4 of its 8 candidates from library code (sdk_dma_graph, sdk_ipu, libc, cri_adx), while all 3 byte-identical matches landed in game_00 - the pinned compiler is confirmed against game code, not only against SDK objects; and the first split of this segment map was reported green by a stale ELF (friction F-2), so the green quoted here was confirmed against a link timestamped after the split.

## Build check

`check.json`: ok = **True**, checked 2026-09-05T22:38:00Z, regime `full`; image 0x00100000–0x00509100, rebuilt 4231424 of 4231424 bytes; first diff None, 0 differing byte(s). Segments: crt0 ok; sdk_dma_graph ok; sdk_kernel ok; sdk_stdio ok; sdk_loadfile ok; sdk_mc ok; sdk_ipu ok; sdk_pad_scf ok.

## Step table

# Segment table — run 2026-09-05-005-segment-map (S4 segment-map)

`ledger/segments.json` provisional: False · 22 segments · 8234 functions imported · `build/check.json` ok

| # | segment | kind | start | end | size | funcs | statuses |
|---|---|---|---|---|---|---|---|
| 1 | `crt0` | game | 0x00100000 | 0x00100230 | 0x230 | 4 | asm 4 |
| 2 | `sdk_dma_graph` | sdk | 0x00100230 | 0x00103F60 | 0x3d30 | 216 | library 215, wip 1 |
| 3 | `sdk_kernel` | sdk | 0x00103F60 | 0x00107800 | 0x38a0 | 82 | library 82 |
| 4 | `sdk_stdio` | sdk | 0x00107800 | 0x0010C1C0 | 0x49c0 | 63 | library 63 |
| 5 | `sdk_loadfile` | sdk | 0x0010C1C0 | 0x0010E080 | 0x1ec0 | 77 | library 77 |
| 6 | `sdk_mc` | sdk | 0x0010E080 | 0x00111740 | 0x36c0 | 74 | library 74 |
| 7 | `sdk_ipu` | sdk | 0x00111740 | 0x0011B470 | 0x9d30 | 116 | library 115, wip 1 |
| 8 | `sdk_pad_scf` | sdk | 0x0011B470 | 0x0011E260 | 0x2df0 | 78 | library 78 |
| 9 | `libc` | libc | 0x0011E260 | 0x0012E040 | 0xfde0 | 139 | library 138, wip 1 |
| 10 | `libm` | libc | 0x0012E040 | 0x00133050 | 0x5010 | 56 | library 56 |
| 11 | `cri_adx` | sdk | 0x00133050 | 0x00158030 | 0x24fe0 | 1430 | library 1429, wip 1 |
| 12 | `game_00` | game | 0x00158030 | 0x002A5FC0 | 0x14df90 | 3246 | asm 3242, matched 3, wip 1 |
| 13 | `game_render` | game | 0x002A5FC0 | 0x002E6040 | 0x40080 | 1056 | asm 1056 |
| 14 | `game_01` | game | 0x002E6040 | 0x003536B0 | 0x6d670 | 834 | asm 834 |
| 15 | `sdk_cdvd` | sdk | 0x003536B0 | 0x00353FF0 | 0x940 | 12 | library 12 |
| 16 | `game_02` | game | 0x00353FF0 | 0x0036EB30 | 0x1ab40 | 205 | asm 205 |
| 17 | `game_model` | game | 0x0036EB30 | 0x00384580 | 0x15a50 | 546 | asm 546 |
| 18 | `data_00` | data | 0x00384580 | 0x003B0000 | 0x2ba80 | 0 | — |
| 19 | `data_sdk` | data | 0x003B0000 | 0x003D3000 | 0x23000 | 0 | — |

(first 25 lines; every row is in `segment-table.md`)

## Proposed next step

S6 match-batch — 5892 game function(s) still asm/wip; batch size 12

## Friction filed

6 entries (blocker 3, major 2, minor 1); stages attested: E, R, S, V, X; export: FRICTION-REPORT.md
- F-1 [blocker/doc-gap] config/symbol_addrs.txt header used # comments; splat rejects them
- F-2 [blocker/false-signal] configure.py reported build rc=0 and check_build.py OK while ninja had failed and the ELF was stale
- F-3 [major/tool-bug] splat emits build/asm/data/bss.bss.s.o in the ld but writes no asm/data/bss.bss.s when the bss segment is named 'bss'
- F-4 [major/doctrine-gap] segment boundaries must be 16-byte aligned (subalign: 16); three function-aligned boundaries were not, and the check went red
- F-5 [blocker/tool-gap] gen_splat_yaml.py sets no string-guesser level, so data/rodata subsegments do not round-trip
- F-6 [minor/tool-gap] ledger.py import-functions leaves segment null on entries that already exist
