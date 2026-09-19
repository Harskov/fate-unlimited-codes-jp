# RUNNER-REPORT — 2026-09-19-013 (dsstep 0.1.0)

- **Model:** deepseek:ladder · prompt ds-v1 `0d9bb441e13f`
- **Ladder:** deepseek-flash/none x3 -> deepseek-flash/high x3 -> deepseek-v4-pro/max xrest
- **Started / finished:** 2026-09-19T08:15:46Z / 2026-09-19T08:20:45Z
- **Functions:** 12 attempted · 7 matched · 5 parked · 0 error
- **Cost:** $0.2692 · 4,953,130 tokens · $0.0385 per match
- **Final check_build:** ok=True check: OK — rebuilt image equals the original's loaded segment(s) 0x00100000-0x00509100 (4231424 bytes); regime full

## Functions

| function | size | state | attempts | best | tokens | usd | note |
|---|---|---|---|---|---|---|---|
| func_001B3AD0 | 80 | parked | 57 | 99.5 | 1251306 | 0.038542 | dsstep 0.1.0: 2 byte-identical resubmissions in a row on deepseek-v4-pro/max, the top of t |
| func_001A04B0 | 640 | parked | 76 | 98.4 | 2428819 | 0.182944 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 98.4 at wip/func_001A04B0/attempt-12.c |
| func_001BB220 | 80 | matched | 10 | 100.0 | 224207 | 0.009029 | marked from wip/func_001BB220/attempt-10.c |
| func_001BB270 | 52 | matched | 1 | 100.0 | 20029 | 0.000341 | marked from wip/func_001BB270/attempt-1.c |
| func_001BB2B0 | 56 | matched | 7 | 100.0 | 148940 | 0.004816 | marked from wip/func_001BB2B0/attempt-7.c |
| func_001BB2F0 | 140 | parked | 10 | 45.7 | 234604 | 0.011128 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 45.7 at wip/func_001BB2F0/attempt-9.c |
| func_001BB380 | 56 | parked | 10 | 74.3 | 218412 | 0.007715 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 74.3 at wip/func_001BB380/attempt-7.c |
| func_001BB3C0 | 84 | matched | 2 | 100.0 | 41412 | 0.000646 | marked from wip/func_001BB3C0/attempt-2.c |
| func_001BB4B0 | 168 | parked | 10 | 63.5 | 241868 | 0.012120 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 63.5 at wip/func_001BB4B0/attempt-10.c |
| func_001BB5B0 | 56 | matched | 3 | 100.0 | 61677 | 0.000760 | marked from wip/func_001BB5B0/attempt-3.c |
| func_001BB690 | 56 | matched | 1 | 100.0 | 20194 | 0.000374 | marked from wip/func_001BB690/attempt-1.c |
| func_001BB6D0 | 56 | matched | 3 | 100.0 | 61662 | 0.000749 | marked from wip/func_001BB6D0/attempt-3.c |

## Batches

- batch 1: 7 matched / 12 · check True · gen_splat_yaml.py: rc=0 0.29s; configure.py: rc=0 47.8s; check_build.py: rc=0 1.98s
- attempts per rung: deepseek-flash/none 30, deepseek-flash/high 22, deepseek-v4-pro/max 25

For the Claude Project's RESUME: `state/runner-steps.jsonl` holds one `match-batch-external` record per batch; re-run `check_build.py` before proposing the next step.
