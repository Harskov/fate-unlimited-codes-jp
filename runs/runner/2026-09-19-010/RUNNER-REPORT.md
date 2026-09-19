# RUNNER-REPORT — 2026-09-19-010 (dsstep 0.1.0)

- **Model:** deepseek:ladder · prompt ds-v1 `0d9bb441e13f`
- **Ladder:** deepseek-flash/none x3 -> deepseek-flash/high x3 -> deepseek-v4-pro/max xrest
- **Started / finished:** 2026-09-19T07:51:45Z / 2026-09-19T07:56:28Z
- **Functions:** 12 attempted · 6 matched · 6 parked · 0 error
- **Cost:** $0.1860 · 3,501,065 tokens · $0.0310 per match
- **Final check_build:** ok=True check: OK — rebuilt image equals the original's loaded segment(s) 0x00100000-0x00509100 (4231424 bytes); regime full

## Functions

| function | size | state | attempts | best | tokens | usd | note |
|---|---|---|---|---|---|---|---|
| func_001B3AD0 | 80 | parked | 30 | 99.5 | 661247 | 0.022859 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 99.5 at wip/func_001B3AD0/attempt-2.c |
| func_001B3F70 | 80 | matched | 18 | 100.0 | 389425 | 0.012867 | marked from wip/func_001B3F70/attempt-18.c |
| func_001A04B0 | 640 | parked | 46 | 98.4 | 1459332 | 0.113302 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 98.4 at wip/func_001A04B0/attempt-12.c |
| func_001B57E0 | 20 | parked | 10 | 95.0 | 209566 | 0.006101 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 95.0 at wip/func_001B57E0/attempt-1.c |
| func_001B5800 | 8 | matched | 1 | 100.0 | 19521 | 0.000234 | marked from wip/func_001B5800/attempt-1.c |
| func_0016D1E0 | 68 | parked | 10 | 83.5 | 224365 | 0.009171 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 83.5 at wip/func_0016D1E0/attempt-10.c |
| func_0016D100 | 212 | parked | 10 | 45.4 | 250285 | 0.014165 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 45.4 at wip/func_0016D100/attempt-1.c |
| func_0016D0B0 | 68 | matched | 1 | 100.0 | 20435 | 0.000415 | marked from wip/func_0016D0B0/attempt-1.c |
| func_0016D070 | 52 | matched | 1 | 100.0 | 20231 | 0.000376 | marked from wip/func_0016D070/attempt-1.c |
| func_0016D000 | 20 | matched | 1 | 100.0 | 19890 | 0.000317 | marked from wip/func_0016D000/attempt-1.c |
| func_0016CFD0 | 40 | matched | 1 | 100.0 | 20096 | 0.000351 | marked from wip/func_0016CFD0/attempt-1.c |
| func_001B5DC0 | 12 | parked | 10 | 65.0 | 206672 | 0.005876 | dsstep 0.1.0: 2 byte-identical resubmissions in a row on deepseek-v4-pro/max, the top of t |

## Batches

- batch 1: 6 matched / 12 · check True · gen_splat_yaml.py: rc=0 0.27s; configure.py: rc=0 43.6s; check_build.py: rc=0 1.71s
- attempts per rung: deepseek-flash/none 25, deepseek-flash/high 22, deepseek-v4-pro/max 26

For the Claude Project's RESUME: `state/runner-steps.jsonl` holds one `match-batch-external` record per batch; re-run `check_build.py` before proposing the next step.
