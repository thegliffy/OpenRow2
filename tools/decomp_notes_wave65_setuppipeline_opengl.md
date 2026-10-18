# Wave 65 — SetupRenderPipeline, OpenGL wrapper/gamma, AddResourceToPool

Scoreboard unchanged at **2,787 / 9,221** (placeholder→Class::Method upgrades already counted as named).

## Renames (6)

| Addr | Name | Lock |
|------|------|------|
| 0408fe70 | Direct3DDevice9Imp::SetupRenderPipeline | unique SetupRenderPipeline choose VS/FS messages |
| 04020090 | OpenGLWrapperLinux::~OpenGLWrapperLinux | unique dtor assert |
| 04080c30 | Direct3DDevice9Imp::AddResourceToPool | unique add-to-pool message |
| 04022b70 | GetGammaRamp | body (SDL_GetWindowGammaRamp); peer is SetUserGammaRamp |
| 04022f10 | SetGammaRamp | body SetGammaRamp assert |
| 04022160 | OpenGLDisplayWorkArea | body WorkArea assert |

Leave: shared Imp assert twins (Release, MakeSureOpenGLTextureExists, FlushUntilCommand, SystemDataUpdated, etc.).

Batch: `tools/names_batch56.tsv`
