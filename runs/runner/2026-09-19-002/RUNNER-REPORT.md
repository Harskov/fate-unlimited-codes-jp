# RUNNER-REPORT — 2026-09-19-002 (dsstep 0.1.0)

- **Model:** deepseek:deepseek-flash · prompt ds-v1 `e23a92141f1b`
- **Started / finished:** 2026-09-19T02:41:14Z / 2026-09-19T02:44:31Z
- **Functions:** 12 attempted · 1 matched · 11 parked · 0 error
- **Cost:** $0.0777 · 6,297,605 tokens · $0.0777 per match
- **Final check_build:** ok=True check: OK — rebuilt image equals the original's loaded segment(s) 0x00100000-0x00509100 (4231424 bytes); regime full

## Functions

| function | size | state | attempts | best | tokens | usd | note |
|---|---|---|---|---|---|---|---|
| func_001AB2B0 | 128 | parked | 20 | 100.0 | 423172 | 0.005451 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0017A670 | 156 | parked | 47 | 97.2 | 1058413 | 0.024114 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0019D4E0 | 96 | parked | 56 | 99.8 | 1183176 | 0.012104 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 99.8 at wip/func_0019D4E0/attempt-5.c |
| func_001A9D80 | 28 | parked | 34 | 99.9 | 664787 | 0.005439 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0019CB40 | 100 | parked | 43 | 99.9 | 874139 | 0.009311 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_001AB340 | 24 | parked | 20 | - | 405900 | 0.003347 | dsstep 0.1.0: attempt cap 10 reached |
| func_0019D750 | 12 | parked | 25 | - | 475333 | 0.003348 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself |
| func_001AB030 | 8 | parked | 17 | 0.0 | 333839 | 0.002679 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0019C7F0 | 48 | parked | 21 | - | 400428 | 0.004397 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself |
| func_001AD0E0 | 232 | parked | 7 | - | 165475 | 0.003451 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself |
| func_001AD250 | 72 | matched | 5 | 100.0 | 98592 | 0.001299 | marked from wip/func_001AD250/attempt-5.c |
| func_001AD2A0 | 88 | parked | 10 | 94.5 | 214351 | 0.002753 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |

## Batches

- batch 1: 1 matched / 12 · check True · gen_splat_yaml.py: rc=0 0.27s; configure.py: rc=0 46.54s; check_build.py: rc=0 1.54s

For the Claude Project's RESUME: `state/runner-steps.jsonl` holds one `match-batch-external` record per batch; re-run `check_build.py` before proposing the next step.
