# RUNNER-REPORT — 2026-09-19-005 (dsstep 0.1.0)

- **Model:** deepseek:deepseek-flash · prompt ds-v1 `e23a92141f1b`
- **Started / finished:** 2026-09-19T03:04:12Z / 2026-09-19T03:07:07Z
- **Functions:** 12 attempted · 0 matched · 12 parked · 0 error
- **Cost:** $0.0990 · 7,648,715 tokens · n/a per match
- **Final check_build:** ok=True check: OK — rebuilt image equals the original's loaded segment(s) 0x00100000-0x00509100 (4231424 bytes); regime full

## Functions

| function | size | state | attempts | best | tokens | usd | note |
|---|---|---|---|---|---|---|---|
| func_001AB2B0 | 128 | parked | 30 | 100.0 | 623632 | 0.007932 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0017A670 | 156 | parked | 58 | 97.2 | 1301107 | 0.028805 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0019D4E0 | 96 | parked | 62 | 99.8 | 1298616 | 0.013080 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_001A9D80 | 28 | parked | 56 | 99.9 | 1110868 | 0.009363 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 99.9 at wip/func_001A9D80/attempt-11.c |
| func_0019CB40 | 100 | parked | 49 | 99.9 | 990458 | 0.010315 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_001AB340 | 24 | parked | 26 | - | 516063 | 0.004051 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself |
| func_001AE7E0 | 120 | parked | 10 | 82.0 | 223418 | 0.003119 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 82.0 at wip/func_001AE7E0/attempt-10.c |
| func_0019D750 | 12 | parked | 31 | - | 585508 | 0.003990 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself |
| func_001AE860 | 152 | parked | 5 | - | 109274 | 0.002112 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself |
| func_001AE900 | 160 | parked | 5 | 76.8 | 107609 | 0.001965 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_001AD0E0 | 232 | parked | 22 | - | 505595 | 0.010159 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself |
| func_001AD3D0 | 136 | parked | 13 | - | 276567 | 0.004132 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself |

## Batches

- batch 1: 0 matched / 12 · check True · gen_splat_yaml.py: rc=0 0.27s; configure.py: rc=0 44.09s; check_build.py: rc=0 1.51s

For the Claude Project's RESUME: `state/runner-steps.jsonl` holds one `match-batch-external` record per batch; re-run `check_build.py` before proposing the next step.
