# RUNNER-REPORT — 2026-09-18-009 (dsstep 0.1.0)

- **Model:** deepseek:deepseek-flash · prompt ds-v1 `e23a92141f1b`
- **Started / finished:** 2026-09-18T22:46:39Z / 2026-09-18T22:49:21Z
- **Functions:** 12 attempted · 3 matched · 9 parked · 0 error
- **Cost:** $0.0633 · 4,777,448 tokens · $0.0211 per match
- **Final check_build:** ok=True check: OK — rebuilt image equals the original's loaded segment(s) 0x00100000-0x00509100 (4231424 bytes); regime full

## Functions

| function | size | state | attempts | best | tokens | usd | note |
|---|---|---|---|---|---|---|---|
| func_0017A670 | 156 | parked | 39 | 97.2 | 886049 | 0.020609 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0019D4E0 | 96 | parked | 44 | 99.8 | 927986 | 0.009628 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_001A9D80 | 28 | parked | 30 | 99.9 | 590447 | 0.004856 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0019CB40 | 100 | parked | 39 | 99.9 | 796617 | 0.008652 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_001AA490 | 40 | matched | 1 | 100.0 | 18404 | 0.000283 | marked from wip/func_001AA490/attempt-1.c |
| func_001AA4C0 | 40 | matched | 1 | 100.0 | 18442 | 0.000290 | marked from wip/func_001AA4C0/attempt-1.c |
| func_0019D750 | 12 | parked | 21 | - | 401883 | 0.002920 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself |
| func_0017A290 | 292 | parked | 22 | 53.6 | 482129 | 0.008318 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_001AA880 | 20 | matched | 1 | 100.0 | 18225 | 0.000253 | marked from wip/func_001AA880/attempt-1.c |
| func_0019C7F0 | 48 | parked | 17 | - | 324652 | 0.003669 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself |
| func_001AB030 | 8 | parked | 5 | 0.0 | 93328 | 0.000772 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_001AB2B0 | 128 | parked | 10 | 98.4 | 219286 | 0.003033 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |

## Batches

- batch 1: 3 matched / 12 · check True · gen_splat_yaml.py: rc=0 0.26s; configure.py: rc=0 42.17s; check_build.py: rc=0 1.43s

For the Claude Project's RESUME: `state/runner-steps.jsonl` holds one `match-batch-external` record per batch; re-run `check_build.py` before proposing the next step.
