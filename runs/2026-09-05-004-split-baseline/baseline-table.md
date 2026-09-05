# Baseline table — split-baseline (S3)

| subsegment | file offset | type |
|---|---|---|
| main | 0x00000080 | asm |
| main_bss | 0x00409180 | bss |

splat 45.2 s; build 19.2 s (ninja, 2 asm objects); undefined address-named symbols added to config/undefined_syms.txt: 12
check.json: ok=True, image 0x00100000-0x00509100, 4231424 bytes, 0 differing bytes; link_regime full (A6 probe: runs/2026-09-05-004-split-baseline/a6-link-probe-check.json)
