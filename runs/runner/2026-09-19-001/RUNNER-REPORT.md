# RUNNER-REPORT — 2026-09-19-001 (dsstep 0.1.0)

- **Model:** deepseek:deepseek-flash · prompt ds-v1 `e23a92141f1b`
- **Started / finished:** 2026-09-19T02:24:10Z / 2026-09-19T02:26:53Z
- **Functions:** 12 attempted · 2 matched · 10 parked · 0 error
- **Cost:** $0.0653 · 5,291,445 tokens · $0.0327 per match
- **Final check_build:** ok=True check: OK — rebuilt image equals the original's loaded segment(s) 0x00100000-0x00509100 (4231424 bytes); regime full

## Functions

| function | size | state | attempts | best | tokens | usd | note |
|---|---|---|---|---|---|---|---|
| func_0017A670 | 156 | parked | 43 | 97.2 | 972513 | 0.022433 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0019D4E0 | 96 | parked | 46 | 99.8 | 966466 | 0.009954 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_001A9D80 | 28 | parked | 32 | 99.9 | 627617 | 0.005147 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0019CB40 | 100 | parked | 41 | 99.9 | 835378 | 0.008981 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_001AB2B0 | 128 | parked | 16 | 100.0 | 342596 | 0.004480 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0019D750 | 12 | parked | 23 | - | 438608 | 0.003134 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself |
| func_0019C7F0 | 48 | parked | 19 | - | 362540 | 0.004033 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself |
| func_001AB030 | 8 | parked | 15 | 0.0 | 297352 | 0.002432 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 0.0 at wip/func_001AB030/attempt-3.c |
| func_001AB330 | 8 | matched | 1 | 100.0 | 18141 | 0.000248 | marked from wip/func_001AB330/attempt-1.c |
| func_001AB340 | 24 | parked | 10 | - | 204745 | 0.001765 | dsstep 0.1.0: attempt cap 10 reached |
| func_001AB770 | 36 | matched | 1 | 100.0 | 18456 | 0.000331 | marked from wip/func_001AB770/attempt-1.c |
| func_001AB7D0 | 60 | parked | 10 | 93.3 | 207033 | 0.002408 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |

## Batches

- batch 1: 2 matched / 12 · check True · gen_splat_yaml.py: rc=0 0.26s; configure.py: rc=0 41.79s; check_build.py: rc=0 1.51s

For the Claude Project's RESUME: `state/runner-steps.jsonl` holds one `match-batch-external` record per batch; re-run `check_build.py` before proposing the next step.
