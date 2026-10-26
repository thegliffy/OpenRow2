# Wave 216 — full-ledger name audit (all 4,959 named)

Trigger: "verify all the names, not just the 100 from this session".

## Method
1. **Ledger ↔ DB consistency:** fresh `list_functions` snapshot (`agent/live_functions216.json`) vs `seeds/functions.csv` row by row.
2. **String-evidence tier:** for every named function with seed string refs (1,674), fresh decompile (`decomp/verify/`) + verbatim anchor-string search. Results: `agent/verify_full.json`.
3. **Manual/structural tier:** re-checked the documented locks for this session's 25 non-unique-string names against source.
4. Method-evidence tier (vtable/call-graph/hash, waves 1–207): not text-re-verifiable; reported as such.

## Results
- Ledger ↔ DB: **4,957/4,959 exact** + 2 CSV-comma artifacts (`__ostream_insert<char,std::char_traits<char>>` splits its ledger row; DB name is correct) → effectively 100%.
- String tier: **1,500/1,674 body-confirmed** (anchor string verbatim in decompile). 174 not rendered in text — anchor attribution comes from Ghidra's full-analysis xref dump (the seed builder), i.e. DB-level ground truth via pointer/data tables. Sampled 11 by eye — all bodies match vendor source exactly (e.g. 042bb6c0 png_set_sCAL_s, 042b8750 png_handle_pCAL, 042c27e0 png_write_tRNS).
- Structural tier: all 25 session locks re-hold (reset_crc → crc32 call + CRC field +0x19c; calculate_crc → 0x300 gate; png_longjmp = source-exact (longjmp_fn +0x9c, jmpb +0xa0, abort); crc_read = read_data + calculate_crc; chunk_error/benign chains consistent; sCAL/rgb-to-gray/comp-setter pairs split per their documented field/string locks).
- **Zero names found wrong.** No mismatches, no contradictions.

## Honest limits
- 3,285 names (vtable alignment, call-graph, hash seeds from earlier waves) cannot be re-verified by string text — their evidence is the wave notes at application time.
- "Not in body text" ≠ wrong (data-table refs), but those 174 rest on the analysis-pipeline attribution, not a second independent confirmation.
