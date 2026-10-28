// Recovered source: eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- Direct3DBaseTexture9Imp::EvictManagedResourcesD3D9 @0x0406dc00 ---
/* source: direct3dbasetexture9imp */

void Direct3DBaseTexture9Imp__EvictManagedResourcesD3D9(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x34) != 1) {
    FUN_0400a810("mPoolType == D3DPOOL_MANAGED",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.cpp"
                 ,0x3ac,"void Direct3DBaseTexture9Imp::EvictManagedResourcesD3D9()");
  }
  if (0 < *(int *)(param_1 + 0x1bc)) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      direct3dsurface9imp_040ae900(*(int *)(param_1 + 0x3c + iVar1) + 4,0,0);
    } while (iVar2 < *(int *)(param_1 + 0x1bc));
  }
  if (0 < *(int *)(param_1 + 0x200)) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      direct3dvolume9imp_040b7630(*(int *)(param_1 + 0x1c0 + iVar1) + 4,0,0);
    } while (iVar2 < *(int *)(param_1 + 0x200));
  }
  return;
}

// --- Direct3DBaseTexture9Imp::EvictManagedResourcesGL @0x0406dcc0 ---
/* source: direct3dbasetexture9imp */

void Direct3DBaseTexture9Imp__EvictManagedResourcesGL(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x34) != 1) {
    FUN_0400a810("mPoolType == D3DPOOL_MANAGED",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.cpp"
                 ,0x3ba,"void Direct3DBaseTexture9Imp::EvictManagedResourcesGL()");
  }
  do {
    iVar2 = *(int *)(param_1 + 0x280);
    do {
      if (iVar2 < 2) {
        return;
      }
      iVar2 = iVar2 + -1;
      *(int *)(param_1 + 0x280) = iVar2;
      piVar1 = *(int **)(param_1 + 0x240 + iVar2 * 4);
    } while (piVar1 == (int *)0x0);
    if (*piVar1 != 0) {
      Direct3DDevice9Imp__DeleteTextureInOpenGL(*piVar1 + 0x40,piVar1[2]);
    }
    operator_delete(piVar1);
  } while( true );
}

// --- Direct3DBaseTexture9Imp::Initialize @0x0406d770 ---
/* source: direct3dbasetexture9imp */

undefined4 direct3dbasetexture9imp_0406d770(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  Direct3DResource9Imp__InitializeInDevicePool(param_1,param_3);
  cVar1 = PixelFormatData__MapTextureFormatToGL
                    (*(undefined4 *)(param_1 + 0x210),*(uint *)(param_1 + 0x20c) & 1,param_1 + 0x214
                     ,param_1 + 0x218,param_1 + 0x21c,param_1 + 0x220,param_1 + 0x221);
  if (cVar1 == '\0') {
    FUN_0400a810("GetOpenGLInfo( mFormat, mUsage & 0x01, mGLType, mGLFormat, mGLInternalFormat, mCompressed, mInSRGBFormat ) == true"
                 ,
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.cpp"
                 ,0x2e0,"bool Direct3DBaseTexture9Imp::Initialize(IDirect3DDevice9*, D3DPOOL)");
  }
  return 1;
}

// --- OpenGLTexture::OpenGLTexture @0x0406c450 ---
/* source: direct3dbasetexture9imp */

void OpenGLTexture__OpenGLTexture(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = param_2;
  param_1[1] = param_3;
  bzero(param_1 + 5,0x38);
  param_1[7] = 0x2901;
  param_1[6] = 0x2901;
  param_1[5] = 0x2901;
  param_1[9] = 0x2600;
  iVar3 = *(int *)(param_1[1] + 0x224);
  param_1[8] = 0x2600;
  iVar2 = 0xde1;
  param_1[0xb] = 1;
  param_1[0xc] = -0x3b860000;
  *(undefined1 *)(param_1 + 0x13) = 1;
  if ((iVar3 != 1) && (iVar2 = 0x8513, iVar3 != 2)) {
    iVar2 = 0x806f;
  }
  param_1[3] = iVar2;
  iVar3 = Direct3DDevice9Imp__GetContextCache(*param_1 + 0x40);
  iVar2 = Direct3DDevice9Imp__CreateTextureInOpenGL(*param_1 + 0x40);
  param_1[2] = iVar2;
  cVar1 = FUN_04021ee0();
  if (*(int *)(iVar3 + 0x234) != 0x84c0) {
    (*DAT_0451eeac)(0x84c0);
    *(undefined4 *)(iVar3 + 0x234) = 0x84c0;
  }
  FUN_040c6ee0(iVar3,param_1[3],param_1[2]);
  if (cVar1 == '\0') {
    glTexParameterf(param_1[3],0x8066,0);
    glTexParameteri(param_1[3],0x2802,0x812f);
    glTexParameteri(param_1[3],0x2803,0x812f);
    glTexParameteri(param_1[3],0x2800,0x2601);
    glTexParameteri(param_1[3],0x2801,0x2601);
    glTexParameteri(param_1[3],0x8a48,0x8a4a);
    glTexParameteri(param_1[3],0x8191,0);
  }
  else {
    glTexParameteri(param_1[3],0x2802,0x812f);
    glTexParameteri(param_1[3],0x2803,0x812f);
    glTexParameteri(param_1[3],0x2800,0x2601);
    glTexParameteri(param_1[3],0x2801,0x2601);
    glTexParameteri(param_1[3],0x8a48,0x8a4a);
  }
  if ((param_1[3] != 0x806f) &&
     (cVar1 = FUN_0407f8d0(*(undefined4 *)(param_1[1] + 0x210)), cVar1 != '\0')) {
    glTexParameteri(param_1[3],0x884c,0x884e);
    glTexParameteri(param_1[3],0x884d,0x203);
  }
  cVar1 = FUN_04021f50();
  iVar3 = param_1[3];
  if (cVar1 != '\0') {
    if (iVar3 == 0x806f) {
      iVar3 = param_1[1];
      (*DAT_0451e144)(0x806f,*(undefined4 *)(iVar3 + 0x228),*(undefined4 *)(iVar3 + 0x21c),
                      *(undefined4 *)(iVar3 + 0x22c),*(undefined4 *)(iVar3 + 0x230),
                      *(undefined4 *)(iVar3 + 0x234));
      iVar3 = param_1[3];
    }
    else if (iVar3 == 0x8513) {
      iVar3 = param_1[1];
      (*DAT_0451e148)(0x8513,*(undefined4 *)(iVar3 + 0x228),*(undefined4 *)(iVar3 + 0x21c),
                      *(undefined4 *)(iVar3 + 0x22c),*(undefined4 *)(iVar3 + 0x230));
      iVar3 = param_1[3];
    }
    else if (iVar3 == 0xde1) {
      iVar3 = param_1[1];
      (*DAT_0451e148)(0xde1,*(undefined4 *)(iVar3 + 0x228),*(undefined4 *)(iVar3 + 0x21c),
                      *(undefined4 *)(iVar3 + 0x22c),*(undefined4 *)(iVar3 + 0x230));
      iVar3 = param_1[3];
    }
    else {
      FUN_0400a810("false",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.cpp"
                   ,0x96,"OpenGLTexture::OpenGLTexture(Direct3DDevice9*, Direct3DBaseTexture9Imp*)")
      ;
      iVar3 = param_1[3];
    }
    goto LAB_0406c678;
  }
  if (iVar3 == 0x806f) {
    iVar3 = param_1[1];
    if (*(char *)(iVar3 + 0x220) != '\0') {
      FUN_0400a810("!mD3DTexture->mCompressed",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.cpp"
                   ,0xe8,"OpenGLTexture::OpenGLTexture(Direct3DDevice9*, Direct3DBaseTexture9Imp*)")
      ;
      iVar3 = param_1[1];
    }
    uVar4 = 0;
    uVar8 = *(uint *)(iVar3 + 0x22c);
    uVar9 = *(uint *)(iVar3 + 0x230);
    uVar7 = *(uint *)(iVar3 + 0x234);
    if (*(int *)(iVar3 + 0x228) != 0) {
      do {
        (*DAT_0451eeb4)(0x806f,uVar4,*(undefined4 *)(iVar3 + 0x21c),uVar8,uVar9,uVar7,0,
                        *(undefined4 *)(iVar3 + 0x218),*(undefined4 *)(iVar3 + 0x214),0);
        if (1 < uVar8) {
          uVar8 = uVar8 >> 1;
        }
        if (1 < uVar9) {
          uVar9 = uVar9 >> 1;
        }
        if (1 < uVar7) {
          uVar7 = uVar7 >> 1;
        }
        iVar3 = param_1[1];
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(iVar3 + 0x228));
LAB_0406c8e0:
      iVar3 = param_1[3];
      goto LAB_0406c678;
    }
  }
  else {
    if (iVar3 == 0x8513) {
      iVar3 = param_1[1];
      uVar8 = *(uint *)(iVar3 + 0x22c);
      uVar9 = *(uint *)(iVar3 + 0x230);
      if (*(char *)(iVar3 + 0x220) == '\0') {
        if (*(int *)(iVar3 + 0x228) == 0) {
          iVar3 = 0x8513;
          goto LAB_0406c678;
        }
        uVar7 = 0;
        do {
          glTexImage2D(0x8515,uVar7,*(undefined4 *)(iVar3 + 0x21c),uVar8,uVar9,0,
                       *(undefined4 *)(iVar3 + 0x218),*(undefined4 *)(iVar3 + 0x214),0);
          iVar3 = param_1[1];
          glTexImage2D(0x8516,uVar7,*(undefined4 *)(iVar3 + 0x21c),uVar8,uVar9,0,
                       *(undefined4 *)(iVar3 + 0x218),*(undefined4 *)(iVar3 + 0x214),0);
          iVar3 = param_1[1];
          glTexImage2D(0x8517,uVar7,*(undefined4 *)(iVar3 + 0x21c),uVar8,uVar9,0,
                       *(undefined4 *)(iVar3 + 0x218),*(undefined4 *)(iVar3 + 0x214),0);
          iVar3 = param_1[1];
          glTexImage2D(0x8518,uVar7,*(undefined4 *)(iVar3 + 0x21c),uVar8,uVar9,0,
                       *(undefined4 *)(iVar3 + 0x218),*(undefined4 *)(iVar3 + 0x214),0);
          iVar3 = param_1[1];
          glTexImage2D(0x8519,uVar7,*(undefined4 *)(iVar3 + 0x21c),uVar8,uVar9,0,
                       *(undefined4 *)(iVar3 + 0x218),*(undefined4 *)(iVar3 + 0x214),0);
          iVar3 = param_1[1];
          glTexImage2D(0x851a,uVar7,*(undefined4 *)(iVar3 + 0x21c),uVar8,uVar9,0,
                       *(undefined4 *)(iVar3 + 0x218),*(undefined4 *)(iVar3 + 0x214),0);
          if (1 < uVar8) {
            uVar8 = uVar8 >> 1;
          }
          if (1 < uVar9) {
            uVar9 = uVar9 >> 1;
          }
          iVar3 = param_1[1];
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)(iVar3 + 0x228));
      }
      else {
        iVar2 = D3D9_FormatToPixelSize(*(undefined4 *)(iVar3 + 0x210));
        iVar3 = param_1[1];
        if (*(int *)(iVar3 + 0x228) == 0) goto LAB_0406c705;
        uVar7 = 0;
        do {
          if (*(char *)(iVar3 + 0x220) == '\0') {
            iVar6 = uVar9 * uVar8;
          }
          else {
            iVar6 = uVar8 + 6;
            if (-1 < (int)(uVar8 + 3)) {
              iVar6 = uVar8 + 3;
            }
            iVar5 = uVar9 + 3;
            if ((int)(uVar9 + 3) < 0) {
              iVar5 = uVar9 + 6;
            }
            iVar6 = (iVar6 >> 2) * (iVar5 >> 2) * 4;
          }
          iVar6 = iVar6 * iVar2;
          (*DAT_0451eea0)(0x8515,uVar7,*(undefined4 *)(iVar3 + 0x218),uVar8,uVar9,0,iVar6,0);
          (*DAT_0451eea0)(0x8516,uVar7,*(undefined4 *)(param_1[1] + 0x218),uVar8,uVar9,0,iVar6,0);
          (*DAT_0451eea0)(0x8517,uVar7,*(undefined4 *)(param_1[1] + 0x218),uVar8,uVar9,0,iVar6,0);
          (*DAT_0451eea0)(0x8518,uVar7,*(undefined4 *)(param_1[1] + 0x218),uVar8,uVar9,0,iVar6,0);
          (*DAT_0451eea0)(0x8519,uVar7,*(undefined4 *)(param_1[1] + 0x218),uVar8,uVar9,0,iVar6,0);
          (*DAT_0451eea0)(0x851a,uVar7,*(undefined4 *)(param_1[1] + 0x218),uVar8,uVar9,0,iVar6,0);
          if (1 < uVar8) {
            uVar8 = uVar8 >> 1;
          }
          if (1 < uVar9) {
            uVar9 = uVar9 >> 1;
          }
          iVar3 = param_1[1];
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)(iVar3 + 0x228));
      }
LAB_0406c9d3:
      iVar3 = param_1[3];
      goto LAB_0406c678;
    }
    if (iVar3 == 0xde1) {
      iVar3 = param_1[1];
      uVar8 = *(uint *)(iVar3 + 0x22c);
      uVar9 = *(uint *)(iVar3 + 0x230);
      if (*(char *)(iVar3 + 0x220) == '\0') {
        if (*(int *)(iVar3 + 0x228) == 0) {
          iVar3 = 0xde1;
          goto LAB_0406c678;
        }
        uVar7 = 0;
        do {
          glTexImage2D(0xde1,uVar7,*(undefined4 *)(iVar3 + 0x21c),uVar8,uVar9,0,
                       *(undefined4 *)(iVar3 + 0x218),*(undefined4 *)(iVar3 + 0x214),0);
          if (1 < uVar8) {
            uVar8 = uVar8 >> 1;
          }
          if (1 < uVar9) {
            uVar9 = uVar9 >> 1;
          }
          iVar3 = param_1[1];
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)(iVar3 + 0x228));
        goto LAB_0406c9d3;
      }
      iVar2 = D3D9_FormatToPixelSize(*(undefined4 *)(iVar3 + 0x210));
      iVar3 = param_1[1];
      if (*(int *)(iVar3 + 0x228) != 0) {
        uVar7 = 0;
        do {
          if (*(char *)(iVar3 + 0x220) == '\0') {
            iVar6 = uVar9 * uVar8;
          }
          else {
            iVar6 = uVar8 + 6;
            if (-1 < (int)(uVar8 + 3)) {
              iVar6 = uVar8 + 3;
            }
            iVar5 = uVar9 + 3;
            if ((int)(uVar9 + 3) < 0) {
              iVar5 = uVar9 + 6;
            }
            iVar6 = (iVar6 >> 2) * (iVar5 >> 2) * 4;
          }
          (*DAT_0451eea0)(0xde1,uVar7,*(undefined4 *)(iVar3 + 0x218),uVar8,uVar9,0,iVar6 * iVar2,0);
          if (1 < uVar8) {
            uVar8 = uVar8 >> 1;
          }
          if (1 < uVar9) {
            uVar9 = uVar9 >> 1;
          }
          iVar3 = param_1[1];
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)(iVar3 + 0x228));
        goto LAB_0406c8e0;
      }
    }
    else {
      FUN_0400a810("false",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.cpp"
                   ,0xfd,"OpenGLTexture::OpenGLTexture(Direct3DDevice9*, Direct3DBaseTexture9Imp*)")
      ;
    }
  }
LAB_0406c705:
  iVar3 = param_1[3];
LAB_0406c678:
  glTexParameteri(iVar3,0x813c,0);
  glTexParameteri();
  return;
}

// --- direct3dbasetexture9imp_0406be40 @0x0406be40 ---
/* source: direct3dbasetexture9imp */

undefined4 __regparm3 direct3dbasetexture9imp_0406be40(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = param_1[0x89];
  if (param_1[7] != 0) {
    uVar3 = 2;
    if (((iVar1 != 2) && (uVar3 = 3, iVar1 != 3)) && (uVar3 = 1, iVar1 != 1)) {
      FUN_0400a810("false",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.cpp"
                   ,0x3ff,"virtual ULONG Direct3DBaseTexture9Imp::Release()");
    }
    param_1[0xe] = 0xd15ea5e;
    direct3ddevice9imp_0409a7c0(param_1[7] + 0x40,uVar3,param_1);
    return 0;
  }
  if (((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 1)) {
    piVar2 = (int *)param_1[3];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x5c))(piVar2);
    }
  }
  else {
    FUN_0400a810("false",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.cpp"
                 ,0x40f,"virtual ULONG Direct3DBaseTexture9Imp::Release()");
  }
  (**(code **)(*param_1 + 4))(param_1);
  return 0;
}

// --- direct3dbasetexture9imp_0406bf30 @0x0406bf30 ---
/* source: direct3dbasetexture9imp */

int direct3dbasetexture9imp_0406bf30(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  LOCK();
  piVar1 = (int *)(param_1 + 0x288);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 + -1 == 0) {
    if (*(int *)(param_1 + 0x38) != 0x1ceb00da) {
      FUN_0400a810("mDeleted == 0x1CEB00DA",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.cpp"
                   ,0x3f1,"virtual ULONG Direct3DBaseTexture9Imp::Release()");
    }
    if (iVar2 == 1) {
      iVar3 = direct3dbasetexture9imp_0406be40();
      return iVar3;
    }
  }
  return iVar3 + -1;
}

// --- direct3dbasetexture9imp_0406d9b0 @0x0406d9b0 ---
/* source: direct3dbasetexture9imp */

void direct3dbasetexture9imp_0406d9b0(int param_1,int param_2,char param_3)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  int iVar4;
  
  if (param_2 != 0) {
    if (0xf < param_2) {
      FUN_0400a810("openGLObjectIndex < 16",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.cpp"
                   ,0x3a3,"void Direct3DBaseTexture9Imp::MakeSureOpenGLTextureExists(INT)");
    }
    iVar4 = *(int *)(param_1 + 0x280);
    while (iVar4 <= param_2) {
      pvVar3 = operator_new(0x50);
                    /* try { // try from 0406da64 to 0406da68 has its CatchHandler @ 0406db41 */
      OpenGLTexture__OpenGLTexture(pvVar3,*(undefined4 *)(param_1 + 0x1c),param_1);
      iVar4 = *(int *)(param_1 + 0x280);
      *(void **)(param_1 + 0x240 + iVar4 * 4) = pvVar3;
      iVar4 = iVar4 + 1;
      *(int *)(param_1 + 0x280) = iVar4;
    }
    iVar4 = ((uint)(*(int *)(param_1 + 0x224) == 2) * 5 + 1) * *(int *)(param_1 + 0x284);
    if (iVar4 < *(int *)(param_1 + 0x1bc)) {
      do {
        iVar1 = iVar4 * 4;
        iVar4 = iVar4 + 1;
        FUN_040b0b30(*(int *)(param_1 + 0x3c + iVar1) + 4,param_2);
      } while (iVar4 < *(int *)(param_1 + 0x1bc));
    }
  }
  if (((param_3 != '\0') &&
      (iVar4 = *(int *)(param_1 + 0x240 + param_2 * 4), *(char *)(iVar4 + 0x10) != '\0')) &&
     ((*(byte *)(*(int *)(iVar4 + 4) + 0x20d) & 4) != 0)) {
    if (*(char *)(iVar4 + 0x48) != '\0') {
      glTexParameteri(*(undefined4 *)(iVar4 + 0xc),0x8a48,0x8a4a);
      *(undefined1 *)(iVar4 + 0x48) = 0;
    }
    cVar2 = FUN_04021ee0();
    if (cVar2 == '\0') {
      glEnable(*(undefined4 *)(iVar4 + 0xc));
      (*DAT_0451e660)(*(undefined4 *)(iVar4 + 0xc));
      glDisable(*(undefined4 *)(iVar4 + 0xc));
    }
    else {
      (*DAT_0451e660)();
    }
    *(undefined1 *)(iVar4 + 0x10) = 0;
    return;
  }
  return;
}

// --- direct3dbasetexture9imp_0406db60 @0x0406db60 ---
/* source: direct3dbasetexture9imp */

void direct3dbasetexture9imp_0406db60(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  
  if (0xf < param_2) {
    FUN_0400a810("openGLObjectIndex < 16",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.cpp"
                 ,0x3a3,"void Direct3DBaseTexture9Imp::MakeSureOpenGLTextureExists(INT)");
  }
  iVar2 = *(int *)(param_1 + 0x280);
  while (iVar2 <= param_2) {
    pvVar1 = operator_new(0x50);
                    /* try { // try from 0406db9c to 0406dba0 has its CatchHandler @ 0406dbee */
    OpenGLTexture__OpenGLTexture(pvVar1,*(undefined4 *)(param_1 + 0x1c),param_1);
    iVar2 = *(int *)(param_1 + 0x280);
    *(void **)(param_1 + 0x240 + iVar2 * 4) = pvVar1;
    iVar2 = iVar2 + 1;
    *(int *)(param_1 + 0x280) = iVar2;
  }
  return;
}

