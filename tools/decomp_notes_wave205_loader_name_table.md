# Wave 205 — loader name-table mega-batch (1,166 names)

## Mechanism

The static binary (`bin/saintsrow2.i386`) embeds **name→implementation dispatch tables**
for the statically-linked Win32-emulation loader (the eON2 loader — see embedded source
paths `/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/...`). Entries are
12-byte triples `[str_ptr][func_ptr][0]` in contiguous runs, string zone ~0x42f0000–0x4360000,
function targets in code range 0x4000000–0x42f0000. This is the game's own name→function
binding — mechanical ground truth for which function answers each API name.

## Gates applied

- exact NUL-delimited name strings; pure ASCII single tokens (CamelCase API shape, plus the
  lowercase winmm families mixer*/waveOut*/waveIn*/time*/snd*/joy*);
- name string referenced by **exactly one** data slot;
- entry sits in a **contiguous run of ≥3** verified triples (locks grid phase);
- target currently `FUN_*` in **both** `seeds/functions.csv` and the live project
  (live re-pull 2026-10-25: 9,221 functions);
- no collision with any existing name (bare or `eON_`);
- no overlap with `seeds/ambiguous_signatures.tsv` (0 overlap).

Result: 1,744 canonical single-ref entries → 1,166 unnamed targets.

## Verification

- ~420 table entries resolve to functions the **checker lane** had already named
  independently (from single-assert signature strings) — exact matches (e.g.
  `RegisterClassExA`→`eON_RegisterClassExA`, `GetTempPathA`→`eON_GetTempPathA`,
  `CreateSolidBrush`→`eON_CreateSolidBrush`, `GetTextFaceA`→`eON_GetTextFaceA`).
  The ~120 disagreements are all already-named functions whose project names are qualified/
  alias names from assert or source-match lanes (`eON_Atom_Intern`, `comalloc_*`, crossed
  A/Ex pairs) — left untouched; only `FUN_` targets are renamed.
- Layout probes (single-pointer + triple walk) verified at `AddAtomA` (0x432f600),
  the DDE cluster (0x4349fc0), `GetMessagePos` (0x4347b30), `SetPriorityClass` (0x4156fc0),
  `VarR4FromCy` (0x41685c0).
- **Body confirmations** (bodies match their table name exactly):
  `GetVersionExA` checks OSVERSIONINFO size then fills version 5.x;
  `SetPriorityClass` validates the priority-class constants and stores them;
  `DecodeSystemPointer` XORs with the process cookie;
  `InitializeSecurityDescriptor` requires revision 1 (ERROR_REVISION_MISMATCH 0x519);
  `VarR4FromCy` divides the CY by 10000; `VarI4FromDec` converts DECIMAL with range checks;
  `VarUI8FromUI2` zero-extends; `VarBoolFromI8`/`VarUI2FromBool` match exactly.
- Random 10-sample decompiles across districts: consistent (stubs `return 0` =
  declared-but-unimplemented loader entries, same as prior waves' unimpl waves).

## Districts covered

oleaut32 Var*/Bstr*/Variant* converters, kernel32 loader/heap/service/security stubs,
advapi32 registry/security, user32/gdi32 window+draw+menu+clip APIs, comdlg32 dialogs,
shell32 SH* APIs, winmm mixer*/waveOut*/waveIn*/time*/joy*, ole32 COM stubs, DDE,
shell drag-drop, misc shlwapi/netapi/winsock.

## Applied

1,166 renames via MCP gateway on moneta (single writer), applied 2026-10-25:
`tools/names_batch196.tsv` (batch file keeps its own sequence number; wave 205).
Seeds re-synced from live. Lock column: `loader name table single-ref`.

## Next

Vtable-alignment extension from the PLT cluster report stands (XAudio2 MANUAL_ORDER
pinning; held classes need one more assert-named slot). The name table itself is now
fully harvested (single-ref entries applied; remaining canonical multi-ref/qualified
entries were checker-named).
