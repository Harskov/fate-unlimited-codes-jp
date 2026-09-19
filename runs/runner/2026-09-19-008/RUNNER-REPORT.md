# RUNNER-REPORT — 2026-09-19-008 (dsstep 0.1.0)

- **Model:** deepseek:ladder · prompt ds-v1 `0d9bb441e13f`
- **Ladder:** deepseek-flash/none x3 -> deepseek-flash/high x3 -> deepseek-v4-pro/max xrest
- **Started / finished:** 2026-09-19T07:24:08Z / 2026-09-19T07:28:51Z
- **Functions:** 12 attempted · 7 matched · 5 parked · 0 error
- **Cost:** $0.1530 · 2,616,969 tokens · $0.0219 per match
- **Final check_build:** ok=True check: OK — rebuilt image equals the original's loaded segment(s) 0x00100000-0x00509100 (4231424 bytes); regime full

## Functions

| function | size | state | attempts | best | tokens | usd | note |
|---|---|---|---|---|---|---|---|
| func_001B04D0 | 120 | matched | 17 | 100.0 | 380966 | 0.020108 | marked from wip/func_001B04D0/attempt-17.c |
| func_001B0550 | 544 | parked | 19 | 99.3 | 523474 | 0.035028 | dsstep 0.1.0: 2 byte-identical resubmissions in a row on deepseek-v4-pro/max, the top of t |
| func_001A04B0 | 640 | parked | 26 | 98.4 | 808866 | 0.064936 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 98.4 at wip/func_001A04B0/attempt-12.c |
| func_001B2E60 | 144 | matched | 1 | 100.0 | 21402 | 0.000606 | marked from wip/func_001B2E60/attempt-1.c |
| func_0016F6D0 | 68 | matched | 1 | 100.0 | 20254 | 0.000388 | marked from wip/func_0016F6D0/attempt-1.c |
| func_0016F680 | 68 | matched | 1 | 100.0 | 20300 | 0.000394 | marked from wip/func_0016F680/attempt-1.c |
| func_001B35C0 | 32 | matched | 4 | 100.0 | 81273 | 0.000996 | marked from wip/func_001B35C0/attempt-4.c |
| func_001B36A0 | 96 | parked | 10 | 65.7 | 231338 | 0.010568 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 65.7 at wip/func_001B36A0/attempt-8.c |
| func_001B38F0 | 44 | matched | 2 | 100.0 | 40541 | 0.000475 | marked from wip/func_001B38F0/attempt-2.c |
| func_001B3920 | 60 | matched | 2 | 100.0 | 40648 | 0.000511 | marked from wip/func_001B3920/attempt-2.c |
| func_001B3AD0 | 80 | parked | 10 | 99.5 | 219345 | 0.008068 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 99.5 at wip/func_001B3AD0/attempt-2.c |
| func_001B3B20 | 76 | parked | 10 | 90.8 | 228562 | 0.010963 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 90.8 at wip/func_001B3B20/attempt-1.c |

## Batches

- batch 1: 7 matched / 12 · check True · gen_splat_yaml.py: rc=0 0.28s; configure.py: rc=0 45.21s; check_build.py: rc=0 1.73s
- attempts per rung: deepseek-flash/none 26, deepseek-flash/high 21, deepseek-v4-pro/max 20

For the Claude Project's RESUME: `state/runner-steps.jsonl` holds one `match-batch-external` record per batch; re-run `check_build.py` before proposing the next step.
