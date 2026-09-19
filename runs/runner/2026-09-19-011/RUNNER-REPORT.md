# RUNNER-REPORT — 2026-09-19-011 (dsstep 0.1.0)

- **Model:** deepseek:ladder · prompt ds-v1 `0d9bb441e13f`
- **Ladder:** deepseek-flash/none x3 -> deepseek-flash/high x3 -> deepseek-v4-pro/max xrest
- **Started / finished:** 2026-09-19T07:57:04Z / 2026-09-19T08:01:49Z
- **Functions:** 12 attempted · 7 matched · 5 parked · 0 error
- **Cost:** $0.2114 · 4,035,922 tokens · $0.0302 per match
- **Final check_build:** ok=True check: OK — rebuilt image equals the original's loaded segment(s) 0x00100000-0x00509100 (4231424 bytes); regime full

## Functions

| function | size | state | attempts | best | tokens | usd | note |
|---|---|---|---|---|---|---|---|
| func_001B57E0 | 20 | matched | 12 | 100.0 | 249238 | 0.006366 | marked from wip/func_001B57E0/attempt-12.c |
| func_001B3AD0 | 80 | parked | 37 | 99.5 | 810975 | 0.026046 | dsstep 0.1.0: 2 byte-identical resubmissions in a row on deepseek-v4-pro/max, the top of t |
| func_001A04B0 | 640 | parked | 56 | 98.4 | 1784345 | 0.137439 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 98.4 at wip/func_001A04B0/attempt-12.c |
| func_001B5F00 | 40 | parked | 10 | 70.9 | 221163 | 0.008535 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 70.9 at wip/func_001B5F00/attempt-2.c |
| func_001B5F30 | 12 | matched | 7 | 100.0 | 141476 | 0.003159 | marked from wip/func_001B5F30/attempt-7.c |
| func_001B6220 | 12 | matched | 2 | 100.0 | 39210 | 0.000347 | marked from wip/func_001B6220/attempt-2.c |
| func_001B6F00 | 196 | matched | 5 | 100.0 | 112590 | 0.002338 | marked from wip/func_001B6F00/attempt-5.c |
| func_001B7230 | 52 | matched | 2 | 100.0 | 40594 | 0.000514 | marked from wip/func_001B7230/attempt-2.c |
| func_001B7460 | 56 | matched | 7 | 100.0 | 147520 | 0.004361 | marked from wip/func_001B7460/attempt-7.c |
| func_001B74A0 | 56 | matched | 1 | 100.0 | 20134 | 0.000342 | marked from wip/func_001B74A0/attempt-1.c |
| func_001B74E0 | 120 | parked | 10 | 76.8 | 231117 | 0.010199 | dsstep 0.1.0: 2 byte-identical resubmissions in a row on deepseek-v4-pro/max, the top of t |
| func_001B7560 | 152 | parked | 10 | 53.3 | 237560 | 0.011788 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 53.3 at wip/func_001B7560/attempt-6.c |

## Batches

- batch 1: 7 matched / 12 · check True · gen_splat_yaml.py: rc=0 0.27s; configure.py: rc=0 45.01s; check_build.py: rc=0 1.81s
- attempts per rung: deepseek-flash/none 30, deepseek-flash/high 24, deepseek-v4-pro/max 19

For the Claude Project's RESUME: `state/runner-steps.jsonl` holds one `match-batch-external` record per batch; re-run `check_build.py` before proposing the next step.
