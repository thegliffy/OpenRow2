# Wave 223 — lead closures (audit + re-derivation), no renames

Scoreboard unchanged at 5,000/9,221. This wave closes the two open
bookkeeping leads so no future wave re-spends time on them.

## 1. done.tsv audit — closed, nothing actionable

Ran the checker's own rules over the 37 `skip` rows (unique signature,
message length, non-STL, single-signature-per-function): 13 rows pass
(12 full passes + 1 unique-but-multi-signature hold). Cross-checked
every one against the live DB — all 13 addresses are ALREADY NAMED
(Direct3D*/DirectInput*/TiXml*/google_breakpad::*/MicrodumpWriter::*/
D3DQuery9Imp::GetData). They were skipped by the model but landed via
earlier waves. Re-proposal would be a no-op; `check_row` correctly
refuses them (name already in ledger). Audit confirms: 0 actionable.

## 2. Anim-hash cluster lead — closed as data, not functions

Re-derived from seeds/verified_seeds.csv (the pre-seed lead predated
the join). The only hash with 14 dword hits is `eb147447` =
`ro04_01_SWRD2_67.anim_pc` (first hit 0x1a33dc — the "~0x1a3xxx
region" from the old note). All 14 hits sit inside `glxewInit` (10)
and `glewInit` (4): Ghidra-attributed data blobs inside the huge GLEW
init functions — the engine's runtime hash→string tables, exactly the
mechanism that made ApplySeeds immediate-value hits zero. Four other
hashes have 1 hit each (InterpolateRGB/_fini/__pthread_key_create
blob territory). No function boundaries live here; nothing nameable.

## 3. Engine .rdata single-owner string scan — dry, confirmed

Full scan of single-owner strings owned by FUN_ functions, regex
`Class::Method` (non-STL first segment): 0 candidates. The untapped
lane flagged in memory is confirmed consumed.

## State after this wave

- LLM queue: 0 functions. vtable_align: 0 proposals. PLT: stable.
- All batch naming sources are formally closed. What remains is the
  pure hand-read tier: per-function reads where a body matches a
  vendor source on disk (libpng/zlib/gcc trees all dry post-Wave-222)
  or the AES-cluster wrappers whose names would otherwise be invented
  from call mix — rule says they stay unnamed.
- Headline VPFS moment already banked (wave 14: end-to-end AES
  decrypt of saintsrow2.vpfs, PE32 ground-truth verified).
