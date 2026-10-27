# Wave 243 — CrashReporter cross-binary byte-identical lane (dry)

`bin/CrashReporter.i386` carries 42 symbolized FUNC symbols >=64 bytes (`_Z...`, statically linked
libstdc++ + its own GTK app code). Method: extract each symbol's bytes via ELF segment mapping,
search for exact matches at Ghidra function starts (file-offset -> vaddr via program headers)
across all 4,025 unnamed functions AND all 5,195 named ones as a positive control.

Result: **0 matches against unnamed functions and 0 against named** — CrashReporter's shared C++
runtime was compiled with a different toolchain than the game's static libstdc++ (pinned
gcc-4.3.4), so no code is shared byte-for-byte. The lane was empty by construction: CrashReporter
knows nothing about game code that the vendor pins don't already cover. Method verified sound
(42/42 symbol offsets resolved; the two wave-221 libstdc++ names prove game-side libstdc++ code
exists, just not at CrashReporter's bytes).
