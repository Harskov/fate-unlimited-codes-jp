# Code map — Fate/Unlimited Codes

Seeded from ledger/segments.json, the ledger and ledger/units.json (the map step, or `inventory.py code-map` for a target migrated after it); the docs pass replaces it with the per-symbol map. Functions counts the records that are neither library nor skipped-data, as the milestones do.

| Segment | Kind | Range | Functions | Library | Units |
|---|---|---|---|---|---|
| crt0 | game | 0x00100000-0x00100230 | 3 | 0 | 3 |
| sdk_dma_graph | sdk | 0x00100230-0x001036F0 | 1 | 185 | 0 |
| sdk_kernel | sdk | 0x001036F0-0x00107800 | 0 | 112 | 0 |
| sdk_stdio | sdk | 0x00107800-0x0010C1C0 | 0 | 63 | 0 |
| sdk_loadfile | sdk | 0x0010C1C0-0x0010F730 | 0 | 116 | 0 |
| sdk_mc | sdk | 0x0010F730-0x00111740 | 0 | 35 | 0 |
| sdk_ipu | sdk | 0x00111740-0x0011BC58 | 1 | 124 | 0 |
| sdk_pad_scf | sdk | 0x0011BC58-0x0011E260 | 0 | 69 | 0 |
| libc | libc | 0x0011E260-0x0012E040 | 1 | 138 | 0 |
| libm | libc | 0x0012E040-0x00133050 | 0 | 56 | 0 |
| cri_adx | sdk | 0x00133050-0x00158030 | 1 | 1429 | 0 |
| game_00 | game | 0x00158030-0x002A5FC0 | 3213 | 33 | 448 |
| game_render | game | 0x002A5FC0-0x002E6040 | 1056 | 0 | 552 |
| game_01 | game | 0x002E6040-0x003536B0 | 834 | 0 | 273 |
| sdk_cdvd | sdk | 0x003536B0-0x00353FF0 | 0 | 12 | 0 |
| game_02 | game | 0x00353FF0-0x0036EB30 | 178 | 27 | 24 |
| game_model | game | 0x0036EB30-0x00384580 | 546 | 0 | 34 |
| data_00 | data | 0x00384580-0x003B0000 | 0 | 0 | 0 |
| data_sdk | data | 0x003B0000-0x003D3000 | 0 | 0 | 0 |
| data_01 | data | 0x003D3000-0x004E2000 | 0 | 0 | 0 |
| rodata_str | rodata | 0x004E2000-0x00509100 | 0 | 0 | 0 |
| main_bss | bss | 0x00509100-0x00536280 | 0 | 0 | 0 |
