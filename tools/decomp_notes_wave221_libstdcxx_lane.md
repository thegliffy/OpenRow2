# Wave 221 — libstdc++ lane closed (2 names, 1 hold confirmed)

Executes the wave-215 "Next" queue: the three libstdc++-era single-owner
signature strings on unnamed functions, verified against the vendor/gcc clone
(gcc-4.3.4; strings also present at 4.1.2 for the vector pair):

| addr | name | evidence |
|---|---|---|
| 04101c50 | vector::_M_range_insert | `__throw_length_error("vector::_M_range_insert")` inline in body at vector.tcc:495 site; three-segment move + _M_check_len guard verbatim ✓ |
| 0410f860 | vector<bool>::_M_insert_aux | `__throw_length_error("vector<bool>::_M_insert_aux")` inline in body at vector.tcc:640 site; realloc + in-place bit-shift paths verbatim ✓ |
| 0400bfd0 | (HOLD — stays unnamed) | owns `basic_string::substr` string alone BUT body has 3 throw sites + game strings ('ParentProcessId', '--eon_') → substr inlined into a game function ×3, not the pure instantiation → cannot name per manual-tier rule |

Bodies verified line by line vs `vendor/gcc` tree at `releases/gcc-4.3.4`
(defs at vector.tcc:437ff `_M_range_insert(forward_iterator_tag)`,
vector.tcc:625ff `vector<bool>::_M_insert_aux` — GCC branch order preserved,
`_M_check_len` inlined at both throw sites with the exact strings).

## Ops

Gateway renames read-back verified; scoreboard 4,996 → 4,998.
Ledgers synced (2 functions.csv rows, 2 string_refs rows).
0400bfd0 documented hold — game function, unknown upstream name; string_refs
row left as-is for the game lane.
