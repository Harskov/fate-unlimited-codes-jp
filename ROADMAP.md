# Roadmap — Fate/Unlimited Codes

The project serves four purposes — preservation, recompilation, porting and learning — and orders its milestones by what helps other people soonest. Each milestone's exit is a file or a record, not a judgment. Generated from `config/milestones.json` and the match records; never edited by hand.

| # | Milestone | Status | Exit judged on |
|---|---|---|---|
| M1 | Contributable | done | public-build.json ok=True; matched outside their unit: 0 |
| M2 | Identified | done | name pass closed: True; unlabelled game functions: 0; review pending: 0 |
| M3 | Platform boundary | current | 128/442 platform functions matched; PLATFORM.md present |
| M4 | Core | later | 59/90 core functions matched; FORMATS.md missing |
| M5 | Gameplay | later | 1478/3213 gameplay functions matched |
| M6 | Complete | later | 1665/3745 game functions matched; check ok=True |
| M7 | Documented | later | docs.py check on the tree as it stands: 47 gap(s), first: 1665 matched function(s) without a purpose line: ['func_001598C8', '_dpfgt', '_dpflt', '_dpfne', 'func_001599B0']; last recorded ok=None (never run) |
| M8 | Behaviour-verified | not required | last behaviour compare ok=None at never |
| M9 | Reverse-engineered | later | names without checked evidence: 0; matches since the last name pass: 10; named types with two layouts: 0 |
| M10 | Designed | later | no design document yet |

Readability debt: 7 function(s) carry a `// !FAKE:` body and 0 carry a lint finding (see CONTRIBUTING.md); a pull request that replaces one with plain source that still matches is welcome.

Reverse-engineering debt: 0 name(s) wait for a fact a script can check (M9); [docs/NAMES.md](docs/NAMES.md) lists every name with its evidence.
