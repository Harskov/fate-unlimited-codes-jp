# Bench results — bench-2026-09-11-zai_glm-5.3

Fixtures: created 2026-09-11T04:25:05Z · seed 7 · band [132, 896] · ledger `115d5bddd223`
Criterion: Tier 1 ≥ 95.0 % · Tier 3 ≥ 40.0 % · ≤ $0.25 per attempted function

| model | prompt | T1 match % | T2 improved | T3 match % | mean att. (T3 matched) | mean best (T3 non-match) | USD / match | USD / fn | ledger unchanged | verdict |
|---|---|---|---|---|---|---|---|---|---|---|
| zai:glm-5.3 | v1 `a460da0f` | 95.8 (23/24) | 0/0 | — (0/0) | — | — | 0.0421 | 0.0403 | True | partial-pass |

## zai:glm-5.3

| function | state | best | attempts | usd |
|---|---|---|---|---|
| func_001766A0 | matched | 100.0 | 4 | 0.076931 |
| func_00176740 | matched | 100.0 | 5 | 0.078302 |
| func_00176BC0 | matched | 100.0 | 1 | 0.00628 |
| func_00176BE0 | matched | 100.0 | 1 | 0.005989 |
| func_00176C00 | matched | 100.0 | 2 | 0.011236 |
| func_00176C10 | matched | 100.0 | 1 | 0.007562 |
| func_00176C30 | matched | 100.0 | 5 | 0.031571 |
| func_00176C50 | matched | 100.0 | 2 | 0.010445 |
| func_001775A0 | matched | 100.0 | 7 | 0.093967 |
| func_00177B00 | matched | 100.0 | 1 | 0.004284 |
| func_00178060 | matched | 100.0 | 1 | 0.005121 |
| func_001990B0 | matched | 100.0 | 1 | 0.00472 |
| func_001990C0 | matched | 100.0 | 1 | 0.005546 |
| func_00199CF0 | matched | 100.0 | 1 | 0.005977 |
| func_001A37D0 | matched | 100.0 | 1 | 0.005885 |
| func_001A3800 | matched | 100.0 | 1 | 0.006247 |
| func_001A3820 | matched | 100.0 | 1 | 0.006082 |
| func_001A3A80 | matched | 100.0 | 2 | 0.012241 |
| func_001A3E30 | matched | 100.0 | 10 | 0.217426 |
| func_001A3EA0 | parked | 79.1 | 9 | 0.225685 |
| func_001A47A0 | matched | 100.0 | 1 | 0.007401 |
| func_001A4960 | matched | 100.0 | 1 | 0.004443 |
| func_001A49A0 | matched | 100.0 | 2 | 0.028142 |
| func_001A5450 | matched | 100.0 | 4 | 0.105773 |

