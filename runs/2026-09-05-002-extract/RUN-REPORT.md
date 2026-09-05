# Run 2026-09-05-002-extract — extract

- Target: fate-unlimited-codes-jp
- Step: extract (S1) — proposed by next_step.py
- Started: 2026-09-05T19:45:17Z · Finished: 2026-09-05T19:46:17Z
- Commit: the commit whose message starts `run 2026-09-05-002-extract:` (git log --grep)

## What changed

- Ledger: no status changes.
- config/target.json: `SLPM_551.08` 4231984 bytes sha1 `825b867ecf30b761b8261a528e86101aa4bc03ca`, .comment `MW MIPS C Compiler (2.4.1.01)`, 20 IRX modules; DOSSIER.md written.

## Build check

n/a — this step precedes the first build (split-baseline)

## Step table

n/a

## Proposed next step

S2 calibrate — config/compiler.json missing

## Friction filed

1 entry (papercut 1); stages attested: E, R, S, V, X; export: FRICTION-REPORT.md
- F-1 [papercut/tool-bug] extract_elf.py first pass listed IRX names from error strings and found 3 sce* identifiers instead of the disc's MODULES list and the design's sce* counts
