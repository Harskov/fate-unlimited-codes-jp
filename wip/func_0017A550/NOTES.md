# func_0017A550 @ 0x0017A550 — 64 bytes, segment game_00

Compiler: mwcps2-3.0.1b151-050317 `-O4,p`; m2c seed: ok; externs: 0 data, 1 functions.

Write attempt-1.c (function named exactly as above; include "ctx.c" declarations you need by copying them, not the file), then:

    python3 skills/dps2-toolkit/scripts/match.py --repo targets/<slug> try func_0017A550 wip/func_0017A550/attempt-1.c

On 100:  python3 skills/dps2-toolkit/scripts/ledger.py --repo targets/<slug> mark func_0017A550 --from wip/func_0017A550/attempt-N.c
Stuck after 3 substantive attempts:  match.py permute func_0017A550  then  ledger.py set-status func_0017A550 wip
