// Recovered source: eon2/src/dlls/directx/d3d9/display.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- Direct3DDevice9Imp::CreateRenderbufferInOpenGL @0x040ba050 ---
/* source: display */

undefined4 Direct3DDevice9Imp__CreateRenderbufferInOpenGL(void)

{
  int iVar1;
  undefined4 local_10 [3];
  
  iVar1 = eON_Int_GL_NoteCurrentContext();
  if (iVar1 == 0) {
    FUN_0400a810("GetRawCurrentOpenGLContext()",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/display.cpp"
                 ,0x11d,"GLuint Direct3DDevice9Imp::CreateRenderbufferInOpenGL()");
  }
  (*DAT_0451e664)(1,local_10);
  return local_10[0];
}

// --- Direct3DDevice9Imp::CreateTextureInOpenGL @0x040b9b50 ---
/* source: display */

undefined4 Direct3DDevice9Imp__CreateTextureInOpenGL(void)

{
  int iVar1;
  undefined4 local_10 [3];
  
  iVar1 = eON_Int_GL_NoteCurrentContext();
  if (iVar1 == 0) {
    FUN_0400a810("GetRawCurrentOpenGLContext()",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/display.cpp"
                 ,0x102,"GLuint Direct3DDevice9Imp::CreateTextureInOpenGL()");
  }
  glGenTextures(1,local_10);
  return local_10[0];
}

// --- Direct3DDevice9Imp::DeleteRenderbufferInOpenGL @0x040ba0b0 ---
/* source: display */

void Direct3DDevice9Imp__DeleteRenderbufferInOpenGL(void)

{
  int iVar1;
  
  iVar1 = eON_Int_GL_NoteCurrentContext();
  if (iVar1 == 0) {
    FUN_0400a810("GetRawCurrentOpenGLContext()",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/display.cpp"
                 ,0x12e,"void Direct3DDevice9Imp::DeleteRenderbufferInOpenGL(GLuint)");
  }
  (*DAT_0451e680)(1,&stack0x00000008);
  return;
}

// --- Direct3DDevice9Imp::DeleteTextureInOpenGL @0x040b9bb0 ---
/* WARNING: Type propagation algorithm not settling */
/* source: display */

void Direct3DDevice9Imp__DeleteTextureInOpenGL(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_10;
  
  iVar2 = eON_Int_GL_NoteCurrentContext();
  if (iVar2 == 0) {
    FUN_0400a810("GetRawCurrentOpenGLContext()",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/display.cpp"
                 ,0x10a,"void Direct3DDevice9Imp::DeleteTextureInOpenGL(GLuint)");
  }
  iVar2 = *(int *)(param_1 + 0xeb48);
  if (*(int *)(iVar2 + 0x23c) == param_2) {
    FUN_040c6e20(iVar2,0x84c0,*(undefined4 *)(iVar2 + 0x238),0);
    iVar2 = *(int *)(param_1 + 0xeb48);
    iVar1 = *(int *)(iVar2 + 0x244);
  }
  else {
    iVar1 = *(int *)(iVar2 + 0x244);
  }
  if (iVar1 == param_2) {
    FUN_040c6e20(iVar2,0x84c1,*(undefined4 *)(iVar2 + 0x240),0);
    iVar2 = *(int *)(param_1 + 0xeb48);
    iVar1 = *(int *)(iVar2 + 0x24c);
  }
  else {
    iVar1 = *(int *)(iVar2 + 0x24c);
  }
  if (iVar1 == param_2) {
    FUN_040c6e20(iVar2,0x84c2,*(undefined4 *)(iVar2 + 0x248),0);
    iVar2 = *(int *)(param_1 + 0xeb48);
    iVar1 = *(int *)(iVar2 + 0x254);
  }
  else {
    iVar1 = *(int *)(iVar2 + 0x254);
  }
  if (iVar1 == param_2) {
    FUN_040c6e20(iVar2,0x84c3,*(undefined4 *)(iVar2 + 0x250),0);
    iVar2 = *(int *)(param_1 + 0xeb48);
    iVar1 = *(int *)(iVar2 + 0x25c);
  }
  else {
    iVar1 = *(int *)(iVar2 + 0x25c);
  }
  if (iVar1 == param_2) {
    FUN_040c6e20(iVar2,0x84c4,*(undefined4 *)(iVar2 + 600),0);
    iVar2 = *(int *)(param_1 + 0xeb48);
    iVar1 = *(int *)(iVar2 + 0x264);
  }
  else {
    iVar1 = *(int *)(iVar2 + 0x264);
  }
  if (iVar1 == param_2) {
    FUN_040c6e20(iVar2,0x84c5,*(undefined4 *)(iVar2 + 0x260),0);
    iVar2 = *(int *)(param_1 + 0xeb48);
    iVar1 = *(int *)(iVar2 + 0x26c);
  }
  else {
    iVar1 = *(int *)(iVar2 + 0x26c);
  }
  if (iVar1 == param_2) {
    FUN_040c6e20(iVar2,0x84c6,*(undefined4 *)(iVar2 + 0x268),0);
    iVar2 = *(int *)(param_1 + 0xeb48);
    iVar1 = *(int *)(iVar2 + 0x274);
  }
  else {
    iVar1 = *(int *)(iVar2 + 0x274);
  }
  if (iVar1 == param_2) {
    FUN_040c6e20(iVar2,0x84c7,*(undefined4 *)(iVar2 + 0x270),0);
    iVar2 = *(int *)(param_1 + 0xeb48);
    iVar1 = *(int *)(iVar2 + 0x27c);
  }
  else {
    iVar1 = *(int *)(iVar2 + 0x27c);
  }
  if (iVar1 == param_2) {
    FUN_040c6e20(iVar2,0x84c8,*(undefined4 *)(iVar2 + 0x278),0);
    iVar2 = *(int *)(param_1 + 0xeb48);
    iVar1 = *(int *)(iVar2 + 0x284);
  }
  else {
    iVar1 = *(int *)(iVar2 + 0x284);
  }
  if (iVar1 == param_2) {
    FUN_040c6e20(iVar2,0x84c9,*(undefined4 *)(iVar2 + 0x280),0);
    iVar2 = *(int *)(param_1 + 0xeb48);
    iVar1 = *(int *)(iVar2 + 0x28c);
  }
  else {
    iVar1 = *(int *)(iVar2 + 0x28c);
  }
  if (iVar1 == param_2) {
    FUN_040c6e20(iVar2,0x84ca,*(undefined4 *)(iVar2 + 0x288),0);
    iVar2 = *(int *)(param_1 + 0xeb48);
    iVar1 = *(int *)(iVar2 + 0x294);
  }
  else {
    iVar1 = *(int *)(iVar2 + 0x294);
  }
  if (iVar1 == param_2) {
    FUN_040c6e20(iVar2,0x84cb,*(undefined4 *)(iVar2 + 0x290),0);
    iVar2 = *(int *)(param_1 + 0xeb48);
    iVar1 = *(int *)(iVar2 + 0x29c);
  }
  else {
    iVar1 = *(int *)(iVar2 + 0x29c);
  }
  if (iVar1 == param_2) {
    FUN_040c6e20(iVar2,0x84cc,*(undefined4 *)(iVar2 + 0x298),0);
    iVar2 = *(int *)(param_1 + 0xeb48);
    iVar1 = *(int *)(iVar2 + 0x2a4);
  }
  else {
    iVar1 = *(int *)(iVar2 + 0x2a4);
  }
  if (iVar1 == param_2) {
    FUN_040c6e20(iVar2,0x84cd,*(undefined4 *)(iVar2 + 0x2a0),0);
    iVar2 = *(int *)(param_1 + 0xeb48);
    iVar1 = *(int *)(iVar2 + 0x2ac);
  }
  else {
    iVar1 = *(int *)(iVar2 + 0x2ac);
  }
  if (iVar1 == param_2) {
    FUN_040c6e20(iVar2,0x84ce,*(undefined4 *)(iVar2 + 0x2a8),0);
    iVar2 = *(int *)(param_1 + 0xeb48);
    iVar1 = *(int *)(iVar2 + 0x2b4);
  }
  else {
    iVar1 = *(int *)(iVar2 + 0x2b4);
  }
  if (iVar1 == param_2) {
    FUN_040c6e20(iVar2,33999,*(undefined4 *)(iVar2 + 0x2b0),0);
  }
  local_10 = param_2;
  glDeleteTextures(1,&local_10);
  return;
}

// --- Direct3DDevice9Imp::DetermineSharedContextCapabilities @0x040b9390 ---
/* source: display */

undefined4 Direct3DDevice9Imp__DetermineSharedContextCapabilities(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = eON_Int_GL_NoteCurrentContext();
  if (iVar2 == 0) {
    FUN_0400a810("GetRawCurrentOpenGLContext()",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/display.cpp"
                 ,0x32,"bool Direct3DDevice9Imp::DetermineSharedContextCapabilities()");
  }
  *(undefined1 *)(param_1 + 0xeb4e) = 1;
  cVar1 = DAT_0451cad2;
  if (*(char *)(param_1 + 0xeb4c) == '\0') {
    bVar3 = false;
    if ((DAT_0451ca65 == '\0') &&
       ((((DAT_0451c9c0 == '\0' || (DAT_0451c9c3 == '\0')) || (DAT_0451c9c2 == '\0')) ||
        (DAT_0451c9b2 == '\0')))) {
      bVar3 = true;
      FUN_0402cd10(0x14,"OpenGL doesn\'t support required OpenGL extensions:");
      FUN_0402cd10(0x14,
                   "    GL_ARB_framebuffer_object || ( GL_EXT_framebuffer_object && GL_EXT_framebuffer_blit && GL_EXT_framebuffer_multisample && GL_EXT_packed_depth_stencil )"
                  );
    }
    if (DAT_0451ca5e == '\0') {
      if (!bVar3) {
        bVar3 = true;
        FUN_0402cd10(0x14,"OpenGL doesn\'t support required OpenGL extensions:");
      }
      FUN_0402cd10(0x14,"    GL_ARB_half_float_pixel");
    }
    if (DAT_0451ca17 == '\0') {
      if (!bVar3) {
        bVar3 = true;
        FUN_0402cd10(0x14,"OpenGL doesn\'t support required OpenGL extensions:");
      }
      FUN_0402cd10(0x14,"    GL_ARB_texture_float");
    }
    if (DAT_0451c993 == '\0') {
      if (!bVar3) {
        bVar3 = true;
        FUN_0402cd10(0x14,"OpenGL doesn\'t support required OpenGL extensions:");
      }
      FUN_0402cd10(0x14,"    GL_EXT_texture_compression_s3tc");
    }
    if (DAT_0451c985 == '\0') {
      if (!bVar3) {
        bVar3 = true;
        FUN_0402cd10(0x14,"OpenGL doesn\'t support required OpenGL extensions:");
      }
      FUN_0402cd10(0x14,"    GL_EXT_texture_sRGB");
    }
    if (DAT_0451c984 == '\0') {
      if (!bVar3) {
        bVar3 = true;
        FUN_0402cd10(0x14,"OpenGL doesn\'t support required OpenGL extensions:");
      }
      FUN_0402cd10(0x14,"    GL_EXT_texture_sRGB_decode");
    }
    if (DAT_0451c985 == '\0') {
      if (!bVar3) {
        bVar3 = true;
        FUN_0402cd10(0x14,"OpenGL doesn\'t support required OpenGL extensions:");
      }
      FUN_0402cd10(0x14,"    GL_EXT_texture_sRGB");
    }
    if ((DAT_0451ca5c == '\0') && (DAT_0451c9da == '\0')) {
      if (!bVar3) {
        FUN_0402cd10(0x14,"OpenGL doesn\'t support required OpenGL extensions:");
      }
      FUN_0402cd10(0x14,"    GL_ARB_imaging || GL_EXT_blend_color");
    }
    else if (!bVar3) {
      bVar3 = DAT_0451ca9b != '\0';
      *(undefined1 *)(param_1 + 0xeb4f) = 1;
      *(undefined1 *)(param_1 + 0xeb51) = 0;
      *(bool *)(param_1 + 0xeb4d) = bVar3;
      cVar1 = DAT_0451cad2;
      goto joined_r0x040b9616;
    }
    FUN_0402cfd0();
    return 0;
  }
  *(undefined1 *)(param_1 + 0xeb4f) = 1;
  *(undefined1 *)(param_1 + 0xeb51) = 1;
joined_r0x040b9616:
  bVar3 = true;
  if ((cVar1 == '\0') && (bVar3 = true, DAT_0451ca65 == '\0')) {
    bVar3 = DAT_0451c9c2 != '\0';
  }
  *(bool *)(param_1 + 0xeb50) = bVar3;
  FUN_0402cd10(0x14,"OpenGL backend to Direct3D9: SUMMARY OF FALLBACKS AND INEFFICIENCIES:");
  if (*(char *)(param_1 + 0xeb4c) == '\0') {
    FUN_0402cd10(0x14,
                 " - OpenGL Core context not selected or not available from OpenGL driver. Selected old OpenGL 2.1 context. This will likely result in slowdown due to automatic selection of fallback paths for some rendering pipeline elements."
                );
  }
  if (*(char *)(param_1 + 0xeb50) == '\0') {
    FUN_0402cd10(0x14,
                 " - EXT_framebuffer_multisample OpenGL extension not supported. This may actually cause the game to be faster, but the rendering results may be jagged and edgy due to inability to use multisampled surfaced where the game requests them."
                );
  }
  if (DAT_0451ca5a == '\0') {
    FUN_0402cd10(0x14,
                 " - ARB_instanced_arrays OpenGL extension not supported. This may cause the game to be much slower, if it\'s using many instanced draws, as we then have to use a series of normal draws instead of a single instanced draw."
                );
  }
  if (DAT_0451ca41 == '\0') {
    FUN_0402cd10(0x14,
                 " - ARB_sampler_objects OpenGL extension not supported. This may cause the game to be much slower, if it\'s using the same Direct3D9 texture with different sampler settings, as then we have to make copies of the texture for the draw to give correct results."
                );
  }
  cVar1 = FUN_04021f50();
  if (cVar1 == '\0') {
    FUN_0402cd10(0x14,
                 " - ARB_texture_storage OpenGL extension not supported or disabled. This may cause the game to be slower, because we have no way of telling OpenGL driver simply that textures are complete, and it has to check all the time."
                );
  }
  if (DAT_0451ca88 == '\0') {
    FUN_0402cd10(0x14,
                 " - ARB_buffer_storage OpenGL extension not supported. This may cause the game to be slower, because we have no way of telling OpenGL driver exactly how we plan to use buffers, and it has to guess, and it doesn\'t always guess optimally."
                );
  }
  if (DAT_0451ca7c == '\0') {
    FUN_0402cd10(0x14,
                 " - ARB_copy_buffer OpenGL extension not supported. For safety, creating all buffers which could have to be converted to dynamic buffers later as dynamic buffer right from the start. This may cause the game to be a bit slower."
                );
  }
  if ((*(char *)(param_1 + 0xeb4c) == '\0') && (DAT_0451c9c8 == '\0')) {
    FUN_0402cd10(0x14,
                 " - Indexed color masks not supported in OpenGL, can\'t simulate separate color masks for different render targets! Will try to work around it, but it could be impossible in some cases."
                );
  }
  if (DAT_0451c98c == '\0') {
    FUN_0402cd10(0x14,
                 " - Anisotropic texture filtering not supported in OpenGL! This may produce incorrect rendering results in game, as other texture filtering modes will be used instead."
                );
  }
  FUN_0402cd10(0x14,"OpenGL backend to Direct3D9: END OF SUMMARY");
  return 1;
}

// --- Direct3DDevice9Imp::FrameRenderEnd @0x040b9330 ---
/* source: display */

void Direct3DDevice9Imp__FrameRenderEnd(int param_1)

{
  if (*(char *)(param_1 + 0xe9dc) == '\0') {
    FUN_0400a810("mOGLDeviceState.RenderingScene",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/display.cpp"
                 ,0x29,"void Direct3DDevice9Imp::FrameRenderEnd()");
  }
  *(undefined1 *)(param_1 + 0xe9dc) = 0;
  LeaveCriticalSection(param_1 + 0x10);
  return;
}

// --- Direct3DDevice9Imp::FrameRenderStart @0x040b92d0 ---
/* source: display */

void Direct3DDevice9Imp__FrameRenderStart(int param_1)

{
  if (*(char *)(param_1 + 0xe9dc) != '\0') {
    FUN_0400a810("!mOGLDeviceState.RenderingScene",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/display.cpp"
                 ,0x22,"void Direct3DDevice9Imp::FrameRenderStart()");
  }
  EnterCriticalSection(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0xe9dc) = 1;
  return;
}

// --- Direct3DDevice9Imp::GetContextCache @0x040b9af0 ---
/* source: display */

undefined4 Direct3DDevice9Imp__GetContextCache(int param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0xeb44) + 0x1c))
                    (*(int **)(param_1 + 0xeb44),*(undefined4 *)(*(int *)(param_1 + 0xeb48) + 0x224)
                    );
  if (cVar1 == '\0') {
    FUN_0400a810("mOpenGLWrapper->ContextIsCurrent( mOpenGLContextCache->Context() )",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/display.cpp"
                 ,0xf9,"OpenGLContextCache* Direct3DDevice9Imp::GetContextCache()");
  }
  return *(undefined4 *)(param_1 + 0xeb48);
}

// --- Direct3DDevice9Imp::VertexArrays_DeclarationDeleted @0x040ba350 ---
/* source: display */

void Direct3DDevice9Imp__VertexArrays_DeclarationDeleted(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  
  cVar3 = (**(code **)(**(int **)(param_1 + 0xeb44) + 0x1c))
                    (*(int **)(param_1 + 0xeb44),*(undefined4 *)(*(int *)(param_1 + 0xeb48) + 0x224)
                    );
  if (cVar3 == '\0') {
    FUN_0400a810("mOpenGLWrapper->ContextIsCurrent( mOpenGLContextCache->Context() )",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/display.cpp"
                 ,0x160,
                 "void Direct3DDevice9Imp::VertexArrays_DeclarationDeleted(LPCVOID, Direct3DVertexDeclaration9*)"
                );
    puVar1 = *(undefined4 **)(param_1 + 0xeb48);
    iVar2 = puVar1[0x10];
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 0xeb48);
    iVar2 = puVar1[0x10];
  }
  if (iVar2 == param_2) {
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0xffffffff;
    puVar1[4] = 0xffffffff;
    puVar1[5] = 0xffffffff;
    puVar1[6] = 0xffffffff;
    puVar1[7] = 0xffffffff;
    puVar1[8] = 0xffffffff;
    puVar1[9] = 0xffffffff;
    puVar1[10] = 0xffffffff;
    puVar1[0xb] = 0xffffffff;
    puVar1[0xc] = 0xffffffff;
    puVar1[0xd] = 0xffffffff;
    puVar1[0xe] = 0xffffffff;
    puVar1[0xf] = 0xffffffff;
    puVar1[0x10] = 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xeafc));
  if (*(int *)(param_3 + 0x1c) != 0) {
    *(undefined4 *)(*(int *)(param_3 + 0x1c) + 4) = *(undefined4 *)(param_3 + 0x18);
  }
  if (*(int *)(param_3 + 0x18) != 0) {
    *(undefined4 *)(*(int *)(param_3 + 0x18) + 8) = *(undefined4 *)(param_3 + 0x1c);
  }
  *(undefined4 *)(param_3 + 0x18) = 0;
  *(undefined4 *)(param_3 + 0x1c) = 0;
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xeafc));
  return;
}

// --- Direct3DDevice9Imp::VertexArrays_VertexBufferInvalidated @0x040ba520 ---
/* source: display */

void Direct3DDevice9Imp__VertexArrays_VertexBufferInvalidated(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = eON_Int_GL_NoteCurrentContext();
  if ((iVar4 != 0) &&
     (cVar3 = (**(code **)(**(int **)(param_1 + 0xeb44) + 0x1c))
                        (*(int **)(param_1 + 0xeb44),
                         *(undefined4 *)(*(int *)(param_1 + 0xeb48) + 0x224)), cVar3 == '\0')) {
    FUN_0400a810("!GetRawCurrentOpenGLContext() || mOpenGLWrapper->ContextIsCurrent( mOpenGLContextCache->Context() )"
                 ,
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/display.cpp"
                 ,0x17d,"void Direct3DDevice9Imp::VertexArrays_VertexBufferInvalidated(LPCVOID)");
  }
  puVar1 = *(undefined4 **)(param_1 + 0xeb48);
  if (puVar1[100] != 0) {
    iVar5 = 0;
    iVar4 = puVar1[0x13];
    puVar2 = puVar1;
    while( true ) {
      if (iVar4 == param_2) {
        *puVar1 = 0xffffffff;
        puVar1[1] = 0xffffffff;
        puVar1[2] = 0xffffffff;
        puVar1[3] = 0xffffffff;
        puVar1[4] = 0xffffffff;
        puVar1[5] = 0xffffffff;
        puVar1[6] = 0xffffffff;
        puVar1[7] = 0xffffffff;
        puVar1[8] = 0xffffffff;
        puVar1[9] = 0xffffffff;
        puVar1[10] = 0xffffffff;
        puVar1[0xb] = 0xffffffff;
        puVar1[0xc] = 0xffffffff;
        puVar1[0xd] = 0xffffffff;
        puVar1[0xe] = 0xffffffff;
        puVar1[0xf] = 0xffffffff;
        puVar1[0x10] = 0;
        return;
      }
      iVar5 = iVar5 + 1;
      if (iVar5 == puVar1[100]) break;
      iVar4 = puVar2[0x17];
      puVar2 = puVar2 + 4;
    }
  }
  return;
}

