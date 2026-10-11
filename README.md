# OpenRow2

Decompilation of the **Saints Row 2** PC (Steam) executable — continuation of the original [KairiFey/OpenRow2](https://github.com/KairiFey/OpenRow2) hub (which was a README-only placeholder; this repo is where the work happens).

## Goals

- Recover the PC port's source function-by-function via Ghidra/IDA decompilation, documented as a reference for modders.
- Rebuild and fix the infamous PC port directly from the decompiled code.

## Status

- [x] Repo created
- [x] Ghidra 12.1.4 installed headless (Java 21) — ready for import
- [x] Symbol-seed pipeline: `tools/volition_hash.py` (Volition rot-left-6 string hash, ported from gibbed's StringHelpers) — wordlist → hash→string CSV for naming decompiled functions
- [ ] `SR2.exe` import (Steam version, needs owner-supplied binary — not committed, see License)
- [ ] Full auto-analysis + apply seed symbol map
- [ ] First documented subsystem (TBD: RW core / VPP / PEG)

## Tooling

- `tools/volition_hash.py` — reimplements the engine's string hash so extracted wordlists (xtbl keys, lestrings, asset paths) become Ghidra symbol seeds. `python3 tools/volition_hash.py seed wordlist.txt seeds.csv`
- `vendor/` — reference RE tooling, cloned not committed: [gibbed/Gibbed.SaintsRow2](https://github.com/gibbed/Gibbed.SaintsRow2) (zlib-style license) and the [saintsrowmods2](https://github.com/saintsrowmods2/SaintsRow2Tools) fork (PegTool, StringHashTool, save editor). Format knowledge for VPP/PEG/VINT/xtbl lives here.

## Layout (planned)

```
docs/        # per-subsystem decompilation notes
src/         # decompiled, documented C/C++ (assembly-matching where practical)
tools/       # analysis scripts (symbol import, diffing, batch decompile)
```

## License

No game binaries or assets are committed — you need your own legal copy of Saints Row 2. The original KairiFey/OpenRow2 repo carries no license, so nothing was copied from it; this repo starts fresh (license TBD by the owner).
