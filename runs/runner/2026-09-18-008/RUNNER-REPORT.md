# RUNNER-REPORT — 2026-09-18-008 (dsstep 0.1.0)

- **Model:** deepseek:deepseek-flash · prompt ds-v1 `e23a92141f1b`
- **Started / finished:** 2026-09-18T22:39:30Z / 2026-09-18T22:42:14Z
- **Functions:** 12 attempted · 6 matched · 6 parked · 0 error
- **Cost:** $0.0460 · 3,531,587 tokens · $0.0077 per match
- **Final check_build:** ok=True check: OK — rebuilt image equals the original's loaded segment(s) 0x00100000-0x00509100 (4231424 bytes); regime full

## Functions

| function | size | state | attempts | best | tokens | usd | note |
|---|---|---|---|---|---|---|---|
| func_0017A670 | 156 | parked | 31 | 97.2 | 698625 | 0.017076 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0019D4E0 | 96 | parked | 42 | 99.8 | 889506 | 0.009303 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_001A9D80 | 28 | parked | 20 | 99.9 | 393105 | 0.003291 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 99.9 at wip/func_001A9D80/attempt-11.c |
| func_0019CB40 | 100 | parked | 37 | 99.9 | 757838 | 0.008314 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_001AA210 | 20 | matched | 8 | 100.0 | 150975 | 0.001068 | marked from wip/func_001AA210/attempt-8.c |
| func_001AA230 | 20 | matched | 2 | 100.0 | 36694 | 0.000373 | marked from wip/func_001AA230/attempt-2.c |
| func_0019D750 | 12 | parked | 19 | - | 365158 | 0.002706 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself |
| func_001A9950 | 168 | parked | 8 | 90.7 | 166066 | 0.002734 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_001AA310 | 44 | matched | 1 | 100.0 | 18402 | 0.000283 | marked from wip/func_001AA310/attempt-1.c |
| func_001AA340 | 44 | matched | 1 | 100.0 | 18415 | 0.000285 | marked from wip/func_001AA340/attempt-1.c |
| func_001AA370 | 44 | matched | 1 | 100.0 | 18409 | 0.000284 | marked from wip/func_001AA370/attempt-1.c |
| func_001AA460 | 40 | matched | 1 | 100.0 | 18394 | 0.000282 | marked from wip/func_001AA460/attempt-1.c |

## Batches

- batch 1: 6 matched / 12 · check True · gen_splat_yaml.py: rc=0 0.26s; configure.py: rc=0 43.01s; check_build.py: rc=0 1.41s

For the Claude Project's RESUME: `state/runner-steps.jsonl` holds one `match-batch-external` record per batch; re-run `check_build.py` before proposing the next step.
