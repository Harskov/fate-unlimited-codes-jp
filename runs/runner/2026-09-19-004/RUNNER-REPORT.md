# RUNNER-REPORT — 2026-09-19-004 (dsstep 0.1.0)

- **Model:** deepseek:deepseek-flash · prompt ds-v1 `e23a92141f1b`
- **Started / finished:** 2026-09-19T02:57:01Z / 2026-09-19T02:58:58Z
- **Functions:** 12 attempted · 2 matched · 10 parked · 0 error
- **Cost:** $0.0888 · 7,048,979 tokens · $0.0444 per match
- **Final check_build:** ok=True check: OK — rebuilt image equals the original's loaded segment(s) 0x00100000-0x00509100 (4231424 bytes); regime full

## Functions

| function | size | state | attempts | best | tokens | usd | note |
|---|---|---|---|---|---|---|---|
| func_001AB2B0 | 128 | parked | 28 | 100.0 | 584395 | 0.007459 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0017A670 | 156 | parked | 56 | 97.2 | 1259720 | 0.027989 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0019D4E0 | 96 | parked | 60 | 99.8 | 1260136 | 0.012755 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_001A9D80 | 28 | parked | 46 | 99.9 | 911914 | 0.007737 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0019CB40 | 100 | parked | 47 | 99.9 | 951679 | 0.009978 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_001AB340 | 24 | parked | 24 | - | 479342 | 0.003816 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself |
| func_0019D750 | 12 | parked | 29 | - | 548783 | 0.003776 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself |
| func_001AD0E0 | 232 | parked | 17 | - | 393249 | 0.008087 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself |
| func_001AD3D0 | 136 | parked | 10 | - | 215195 | 0.003279 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself |
| func_001AB030 | 8 | parked | 21 | 0.0 | 406813 | 0.003174 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_001AE7A0 | 44 | matched | 1 | 100.0 | 19077 | 0.000423 | marked from wip/func_001AE7A0/attempt-1.c |
| func_001AE7D0 | 8 | matched | 1 | 100.0 | 18676 | 0.000329 | marked from wip/func_001AE7D0/attempt-1.c |

## Batches

- batch 1: 2 matched / 12 · check True · gen_splat_yaml.py: rc=0 0.27s; configure.py: rc=0 43.6s; check_build.py: rc=0 1.59s

For the Claude Project's RESUME: `state/runner-steps.jsonl` holds one `match-batch-external` record per batch; re-run `check_build.py` before proposing the next step.
