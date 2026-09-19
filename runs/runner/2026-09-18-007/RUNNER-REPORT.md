# RUNNER-REPORT — 2026-09-18-007 (dsstep 0.1.0)

- **Model:** deepseek:deepseek-flash · prompt ds-v1 `e23a92141f1b`
- **Started / finished:** 2026-09-18T22:27:38Z / 2026-09-18T22:30:04Z
- **Functions:** 12 attempted · 2 matched · 10 parked · 0 error
- **Cost:** $0.0539 · 3,603,260 tokens · $0.0270 per match
- **Final check_build:** ok=True check: OK — rebuilt image equals the original's loaded segment(s) 0x00100000-0x00509100 (4231424 bytes); regime full

## Functions

| function | size | state | attempts | best | tokens | usd | note |
|---|---|---|---|---|---|---|---|
| func_0017A670 | 156 | parked | 24 | 97.2 | 538224 | 0.013981 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0019D4E0 | 96 | parked | 32 | 99.8 | 675379 | 0.007257 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0019CB40 | 100 | parked | 35 | 99.9 | 719077 | 0.007985 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0019D750 | 12 | parked | 17 | - | 328433 | 0.002492 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself |
| func_0017A290 | 292 | parked | 18 | 53.6 | 392360 | 0.007056 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0019C7F0 | 48 | parked | 15 | - | 286764 | 0.003305 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself |
| func_00172F60 | 140 | parked | 9 | 51.0 | 185981 | 0.002418 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_001A04B0 | 640 | parked | 6 | 75.9 | 159684 | 0.005509 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_001A9950 | 168 | parked | 4 | 90.7 | 83048 | 0.001541 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_001A9A00 | 72 | matched | 1 | 100.0 | 18786 | 0.000366 | marked from wip/func_001A9A00/attempt-1.c |
| func_001A9D80 | 28 | parked | 10 | 99.7 | 197240 | 0.001735 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 99.7 at wip/func_001A9D80/attempt-1.c |
| func_001AA1F0 | 20 | matched | 1 | 100.0 | 18284 | 0.000260 | marked from wip/func_001AA1F0/attempt-1.c |

## Batches

- batch 1: 2 matched / 12 · check True · gen_splat_yaml.py: rc=0 0.27s; configure.py: rc=0 42.82s; check_build.py: rc=0 1.39s

For the Claude Project's RESUME: `state/runner-steps.jsonl` holds one `match-batch-external` record per batch; re-run `check_build.py` before proposing the next step.
