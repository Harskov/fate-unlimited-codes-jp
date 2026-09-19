# RUNNER-REPORT — 2026-09-19-012 (dsstep 0.1.0)

- **Model:** deepseek:ladder · prompt ds-v1 `0d9bb441e13f`
- **Ladder:** deepseek-flash/none x3 -> deepseek-flash/high x3 -> deepseek-v4-pro/max xrest
- **Started / finished:** 2026-09-19T08:09:32Z / 2026-09-19T08:15:29Z
- **Functions:** 12 attempted · 4 matched · 8 parked · 0 error
- **Cost:** $0.2679 · 4,694,276 tokens · $0.0670 per match
- **Final check_build:** ok=True check: OK — rebuilt image equals the original's loaded segment(s) 0x00100000-0x00509100 (4231424 bytes); regime full

## Functions

| function | size | state | attempts | best | tokens | usd | note |
|---|---|---|---|---|---|---|---|
| func_001B3AD0 | 80 | parked | 47 | 99.5 | 1032240 | 0.032438 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 99.5 at wip/func_001B3AD0/attempt-2.c |
| func_001A04B0 | 640 | parked | 66 | 98.4 | 2107462 | 0.160511 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 98.4 at wip/func_001A04B0/attempt-12.c |
| func_001B76B0 | 56 | matched | 1 | 100.0 | 19967 | 0.000316 | marked from wip/func_001B76B0/attempt-1.c |
| func_001B76F0 | 100 | parked | 10 | 94.6 | 222609 | 0.008843 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 94.6 at wip/func_001B76F0/attempt-6.c |
| func_001B7BD0 | 12 | matched | 2 | 100.0 | 39458 | 0.000375 | marked from wip/func_001B7BD0/attempt-2.c |
| func_001B7BE0 | 12 | matched | 1 | 100.0 | 19572 | 0.000246 | marked from wip/func_001B7BE0/attempt-1.c |
| func_001B7E60 | 16 | parked | 10 | 35.0 | 208095 | 0.006029 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 35.0 at wip/func_001B7E60/attempt-1.c |
| func_001B8250 | 176 | parked | 10 | 72.8 | 244245 | 0.014055 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 72.8 at wip/func_001B8250/attempt-6.c |
| func_001B8300 | 184 | parked | 10 | 60.8 | 245785 | 0.014503 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 60.8 at wip/func_001B8300/attempt-10.c |
| func_001B83C0 | 184 | parked | 10 | 60.5 | 247230 | 0.014184 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 60.5 at wip/func_001B83C0/attempt-2.c |
| func_001B8480 | 184 | parked | 10 | 65.0 | 246729 | 0.015757 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 65.0 at wip/func_001B8480/attempt-5.c |
| func_001BB140 | 52 | matched | 3 | 100.0 | 60884 | 0.000672 | marked from wip/func_001BB140/attempt-3.c |

## Batches

- batch 1: 4 matched / 12 · check True · gen_splat_yaml.py: rc=0 0.28s; configure.py: rc=0 44.93s; check_build.py: rc=0 1.88s
- attempts per rung: deepseek-flash/none 29, deepseek-flash/high 26, deepseek-v4-pro/max 32

For the Claude Project's RESUME: `state/runner-steps.jsonl` holds one `match-batch-external` record per batch; re-run `check_build.py` before proposing the next step.
