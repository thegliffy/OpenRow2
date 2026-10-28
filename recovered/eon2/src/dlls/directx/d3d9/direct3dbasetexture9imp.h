// Recovered source: eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.h
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- Direct3DDevice9Imp::MakeSureTexturesForDrawAreCurrent @0x0408da20 ---
/* source: direct3dbasetexture9imp, direct3ddevice9imp */

void Direct3DDevice9Imp__MakeSureTexturesForDrawAreCurrent(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_24;
  int local_20;
  
  iVar6 = 0;
  do {
    iVar4 = *(int *)(param_1 + 0x8278 + iVar6 * 4);
    if ((iVar4 == 0) || (*(int *)(*(int *)(param_1 + 0xe9ec) + 0x3c + iVar6 * 4) == -1)) {
      *(undefined4 *)(param_2 + iVar6 * 4) = 0;
    }
    else {
      iVar1 = 0;
      if (*(char *)(param_1 + 0xeb4c) == '\0') {
        iVar5 = 0;
        if (iVar6 != 0) {
          do {
            if ((*(int *)(param_1 + 0x8278 + iVar5 * 4) == iVar4) &&
               (iVar1 = memcmp((void *)(param_1 + 0x7c60 + iVar6 * 0x38),
                               (void *)(param_1 + 0x7c60 + iVar5 * 0x38),0x38), iVar1 == 0)) {
              iVar1 = FUN_0408d740(param_1,iVar4,iVar5,0);
              if (iVar6 != iVar5) goto LAB_0408dae9;
              break;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 != iVar6);
        }
        iVar1 = FUN_0408d740(param_1,iVar4,iVar5,0);
      }
LAB_0408dae9:
      direct3dbasetexture9imp_0406d9b0(iVar4 + 4,iVar1,1);
      if (*(int *)(iVar4 + 0x284) <= iVar1) {
        FUN_0400a810("(INT) mOpenGLTexturesCount > index",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.h"
                     ,0x8c,"OpenGLTexture* Direct3DBaseTexture9Imp::GetOpenGLTexture(INT)");
      }
      iVar4 = *(int *)(iVar4 + 0x244 + iVar1 * 4);
      if (iVar4 == 0) {
        FUN_0400a810(&PTR_DAT_042e85bd,
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                     ,0x24f0,
                     "void Direct3DDevice9Imp::MakeSureTexturesForDrawAreCurrent(OpenGLTexture**)");
      }
      *(int *)(param_2 + iVar6 * 4) = iVar4;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0x10);
  if ((*(int *)(param_1 + 0x82c8) != 0) && (*(char *)(*(int *)(param_1 + 0xe9ec) + 0x80) != '\0')) {
    local_20 = 4;
    local_24 = param_1;
    do {
      iVar4 = 4 - local_20;
      iVar6 = *(int *)(local_24 + 0x82b8);
      if ((iVar6 != 0) && (*(int *)(*(int *)(param_1 + 0xe9ec) + 0x2c + iVar4 * 4) != -1)) {
        if (*(int *)(param_2 + 0x2c + local_20 * 4) != 0) {
          FUN_0402cd10(0xf,"Conflict! Vertex texture using same texture stage as normal texture!");
        }
        iVar1 = 0;
        if (*(char *)(param_1 + 0xeb4c) == '\0') {
          iVar1 = 0x14 - local_20;
          if (*(int *)(param_1 + 0x8278) == iVar6) {
            iVar5 = memcmp((void *)(param_1 + 0x7c60 + iVar1 * 0x38),(void *)(param_1 + 0x7c60),0x38
                          );
            uVar3 = 0;
            if (iVar5 != 0) goto LAB_0408dc13;
LAB_0408de8d:
            iVar1 = FUN_0408d740(param_1,iVar6,uVar3,0);
          }
          else {
LAB_0408dc13:
            if (*(int *)(param_1 + 0x827c) == iVar6) {
              iVar5 = memcmp((void *)(param_1 + 0x7c60 + iVar1 * 0x38),(void *)(param_1 + 0x7c98),
                             0x38);
              uVar3 = 1;
              if (iVar5 == 0) goto LAB_0408de8d;
            }
            if (*(int *)(param_1 + 0x8280) == iVar6) {
              iVar5 = memcmp((void *)(param_1 + 0x7c60 + iVar1 * 0x38),(void *)(param_1 + 0x7cd0),
                             0x38);
              uVar3 = 2;
              if (iVar5 == 0) goto LAB_0408de8d;
            }
            if (*(int *)(param_1 + 0x8284) == iVar6) {
              iVar5 = memcmp((void *)(param_1 + 0x7c60 + iVar1 * 0x38),(void *)(param_1 + 0x7d08),
                             0x38);
              uVar3 = 3;
              if (iVar5 == 0) goto LAB_0408de8d;
            }
            if (*(int *)(param_1 + 0x8288) == iVar6) {
              iVar5 = memcmp((void *)(param_1 + 0x7c60 + iVar1 * 0x38),(void *)(param_1 + 0x7d40),
                             0x38);
              uVar3 = 4;
              if (iVar5 == 0) goto LAB_0408de8d;
            }
            if (*(int *)(param_1 + 0x828c) == iVar6) {
              iVar5 = memcmp((void *)(param_1 + 0x7c60 + iVar1 * 0x38),(void *)(param_1 + 0x7d78),
                             0x38);
              uVar3 = 5;
              if (iVar5 == 0) goto LAB_0408de8d;
            }
            if (*(int *)(param_1 + 0x8290) == iVar6) {
              iVar5 = memcmp((void *)(param_1 + 0x7c60 + iVar1 * 0x38),(void *)(param_1 + 0x7db0),
                             0x38);
              uVar3 = 6;
              if (iVar5 == 0) goto LAB_0408de8d;
            }
            if (*(int *)(param_1 + 0x8294) == iVar6) {
              iVar5 = memcmp((void *)(param_1 + 0x7c60 + iVar1 * 0x38),(void *)(param_1 + 0x7de8),
                             0x38);
              uVar3 = 7;
              if (iVar5 == 0) goto LAB_0408de8d;
            }
            if (*(int *)(param_1 + 0x8298) == iVar6) {
              iVar5 = memcmp((void *)(param_1 + 0x7c60 + iVar1 * 0x38),(void *)(param_1 + 0x7e20),
                             0x38);
              uVar3 = 8;
              if (iVar5 == 0) goto LAB_0408de8d;
            }
            if (*(int *)(param_1 + 0x829c) == iVar6) {
              iVar5 = memcmp((void *)(param_1 + 0x7c60 + iVar1 * 0x38),(void *)(param_1 + 0x7e58),
                             0x38);
              uVar3 = 9;
              if (iVar5 == 0) goto LAB_0408de8d;
            }
            if (*(int *)(param_1 + 0x82a0) == iVar6) {
              iVar5 = memcmp((void *)(param_1 + 0x7c60 + iVar1 * 0x38),(void *)(param_1 + 0x7e90),
                             0x38);
              uVar3 = 10;
              if (iVar5 == 0) goto LAB_0408de8d;
            }
            if (*(int *)(param_1 + 0x82a4) == iVar6) {
              iVar5 = memcmp((void *)(param_1 + 0x7c60 + iVar1 * 0x38),(void *)(param_1 + 0x7ec8),
                             0x38);
              uVar3 = 0xb;
              if (iVar5 == 0) goto LAB_0408de8d;
            }
            if (*(int *)(param_1 + 0x82a8) == iVar6) {
              iVar5 = memcmp((void *)(param_1 + 0x7c60 + iVar1 * 0x38),(void *)(param_1 + 0x7f00),
                             0x38);
              uVar3 = 0xc;
              if (iVar5 == 0) goto LAB_0408de8d;
            }
            if (*(int *)(param_1 + 0x82ac) == iVar6) {
              iVar5 = memcmp((void *)(param_1 + 0x7c60 + iVar1 * 0x38),(void *)(param_1 + 0x7f38),
                             0x38);
              uVar3 = 0xd;
              if (iVar5 == 0) goto LAB_0408de8d;
            }
            if (*(int *)(param_1 + 0x82b0) == iVar6) {
              iVar5 = memcmp((void *)(param_1 + 0x7c60 + iVar1 * 0x38),(void *)(param_1 + 0x7f70),
                             0x38);
              uVar3 = 0xe;
              if (iVar5 == 0) goto LAB_0408de8d;
            }
            if (*(int *)(param_1 + 0x82b4) == iVar6) {
              iVar5 = memcmp((void *)(param_1 + 0x7c60 + iVar1 * 0x38),(void *)(param_1 + 0x7fa8),
                             0x38);
              uVar3 = 0xf;
              if (iVar5 == 0) goto LAB_0408de8d;
            }
            iVar5 = 0;
            if (0 < iVar4) {
              do {
                if ((*(int *)(param_1 + 0x82b8 + iVar5 * 4) == iVar6) &&
                   (iVar2 = memcmp((void *)(param_1 + 0x7c60 + iVar1 * 0x38),
                                   (void *)(param_1 + 0x7c60 + (iVar5 + 0x10) * 0x38),0x38),
                   iVar2 == 0)) {
                  iVar1 = FUN_0408d740(param_1,iVar6,iVar5,1);
                  goto LAB_0408dd40;
                }
                iVar5 = iVar5 + 1;
              } while (iVar5 != iVar4);
            }
            iVar1 = FUN_0408d740(param_1,iVar6,iVar4,1);
          }
        }
LAB_0408dd40:
        direct3dbasetexture9imp_0406d9b0(iVar6 + 4,iVar1,1);
        if (*(int *)(iVar6 + 0x284) <= iVar1) {
          FUN_0400a810("(INT) mOpenGLTexturesCount > index",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.h"
                       ,0x8c,"OpenGLTexture* Direct3DBaseTexture9Imp::GetOpenGLTexture(INT)");
        }
        iVar6 = *(int *)(iVar6 + 0x244 + iVar1 * 4);
        if (iVar6 == 0) {
          FUN_0400a810(&PTR_DAT_042e85bd,
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                       ,0x2536,
                       "void Direct3DDevice9Imp::MakeSureTexturesForDrawAreCurrent(OpenGLTexture**)"
                      );
        }
        *(int *)(param_2 + 0x2c + local_20 * 4) = iVar6;
      }
      local_24 = local_24 + 4;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  return;
}

// --- Direct3DDevice9Imp::OpenGLSide_Clear @0x04085b60 ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* source: direct3dbasetexture9imp, direct3ddevice9imp */

int Direct3DDevice9Imp__OpenGLSide_Clear(int param_1,undefined4 param_2,uint *param_3)

{
  double dVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int local_78;
  uint local_74;
  uint local_4c;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  bVar3 = false;
  uVar14 = *param_3;
  uVar2 = param_3[1];
  if ((uVar14 & 1) != 0) {
    iVar13 = *(int *)(param_1 + 0xc65c);
    bVar3 = false;
    if ((iVar13 != 0) && (*(int *)(iVar13 + 0x70) != 0x4c4c554e)) {
      bVar3 = true;
      local_3c = iVar13;
    }
    iVar13 = *(int *)(param_1 + 0xc660);
    if ((iVar13 != 0) && (*(int *)(iVar13 + 0x70) != 0x4c4c554e)) {
      bVar3 = true;
      local_38 = iVar13;
    }
    iVar13 = *(int *)(param_1 + 0xc664);
    if ((iVar13 != 0) && (*(int *)(iVar13 + 0x70) != 0x4c4c554e)) {
      bVar3 = true;
      local_34 = iVar13;
    }
    iVar13 = *(int *)(param_1 + 0xc668);
    if (((iVar13 != 0) && (*(int *)(iVar13 + 0x70) != 0x4c4c554e)) || (iVar13 = local_30, bVar3)) {
      local_30 = iVar13;
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  }
  bVar16 = false;
  bVar17 = false;
  if (*(int *)(param_1 + 0xc66c) != 0) {
    bVar17 = false;
    if ((uVar14 & 2) != 0) {
      cVar4 = direct3dsurface9imp_040adca0(*(int *)(param_1 + 0xc66c) + 4);
      bVar17 = cVar4 != '\0';
    }
    bVar16 = false;
    if ((uVar14 & 4) != 0) {
      cVar4 = direct3dsurface9imp_040add10(*(int *)(param_1 + 0xc66c) + 4);
      bVar16 = cVar4 != '\0';
    }
  }
  iVar13 = local_34;
  if (bVar3) {
    iVar9 = *(int *)(param_1 + 0xeb48);
    if (((*(char *)(iVar9 + 0x424) != '\x0f') || (*(char *)(iVar9 + 0x425) != '\x0f')) ||
       ((*(char *)(iVar9 + 0x426) != '\x0f' || (*(char *)(iVar9 + 0x427) != '\x0f')))) {
      glColorMask(1,1,1,1);
      *(undefined1 *)(iVar9 + 0x424) = 0xf;
      *(undefined1 *)(iVar9 + 0x425) = 0xf;
      *(undefined1 *)(iVar9 + 0x426) = 0xf;
      *(undefined1 *)(iVar9 + 0x427) = 0xf;
      *(uint *)(param_1 + 0xea04) = *(uint *)(param_1 + 0xea04) | 4;
      iVar9 = *(int *)(param_1 + 0xeb48);
    }
    uVar14 = param_3[2];
    fVar22 = ((float)(uVar14 >> 0x18) + 0.0) / _DAT_042dc5a0;
    fVar18 = (DAT_042dbf34 * 0.0 + (float)(uVar14 & 0xff)) / _DAT_042dc5a0;
    fVar21 = (DAT_042dbf34 * 0.0 + (float)(uVar14 >> 0x10 & 0xff)) / _DAT_042dc5a0;
    fVar20 = (DAT_042dbf34 * 0.0 + (float)(uVar14 >> 8 & 0xff)) / _DAT_042dc5a0;
    local_78 = local_3c;
    if (((fVar21 == *(float *)(iVar9 + 0x4a8)) && (fVar20 == *(float *)(iVar9 + 0x4ac))) &&
       ((fVar18 == *(float *)(iVar9 + 0x4b0) && (fVar22 == *(float *)(iVar9 + 0x4b4))))) {
      if (local_3c != 0) goto LAB_04085df0;
LAB_04086528:
      local_78 = local_38;
      if ((local_38 != 0) || (local_78 = local_34, local_34 != 0)) goto LAB_04085df0;
      local_78 = local_30;
      if (local_30 == 0) {
        FUN_0400a810("firstNonZeroRT",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                     ,0x16f5,"DWORD Direct3DDevice9Imp::OpenGLSide_Clear(DWORD, LPVOID)");
        local_44 = 0;
        iVar13 = 0;
        local_40 = local_30;
      }
      else {
        local_40 = local_34;
        local_44 = local_30;
      }
    }
    else {
      glClearColor(fVar21,fVar20,fVar18,fVar22);
      *(float *)(iVar9 + 0x4a8) = fVar21;
      *(float *)(iVar9 + 0x4ac) = fVar20;
      *(float *)(iVar9 + 0x4b0) = fVar18;
      *(float *)(iVar9 + 0x4b4) = fVar22;
      if (local_3c == 0) goto LAB_04086528;
LAB_04085df0:
      local_40 = local_38;
      local_44 = local_30;
    }
    local_78 = local_78 + 0x70;
    local_74 = 0x4100;
    iVar9 = *(int *)(param_1 + 0xeb48);
    local_4c = 0x4000;
    if (bVar17) goto LAB_04085e1e;
LAB_04085ecd:
    local_48 = 0;
  }
  else {
    if (bVar17) {
      local_78 = *(int *)(param_1 + 0xc66c);
    }
    else {
      if (!bVar16) goto LAB_0408617c;
      local_78 = *(int *)(param_1 + 0xc66c);
    }
    if (local_78 == 0) {
      FUN_0400a810("mOGLDeviceState.CurrentDepthStencil",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                   ,0x16fa,"DWORD Direct3DDevice9Imp::OpenGLSide_Clear(DWORD, LPVOID)");
      local_78 = *(int *)(param_1 + 0xc66c);
    }
    local_78 = local_78 + 0x70;
    local_44 = local_30;
    local_74 = 0x100;
    local_40 = local_38;
    local_4c = 0;
    iVar9 = *(int *)(param_1 + 0xeb48);
    if (!bVar17) goto LAB_04085ecd;
LAB_04085e1e:
    if (*(char *)(iVar9 + 0x42e) != '\x01') {
      glDepthMask(1);
      *(undefined1 *)(iVar9 + 0x42e) = 1;
      iVar9 = *(int *)(param_1 + 0xeb48);
    }
    dVar19 = (double)(float)param_3[3];
    dVar1 = *(double *)(iVar9 + 0x4b8);
    *(uint *)(param_1 + 0xea04) = *(uint *)(param_1 + 0xea04) & 0xffffffef | 8;
    if (dVar19 != dVar1) {
      (*DAT_0451eec0)(dVar19);
      *(double *)(iVar9 + 0x4b8) = dVar19;
      iVar9 = *(int *)(param_1 + 0xeb48);
    }
    local_48 = *(undefined4 *)(param_1 + 0xc66c);
    local_4c = local_74;
  }
  uVar5 = 0;
  if (bVar16) {
    if (*(int *)(iVar9 + 0x430) != -1) {
      glStencilMask(0xffffffff);
      cVar4 = FUN_04021f90();
      if (cVar4 != '\0') {
        (*DAT_0451d648)(0x405);
        glStencilMask(0xffffffff);
        (*DAT_0451d648)(0x404);
      }
      *(undefined4 *)(iVar9 + 0x430) = 0xffffffff;
      iVar9 = *(int *)(param_1 + 0xeb48);
    }
    *(uint *)(param_1 + 0xea04) = *(uint *)(param_1 + 0xea04) | 8;
    uVar14 = param_3[4];
    if (uVar14 != *(uint *)(iVar9 + 0x4c0)) {
      glClearStencil(uVar14);
      *(uint *)(iVar9 + 0x4c0) = uVar14;
      iVar9 = *(int *)(param_1 + 0xeb48);
    }
    local_4c = local_4c | 0x400;
    uVar5 = *(undefined4 *)(param_1 + 0xc66c);
  }
  FramebufferCache__GetFramebufferHash
            (iVar9 + 0x1f8,local_3c,local_40,iVar13,local_44,local_48,uVar5);
  local_48 = 0;
  puVar11 = param_3;
  if (param_3[1] == 0) {
    iVar13 = *(int *)(param_1 + 0xe9bc);
    local_2c = 0;
    local_28 = 0;
    iVar9 = *(int *)(param_1 + 0xe9c0);
    local_24 = 0;
    local_20 = 0;
    if (iVar13 == 0) {
      if (iVar9 != 0) {
        local_40 = *(int *)(param_1 + 0xe9c4);
        iVar6 = *(int *)(param_1 + 0xe9c8);
        goto LAB_04085fde;
      }
      local_40 = *(int *)(param_1 + 0xe9c4);
      if (local_40 != *(int *)(local_78 + 0x18)) {
        iVar6 = *(int *)(param_1 + 0xe9c8);
        goto LAB_04085fde;
      }
      iVar6 = *(int *)(param_1 + 0xe9c8);
      if (iVar6 != *(int *)(local_78 + 0x1c)) goto LAB_04085fde;
      iVar13 = *(int *)(param_1 + 0xeb48);
      uVar5 = 1;
      if (*(char *)(iVar13 + 0xa8b) != '\0') {
        glDisable(0xc11);
        *(undefined1 *)(iVar13 + 0xa8b) = 0;
      }
    }
    else {
      local_40 = *(int *)(param_1 + 0xe9c4);
      iVar6 = *(int *)(param_1 + 0xe9c8);
LAB_04085fde:
      iVar12 = *(int *)(param_1 + 0xeb48);
      iVar10 = 0;
      if (-1 < local_40) {
        iVar10 = local_40;
      }
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      if ((((iVar13 != *(int *)(iVar12 + 0x434)) || (iVar9 != *(int *)(iVar12 + 0x438))) ||
          (*(int *)(iVar12 + 0x43c) != iVar10)) || (iVar6 != *(int *)(iVar12 + 0x440))) {
        glScissor(iVar13,iVar9,iVar10,iVar6);
        *(int *)(iVar12 + 0x438) = iVar9;
        *(int *)(iVar12 + 0x434) = iVar13;
        *(int *)(iVar12 + 0x440) = iVar6;
        *(int *)(iVar12 + 0x43c) = iVar10;
        iVar12 = *(int *)(param_1 + 0xeb48);
      }
      if (*(char *)(iVar12 + 0xa8b) != '\x01') {
        glEnable(0xc11);
        *(undefined1 *)(iVar12 + 0xa8b) = 1;
      }
      local_2c = *(uint *)(param_1 + 0xe9bc);
      uVar5 = 0;
      local_28 = *(uint *)(param_1 + 0xe9c0);
      local_24 = local_2c + *(int *)(param_1 + 0xe9c4);
      local_20 = *(int *)(param_1 + 0xe9c8) + local_28;
    }
    glClear(local_4c);
    if (bVar3) {
      if (local_3c != 0) {
        direct3dsurface9imp_040b0a40(local_3c + 4,uVar5,&local_2c);
      }
      if (local_38 != 0) {
        direct3dsurface9imp_040b0a40(local_38 + 4,uVar5,&local_2c);
      }
      if (local_34 != 0) {
        direct3dsurface9imp_040b0a40(local_34 + 4,uVar5,&local_2c);
      }
      if (local_30 != 0) {
        direct3dsurface9imp_040b0a40(local_30 + 4,uVar5,&local_2c);
      }
    }
    if ((*(int *)(param_1 + 0xc66c) != 0) && ((bVar17 || (bVar16)))) {
      direct3dsurface9imp_040b0a40(*(int *)(param_1 + 0xc66c) + 4,uVar5,&local_2c);
    }
  }
  else {
    do {
      uVar14 = *(uint *)(param_1 + 0xe9bc);
      uVar15 = puVar11[5];
      if ((int)puVar11[5] < (int)uVar14) {
        uVar15 = uVar14;
      }
      uVar8 = *(uint *)(param_1 + 0xe9c0);
      uVar7 = puVar11[6];
      if ((int)puVar11[6] < (int)uVar8) {
        uVar7 = uVar8;
      }
      uVar14 = uVar14 + *(int *)(param_1 + 0xe9c4);
      local_24 = puVar11[7];
      if ((int)uVar14 < (int)puVar11[7]) {
        local_24 = uVar14;
      }
      uVar8 = uVar8 + *(int *)(param_1 + 0xe9c8);
      local_20 = puVar11[8];
      if ((int)uVar8 < (int)puVar11[8]) {
        local_20 = uVar8;
      }
      local_2c = uVar15;
      local_28 = uVar7;
      if ((((uVar15 == 0) && (uVar7 == 0)) && (*(uint *)(local_78 + 0x18) == local_24)) &&
         (*(uint *)(local_78 + 0x1c) == local_20)) {
        iVar13 = *(int *)(param_1 + 0xeb48);
        uVar5 = 1;
        if (*(char *)(iVar13 + 0xa8b) != '\0') {
          glDisable(0xc11);
          *(undefined1 *)(iVar13 + 0xa8b) = 0;
        }
      }
      else {
        iVar13 = *(int *)(param_1 + 0xeb48);
        iVar9 = 0;
        if (-1 < (int)(local_24 - uVar15)) {
          iVar9 = local_24 - uVar15;
        }
        iVar6 = 0;
        if (-1 < (int)(local_20 - uVar7)) {
          iVar6 = local_20 - uVar7;
        }
        if (((*(uint *)(iVar13 + 0x434) != uVar15) || (*(uint *)(iVar13 + 0x438) != uVar7)) ||
           ((iVar9 != *(int *)(iVar13 + 0x43c) || (iVar6 != *(int *)(iVar13 + 0x440))))) {
          glScissor(uVar15,uVar7,iVar9,iVar6);
          *(uint *)(iVar13 + 0x434) = uVar15;
          *(uint *)(iVar13 + 0x438) = uVar7;
          *(int *)(iVar13 + 0x440) = iVar6;
          *(int *)(iVar13 + 0x43c) = iVar9;
          iVar13 = *(int *)(param_1 + 0xeb48);
        }
        uVar5 = 0;
        if (*(char *)(iVar13 + 0xa8b) != '\x01') {
          glEnable(0xc11);
          *(undefined1 *)(iVar13 + 0xa8b) = 1;
        }
      }
      glClear();
      if (bVar3) {
        if (local_3c == 0) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        do {
          direct3dsurface9imp_040b0a40(local_3c + 4,uVar5,&local_2c);
        } while( true );
      }
      if ((*(int *)(param_1 + 0xc66c) != 0) && ((bVar17 || (bVar16)))) {
        direct3dsurface9imp_040b0a40(*(int *)(param_1 + 0xc66c) + 4,uVar5,&local_2c);
      }
      local_48 = local_48 + 1;
      puVar11 = puVar11 + 4;
    } while (local_48 < param_3[1]);
  }
  cVar4 = FUN_04021f10();
  if (((cVar4 != '\0') && (param_3[2] == 0xff808080)) &&
     ((*param_3 == 5 && ((local_3c != 0 && (iVar13 = *(int *)(local_3c + 0x94), iVar13 != 0)))))) {
    if (*(int *)(iVar13 + 0x284) < 1) {
      FUN_0400a810("(INT) mOpenGLTexturesCount > index",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.h"
                   ,0x8c,"OpenGLTexture* Direct3DBaseTexture9Imp::GetOpenGLTexture(INT)");
    }
    DAT_04468c38 = *(undefined4 *)(*(int *)(iVar13 + 0x244) + 8);
  }
  OpenGLDebugEvent(2,"Clear()");
LAB_0408617c:
  return uVar2 * 0x10 + 0x14;
}

// --- Direct3DDevice9Imp::OpenGLSide_CopyRects_ScreenSurfaceToTexture @0x04082f20 ---
/* source: direct3dbasetexture9imp, direct3ddevice9imp */

int Direct3DDevice9Imp__OpenGLSide_CopyRects_ScreenSurfaceToTexture
              (int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int **ppiVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int aiStack_7c [4];
  int *local_6c;
  int *local_68;
  int *local_64;
  char *local_60;
  int *local_5c;
  char *local_58;
  int local_54;
  int local_50;
  int *local_44;
  int local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  ppiVar7 = &local_6c;
  local_34 = param_3 + 7;
  local_40 = param_3[6] * 0x18 + 0x1c;
  local_3c = local_34 + param_3[6] * 4;
  piVar4 = (int *)param_3[1];
  local_38 = piVar4 + 1;
  if (*(int *)(piVar4[0x25] + 0x228) != 1) {
    local_60 = 
    "DWORD Direct3DDevice9Imp::OpenGLSide_CopyRects_ScreenSurfaceToTexture(DWORD, LPVOID)";
    local_64 = (int *)0x102f;
    local_68 = (int *)0x42f002c;
    local_6c = (int *)0x42f16dc;
    aiStack_7c[3] = 0x4082f8f;
    local_44 = piVar4;
    FUN_0400a810();
    piVar4 = local_44;
  }
  if (*(char *)(param_1 + 0xeb50) == '\0') {
    local_64 = (int *)0x0;
    local_68 = (int *)0x8d40;
    local_6c = *(int **)(param_1 + 0xeb48);
    aiStack_7c[3] = 0x4083419;
    local_44 = piVar4;
    OpenGLContextCache____glewBindFramebuffer();
    iVar8 = *(int *)(param_1 + 0xeb48);
    if (*(int *)(iVar8 + 0x350) != 0x405) {
      local_6c = (int *)0x405;
      aiStack_7c[3] = 0x408343b;
      (*DAT_0451eed4)();
      *(undefined4 *)(iVar8 + 0x350) = 0x405;
      iVar8 = *(int *)(param_1 + 0xeb48);
    }
    if ((*(char *)(iVar8 + 0x34c) == '\0') || (*(int *)(iVar8 + 0x33c) != 0x405)) {
      local_6c = (int *)0x405;
      aiStack_7c[3] = 0x4083473;
      (*DAT_0451eed0)();
      *(undefined1 *)(iVar8 + 0x34c) = 1;
      *(undefined4 *)(iVar8 + 0x33c) = 0x405;
      *(undefined4 *)(iVar8 + 0x340) = 0;
      *(undefined4 *)(iVar8 + 0x344) = 0;
      *(undefined4 *)(iVar8 + 0x348) = 0;
    }
    iVar8 = local_44[0x25];
    if (*(int *)(iVar8 + 0x284) < 1) {
      local_60 = "OpenGLTexture* Direct3DBaseTexture9Imp::GetOpenGLTexture(INT)";
      local_64 = (int *)0x8c;
      local_68 = (int *)0x42f1724;
      local_6c = (int *)0x42f1784;
      aiStack_7c[3] = 0x40834d9;
      FUN_0400a810();
    }
    local_68 = *(int **)(param_1 + 0xeb48);
    local_6c = *(int **)(iVar8 + 0x244);
    aiStack_7c[3] = 0x40834f1;
    FUN_0406d620();
    iVar8 = *(int *)(param_1 + 0xeb48);
    if ((((*(char *)(iVar8 + 0x424) != '\x0f') || (*(char *)(iVar8 + 0x425) != '\x0f')) ||
        (*(char *)(iVar8 + 0x426) != '\x0f')) || (*(char *)(iVar8 + 0x427) != '\x0f')) {
      local_60 = (char *)0x1;
      local_64 = (int *)0x1;
      local_68 = (int *)0x1;
      local_6c = (int *)0x1;
      aiStack_7c[3] = 0x4083531;
      glColorMask();
      *(undefined1 *)(iVar8 + 0x424) = 0xf;
      *(undefined1 *)(iVar8 + 0x425) = 0xf;
      *(undefined1 *)(iVar8 + 0x426) = 0xf;
      *(undefined1 *)(iVar8 + 0x427) = 0xf;
      *(uint *)(param_1 + 0xea04) = *(uint *)(param_1 + 0xea04) | 4;
    }
    if (local_3c != (int *)0x0) {
      if (param_3[6] == 0) goto LAB_04083677;
      local_30 = param_3;
      uVar10 = 0;
      piVar4 = local_34;
      piVar5 = local_3c;
      do {
        local_58 = (char *)piVar4[1];
        uVar10 = uVar10 + 1;
        local_5c = (int *)*piVar4;
        local_50 = piVar4[3] - (int)local_58;
        piVar9 = piVar4 + 2;
        piVar4 = piVar4 + 4;
        local_54 = *piVar9 - (int)local_5c;
        local_60 = (char *)piVar5[1];
        local_64 = (int *)*piVar5;
        local_68 = (int *)0x0;
        piVar5 = piVar5 + 2;
        local_6c = (int *)0xde1;
        aiStack_7c[3] = 0x40835c9;
        glCopyTexSubImage2D();
        uVar6 = local_30[6];
        param_3 = local_30;
      } while (uVar10 < uVar6);
      goto LAB_040835d5;
    }
    uVar10 = 0;
    piVar4 = local_34;
    if (param_3[6] == 0) goto LAB_04083677;
    do {
      local_60 = (char *)piVar4[1];
      uVar10 = uVar10 + 1;
      local_64 = (int *)*piVar4;
      local_50 = piVar4[3] - (int)local_60;
      local_54 = piVar4[2] - (int)local_64;
      local_68 = (int *)0x0;
      local_6c = (int *)0xde1;
      aiStack_7c[3] = 0x4083739;
      local_5c = local_64;
      local_58 = local_60;
      glCopyTexSubImage2D();
      uVar6 = param_3[6];
      piVar4 = piVar4 + 4;
    } while (uVar10 < uVar6);
  }
  else {
    iVar8 = *(int *)(param_1 + 0xeb48);
    if (*(char *)(iVar8 + 0xa8b) != '\0') {
      local_6c = (int *)0xc11;
      aiStack_7c[3] = 0x4082fba;
      glDisable();
      *(undefined1 *)(iVar8 + 0xa8b) = 0;
      iVar8 = *(int *)(param_1 + 0xeb48);
    }
    local_68 = (int *)param_3[2];
    if (local_68 != (int *)*param_3) {
      local_6c = (int *)(iVar8 + 0x1f8);
      local_54 = 0;
      local_58 = (char *)0x0;
      local_5c = (int *)0x0;
      local_60 = (char *)0x0;
      local_64 = (int *)0x0;
      aiStack_7c[3] = 0x408300c;
      puVar3 = (undefined4 *)FramebufferCache__GetFramebufferHash();
      local_64 = (int *)*puVar3;
      local_68 = (int *)0x8ca9;
      local_6c = *(int **)(param_1 + 0xeb48);
      aiStack_7c[3] = 0x4083028;
      OpenGLContextCache____glewBindFramebuffer();
      piVar4 = *(int **)(param_1 + 0xeb48);
      if (((char)piVar4[0xd3] == '\0') || (piVar4[0xcf] != 0x8ce0)) {
        local_6c = (int *)0x8ce0;
        aiStack_7c[3] = 0x4083050;
        (*DAT_0451eed0)();
        *(undefined1 *)(piVar4 + 0xd3) = 1;
        piVar4[0xcf] = 0x8ce0;
        piVar4[0xd0] = 0;
        piVar4[0xd1] = 0;
        piVar4[0xd2] = 0;
        piVar4 = *(int **)(param_1 + 0xeb48);
      }
      local_64 = (int *)0x0;
      local_68 = (int *)0x8ca8;
      aiStack_7c[3] = 0x408309d;
      local_6c = piVar4;
      OpenGLContextCache____glewBindFramebuffer();
      iVar8 = *(int *)(param_1 + 0xeb48);
      if (*(int *)(iVar8 + 0x350) != 0x405) {
        local_6c = (int *)0x405;
        aiStack_7c[3] = 0x40830bc;
        (*DAT_0451eed4)();
        *(undefined4 *)(iVar8 + 0x350) = 0x405;
        iVar8 = *(int *)(param_1 + 0xeb48);
      }
      if (*(char *)(iVar8 + 0xa8b) != '\0') {
        local_6c = (int *)0xc11;
        aiStack_7c[3] = 0x40830e1;
        glDisable();
        *(undefined1 *)(iVar8 + 0xa8b) = 0;
      }
      local_6c = (int *)0x0;
      aiStack_7c[3] = 0x40830fd;
      FUN_0406f690();
      local_68 = (int *)param_3[2];
      iVar8 = *(int *)(param_1 + 0xeb48);
    }
    local_6c = (int *)(iVar8 + 0x1f8);
    local_54 = 0;
    local_58 = (char *)0x0;
    local_5c = (int *)0x0;
    local_60 = (char *)0x0;
    local_64 = (int *)0x0;
    aiStack_7c[3] = 0x4083140;
    piVar4 = (int *)FramebufferCache__GetFramebufferHash();
    piVar4 = (int *)*piVar4;
    local_54 = 0;
    local_58 = (char *)0x0;
    local_5c = (int *)0x0;
    local_60 = (char *)0x0;
    local_64 = (int *)0x0;
    local_68 = (int *)param_3[3];
    local_6c = (int *)(*(int *)(param_1 + 0xeb48) + 0x1f8);
    aiStack_7c[3] = 0x4083184;
    local_64 = (int *)FramebufferCache__GetFramebufferHash();
    local_64 = (int *)*local_64;
    local_68 = (int *)0x8ca9;
    local_6c = *(int **)(param_1 + 0xeb48);
    aiStack_7c[3] = 0x40831a3;
    local_30 = local_64;
    OpenGLContextCache____glewBindFramebuffer();
    piVar5 = *(int **)(param_1 + 0xeb48);
    if (((char)piVar5[0xd3] == '\0') || (piVar5[0xcf] != 0x8ce0)) {
      local_6c = (int *)0x8ce0;
      aiStack_7c[3] = 0x40831ce;
      local_44 = piVar5;
      (*DAT_0451eed0)();
      local_44[0xcf] = 0x8ce0;
      local_44[0xd0] = 0;
      local_44[0xd1] = 0;
      local_44[0xd2] = 0;
      *(undefined1 *)(local_44 + 0xd3) = 1;
      piVar5 = *(int **)(param_1 + 0xeb48);
    }
    piVar9 = (int *)0x8ce0;
    local_68 = (int *)0x8ca8;
    aiStack_7c[3] = 0x408321f;
    local_6c = piVar5;
    local_64 = piVar4;
    OpenGLContextCache____glewBindFramebuffer();
    if (param_3[2] == *param_3) {
      piVar9 = (int *)0x405;
    }
    if (piVar9 != (int *)(*(int **)(param_1 + 0xeb48))[0xd4]) {
      aiStack_7c[3] = 0x4083246;
      local_6c = piVar9;
      local_44 = *(int **)(param_1 + 0xeb48);
      (*DAT_0451eed4)();
      local_44[0xd4] = (int)piVar9;
    }
    local_6c = (int *)0x1;
    aiStack_7c[3] = 0x4083264;
    FUN_0406f690();
    if (param_3[3] != param_3[1]) {
      local_54 = 0;
      local_58 = (char *)0x0;
      local_5c = (int *)0x0;
      local_60 = (char *)0x0;
      local_64 = (int *)0x0;
      local_6c = (int *)(*(int *)(param_1 + 0xeb48) + 0x1f8);
      aiStack_7c[3] = 0x40832af;
      local_68 = (int *)param_3[1];
      puVar3 = (undefined4 *)FramebufferCache__GetFramebufferHash();
      local_64 = (int *)*puVar3;
      local_68 = (int *)0x8ca9;
      local_6c = *(int **)(param_1 + 0xeb48);
      aiStack_7c[3] = 0x40832cb;
      OpenGLContextCache____glewBindFramebuffer();
      piVar4 = *(int **)(param_1 + 0xeb48);
      if (((char)piVar4[0xd3] == '\0') || (piVar4[0xcf] != 0x8ce0)) {
        local_6c = (int *)0x8ce0;
        aiStack_7c[3] = 0x40832f3;
        (*DAT_0451eed0)();
        *(undefined1 *)(piVar4 + 0xd3) = 1;
        piVar4[0xcf] = 0x8ce0;
        piVar4[0xd0] = 0;
        piVar4[0xd1] = 0;
        piVar4[0xd2] = 0;
        piVar4 = *(int **)(param_1 + 0xeb48);
      }
      local_68 = (int *)0x8ca8;
      local_64 = local_30;
      aiStack_7c[3] = 0x408333f;
      local_6c = piVar4;
      OpenGLContextCache____glewBindFramebuffer();
      iVar8 = *(int *)(param_1 + 0xeb48);
      if (*(int *)(iVar8 + 0x350) != 0x8ce0) {
        local_6c = (int *)0x8ce0;
        aiStack_7c[3] = 0x408335e;
        (*DAT_0451eed4)();
        *(undefined4 *)(iVar8 + 0x350) = 0x8ce0;
      }
      local_6c = (int *)0x0;
      aiStack_7c[3] = 0x408337d;
      FUN_0406f690();
    }
    uVar6 = param_3[6];
    if (local_3c != (int *)0x0) {
LAB_040835d5:
      if (uVar6 != 0) {
        local_30 = (int *)0x0;
        piVar4 = local_34;
        piVar5 = local_3c;
        local_34 = param_3;
        do {
          local_3c = (int *)0x0;
          piVar9 = piVar4 + 3;
          local_2c = *piVar5;
          piVar1 = piVar4 + 1;
          if (((local_2c == 0) && (local_3c = (int *)0x0, piVar5[1] == 0)) &&
             (local_34[4] == piVar4[2] - *piVar4)) {
            local_3c = (int *)(uint)(*piVar9 - *piVar1 == local_34[5]);
          }
          local_24 = local_2c + (piVar4[2] - *piVar4);
          local_28 = piVar5[1];
          piVar4 = piVar4 + 4;
          piVar5 = piVar5 + 2;
          local_6c = local_38;
          local_20 = (*piVar9 - *piVar1) + local_28;
          local_64 = &local_2c;
          local_68 = local_3c;
          aiStack_7c[3] = 0x4083662;
          direct3dsurface9imp_040b0a40();
          local_30 = (int *)((int)local_30 + 1);
          param_3 = local_34;
        } while (local_30 < (int *)local_34[6]);
      }
      goto LAB_04083677;
    }
  }
  uVar10 = 0;
  piVar4 = local_34;
  if (uVar6 != 0) {
    do {
      local_30 = (int *)piVar4[3];
      local_68 = (int *)0x0;
      if (((*piVar4 == 0) && (piVar4[1] == 0)) && (piVar4[2] == param_3[4])) {
        local_68 = (int *)(uint)(local_30 == (int *)param_3[5]);
      }
      uVar10 = uVar10 + 1;
      local_6c = local_38;
      aiStack_7c[3] = 0x40833e9;
      local_64 = piVar4;
      direct3dsurface9imp_040b0a40();
      piVar4 = piVar4 + 4;
    } while (uVar10 < (uint)param_3[6]);
  }
LAB_04083677:
  piVar4 = (int *)param_3[2];
  if (piVar4 != (int *)*param_3) {
    aiStack_7c[3] = 0x4083686;
    local_6c = piVar4;
    (**(code **)(*piVar4 + 8))();
    ppiVar7 = (int **)(aiStack_7c + 3);
  }
  piVar4 = (int *)param_3[3];
  if (piVar4 != (int *)param_3[1]) {
    iVar8 = *piVar4;
    *ppiVar7 = piVar4;
    pcVar2 = *(code **)(iVar8 + 8);
    ppiVar7[-1] = (int *)0x4083699;
    (*pcVar2)();
    ppiVar7 = ppiVar7 + -1;
  }
  iVar8 = *(int *)*param_3;
  *ppiVar7 = (int *)*param_3;
  pcVar2 = *(code **)(iVar8 + 8);
  ppiVar7[-1] = (int *)0x40836a6;
  (*pcVar2)();
  iVar8 = *(int *)param_3[1];
  ppiVar7[-1] = (int *)param_3[1];
  pcVar2 = *(code **)(iVar8 + 8);
  ppiVar7[-2] = (int *)0x40836b4;
  (*pcVar2)();
  return local_40;
}

// --- Direct3DDevice9Imp::OpenGLSide_Present @0x0409d7f0 ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* source: direct3dbasetexture9imp, direct3ddevice9imp */

undefined4 Direct3DDevice9Imp__OpenGLSide_Present(int ******param_1)

{
  int ***pppiVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int *****pppppiVar5;
  int ******ppppppiVar6;
  int *****pppppiVar7;
  undefined4 *puVar8;
  int *****pppppiVar9;
  int iVar10;
  char *pcVar11;
  int ****ppppiVar12;
  int ******ppppppiVar13;
  int iVar14;
  int ******ppppppiVar15;
  undefined4 uStack_ec;
  int *****local_e8;
  int *****local_e4;
  int *****local_e0;
  int *****local_dc;
  int *****local_d8;
  int *****local_d4;
  int *****pppppiStack_d0;
  int *****local_cc;
  int ***local_c8;
  int ***local_c4;
  int ***local_c0;
  uint local_bc;
  undefined4 local_b8;
  int *****local_ac;
  int *****local_a8;
  int *****local_a4;
  int *****local_a0;
  int *****local_9c;
  int ***local_98;
  int *****local_94;
  int *****local_90;
  int ****local_88;
  int local_84;
  int *****local_80;
  int ***local_7c;
  int *****local_48;
  int *****local_44;
  int *****local_40;
  int *****local_3c;
  int *****local_38;
  int *****local_34;
  int local_30;
  int local_2c;
  int *****local_28;
  int *****local_24;
  int ****local_20 [4];
  
  local_dc = param_1[0x3ad2];
  local_e0 = (int *****)0x409d80d;
  FUN_040c6c50();
  local_dc = (int *****)param_1;
  local_e0 = (int *****)0x409d815;
  Direct3DDevice9Imp__FrameRenderStart();
  local_d8 = (int *****)&local_44;
  local_dc = (int *****)&local_48;
  local_e0 = (int *****)0x409d827;
  FUN_0402d440();
  local_d8 = (int *****)&local_3c;
  local_dc = (int *****)&local_40;
  local_e0 = (int *****)0x409d839;
  FUN_0402d560();
  local_dc = (int *****)0x0;
  local_40 = (int *****)((int)local_40 + (int)local_48);
  local_3c = (int *****)((int)local_3c + (int)local_44);
  local_d4 = (int *****)&local_24;
  local_d8 = (int *****)&local_28;
  local_e0 = (int *****)0x409d85f;
  MainGameWindow_GetDisplayDimensions();
  pppppiVar5 = param_1[0x3194];
  if (pppppiVar5 == (int *****)0x0) {
    pppppiStack_d0 = (int *****)0x42f4680;
    local_d4 = (int *****)0xa9a;
    local_d8 = (int *****)0x42f002c;
    local_dc = (int *****)0x42f3078;
    local_e0 = (int *****)0x409e6db;
    FUN_0400a810();
    pppppiVar5 = param_1[0x3194];
  }
  ppppiVar12 = pppppiVar5[0x25];
  if (ppppiVar12 == (int ****)0x0) {
    pppppiVar9 = param_1[0x3ad2];
    pppppiVar7 = pppppiVar5;
    if (*(char *)((int)pppppiVar9 + 0xa8b) != '\0') {
      local_dc = (int *****)0xc11;
      local_e0 = (int *****)0x409e10d;
      glDisable();
      *(undefined1 *)((int)pppppiVar9 + 0xa8b) = 0;
      pppppiVar7 = param_1[0x3194];
      pppppiVar9 = param_1[0x3ad2];
    }
    local_dc = pppppiVar9 + 0x7e;
    local_c4 = (int ***)0x0;
    local_c8 = (int ***)0x0;
    local_cc = (int *****)0x0;
    pppppiStack_d0 = (int *****)0x0;
    local_d4 = (int *****)0x0;
    local_e0 = (int *****)0x409e15a;
    local_d8 = pppppiVar7;
    puVar8 = (undefined4 *)FramebufferCache__GetFramebufferHash();
    local_d4 = (int *****)*puVar8;
    local_d8 = (int *****)0x8ca8;
    local_dc = param_1[0x3ad2];
    local_e0 = (int *****)0x409e176;
    OpenGLContextCache____glewBindFramebuffer();
    pppppiVar9 = param_1[0x3ad2];
    if (pppppiVar9[0xd4] != (int ****)0x8ce0) {
      local_dc = (int *****)0x8ce0;
      local_e0 = (int *****)0x409e195;
      (*DAT_0451eed4)();
      pppppiVar9[0xd4] = (int ****)0x8ce0;
      pppppiVar9 = param_1[0x3ad2];
    }
    local_d4 = param_1[0x3196];
    local_d8 = (int *****)0x8ca9;
    local_e0 = (int *****)0x409e1bf;
    local_dc = pppppiVar9;
    OpenGLContextCache____glewBindFramebuffer();
    pppppiVar9 = param_1[0x3ad2];
    if ((*(char *)(pppppiVar9 + 0xd3) == '\0') || (pppppiVar9[0xcf] != (int ****)0x8ce0)) {
      local_dc = (int *****)0x8ce0;
      local_e0 = (int *****)0x409e1e7;
      (*DAT_0451eed0)();
      *(undefined1 *)(pppppiVar9 + 0xd3) = 1;
      pppppiVar9[0xcf] = (int ****)0x8ce0;
      pppppiVar9[0xd0] = (int ****)0x0;
      pppppiVar9[0xd1] = (int ****)0x0;
      pppppiVar9[0xd2] = (int ****)0x0;
    }
    pppppiStack_d0 = (int *****)pppppiVar5[0x23];
    local_d4 = (int *****)pppppiVar5[0x22];
    local_b8 = 0x2600;
    local_bc = 0x4000;
    local_c8 = (int ***)0x0;
    local_cc = (int *****)0x0;
    local_d8 = (int *****)0x0;
    local_dc = (int *****)0x0;
    local_e0 = (int *****)0x409e267;
    local_c4 = (int ***)local_d4;
    local_c0 = (int ***)pppppiStack_d0;
    (*DAT_0451e68c)();
    pppppiVar9 = param_1[0x3ad2];
    if (pppppiVar9[0x8d] != (int ****)0x84c0) {
      local_dc = (int *****)0x84c0;
      local_e0 = (int *****)0x409e286;
      (*DAT_0451eeac)();
      pppppiVar9[0x8d] = (int ****)0x84c0;
      pppppiVar9 = param_1[0x3ad2];
    }
    local_d4 = param_1[0x3195];
    local_d8 = (int *****)0xde1;
    local_e0 = (int *****)0x409e2b0;
    local_dc = pppppiVar9;
    FUN_040c6ee0();
    local_84 = 0;
    local_88 = (int ****)0x0;
    ppppppiVar6 = (int ******)pppppiVar5[0x22];
    ppppiVar12 = pppppiVar5[0x23];
    local_80 = (int *****)ppppppiVar6;
    local_7c = (int ***)ppppiVar12;
    if (DAT_0451ca41 != '\0') {
      local_d4 = (int *****)0x1;
      if (ppppppiVar6 == (int ******)((int)local_40 - (int)local_48)) {
        local_d4 = (int *****)(uint)(ppppiVar12 != (int ****)((int)local_3c - (int)local_44));
      }
      local_dc = (int *****)(param_1 + 0x3ae7);
      local_d8 = (int *****)0x0;
      local_e0 = (int *****)0x409e309;
      pppppiVar9 = (int *****)FUN_040e4f70();
      if (pppppiVar9 != (int *****)param_1[0x3ad2][0xae]) {
        local_dc = (int *****)0x0;
        local_e0 = (int *****)0x409e330;
        local_d8 = pppppiVar9;
        local_a0 = param_1[0x3ad2];
        (*DAT_0451e3c4)();
        local_a0[0xae] = (int ****)pppppiVar9;
      }
      ppppiVar12 = pppppiVar5[0x23];
      ppppppiVar6 = (int ******)pppppiVar5[0x22];
    }
    local_bc = 0;
    local_cc = (int *****)ppppppiVar6;
    local_c8 = (int ***)ppppiVar12;
  }
  else {
    if ((int)ppppiVar12[0xa1] < 1) {
      pppppiStack_d0 = (int *****)0x42f46c0;
      local_d4 = (int *****)0x8c;
      local_d8 = (int *****)0x42f1724;
      local_dc = (int *****)0x42f1784;
      local_e0 = (int *****)0x409d8a9;
      FUN_0400a810();
    }
    local_dc = (int *****)ppppiVar12[0x91];
    local_d8 = param_1[0x3ad2];
    local_e0 = (int *****)0x409d8c7;
    local_a4 = local_dc;
    FUN_0406d620();
    local_88 = (int ****)0x0;
    local_84 = 0;
    local_94 = (int *****)0x1;
    local_80 = (int *****)pppppiVar5[0x22];
    local_90 = (int *****)pppppiVar5[0x23];
    if ((int ******)local_80 == (int ******)((int)local_40 - (int)local_48)) {
      local_94 = (int *****)(uint)(local_90 != (int *****)((int)local_3c - (int)local_44));
    }
    local_7c = (int ***)local_90;
    if (DAT_0451ca41 == '\0') {
      local_dc = local_a4;
      local_d8 = local_94;
      local_e0 = (int *****)0x409d93b;
      FUN_0406d530();
    }
    else {
      local_dc = local_a4;
      local_e0 = (int *****)0x409dbb8;
      uVar4 = FUN_0406d510();
      local_d8 = (int *****)(uVar4 & 0xff);
      local_dc = (int *****)(param_1 + 0x3ae7);
      local_d4 = local_94;
      local_e0 = (int *****)0x409dbd7;
      local_d8 = (int *****)FUN_040e4f70();
      if (local_d8 != (int *****)param_1[0x3ad2][0xae]) {
        local_dc = (int *****)0x0;
        local_e0 = (int *****)0x409dc06;
        local_a4 = param_1[0x3ad2];
        local_a0 = local_d8;
        (*DAT_0451e3c4)();
        local_a4[0xae] = (int ****)local_a0;
      }
    }
    local_bc = (uint)(ppppiVar12[0x86] == (int ***)0x140b || ppppiVar12[0x86] == (int ***)0x1406);
    local_cc = (int *****)pppppiVar5[0x22];
    local_c8 = (int ***)pppppiVar5[0x23];
  }
  pppppiStack_d0 = (int *****)&local_48;
  local_c0 = (int ***)0x0;
  local_c4 = (int ***)0x0;
  local_d8 = (int *****)0x0;
  local_dc = (int *****)param_1;
  local_e0 = (int *****)0x409d9a1;
  local_d4 = &local_88;
  glDrawArrays();
  param_1[0x3a76] = (int *****)0x1;
  local_90 = (int *****)CONCAT31(local_90._1_3_,0 < (int)local_48);
  bVar2 = 0 < (int)local_44;
  if ((0 < (int)local_48) || (bVar2)) {
    ppppppiVar6 = (int ******)param_1[0x3ad2];
    if ((*(char *)(ppppppiVar6 + 0x109) != '\x0f') ||
       (((*(char *)((int)ppppppiVar6 + 0x425) != '\x0f' ||
         (*(char *)((int)ppppppiVar6 + 0x426) != '\x0f')) ||
        (*(char *)((int)ppppppiVar6 + 0x427) != '\x0f')))) {
      pppppiStack_d0 = (int *****)0x1;
      local_d4 = (int *****)0x1;
      local_d8 = (int *****)0x1;
      local_dc = (int *****)0x1;
      local_e0 = (int *****)0x409dca6;
      local_a0 = (int *****)ppppppiVar6;
      glColorMask();
      *(undefined1 *)(local_a0 + 0x109) = 0xf;
      *(undefined1 *)((int)local_a0 + 0x425) = 0xf;
      *(undefined1 *)((int)local_a0 + 0x426) = 0xf;
      *(undefined1 *)((int)local_a0 + 0x427) = 0xf;
      param_1[0x3a81] = (int *****)((uint)param_1[0x3a81] | 4);
      ppppppiVar6 = (int ******)param_1[0x3ad2];
    }
    if ((((float)ppppppiVar6[0x12a] != 0.0) || ((float)ppppppiVar6[299] != 0.0)) ||
       (((float)ppppppiVar6[300] != 0.0 || ((float)ppppppiVar6[0x12d] != 0.0)))) {
      pppppiStack_d0 = (int *****)0x0;
      local_d4 = (int *****)0x0;
      local_d8 = (int *****)0x0;
      local_dc = (int *****)0x0;
      local_e0 = (int *****)0x409dd1a;
      local_a0 = (int *****)ppppppiVar6;
      glClearColor();
      local_a0[0x12a] = (int ****)0x0;
      local_a0[299] = (int ****)0x0;
      local_a0[300] = (int ****)0x0;
      local_a0[0x12d] = (int ****)0x0;
      ppppppiVar6 = (int ******)param_1[0x3ad2];
    }
    if (*(char *)((int)ppppppiVar6 + 0xa8b) != '\x01') {
      local_dc = (int *****)0xc11;
      local_e0 = (int *****)0x409dd69;
      local_a0 = (int *****)ppppppiVar6;
      glEnable();
      *(undefined1 *)((int)local_a0 + 0xa8b) = 1;
      ppppppiVar6 = (int ******)param_1[0x3ad2];
    }
    if ((char)local_90 != '\0') {
      ppppppiVar15 = (int ******)local_48;
      if ((int)local_48 < 0) {
        ppppppiVar15 = (int ******)0x0;
      }
      ppppppiVar13 = (int ******)0x0;
      if (-1 < (int)local_24) {
        ppppppiVar13 = (int ******)local_24;
      }
      if (((ppppppiVar6[0x10d] != (int *****)0x0) || (ppppppiVar6[0x10e] != (int *****)0x0)) ||
         (((int ******)ppppppiVar6[0x10f] != ppppppiVar15 ||
          (ppppppiVar13 != (int ******)ppppppiVar6[0x110])))) {
        local_d8 = (int *****)0x0;
        local_dc = (int *****)0x0;
        local_e0 = (int *****)0x409e5ae;
        local_d4 = (int *****)ppppppiVar15;
        pppppiStack_d0 = (int *****)ppppppiVar13;
        local_a8 = (int *****)ppppppiVar15;
        local_a4 = (int *****)ppppppiVar13;
        local_a0 = (int *****)ppppppiVar6;
        glScissor();
        local_a0[0x10d] = (int ****)0x0;
        local_a0[0x10e] = (int ****)0x0;
        local_a0[0x10f] = (int ****)local_a8;
        local_a0[0x110] = (int ****)local_a4;
      }
      local_dc = (int *****)0x4000;
      local_e0 = (int *****)0x409e5ec;
      glClear();
      ppppppiVar6 = (int ******)param_1[0x3ad2];
      local_90 = (int *****)(int ******)0x0;
      if (-1 < (int)local_28 - (int)local_40) {
        local_90 = (int *****)((int)local_28 - (int)local_40);
      }
      local_94 = (int *****)(int ******)0x0;
      if (-1 < (int)local_24) {
        local_94 = local_24;
      }
      if ((((local_40 != ppppppiVar6[0x10d]) || (ppppppiVar6[0x10e] != (int *****)0x0)) ||
          (local_90 != ppppppiVar6[0x10f])) || (local_94 != ppppppiVar6[0x110])) {
        local_dc = local_40;
        local_a4 = local_40;
        local_d8 = (int *****)0x0;
        local_e0 = (int *****)0x409e66c;
        local_d4 = local_90;
        pppppiStack_d0 = local_94;
        local_a0 = (int *****)ppppppiVar6;
        glScissor();
        local_a0[0x10d] = (int ****)local_a4;
        local_a0[0x10e] = (int ****)0x0;
        local_a0[0x110] = (int ****)local_94;
        local_a0[0x10f] = (int ****)local_90;
      }
      local_dc = (int *****)0x4000;
      local_e0 = (int *****)0x409e6ac;
      glClear();
      ppppppiVar6 = (int ******)param_1[0x3ad2];
    }
    if (bVar2) {
      ppppppiVar15 = (int ******)local_28;
      if ((int)local_28 < 0) {
        ppppppiVar15 = (int ******)0x0;
      }
      ppppppiVar13 = (int ******)0x0;
      if (-1 < (int)local_44) {
        ppppppiVar13 = (int ******)local_44;
      }
      if (((ppppppiVar6[0x10d] != (int *****)0x0) || (ppppppiVar6[0x10e] != (int *****)0x0)) ||
         ((ppppppiVar15 != (int ******)ppppppiVar6[0x10f] ||
          ((int ******)ppppppiVar6[0x110] != ppppppiVar13)))) {
        local_d8 = (int *****)0x0;
        local_dc = (int *****)0x0;
        local_e0 = (int *****)0x409e46a;
        local_d4 = (int *****)ppppppiVar15;
        pppppiStack_d0 = (int *****)ppppppiVar13;
        local_a4 = (int *****)ppppppiVar13;
        local_a0 = (int *****)ppppppiVar6;
        glScissor();
        local_a0[0x10d] = (int ****)0x0;
        local_a0[0x10e] = (int ****)0x0;
        local_a0[0x10f] = (int ****)ppppppiVar15;
        local_a0[0x110] = (int ****)local_a4;
      }
      local_dc = (int *****)0x4000;
      local_e0 = (int *****)0x409e4a2;
      glClear();
      pppppiVar5 = param_1[0x3ad2];
      if ((int)local_28 < 0) {
        local_28 = (int *****)0x0;
      }
      local_90 = (int *****)((int)local_24 - (int)local_3c);
      ppppppiVar6 = (int ******)0x0;
      if (-1 < (int)local_90) {
        ppppppiVar6 = (int ******)local_90;
      }
      if (((pppppiVar5[0x10d] != (int ****)0x0) || (local_3c != (int *****)pppppiVar5[0x10e])) ||
         (((int *****)pppppiVar5[0x10f] != local_28 ||
          ((int ******)pppppiVar5[0x110] != ppppppiVar6)))) {
        local_d8 = local_3c;
        local_a0 = local_3c;
        local_dc = (int *****)0x0;
        local_e0 = (int *****)0x409e50e;
        local_d4 = local_28;
        pppppiStack_d0 = (int *****)ppppppiVar6;
        local_a8 = local_28;
        local_a4 = (int *****)ppppppiVar6;
        glScissor();
        pppppiVar5[0x10d] = (int ****)0x0;
        pppppiVar5[0x10e] = (int ****)local_a0;
        pppppiVar5[0x10f] = (int ****)local_a8;
        pppppiVar5[0x110] = (int ****)local_a4;
      }
      local_dc = (int *****)0x4000;
      local_e0 = (int *****)0x409e548;
      glClear();
      ppppppiVar6 = (int ******)param_1[0x3ad2];
    }
    if (*(char *)((int)ppppppiVar6 + 0xa8b) != '\0') {
      local_dc = (int *****)0xc11;
      local_e0 = (int *****)0x409ddae;
      local_a0 = (int *****)ppppppiVar6;
      glDisable();
      *(undefined1 *)((int)local_a0 + 0xa8b) = 0;
    }
    param_1[0x3a76] = (int *****)((int)param_1[0x3a76] + -1);
  }
  else {
    param_1[0x3a76] = (int *****)0x0;
  }
  ppppppiVar6 = (int ******)param_1[0x3a78];
  ppppppiVar15 = &local_dc;
  if ((ppppppiVar6 != (int ******)0x0) &&
     (ppppppiVar15 = &local_dc, param_1[0x3ace] != (int *****)0x0)) {
    local_d4 = local_20;
    local_20[0] = (int ****)0x0;
    local_ac = (int *****)((int)local_40 - (int)local_48);
    local_9c = local_44;
    local_90 = local_3c;
    local_d8 = (int *****)0x0;
    local_e0 = (int *****)0x409de0e;
    local_dc = (int *****)ppppppiVar6;
    (*(code *)(*ppppppiVar6)[0x12])();
    ppppiVar12 = local_20[0];
    local_94 = (int *****)local_20[0][0x22];
    iVar10 = (int)param_1[0x3acf] - (int)param_1[0x3a79];
    iVar14 = (int)param_1[0x3ad0] - (int)param_1[0x3a7a];
    if ((-(int)local_94 < iVar10) &&
       (((iVar14 < (int)local_ac &&
         (local_90 = (int *****)((int)local_90 - (int)local_9c), -(int)local_20[0][0x23] < iVar14))
        && (iVar14 < (int)local_90)))) {
      if (iVar10 < 0) {
        local_88 = (int ****)-iVar10;
        local_38 = local_48;
      }
      else {
        local_88 = (int ****)0x0;
        local_38 = (int *****)((int)local_48 + iVar10);
      }
      local_9c = (int *****)((int)local_94 + iVar10);
      local_80 = local_94;
      ppppppiVar6 = (int ******)local_9c;
      if ((int)local_ac < (int)local_9c) {
        local_80 = (int *****)((int)local_ac - iVar10);
        ppppppiVar6 = (int ******)local_ac;
      }
      local_30 = (int)ppppppiVar6 + (int)local_48;
      if (iVar14 < 0) {
        local_84 = -iVar14;
        local_34 = local_44;
      }
      else {
        local_84 = 0;
        local_34 = (int *****)((int)local_44 + iVar14);
      }
      local_98 = local_20[0][0x23];
      local_94 = (int *****)((int)local_98 + iVar14);
      local_7c = local_98;
      ppppppiVar6 = (int ******)local_94;
      if ((int)local_90 < (int)local_94) {
        local_7c = (int ***)((int)local_90 - iVar14);
        ppppppiVar6 = (int ******)local_90;
      }
      local_2c = (int)local_44 + (int)ppppppiVar6;
      local_90 = param_1[0x3a78];
      if ((int)local_90[0xa1] < 1) {
        local_dc = (int *****)0x42f46c0;
        local_e0 = (int *****)0x8c;
        local_e4 = (int *****)0x42f1724;
        local_e8 = (int *****)0x42f1784;
        uStack_ec = 0x409df56;
        FUN_0400a810();
      }
      local_e4 = param_1[0x3ad2];
      local_e8 = (int *****)local_90[0x91];
      uStack_ec = 0x409df7a;
      local_a0 = local_e8;
      FUN_0406d620();
      if (DAT_0451ca41 == '\0') {
        local_e4 = (int *****)0x0;
        local_e8 = local_a0;
        uStack_ec = 0x409e7b2;
        FUN_0406d530();
      }
      else {
        local_e8 = local_a0;
        uStack_ec = 0x409df95;
        uVar4 = FUN_0406d510();
        local_e0 = (int *****)0x0;
        local_e4 = (int *****)(uVar4 & 0xff);
        local_e8 = (int *****)(param_1 + 0x3ae7);
        uStack_ec = 0x409dfb2;
        local_e4 = (int *****)FUN_040e4f70();
        if (local_e4 != (int *****)param_1[0x3ad2][0xae]) {
          local_e8 = (int *****)0x0;
          uStack_ec = 0x409dfdd;
          local_a4 = param_1[0x3ad2];
          local_a0 = local_e4;
          (*DAT_0451e3c4)();
          local_a4[0xae] = (int ****)local_a0;
        }
      }
      local_cc = (int *****)0x1;
      pppppiStack_d0 = (int *****)0x0;
      local_c8 = (int ***)(uint)((int *****)local_90[0x86] == (int *****)0x140b ||
                                (int *****)local_90[0x86] == (int *****)0x1406);
      local_d4 = (int *****)ppppiVar12[0x23];
      local_d8 = (int *****)ppppiVar12[0x22];
      local_e4 = (int *****)0x0;
      local_e8 = (int *****)param_1;
      local_dc = (int *****)&local_38;
      uStack_ec = 0x409e055;
      local_e0 = &local_88;
      glDrawArrays();
    }
    uStack_ec = 0x409e068;
    local_e8 = (int *****)local_20[0];
    (*(code *)(*local_20[0])[2])();
    ppppppiVar15 = (int ******)&uStack_ec;
  }
  ppppiVar12 = *param_1[0x3ad1];
  *ppppppiVar15 = param_1[0x3ad1];
  pppiVar1 = ppppiVar12[3];
  ppppppiVar15[-1] = (int *****)0x409da06;
  (*(code *)pppiVar1)();
  ppppppiVar15[1] = (int *****)"Present()";
  DAT_04468c38 = 0;
  *ppppppiVar15 = (int *****)0x3;
  ppppppiVar15[-1] = (int *****)0x409da24;
  OpenGLDebugEvent();
  ppppppiVar15[-1] = (int *****)0x409da29;
  uVar4 = glGetError();
  if (uVar4 != 0) {
    iVar14 = 0;
LAB_0409da58:
    do {
      pcVar11 = "GL_STACK_OVERFLOW";
      if (uVar4 != 0x503) {
        if (uVar4 < 0x504) {
          pcVar11 = "GL_INVALID_VALUE";
          if (((uVar4 != 0x501) && (pcVar11 = "GL_INVALID_OPERATION", uVar4 < 0x502)) &&
             (pcVar11 = "GL_INVALID_ENUM", uVar4 != 0x500)) {
LAB_0409da89:
            pcVar11 = "!!!unknown!!!";
          }
        }
        else {
          pcVar11 = "GL_OUT_OF_MEMORY";
          if (((uVar4 != 0x505) && (pcVar11 = "GL_STACK_UNDERFLOW", 0x504 < uVar4)) &&
             ((pcVar11 = "GL_INVALID_FRAMEBUFFER_OPERATION", uVar4 != 0x506 &&
              (pcVar11 = "GL_TABLE_TOO_LARGE", uVar4 != 0x8031)))) goto LAB_0409da89;
        }
      }
      ppppppiVar15[3] = (int *****)uVar4;
      ppppppiVar15[2] = (int *****)pcVar11;
      if (iVar14 == 0) {
        ppppppiVar15[1] = (int *****)"glGetError in Present() shows error %s (%#05x)";
        iVar14 = 1;
        *ppppppiVar15 = (int *****)0xf;
        ppppppiVar15[-1] = (int *****)0x409da4f;
        FUN_0402cd10();
        ppppppiVar15[-1] = (int *****)0x409da54;
        uVar4 = glGetError();
        if (uVar4 == 0) break;
        goto LAB_0409da58;
      }
      ppppppiVar15[1] = (int *****)"    and %s (%#05x)";
      iVar14 = iVar14 + 1;
      *ppppppiVar15 = (int *****)0xf;
      ppppppiVar15[-1] = (int *****)0x409dab3;
      FUN_0402cd10();
      ppppppiVar15[-1] = (int *****)0x409dab8;
      uVar4 = glGetError();
    } while (uVar4 != 0);
  }
  *ppppppiVar15 = (int *****)param_1;
  ppppppiVar15[-1] = (int *****)0x409dac4;
  Direct3DDevice9Imp__FrameRenderEnd();
  param_1[0x3a7c] = (int *****)((int)param_1[0x3a7c] + 1);
  ppppppiVar15[-1] = (int *****)0x409dad0;
  pppppiVar5 = (int *****)eON_timeGetTime();
  param_1[0x3a7d] = pppppiVar5;
  if ((*(char *)(param_1 + 0x3a7e) != '\0') &&
     (uVar4 = (int)pppppiVar5 - (int)param_1[0x3a80], 1000 < uVar4)) {
    pppppiVar5 = param_1[0x3a7c];
    pppppiVar9 = param_1[0x3a7f];
    ppppppiVar15[1] = (int *****)"Fps: %.3f\n";
    *ppppppiVar15 = &local_88;
    *(double *)(ppppppiVar15 + 2) =
         (double)((((float)((uint)((int)pppppiVar5 - (int)pppppiVar9) >> 0x10) * DAT_042dbf34 +
                   (float)((int)pppppiVar5 - (int)pppppiVar9 & 0xffff)) * _DAT_042f73a8) /
                 ((float)(uVar4 >> 0x10) * DAT_042dbf34 + (float)(uVar4 & 0xffff)));
    ppppppiVar15[-1] = (int *****)0x409e3dc;
    sprintf((char *)*ppppppiVar15,(char *)ppppppiVar15[1]);
    *ppppppiVar15 = &local_88;
    ppppppiVar15[-1] = (int *****)0x409e3e4;
    puts((char *)*ppppppiVar15);
    ppppppiVar15[1] = &local_88;
    *ppppppiVar15 = (int *****)0x14;
    ppppppiVar15[-1] = (int *****)0x409e3f4;
    FUN_0402cd10();
    param_1[0x3a80] = param_1[0x3a7d];
    param_1[0x3a7f] = param_1[0x3a7c];
  }
  while (DAT_0441163d != '\0') {
    *ppppppiVar15 = (int *****)0xb44;
    ppppppiVar15[-1] = (int *****)0x409db04;
    glIsEnabled();
    *ppppppiVar15 = (int *****)&DAT_000186a0;
    ppppppiVar15[-1] = (int *****)0x409db10;
    usleep((__useconds_t)*ppppppiVar15);
  }
  *ppppppiVar15 = (int *****)param_1;
  ppppppiVar15[-1] = (int *****)0x409db21;
  Direct3DDevice9Imp__Fence_Tick();
  pppppiVar5 = param_1[0x3af6];
  while (pppppiVar5 != (int *****)0x0) {
    pppppiVar9 = (int *****)pppppiVar5[6];
    ppppppiVar15[1] = (int *****)param_1;
    *ppppppiVar15 = pppppiVar5 + 1;
    ppppppiVar15[-1] = (int *****)0x409db62;
    cVar3 = FUN_040a5960();
    if (cVar3 == '\0') break;
    *ppppppiVar15 = (int *****)(param_1[0x3af6][5] + 1);
    ppppppiVar15[-1] = (int *****)0x409db44;
    Direct3DSurface9Imp__TransferDataFromPBO();
    param_1[0x3af6] = pppppiVar9;
    pppppiVar5 = pppppiVar9;
  }
  *ppppppiVar15 = param_1[0x3b30];
  ppppppiVar15[-1] = (int *****)0x409db74;
  eON_SetEvent();
  if (DAT_04468c30 == '\0') {
    ppppppiVar15[-2] = (int *****)0x409db87;
    FUN_040bc3d0();
    ppppppiVar15[-2] = (int *****)0x409db8c;
    FUN_040bca40();
    ppppppiVar15[-2] = (int *****)0x409db95;
    FUN_040ad550();
    ppppppiVar15[-2] = (int *****)0x409db9a;
    FUN_040b7190();
    DAT_04468c30 = '\x01';
  }
  return 4;
}

// --- Direct3DDevice9Imp::OpenGLSide_StretchRect_SimpleRenderbuffer2Texture @0x04084810 ---
/* source: direct3dbasetexture9imp, direct3ddevice9imp */

undefined4
Direct3DDevice9Imp__OpenGLSide_StretchRect_SimpleRenderbuffer2Texture
          (int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_4c;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20 [4];
  
  iVar1 = param_3[1];
  iVar7 = *param_3;
  uVar2 = *(undefined4 *)(iVar1 + 0xc4);
  if (param_3[6] == 0) {
    local_44 = param_3[8];
    if (param_3[7] == 0) {
      local_40 = param_3[9];
      if ((local_44 == *(int *)(iVar1 + 0x88)) && (local_4c = 1, local_40 == *(int *)(iVar1 + 0x8c))
         ) goto LAB_04084857;
    }
    else {
      local_40 = param_3[9];
    }
  }
  else {
    local_44 = param_3[8];
    local_40 = param_3[9];
  }
  local_4c = 0;
LAB_04084857:
  local_44 = local_44 - param_3[6];
  local_40 = local_40 - param_3[7];
  if (param_3[4] - param_3[2] != local_44) {
    FUN_0400a810("width == ( cmdBody->SourceRect.right - cmdBody->SourceRect.left )",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                 ,0x13ce,
                 "DWORD Direct3DDevice9Imp::OpenGLSide_StretchRect_SimpleRenderbuffer2Texture(DWORD, LPVOID)"
                );
  }
  if (param_3[5] - param_3[3] != local_40) {
    FUN_0400a810("height == ( cmdBody->SourceRect.bottom - cmdBody->SourceRect.top )",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                 ,0x13cf,
                 "DWORD Direct3DDevice9Imp::OpenGLSide_StretchRect_SimpleRenderbuffer2Texture(DWORD, LPVOID)"
                );
  }
  if (*(int *)(iVar7 + 0x70) == *(int *)(iVar1 + 0x70)) {
    puVar4 = (undefined4 *)
             FramebufferCache__GetFramebufferHash
                       (*(int *)(param_1 + 0xeb48) + 0x1f8,*param_3,0,0,0,0,0);
    uVar2 = *puVar4;
    puVar4 = (undefined4 *)
             FramebufferCache__GetFramebufferHash
                       (*(int *)(param_1 + 0xeb48) + 0x1f8,param_3[1],0,0,0,0,0);
    OpenGLContextCache____glewBindFramebuffer(*(undefined4 *)(param_1 + 0xeb48),0x8ca9,*puVar4);
    iVar7 = *(int *)(param_1 + 0xeb48);
    if ((*(char *)(iVar7 + 0x34c) == '\0') || (*(int *)(iVar7 + 0x33c) != 0x8ce0)) {
      (*DAT_0451eed0)(0x8ce0);
      *(undefined4 *)(iVar7 + 0x33c) = 0x8ce0;
      *(undefined4 *)(iVar7 + 0x340) = 0;
      *(undefined4 *)(iVar7 + 0x344) = 0;
      *(undefined4 *)(iVar7 + 0x348) = 0;
      *(undefined1 *)(iVar7 + 0x34c) = 1;
      iVar7 = *(int *)(param_1 + 0xeb48);
    }
    OpenGLContextCache____glewBindFramebuffer(iVar7,0x8ca8,uVar2);
    iVar7 = *(int *)(param_1 + 0xeb48);
    if (*(int *)(iVar7 + 0x350) != 0x8ce0) {
      (*DAT_0451eed4)(0x8ce0);
      *(undefined4 *)(iVar7 + 0x350) = 0x8ce0;
      iVar7 = *(int *)(param_1 + 0xeb48);
    }
    if (*(char *)(iVar7 + 0xa8b) != '\0') {
      glDisable(0xc11);
      *(undefined1 *)(iVar7 + 0xa8b) = 0;
    }
    (*DAT_0451e68c)(param_3[2],param_3[3],param_3[4],param_3[5],param_3[6],param_3[7],param_3[8],
                    param_3[9],0x4000,0x2600);
  }
  else if (*(int *)(iVar7 + 0xa0) < 2) {
    FramebufferCache__GetFramebufferHash
              (*(int *)(param_1 + 0xeb48) + 0x1f8,*(undefined4 *)(iVar7 + 0x10),0,0,0,0,0);
    iVar7 = *(int *)(iVar1 + 0x94);
    if (*(int *)(iVar7 + 0x284) < 1) {
      FUN_0400a810("(INT) mOpenGLTexturesCount > index",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.h"
                   ,0x8c,"OpenGLTexture* Direct3DBaseTexture9Imp::GetOpenGLTexture(INT)");
    }
    iVar7 = *(int *)(iVar7 + 0x244);
    if (*(int *)(iVar7 + 0xc) != 0xde1) {
      FUN_0400a810("tex->GetGLTarget() == 0x0DE1",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                   ,0x1414,
                   "DWORD Direct3DDevice9Imp::OpenGLSide_StretchRect_SimpleRenderbuffer2Texture(DWORD, LPVOID)"
                  );
    }
    FUN_0406d620(iVar7,*(undefined4 *)(param_1 + 0xeb48));
    iVar7 = *(int *)(param_1 + 0xeb48);
    if ((((*(char *)(iVar7 + 0x424) != '\x0f') || (*(char *)(iVar7 + 0x425) != '\x0f')) ||
        (*(char *)(iVar7 + 0x426) != '\x0f')) || (*(char *)(iVar7 + 0x427) != '\x0f')) {
      glColorMask(1,1,1,1);
      *(undefined1 *)(iVar7 + 0x424) = 0xf;
      *(undefined1 *)(iVar7 + 0x425) = 0xf;
      *(undefined1 *)(iVar7 + 0x426) = 0xf;
      *(undefined1 *)(iVar7 + 0x427) = 0xf;
      *(uint *)(param_1 + 0xea04) = *(uint *)(param_1 + 0xea04) | 4;
    }
    glCopyTexSubImage2D(0xde1,uVar2,param_3[6],param_3[7],param_3[2],param_3[3],local_44,local_40);
  }
  else {
    if (*(char *)(param_1 + 0xeb50) == '\0') {
      FUN_0400a810("mMultisampleSupported",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                   ,0x13e7,
                   "DWORD Direct3DDevice9Imp::OpenGLSide_StretchRect_SimpleRenderbuffer2Texture(DWORD, LPVOID)"
                  );
    }
    puVar4 = (undefined4 *)
             FramebufferCache__GetFramebufferHash
                       (*(int *)(param_1 + 0xeb48) + 0x1f8,*param_3,0,0,0,0,0);
    uVar2 = *puVar4;
    local_2c = local_44;
    local_28 = local_40;
    FUN_04084100(param_1,*(undefined4 *)(iVar7 + 0x70),0,&local_2c,&local_28,&local_24,local_20);
    OpenGLContextCache____glewBindFramebuffer(*(undefined4 *)(param_1 + 0xeb48),0x8ca9,local_20[0]);
    iVar5 = *(int *)(param_1 + 0xeb48);
    if ((*(char *)(iVar5 + 0x34c) == '\0') || (*(int *)(iVar5 + 0x33c) != 0x8ce0)) {
      (*DAT_0451eed0)(0x8ce0);
      *(undefined4 *)(iVar5 + 0x33c) = 0x8ce0;
      *(undefined4 *)(iVar5 + 0x340) = 0;
      *(undefined4 *)(iVar5 + 0x344) = 0;
      *(undefined4 *)(iVar5 + 0x348) = 0;
      *(undefined1 *)(iVar5 + 0x34c) = 1;
      iVar5 = *(int *)(param_1 + 0xeb48);
    }
    OpenGLContextCache____glewBindFramebuffer(iVar5,0x8ca8,uVar2);
    iVar5 = *(int *)(param_1 + 0xeb48);
    if (*(int *)(iVar5 + 0x350) != 0x8ce0) {
      (*DAT_0451eed4)(0x8ce0);
      *(undefined4 *)(iVar5 + 0x350) = 0x8ce0;
      iVar5 = *(int *)(param_1 + 0xeb48);
    }
    if (*(char *)(iVar5 + 0xa8b) != '\0') {
      glDisable(0xc11);
      *(undefined1 *)(iVar5 + 0xa8b) = 0;
    }
    (*DAT_0451e68c)(param_3[2],param_3[3],param_3[4],param_3[5],0,0,local_44,local_40,0x4000,0x2600)
    ;
    iVar5 = *(int *)(param_1 + 0xeb48);
    if (*(int *)(iVar5 + 0x234) != 0x84c0) {
      (*DAT_0451eeac)(0x84c0);
      *(undefined4 *)(iVar5 + 0x234) = 0x84c0;
      iVar5 = *(int *)(param_1 + 0xeb48);
    }
    FUN_040c6ee0(iVar5,0xde1,local_24);
    if (DAT_0451ca41 != '\0') {
      iVar6 = FUN_040e4f70(param_1 + 0xeb9c,0,0);
      iVar5 = *(int *)(param_1 + 0xeb48);
      if (iVar6 != *(int *)(iVar5 + 0x2b8)) {
        (*DAT_0451e3c4)(0,iVar6);
        *(int *)(iVar5 + 0x2b8) = iVar6;
      }
    }
    local_3c = 0;
    local_38 = 0;
    if ((*(int *)(iVar7 + 0xa8) == 0x140b) || (*(int *)(iVar7 + 0xa8) == 0x1406)) {
      iVar7 = param_3[1];
      bVar3 = *(int *)(iVar7 + 0xa8) != 0x140b && *(int *)(iVar7 + 0xa8) != 0x1406;
    }
    else {
      bVar3 = false;
      iVar7 = param_3[1];
    }
    local_34 = local_44;
    local_30 = local_40;
    glDrawArrays(param_1,iVar7,&local_3c,param_3 + 6,local_2c,local_28,1,0,bVar3);
  }
  direct3dsurface9imp_040b0a40(iVar1 + 4,local_4c,param_3 + 6);
  (**(code **)(*(int *)*param_3 + 8))((int *)*param_3);
  (**(code **)(*(int *)param_3[1] + 8))((int *)param_3[1]);
  return 0x2c;
}

// --- Direct3DDevice9Imp::OpenGLSide_StretchRect_SimpleTexture2Texture @0x04083a10 ---
/* source: direct3dbasetexture9imp, direct3ddevice9imp */

undefined4
Direct3DDevice9Imp__OpenGLSide_StretchRect_SimpleTexture2Texture
          (int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  
  bVar11 = false;
  iVar1 = param_3[1];
  iVar2 = *param_3;
  iVar3 = param_3[8];
  iVar4 = param_3[6];
  iVar5 = param_3[9];
  iVar9 = param_3[7];
  if (((iVar4 == 0) && (bVar11 = false, iVar9 == 0)) &&
     (bVar11 = false, iVar3 == *(int *)(iVar1 + 0x88))) {
    bVar11 = iVar5 == *(int *)(iVar1 + 0x8c);
  }
  iVar6 = *(int *)(iVar1 + 0xc4);
  if (iVar6 == 0) {
    iVar3 = *(int *)(iVar2 + 0x94);
    iVar4 = *(int *)(iVar1 + 0x94);
    if (*(int *)(iVar3 + 0x284) < 1) {
      FUN_0400a810("(INT) mOpenGLTexturesCount > index",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.h"
                   ,0x8c,"OpenGLTexture* Direct3DBaseTexture9Imp::GetOpenGLTexture(INT)");
      iVar5 = *(int *)(iVar3 + 0x244);
      iVar9 = *(int *)(iVar5 + 0xc);
    }
    else {
      iVar5 = *(int *)(iVar3 + 0x244);
      iVar9 = *(int *)(iVar5 + 0xc);
    }
    if (iVar9 != 0xde1) {
      FUN_0400a810("tex->GetGLTarget() == 0x0DE1",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                   ,0x131a,
                   "DWORD Direct3DDevice9Imp::OpenGLSide_StretchRect_SimpleTexture2Texture(DWORD, LPVOID)"
                  );
    }
    FUN_0406d470(iVar5);
    FUN_0406d620(iVar5,*(undefined4 *)(param_1 + 0xeb48));
    if (DAT_0451ca41 == '\0') {
      FUN_0406d530(iVar5,0);
    }
    else {
      uVar8 = FUN_0406d510(iVar5);
      iVar9 = FUN_040e4f70(param_1 + 0xeb9c,uVar8,0);
      iVar5 = *(int *)(param_1 + 0xeb48);
      if (iVar9 != *(int *)(iVar5 + 0x2b8)) {
        (*DAT_0451e3c4)(0,iVar9);
        *(int *)(iVar5 + 0x2b8) = iVar9;
      }
    }
    if ((*(int *)(iVar3 + 0x218) == 0x140b) || (bVar10 = false, *(int *)(iVar3 + 0x218) == 0x1406))
    {
      iVar3 = *(int *)(iVar4 + 0x218);
      bVar10 = iVar3 != 0x140b && iVar3 != 0x1406;
    }
    glDrawArrays(param_1,param_3[1],param_3 + 2,param_3 + 6,*(undefined4 *)(iVar2 + 0x88),
                 *(undefined4 *)(iVar2 + 0x8c),1,0,bVar10);
  }
  else {
    if (iVar6 < 1) {
      FUN_0400a810("surfaceLevel > 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                   ,0x1328,
                   "DWORD Direct3DDevice9Imp::OpenGLSide_StretchRect_SimpleTexture2Texture(DWORD, LPVOID)"
                  );
    }
    FramebufferCache__GetFramebufferHash
              (*(int *)(param_1 + 0xeb48) + 0x1f8,*(undefined4 *)(iVar2 + 0x10),0,0,0,0,0);
    iVar2 = *(int *)(iVar1 + 0x94);
    if (*(int *)(iVar2 + 0x284) < 1) {
      FUN_0400a810("(INT) mOpenGLTexturesCount > index",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.h"
                   ,0x8c,"OpenGLTexture* Direct3DBaseTexture9Imp::GetOpenGLTexture(INT)");
      iVar2 = *(int *)(iVar2 + 0x244);
      iVar7 = *(int *)(iVar2 + 0xc);
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x244);
      iVar7 = *(int *)(iVar2 + 0xc);
    }
    if (iVar7 != 0xde1) {
      FUN_0400a810("tex->GetGLTarget() == 0x0DE1",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                   ,0x132b,
                   "DWORD Direct3DDevice9Imp::OpenGLSide_StretchRect_SimpleTexture2Texture(DWORD, LPVOID)"
                  );
    }
    FUN_0406d620(iVar2,*(undefined4 *)(param_1 + 0xeb48));
    iVar2 = *(int *)(param_1 + 0xeb48);
    if (((*(char *)(iVar2 + 0x424) != '\x0f') || (*(char *)(iVar2 + 0x425) != '\x0f')) ||
       ((*(char *)(iVar2 + 0x426) != '\x0f' || (*(char *)(iVar2 + 0x427) != '\x0f')))) {
      glColorMask(1,1,1,1);
      *(undefined1 *)(iVar2 + 0x424) = 0xf;
      *(undefined1 *)(iVar2 + 0x425) = 0xf;
      *(undefined1 *)(iVar2 + 0x426) = 0xf;
      *(undefined1 *)(iVar2 + 0x427) = 0xf;
      *(uint *)(param_1 + 0xea04) = *(uint *)(param_1 + 0xea04) | 4;
    }
    glCopyTexSubImage2D(0xde1,iVar6,param_3[6],param_3[7],param_3[2],param_3[3],iVar3 - iVar4,
                        iVar5 - iVar9);
  }
  direct3dsurface9imp_040b0a40(iVar1 + 4,bVar11,param_3 + 6);
  (**(code **)(*(int *)*param_3 + 8))((int *)*param_3);
  (**(code **)(*(int *)param_3[1] + 8))((int *)param_3[1]);
  return 0x2c;
}

// --- Direct3DDevice9Imp::OpenGLSide_StretchRect_Texture2TextureOrRenderbuffer @0x04083ea0 ---
/* source: direct3dbasetexture9imp, direct3ddevice9imp */

undefined4
Direct3DDevice9Imp__OpenGLSide_StretchRect_Texture2TextureOrRenderbuffer
          (int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  bool bVar8;
  
  bVar8 = false;
  iVar1 = param_3[10];
  iVar2 = param_3[1];
  iVar3 = *param_3;
  if (((param_3[6] == 0) && (param_3[7] == 0)) && (param_3[8] == *(int *)(iVar2 + 0x88))) {
    bVar8 = param_3[9] == *(int *)(iVar2 + 0x8c);
  }
  iVar4 = *(int *)(iVar3 + 0x94);
  if (*(int *)(iVar4 + 0x284) < 1) {
    FUN_0400a810("(INT) mOpenGLTexturesCount > index",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.h"
                 ,0x8c,"OpenGLTexture* Direct3DBaseTexture9Imp::GetOpenGLTexture(INT)");
  }
  iVar7 = *(int *)(iVar4 + 0x244);
  if (*(int *)(iVar7 + 0xc) != 0xde1) {
    FUN_0400a810("tex->GetGLTarget() == 0x0DE1",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                 ,0x134a,
                 "DWORD Direct3DDevice9Imp::OpenGLSide_StretchRect_Texture2TextureOrRenderbuffer(DWORD, LPVOID)"
                );
  }
  FUN_0406d470(iVar7);
  FUN_0406d620(iVar7,*(undefined4 *)(param_1 + 0xeb48));
  if (DAT_0451ca41 == '\0') {
    FUN_0406d530(iVar7,iVar1 != 1);
  }
  else {
    uVar5 = FUN_0406d510(iVar7);
    iVar7 = FUN_040e4f70(param_1 + 0xeb9c,uVar5,iVar1 != 1);
    iVar1 = *(int *)(param_1 + 0xeb48);
    if (iVar7 != *(int *)(iVar1 + 0x2b8)) {
      (*DAT_0451e3c4)(0,iVar7);
      *(int *)(iVar1 + 0x2b8) = iVar7;
    }
  }
  if ((*(int *)(iVar4 + 0x218) == 0x140b) || (bVar6 = false, *(int *)(iVar4 + 0x218) == 0x1406)) {
    bVar6 = *(int *)(iVar2 + 0xa8) != 0x140b && *(int *)(iVar2 + 0xa8) != 0x1406;
  }
  glDrawArrays(param_1,*(undefined4 *)(iVar2 + 0x10),param_3 + 2,param_3 + 6,
               *(undefined4 *)(iVar3 + 0x88),*(undefined4 *)(iVar3 + 0x8c),
               *(int *)(iVar2 + 0x90) == 2,0,bVar6);
  direct3dsurface9imp_040b0a40(iVar2 + 4,bVar8,param_3 + 6);
  (**(code **)(*(int *)*param_3 + 8))((int *)*param_3);
  (**(code **)(*(int *)param_3[1] + 8))((int *)param_3[1]);
  return 0x2c;
}

// --- Direct3DDevice9Imp::SetupTexturesForDraw @0x0408ef80 ---
/* source: direct3dbasetexture9imp, direct3ddevice9imp */

void Direct3DDevice9Imp__SetupTexturesForDraw(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_40;
  int local_24;
  
  if (*(int *)(param_1 + 0x82c8) != 0) {
    bVar3 = true;
    local_24 = 0x10;
    if (*(char *)(*(int *)(param_1 + 0xe9ec) + 0x80) != '\0') goto LAB_0408efb8;
  }
  if ((*(uint *)(param_1 + 0xea04) & 0x1c00) == 0) {
    bVar3 = false;
    local_24 = 1;
  }
  else {
    bVar3 = false;
    local_24 = *(int *)(param_1 + 0x8164);
    if (*(int *)(param_1 + 0x8164) <= *(int *)(*(int *)(param_1 + 0xe9ec) + 0x7c)) {
      local_24 = *(int *)(*(int *)(param_1 + 0xe9ec) + 0x7c);
    }
    if (local_24 < 1) {
      local_24 = 1;
    }
  }
LAB_0408efb8:
  iVar5 = 0;
  iVar7 = param_1;
  do {
    while ((iVar8 = *(int *)(iVar7 + 0x8278), iVar8 != 0 &&
           (*(int *)(*(int *)(param_1 + 0xe9ec) + 0x3c + iVar5 * 4) != -1))) {
      if (*(int *)(iVar8 + 0x284) < 1) {
        FUN_0400a810("(INT) mOpenGLTexturesCount > index",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.h"
                     ,0x8c,"OpenGLTexture* Direct3DBaseTexture9Imp::GetOpenGLTexture(INT)");
      }
      iVar8 = *(int *)(iVar8 + 0x244);
      if (iVar8 == 0) {
        FUN_0400a810(&PTR_DAT_042e85bd,
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                     ,0x25d3,"void Direct3DDevice9Imp::SetupTexturesForDraw()");
      }
      uVar6 = 1 << ((byte)iVar5 & 0x1f);
      if ((*(uint *)(param_1 + 0x8160) & uVar6) != 0) {
        uVar2 = *(undefined4 *)(*(int *)(iVar8 + 4) + 0x23c);
        uVar4 = SamplerCache__GetSamplerForState
                          (param_1 + 0xeb9c,param_1 + 0x7c60 + iVar5 * 0x38,uVar2);
        *(undefined4 *)(iVar7 + 0x80c0) = uVar2;
        *(undefined4 *)(iVar7 + 0x8110) = uVar4;
        *(uint *)(param_1 + 0x8160) = *(uint *)(param_1 + 0x8160) & ~uVar6;
      }
      iVar1 = *(int *)(iVar7 + 0x8110);
      local_40 = *(int *)(param_1 + 0xeb48);
      if (iVar1 != *(int *)(local_40 + 8 + (iVar5 + 0xac) * 4)) {
        (*DAT_0451e3c4)(iVar5,iVar1);
        *(int *)(local_40 + 8 + (iVar5 + 0xac) * 4) = iVar1;
        local_40 = *(int *)(param_1 + 0xeb48);
      }
      iVar7 = iVar7 + 4;
      FUN_040c6e20(local_40,iVar5 + 0x84c0,*(undefined4 *)(iVar8 + 0xc),*(undefined4 *)(iVar8 + 8));
      iVar5 = iVar5 + 1;
      if (local_24 <= iVar5) goto LAB_0408f0fa;
    }
    iVar7 = iVar7 + 4;
    FUN_040c6e20(*(undefined4 *)(param_1 + 0xeb48),iVar5 + 0x84c0,0xde1,0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < local_24);
LAB_0408f0fa:
  *(undefined4 *)(param_1 + 0x8164) = *(undefined4 *)(*(int *)(param_1 + 0xe9ec) + 0x7c);
  if (bVar3) {
    iVar7 = *(int *)(param_1 + 0x82b8);
    if ((iVar7 != 0) && (*(int *)(*(int *)(param_1 + 0xe9ec) + 0x2c) != -1)) {
      if (*(int *)(iVar7 + 0x284) < 1) {
        FUN_0400a810("(INT) mOpenGLTexturesCount > index",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.h"
                     ,0x8c,"OpenGLTexture* Direct3DBaseTexture9Imp::GetOpenGLTexture(INT)");
      }
      iVar7 = *(int *)(iVar7 + 0x244);
      if (iVar7 == 0) {
        FUN_0400a810(&PTR_DAT_042e85bd,
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                     ,0x260d,"void Direct3DDevice9Imp::SetupTexturesForDraw()");
      }
      if ((*(byte *)(param_1 + 0x8162) & 1) != 0) {
        uVar2 = *(undefined4 *)(*(int *)(iVar7 + 4) + 0x23c);
        uVar4 = SamplerCache__GetSamplerForState(param_1 + 0xeb9c,param_1 + 0x7fe0,uVar2);
        *(undefined4 *)(param_1 + 0x8100) = uVar2;
        *(uint *)(param_1 + 0x8160) = *(uint *)(param_1 + 0x8160) & 0xfffeffff;
        *(undefined4 *)(param_1 + 0x8150) = uVar4;
      }
      iVar5 = *(int *)(param_1 + 0x8150);
      iVar8 = *(int *)(param_1 + 0xeb48);
      if (iVar5 != *(int *)(iVar8 + 0x2f4)) {
        (*DAT_0451e3c4)(0xf,iVar5);
        *(int *)(iVar8 + 0x2f4) = iVar5;
        iVar8 = *(int *)(param_1 + 0xeb48);
      }
      FUN_040c6e20(iVar8,33999,*(undefined4 *)(iVar7 + 0xc),*(undefined4 *)(iVar7 + 8));
    }
    iVar7 = *(int *)(param_1 + 0x82bc);
    if ((iVar7 != 0) && (*(int *)(*(int *)(param_1 + 0xe9ec) + 0x30) != -1)) {
      if (*(int *)(iVar7 + 0x284) < 1) {
        FUN_0400a810("(INT) mOpenGLTexturesCount > index",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.h"
                     ,0x8c,"OpenGLTexture* Direct3DBaseTexture9Imp::GetOpenGLTexture(INT)");
      }
      iVar7 = *(int *)(iVar7 + 0x244);
      if (iVar7 == 0) {
        FUN_0400a810(&PTR_DAT_042e85bd,
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                     ,0x260d,"void Direct3DDevice9Imp::SetupTexturesForDraw()");
      }
      if ((*(byte *)(param_1 + 0x8162) & 2) != 0) {
        uVar2 = *(undefined4 *)(*(int *)(iVar7 + 4) + 0x23c);
        uVar4 = SamplerCache__GetSamplerForState(param_1 + 0xeb9c,param_1 + 0x8018,uVar2);
        *(undefined4 *)(param_1 + 0x8104) = uVar2;
        *(uint *)(param_1 + 0x8160) = *(uint *)(param_1 + 0x8160) & 0xfffdffff;
        *(undefined4 *)(param_1 + 0x8154) = uVar4;
      }
      iVar5 = *(int *)(param_1 + 0x8154);
      iVar8 = *(int *)(param_1 + 0xeb48);
      if (iVar5 != *(int *)(iVar8 + 0x2f0)) {
        (*DAT_0451e3c4)(0xe,iVar5);
        *(int *)(iVar8 + 0x2f0) = iVar5;
        iVar8 = *(int *)(param_1 + 0xeb48);
      }
      FUN_040c6e20(iVar8,0x84ce,*(undefined4 *)(iVar7 + 0xc),*(undefined4 *)(iVar7 + 8));
    }
    iVar7 = *(int *)(param_1 + 0x82c0);
    if ((iVar7 != 0) && (*(int *)(*(int *)(param_1 + 0xe9ec) + 0x34) != -1)) {
      if (*(int *)(iVar7 + 0x284) < 1) {
        FUN_0400a810("(INT) mOpenGLTexturesCount > index",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.h"
                     ,0x8c,"OpenGLTexture* Direct3DBaseTexture9Imp::GetOpenGLTexture(INT)");
      }
      iVar7 = *(int *)(iVar7 + 0x244);
      if (iVar7 == 0) {
        FUN_0400a810(&PTR_DAT_042e85bd,
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                     ,0x260d,"void Direct3DDevice9Imp::SetupTexturesForDraw()");
      }
      if ((*(byte *)(param_1 + 0x8162) & 4) != 0) {
        uVar2 = *(undefined4 *)(*(int *)(iVar7 + 4) + 0x23c);
        uVar4 = SamplerCache__GetSamplerForState(param_1 + 0xeb9c,param_1 + 0x8050,uVar2);
        *(undefined4 *)(param_1 + 0x8108) = uVar2;
        *(uint *)(param_1 + 0x8160) = *(uint *)(param_1 + 0x8160) & 0xfffbffff;
        *(undefined4 *)(param_1 + 0x8158) = uVar4;
      }
      iVar5 = *(int *)(param_1 + 0x8158);
      iVar8 = *(int *)(param_1 + 0xeb48);
      if (iVar5 != *(int *)(iVar8 + 0x2ec)) {
        (*DAT_0451e3c4)(0xd,iVar5);
        *(int *)(iVar8 + 0x2ec) = iVar5;
        iVar8 = *(int *)(param_1 + 0xeb48);
      }
      FUN_040c6e20(iVar8,0x84cd,*(undefined4 *)(iVar7 + 0xc),*(undefined4 *)(iVar7 + 8));
    }
    iVar7 = *(int *)(param_1 + 0x82c4);
    if ((iVar7 != 0) && (*(int *)(*(int *)(param_1 + 0xe9ec) + 0x38) != -1)) {
      if (*(int *)(iVar7 + 0x284) < 1) {
        FUN_0400a810("(INT) mOpenGLTexturesCount > index",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.h"
                     ,0x8c,"OpenGLTexture* Direct3DBaseTexture9Imp::GetOpenGLTexture(INT)");
      }
      iVar7 = *(int *)(iVar7 + 0x244);
      if (iVar7 == 0) {
        FUN_0400a810(&PTR_DAT_042e85bd,
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                     ,0x260d,"void Direct3DDevice9Imp::SetupTexturesForDraw()");
      }
      if ((*(byte *)(param_1 + 0x8162) & 8) != 0) {
        uVar2 = *(undefined4 *)(*(int *)(iVar7 + 4) + 0x23c);
        uVar4 = SamplerCache__GetSamplerForState(param_1 + 0xeb9c,param_1 + 0x8088,uVar2);
        *(undefined4 *)(param_1 + 0x810c) = uVar2;
        *(uint *)(param_1 + 0x8160) = *(uint *)(param_1 + 0x8160) & 0xfff7ffff;
        *(undefined4 *)(param_1 + 0x815c) = uVar4;
      }
      iVar5 = *(int *)(param_1 + 0x815c);
      iVar8 = *(int *)(param_1 + 0xeb48);
      if (iVar5 != *(int *)(iVar8 + 0x2e8)) {
        (*DAT_0451e3c4)(0xc,iVar5);
        *(int *)(iVar8 + 0x2e8) = iVar5;
        iVar8 = *(int *)(param_1 + 0xeb48);
      }
      FUN_040c6e20(iVar8,0x84cc,*(undefined4 *)(iVar7 + 0xc),*(undefined4 *)(iVar7 + 8));
    }
  }
  return;
}

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

// --- Direct3DVolume9Imp::OpenGLSide_SyncVolume @0x040b7ab0 ---
/* source: direct3dbasetexture9imp, direct3dvolume9imp */

undefined4 Direct3DVolume9Imp__OpenGLSide_SyncVolume(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x58);
  if (*(int *)(iVar1 + 0x284) < 1) {
    FUN_0400a810("(INT) mOpenGLTexturesCount > index",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.h"
                 ,0x8c,"OpenGLTexture* Direct3DBaseTexture9Imp::GetOpenGLTexture(INT)");
  }
  iVar1 = *(int *)(iVar1 + 0x244);
  if (iVar1 == 0) {
    FUN_0400a810(&PTR_DAT_042e85bd,
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dvolume9imp.cpp"
                 ,0x24e,"DWORD Direct3DVolume9Imp::OpenGLSide_SyncVolume(DWORD, LPVOID)");
  }
  uVar2 = Direct3DDevice9Imp__GetContextCache(*(int *)(param_1 + 0x54) + 0x40);
  FUN_0406d620(iVar1,uVar2);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x9c) + 4);
  if (*(char *)(param_1 + 0x88) == '\0') {
    if ((*(uint *)(param_1 + 0x90) & 3) == 0) {
      (*DAT_0451eecc)(0x806f,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x80),
                      *(undefined4 *)(param_1 + 0x7c),uVar2);
    }
    else {
      glPixelStorei(0xd05,2 - (*(uint *)(param_1 + 0x90) & 1));
      (*DAT_0451eecc)(0x806f,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x80),
                      *(undefined4 *)(param_1 + 0x7c),uVar2);
      glPixelStorei(0xd05,4);
    }
  }
  else {
    (*DAT_0451ee8c)(0x806f,*(undefined4 *)(param_1 + 0x5c),uVar2);
  }
  eON_SetEvent(*(undefined4 *)(*(int *)(param_1 + 0x54) + 0xed00));
  return 8;
}

// --- FramebufferCache::GetFramebufferHash @0x040c5690 ---
/* source: direct3dbasetexture9imp, framebuffercache */

int * FramebufferCache__GetFramebufferHash
                (int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                int param_7)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  bool bVar15;
  undefined4 local_140;
  bool local_109;
  int *local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  int local_cc;
  uint local_c8;
  int local_c4;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  int local_84;
  uint local_80;
  int local_7c;
  uint local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_140 = 0x40c56af;
  bzero(&local_5c,0x30);
  if ((param_2 != 0) && (*(int *)(param_2 + 0x70) != 0x4c4c554e)) {
    if (*(int *)(param_2 + 0x90) == 2) {
      iVar6 = *(int *)(param_2 + 0x94);
      iVar7 = iVar6;
      if (*(int *)(iVar6 + 0x284) < 1) {
        local_140 = 0x40c64ac;
        FUN_0400a810();
        iVar7 = *(int *)(param_2 + 0x94);
      }
      local_5c = *(int *)(*(int *)(iVar6 + 0x244) + 8);
      if (*(int *)(iVar7 + 0x228) == 1) {
        local_4c = *(uint *)(param_2 + 0xc4) | 0xf0000000;
      }
      else {
        local_4c = *(int *)(param_2 + 200) + -0x8515 + *(int *)(param_2 + 0xc4) * 6 | 0xf0000000;
      }
    }
    else {
      local_5c = *(int *)(param_2 + 0xd4);
    }
  }
  if (param_3 != 0) {
    if (*(int *)(param_3 + 0x90) == 2) {
      iVar6 = *(int *)(param_3 + 0x94);
      iVar7 = iVar6;
      if (*(int *)(iVar6 + 0x284) < 1) {
        local_140 = 0x40c638a;
        FUN_0400a810();
        iVar7 = *(int *)(param_3 + 0x94);
      }
      local_58 = *(int *)(*(int *)(iVar6 + 0x244) + 8);
      if (*(int *)(iVar7 + 0x228) == 1) {
        local_48 = *(uint *)(param_3 + 0xc4) | 0xf0000000;
      }
      else {
        local_48 = *(int *)(param_3 + 200) + -0x8515 + *(int *)(param_3 + 0xc4) * 6 | 0xf0000000;
      }
    }
    else {
      local_58 = *(int *)(param_3 + 0xd4);
    }
  }
  if (param_4 != 0) {
    if (*(int *)(param_4 + 0x90) == 2) {
      iVar6 = *(int *)(param_4 + 0x94);
      iVar7 = iVar6;
      if (*(int *)(iVar6 + 0x284) < 1) {
        local_140 = 0x40c635b;
        FUN_0400a810();
        iVar7 = *(int *)(param_4 + 0x94);
      }
      local_54 = *(int *)(*(int *)(iVar6 + 0x244) + 8);
      if (*(int *)(iVar7 + 0x228) == 1) {
        local_44 = *(uint *)(param_4 + 0xc4) | 0xf0000000;
      }
      else {
        local_44 = *(int *)(param_4 + 200) + -0x8515 + *(int *)(param_4 + 0xc4) * 6 | 0xf0000000;
      }
    }
    else {
      local_54 = *(int *)(param_4 + 0xd4);
    }
  }
  if (param_5 != 0) {
    if (*(int *)(param_5 + 0x90) == 2) {
      iVar6 = *(int *)(param_5 + 0x94);
      iVar7 = iVar6;
      if (*(int *)(iVar6 + 0x284) < 1) {
        local_140 = 0x40c641a;
        FUN_0400a810();
        iVar7 = *(int *)(param_5 + 0x94);
      }
      local_50 = *(int *)(*(int *)(iVar6 + 0x244) + 8);
      if (*(int *)(iVar7 + 0x228) == 1) {
        local_40 = *(uint *)(param_5 + 0xc4) | 0xf0000000;
      }
      else {
        local_40 = *(int *)(param_5 + 200) + -0x8515 + *(int *)(param_5 + 0xc4) * 6 | 0xf0000000;
      }
    }
    else {
      local_50 = *(int *)(param_5 + 0xd4);
    }
  }
  if (param_6 != 0) {
    if (*(int *)(param_6 + 0x90) == 2) {
      iVar6 = *(int *)(param_6 + 0x94);
      iVar7 = iVar6;
      if (*(int *)(iVar6 + 0x284) < 1) {
        local_140 = 0x40c63bc;
        FUN_0400a810();
        iVar7 = *(int *)(param_6 + 0x94);
      }
      local_3c = *(int *)(*(int *)(iVar6 + 0x244) + 8);
      if (*(int *)(iVar7 + 0x228) == 1) {
        local_38 = *(uint *)(param_6 + 0xc4) | 0xf0000000;
      }
      else {
        local_38 = *(int *)(param_6 + 200) + -0x8515 + *(int *)(param_6 + 0xc4) * 6 | 0xf0000000;
      }
    }
    else {
      local_3c = *(int *)(param_6 + 0xd4);
    }
  }
  if (param_7 != 0) {
    if (*(int *)(param_7 + 0x90) == 2) {
      iVar6 = *(int *)(param_7 + 0x94);
      iVar7 = iVar6;
      if (*(int *)(iVar6 + 0x284) < 1) {
        local_140 = 0x40c63eb;
        FUN_0400a810();
        iVar7 = *(int *)(param_7 + 0x94);
      }
      local_34 = *(int *)(*(int *)(iVar6 + 0x244) + 8);
      if (*(int *)(iVar7 + 0x228) == 1) {
        local_30 = *(uint *)(param_7 + 0xc4) | 0xf0000000;
      }
      else {
        local_30 = *(int *)(param_7 + 200) + -0x8515 + *(int *)(param_7 + 0xc4) * 6 | 0xf0000000;
      }
    }
    else {
      local_34 = *(int *)(param_7 + 0xd4);
    }
  }
  piVar13 = param_1 + 2;
  piVar2 = (int *)param_1[3];
  piVar10 = piVar13;
  if ((int *)param_1[3] != (int *)0x0) {
    do {
      while( true ) {
        piVar14 = piVar2;
        local_140 = 0x40c57b8;
        iVar6 = memcmp(piVar14 + 4,&local_5c,0x30);
        if (-1 < iVar6) break;
        piVar5 = piVar14 + 3;
        piVar2 = (int *)*piVar5;
        piVar14 = piVar10;
        if ((int *)*piVar5 == (int *)0x0) goto LAB_040c57c3;
      }
      piVar2 = (int *)piVar14[2];
      piVar10 = piVar14;
    } while ((int *)piVar14[2] != (int *)0x0);
LAB_040c57c3:
    if (piVar13 != piVar14) {
      local_140 = 0x40c57e2;
      iVar6 = memcmp(&local_5c,piVar14 + 4,0x30);
      if (-1 < iVar6) {
        local_140 = 0x40c57f8;
        FUN_040c5250();
        return piVar14 + 0x10;
      }
    }
  }
  local_140 = 0x40c5815;
  iVar6 = FUN_040c6d40();
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if ((param_2 != 0) && (*(int *)(param_2 + 0x70) != 0x4c4c554e)) {
    local_2c = 0x8ce0;
  }
  if (param_3 != 0) {
    local_28 = 0x8ce1;
  }
  if (param_4 != 0) {
    local_24 = 0x8ce2;
  }
  local_109 = param_4 != 0 || param_3 != 0;
  if (param_5 != 0) {
    local_20 = 0x8ce3;
    local_109 = true;
  }
  if (local_5c != 0) {
    *(undefined1 *)(param_2 + 0xd0) = 1;
    if (*(int *)(param_2 + 0x94) == 0) {
      local_140 = 0x40c619c;
      (*DAT_0451e67c)();
    }
    else {
      local_140 = 0x40c5dc4;
      (*DAT_0451e674)();
    }
  }
  if (local_109 != false) {
    if (local_58 != 0) {
      *(undefined1 *)(param_3 + 0xd0) = 1;
      if (*(int *)(param_3 + 0x94) == 0) {
        local_140 = 0x40c6527;
        (*DAT_0451e67c)();
      }
      else {
        local_140 = 0x40c62e8;
        (*DAT_0451e674)();
      }
    }
    if (local_54 != 0) {
      *(undefined1 *)(param_4 + 0xd0) = 1;
      if (*(int *)(param_4 + 0x94) == 0) {
        local_140 = 0x40c64db;
        (*DAT_0451e67c)();
      }
      else {
        local_140 = 0x40c6332;
        (*DAT_0451e674)();
      }
    }
    if (local_50 != 0) {
      *(undefined1 *)(param_5 + 0xd0) = 1;
      if (*(int *)(param_5 + 0x94) == 0) {
        local_140 = 0x40c6501;
        (*DAT_0451e67c)();
      }
      else {
        local_140 = 0x40c6116;
        (*DAT_0451e674)();
      }
    }
  }
  if (local_3c == 0) {
LAB_040c58df:
    if (local_34 != 0) goto LAB_040c5fce;
  }
  else {
    if (local_3c != local_34) {
      *(undefined1 *)(param_6 + 0xd0) = 1;
      if (*(int *)(param_6 + 0x94) == 0) {
        local_140 = 0x40c647e;
        (*DAT_0451e67c)();
      }
      else {
        local_140 = 0x40c5d75;
        (*DAT_0451e674)();
      }
      goto LAB_040c58df;
    }
LAB_040c5fce:
    *(undefined1 *)(param_7 + 0xd0) = 1;
    if (*(int *)(param_7 + 0x94) == 0) {
      local_140 = 0x40c6442;
      (*DAT_0451e67c)();
    }
    else {
      local_140 = 0x40c600f;
      (*DAT_0451e674)();
    }
  }
  iVar7 = local_2c;
  if (local_109 == false) {
    iVar9 = *param_1;
    if ((*(char *)(iVar9 + 0x34c) == '\0') || (local_2c != *(int *)(iVar9 + 0x33c))) {
      local_140 = 0x40c5916;
      (*DAT_0451eed0)();
      *(int *)(iVar9 + 0x33c) = iVar7;
      *(undefined4 *)(iVar9 + 0x340) = 0;
      *(undefined4 *)(iVar9 + 0x344) = 0;
      *(undefined4 *)(iVar9 + 0x348) = 0;
      *(undefined1 *)(iVar9 + 0x34c) = 1;
      iVar9 = *param_1;
    }
  }
  else {
    iVar9 = *param_1;
    local_140 = 0x40c6043;
    iVar7 = memcmp(&local_2c,(void *)(iVar9 + 0x33c),0x10);
    if (iVar7 != 0) {
      local_140 = 0x40c612c;
      (*DAT_0451ecc4)();
      *(int *)(iVar9 + 0x33c) = local_2c;
      *(int *)(iVar9 + 0x340) = local_28;
      *(int *)(iVar9 + 0x344) = local_24;
      *(int *)(iVar9 + 0x348) = local_20;
      bVar15 = false;
      if ((*(int *)(iVar9 + 0x340) == 0) && (*(int *)(iVar9 + 0x344) == 0)) {
        bVar15 = *(int *)(iVar9 + 0x348) == 0;
      }
      *(bool *)(iVar9 + 0x34c) = bVar15;
      iVar9 = *param_1;
    }
  }
  iVar7 = local_2c;
  if (*(int *)(iVar9 + 0x350) != local_2c) {
    local_140 = 0x40c595a;
    (*DAT_0451eed4)();
    *(int *)(iVar9 + 0x350) = iVar7;
  }
  local_140 = 0x40c596d;
  iVar7 = (*DAT_0451e688)();
  if (iVar7 != 0x8cd5) {
    switch(iVar7) {
    case 0x8cd6:
      local_140 = 0x40c6291;
      FUN_0402cd10();
      break;
    case 0x8cd7:
      local_140 = 0x40c626e;
      FUN_0402cd10();
      break;
    default:
      local_140 = 0x40c59a5;
      FUN_0402cd10();
      break;
    case 0x8cd9:
      local_140 = 0x40c624b;
      FUN_0402cd10();
      break;
    case 0x8cda:
      local_140 = 0x40c6228;
      FUN_0402cd10();
      break;
    case 0x8cdb:
      local_140 = 0x40c6205;
      FUN_0402cd10();
      break;
    case 0x8cdc:
      local_140 = 0x40c61e2;
      FUN_0402cd10();
      break;
    case 0x8cdd:
      local_140 = 0x40c61bf;
      FUN_0402cd10();
    }
    local_140 = 0x40c59cc;
    FUN_0400a810();
  }
  iVar4 = local_20;
  iVar3 = local_24;
  iVar9 = local_28;
  iVar7 = local_2c;
  piVar2 = (int *)param_1[3];
  piVar10 = piVar13;
  piVar5 = piVar2;
  piVar14 = piVar13;
  if (piVar2 == (int *)0x0) {
LAB_040c5a76:
    local_b8 = 0;
    local_b4 = 0;
    local_b0 = 0;
    local_ec = local_5c;
    local_ac = 0;
    local_bc = 0;
    local_a8 = 0;
    local_e8 = local_58;
    local_e4 = local_54;
    local_e0 = local_50;
    local_dc = local_4c;
    local_d8 = local_48;
    local_d4 = local_44;
    local_d0 = local_40;
    local_cc = local_3c;
    local_c8 = local_38;
    local_c4 = local_34;
    local_c0 = local_30;
    local_140 = 0x40c5b4d;
    FUN_040c68f0();
    piVar12 = &local_140;
    piVar2 = (int *)param_1[3];
    local_f0[0x10] = iVar6;
    local_f0[0x11] = iVar7;
    local_f0[0x12] = iVar9;
    local_f0[0x13] = iVar3;
    local_f0[0x14] = iVar4;
    *(bool *)(local_f0 + 0x15) = local_109;
    piVar10 = piVar13;
    piVar5 = &local_140;
    if (piVar2 != (int *)0x0) goto LAB_040c5bc1;
  }
  else {
    do {
      while( true ) {
        piVar11 = piVar5;
        local_140 = 0x40c5a30;
        iVar8 = memcmp(piVar11 + 4,&local_5c,0x30);
        if (-1 < iVar8) break;
        piVar1 = piVar11 + 3;
        piVar11 = piVar10;
        piVar5 = (int *)*piVar1;
        if ((int *)*piVar1 == (int *)0x0) goto LAB_040c5a3b;
      }
      piVar10 = piVar11;
      piVar5 = (int *)piVar11[2];
    } while ((int *)piVar11[2] != (int *)0x0);
LAB_040c5a3b:
    if (piVar13 == piVar11) goto LAB_040c5a76;
    local_140 = 0x40c5a68;
    iVar8 = memcmp(&local_5c,piVar11 + 4,0x30);
    if (iVar8 < 0) goto LAB_040c5a76;
    piVar11[0x11] = iVar7;
    piVar11[0x12] = iVar9;
    piVar11[0x10] = iVar6;
    piVar11[0x13] = iVar3;
    piVar11[0x14] = iVar4;
    *(bool *)(piVar11 + 0x15) = local_109;
    piVar5 = (int *)&stack0xfffffec4;
LAB_040c5bc1:
    do {
      while( true ) {
        piVar12 = piVar5;
        piVar10 = piVar2;
        piVar12[2] = 0x30;
        piVar12[1] = (int)&local_5c;
        *piVar12 = (int)(piVar10 + 4);
        piVar12[-1] = 0x40c5bd8;
        iVar6 = memcmp((void *)*piVar12,(void *)piVar12[1],piVar12[2]);
        piVar5 = piVar12;
        if (-1 < iVar6) break;
        piVar11 = piVar10 + 3;
        piVar2 = (int *)*piVar11;
        piVar10 = piVar14;
        if ((int *)*piVar11 == (int *)0x0) goto LAB_040c5be3;
      }
      piVar2 = (int *)piVar10[2];
      piVar14 = piVar10;
    } while ((int *)piVar10[2] != (int *)0x0);
LAB_040c5be3:
    if (piVar13 != piVar10) {
      piVar12[2] = 0x30;
      piVar12[1] = (int)(piVar10 + 4);
      *piVar12 = (int)&local_5c;
      piVar12[-1] = 0x40c5c02;
      iVar6 = memcmp((void *)*piVar12,(void *)piVar12[1],piVar12[2]);
      if (-1 < iVar6) goto LAB_040c5cc0;
    }
  }
  piVar12[2] = (int)piVar10;
  piVar12[1] = (int)(param_1 + 1);
  local_70 = 0;
  local_6c = 0;
  local_a4 = local_5c;
  local_68 = 0;
  local_64 = 0;
  local_74 = 0;
  local_a0 = local_58;
  local_60 = 0;
  local_9c = local_54;
  local_98 = local_50;
  local_94 = local_4c;
  local_90 = local_48;
  local_8c = local_44;
  local_88 = local_40;
  local_84 = local_3c;
  local_80 = local_38;
  local_7c = local_34;
  local_78 = local_30;
  piVar12[3] = (int)&local_a4;
  *piVar12 = (int)&local_f0;
  piVar12[-1] = 0x40c5cb7;
  FUN_040c68f0();
  piVar10 = local_f0;
LAB_040c5cc0:
  return piVar10 + 0x10;
}

// --- direct3dbasetexture9imp_040b5940 @0x040b5940 ---
/* source: direct3dbasetexture9imp, direct3dvolume9imp */

void __regparm3 direct3dbasetexture9imp_040b5940(int param_1,int param_2,char param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (*(int *)(param_1 + 0x60) == 0x4c4c554e) {
    FUN_0400a810("mDesc.Format != D3DFMT_NULL",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dvolume9imp.cpp"
                 ,0x271,
                 "void Direct3DVolume9Imp::UploadOpenGLObjectData(INT, LPBYTE, bool, const D3DBOX*)"
                );
    iVar1 = *(int *)(param_1 + 0x6c);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x6c);
  }
  if (iVar1 - 2U < 2) {
    FUN_0400a810("!IsPlainVolume()",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dvolume9imp.cpp"
                 ,0x272,
                 "void Direct3DVolume9Imp::UploadOpenGLObjectData(INT, LPBYTE, bool, const D3DBOX*)"
                );
  }
  direct3dbasetexture9imp_0406db60(*(int *)(param_1 + 0x58) + 4,0);
  iVar1 = *(int *)(param_1 + 0x58);
  if (*(int *)(iVar1 + 0x284) < 1) {
    FUN_0400a810("(INT) mOpenGLTexturesCount > index",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.h"
                 ,0x8c,"OpenGLTexture* Direct3DBaseTexture9Imp::GetOpenGLTexture(INT)");
  }
  iVar1 = *(int *)(iVar1 + 0x244);
  if (iVar1 == 0) {
    FUN_0400a810(&PTR_DAT_042e85bd,
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dvolume9imp.cpp"
                 ,0x282,
                 "void Direct3DVolume9Imp::UploadOpenGLObjectData(INT, LPBYTE, bool, const D3DBOX*)"
                );
  }
  uVar5 = Direct3DDevice9Imp__GetContextCache(*(int *)(param_1 + 0x54) + 0x40);
  FUN_0406d620(iVar1,uVar5);
  if (*(char *)(param_1 + 0x88) == '\0') {
    bVar8 = (*(uint *)(param_1 + 0x90) & 3) != 0;
    if (bVar8) {
      glPixelStorei(0xcf5,2 - (*(uint *)(param_1 + 0x90) & 1));
    }
    if (param_3 == '\0') {
      param_2 = *(int *)(param_1 + 0x8c) * *param_4 +
                param_4[1] * *(int *)(param_1 + 0x90) + param_4[4] * *(int *)(param_1 + 0x94) +
                param_2;
      iVar7 = param_4[3] - param_4[1];
      iVar6 = param_4[2] - *param_4;
      iVar2 = param_4[5];
      iVar3 = param_4[4];
      iVar4 = *(int *)(param_1 + 0x70);
      if (iVar6 != iVar4) {
        glPixelStorei(0xcf2,iVar4);
      }
      if (iVar7 == *(int *)(param_1 + 0x74)) {
        (*DAT_0451eeb0)(0x806f,*(undefined4 *)(param_1 + 0x5c),*param_4,param_4[1],param_4[4],iVar6,
                        iVar7,iVar2 - iVar3,*(undefined4 *)(param_1 + 0x80),
                        *(undefined4 *)(param_1 + 0x7c),param_2);
      }
      else {
        glPixelStorei(0x806e,*(int *)(param_1 + 0x74));
        (*DAT_0451eeb0)(0x806f,*(undefined4 *)(param_1 + 0x5c),*param_4,param_4[1],param_4[4],iVar6,
                        iVar7,iVar2 - iVar3,*(undefined4 *)(param_1 + 0x80),
                        *(undefined4 *)(param_1 + 0x7c),param_2);
        glPixelStorei(0x806e,0);
      }
      if (iVar6 != iVar4) {
        glPixelStorei(0xcf2,0);
      }
    }
    else {
      (*DAT_0451eeb0)(0x806f,*(undefined4 *)(param_1 + 0x5c),0,0,0,*(undefined4 *)(param_1 + 0x70),
                      *(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78),
                      *(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x7c),param_2);
    }
    if (bVar8) {
      glPixelStorei(0xcf5,4);
      *(undefined1 *)(iVar1 + 0x10) = 1;
      return;
    }
  }
  else {
    if (param_3 == '\0') {
      FUN_0400a810("fullUpdate",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dvolume9imp.cpp"
                   ,0x294,
                   "void Direct3DVolume9Imp::UploadOpenGLObjectData(INT, LPBYTE, bool, const D3DBOX*)"
                  );
    }
    (*DAT_0451ee90)(0x806f,*(undefined4 *)(param_1 + 0x5c),0,0,0,*(undefined4 *)(param_1 + 0x70),
                    *(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78),
                    *(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x98),param_2);
  }
  *(undefined1 *)(iVar1 + 0x10) = 1;
  return;
}

// --- direct3dbasetexture9imp_040b7c40 @0x040b7c40 ---
/* source: direct3dbasetexture9imp, direct3dvolume9imp */

void direct3dbasetexture9imp_040b7c40(int param_1,int param_2,int param_3,char param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (*(int *)(param_1 + 0x60) == 0x4c4c554e) {
    FUN_0400a810("mDesc.Format != D3DFMT_NULL",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dvolume9imp.cpp"
                 ,0x271,
                 "void Direct3DVolume9Imp::UploadOpenGLObjectData(INT, LPBYTE, bool, const D3DBOX*)"
                );
    iVar1 = *(int *)(param_1 + 0x6c);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x6c);
  }
  if (iVar1 - 2U < 2) {
    FUN_0400a810("!IsPlainVolume()",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dvolume9imp.cpp"
                 ,0x272,
                 "void Direct3DVolume9Imp::UploadOpenGLObjectData(INT, LPBYTE, bool, const D3DBOX*)"
                );
  }
  direct3dbasetexture9imp_0406db60(*(int *)(param_1 + 0x58) + 4,param_2);
  iVar1 = *(int *)(param_1 + 0x58);
  if (*(int *)(iVar1 + 0x284) <= param_2) {
    FUN_0400a810("(INT) mOpenGLTexturesCount > index",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dbasetexture9imp.h"
                 ,0x8c,"OpenGLTexture* Direct3DBaseTexture9Imp::GetOpenGLTexture(INT)");
  }
  iVar1 = *(int *)(iVar1 + 0x244 + param_2 * 4);
  if (iVar1 == 0) {
    FUN_0400a810(&PTR_DAT_042e85bd,
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dvolume9imp.cpp"
                 ,0x282,
                 "void Direct3DVolume9Imp::UploadOpenGLObjectData(INT, LPBYTE, bool, const D3DBOX*)"
                );
  }
  uVar5 = Direct3DDevice9Imp__GetContextCache(*(int *)(param_1 + 0x54) + 0x40);
  FUN_0406d620(iVar1,uVar5);
  if (*(char *)(param_1 + 0x88) == '\0') {
    bVar8 = (*(uint *)(param_1 + 0x90) & 3) != 0;
    if (bVar8) {
      glPixelStorei(0xcf5,2 - (*(uint *)(param_1 + 0x90) & 1));
    }
    if (param_4 == '\0') {
      param_3 = *(int *)(param_1 + 0x8c) * *param_5 +
                param_5[1] * *(int *)(param_1 + 0x90) + param_5[4] * *(int *)(param_1 + 0x94) +
                param_3;
      iVar7 = param_5[3] - param_5[1];
      iVar6 = param_5[2] - *param_5;
      iVar2 = param_5[5];
      iVar3 = param_5[4];
      iVar4 = *(int *)(param_1 + 0x70);
      if (iVar4 != iVar6) {
        glPixelStorei(0xcf2,iVar4);
      }
      if (iVar7 == *(int *)(param_1 + 0x74)) {
        (*DAT_0451eeb0)(0x806f,*(undefined4 *)(param_1 + 0x5c),*param_5,param_5[1],param_5[4],iVar6,
                        iVar7,iVar2 - iVar3,*(undefined4 *)(param_1 + 0x80),
                        *(undefined4 *)(param_1 + 0x7c),param_3);
      }
      else {
        glPixelStorei(0x806e,*(int *)(param_1 + 0x74));
        (*DAT_0451eeb0)(0x806f,*(undefined4 *)(param_1 + 0x5c),*param_5,param_5[1],param_5[4],iVar6,
                        iVar7,iVar2 - iVar3,*(undefined4 *)(param_1 + 0x80),
                        *(undefined4 *)(param_1 + 0x7c),param_3);
        glPixelStorei(0x806e,0);
      }
      if (iVar4 != iVar6) {
        glPixelStorei(0xcf2,0);
      }
    }
    else {
      (*DAT_0451eeb0)(0x806f,*(undefined4 *)(param_1 + 0x5c),0,0,0,*(undefined4 *)(param_1 + 0x70),
                      *(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78),
                      *(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x7c),param_3);
    }
    if (bVar8) {
      glPixelStorei(0xcf5,4);
      *(undefined1 *)(iVar1 + 0x10) = 1;
      return;
    }
  }
  else {
    if (param_4 == '\0') {
      FUN_0400a810("fullUpdate",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dvolume9imp.cpp"
                   ,0x294,
                   "void Direct3DVolume9Imp::UploadOpenGLObjectData(INT, LPBYTE, bool, const D3DBOX*)"
                  );
    }
    (*DAT_0451ee90)(0x806f,*(undefined4 *)(param_1 + 0x5c),0,0,0,*(undefined4 *)(param_1 + 0x70),
                    *(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78),
                    *(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x98),param_3);
  }
  *(undefined1 *)(iVar1 + 0x10) = 1;
  return;
}

