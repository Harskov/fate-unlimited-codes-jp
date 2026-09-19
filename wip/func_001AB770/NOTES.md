# func_001AB770 @ 0x001AB770 — 36 bytes, segment game_00

Compiler: mwcps2-3.0.1b151-050317 `-O4,p`; m2c seed: ok; externs: 0 data, 1 functions.

Write attempt-1.c (function named exactly as above; include "ctx.c" declarations you need by copying them, not the file), then:

    python3 skills/dps2-toolkit/scripts/match.py --repo targets/<slug> try func_001AB770 wip/func_001AB770/attempt-1.c

On 100:  python3 skills/dps2-toolkit/scripts/ledger.py --repo targets/<slug> mark func_001AB770 --from wip/func_001AB770/attempt-N.c
Stuck after 3 substantive attempts:  match.py permute func_001AB770  then  ledger.py set-status func_001AB770 wip
