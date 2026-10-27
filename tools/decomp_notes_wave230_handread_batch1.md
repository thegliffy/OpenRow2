# Wave 230 — hand-read tier batch #1: both-tag source closure re-run on libpng

Re-ran the libpng source-match machinery per the standing methodology (the queue
is dry; only per-function evidence remains). This wave mechanized the two
hand-tier evidence classes that can close without strings:

- **Source call-graph closure** across BOTH pinned tags (v1.6.0 + v1.6.40),
  anchors = ledger names present in both-tag parses, candidates = source
  functions byte-identical across both tags (attribution rule: only attribute
  when the source function is identical across all candidate tags) with names
  unused in the ledger.
- **Feature joins** (string literals + numeric constants, unique-source-owner
  gate, >=2 independent features required): **0 hits** — confirms the standing
  audit; every string-attributed function in the zone is already ledger-named
  (the 3 literal-join hits all point at functions the checker lane already
  named — left alone).

## Applied (1)
- `042c5210 -> png_get_channels` — REV-unique closure: the ledger anchor
  `png_image_read_background` calls exactly one unnamed function in the binary;
  in BOTH pinned tags `png_get_channels` is byte-identical and
  `png_image_read_background` is its only caller; body read passes — source
  `if (png_ptr != NULL && info_ptr != NULL) return(info_ptr->channels); return (0);`
  matches the decompile (two non-null param guards, return byte at +0x1d of
  param_2, zero default).

## Rejected on body read (1)
- `png_icc_tag_name` candidate `042a9e50`: closure edge fired (anchor
  `png_icc_profile_error` unique source-caller, one unnamed binary callee), but
  the body is an error-severity ladder (calls png_chunk_benign_error /
  png_chunk_warning / two unnamed helpers) — not the source function's
  character-quoting assignments. Dropped.

## State after wave
Board 5,176 / 9,221 (56.1%). Queue 0. Vtable align 0 proposals. Seeds
re-synced for the applied row (`agent/live_functions230.json`).
