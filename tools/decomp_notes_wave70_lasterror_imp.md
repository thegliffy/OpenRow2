# Wave 70 — Get/SetLastError + thread id + unique Imp upgrades

Scoreboard after apply: **2,864 / 9,221**.

## Renames (9)

### Win32 thread/error
- `eON_GetLastError` / `eON_SetLastError` (TEB+0x34)
- `eON_SwitchToThread` (`sched_yield`)
- `eON_GetCurrentThreadId` (TEB+0x24)

### Unique Imp body-locks (assert string + single Imp body)
- `Direct3DDevice9Imp::UpdateViewportAndScissorDimensions_D3D9`
- `Direct3DDevice9Imp::GetCurrentFragmentCompileArgs`
- `Direct3DDevice9Imp::PrepareVertexArraysForInstancedDraw`
- `Direct3DSurface9Imp::TransferFromOpenGLThroughReadPixels`
- `Direct3DSurface9Imp::MainOpenGLObjectDataUpdated`

## Leave (shared assert twins)
- `MakeSureOpenGLTextureExists`, `eONFence::Clear`, `OpenGLSide_DeleteObject`, `FlushUntilCommand`, BaseTexture `Release`, Volume `UploadOpenGLObjectData` pairs

Batch: `tools/names_batch61.tsv`
