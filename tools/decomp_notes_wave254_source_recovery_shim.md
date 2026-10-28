# Wave 254 — source recovery, named shim districts

Start of the source-recovery tier (post-park lane). Evidence basis:
`seeds/string_refs.csv` rows where the string is a real source-file path
(·c/·cpp/·h) — 2,052 rows, 132 distinct files, 776 named functions.
Full machine-readable mapping: `agent/w254_source_files.csv`.

Below: shim-district files (eON_*/VPFS_*/mixer*/waveOut*/OGLC_*/d3d9device_*/Dsp*)
with the named functions each source file evidences. No new renames — this
recovers file membership for districts already named through prior waves.

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/vpfs.cpp (18 shim fns, +8 other)
- VPFS_Config_Prepare
- VPFS_ConvertDiskFileToWriteableLocation
- VPFS_ConvertToDiskFile
- VPFS_CreateFolder
- VPFS_Delete
- VPFS_GetDateTime
- VPFS_GetFileAttributes
- VPFS_GetObjectByOffset
- VPFS_GetOverlappedResult
- VPFS_Hint_ContentsOfFolderWillNotChange
- VPFS_MakeSureFolderExistsOnDisk
- VPFS_MoveFileOrFolder
- VPFS_ObjectAtOffsetDeleted
- VPFS_OpenFolderOnDisk
- VPFS_OpenFolder_AddToBuffer
- VPFS_SetAllFolderContentsAsDeleted
- VPFS_SetDateTime
- VPFS_SetFileAttributes

Other named fns in same file: TemporaryDirElemList_Add, TransferBufferSet, vpfs_0403dc90, vpfs_040455c0, vpfs_04045870, vpfs_04046d10, vpfs_04046fb0, vpfs_04047220

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/gdi32/gdi32.cpp (16 shim fns, +11 other)
- eON_AddFontResourceExW
- eON_BitBlt
- eON_ChoosePixelFormat
- eON_CreateDIBSection
- eON_CreateFontIndirectW
- eON_DeleteObject
- eON_ExtTextOutW
- eON_GetCurrentObject
- eON_GetDIBits
- eON_GetDeviceCaps
- eON_GetObjectA
- eON_GetStockObject
- eON_GetTextExtentExPointA
- eON_GetTextExtentExPointI
- eON_SelectObject
- eON_SetDIBits

Other named fns in same file: CalculateKerningPairsTable, FillBitmapRectangle, HDC_AddRef, HDC_FreeDC, HDC_GetCurrentPixelFormat, HDC_Release, TEXTMETRIC_ConvertWToA, gdi32_0411c9a0, gdi32_0411dec0, gdi32_0411df70, gdi32_0411e090

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/ntdll/rtlbitmap.cpp (12 shim fns)
- eON_RtlAreBitsClear
- eON_RtlAreBitsSet
- eON_RtlClearAllBits
- eON_RtlClearBits
- eON_RtlFindClearBits
- eON_RtlFindClearBitsAndSet
- eON_RtlFindSetBits
- eON_RtlFindSetBitsAndClear
- eON_RtlNumberOfClearBits
- eON_RtlNumberOfSetBits
- eON_RtlSetAllBits
- eON_RtlSetBits

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/winsock/winsock.cpp (9 shim fns, +1 other)
- eON_WSARecvFrom
- eON_WSASendTo
- eON_WSAStartup
- eON_bind
- eON_connect
- eON_getnameinfo
- eON_getsockname
- eON_recvfrom
- eON_sendto

Other named fns in same file: AddEthernetInterface

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlDebugFunctions.cpp (8 shim fns, +28 other)
- OGLC_Buffer
- OGLC_DumpBoundTexturesInStage
- OGLC_DumpBuffer
- OGLC_DumpBuffers
- OGLC_DumpDraw
- OGLC_DumpFB
- OGLC_SetRootSavePath
- OGLC_StopOnProgramUpdatePresent

Other named fns in same file: DumpTextureDataByIDBoundInTextureStages, OpenGLDebugEvent, OpenGL_InterpretCurrentVertexBufferWithVertexAttribInfo, OpenGL_LogState_BoundSampler, OpenGL_LogState_BoundTexLevel, OpenGL_LogState_BoundTexture, OpenGL_LogState_Buffer, OpenGL_LogState_BufferMask, OpenGL_LogState_BufferObjectBindings, OpenGL_LogState_Framebuffer, OpenGL_LogState_FramebufferAttachment, OpenGL_LogState_Polygons, OpenGL_LogState_RenderTargets, OpenGL_LogState_Renderbuffer, OpenGL_LogState_Textures, OpenGL_LogState_VertexArrays, SaveDDS, openGlDebugFunctions_040d0cc0, openGlDebugFunctions_040d2a80, openGlDebugFunctions_040d4420, openGlDebugFunctions_040dd5f0, openGlDebugFunctions_040dd7a0, openGlDebugFunctions_040dd880, openGlDebugFunctions_040dd950, openGlDebugFunctions_040de230, openGlDebugFunctions_040de350, openGlDebugFunctions_040de460, openGlDebugFunctions_040dfd00

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/uniformBuffer.cpp (6 shim fns)
- eON_UniformBufferStreamed::AssignLastChunkToBindPoint
- eON_UniformBufferStreamed::MakeNewBuffer
- eON_UniformBufferStreamed::UpdatePixelFloatBufferAndBind
- eON_UniformBufferStreamed::UpdateToNewBuffer
- eON_UniformBufferStreamed::UpdateToNextBatch
- eON_UniformBufferStreamed::UpdateVertexFloatBufferAndBind

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/user32/windowFunctions.cpp (6 shim fns, +1 other)
- eON_EndDialog
- eON_GetClassNameW
- eON_Int_FillDialogWithControls
- eON_Int_UncheckOtherRadioButtonsInGroup
- eON_SendMessageA
- eON_SetWindowPos

Other named fns in same file: CreateWindowEx_Common

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/cursorLinux.cpp (5 shim fns)
- eON_CursorLinux::CreateFromARGBData
- eON_CursorLinux::CreateFromBitPlanes
- eON_CursorLinux::CreateFromHIcon
- eON_CursorLinux::LoadCursorImageFromOpenFile
- eON_CursorLinux::SetStandardCursor

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/commandQueue.cpp (5 shim fns)
- D3D9CommandQueue::CommandSubmitted
- D3D9CommandQueue::D3D9CommandQueue
- D3D9CommandQueue::GetNextCommandPointer
- D3D9CommandQueue::TryExecuteNextCommand
- D3D9CommandQueue::~D3D9CommandQueue

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp (5 shim fns, +134 other)
- d3d9device_EvictManagedResources
- d3d9device_SetIndices
- d3d9device_SetPixelShader
- d3d9device_SetVertexDeclaration
- d3d9device_SetVertexShader

Other named fns in same file: Direct3DDevice9::Initialize, Direct3DDevice9Imp::BeginScene, Direct3DDevice9Imp::BeginStateBlock, Direct3DDevice9Imp::ColorFill, Direct3DDevice9Imp::CreateAdditionalSwapChain, Direct3DDevice9Imp::CreateCubeTexture, Direct3DDevice9Imp::CreateDepthStencilSurface, Direct3DDevice9Imp::CreateIndexBuffer, Direct3DDevice9Imp::CreateOffscreenPlainSurface, Direct3DDevice9Imp::CreateRenderTarget, Direct3DDevice9Imp::CreateScreenBuffers, Direct3DDevice9Imp::CreateTexture, Direct3DDevice9Imp::CreateVertexDeclaration, Direct3DDevice9Imp::CreateVolumeTexture, Direct3DDevice9Imp::DeletePatch, Direct3DDevice9Imp::DeleteVertexBufferForDrawQuad, Direct3DDevice9Imp::Direct3DDevice9Imp, Direct3DDevice9Imp::DirectX8_CopyRects, Direct3DDevice9Imp::DrawIndexedPrimitive, Direct3DDevice9Imp::DrawIndexedPrimitiveUP, Direct3DDevice9Imp::DrawPrimitive, Direct3DDevice9Imp::DrawPrimitiveUP, Direct3DDevice9Imp::DrawRectPatch, Direct3DDevice9Imp::DrawTriPatch, Direct3DDevice9Imp::EndScene, Direct3DDevice9Imp::EndStateBlock, Direct3DDevice9Imp::Fence_IsFinalized, Direct3DDevice9Imp::Fence_Tick, Direct3DDevice9Imp::GRTD_Delete, Direct3DDevice9Imp::GetAvailableTextureMem, Direct3DDevice9Imp::GetBackBuffer, Direct3DDevice9Imp::GetClipStatus, Direct3DDevice9Imp::GetCreationParameters, Direct3DDevice9Imp::GetCurrentFragmentCompileArgs, Direct3DDevice9Imp::GetCurrentTexturePalette, Direct3DDevice9Imp::GetDepthStencilSurface, Direct3DDevice9Imp::GetDeviceCaps, Direct3DDevice9Imp::GetDirect3D, Direct3DDevice9Imp::GetDisplayMode, Direct3DDevice9Imp::GetFVF, Direct3DDevice9Imp::GetIndices, Direct3DDevice9Imp::GetLight, Direct3DDevice9Imp::GetLightEnable, Direct3DDevice9Imp::GetMaterial, Direct3DDevice9Imp::GetNPatchMode, Direct3DDevice9Imp::GetNumberOfSwapChains, Direct3DDevice9Imp::GetPaletteEntries, Direct3DDevice9Imp::GetPixelShader, Direct3DDevice9Imp::GetPixelShaderConstantB, Direct3DDevice9Imp::GetPixelShaderConstantF, Direct3DDevice9Imp::GetPixelShaderConstantI, Direct3DDevice9Imp::GetRasterStatus, Direct3DDevice9Imp::GetRenderTargetData, Direct3DDevice9Imp::GetSamplerState, Direct3DDevice9Imp::GetScissorRect, Direct3DDevice9Imp::GetSoftwareVertexProcessing, Direct3DDevice9Imp::GetStreamSource, Direct3DDevice9Imp::GetStreamSourceFreq, Direct3DDevice9Imp::GetSwapChain, Direct3DDevice9Imp::GetTexture, Direct3DDevice9Imp::GetTransform, Direct3DDevice9Imp::GetVertexDeclaration, Direct3DDevice9Imp::GetVertexShader, Direct3DDevice9Imp::GetVertexShaderConstantB, Direct3DDevice9Imp::GetVertexShaderConstantF, Direct3DDevice9Imp::GetVertexShaderConstantI, Direct3DDevice9Imp::GetViewport, Direct3DDevice9Imp::Internal_LightEnable, Direct3DDevice9Imp::Internal_SetPixelShaderConstantB, Direct3DDevice9Imp::Internal_SetPixelShaderConstantF, Direct3DDevice9Imp::Internal_SetPixelShaderConstantI, Direct3DDevice9Imp::Internal_SetVertexShaderConstantB, Direct3DDevice9Imp::Internal_SetVertexShaderConstantF, Direct3DDevice9Imp::Internal_SetVertexShaderConstantI, Direct3DDevice9Imp::LightEnable, Direct3DDevice9Imp::MakeSureTexturesForDrawAreCurrent, Direct3DDevice9Imp::MultiplyTransform, Direct3DDevice9Imp::OpenGLSide_Clear, Direct3DDevice9Imp::OpenGLSide_CopyRects_ScreenSurfaceToTexture, Direct3DDevice9Imp::OpenGLSide_CreateScreenBuffers, Direct3DDevice9Imp::OpenGLSide_DrawIndexedPrimitive, Direct3DDevice9Imp::OpenGLSide_InitThread, Direct3DDevice9Imp::OpenGLSide_Present, Direct3DDevice9Imp::OpenGLSide_SetRenderState, Direct3DDevice9Imp::OpenGLSide_SetSamplerState, Direct3DDevice9Imp::OpenGLSide_SetTextureStageState, Direct3DDevice9Imp::OpenGLSide_SetTransform, Direct3DDevice9Imp::OpenGLSide_ShutdownDevice, Direct3DDevice9Imp::OpenGLSide_StretchRect_SimpleRenderbuffer2Texture, Direct3DDevice9Imp::OpenGLSide_StretchRect_SimpleTexture2Texture, Direct3DDevice9Imp::OpenGLSide_StretchRect_Texture2TextureOrRenderbuffer, Direct3DDevice9Imp::OpenGLThreadRunloop, Direct3DDevice9Imp::PrepareVertexArraysForInstancedDraw, Direct3DDevice9Imp::PrepareVertexBufferForDrawQuad, Direct3DDevice9Imp::Present, Direct3DDevice9Imp::ProcessVertices, Direct3DDevice9Imp::Reset, Direct3DDevice9Imp::SetClipStatus, Direct3DDevice9Imp::SetCursorPosition, Direct3DDevice9Imp::SetCursorProperties, Direct3DDevice9Imp::SetDepthStencilSurface, Direct3DDevice9Imp::SetDialogBoxMode, Direct3DDevice9Imp::SetFVF, Direct3DDevice9Imp::SetMaterial, Direct3DDevice9Imp::SetNPatchMode, Direct3DDevice9Imp::SetPaletteEntries, Direct3DDevice9Imp::SetScissorRect, Direct3DDevice9Imp::SetSoftwareVertexProcessing, Direct3DDevice9Imp::SetStreamSource, Direct3DDevice9Imp::SetStreamSourceFreq, Direct3DDevice9Imp::SetTexture, Direct3DDevice9Imp::SetTransform, Direct3DDevice9Imp::SetupRenderPipeline, Direct3DDevice9Imp::SetupTexturesForDraw, Direct3DDevice9Imp::SetupVertexAttributeArrays, Direct3DDevice9Imp::ShowCursor, Direct3DDevice9Imp::StretchRect, Direct3DDevice9Imp::SubmitNewDataToDrawQuadBuffer, Direct3DDevice9Imp::UpdateViewportAndScissorDimensions_D3D9, Direct3DDevice9Imp::ValidateDevice, Direct3DDevice9Imp::VertexArrays_EnableArrays, Direct3DStateBlock9Imp::SetSamplerState, OpenGLContextCache::UpdateTextureMatrices, SetRenderTarget, direct3ddevice9imp_040704e0, direct3ddevice9imp_040803c0, direct3ddevice9imp_04080490, direct3ddevice9imp_040806a0, direct3ddevice9imp_04080760, direct3ddevice9imp_0408f6f0, direct3ddevice9imp_0409a7c0, direct3ddevice9imp_0409a900, direct3ddevice9imp_0409bd10, direct3ddevice9imp_040a2df0

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2dsp.cpp (5 shim fns)
- Dsp::ChangeSampleRate
- Dsp::ChangeVolume
- Dsp::JoinChannels
- Dsp::Mix
- Dsp::ProcessEffect

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/advapi32/crypt.cpp (5 shim fns)
- eON_CryptAcquireContextA
- eON_CryptDecrypt
- eON_CryptDeriveKey
- eON_CryptEncrypt
- eON_CryptImportKey

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/core/mapOfBits.cpp (4 shim fns, +2 other)
- eON_MapOfBits::ClearRange
- eON_MapOfBits::FindClearRange
- eON_MapOfBits::FindSetRange
- eON_MapOfBits::SetRange

Other named fns in same file: mapOfBits_0402e0a0, mapOfBits_0402e160

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/core/tracking.cpp (4 shim fns, +1 other)
- eON_TrackingManager::Create
- eON_TrackingManager::Delete
- eON_TrackingManager::GetIndent
- eON_TrackingManager::GetThread

Other named fns in same file: tracking_0402f9a0

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synch_criticalsection.cpp (4 shim fns, +1 other)
- eON_DeleteCriticalSection
- eON_InitializeCriticalSection
- eON_InitializeCriticalSectionAndSpinCount
- eON_SetCriticalSectionSpinCount

Other named fns in same file: synch_criticalsection_04145ed0

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synch_timerqueue.cpp (4 shim fns, +1 other)
- eON_ChangeTimerQueueTimer
- eON_CreateTimerQueue
- eON_CreateTimerQueueTimer
- eON_DeleteTimerQueueTimer

Other named fns in same file: TimerQueueThreadFunction

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/core/vpfs/caseInsensitivePath.cpp (3 shim fns, +2 other)
- VPFS_Internal_MakePathCaseSensitive
- VPFS_MadeChangesAtPath
- VPFS_MakePathCaseSensitive

Other named fns in same file: GetSubelement, RefreshFolder

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/D3DBytecodeToGLSLText.cpp (3 shim fns, +5 other)
- eON_ShaderData::GenerateGLSLDeclarations
- eON_ShaderData::GenerateOutputRegistersAssignments
- eON_ShaderData::InputRegisterIsColor

Other named fns in same file: DetermineCoordMaskForSampling, TextureType::GetType, convert_texldd, convert_texreg2ar, convert_texreg2gb

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/audioallocator.h (3 shim fns, +6 other)
- Dsp::ChangeSampleRate
- Dsp::Mix
- Dsp::ProcessEffect

Other named fns in same file: XAudio2SourceVoiceImp::CopyPcm, XAudio2VoiceImp::Process, audioallocator_04103eb0, audioallocator_04105480, audioallocator_04105980, audioallocator_04108e80

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2helpers.h (3 shim fns, +3 other)
- Dsp::JoinChannels
- Dsp::Mix
- Dsp::ProcessEffect

Other named fns in same file: XAudio2SourceVoiceImp::CopyPcm, XAudio2VoiceImp::Process, xaudio2helpers_0410cfb0

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/iphlpapi/iphlpapi.cpp (3 shim fns)
- eON_GetAdaptersInfo
- eON_Int_GetIpAddressTable
- eON_Int_GetIpForwardTable

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/windll.cpp (3 shim fns, +9 other)
- eON_GetModuleFileNameW
- eON_GetModuleHandleExA
- eON_GetModuleHandleExW

Other named fns in same file: AddTLSSlot, InitializeTLS, ProcessLibraryPath, dll_Init, windll_041531d0, windll_04153380, windll_04153730, winpe_LinkImports, winpe_LoadFromMemory

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/winprofile.cpp (3 shim fns, +1 other)
- eON_GetPrivateProfileIntA
- eON_GetPrivateProfileStringA
- eON_WritePrivateProfileStringA

Other named fns in same file: Profile_ReadNextLine

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/eonBuffer.cpp (2 shim fns, +3 other)
- eON_Buffer::GetOpenGLSideDataRegion
- eON_Buffer::OpenGLSide_Unlock

Other named fns in same file: MergeRegions, RetainSharedMemoryRegion, TryReacquireTransientRegion

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/mem_vm.cpp (2 shim fns, +10 other)
- eON_VirtualAllocEx
- eON_VirtualFreeEx

Other named fns in same file: GetPagesProtection, Win32ToInternalProtectFlags, custom_munmap, getProcessVMInfo, vmm_CommitRegion, vmm_DeleteReservedRegion, vmm_Init, vmm_PrepareImageRegion, vmm_ReserveNewRegion, vmm_ReserveRegion

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/nls_datetime.cpp (2 shim fns)
- eON_GetDateFormatW
- eON_GetTimeFormatW

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/nls_locale.cpp (2 shim fns)
- eON_GetLocaleInfoA
- eON_GetLocaleInfoW

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/winerrors.cpp (2 shim fns)
- eON_FormatMessageA
- eON_FormatMessageW

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/winthreads.cpp (2 shim fns, +3 other)
- eON_CreateThread
- eON_SuspendThread

Other named fns in same file: thread_EraseThreadInfo, thread_MakeSureThreadHasTEB, thread_SuspendPoint

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/user32/events.cpp (2 shim fns)
- eON_DefWindowProcA
- eON_PeekMessageA

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/core/core.cpp (1 shim fns, +1 other)
- eON_PatternFill

Other named fns in same file: Exit_eON

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/core/cursor.cpp (1 shim fns)
- eON_Cursor::CursorData::FillInFromFile

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/core/filesystem.cpp (1 shim fns)
- eON_FileSystem::winToPosixPath

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/filesystem.cpp (1 shim fns, +1 other)
- eON_FileSystem::windowsRegistryPathMacPlist

Other named fns in same file: readSymbolicLink

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/gameControllers.cpp (1 shim fns, +3 other)
- eON_GamepadLinux::ControlValueUpdate

Other named fns in same file: GamepadDetectionCallback, LinuxDevice::UpdateControlValues, LinuxDevice::UpdateForceFeedback

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/runLoop.cpp (1 shim fns, +1 other)
- eON_Core::pumpRunLoopUntilEmpty

Other named fns in same file: RelaunchGame

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/d3dstructs.h (1 shim fns, +8 other)
- eON_UniformBufferStreamed::UpdateToNewBuffer

Other named fns in same file: Direct3DDevice9Imp::AddResourceToPool, Direct3DDevice9Imp::CreateQuery, Direct3DDevice9Imp::CreateVertexDeclaration, Direct3DDevice9Imp::GRTD_Delete, TextureType::GetType, d3dstructs_04098020, d3dstructs_040a4ea0, d3dstructs_040eec00

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/dataTransferBuffer.cpp (1 shim fns)
- eON_DataTransferBuffer::StoreData

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/advapi32/registry.cpp (1 shim fns)
- eON_RegEnumValueA

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/atom.cpp (1 shim fns)
- eON_GetAtomNameA

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/fs_paths.cpp (1 shim fns)
- eON_GetLongPathNameW

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/linux/computername.cpp (1 shim fns)
- eON_GetComputerNameExW

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/processor.cpp (1 shim fns, +1 other)
- eON_RaiseException

Other named fns in same file: seh_RaiseException

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/wintime.cpp (1 shim fns)
- eON_CompareFileTime

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/ole32/guidfuncs.cpp (1 shim fns)
- eON_CoCreateGuid

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/rpcrt4/rpcrt4.cpp (1 shim fns)
- eON_UuidCreate

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/shell32/shell32.cpp (1 shim fns, +3 other)
- eON_Int_ConvertListOfPathsToWideChar

Other named fns in same file: WildcardAndFilenameToFullPath, shell32_0416c260, shell32_0416c3d0

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/user32/accelerators.cpp (1 shim fns, +1 other)
- eON_LoadAcceleratorsA

Other named fns in same file: AddTableToValidTablesListAndGetHandle

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/user32/gdi.cpp (1 shim fns)
- eON_GetDC

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/user32/text.cpp (1 shim fns)
- eON_Int_GetCharWidth

## /home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/winmm/time.cpp (1 shim fns)
- eON_Int_TimerThreadRoutine

