# RUNNER-REPORT — 2026-09-18-005 (dsstep 0.1.0)

- **Model:** deepseek:deepseek-flash · prompt ds-v1 `e23a92141f1b`
- **Started / finished:** 2026-09-18T21:45:28Z / 2026-09-18T21:49:13Z
- **Functions:** 12 attempted · 2 matched · 10 parked · 0 error
- **Cost:** $0.0446 · 2,707,172 tokens · $0.0223 per match
- **Final check_build:** ok=True check: OK — rebuilt image equals the original's loaded segment(s) 0x00100000-0x00509100 (4231424 bytes); regime full

## Functions

| function | size | state | attempts | best | tokens | usd | note |
|---|---|---|---|---|---|---|---|
| func_0017A670 | 156 | parked | 13 | 97.1 | 290518 | 0.009018 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0019D4E0 | 96 | parked | 20 | 99.8 | 419726 | 0.004773 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 99.8 at wip/func_0019D4E0/attempt-5.c |
| func_0019CB40 | 100 | parked | 26 | 99.9 | 536043 | 0.006270 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 99.9 at wip/func_0019CB40/attempt-17.c |
| func_0017A830 | 448 | parked | 7 | 90.0 | 173025 | 0.006180 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0019D750 | 12 | parked | 13 | - | 254983 | 0.002064 | dsstep 0.1.0: attempt cap 10 reached |
| func_0019DA00 | 72 | matched | 3 | 100.0 | 58368 | 0.000800 | marked from wip/func_0019DA00/attempt-3.c |
| func_0017A290 | 292 | parked | 12 | 53.6 | 259152 | 0.005103 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0019DCC0 | 40 | matched | 2 | 100.0 | 37646 | 0.000520 | marked from wip/func_0019DCC0/attempt-2.c |
| func_0019C7F0 | 48 | parked | 11 | - | 210988 | 0.002578 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself |
| func_0017BAA0 | 488 | parked | 3 | 60.2 | 78744 | 0.003434 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_001736B0 | 52 | parked | 10 | 76.9 | 201207 | 0.001842 | dsstep 0.1.0: attempt cap 10 reached; best objdiff 76.9 at wip/func_001736B0/attempt-2.c |
| func_00173550 | 112 | parked | 9 | 89.1 | 186772 | 0.002001 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |

## Batches

- batch 1: 2 matched / 12 · check True · gen_splat_yaml.py: rc=0 0.27s; configure.py: rc=0 48.1s; check_build.py: rc=0 1.39s

For the Claude Project's RESUME: `state/runner-steps.jsonl` holds one `match-batch-external` record per batch; re-run `check_build.py` before proposing the next step.
