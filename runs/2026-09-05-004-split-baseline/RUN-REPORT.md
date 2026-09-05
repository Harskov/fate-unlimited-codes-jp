# Run 2026-09-05-004-split-baseline — split-baseline

- Target: fate-unlimited-codes-jp
- Step: split-baseline (S3) — proposed by next_step.py
- Started: 2026-09-05T20:23:11Z · Finished: 2026-09-05T20:29:11Z
- Commit: the commit whose message starts `run 2026-09-05-004-split-baseline:` (git log --grep)

## What changed

- Ledger: no status changes.
- Baseline: link regime `full`; splat YAML and symbol_addrs.txt written.
- A6 probe (full link regime): one calibrated C object linked at 0x77B80, image still byte-identical; the initial yaml is restored so the committed baseline has zero C.

## Build check

`check.json`: ok = **True**, checked 2026-09-05T20:28:24Z, regime `full`; image 0x00100000–0x00509100, rebuilt 4231424 of 4231424 bytes; first diff None, 0 differing byte(s). Segments: main ok.

## Step table

# Baseline table — split-baseline (S3)

| subsegment | file offset | type |
|---|---|---|
| main | 0x00000080 | asm |
| main_bss | 0x00409180 | bss |

splat 45.2 s; build 19.2 s (ninja, 2 asm objects); undefined address-named symbols added to config/undefined_syms.txt: 12
check.json: ok=True, image 0x00100000-0x00509100, 4231424 bytes, 0 differing bytes; link_regime full (A6 probe: runs/2026-09-05-004-split-baseline/a6-link-probe-check.json)

## Proposed next step

S4 segment-map — ledger/segments.json missing or provisional

## Friction filed

2 entries (minor 1, papercut 1); stages attested: E, R, S, V, X; export: FRICTION-REPORT.md
- F-1 [minor/tool-bug] First link of the split image failed on 11 address-named symbols spimdisasm referenced but placed nowhere, plus one .L label referenced across a file split
- F-2 [papercut/environment] ninja cannot remove .ninja_lock on the mount and exits non-zero after a complete build
