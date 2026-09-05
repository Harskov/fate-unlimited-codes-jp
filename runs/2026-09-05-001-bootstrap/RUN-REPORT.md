# Run 2026-09-05-001-bootstrap — bootstrap

- Target: fate-unlimited-codes-jp
- Step: bootstrap (S0) — proposed by next_step.py
- Started: 2026-09-05T19:27:00Z · Finished: 2026-09-05T19:43:57Z
- Commit: the commit whose message starts `run 2026-09-05-001-bootstrap:` (git log --grep)

## What changed

- Ledger: no status changes.
- tools/manifest.json: 7 tools, 4 compilers, assembler decision `debian-deb`, smoke tests 11/11 ok.
- venv without pip (ensurepip fails on the mount); git needs the lock sweep (git_mount.sh)

## Build check

n/a — this step precedes the first build (split-baseline)

## Step table

n/a

## Proposed next step

S1 extract — config/target.json missing

## Friction filed

3 entries (major 2, minor 1); stages attested: E, R, S, V, X; export: FRICTION-REPORT.md
- F-1 [minor/environment] python3 -m venv (with ensurepip) fails on the mounted folder
- F-2 [major/environment] git cannot unlink its lock and temp-object files on the mounted folder; every second git command stops on a stale index.lock
- F-3 [major/toolchain-drift] ASSUMPTION A2: neither decompals binutils nor ee-gcc2.96's ee-as runs in the VM; Debian bullseye binutils-mipsel-linux-gnu 2.35.2 (unpacked .deb) is the working EE assembler
