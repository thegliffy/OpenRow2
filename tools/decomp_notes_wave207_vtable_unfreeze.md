# Wave 207 — vtable aligner unfreeze: MM* + AudioRenderClient lanes, 7 renames

The held-below-trust-floor classes unlocked via wave 205's loader names landing
as new anchors. All `agent/vtables/*.tsv` dumps were refreshed from the live
project (static-binary ELF walk + `agent/live_functions206.json` name map) so
the aligner ran on current truth; the full live snapshot rerun is
`agent/live_functions207.json`.

Gate: full live rerun, per-run anchor counts, targets all currently FUN_, zero
name collisions, zero cross-run conflicts. The dinput/dsound/iaudioclient
proposals from the stale-dump run vanished on refresh (their slots were already
named — confirming they were stale). What survived is exactly this batch:

| addr | name | class anchors |
|---|---|---|
| 0418a720 | AudioRenderClientImp::Release | 4/7 |
| 0418d500 | MMDeviceImp::Release | 5/9 |
| 0418d000 | MMDeviceImp::GetState | 5/9 |
| 0418c840 | MMDeviceCollectionImp::Release | 4/7 |
| 0418cf00 | MMDeviceEnumeratorImp::Release | 5/10 |
| 0418c960 | MMDeviceEnumeratorImp::RegisterEndpointNotificationCallback | 5/10 |
| 0418c970 | MMDeviceEnumeratorImp::UnregisterEndpointNotificationCallback | 5/10 |

Bodies: the four Release slots share the identical LOCK/decrement/Delete call
shape (shared Release helper, per-class vtable slots — alignment is the
ground truth, the body alone would fail the uniqueness gate); GetState and the
Register/Unregister pair are stub-return-0 placeholders, consistent with eON
stubbing the notification plumbing.

Names applied through the MCP gateway (batch198.tsv, batch = wave − 9) and
each verified by decompile read-back. Note the live convention for these
classes is NO leading I on the class prefix (`AudioClientImp::`, `MMDeviceImp::`)
— matched to existing anchor names.

## Left holding

- IAudioCaptureClient, MMEndpoint, IAudioClient, IPropertyStore, the
  DirectSound buffer pair: no new FUN_-slot proposals at current anchors
  (their remaining FUN_ slots sit at shifts the gates reject, or none left).
- Each still wants one more assert-named slot; no loader-name candidates
  landed since wave 205.
