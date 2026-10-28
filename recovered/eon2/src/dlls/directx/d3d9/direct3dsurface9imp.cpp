// Recovered source: eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- Direct3DSurface9Imp::CopyOpenGLObjectData @0x040afa40 ---
/* source: direct3dbasetexture9imp, direct3dsurface9imp */

void Direct3DSurface9Imp__CopyOpenGLObjectData(int param_1,int param_2,char param_3,int *param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x6c) == 0x4c4c554e) {
    FUN_0400a810("mDesc.Format != D3DFMT_NULL",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0x5a8,"void Direct3DSurface9Imp::CopyOpenGLObjectData(INT, bool, const RECT*)");
    iVar2 = *(int *)(param_1 + 0x8c);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x8c);
  }
  if (iVar2 == 1) {
    FUN_0400a810("mSurfaceType != EST_PlainSurface",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0x5a9,"void Direct3DSurface9Imp::CopyOpenGLObjectData(INT, bool, const RECT*)");
  }
  if (*(int *)(param_1 + 0xd0) != 0) {
    FUN_0400a810("!mRenderBuffer",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0x5aa,"void Direct3DSurface9Imp::CopyOpenGLObjectData(INT, bool, const RECT*)");
  }
  iVar2 = *(int *)(param_1 + 0x90);
  if (iVar2 == 0) {
    FUN_0400a810("mTexture",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0x5ab,"void Direct3DSurface9Imp::CopyOpenGLObjectData(INT, bool, const RECT*)");
    iVar2 = *(int *)(param_1 + 0x90);
  }
  direct3dbasetexture9imp_0406db60(iVar2 + 4,param_2);
  iVar2 = *(int *)(param_1 + 0x90);
  if (*(int *)(iVar2 + 0x284) <= param_2) {
    FUN_0400a810("(INT) mOpenGLTexturesCount > index",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.h"
                 ,0x8c,"OpenGLTexture* Direct3DBaseTexture9Imp::GetOpenGLTexture(INT)");
  }
  iVar2 = *(int *)(iVar2 + 0x244 + param_2 * 4);
  if (iVar2 == 0) {
    FUN_0400a810(&PTR_DAT_042e85bd,
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0x5af,"void Direct3DSurface9Imp::CopyOpenGLObjectData(INT, bool, const RECT*)");
  }
  iVar3 = Direct3DDevice9Imp__GetContextCache(*(int *)(param_1 + 0x1c) + 0x40);
  FramebufferCache__GetFramebufferHash(iVar3 + 0x1f8,*(undefined4 *)(param_1 + 0xc),0,0,0,0,0);
  FUN_0406d620(iVar2,iVar3);
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar6 = *(int *)(iVar3 + 0xeb88);
  if ((((*(char *)(iVar6 + 0x424) != '\x0f') || (*(char *)(iVar6 + 0x425) != '\x0f')) ||
      (*(char *)(iVar6 + 0x426) != '\x0f')) || (*(char *)(iVar6 + 0x427) != '\x0f')) {
    glColorMask(1,1,1,1);
    *(undefined1 *)(iVar6 + 0x424) = 0xf;
    *(undefined1 *)(iVar6 + 0x425) = 0xf;
    *(undefined1 *)(iVar6 + 0x426) = 0xf;
    *(undefined1 *)(iVar6 + 0x427) = 0xf;
    puVar1 = (uint *)(iVar3 + 0xea44);
    *puVar1 = *puVar1 | 4;
  }
  if (param_3 == '\0') {
    iVar3 = param_4[1];
    iVar6 = *param_4;
    iVar4 = param_4[3] - iVar3;
    iVar5 = param_4[2] - iVar6;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x88);
    iVar5 = *(int *)(param_1 + 0x84);
    iVar3 = 0;
    iVar6 = 0;
  }
  glCopyTexSubImage2D(*(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 0xc0),iVar6,iVar3,
                      iVar6,iVar3,iVar5,iVar4);
  *(undefined1 *)(iVar2 + 0x10) = 1;
  return;
}

// --- Direct3DSurface9Imp::GetDepthBits @0x040add60 ---
/* source: direct3dsurface9imp */

undefined4 Direct3DSurface9Imp__GetDepthBits(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xac);
  if (uVar1 == 0x81a7) {
    return 0x20;
  }
  if (uVar1 < 0x81a8) {
    if (uVar1 == 0x81a5) {
      return 0x10;
    }
    if (uVar1 == 0x81a6) {
      return 0x18;
    }
  }
  else if (uVar1 == 0x84f9) {
    FUN_0400a810("false",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0x1cb,"ULONG Direct3DSurface9Imp::GetDepthBits() const");
    uVar1 = *(uint *)(param_1 + 0xac);
  }
  else if (uVar1 == 0x88f0) {
    return 0x18;
  }
  if (uVar1 == 0x84f9) {
    FUN_0400a810("false",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0x1ae,"bool Direct3DSurface9Imp::IsDepth() const");
  }
  else if (uVar1 < 0x84f9) {
    if (2 < uVar1 - 0x81a5) {
      return 0;
    }
  }
  else if (uVar1 != 0x88f0) {
    return 0;
  }
  FUN_0400a810("!IsDepth()",
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
               ,0x1cd,"ULONG Direct3DSurface9Imp::GetDepthBits() const");
  return 0;
}

// --- Direct3DSurface9Imp::InitializeCommonVariables @0x040ad740 ---
/* source: direct3dsurface9imp */

void Direct3DSurface9Imp__InitializeCommonVariables(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  Direct3DResource9Imp__InitializeInDevicePool(param_1,*(undefined4 *)(param_1 + 0x78));
  cVar2 = PixelFormatData__MapTextureFormatToGL
                    (*(undefined4 *)(param_1 + 0x6c),*(uint *)(param_1 + 0x74) & 1,param_1 + 0xa4,
                     param_1 + 0xa8,param_1 + 0xac,param_1 + 0xb0,param_1 + 0xb1);
  if (cVar2 == '\0') {
    FUN_0400a810("GetOpenGLInfo( mDesc.Format, mDesc.Usage & 0x01, mGLType, mGLFormat, mGLInternalFormat, mCompressed, mInSRGBFormat ) == true"
                 ,
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0x11b,"void Direct3DSurface9Imp::InitializeCommonVariables()");
  }
  iVar3 = D3D9_FormatToPixelSize(*(undefined4 *)(param_1 + 0x6c));
  *(int *)(param_1 + 0xb4) = iVar3;
  if (*(char *)(param_1 + 0xb0) == '\0') {
    uVar4 = *(uint *)(param_1 + 0x84);
  }
  else {
    uVar4 = *(int *)(param_1 + 0x84) + 3U & 0xfffffffc;
  }
  *(uint *)(param_1 + 0xb8) = uVar4 * iVar3;
  iVar3 = FUN_0406dec0(iVar3,*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x88),
                       *(char *)(param_1 + 0xb0));
  iVar1 = DAT_0446cd20;
  *(int *)(param_1 + 0xbc) = iVar3;
  if (iVar1 < iVar3) {
    DAT_0446cd20 = iVar3;
    FUN_0402cd10(0x14,"Max D3D9 surface size is now %d",iVar3);
    iVar3 = *(int *)(param_1 + 0xbc);
  }
  DAT_0446cd28 = DAT_0446cd28 + iVar3;
  DAT_0446cd24 = DAT_0446cd24 + 1;
  return;
}

// --- Direct3DSurface9Imp::InitializeRenderbuffer @0x040ad9a0 ---
/* source: direct3dsurface9imp */

void Direct3DSurface9Imp__InitializeRenderbuffer
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
               undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  *(uint *)(param_1 + 0x6c) = param_5;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x7c) = param_6;
  *(undefined4 *)(param_1 + 0x84) = param_3;
  *(undefined4 *)(param_1 + 0x80) = param_7;
  *(undefined4 *)(param_1 + 0x8c) = 3;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x88) = param_4;
  *(undefined4 *)(param_1 + 0x98) = param_8;
  if (param_5 < 0x51) {
    if ((param_5 < 0x4f) && (param_5 != 0x49)) {
      if (param_5 < 0x4a) {
        param_5 = param_5 - 0x46;
joined_r0x040adaf6:
        if (1 < param_5) {
LAB_040adafc:
          *(undefined4 *)(param_1 + 0x74) = 1;
          goto LAB_040ada20;
        }
      }
      else if ((param_5 != 0x4b) && (param_5 != 0x4d)) goto LAB_040adafc;
    }
  }
  else if (param_5 != 0x34324644) {
    if (param_5 < 0x34324645) {
      param_5 = param_5 - 0x52;
      goto joined_r0x040adaf6;
    }
    if ((param_5 != 0x36314644) && (param_5 != 0x5a544e49)) goto LAB_040adafc;
  }
  *(undefined4 *)(param_1 + 0x74) = 2;
LAB_040ada20:
  Direct3DSurface9Imp__InitializeCommonVariables(param_1);
  iVar1 = Direct3DSurface9Imp_ClampRenderbufferSamples
                    (*(int *)(param_1 + 0x1c) + 0x40,param_6,param_7);
  *(int *)(param_1 + 0x9c) = iVar1;
  if (iVar1 < 1) {
    FUN_0400a810("mSamplesPerPixel > 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0x186,
                 "void Direct3DSurface9Imp::InitializeRenderbuffer(IDirect3DDevice9*, UINT, UINT, D3DFORMAT, D3DMULTISAMPLE_TYPE, DWORD, WINBOOL)"
                );
  }
  if (*(int *)(param_1 + 0x6c) != 0x4c4c554e) {
    D3D9CommandQueue__GetNextCommandPointer(*(int *)(param_1 + 0x1c) + 0xec40,param_1,0x3e,0);
    D3D9CommandQueue__CommandSubmitted();
    return;
  }
  return;
}

// --- Direct3DSurface9Imp::LockRect @0x040ad220 ---
/* source: direct3dsurface9imp */

undefined4 Direct3DSurface9Imp__LockRect(int param_1,int *param_2,int *param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (param_2 == (int *)0x0) {
    return 0x8876086c;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_040803c0(*(int *)(param_1 + 0x1c) + 0x40);
  }
  if (*(int *)(param_1 + 0x6c) == 0x4c4c554e) {
    FUN_0400a810("mDesc.Format != D3DFMT_NULL",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0x22a,
                 "virtual HRESULT Direct3DSurface9Imp::LockRect(D3DLOCKED_RECT*, const RECT*, DWORD)"
                );
  }
  if (1 < *(int *)(param_1 + 0x9c)) {
    iVar4 = *(int *)(param_1 + 0xc);
    if ((iVar4 != 0) &&
       ((iVar4 == *(int *)(*(int *)(param_1 + 0x1c) + 0x533c) ||
        (iVar4 == *(int *)(*(int *)(param_1 + 0x1c) + 0x5340))))) {
      uVar2 = 0x8876086c;
      goto LAB_040ad295;
    }
  }
  uVar2 = 0x8876086c;
  if (*(char *)(param_1 + 0x38) == '\0') {
    if ((*(int *)(param_1 + 0x94) == 0) && (DAT_044a384c == '\0')) {
                    /* try { // try from 040ad2e2 to 040ad453 has its CatchHandler @ 040ad47a */
      FUN_0402cd10(10,
                   "Game is trying to lock a surface that\'s not lockable! Permitting this. This message will be logged only once per run."
                  );
      DAT_044a384c = '\x01';
    }
    if ((param_4 & 0x4000) != 0) {
      FUN_0402cd10(10,
                   "LockRect() done with DONOTWAIT flag - functionality is not implemented at the moment, and it finally could be, so do it!"
                  );
    }
    *(undefined1 *)(param_1 + 0x38) = 1;
    *(uint *)(param_1 + 0x3c) = param_4;
    if (param_3 == (int *)0x0) {
      *(undefined1 *)(param_1 + 0x40) = 1;
    }
    else {
      bVar6 = false;
      *(int *)(param_1 + 0x44) = *param_3;
      *(int *)(param_1 + 0x48) = param_3[1];
      iVar4 = param_3[2];
      *(int *)(param_1 + 0x4c) = iVar4;
      iVar1 = param_3[3];
      *(int *)(param_1 + 0x50) = iVar1;
      if (((*(int *)(param_1 + 0x44) == 0) && (*(int *)(param_1 + 0x48) == 0)) &&
         (iVar4 == *(int *)(param_1 + 0x84))) {
        bVar6 = iVar1 == *(int *)(param_1 + 0x88);
      }
      *(bool *)(param_1 + 0x40) = bVar6;
    }
    direct3dsurface9imp_040ace10();
    iVar1 = *(int *)(param_1 + 0xb8);
    iVar4 = 0;
    *param_2 = iVar1;
    if (param_3 != (int *)0x0) {
      iVar3 = param_3[1];
      iVar5 = *param_3;
      if ((iVar3 != 0) || (iVar4 = 0, iVar5 != 0)) {
        if (*(char *)(param_1 + 0xb0) == '\0') {
          uVar2 = 0;
          param_2[1] = iVar3 * iVar1 + iVar5 * *(int *)(param_1 + 0xb4) +
                       *(int *)(*(int *)(param_1 + 200) + 4);
          goto LAB_040ad295;
        }
        if (iVar3 < 0) {
          iVar3 = iVar3 + 3;
        }
        if (iVar5 < 0) {
          iVar5 = iVar5 + 3;
        }
        iVar4 = (iVar3 >> 2) * iVar1 + (iVar5 >> 2) * *(int *)(param_1 + 0xb4) * 4;
      }
    }
    uVar2 = 0;
    param_2[1] = iVar4 + *(int *)(*(int *)(param_1 + 200) + 4);
  }
LAB_040ad295:
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_04080490(*(int *)(param_1 + 0x1c) + 0x40);
  }
  return uVar2;
}

// --- Direct3DSurface9Imp::MainOpenGLObjectDataUpdated @0x040b0a40 ---
/* source: direct3dsurface9imp */

void direct3dsurface9imp_040b0a40(int param_1,undefined1 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x6c) == 0x4c4c554e) {
    FUN_0400a810("mDesc.Format != D3DFMT_NULL",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0x5e6,"void Direct3DSurface9Imp::MainOpenGLObjectDataUpdated(bool, const RECT*)");
    iVar1 = *(int *)(param_1 + 0x8c);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x8c);
  }
  if (iVar1 == 1) {
    FUN_0400a810("mSurfaceType != EST_PlainSurface",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0x5e7,"void Direct3DSurface9Imp::MainOpenGLObjectDataUpdated(bool, const RECT*)");
  }
  if ((*(int *)(param_1 + 0x90) != 0) && (1 < *(uint *)(*(int *)(param_1 + 0x90) + 0x284))) {
    uVar2 = 1;
    do {
      uVar3 = uVar2 + 1;
      Direct3DSurface9Imp__CopyOpenGLObjectData(param_1,uVar2,param_2,param_3);
      uVar2 = uVar3;
    } while (uVar3 < *(uint *)(*(int *)(param_1 + 0x90) + 0x284));
  }
  return;
}

// --- Direct3DSurface9Imp::OpenGLSide_CreateRenderbuffer @0x040adb60 ---
/* source: direct3dsurface9imp */

undefined4 Direct3DSurface9Imp__OpenGLSide_CreateRenderbuffer(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = Direct3DDevice9Imp__CreateRenderbufferInOpenGL(*(int *)(param_1 + 0x1c) + 0x40);
  *(undefined4 *)(param_1 + 0xd0) = uVar1;
  (*DAT_0451e690)(0x8d41,uVar1);
  iVar2 = *(int *)(param_1 + 0x9c);
  if (iVar2 < 2) {
    (*DAT_0451e64c)(0x8d41,*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0x84),
                    *(undefined4 *)(param_1 + 0x88));
  }
  else if ((DAT_0451cad2 == '\0') && (DAT_0451ca65 == '\0')) {
    if (DAT_0451c9c2 == '\0') {
      FUN_0400a810("(*(const GLboolean*)&__GLEW_EXT_framebuffer_multisample)",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                   ,0x19a,"DWORD Direct3DSurface9Imp::OpenGLSide_CreateRenderbuffer(DWORD, LPVOID)")
      ;
      iVar2 = *(int *)(param_1 + 0x9c);
    }
    (*DAT_0451d810)(0x8d41,iVar2,*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0x84),
                    *(undefined4 *)(param_1 + 0x88));
  }
  else {
    (*DAT_0451e648)(0x8d41,iVar2,*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0x84),
                    *(undefined4 *)(param_1 + 0x88));
  }
  (*DAT_0451e690)(0x8d41,0);
  return 0;
}

// --- Direct3DSurface9Imp::OpenGLSide_GetSurfaceIntoPBO @0x040af280 ---
/* source: direct3dbasetexture9imp, direct3dsurface9imp */

undefined4
Direct3DSurface9Imp__OpenGLSide_GetSurfaceIntoPBO
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x90);
  if (iVar4 == 0) {
    FUN_0400a810("mTexture",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0x4f8,
                 "UINT Direct3DSurface9Imp::OpenGLSide_GetSurfaceIntoPBO(GLenum, GLenum, UINT)");
    iVar4 = *(int *)(param_1 + 0x90);
  }
  if (*(int *)(iVar4 + 0x284) < 1) {
    FUN_0400a810("(INT) mOpenGLTexturesCount > index",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.h"
                 ,0x8c,"OpenGLTexture* Direct3DBaseTexture9Imp::GetOpenGLTexture(INT)");
  }
  iVar4 = *(int *)(iVar4 + 0x244);
  if (iVar4 == 0) {
    FUN_0400a810(&PTR_DAT_042e85bd,
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0x4fb,
                 "UINT Direct3DSurface9Imp::OpenGLSide_GetSurfaceIntoPBO(GLenum, GLenum, UINT)");
  }
  uVar1 = Direct3DDevice9Imp__GetContextCache(*(int *)(param_1 + 0x1c) + 0x40);
  uVar2 = FUN_040ba100(*(int *)(param_1 + 0x1c) + 0x40);
  OpenGLContextCache____glewBindBuffer(uVar1,0x88eb,uVar2);
  if (DAT_0451ca88 == '\0') {
    (*DAT_0451ed30)(0x88eb,param_4,0,0x88e0);
  }
  else {
    (*DAT_0451e894)(0x88eb,param_4,0,0);
  }
  uVar3 = Direct3DDevice9Imp__GetContextCache(*(int *)(param_1 + 0x1c) + 0x40);
  FUN_0406d620(iVar4,uVar3);
  if (*(char *)(param_1 + 0xb0) == '\0') {
    if ((*(uint *)(param_1 + 0xb8) & 3) == 0) {
      (*DAT_0451eecc)(*(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 0xc0),param_2,
                      param_3,0);
    }
    else {
      glPixelStorei(0xd05,2 - (*(uint *)(param_1 + 0xb8) & 1));
      (*DAT_0451eecc)(*(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 0xc0),param_2,
                      param_3,0);
      glPixelStorei(0xd05,4);
    }
  }
  else {
    (*DAT_0451ee8c)(*(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 0xc0),0);
  }
  OpenGLContextCache____glewBindBuffer(uVar1,0x88eb,uVar2);
  return uVar2;
}

// --- Direct3DSurface9Imp::OpenGLSide_SyncSurface @0x040aee30 ---
/* source: direct3dbasetexture9imp, direct3dsurface9imp */

undefined4 Direct3DSurface9Imp__OpenGLSide_SyncSurface(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x8c) == 1) {
    if (*(int *)(param_1 + 0xd4) == 0) {
      if (*(char *)(param_1 + 0x68) != '\0') {
        FUN_0400a810("!RenderTargetDataTransferPending",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                     ,0x4c5,"DWORD Direct3DSurface9Imp::OpenGLSide_SyncSurface(DWORD, LPVOID)");
      }
    }
    else {
      uVar1 = Direct3DDevice9Imp__GetContextCache(*(int *)(param_1 + 0x1c) + 0x40);
      OpenGLContextCache____glewBindBuffer(uVar1,0x88eb,**(undefined4 **)(param_1 + 0xd4));
      (*DAT_0451ed0c)(0x88eb,0,*(undefined4 *)(param_1 + 0xbc),
                      *(undefined4 *)(*(int *)(param_1 + 200) + 4));
      *(undefined1 *)(param_1 + 0x68) = 0;
      Direct3DDevice9Imp__GRTD_Delete
                (*(int *)(param_1 + 0x1c) + 0x40,*(undefined4 *)(param_1 + 0xd4));
    }
  }
  else if (*(int *)(param_1 + 0xd0) == 0) {
    iVar2 = *(int *)(param_1 + 0x90);
    if (iVar2 == 0) {
      FUN_0400a810("false",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                   ,0x4ea,"DWORD Direct3DSurface9Imp::OpenGLSide_SyncSurface(DWORD, LPVOID)");
    }
    else {
      if (*(int *)(iVar2 + 0x284) < 1) {
        FUN_0400a810("(INT) mOpenGLTexturesCount > index",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.h"
                     ,0x8c,"OpenGLTexture* Direct3DBaseTexture9Imp::GetOpenGLTexture(INT)");
      }
      iVar2 = *(int *)(iVar2 + 0x244);
      if (iVar2 == 0) {
        FUN_0400a810(&PTR_DAT_042e85bd,
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                     ,0x4d2,"DWORD Direct3DSurface9Imp::OpenGLSide_SyncSurface(DWORD, LPVOID)");
      }
      uVar1 = Direct3DDevice9Imp__GetContextCache(*(int *)(param_1 + 0x1c) + 0x40);
      FUN_0406d620(iVar2,uVar1);
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 200) + 4);
      if (*(char *)(param_1 + 0xb0) == '\0') {
        if ((*(uint *)(param_1 + 0xb8) & 3) == 0) {
          (*DAT_0451eecc)(*(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 0xc0),
                          *(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xa4),uVar1);
        }
        else {
          glPixelStorei(0xd05,2 - (*(uint *)(param_1 + 0xb8) & 1));
          (*DAT_0451eecc)(*(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 0xc0),
                          *(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xa4),uVar1);
          glPixelStorei(0xd05,4);
        }
      }
      else {
        (*DAT_0451ee8c)(*(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 0xc0),uVar1);
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x6c) == 0x4c4c554e) {
      FUN_0400a810("mDesc.Format != D3DFMT_NULL",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                   ,0x401,
                   "void Direct3DSurface9Imp::TransferFromOpenGLThroughReadPixels(bool, const RECT&)"
                  );
    }
    if (*(char *)(param_1 + 0xb0) != '\0') {
      FUN_0400a810("!mCompressed",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                   ,0x402,
                   "void Direct3DSurface9Imp::TransferFromOpenGLThroughReadPixels(bool, const RECT&)"
                  );
    }
    iVar2 = Direct3DDevice9Imp__GetContextCache(*(int *)(param_1 + 0x1c) + 0x40);
    FramebufferCache__GetFramebufferHash(iVar2 + 0x1f8,*(undefined4 *)(param_1 + 0xc),0,0,0,0,0);
    if ((*(uint *)(param_1 + 0xb8) & 3) == 0) {
      glReadPixels(0,0,*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x88),
                   *(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xa4),
                   *(undefined4 *)(*(int *)(param_1 + 200) + 4));
    }
    else {
      glPixelStorei(0xd05,2 - (*(uint *)(param_1 + 0xb8) & 1));
      glReadPixels(0,0,*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x88),
                   *(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xa4),
                   *(undefined4 *)(*(int *)(param_1 + 200) + 4));
      glPixelStorei(0xd05,4);
    }
  }
  eON_SetEvent(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xed00));
  return 0;
}

// --- Direct3DSurface9Imp::OpenGLSide_TransferToOpenGLTextureInDifferentSurface @0x040b0120 ---
/* source: direct3dbasetexture9imp, direct3dsurface9imp */

undefined4
Direct3DSurface9Imp__OpenGLSide_TransferToOpenGLTextureInDifferentSurface
          (undefined **param_1,undefined4 param_2,undefined **param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *__ptr;
  undefined *puVar4;
  code *pcVar5;
  undefined **ppuVar6;
  char *pcVar7;
  undefined **ppuVar8;
  undefined ***pppuVar9;
  int iVar10;
  char *pcVar11;
  bool bVar12;
  char cVar13;
  undefined **local_7c;
  undefined **local_78;
  undefined *local_74;
  undefined **local_70;
  undefined **local_6c;
  int local_68;
  undefined *local_64;
  undefined *local_60;
  char *local_5c;
  undefined **local_40;
  char *local_3c;
  undefined *local_38;
  undefined **local_34;
  undefined **local_30;
  undefined *local_2c;
  int local_28;
  undefined *local_24;
  undefined **local_20;
  
  pppuVar9 = &local_7c;
  local_24 = (undefined *)0x0;
  uVar3 = (uint)local_20 >> 8;
  local_20 = (undefined **)((uint)local_20 & 0xffffff00);
  local_30 = param_3 + 6;
  pcVar11 = param_3[1];
  if (((param_3[6] == (undefined *)0x0) && (param_3[7] == (undefined *)0x0)) &&
     (param_3[8] == *(undefined **)(pcVar11 + 0x88))) {
    local_20 = (undefined **)CONCAT31((int3)uVar3,param_3[9] == *(undefined **)(pcVar11 + 0x8c));
    local_24 = (undefined *)(uint)(param_3[9] == *(undefined **)(pcVar11 + 0x8c));
  }
  local_7c = (undefined **)(param_1[7] + 0x40);
  pcVar7 = (char *)Direct3DDevice9Imp__GetContextCache();
  ppuVar8 = *(undefined ***)(pcVar11 + 0x94);
  if (ppuVar8 == (undefined **)0x0) {
    local_70 = (undefined **)0x42f8c00;
    local_74 = (undefined *)0x312;
    local_78 = (undefined **)0x42f80e8;
    local_7c = (undefined **)0x42f8650;
    local_3c = pcVar7;
    FUN_0400a810();
    ppuVar8 = *(undefined ***)(pcVar11 + 0x94);
    pcVar7 = local_3c;
  }
  if ((int)ppuVar8[0xa1] < 1) {
    local_70 = (undefined **)0x42f8c60;
    local_74 = (undefined *)0x8c;
    local_78 = (undefined **)0x42f1724;
    local_7c = (undefined **)0x42f1784;
    local_40 = ppuVar8;
    local_3c = pcVar7;
    FUN_0400a810();
    ppuVar8 = local_40;
    pcVar7 = local_3c;
  }
  ppuVar8 = (undefined **)ppuVar8[0x91];
  local_7c = ppuVar8;
  local_78 = (undefined **)pcVar7;
  if (ppuVar8 == (undefined **)0x0) {
    local_70 = (undefined **)0x42f8c00;
    local_74 = (undefined *)0x314;
    local_78 = (undefined **)0x42f80e8;
    local_7c = &PTR_DAT_042e85bd;
    local_40 = ppuVar8;
    local_3c = pcVar7;
    FUN_0400a810();
    local_7c = local_40;
    local_78 = (undefined **)local_3c;
  }
  FUN_0406d620();
  cVar13 = pcVar11[0xb4];
  if (*(char *)(param_1 + 0x2c) != cVar13) {
    local_70 = (undefined **)0x42f8c00;
    local_74 = (undefined *)0x318;
    local_78 = (undefined **)0x42f80e8;
    local_7c = (undefined **)0x42f841c;
    FUN_0400a810();
    cVar13 = pcVar11[0xb4];
  }
  if (cVar13 == '\0') {
    puVar4 = param_1[0x2e];
    local_5c = (char *)((int)param_3[3] * (int)puVar4 + (int)param_3[2] * (int)param_1[0x2d] +
                       *(int *)(*param_3 + 4));
    bVar12 = ((uint)puVar4 & 3) != 0;
    local_28 = CONCAT31(local_28._1_3_,bVar12);
    if (bVar12) {
      local_7c = (undefined **)0xcf5;
      local_78 = (undefined **)(2 - ((uint)puVar4 & 1));
      local_3c = local_5c;
      glPixelStorei();
      local_5c = local_3c;
    }
    local_2c = param_3[6];
    local_6c = (undefined **)(param_3[8] + -(int)local_2c);
    local_78 = (undefined **)param_1[0x21];
    local_20 = local_78;
    if (local_6c == local_78) {
      local_60 = param_1[0x29];
      local_64 = param_1[0x2a];
      local_68 = (int)param_3[9] - (int)param_3[7];
      local_70 = (undefined **)param_3[7];
      local_7c = *(undefined ***)(pcVar11 + 200);
      local_78 = (undefined **)*(char **)(pcVar11 + 0xc4);
      local_74 = local_2c;
      glTexSubImage2D();
    }
    else {
      local_7c = (undefined **)0xcf2;
      local_40 = local_6c;
      local_3c = local_5c;
      glPixelStorei();
      local_70 = (undefined **)param_3[7];
      local_5c = local_3c;
      local_60 = param_1[0x29];
      local_64 = param_1[0x2a];
      local_6c = local_40;
      local_68 = (int)param_3[9] - (int)local_70;
      local_74 = param_3[6];
      local_78 = *(undefined ***)(pcVar11 + 0xc4);
      local_7c = *(undefined ***)(pcVar11 + 200);
      glTexSubImage2D();
      local_78 = (undefined **)0x0;
      local_7c = (undefined **)0xcf2;
      glPixelStorei();
    }
    if ((char)local_28 != '\0') {
      local_78 = (undefined **)0x4;
      local_7c = (undefined **)0xcf5;
      glPixelStorei();
    }
  }
  else {
    cVar13 = false;
    if (((param_3[2] == (undefined *)0x0) && (param_3[3] == (undefined *)0x0)) &&
       (param_3[4] == param_1[0x21])) {
      cVar13 = param_3[5] == param_1[0x22];
    }
    if (*(undefined **)(pcVar11 + 0xac) != param_1[0x2a]) {
      local_40 = (undefined **)CONCAT31(local_40._1_3_,cVar13);
      local_70 = (undefined **)0x42f8c00;
      local_74 = (undefined *)0x31f;
      local_78 = (undefined **)0x42f80e8;
      local_7c = (undefined **)0x42f853c;
      FUN_0400a810();
      cVar13 = (char)local_40;
    }
    if ((cVar13 == '\0') || ((char)local_20 == '\0')) {
      if (((uint)param_3[2] & 3) != 0) {
        local_70 = (undefined **)0x42f8c00;
        local_74 = (undefined *)0x323;
        local_78 = (undefined **)0x42f80e8;
        local_7c = (undefined **)0x42f8665;
        FUN_0400a810();
      }
      if (((uint)param_3[4] & 3) != 0) {
        local_70 = (undefined **)0x42f8c00;
        local_74 = (undefined *)0x324;
        local_78 = (undefined **)0x42f80e8;
        local_7c = (undefined **)0x42f867e;
        FUN_0400a810();
      }
      if (((uint)param_3[3] & 3) != 0) {
        local_70 = (undefined **)0x42f8c00;
        local_74 = (undefined *)0x325;
        local_78 = (undefined **)0x42f80e8;
        local_7c = (undefined **)0x42f8698;
        FUN_0400a810();
      }
      if (((uint)param_3[5] & 3) != 0) {
        local_70 = (undefined **)0x42f8c00;
        local_74 = (undefined *)0x326;
        local_78 = (undefined **)0x42f80e8;
        local_7c = (undefined **)0x42f86b0;
        FUN_0400a810();
      }
      if (((uint)param_3[6] & 3) != 0) {
        local_70 = (undefined **)0x42f8c00;
        local_74 = (undefined *)0x327;
        local_78 = (undefined **)0x42f80e8;
        local_7c = (undefined **)0x42f86cb;
        FUN_0400a810();
      }
      if (((uint)param_3[8] & 3) != 0) {
        local_70 = (undefined **)0x42f8c00;
        local_74 = (undefined *)0x328;
        local_78 = (undefined **)0x42f80e8;
        local_7c = (undefined **)0x42f86e2;
        FUN_0400a810();
      }
      if (((uint)param_3[7] & 3) != 0) {
        local_70 = (undefined **)0x42f8c00;
        local_74 = (undefined *)0x329;
        local_78 = (undefined **)0x42f80e8;
        local_7c = (undefined **)0x42f86fa;
        FUN_0400a810();
      }
      if (((uint)param_3[9] & 3) != 0) {
        local_70 = (undefined **)0x42f8c00;
        local_74 = (undefined *)0x32a;
        local_78 = (undefined **)0x42f80e8;
        local_7c = (undefined **)0x42f8710;
        FUN_0400a810();
      }
      local_38 = param_1[0x2e];
      local_34 = *(undefined ***)(*param_3 + 4);
      local_20 = (undefined **)((int)param_1[0x2d] * 4);
      local_2c = (undefined *)(((int)param_3[4] - (int)param_3[2] >> 2) * (int)local_20);
      local_28 = (int)param_3[5] - (int)param_3[3] >> 2;
      if (0 < local_28) {
        pcVar7 = (char *)(((int)param_3[3] >> 2) * (int)local_38 +
                          (int)local_20 * ((int)param_3[2] >> 2) + (int)local_34);
        iVar10 = 0;
        local_40 = param_1;
        local_3c = pcVar11;
        local_34 = (undefined **)(pcVar11 + 4);
        do {
          local_60 = local_2c;
          local_64 = local_40[0x2a];
          local_68 = 4;
          local_6c = (undefined **)(param_3[8] + -(int)param_3[6]);
          iVar2 = iVar10 * 4;
          iVar10 = iVar10 + 1;
          local_70 = (undefined **)(param_3[7] + iVar2);
          local_74 = param_3[6];
          local_78 = *(undefined ***)(local_3c + 0xc4);
          local_7c = *(undefined ***)(local_3c + 200);
          local_5c = pcVar7;
          (*DAT_0451ee94)();
          pcVar7 = pcVar7 + (int)local_40[0x2e];
        } while (iVar10 != local_28);
        iVar10 = *(int *)(local_3c + 0x70);
        pcVar11 = local_3c;
        ppuVar8 = local_34;
        goto joined_r0x040b04fe;
      }
    }
    else {
      local_60 = *(undefined **)(pcVar11 + 0xc0);
      if (local_60 != param_1[0x2f]) {
        local_70 = (undefined **)0x42f8c00;
        local_74 = (undefined *)0x344;
        local_78 = (undefined **)0x42f80e8;
        local_7c = (undefined **)0x42f8560;
        FUN_0400a810();
        local_60 = *(undefined **)(pcVar11 + 0xc0);
      }
      local_5c = *(char **)(*param_3 + 4);
      local_64 = *(undefined **)(pcVar11 + 0xac);
      local_68 = *(int *)(pcVar11 + 0x8c);
      local_6c = *(undefined ***)(pcVar11 + 0x88);
      local_70 = (undefined **)0x0;
      local_74 = (undefined *)0x0;
      local_78 = *(undefined ***)(pcVar11 + 0xc4);
      local_7c = *(undefined ***)(pcVar11 + 200);
      (*DAT_0451ee94)();
    }
  }
  iVar10 = *(int *)(pcVar11 + 0x70);
  ppuVar8 = (undefined **)(pcVar11 + 4);
joined_r0x040b04fe:
  if (iVar10 == 0x4c4c554e) {
    local_70 = (undefined **)0x42f8ca0;
    local_74 = (undefined *)0x5e6;
    local_78 = (undefined **)0x42f80e8;
    local_7c = (undefined **)0x42f8592;
    FUN_0400a810();
    iVar10 = *(int *)(pcVar11 + 0x90);
  }
  else {
    iVar10 = *(int *)(pcVar11 + 0x90);
  }
  if (iVar10 == 1) {
    local_70 = (undefined **)0x42f8ca0;
    local_74 = (undefined *)0x5e7;
    local_78 = (undefined **)0x42f80e8;
    local_7c = (undefined **)0x42f84ec;
    FUN_0400a810();
  }
  ppuVar6 = local_30;
  if ((*(int *)(pcVar11 + 0x94) != 0) && (1 < *(uint *)(*(int *)(pcVar11 + 0x94) + 0x284))) {
    local_20 = param_3;
    pcVar11 = (char *)0x1;
    do {
      pcVar7 = pcVar11 + 1;
      local_70 = ppuVar6;
      local_74 = local_24;
      local_7c = ppuVar8;
      local_78 = (undefined **)pcVar11;
      Direct3DSurface9Imp__CopyOpenGLObjectData();
      param_3 = local_20;
      pcVar11 = pcVar7;
    } while (pcVar7 < *(char **)(ppuVar8[0x24] + 0x284));
  }
  __ptr = (uint *)*param_3;
  LOCK();
  puVar1 = __ptr + 2;
  uVar3 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  if (uVar3 == 1) {
    puVar4 = (undefined *)*__ptr;
    local_7c = (undefined **)eON_GetProcessHeap();
    local_78 = (undefined **)0x0;
    local_74 = puVar4;
    eON_HeapFree();
    pppuVar9 = (undefined ***)&stack0xffffff78;
    free(__ptr);
  }
  iVar10 = *(int *)param_3[1];
  *pppuVar9 = (undefined **)param_3[1];
  pcVar5 = *(code **)(iVar10 + 8);
  pppuVar9[-1] = (undefined **)0x40b059d;
  (*pcVar5)();
  puVar4 = *param_1;
  pppuVar9[-1] = param_1;
  pcVar5 = *(code **)(puVar4 + 0x10);
  pppuVar9[-2] = (undefined **)0x40b05ab;
  (*pcVar5)();
  return 0x28;
}

// --- Direct3DSurface9Imp::Release @0x040ac2d0 ---
/* source: direct3dsurface9imp */

uint direct3dsurface9imp_040ac2d0(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  LOCK();
  piVar2 = (int *)(param_1 + 8);
  iVar4 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  uVar1 = iVar4 - 1;
  if (*(int *)(param_1 + 0x90) == 0) {
    if (uVar1 == 0) {
      if (*(int *)(param_1 + 0x1c) != 0) {
        direct3ddevice9imp_0409a7c0
                  (*(int *)(param_1 + 0x1c) + 0x40,0,*(undefined4 *)(param_1 + 0xc));
        return 0;
      }
      piVar2 = *(int **)(param_1 + 0xc);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x48))(piVar2);
      }
    }
  }
  else {
    LOCK();
    piVar2 = (int *)(*(int *)(param_1 + 0x90) + 0x28c);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (uVar1 < 2) {
      if (*(int *)(*(int *)(param_1 + 0x90) + 0x3c) != 0x1ceb00da) {
        FUN_0400a810("mTexture->GetImplementation().mDeleted == 0x1CEB00DA",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                     ,0x608,"virtual ULONG Direct3DSurface9Imp::Release()");
      }
      if (uVar1 != 1) {
        FUN_0400a810("ret == 1",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                     ,0x60a,"virtual ULONG Direct3DSurface9Imp::Release()");
      }
      uVar1 = 0;
      if (iVar4 == 1) {
        iVar4 = *(int *)(param_1 + 0x1c);
        piVar2 = *(int **)(param_1 + 0x90);
        if (iVar4 != 0) {
          uVar3 = 1;
          if ((piVar2[0x8a] != 1) && (uVar3 = 2, piVar2[0x8a] != 2)) {
            FUN_0400a810("false",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                         ,0x616,"virtual ULONG Direct3DSurface9Imp::Release()");
            piVar2 = *(int **)(param_1 + 0x90);
            uVar3 = 1;
            iVar4 = *(int *)(param_1 + 0x1c);
          }
          piVar2[0xf] = 0xd15ea5e;
          direct3ddevice9imp_0409a7c0(iVar4 + 0x40,uVar3,piVar2);
          return 0;
        }
        uVar1 = 0;
        if ((piVar2[0x8a] == 1) || (piVar2[0x8a] == 2)) {
          (**(code **)(*piVar2 + 0x5c))(piVar2);
        }
        else {
          FUN_0400a810("false",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                       ,0x623,"virtual ULONG Direct3DSurface9Imp::Release()");
        }
      }
    }
    else {
      uVar1 = uVar1 - *(int *)(param_1 + 0xa0);
    }
  }
  return uVar1;
}

// --- Direct3DSurface9Imp::TransferBetweenOpenGLTexturesInDifferentSurfaces @0x040afd70 ---
/* source: direct3dbasetexture9imp, direct3dsurface9imp */

void Direct3DSurface9Imp__TransferBetweenOpenGLTexturesInDifferentSurfaces
               (int param_1,int param_2,int *param_3,int *param_4)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  if (*(int *)(param_1 + 0x6c) == 0x4c4c554e) {
    FUN_0400a810("mDesc.Format != D3DFMT_NULL",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0x385,
                 "void Direct3DSurface9Imp::TransferBetweenOpenGLTexturesInDifferentSurfaces(Direct3DSurface9Imp&, const RECT&, const RECT&)"
                );
  }
  bVar7 = false;
  if (((*param_4 == 0) && (param_4[1] == 0)) && (param_4[2] == *(int *)(param_1 + 0x84))) {
    bVar7 = param_4[3] == *(int *)(param_1 + 0x88);
  }
  iVar3 = *(int *)(param_1 + 0x90);
  if (iVar3 == 0) {
    FUN_0400a810("mTexture",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0x38a,
                 "void Direct3DSurface9Imp::TransferBetweenOpenGLTexturesInDifferentSurfaces(Direct3DSurface9Imp&, const RECT&, const RECT&)"
                );
    iVar3 = *(int *)(param_1 + 0x90);
  }
  if (*(int *)(iVar3 + 0x284) < 1) {
    FUN_0400a810("(INT) mOpenGLTexturesCount > index",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.h"
                 ,0x8c,"OpenGLTexture* Direct3DBaseTexture9Imp::GetOpenGLTexture(INT)");
  }
  iVar3 = *(int *)(iVar3 + 0x244);
  if (iVar3 == 0) {
    FUN_0400a810("dstTex",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0x38c,
                 "void Direct3DSurface9Imp::TransferBetweenOpenGLTexturesInDifferentSurfaces(Direct3DSurface9Imp&, const RECT&, const RECT&)"
                );
  }
  cVar2 = *(char *)(param_1 + 0xb0);
  if (*(char *)(param_2 + 0xb0) != cVar2) {
    FUN_0400a810("sourceSurface.mCompressed == mCompressed",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0x38e,
                 "void Direct3DSurface9Imp::TransferBetweenOpenGLTexturesInDifferentSurfaces(Direct3DSurface9Imp&, const RECT&, const RECT&)"
                );
    cVar2 = *(char *)(param_1 + 0xb0);
  }
  if (cVar2 == '\0') {
    iVar4 = Direct3DDevice9Imp__GetContextCache(*(int *)(param_1 + 0x1c) + 0x40);
    FramebufferCache__GetFramebufferHash(iVar4 + 0x1f8,*(undefined4 *)(param_2 + 0xc),0,0,0,0,0);
    FUN_0406d620(iVar3,iVar4);
    iVar3 = *(int *)(param_1 + 0x1c);
    iVar4 = *(int *)(iVar3 + 0xeb88);
    if (((*(char *)(iVar4 + 0x424) != '\x0f') || (*(char *)(iVar4 + 0x425) != '\x0f')) ||
       ((*(char *)(iVar4 + 0x426) != '\x0f' || (*(char *)(iVar4 + 0x427) != '\x0f')))) {
      glColorMask(1,1,1,1);
      *(undefined1 *)(iVar4 + 0x424) = 0xf;
      *(undefined1 *)(iVar4 + 0x425) = 0xf;
      *(undefined1 *)(iVar4 + 0x426) = 0xf;
      *(undefined1 *)(iVar4 + 0x427) = 0xf;
      puVar1 = (uint *)(iVar3 + 0xea44);
      *puVar1 = *puVar1 | 4;
    }
    glCopyTexSubImage2D(*(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 0xc0),*param_4,
                        param_4[1],*param_3,param_3[1],param_3[2] - *param_3,param_3[3] - param_3[1]
                       );
    iVar3 = *(int *)(param_1 + 0x6c);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x6c);
  }
  if (iVar3 == 0x4c4c554e) {
    FUN_0400a810("mDesc.Format != D3DFMT_NULL",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0x5e6,"void Direct3DSurface9Imp::MainOpenGLObjectDataUpdated(bool, const RECT*)");
    iVar3 = *(int *)(param_1 + 0x8c);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x8c);
  }
  if (iVar3 == 1) {
    FUN_0400a810("mSurfaceType != EST_PlainSurface",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0x5e7,"void Direct3DSurface9Imp::MainOpenGLObjectDataUpdated(bool, const RECT*)");
  }
  if ((*(int *)(param_1 + 0x90) != 0) && (1 < *(uint *)(*(int *)(param_1 + 0x90) + 0x284))) {
    uVar5 = 1;
    do {
      uVar6 = uVar5 + 1;
      Direct3DSurface9Imp__CopyOpenGLObjectData(param_1,uVar5,bVar7,param_4);
      uVar5 = uVar6;
    } while (uVar6 < *(uint *)(*(int *)(param_1 + 0x90) + 0x284));
  }
  return;
}

// --- Direct3DSurface9Imp::TransferDataFromPBO @0x040ae840 ---
/* source: direct3dsurface9imp */

void Direct3DSurface9Imp__TransferDataFromPBO(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xd4) == 0) {
    FUN_0400a810("GRTD",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0x426,"void Direct3DSurface9Imp::TransferDataFromPBO()");
  }
  uVar1 = Direct3DDevice9Imp__GetContextCache(*(int *)(param_1 + 0x1c) + 0x40);
  OpenGLContextCache____glewBindBuffer(uVar1,0x88eb,**(undefined4 **)(param_1 + 0xd4));
  (*DAT_0451ed0c)(0x88eb,0,*(undefined4 *)(param_1 + 0xbc),
                  *(undefined4 *)(*(int *)(param_1 + 200) + 4));
  *(undefined1 *)(param_1 + 0x68) = 0;
  Direct3DDevice9Imp__GRTD_Delete(*(int *)(param_1 + 0x1c) + 0x40,*(undefined4 *)(param_1 + 0xd4));
  return;
}

// --- Direct3DSurface9Imp::TransferFromOpenGLThroughReadPixels @0x040ae5d0 ---
/* source: direct3dsurface9imp */

void direct3dsurface9imp_040ae5d0(int param_1,char param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (*(int *)(param_1 + 0x6c) == 0x4c4c554e) {
    FUN_0400a810("mDesc.Format != D3DFMT_NULL",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0x401,
                 "void Direct3DSurface9Imp::TransferFromOpenGLThroughReadPixels(bool, const RECT&)")
    ;
  }
  if (*(char *)(param_1 + 0xb0) != '\0') {
    FUN_0400a810("!mCompressed",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0x402,
                 "void Direct3DSurface9Imp::TransferFromOpenGLThroughReadPixels(bool, const RECT&)")
    ;
  }
  iVar4 = Direct3DDevice9Imp__GetContextCache(*(int *)(param_1 + 0x1c) + 0x40);
  FramebufferCache__GetFramebufferHash(iVar4 + 0x1f8,*(undefined4 *)(param_1 + 0xc),0,0,0,0,0);
  bVar6 = (*(uint *)(param_1 + 0xb8) & 3) != 0;
  if (bVar6) {
    glPixelStorei(0xd05,2 - (*(uint *)(param_1 + 0xb8) & 1));
  }
  iVar4 = *(int *)(*(int *)(param_1 + 200) + 4);
  if (param_2 == '\0') {
    iVar1 = *param_3;
    iVar2 = param_3[1];
    iVar5 = param_3[2] - iVar1;
    iVar3 = param_3[3];
    if (iVar5 == *(int *)(param_1 + 0x84)) {
      glReadPixels(iVar1,iVar2,iVar5,iVar3 - iVar2,*(undefined4 *)(param_1 + 0xa8),
                   *(undefined4 *)(param_1 + 0xa4),
                   *(int *)(param_1 + 0xb8) * iVar2 + iVar1 * *(int *)(param_1 + 0xb4) + iVar4);
    }
    else {
      glPixelStorei(0xd02,*(int *)(param_1 + 0x84));
      glReadPixels(*param_3,param_3[1],iVar5,iVar3 - iVar2,*(undefined4 *)(param_1 + 0xa8),
                   *(undefined4 *)(param_1 + 0xa4),
                   param_3[1] * *(int *)(param_1 + 0xb8) + *(int *)(param_1 + 0xb4) * *param_3 +
                   iVar4);
      glPixelStorei(0xd02,0);
    }
  }
  else {
    glReadPixels(0,0,*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x88),
                 *(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xa4),iVar4);
  }
  if (!bVar6) {
    return;
  }
  glPixelStorei();
  return;
}

// --- Direct3DSurface9Imp::TransferToDifferentSurface @0x040ae0b0 ---
/* source: direct3dsurface9imp */

void Direct3DSurface9Imp__TransferToDifferentSurface
               (int param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_38;
  int local_24;
  int local_20;
  
  if (*(int *)(param_1 + 0x6c) == 0x4c4c554e) {
    FUN_0400a810("mDesc.Format != D3DFMT_NULL",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0x3a8,
                 "void Direct3DSurface9Imp::TransferToDifferentSurface(Direct3DSurface9Imp&, const RECT&, const RECT&)"
                );
  }
  FUN_0402cd10(10,
               "D3D9 performance warning: using TransferToDifferentSurface() is very slow, rework it!"
              );
  direct3dsurface9imp_040ace10();
  cVar4 = (char)param_2[0x2c];
  if (*(char *)(param_1 + 0xb0) != cVar4) {
    FUN_0400a810("mCompressed == destSurface.mCompressed",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0x3ae,
                 "void Direct3DSurface9Imp::TransferToDifferentSurface(Direct3DSurface9Imp&, const RECT&, const RECT&)"
                );
    cVar4 = (char)param_2[0x2c];
  }
  if (cVar4 == '\0') {
    iVar5 = (**(code **)(*param_2 + 0x40))(param_2,&local_24,param_4,0);
    if (iVar5 != 0) {
      FUN_0400a810("destSurface.LockRect( &lockedRect, &destRect, 0 ) == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                   ,0x3b9,
                   "void Direct3DSurface9Imp::TransferToDifferentSurface(Direct3DSurface9Imp&, const RECT&, const RECT&)"
                  );
    }
    iVar5 = param_3[2];
    iVar1 = *param_3;
    iVar2 = param_3[1];
    iVar3 = param_3[3];
    if (*(int *)(param_1 + 200) == 0) {
      local_38 = FUN_0407f700(*(undefined4 *)(param_1 + 0xbc));
    }
    else {
      local_38 = *(int *)(*(int *)(param_1 + 200) + 4);
    }
    if (0 < iVar3 - iVar2) {
      iVar6 = 0;
      do {
        iVar7 = iVar6 + 1;
        memcpy((void *)(local_24 * iVar6 + local_20),
               (void *)(*(int *)(param_1 + 0xb4) * *param_3 +
                        (iVar6 + param_3[1]) * *(int *)(param_1 + 0xb8) + local_38),
               (iVar5 - iVar1) * *(int *)(param_1 + 0xb4));
        iVar6 = iVar7;
      } while (iVar7 != iVar3 - iVar2);
    }
    (**(code **)(*param_2 + 0x44))(param_2);
    return;
  }
  return;
}

// --- Direct3DSurface9Imp::TransferToOpenGLTextureInDifferentSurface @0x040adec0 ---
/* source: direct3dsurface9imp */

void Direct3DSurface9Imp__TransferToOpenGLTextureInDifferentSurface
               (int *param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  if (param_1[0x1b] == 0x4c4c554e) {
    FUN_0400a810("mDesc.Format != D3DFMT_NULL",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0x2e2,
                 "void Direct3DSurface9Imp::TransferToOpenGLTextureInDifferentSurface(Direct3DSurface9Imp&, const RECT&, const RECT&)"
                );
  }
  direct3dsurface9imp_040ace10();
  if (param_1[0x32] == 0) {
    FUN_0400a810("mData",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0x2e5,
                 "void Direct3DSurface9Imp::TransferToOpenGLTextureInDifferentSurface(Direct3DSurface9Imp&, const RECT&, const RECT&)"
                );
  }
  piVar5 = (int *)D3D9CommandQueue__GetNextCommandPointer(param_1[7] + 0xec40,param_1,0x3c,0x28);
  iVar1 = param_1[0x32];
  iVar2 = *(int *)(iVar1 + 8);
  *piVar5 = iVar1;
  if (iVar2 < 1) {
    FUN_0400a810("surfaceData->RefCount > 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0xb5,"void RetainSurfaceData(SurfaceData*)");
  }
  LOCK();
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  UNLOCK();
  piVar3 = *(int **)(param_2 + 0xc);
  iVar1 = *piVar3;
  piVar5[1] = (int)piVar3;
  (**(code **)(iVar1 + 4))(piVar3);
  piVar5[2] = *param_3;
  piVar5[3] = param_3[1];
  piVar5[4] = param_3[2];
  piVar5[5] = param_3[3];
  piVar5[6] = *param_4;
  piVar5[7] = param_4[1];
  piVar5[8] = param_4[2];
  piVar5[9] = param_4[3];
  (**(code **)(*param_1 + 0xc))(param_1);
  D3D9CommandQueue__CommandSubmitted(param_1[7] + 0xec40);
  iVar1 = *(int *)(param_1[7] + 0xec80);
  iVar2 = *(int *)(param_1[7] + 0xec84);
  if (DAT_044a3840 == (int *)0x0) {
    piVar5 = malloc(0x1c);
  }
  else {
    piVar5 = DAT_044a3840;
    DAT_044a3840 = (int *)DAT_044a3840[6];
  }
  iVar4 = *param_3;
  piVar5[4] = iVar1;
  piVar5[5] = iVar2;
  *piVar5 = iVar4;
  piVar5[1] = param_3[1];
  piVar5[2] = param_3[2];
  piVar5[3] = param_3[3];
  piVar5[6] = param_1[0x15];
  param_1[0x15] = (int)piVar5;
  *(int *)(param_2 + 0x58) = iVar1;
  *(int *)(param_2 + 0x5c) = iVar2;
  return;
}

// --- Direct3DSurface9Imp::TransferToOpenGLThroughDrawPixels @0x040ae280 ---
/* source: direct3dsurface9imp */

void Direct3DSurface9Imp__TransferToOpenGLThroughDrawPixels
               (int param_1,int param_2,char param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  if (*(int *)(param_1 + 0x6c) == 0x4c4c554e) {
    FUN_0400a810("mDesc.Format != D3DFMT_NULL",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0x3cf,
                 "void Direct3DSurface9Imp::TransferToOpenGLThroughDrawPixels(LPBYTE, bool, const RECT*)"
                );
  }
  cVar5 = FUN_04021ee0();
  if (cVar5 != '\0') {
    FUN_0400a810("!UsingOpenGLCore()",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0x3d0,
                 "void Direct3DSurface9Imp::TransferToOpenGLThroughDrawPixels(LPBYTE, bool, const RECT*)"
                );
  }
  uVar1 = *(uint *)(param_1 + 0xac);
  if (uVar1 == 0x84f9) {
    FUN_0400a810("false",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0x1ae,"bool Direct3DSurface9Imp::IsDepth() const");
  }
  else {
    if (uVar1 < 0x84fa) {
      if (uVar1 - 0x81a5 < 3) {
        iVar6 = *(int *)(param_1 + 0x6c);
        goto joined_r0x040ae49a;
      }
    }
    else if (uVar1 == 0x88f0) goto LAB_040ae494;
    if (uVar1 == 0x84f9) {
      FUN_0400a810("false",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                   ,0x1ba,"bool Direct3DSurface9Imp::IsStencil() const");
    }
    else if (uVar1 != 0x88f0) {
      if (*(char *)(param_1 + 0xb0) != '\0') {
        FUN_0400a810("!mCompressed",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                     ,0x3d9,
                     "void Direct3DSurface9Imp::TransferToOpenGLThroughDrawPixels(LPBYTE, bool, const RECT*)"
                    );
      }
      iVar6 = Direct3DDevice9Imp__GetContextCache(*(int *)(param_1 + 0x1c) + 0x40);
      FramebufferCache__GetFramebufferHash(iVar6 + 0x1f8,*(undefined4 *)(param_1 + 0xc),0,0,0,0,0);
      bVar10 = (*(uint *)(param_1 + 0xb8) & 3) != 0;
      if (bVar10) {
        glPixelStorei(0xcf5,2 - (*(uint *)(param_1 + 0xb8) & 1));
      }
      if (param_3 == '\0') {
        iVar6 = param_4[1];
        iVar7 = *param_4;
        iVar8 = param_4[3] - iVar6;
        iVar2 = *(int *)(param_1 + 0x84);
        iVar9 = param_4[2] - iVar7;
        if (iVar2 != iVar9) {
          glPixelStorei(0xcf2,iVar2);
          iVar6 = param_4[1];
          iVar7 = *param_4;
        }
        iVar3 = *(int *)(param_1 + 0xb4);
        iVar4 = *(int *)(param_1 + 0xb8);
        glRasterPos2i(iVar7,iVar6);
        glDrawPixels(iVar9,iVar8,*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xa4),
                     param_2 + iVar4 * iVar6 + iVar3 * iVar7);
        glRasterPos2i(0,0);
        if (iVar2 != iVar9) {
          glPixelStorei(0xcf2,0);
        }
      }
      else {
        glDrawPixels(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x88),
                     *(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xa4),param_2);
      }
      if (!bVar10) {
        return;
      }
      glPixelStorei();
      return;
    }
  }
LAB_040ae494:
  iVar6 = *(int *)(param_1 + 0x6c);
joined_r0x040ae49a:
  if ((iVar6 != 0x52) && (iVar6 != 0x46)) {
    return;
  }
  FUN_0402cd10();
  return;
}

// --- Direct3DSurface9Imp::UnlockRect @0x040ac920 ---
/* source: direct3dsurface9imp */

undefined4 direct3dsurface9imp_040ac920(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined1 auStackY_68 [4];
  undefined1 local_64 [4];
  undefined4 local_60;
  int local_44;
  int local_40;
  
  if (param_1[7] != 0) {
    local_60 = 0x40ac944;
    direct3ddevice9imp_040803c0();
  }
  if (param_1[0x1b] == 0x4c4c554e) {
    local_60 = 0x40acbb4;
    FUN_0400a810();
  }
  if ((char)param_1[0xe] == '\0') {
                    /* try { // try from 040acb27 to 040acc0e has its CatchHandler @ 040acc31 */
    local_60 = 0x40acb2c;
    FUN_0402cd10();
  }
  uVar7 = param_1[0xf];
  *(undefined1 *)(param_1 + 0xe) = 0;
  puVar10 = (undefined4 *)&stack0xffffffa4;
  if ((uVar7 & 0x10) == 0) {
    if (param_1[0x23] != 1) {
                    /* try { // try from 040ac996 to 040acab3 has its CatchHandler @ 040acc31 */
      local_60 = 0x40ac99b;
      piVar6 = (int *)D3D9CommandQueue__GetNextCommandPointer();
      iVar2 = param_1[0x32];
      *piVar6 = iVar2;
      if (*(int *)(iVar2 + 8) < 1) {
        local_60 = 0x40acbe4;
        FUN_0400a810();
      }
      LOCK();
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
      UNLOCK();
      *(char *)(piVar6 + 1) = (char)param_1[0x10];
      piVar6[2] = param_1[0x11];
      piVar6[3] = param_1[0x12];
      piVar6[4] = param_1[0x13];
      piVar6[5] = param_1[0x14];
      local_60 = 0x40ac9dc;
      (**(code **)(*param_1 + 0xc))();
      local_60 = 0x40ac9ec;
      D3D9CommandQueue__CommandSubmitted();
      iVar2 = param_1[7];
      local_40 = param_1[0x13];
      iVar11 = param_1[0x12];
      iVar9 = *(int *)(iVar2 + 0xec80);
      iVar3 = *(int *)(iVar2 + 0xec84);
      param_1[0x16] = iVar9;
      param_1[0x18] = iVar9;
      local_44 = param_1[0x14];
      param_1[0x17] = iVar3;
      param_1[0x19] = iVar3;
      iVar9 = param_1[0x11];
      if ((char)param_1[0x10] != '\0') {
        local_40 = param_1[0x21];
        iVar11 = 0;
        iVar9 = 0;
        local_44 = param_1[0x22];
      }
      iVar3 = *(int *)(iVar2 + 0xec80);
      iVar2 = *(int *)(iVar2 + 0xec84);
      if (DAT_044a3840 == (int *)0x0) {
        local_60 = 0x40acc2c;
        piVar6 = malloc(0x1c);
      }
      else {
        piVar6 = DAT_044a3840;
        DAT_044a3840 = (int *)DAT_044a3840[6];
      }
      *piVar6 = iVar9;
      piVar6[1] = iVar11;
      piVar6[4] = iVar3;
      piVar6[5] = iVar2;
      piVar6[3] = local_44;
      piVar6[2] = local_40;
      piVar6[6] = param_1[0x15];
      param_1[0x15] = (int)piVar6;
      uVar7 = param_1[0xf];
    }
    puVar10 = (undefined4 *)&stack0xffffffa4;
    if ((((uVar7 & 0x8000) == 0) &&
        (piVar6 = (int *)param_1[0x24], puVar10 = (undefined4 *)&stack0xffffffa4,
        piVar6 != (int *)0x0)) && (puVar10 = (undefined4 *)&stack0xffffffa4, param_1[0x30] == 0)) {
      if (piVar6[0x8a] == 2) {
        local_60 = 0x40acc0f;
        (**(code **)(*piVar6 + 0x54))();
        puVar10 = (undefined4 *)auStackY_68;
      }
      else {
        local_60 = 0x40acab4;
        (**(code **)(*piVar6 + 0x54))();
        puVar10 = (undefined4 *)local_64;
      }
    }
  }
  piVar6 = puVar10;
  if ((param_1[0xd] == 0) && ((*(byte *)((int)param_1 + 0x75) & 2) == 0)) {
    puVar4 = (undefined4 *)param_1[0x32];
    LOCK();
    piVar1 = puVar4 + 2;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      uVar5 = *puVar4;
      puVar10[-1] = 0x40acb5f;
      uVar8 = eON_GetProcessHeap();
      puVar10[2] = uVar5;
      puVar10[1] = 0;
      *puVar10 = uVar8;
      puVar10[-1] = 0x40acb73;
      eON_HeapFree();
      piVar6 = puVar10 + -3;
      puVar10[-3] = puVar4;
      puVar10[-4] = 0x40acb7e;
      free((void *)puVar10[-3]);
      param_1[0x32] = 0;
    }
    else {
      param_1[0x32] = 0;
    }
  }
  if (param_1[7] != 0) {
    *piVar6 = param_1[7] + 0x40;
    piVar6[-1] = 0x40acae1;
    direct3ddevice9imp_04080490();
  }
  return 0;
}

// --- Direct3DSurface9Imp::UploadOpenGLObjectData @0x040af4e0 ---
/* source: direct3dbasetexture9imp, direct3dsurface9imp */

void direct3dbasetexture9imp_040af4e0(int param_1,int param_2,int param_3,char param_4,int *param_5)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  
  if (*(int *)(param_1 + 0x6c) == 0x4c4c554e) {
    FUN_0400a810("mDesc.Format != D3DFMT_NULL",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0x52b,
                 "void Direct3DSurface9Imp::UploadOpenGLObjectData(INT, LPBYTE, bool, const RECT*)")
    ;
    iVar1 = *(int *)(param_1 + 0x8c);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x8c);
  }
  if (iVar1 == 1) {
    FUN_0400a810("mSurfaceType != EST_PlainSurface",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0x52c,
                 "void Direct3DSurface9Imp::UploadOpenGLObjectData(INT, LPBYTE, bool, const RECT*)")
    ;
  }
  if (*(int *)(param_1 + 0xd0) != 0) {
    Direct3DSurface9Imp__TransferToOpenGLThroughDrawPixels();
    return;
  }
  if (*(int *)(param_1 + 0x90) == 0) {
    FUN_0400a810();
    return;
  }
  direct3dbasetexture9imp_0406db60(*(int *)(param_1 + 0x90) + 4,param_2);
  iVar1 = *(int *)(param_1 + 0x90);
  if (*(int *)(iVar1 + 0x284) <= param_2) {
    FUN_0400a810("(INT) mOpenGLTexturesCount > index",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.h"
                 ,0x8c,"OpenGLTexture* Direct3DBaseTexture9Imp::GetOpenGLTexture(INT)");
  }
  iVar1 = *(int *)(iVar1 + 0x244 + param_2 * 4);
  if (iVar1 == 0) {
    FUN_0400a810(&PTR_DAT_042e85bd,
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0x540,
                 "void Direct3DSurface9Imp::UploadOpenGLObjectData(INT, LPBYTE, bool, const RECT*)")
    ;
  }
  uVar4 = Direct3DDevice9Imp__GetContextCache(*(int *)(param_1 + 0x1c) + 0x40);
  FUN_0406d620(iVar1,uVar4);
  if (*(char *)(param_1 + 0xb0) != '\0') {
    (*DAT_0451ee94)(*(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 0xc0),0,0,
                    *(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x88),
                    *(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xbc),param_3);
    goto LAB_040af64e;
  }
  bVar7 = (*(uint *)(param_1 + 0xb8) & 3) != 0;
  if (bVar7) {
    glPixelStorei(0xcf5,2 - (*(uint *)(param_1 + 0xb8) & 1));
  }
  if (param_4 == '\0') {
    iVar8 = *param_5;
    iVar9 = param_5[1];
    param_3 = iVar9 * *(int *)(param_1 + 0xb8) + *(int *)(param_1 + 0xb4) * iVar8 + param_3;
    iVar6 = param_5[3] - iVar9;
    iVar5 = param_5[2] - iVar8;
    if (iVar5 == *(int *)(param_1 + 0x84)) {
      uVar4 = *(undefined4 *)(param_1 + 0xa4);
      uVar10 = *(undefined4 *)(param_1 + 0xa8);
      goto LAB_040af62c;
    }
    glPixelStorei(0xcf2,*(int *)(param_1 + 0x84));
    glTexSubImage2D(*(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 0xc0),*param_5,
                    param_5[1],iVar5,iVar6,*(undefined4 *)(param_1 + 0xa8),
                    *(undefined4 *)(param_1 + 0xa4),param_3);
    glPixelStorei(0xcf2,0);
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0xa4);
    uVar10 = *(undefined4 *)(param_1 + 0xa8);
    iVar6 = *(int *)(param_1 + 0x88);
    iVar5 = *(int *)(param_1 + 0x84);
    iVar9 = 0;
    iVar8 = 0;
LAB_040af62c:
    glTexSubImage2D(*(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 0xc0),iVar8,iVar9,
                    iVar5,iVar6,uVar10,uVar4,param_3);
  }
  if (bVar7) {
    glPixelStorei(0xcf5,4);
  }
LAB_040af64e:
  bVar2 = DAT_0451ca41;
  *(undefined1 *)(iVar1 + 0x10) = 1;
  bVar3 = FUN_04021ee0();
  if ((bVar2 & bVar3) == 0) {
    return;
  }
  FUN_0406d470();
  return;
}

// --- direct3dsurface9imp_040ace10 @0x040ace10 ---
/* source: direct3dsurface9imp */

void __regparm3 direct3dsurface9imp_040ace10(int param_1,char param_2)

{
  void *__ptr;
  size_t __n;
  int iVar1;
  char cVar2;
  void *__dest;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)&stack0xffffffb4;
  if ((*(int *)(param_1 + 0x6c) != 0x31545844) && (*(int *)(param_1 + 0x6c) == 0x4c4c554e)) {
    FUN_0400a810();
  }
  if (param_2 == '\0') {
    iVar4 = *(int *)(param_1 + 200);
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 100) = 0;
    }
    if (*(int *)(param_1 + 0x8c) == 1) {
      if (*(char *)(param_1 + 0x68) != '\0') goto LAB_040acec2;
    }
    else if ((*(uint *)(param_1 + 100) < *(uint *)(param_1 + 0x5c)) ||
            ((*(uint *)(param_1 + 100) <= *(uint *)(param_1 + 0x5c) &&
             (*(uint *)(param_1 + 0x60) < *(uint *)(param_1 + 0x58))))) {
LAB_040acec2:
      if (iVar4 == 0) {
        piVar3 = malloc(0xc);
        piVar3[2] = 1;
        eON_GetProcessHeap();
        iVar4 = HeapAlloc();
        piVar5 = (int *)&stack0xffffffa8;
        *piVar3 = iVar4;
        if (iVar4 == 0) {
          FUN_0400a810();
          iVar4 = *piVar3;
        }
        piVar3[1] = iVar4 + 0xfU & 0xfffffff0;
        *(int **)(param_1 + 200) = piVar3;
      }
      *piVar5 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xed00);
      piVar5[-1] = 0x40acedb;
      eON_ResetEvent();
      iVar4 = *(int *)(param_1 + 0x1c);
      *piVar5 = param_1;
      piVar5[2] = 0;
      piVar5[1] = 0x3d;
      piVar5[-1] = iVar4 + 0xec40;
      piVar5[-2] = 0x40acf02;
      D3D9CommandQueue__GetNextCommandPointer();
      piVar5[-1] = *(int *)(param_1 + 0x1c) + 0xec40;
      piVar5[-2] = 0x40acf12;
      D3D9CommandQueue__CommandSubmitted();
      iVar4 = *(int *)(param_1 + 0x1c);
      *piVar5 = 0xffffffff;
      piVar5[-1] = *(undefined4 *)(iVar4 + 0xed00);
      piVar5[-2] = 0x40acf2b;
      eON_WaitForSingleObject();
      return;
    }
    if (iVar4 != 0) {
      cVar2 = FUN_040acd10();
      if (cVar2 == '\0') {
        return;
      }
      __ptr = *(void **)(param_1 + 200);
      piVar3 = malloc(0xc);
      piVar3[2] = 1;
      eON_GetProcessHeap();
      iVar4 = HeapAlloc();
      *piVar3 = iVar4;
      if (iVar4 == 0) {
        FUN_0400a810();
        iVar4 = *piVar3;
      }
      __n = *(size_t *)(param_1 + 0xbc);
      __dest = (void *)(iVar4 + 0xfU & 0xfffffff0);
      piVar3[1] = (int)__dest;
      *(int **)(param_1 + 200) = piVar3;
      memcpy(__dest,*(void **)((int)__ptr + 4),__n);
      LOCK();
      piVar3 = (int *)((int)__ptr + 8);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        eON_GetProcessHeap();
        eON_HeapFree();
        free(__ptr);
      }
      iVar4 = *(int *)(param_1 + 0x54);
      while (iVar1 = iVar4, iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x18);
        *(int *)(iVar1 + 0x18) = DAT_044a3840;
        DAT_044a3840 = iVar1;
        iVar4 = *(int *)(param_1 + 0x54);
      }
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    if (*(int *)(param_1 + 200) != 0) {
      iVar4 = *(int *)(param_1 + 0x54);
      while (iVar1 = iVar4, iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x18);
        *(int *)(iVar1 + 0x18) = DAT_044a3840;
        DAT_044a3840 = iVar1;
        iVar4 = *(int *)(param_1 + 0x54);
      }
      return;
    }
  }
  piVar3 = malloc(0xc);
  piVar3[2] = 1;
  eON_GetProcessHeap();
  iVar4 = HeapAlloc();
  *piVar3 = iVar4;
  if (iVar4 == 0) {
    FUN_0400a810();
    iVar4 = *piVar3;
  }
  piVar3[1] = iVar4 + 0xfU & 0xfffffff0;
  *(int **)(param_1 + 200) = piVar3;
  return;
}

// --- direct3dsurface9imp_040adca0 @0x040adca0 ---
/* source: direct3dsurface9imp */

undefined4 direct3dsurface9imp_040adca0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xac);
  if (uVar1 == 0x84f9) {
    FUN_0400a810("false",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0x1ae,"bool Direct3DSurface9Imp::IsDepth() const");
  }
  else if (uVar1 < 0x84fa) {
    if (2 < uVar1 - 0x81a5) {
      return 0;
    }
  }
  else if (uVar1 != 0x88f0) {
    return 0;
  }
  return 1;
}

// --- direct3dsurface9imp_040add10 @0x040add10 ---
/* source: direct3dsurface9imp */

undefined4 direct3dsurface9imp_040add10(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xac);
  if (iVar1 != 0x84f9) {
    return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 0x88f0);
  }
  FUN_0400a810("false",
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
               ,0x1ba,"bool Direct3DSurface9Imp::IsStencil() const");
  return 1;
}

// --- direct3dsurface9imp_040ae900 @0x040ae900 ---
/* source: direct3dsurface9imp */

void direct3dsurface9imp_040ae900(int param_1,char param_2,char param_3)

{
  void *__ptr;
  size_t __n;
  int iVar1;
  char cVar2;
  void *__dest;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)&stack0xffffffb4;
  if ((*(int *)(param_1 + 0x6c) != 0x31545844) && (*(int *)(param_1 + 0x6c) == 0x4c4c554e)) {
    FUN_0400a810();
  }
  if (param_2 == '\0') {
    iVar4 = *(int *)(param_1 + 200);
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 100) = 0;
    }
    if (*(int *)(param_1 + 0x8c) == 1) {
      if (*(char *)(param_1 + 0x68) == '\0') goto LAB_040aea3b;
    }
    else if ((*(uint *)(param_1 + 0x5c) <= *(uint *)(param_1 + 100)) &&
            ((*(uint *)(param_1 + 0x5c) < *(uint *)(param_1 + 100) ||
             (*(uint *)(param_1 + 0x58) <= *(uint *)(param_1 + 0x60))))) {
LAB_040aea3b:
      if (iVar4 != 0) {
        cVar2 = FUN_040acd10();
        if (cVar2 == '\0') {
          return;
        }
        __ptr = *(void **)(param_1 + 200);
        piVar3 = malloc(0xc);
        piVar3[2] = 1;
        eON_GetProcessHeap();
        iVar4 = HeapAlloc();
        *piVar3 = iVar4;
        if (iVar4 == 0) {
          FUN_0400a810();
          iVar4 = *piVar3;
        }
        __n = *(size_t *)(param_1 + 0xbc);
        __dest = (void *)(iVar4 + 0xfU & 0xfffffff0);
        piVar3[1] = (int)__dest;
        *(int **)(param_1 + 200) = piVar3;
        memcpy(__dest,*(void **)((int)__ptr + 4),__n);
        LOCK();
        piVar3 = (int *)((int)__ptr + 8);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          eON_GetProcessHeap();
          eON_HeapFree();
          free(__ptr);
        }
        iVar4 = *(int *)(param_1 + 0x54);
        while (iVar1 = iVar4, iVar1 != 0) {
          *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x18);
          *(int *)(iVar1 + 0x18) = DAT_044a3840;
          DAT_044a3840 = iVar1;
          iVar4 = *(int *)(param_1 + 0x54);
        }
        return;
      }
      goto LAB_040aec00;
    }
    if (iVar4 == 0) {
      piVar3 = malloc(0xc);
      piVar3[2] = 1;
      eON_GetProcessHeap();
      iVar4 = HeapAlloc();
      piVar5 = (int *)&stack0xffffffa8;
      *piVar3 = iVar4;
      if (iVar4 == 0) {
        FUN_0400a810();
        iVar4 = *piVar3;
      }
      piVar3[1] = iVar4 + 0xfU & 0xfffffff0;
      *(int **)(param_1 + 200) = piVar3;
    }
    if (param_3 == '\0') {
      piVar5[1] = param_1;
      piVar5[3] = 0;
      piVar5[2] = 0x3d;
      *piVar5 = *(int *)(param_1 + 0x1c) + 0xec40;
      piVar5[-1] = 0x40ae9ea;
      D3D9CommandQueue__GetNextCommandPointer();
      D3D9CommandQueue__CommandSubmitted();
      return;
    }
    *piVar5 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xed00);
    piVar5[-1] = 0x40aeba1;
    eON_ResetEvent();
    piVar5[2] = 0;
    piVar5[1] = 0x3d;
    *piVar5 = param_1;
    piVar5[-1] = *(int *)(param_1 + 0x1c) + 0xec40;
    piVar5[-2] = 0x40aebc8;
    D3D9CommandQueue__GetNextCommandPointer();
    piVar5[-1] = *(int *)(param_1 + 0x1c) + 0xec40;
    piVar5[-2] = 0x40aebd8;
    D3D9CommandQueue__CommandSubmitted();
    *piVar5 = 0xffffffff;
    piVar5[-1] = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xed00);
    piVar5[-2] = 0x40aebf1;
    eON_WaitForSingleObject();
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    if (*(int *)(param_1 + 200) != 0) {
      iVar4 = *(int *)(param_1 + 0x54);
      while (iVar1 = iVar4, iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x18);
        *(int *)(iVar1 + 0x18) = DAT_044a3840;
        DAT_044a3840 = iVar1;
        iVar4 = *(int *)(param_1 + 0x54);
      }
      return;
    }
LAB_040aec00:
    piVar3 = malloc(0xc);
    piVar3[2] = 1;
    eON_GetProcessHeap();
    iVar4 = HeapAlloc();
    *piVar3 = iVar4;
    if (iVar4 == 0) {
      FUN_0400a810();
      iVar4 = *piVar3;
    }
    piVar3[1] = iVar4 + 0xfU & 0xfffffff0;
    *(int **)(param_1 + 200) = piVar3;
  }
  return;
}

// --- direct3dsurface9imp_040aed60 @0x040aed60 ---
/* source: direct3dsurface9imp */

void direct3dsurface9imp_040aed60(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((((*(int *)(param_1 + 200) == 0) && (*(int *)(param_1 + 0x6c) == 0x31545844)) &&
      (*(int *)(param_1 + 0x74) == 0)) && (*(int *)(param_1 + 0x78) == 1)) {
    iVar3 = 0xad0;
    if (0xabf < *(int *)(param_1 + 0xbc)) {
      iVar3 = *(int *)(param_1 + 0xbc) + 0x10;
    }
    piVar1 = malloc(0xc);
    piVar1[2] = 1;
    uVar2 = eON_GetProcessHeap();
    iVar3 = HeapAlloc(uVar2,8,iVar3);
    *piVar1 = iVar3;
    if (iVar3 == 0) {
      FUN_0400a810("surfaceData->DataBuffer",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                   ,0xad,"SurfaceData* GetSurfaceData(UINT, bool)");
      iVar3 = *piVar1;
    }
    piVar1[1] = iVar3 + 0xfU & 0xfffffff0;
    *(int **)(param_1 + 200) = piVar1;
  }
  return;
}

// --- direct3dsurface9imp_040af8e0 @0x040af8e0 ---
/* source: direct3dsurface9imp */

undefined4 direct3dsurface9imp_040af8e0(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *__ptr;
  undefined4 uVar3;
  code *pcVar4;
  int **ppiVar5;
  uint uVar6;
  uint uVar7;
  int *local_4c;
  char *local_48;
  undefined4 local_44;
  char *local_40;
  int *local_3c;
  undefined4 local_24;
  uint local_20;
  
  ppiVar5 = &local_4c;
  local_20 = (uint)*(byte *)(param_3 + 1);
  local_24 = *(undefined4 *)(*param_3 + 4);
  if (param_1[0x1b] == 0x4c4c554e) {
    local_40 = "void Direct3DSurface9Imp::SystemDataUpdated(LPBYTE, bool, const RECT*)";
    local_44 = 0x5c7;
    local_48 = 
    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp";
    local_4c = (int *)0x42f8592;
    FUN_0400a810();
  }
  if (param_1[0x23] == 1) {
    local_40 = "void Direct3DSurface9Imp::SystemDataUpdated(LPBYTE, bool, const RECT*)";
    local_44 = 0x5c8;
    local_48 = 
    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp";
    local_4c = (int *)0x42f84ec;
    FUN_0400a810();
  }
  local_48 = (char *)0x0;
  local_4c = param_1;
  local_40 = (char *)local_20;
  local_44 = local_24;
  local_3c = param_3 + 2;
  direct3dbasetexture9imp_040af4e0();
  if ((param_1[0x24] != 0) && (1 < *(uint *)(param_1[0x24] + 0x284))) {
    uVar6 = 1;
    do {
      uVar7 = uVar6 + 1;
      local_4c = param_1;
      local_40 = (char *)local_20;
      local_44 = local_24;
      local_48 = (char *)uVar6;
      local_3c = param_3 + 2;
      direct3dbasetexture9imp_040af4e0();
      uVar6 = uVar7;
    } while (uVar7 < *(uint *)(param_1[0x24] + 0x284));
  }
  __ptr = (undefined4 *)*param_3;
  LOCK();
  piVar1 = __ptr + 2;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    uVar3 = *__ptr;
    local_4c = (int *)eON_GetProcessHeap();
    local_48 = (char *)0x0;
    local_44 = uVar3;
    eON_HeapFree();
    ppiVar5 = (int **)&stack0xffffffa8;
    free(__ptr);
  }
  iVar2 = *param_1;
  *ppiVar5 = param_1;
  pcVar4 = *(code **)(iVar2 + 0x10);
  ppiVar5[-1] = (int *)0x40af9d1;
  (*pcVar4)();
  return 0x18;
}

// --- direct3dsurface9imp_040b0920 @0x040b0920 ---
/* source: direct3dsurface9imp */

void direct3dsurface9imp_040b0920
               (int param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x6c) == 0x4c4c554e) {
    FUN_0400a810("mDesc.Format != D3DFMT_NULL",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0x5c7,"void Direct3DSurface9Imp::SystemDataUpdated(LPBYTE, bool, const RECT*)");
    iVar1 = *(int *)(param_1 + 0x8c);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x8c);
  }
  if (iVar1 == 1) {
    FUN_0400a810("mSurfaceType != EST_PlainSurface",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dsurface9imp.cpp"
                 ,0x5c8,"void Direct3DSurface9Imp::SystemDataUpdated(LPBYTE, bool, const RECT*)");
  }
  direct3dbasetexture9imp_040af4e0(param_1,0,param_2,param_3,param_4);
  if ((*(int *)(param_1 + 0x90) != 0) && (1 < *(uint *)(*(int *)(param_1 + 0x90) + 0x284))) {
    uVar2 = 1;
    do {
      uVar3 = uVar2 + 1;
      direct3dbasetexture9imp_040af4e0(param_1,uVar2,param_2,param_3,param_4);
      uVar2 = uVar3;
    } while (uVar3 < *(uint *)(*(int *)(param_1 + 0x90) + 0x284));
  }
  return;
}

// --- attached helper FUN_000972d0 @0x040972d0 (call-graph exclusive to this TU) ---
void FUN_040972d0(int param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_2c = *(int *)(param_1 + 0xe9bc);
  local_28 = *(int *)(param_1 + 0xe9c0);
  local_24 = *(int *)(param_1 + 0xe9c4) + local_2c;
  local_20 = *(int *)(param_1 + 0xe9c8) + local_28;
  iVar1 = *(int *)(param_1 + 0xc65c);
  if ((local_2c == 0) && (local_28 == 0)) {
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x7a60) != 0)) {
      bVar4 = false;
      if (local_24 == *(int *)(iVar1 + 0x88)) {
        bVar4 = local_20 == *(int *)(iVar1 + 0x8c);
      }
      Direct3DSurface9Imp__MainOpenGLObjectDataUpdated(iVar1 + 4,bVar4,&local_2c);
    }
    iVar1 = *(int *)(param_1 + 0xc660);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x7a64) != 0)) {
      bVar4 = false;
      if (local_24 == *(int *)(iVar1 + 0x88)) {
        bVar4 = local_20 == *(int *)(iVar1 + 0x8c);
      }
      Direct3DSurface9Imp__MainOpenGLObjectDataUpdated(iVar1 + 4,bVar4,&local_2c);
    }
    iVar1 = *(int *)(param_1 + 0xc664);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x7a68) != 0)) {
      bVar4 = false;
      if (local_24 == *(int *)(iVar1 + 0x88)) {
        bVar4 = local_20 == *(int *)(iVar1 + 0x8c);
      }
      Direct3DSurface9Imp__MainOpenGLObjectDataUpdated(iVar1 + 4,bVar4,&local_2c);
    }
    iVar1 = *(int *)(param_1 + 0xc668);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x7a6c) != 0)) {
      bVar4 = false;
      if (local_24 == *(int *)(iVar1 + 0x88)) {
        bVar4 = local_20 == *(int *)(iVar1 + 0x8c);
      }
      Direct3DSurface9Imp__MainOpenGLObjectDataUpdated(iVar1 + 4,bVar4,&local_2c);
    }
    iVar1 = *(int *)(param_1 + 0xc66c);
    bVar4 = true;
  }
  else {
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x7a60) != 0)) {
      Direct3DSurface9Imp__MainOpenGLObjectDataUpdated(iVar1 + 4,0,&local_2c);
    }
    if ((*(int *)(param_1 + 0xc660) != 0) && (*(int *)(param_1 + 0x7a64) != 0)) {
      Direct3DSurface9Imp__MainOpenGLObjectDataUpdated(*(int *)(param_1 + 0xc660) + 4,0,&local_2c);
    }
    if ((*(int *)(param_1 + 0xc664) != 0) && (*(int *)(param_1 + 0x7a68) != 0)) {
      Direct3DSurface9Imp__MainOpenGLObjectDataUpdated(*(int *)(param_1 + 0xc664) + 4,0,&local_2c);
    }
    if ((*(int *)(param_1 + 0xc668) != 0) && (*(int *)(param_1 + 0x7a6c) != 0)) {
      Direct3DSurface9Imp__MainOpenGLObjectDataUpdated(*(int *)(param_1 + 0xc668) + 4,0,&local_2c);
    }
    iVar1 = *(int *)(param_1 + 0xc66c);
    bVar4 = false;
  }
  if ((iVar1 != 0) &&
     (((cVar2 = direct3dsurface9imp_040adca0(iVar1 + 4), cVar2 != '\0' &&
       (*(int *)(param_1 + 0x7a54) != 0)) ||
      ((cVar2 = direct3dsurface9imp_040add10(*(int *)(param_1 + 0xc66c) + 4), cVar2 != '\0' &&
       ((*(int *)(param_1 + 0x7a7c) != 0 && (*(int *)(param_1 + 0x7a88) != 0)))))))) {
    iVar1 = *(int *)(param_1 + 0xc66c);
    bVar3 = false;
    if ((bVar4) && (local_24 == *(int *)(iVar1 + 0x88))) {
      bVar3 = local_20 == *(int *)(iVar1 + 0x8c);
    }
    Direct3DSurface9Imp__MainOpenGLObjectDataUpdated(iVar1 + 4,bVar3,&local_2c);
    return;
  }
  return;
}

