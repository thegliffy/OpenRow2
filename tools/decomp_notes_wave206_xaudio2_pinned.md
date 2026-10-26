# Wave 206 — eON XAudio2 layouts pinned in MANUAL_ORDER; 4 renames

The wave-23 finding stood: eON's XAudio2 vtables are NOT documented IDL order,
so the aligner yielded zero XAudio2 proposals against the old pins. The fix
prescribed there was executed here: pin eON's ACTUAL observed layout in
`MANUAL_ORDER` from anchor evidence, then let the aligner name the FUN_ slots
mechanically.

## Pinned layouts (checker-lane single-assert anchors are ground truth)

Shared block (pinned for IXAudio2Voice and IXAudio2MasteringVoice, 11 slots):
GetVoiceDetails, SetOutputFilterParameters, GetOutputFilterParameters,
SetVolume, GetVolume, SetChannelVolumes, GetChannelVolumes, SetOutputMatrix,
GetOutputMatrix, **DestroyVoice**, GetSamplesNeeded (eON-internal slot,
audioallocator.h).

SourceVoice run @0x4310f14 (21 slots): shared block, then observed order
Discontinuity, Stop, SubmitSampleBuffer, **FlushSourceBuffers**, **ExitLoop**,
Start, GetState, SetFrequencyRatio, GetFrequencyRatio, SetSourceSampleRate.
eON permutes the documented source extras (Discontinuity/Start swap observed
positions); the two gaps are exactly the two documented source methods left
unplaced, in documented relative order.

## Aligner run (shift 0 on the pins)

- source run: 18/21 anchors → proposals for the 3 gaps (slots 9, 14, 15)
- voice runs (0x4311254 / 0x4311654, identical): 10/11 anchors → same slot-9
  gap resolving to DestroyVoice; duplicate target deduped.

## Applied via MCP gateway (4, verified by decompile read-back)

| addr | name |
|---|---|
| 0410b060 | XAudio2VoiceImp::DestroyVoice (base impl, shared by both 11-slot vtables; returns 1) |
| 04109180 | XAudio2SourceVoiceImp::DestroyVoice (Source's own override of slot 9) |
| 04109130 | XAudio2SourceVoiceImp::FlushSourceBuffers |
| 04109090 | XAudio2SourceVoiceImp::ExitLoop |

All four bodies are one-instruction stubs (return 0; the base DestroyVoice
returns 1) — consistent with eON's stubbed virtuals on this interface.

The dinput/dsound/iaudioclient proposals regenerated in the same run stay
below their gates as before (weak shift-2 fits onto already-named functions);
only the pinned-order XAudio2 lane was applied.

## Operational notes

- `list_functions` defaults to limit=200 — pass `limit=20000` for a full dump
  (9,221 functions confirmed).
- Seeds re-synced from live; exactly 4 lines changed in `seeds/functions.csv`;
  no string_refs rows reference these four entries (no owned asserts).
- Batch: `tools/names_batch197.tsv` (batch = wave − 9). Dumps in
  `agent/vtables/` refreshed from live snapshot `agent/live_functions206.json`.
