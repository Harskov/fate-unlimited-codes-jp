# RUNNER-REPORT — 2026-09-19-003 (dsstep 0.1.0)

- **Model:** deepseek:deepseek-flash · prompt ds-v1 `e23a92141f1b`
- **Started / finished:** 2026-09-19T02:50:41Z / 2026-09-19T02:53:20Z
- **Functions:** 12 attempted · 1 matched · 11 parked · 0 error
- **Cost:** $0.0868 · 6,947,178 tokens · $0.0868 per match
- **Final check_build:** ok=True check: OK — rebuilt image equals the original's loaded segment(s) 0x00100000-0x00509100 (4231424 bytes); regime full

## Functions

| function | size | state | attempts | best | tokens | usd | note |
|---|---|---|---|---|---|---|---|
| func_001AB2B0 | 128 | parked | 24 | 100.0 | 503564 | 0.006422 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0017A670 | 156 | parked | 54 | 97.2 | 1218333 | 0.027172 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0019D4E0 | 96 | parked | 58 | 99.8 | 1221656 | 0.012429 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_001A9D80 | 28 | parked | 44 | 99.9 | 874744 | 0.007445 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 99.9 at wip/func_001A9D80/attempt-11.c |
| func_0019CB40 | 100 | parked | 45 | 99.9 | 912900 | 0.009640 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_001AB340 | 24 | parked | 22 | - | 442621 | 0.003582 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself |
| func_0019D750 | 12 | parked | 27 | - | 512058 | 0.003562 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself |
| func_001AD0E0 | 232 | parked | 12 | - | 279433 | 0.005865 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself |
| func_001AD3D0 | 136 | parked | 7 | - | 153857 | 0.002464 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself |
| func_001AB030 | 8 | parked | 19 | 0.0 | 370326 | 0.002927 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0019C7F0 | 48 | parked | 23 | - | 438316 | 0.004761 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself |
| func_001AE2F0 | 80 | matched | 1 | 100.0 | 19370 | 0.000552 | marked from wip/func_001AE2F0/attempt-1.c |

## Batches

- batch 1: 1 matched / 12 · check True · gen_splat_yaml.py: rc=0 0.26s; configure.py: rc=0 42.59s; check_build.py: rc=0 1.46s

For the Claude Project's RESUME: `state/runner-steps.jsonl` holds one `match-batch-external` record per batch; re-run `check_build.py` before proposing the next step.
