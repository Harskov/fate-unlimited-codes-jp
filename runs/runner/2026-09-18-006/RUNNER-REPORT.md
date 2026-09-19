# RUNNER-REPORT — 2026-09-18-006 (dsstep 0.1.0)

- **Model:** deepseek:deepseek-flash · prompt ds-v1 `e23a92141f1b`
- **Started / finished:** 2026-09-18T22:20:49Z / 2026-09-18T22:24:49Z
- **Functions:** 12 attempted · 0 matched · 12 parked · 0 error
- **Cost:** $0.0555 · 3,443,744 tokens · n/a per match
- **Final check_build:** ok=True check: OK — rebuilt image equals the original's loaded segment(s) 0x00100000-0x00509100 (4231424 bytes); regime full

## Functions

| function | size | state | attempts | best | tokens | usd | note |
|---|---|---|---|---|---|---|---|
| func_0017A670 | 156 | parked | 20 | 97.1 | 451085 | 0.012104 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0019D4E0 | 96 | parked | 30 | 99.8 | 636899 | 0.006932 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 99.8 at wip/func_0019D4E0/attempt-5.c |
| func_0019CB40 | 100 | parked | 33 | 99.9 | 680298 | 0.007648 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0019D750 | 12 | parked | 15 | - | 291708 | 0.002278 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself |
| func_0017A290 | 292 | parked | 15 | 53.6 | 325395 | 0.006042 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0019C7F0 | 48 | parked | 13 | - | 248876 | 0.002942 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself |
| func_0017BAA0 | 488 | parked | 7 | 67.9 | 186283 | 0.006615 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0019F920 | 204 | parked | 6 | 46.2 | 135680 | 0.002903 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0019FD10 | 28 | parked | 10 | 61.4 | 198013 | 0.001549 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 61.4 at wip/func_0019FD10/attempt-2.c |
| func_00172F60 | 140 | parked | 3 | 51.0 | 60363 | 0.001029 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_00172ED0 | 140 | parked | 7 | 69.7 | 149603 | 0.002255 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_001A04B0 | 640 | parked | 3 | 75.9 | 79541 | 0.003209 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |

## Batches

- batch 1: 0 matched / 12 · check True · gen_splat_yaml.py: rc=0 0.28s; configure.py: rc=0 41.64s; check_build.py: rc=0 1.35s

For the Claude Project's RESUME: `state/runner-steps.jsonl` holds one `match-batch-external` record per batch; re-run `check_build.py` before proposing the next step.
