# Wave 240 — final closure wave

Full verification pass across the pipeline:

- **Scoreboard**: live MCP reports named 5,195 / unnamed 4,026 / total 9,221 — matches README/SCOREBOARD ✓.
- **Seeds**: `seeds/functions.csv` re-synced through wave 235 (all wave renames reflected); the only
  reader-visible "mismatches" are the two `__ostream_insert<char,std::char_traits<char>>` rows —
  an artifact of naive comma-splitting on a C++ template name; file bytes verified exact, CRLF
  convention intact including EOF.
- **Vtable align**: `TOTAL proposals: 0` ✓ (unchanged since wave 207 lane).
- **PLT cluster**: 18 anchors ✓ (unchanged; navigation layer).
- **LLM queue**: 0 pending ✓.
- **Naming-source state**: dispatch/name-table lanes exhausted (226–229, adjudicated 232); vendor
  source matching closed (230–233); source-graph closure converged (234–236: +16 total); feature
  joins, GCC mangled lane, and pool re-audits dry (237–239). Runtime/gdb lane closed (225).

No renames. Board final for this run: 5,195 / 9,221 (56.3%).

Wave totals this run: 226 +13, 227 +65, 228 +47, 229 +50, 230 +1, 231 +2, 232 +1, 233 0,
234 +11, 235 +5, 236 0, 237 0, 238 0, 239 0, 240 0.
