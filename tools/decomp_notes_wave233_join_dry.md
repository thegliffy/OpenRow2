# Wave 233 — vendor join extended DB-wide: dry (closure confirm)

Ran the standing vendor join (string-literal + numeric-constant features,
value-normalized hex/dec) against ALL three vendor clones — libpng
(libpng-1.6.16-signed), zlib (v1.2.3.4 — the pinned tag), gcc
(releases/gcc-4.3.4) — over the WHOLE database: every one of the 4,041 unnamed
functions decompiled (agent/w233_bodies.jsonl), features extracted, gated
(>=2 features, >=1 source-unique, exact-subset containment).

- seed-join groups: 31 — none with a single-target gate passing.
- exact-subset hits: 70 raw -> 7 distinctive-gated pairs -> hand-read every pair:

| binary | candidate source | verdict |
|---|---|---|
| 04156430 | png_exp | REJECT — body is static bit-map init (bzero/SetRange), not the exp table code |
| 042c5000 | png_fixed_inches_from_microns | REJECT (wave-231 adjudication stands: extra fork call, two-to-one) |
| 042c5040 | png_fixed_inches_from_microns | REJECT — twin of above; both dead (0 callers) |
| 042c4d20 | png_image_read_and_map | REJECT — two-to-one, no callers; source is the interlace-loop body |
| 042c4d80 | png_image_read_and_map | REJECT — twin of above |
| 04030480 | png_image_read_colormap | REJECT — GF(2^8) xtime loop (0x1b), not the colormap compositor |
| 0400f840 | png_log16bit | REJECT — body is __xstat64 + S_ISREG file test |

- string_refs rows pointing at FUN_ functions with source-unique literals: 0.

Verdict: vendor-source joins are EXHAUSTED across all three clones — matches the
standing audits (zlib lane closed wave 214; libpng queue matched wave 215-222 +
one via closure wave 230; libstdc++ queue consumed wave 221).

## State after wave
Board 5,179 / 9,221 (56.2%) — unchanged (0 renames). Seeds unchanged.
Artifacts: agent/w233_bodies.jsonl (4,041), tools/w233_join.py, tools/w233_dump_bodies.py.
