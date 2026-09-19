# RUNNER-REPORT — 2026-09-19-009 (dsstep 0.1.0)

- **Model:** deepseek:ladder · prompt ds-v1 `0d9bb441e13f`
- **Ladder:** deepseek-flash/none x3 -> deepseek-flash/high x3 -> deepseek-v4-pro/max xrest
- **Started / finished:** 2026-09-19T07:35:46Z / 2026-09-19T07:41:33Z
- **Functions:** 12 attempted · 5 matched · 7 parked · 0 error
- **Cost:** $0.2097 · 3,413,677 tokens · $0.0419 per match
- **Final check_build:** ok=True check: OK — rebuilt image equals the original's loaded segment(s) 0x00100000-0x00509100 (4231424 bytes); regime full

## Functions

| function | size | state | attempts | best | tokens | usd | note |
|---|---|---|---|---|---|---|---|
| func_001B0550 | 544 | matched | 21 | 100.0 | 573074 | 0.035806 | marked from wip/func_001B0550/attempt-21.c |
| func_001B3AD0 | 80 | parked | 20 | 99.5 | 442506 | 0.016274 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 99.5 at wip/func_001B3AD0/attempt-2.c |
| func_001A04B0 | 640 | parked | 36 | 98.4 | 1135226 | 0.089639 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 98.4 at wip/func_001A04B0/attempt-12.c |
| func_001B3B70 | 548 | parked | 10 | 17.3 | 300900 | 0.029514 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 17.3 at wip/func_001B3B70/attempt-2.c |
| func_001B3F70 | 80 | parked | 10 | 99.0 | 216902 | 0.007468 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 99.0 at wip/func_001B3F70/attempt-2.c |
| func_001B4240 | 32 | matched | 2 | 100.0 | 39951 | 0.000440 | marked from wip/func_001B4240/attempt-2.c |
| func_001B42A0 | 128 | parked | 8 | 66.9 | 182957 | 0.008420 | dsstep 0.1.0: 2 byte-identical resubmissions in a row on deepseek-v4-pro/max, the top of t |
| func_001B4320 | 12 | matched | 1 | 100.0 | 19579 | 0.000246 | marked from wip/func_001B4320/attempt-1.c |
| func_001B4330 | 112 | parked | 10 | 79.6 | 227096 | 0.009780 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 79.6 at wip/func_001B4330/attempt-6.c |
| func_001B43A0 | 144 | parked | 10 | 92.8 | 235129 | 0.011385 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 92.8 at wip/func_001B43A0/attempt-3.c |
| func_0016E9E0 | 52 | matched | 1 | 100.0 | 20226 | 0.000377 | marked from wip/func_0016E9E0/attempt-1.c |
| func_0016E8F0 | 40 | matched | 1 | 100.0 | 20131 | 0.000352 | marked from wip/func_0016E8F0/attempt-1.c |

## Batches

- batch 1: 5 matched / 12 · check True · gen_splat_yaml.py: rc=0 0.3s; configure.py: rc=0 47.41s; check_build.py: rc=0 0.19s
- attempts per rung: deepseek-flash/none 28, deepseek-flash/high 19, deepseek-v4-pro/max 28

For the Claude Project's RESUME: `state/runner-steps.jsonl` holds one `match-batch-external` record per batch; re-run `check_build.py` before proposing the next step.
