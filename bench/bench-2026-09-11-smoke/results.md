# Bench results — bench-2026-09-11-smoke

Fixtures: created 2026-09-11T04:25:05Z · seed 7 · band [132, 896] · ledger `115d5bddd223`
Criterion: Tier 1 ≥ 95.0 % · Tier 3 ≥ 40.0 % · ≤ $0.25 per attempted function

| model | prompt | T1 match % | T2 improved | T3 match % | mean att. (T3 matched) | mean best (T3 non-match) | USD / match | USD / fn | ledger unchanged | verdict |
|---|---|---|---|---|---|---|---|---|---|---|
| zai:glm-5.3 | v1 `a460da0f` | 91.7 (22/24) | 0/0 | — (0/0) | — | — | 0.0522 | 0.0479 | True | FAIL |

## zai:glm-5.3

| function | state | best | attempts | usd |
|---|---|---|---|---|
| func_001766A0 | matched | 100.0 | 7 | 0.14901 |
| func_00176740 | parked | None | 10 | 0.175726 |
| func_00176BC0 | matched | 100.0 | 1 | 0.005096 |
| func_00176BE0 | matched | 100.0 | 1 | 0.006164 |
| func_00176C00 | matched | 100.0 | 1 | 0.004706 |
| func_00176C10 | matched | 100.0 | 5 | 0.031854 |
| func_00176C30 | matched | 100.0 | 1 | 0.005759 |
| func_00176C50 | matched | 100.0 | 1 | 0.004981 |
| func_001775A0 | parked | 93.3 | 10 | 0.187798 |
| func_00177B00 | matched | 100.0 | 1 | 0.005274 |
| func_00178060 | matched | 100.0 | 3 | 0.017693 |
| func_001990B0 | matched | 100.0 | 1 | 0.004534 |
| func_001990C0 | matched | 100.0 | 2 | 0.012907 |
| func_00199CF0 | matched | 100.0 | 1 | 0.005259 |
| func_001A37D0 | matched | 100.0 | 1 | 0.005788 |
| func_001A3800 | matched | 100.0 | 1 | 0.006115 |
| func_001A3820 | matched | 100.0 | 1 | 0.005928 |
| func_001A3A80 | matched | 100.0 | 1 | 0.006427 |
| func_001A3E30 | matched | 100.0 | 7 | 0.1496 |
| func_001A3EA0 | matched | 100.0 | 9 | 0.179051 |
| func_001A47A0 | matched | 100.0 | 2 | 0.023988 |
| func_001A4960 | matched | 100.0 | 1 | 0.006322 |
| func_001A49A0 | matched | 100.0 | 2 | 0.016151 |
| func_001A5450 | matched | 100.0 | 7 | 0.132826 |

