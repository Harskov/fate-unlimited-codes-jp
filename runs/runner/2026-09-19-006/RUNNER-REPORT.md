# RUNNER-REPORT — 2026-09-19-006 (dsstep 0.1.0)

- **Model:** deepseek:deepseek-flash · prompt ds-v1 `e23a92141f1b`
- **Started / finished:** 2026-09-19T03:16:44Z / 2026-09-19T03:20:01Z
- **Functions:** 12 attempted · 0 matched · 12 parked · 0 error
- **Cost:** $0.1130 · 9,073,463 tokens · n/a per match
- **Final check_build:** ok=True check: OK — rebuilt image equals the original's loaded segment(s) 0x00100000-0x00509100 (4231424 bytes); regime full

## Functions

| function | size | state | attempts | best | tokens | usd | note |
|---|---|---|---|---|---|---|---|
| func_001AB2B0 | 128 | parked | 40 | 100.0 | 842434 | 0.010654 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 100.0 at wip/func_001AB2B0/attempt-12.c |
| func_0017A670 | 156 | parked | 60 | 97.2 | 1342494 | 0.029622 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0019D4E0 | 96 | parked | 64 | 99.8 | 1337096 | 0.013405 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_001A9D80 | 28 | parked | 66 | 99.9 | 1316820 | 0.011282 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 99.9 at wip/func_001A9D80/attempt-11.c |
| func_0019CB40 | 100 | parked | 58 | 99.9 | 1182962 | 0.012407 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_001AB340 | 24 | parked | 28 | - | 552784 | 0.004285 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself |
| func_0019D750 | 12 | parked | 33 | - | 622233 | 0.004204 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself |
| func_001AE860 | 152 | parked | 12 | - | 267835 | 0.004547 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself |
| func_001AD0E0 | 232 | parked | 24 | - | 548048 | 0.011075 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself |
| func_001AD3D0 | 136 | parked | 20 | - | 428480 | 0.006065 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself |
| func_001AE9F0 | 76 | parked | 9 | 85.0 | 188977 | 0.002005 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_001AB030 | 8 | parked | 23 | 0.0 | 443300 | 0.003422 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |

## Batches

- batch 1: 0 matched / 12 · check True · gen_splat_yaml.py: rc=0 0.31s; configure.py: rc=0 42.68s; check_build.py: rc=0 1.5s

For the Claude Project's RESUME: `state/runner-steps.jsonl` holds one `match-batch-external` record per batch; re-run `check_build.py` before proposing the next step.
