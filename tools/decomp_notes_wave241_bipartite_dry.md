# Wave 241 — bipartite call-graph matching (strict tier; dry)

Full call-set equivalence across all three pinned vendor clones: unused-name parsed source
functions (>=1 call, >=1 ledger-anchor call) matched against unnamed Ghidra bodies whose complete
call-token set is exactly equal, requiring exactly one candidate. 4,025 unnamed bodies, 461 parsed
source functions — **0 candidates** (also 0 with the anchor requirement relaxed to any unique
exact match). Matcher verified working on hand-checked pairs before the run.

Structural read of the remaining mass: the unnamed bodies lack enough clean call structure to be
pinned by exact equivalence — every exact-structured match was already consumed by the checker
assert-signature lane or waves 226–240. Consistent with the wave-236 convergence; the mechanical
naming pipeline is now confirmed dry under every formulation tried.

Tool retained: `tools/w241_bipartite.py` (rerunnable against future ledger state).
