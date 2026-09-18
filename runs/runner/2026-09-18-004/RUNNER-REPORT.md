# RUNNER-REPORT — 2026-09-18-004 (dsstep 0.1.0)

- **Model:** deepseek:deepseek-flash · prompt ds-v1 `bdbe8fe7c46f`
- **Started / finished:** 2026-09-18T19:27:59Z / 2026-09-18T19:31:11Z
- **Functions:** 12 attempted · 4 matched · 8 parked · 0 error
- **Cost:** $0.0274 · 1,514,198 tokens · $0.0068 per match
- **Final check_build:** ok=True check: OK — rebuilt image equals the original's loaded segment(s) 0x00100000-0x00509100 (4231424 bytes); regime full

## Functions

| function | size | state | attempts | best | tokens | usd | note |
|---|---|---|---|---|---|---|---|
| func_0019CB40 | 100 | parked | 16 | 97.4 | 321167 | 0.003669 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0017A670 | 156 | parked | 6 | 97.1 | 129925 | 0.003080 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0017A820 | 16 | matched | 2 | 100.0 | 35086 | 0.000360 | marked from wip/func_0017A820/attempt-2.c |
| func_0017A830 | 448 | parked | 4 | 90.0 | 98002 | 0.003302 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0017A290 | 292 | parked | 9 | 53.6 | 192301 | 0.003529 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0019D4E0 | 96 | parked | 10 | 99.8 | 202017 | 0.002296 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0017A9F0 | 576 | parked | 7 | 50.7 | 199813 | 0.007031 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself; best |
| func_0019D6A0 | 52 | matched | 3 | 100.0 | 54567 | 0.000653 | marked from wip/func_0019D6A0/attempt-3.c |
| func_0019C7F0 | 48 | parked | 9 | - | 173100 | 0.002007 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself |
| func_0019D6E0 | 104 | matched | 2 | 100.0 | 37049 | 0.000607 | marked from wip/func_0019D6E0/attempt-2.c |
| func_0019D750 | 12 | parked | 3 | - | 53437 | 0.000495 | dsstep 0.1.0: 2 byte-identical resubmissions in a row; the model is repeating itself |
| func_0019D850 | 36 | matched | 1 | 100.0 | 17734 | 0.000328 | marked from wip/func_0019D850/attempt-1.c |

## Batches

- batch 1: 4 matched / 12 · check True · gen_splat_yaml.py: rc=0 0.27s; configure.py: rc=0 42.55s; check_build.py: rc=0 1.35s

For the Claude Project's RESUME: `state/runner-steps.jsonl` holds one `match-batch-external` record per batch; re-run `check_build.py` before proposing the next step.
