# RUNNER-REPORT — 2026-09-19-007 (dsstep 0.1.0)

- **Model:** deepseek:ladder · prompt ds-v1 `0d9bb441e13f`
- **Ladder:** deepseek-flash/none x3 -> deepseek-flash/high x3 -> deepseek-v4-pro/max xrest
- **Started / finished:** 2026-09-19T07:15:17Z / 2026-09-19T07:19:36Z
- **Functions:** 12 attempted · 8 matched · 4 parked · 0 error
- **Cost:** $0.0992 · 1,427,983 tokens · $0.0124 per match
- **Final check_build:** ok=True check: OK — rebuilt image equals the original's loaded segment(s) 0x00100000-0x00509100 (4231424 bytes); regime full

## Functions

| function | size | state | attempts | best | tokens | usd | note |
|---|---|---|---|---|---|---|---|
| func_001B0380 | 8 | matched | 1 | 100.0 | 19829 | 0.002908 | marked from wip/func_001B0380/attempt-1.c |
| func_001B0390 | 12 | matched | 3 | 100.0 | 60097 | 0.000521 | marked from wip/func_001B0390/attempt-3.c |
| func_001B03A0 | 12 | matched | 1 | 100.0 | 19768 | 0.000275 | marked from wip/func_001B03A0/attempt-1.c |
| func_001B03B0 | 12 | matched | 1 | 100.0 | 19472 | 0.000230 | marked from wip/func_001B03B0/attempt-1.c |
| func_001B03C0 | 12 | matched | 1 | 100.0 | 19496 | 0.000233 | marked from wip/func_001B03C0/attempt-1.c |
| func_001B0410 | 64 | parked | 10 | 70.0 | 217731 | 0.022400 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 70.0 at wip/func_001B0410/attempt-8.c |
| func_001B04D0 | 120 | parked | 10 | 96.7 | 227024 | 0.014723 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 96.7 at wip/func_001B04D0/attempt-7.c |
| func_001B0550 | 544 | parked | 10 | 99.3 | 279285 | 0.020305 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 99.3 at wip/func_001B0550/attempt-1.c |
| func_001A04B0 | 640 | parked | 16 | 98.4 | 485444 | 0.036456 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 98.4 at wip/func_001A04B0/attempt-12.c |
| func_001B13B0 | 16 | matched | 1 | 100.0 | 19560 | 0.000249 | marked from wip/func_001B13B0/attempt-1.c |
| func_001B13C0 | 128 | matched | 1 | 100.0 | 20694 | 0.000481 | marked from wip/func_001B13C0/attempt-1.c |
| func_001711F0 | 28 | matched | 2 | 100.0 | 39583 | 0.000403 | marked from wip/func_001711F0/attempt-2.c |

## Batches

- batch 1: 8 matched / 12 · check True · gen_splat_yaml.py: rc=0 0.26s; configure.py: rc=0 55.84s; check_build.py: rc=0 1.59s
- attempts per rung: deepseek-flash/none 23, deepseek-flash/high 12, deepseek-v4-pro/max 16

For the Claude Project's RESUME: `state/runner-steps.jsonl` holds one `match-batch-external` record per batch; re-run `check_build.py` before proposing the next step.
