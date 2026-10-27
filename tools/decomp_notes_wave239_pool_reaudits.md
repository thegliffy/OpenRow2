# Wave 239 — pool re-audits against the current ledger (dry)

Three mechanical lanes re-run against the live ledger (5,195 named at start of wave):

1. **Single-feature unique-owner join** (relaxed from wave 233's >=2-feature gate): source feature
   (literal or value-normalized constant) with exactly one source owner, exactly one unnamed binary
   function containing it, and no foreign-owner features on that body — 0 candidates. Consistent
   with the wave-233 result; feature lane confirmed exhausted under both gates.
2. **GCC mangled-symbol lane**: the analyzed string space contains 0 `_Z`-mangled strings (its
   1,312 libstdc++ entries are demangled assert-signature strings already consumed by the checker
   lane). Raw ELF scan shows 62 mangled strings physically present but outside the analyzed space
   (unloaded/garbage regions) — no xrefs, nothing to join. Lane dry by construction.
3. **Dispatch + import-lookup pool re-adjudication** (waves 226–229 inventories, now fully applied
   or parked): 30 entries map to real Ghidra function slots with otherwise-unique unused bare
   names — all 30 carry an `eON_<Name>` spelling already present in the ledger (checker lane
   ownership), so per the wave-232 rule they stay parked. The bodies confirmed the parking was
   right: they are the game's own dispatch wrappers (fs_*/VPFS_* fan-out, e.g.
   `GetFileSizeEx -> VPFS_GetSize`, `MoveFileA -> VPFS_MoveFileOrFolder + SetLastError(0xb7)`,
   `SetFilePointerEx -> fs_SetFilePointerEx | VPFS_Seek+Tell`) plus trivial GDI stubs.
   Cross-inventory uniqueness (wave-228 + wave-229 pools combined) yields zero new legal picks.

No renames. Board unchanged 5,195.
