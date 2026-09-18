# RUNNER-REPORT — 2026-09-18-002 (dsstep 0.1.0)

- **Model:** deepseek:deepseek-flash · prompt ds-v1 `bdbe8fe7c46f`
- **Started / finished:** 2026-09-18T16:21:31Z / 2026-09-18T16:22:53Z
- **Functions:** 4 attempted · 2 matched · 2 parked · 0 error
- **Cost:** $0.0044 · 313,896 tokens · $0.0022 per match
- **Final check_build:** ok=True check: OK — rebuilt image equals the original's loaded segment(s) 0x00100000-0x00509100 (4231424 bytes); regime full

## Functions

| function | size | state | attempts | best | tokens | usd | note |
|---|---|---|---|---|---|---|---|
| func_0017A290 | 292 | parked | 3 | - | 64387 | 0.001639 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself |
| func_0019C1D0 | 12 | matched | 2 | 100.0 | 35335 | 0.000423 | marked from wip/func_0019C1D0/attempt-2.c |
| func_0019C1E0 | 12 | matched | 1 | 100.0 | 17387 | 0.000253 | marked from wip/func_0019C1E0/attempt-1.c |
| func_0017A550 | 64 | parked | 10 | 78.4 | 196787 | 0.002053 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 78.4 at wip/func_0017A550/attempt-2.c |

## Batches

- batch 1: 2 matched / 4 · check True · gen_splat_yaml.py: rc=0 0.27s; configure.py: rc=0 40.77s; check_build.py: rc=0 1.32s

For the Claude Project's RESUME: `state/runner-steps.jsonl` holds one `match-batch-external` record per batch; re-run `check_build.py` before proposing the next step.
