# RUNNER-REPORT — 2026-09-11-002 (MatchRunner 0.3.0)

- **Model:** zai:glm-5.3 · prompt v1 `a460da0f17ca`
- **Started / finished:** 2026-09-11T05:32:19Z / 2026-09-11T05:33:36Z
- **Functions:** 3 attempted · 3 matched · 0 parked · 0 error
- **Cost:** $0.0361 · 44,990 tokens · $0.012 per match
- **Final check_build:** ok=True check_build.py: rc=0 1.54s  check: OK — rebuilt image equals the original's loaded segment(s) 0x00100000-0x00509100 (4231424 bytes); regime full

## Functions

| function | size | state | attempts | best | tokens | usd | note |
|---|---|---|---|---|---|---|---|
| func_001A3700 | 36 | matched | 1 | 100.0 | 14780 | 0.005957 | marked from wip/func_001A3700/attempt-1.c |
| func_001A3730 | 24 | matched | 1 | 100.0 | 15059 | 0.022877 | marked from wip/func_001A3730/attempt-1.c |
| func_001A36D0 | 44 | matched | 1 | 100.0 | 15151 | 0.007314 | marked from wip/func_001A36D0/attempt-1.c |

## Batches

- batch 1: 3 matched / 3 · check True · gen_splat_yaml.py: rc=0 0.56s  config/SLPM_551.08.yaml written (69 subsegment(s), gp_value 0x00510470); include/macro.in

For the Claude Project's RESUME: `state/runner-steps.jsonl` holds one `match-batch-external` record per batch; re-run `check_build.py` before proposing the next step.
