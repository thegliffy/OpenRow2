# OpenRow2

Decompilation of the **Saints Row 2** PC (Steam) executable — continuation of the original [KairiFey/OpenRow2](https://github.com/KairiFey/OpenRow2) hub (which was a README-only placeholder; this repo is where the work happens).

## Goals

- Recover the PC port's source function-by-function via Ghidra/IDA decompilation, documented as a reference for modders.
- Rebuild and fix the infamous PC port directly from the decompiled code.

## Status

- [x] Repo created
- [ ] Ghidra project import of `SR2.exe` (Steam version, needs owner-supplied binary — not committed, see License)
- [ ] Full auto-analysis + symbol seeding from community RE (gibbed/Gibbed.SaintsRow2, SR2 modding tools)
- [ ] First documented subsystem (TBD: RW core / VPP / PEG)

## Layout (planned)

```
docs/        # per-subsystem decompilation notes
src/         # decompiled, documented C/C++ (assembly-matching where practical)
tools/       # analysis scripts (symbol import, diffing, batch decompile)
```

## License

No game binaries or assets are committed — you need your own legal copy of Saints Row 2. The original KairiFey/OpenRow2 repo carries no license, so nothing was copied from it; this repo starts fresh (license TBD by the owner).
