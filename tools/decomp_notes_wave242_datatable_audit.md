# Wave 242 — data-table repair audit (no-op; Ghidra state already correct)

The wave-232 "data-table misparse" pool (87 raw unique pairs, 42 data-side) was audited against
the live function map: all 42 data-table targets are NOT functions in Ghidra — they are data
(string pools / pointer tables) and were correctly excluded from naming. Nothing to convert; the
9,221 denominator is actual functions only. The 30 real-function candidates from the same pools
were adjudicated in wave 239 (checker-parked). No board movement.
