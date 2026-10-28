// Recovered source: eon2/src/dlls/directx/d3d9/openGlContextCache.h
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- OpenGLContextCache::LightDirection @0x04091490 ---
/* source: openGlContextCache */

void OpenGLContextCache__LightDirection(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar9 = *(int *)(param_1 + 0xeb48);
  iVar5 = memcmp((void *)(param_1 + 0x83b0),(void *)(iVar9 + 0x1b8),0x40);
  bVar10 = iVar5 != 0;
  if (*(int *)(iVar9 + 0x500) != 0x1700) {
    if (*(char *)(iVar9 + 0x218) != '\0') {
      FUN_0400a810("!mUsingOpenGLCore",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                   ,0x3bc,"void OpenGLContextCache::glMatrixMode(GLenum)");
    }
    glMatrixMode(0x1700);
    *(undefined4 *)(iVar9 + 0x500) = 0x1700;
  }
  glPushMatrix();
  glLoadMatrixf((void *)(param_1 + 0x83b0));
  if (0 < *(int *)(param_1 + 0x79c0)) {
    iVar9 = 0x4000;
    do {
      iVar2 = param_1 + 0x7640 + *(int *)(param_1 + -0x8660 + iVar9 * 4) * 0x6c;
      iVar5 = *(int *)(param_1 + 0xeb48);
      iVar1 = iVar9 * 4;
      iVar6 = iVar1 + -0x10000;
      iVar8 = iVar5 + 0x500 + iVar6 * 4;
      iVar7 = memcmp((void *)(iVar8 + 8),(void *)(iVar2 + 8),0x10);
      if (iVar7 != 0) {
        if (*(char *)(iVar5 + 0x218) != '\0') {
          FUN_0400a810("!mUsingOpenGLCore",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                       ,0x324,"void OpenGLContextCache::LightDiffuse(int32_t, const GLfloat*)");
        }
        glLightfv(iVar9,0x1201,(void *)(iVar2 + 8));
        *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar2 + 8);
        *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)(iVar2 + 0xc);
        *(undefined4 *)(iVar8 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
        *(undefined4 *)(iVar8 + 0x14) = *(undefined4 *)(iVar2 + 0x14);
        iVar5 = *(int *)(param_1 + 0xeb48);
      }
      iVar8 = iVar5 + 0x580 + iVar6 * 4;
      iVar7 = memcmp((void *)(iVar8 + 8),(void *)(iVar2 + 0x18),0x10);
      if (iVar7 != 0) {
        if (*(char *)(iVar5 + 0x218) != '\0') {
          FUN_0400a810("!mUsingOpenGLCore",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                       ,0x32e,"void OpenGLContextCache::LightSpecular(int32_t, const GLfloat*)");
        }
        glLightfv(iVar9,0x1202,(void *)(iVar2 + 0x18));
        *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar2 + 0x18);
        *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)(iVar2 + 0x1c);
        *(undefined4 *)(iVar8 + 0x10) = *(undefined4 *)(iVar2 + 0x20);
        *(undefined4 *)(iVar8 + 0x14) = *(undefined4 *)(iVar2 + 0x24);
        iVar5 = *(int *)(param_1 + 0xeb48);
      }
      iVar6 = iVar5 + 0x600 + iVar6 * 4;
      iVar8 = memcmp((void *)(iVar6 + 8),(void *)(iVar2 + 0x28),0x10);
      if (iVar8 != 0) {
        if (*(char *)(iVar5 + 0x218) != '\0') {
          FUN_0400a810("!mUsingOpenGLCore",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                       ,0x338,"void OpenGLContextCache::LightAmbient(int32_t, const GLfloat*)");
        }
        glLightfv(iVar9,0x1200,(void *)(iVar2 + 0x28));
        *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar2 + 0x28);
        *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar2 + 0x2c);
        *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar2 + 0x30);
        *(undefined4 *)(iVar6 + 0x14) = *(undefined4 *)(iVar2 + 0x34);
        iVar5 = *(int *)(param_1 + 0xeb48);
      }
      fVar3 = *(float *)(iVar2 + 0x68);
      if (fVar3 != *(float *)(iVar5 + 8 + (iVar9 + -0x3e20) * 4)) {
        if (*(char *)(iVar5 + 0x218) != '\0') {
          FUN_0400a810("!mUsingOpenGLCore",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                       ,0x358,"void OpenGLContextCache::LightPhi(int32_t, float)");
        }
        glLightf(iVar9,0x1206,(DAT_042f739c * fVar3) / DAT_042f73a0);
        *(float *)(iVar5 + 8 + (iVar9 + -0x3e20) * 4) = fVar3;
        iVar5 = *(int *)(param_1 + 0xeb48);
      }
      fVar3 = *(float *)(iVar2 + 0x54);
      if (fVar3 != *(float *)(iVar5 + 8 + (iVar9 + -0x3e18) * 4)) {
        if (*(char *)(iVar5 + 0x218) != '\0') {
          FUN_0400a810("!mUsingOpenGLCore",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                       ,0x362,"void OpenGLContextCache::LightFalloff(int32_t, float)");
        }
        glLightf(iVar9,0x1205,fVar3);
        *(float *)(iVar5 + 8 + (iVar9 + -0x3e18) * 4) = fVar3;
        iVar5 = *(int *)(param_1 + 0xeb48);
      }
      fVar3 = *(float *)(iVar2 + 0x58);
      if (fVar3 != *(float *)(iVar5 + 8 + (iVar9 + -0x3e10) * 4)) {
        if (*(char *)(iVar5 + 0x218) != '\0') {
          FUN_0400a810("!mUsingOpenGLCore",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                       ,0x36c,"void OpenGLContextCache::LightAttenuationConstant(int32_t, float)");
        }
        glLightf(iVar9,0x1207,fVar3);
        *(float *)(iVar5 + 8 + (iVar9 + -0x3e10) * 4) = fVar3;
        iVar5 = *(int *)(param_1 + 0xeb48);
      }
      fVar3 = *(float *)(iVar2 + 0x5c);
      if (fVar3 != *(float *)(iVar5 + 8 + (iVar9 + -0x3e08) * 4)) {
        if (*(char *)(iVar5 + 0x218) != '\0') {
          FUN_0400a810("!mUsingOpenGLCore",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                       ,0x376,"void OpenGLContextCache::LightAttenuationLinear(int32_t, float)");
        }
        glLightf(iVar9,0x1208,fVar3);
        *(float *)(iVar5 + 8 + (iVar9 + -0x3e08) * 4) = fVar3;
        iVar5 = *(int *)(param_1 + 0xeb48);
      }
      fVar3 = *(float *)(iVar2 + 0x60);
      if (fVar3 != *(float *)(iVar5 + 8 + (iVar9 + -0x3e00) * 4)) {
        if (*(char *)(iVar5 + 0x218) != '\0') {
          FUN_0400a810("!mUsingOpenGLCore",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                       ,0x380,"void OpenGLContextCache::LightAttenuationQuadratic(int32_t, float)");
        }
        glLightf(iVar9,0x1209,fVar3);
        *(float *)(iVar5 + 8 + (iVar9 + -0x3e00) * 4) = fVar3;
        iVar5 = *(int *)(param_1 + 0xeb48);
      }
      if ((bVar10) ||
         (iVar6 = memcmp((void *)(iVar5 + 8 + (iVar1 + -0xfe60) * 4),(void *)(iVar2 + 0x38),0xc),
         iVar6 != 0)) {
        if (*(char *)(iVar5 + 0x218) != '\0') {
          FUN_0400a810("!mUsingOpenGLCore",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                       ,0x343,
                       "void OpenGLContextCache::LightPosition(int32_t, const GLfloat*, bool)");
        }
        iVar5 = iVar5 + (iVar1 + -0xfe60) * 4;
        *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar2 + 0x38);
        *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar2 + 0x3c);
        *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar2 + 0x40);
        glLightfv(iVar9,0x1203,iVar5 + 8);
        iVar5 = *(int *)(param_1 + 0xeb48);
        if (!bVar10) goto LAB_04091559;
        cVar4 = *(char *)(iVar5 + 0x218);
joined_r0x0409158b:
        if (cVar4 != '\0') {
          FUN_0400a810("!mUsingOpenGLCore",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                       ,0x34e,
                       "void OpenGLContextCache::LightDirection(int32_t, const GLfloat*, bool)");
        }
        iVar5 = iVar5 + (iVar1 + -0xfe40) * 4;
        *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar2 + 0x44);
        *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar2 + 0x48);
        *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar2 + 0x4c);
        glLightfv(iVar9,0x1204,iVar5 + 8);
      }
      else {
LAB_04091559:
        iVar6 = memcmp((void *)(iVar5 + 8 + (iVar1 + -0xfe40) * 4),(void *)(iVar2 + 0x44),0xc);
        if (iVar6 != 0) {
          cVar4 = *(char *)(iVar5 + 0x218);
          goto joined_r0x0409158b;
        }
      }
      iVar5 = iVar9 + -0x3fff;
      iVar9 = iVar9 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x79c0));
  }
  glPopMatrix();
  if (bVar10) {
    iVar9 = *(int *)(param_1 + 0xeb48);
    *(undefined4 *)(iVar9 + 0x1b8) = *(undefined4 *)(param_1 + 0x83b0);
    *(undefined4 *)(iVar9 + 0x1bc) = *(undefined4 *)(param_1 + 0x83b4);
    *(undefined4 *)(iVar9 + 0x1c0) = *(undefined4 *)(param_1 + 0x83b8);
    *(undefined4 *)(iVar9 + 0x1c4) = *(undefined4 *)(param_1 + 0x83bc);
    *(undefined4 *)(iVar9 + 0x1c8) = *(undefined4 *)(param_1 + 0x83c0);
    *(undefined4 *)(iVar9 + 0x1cc) = *(undefined4 *)(param_1 + 0x83c4);
    *(undefined4 *)(iVar9 + 0x1d0) = *(undefined4 *)(param_1 + 0x83c8);
    *(undefined4 *)(iVar9 + 0x1d4) = *(undefined4 *)(param_1 + 0x83cc);
    *(undefined4 *)(iVar9 + 0x1d8) = *(undefined4 *)(param_1 + 0x83d0);
    *(undefined4 *)(iVar9 + 0x1dc) = *(undefined4 *)(param_1 + 0x83d4);
    *(undefined4 *)(iVar9 + 0x1e0) = *(undefined4 *)(param_1 + 0x83d8);
    *(undefined4 *)(iVar9 + 0x1e4) = *(undefined4 *)(param_1 + 0x83dc);
    *(undefined4 *)(iVar9 + 0x1e8) = *(undefined4 *)(param_1 + 0x83e0);
    *(undefined4 *)(iVar9 + 0x1ec) = *(undefined4 *)(param_1 + 0x83e4);
    *(undefined4 *)(iVar9 + 0x1f0) = *(undefined4 *)(param_1 + 0x83e8);
    *(undefined4 *)(iVar9 + 500) = *(undefined4 *)(param_1 + 0x83ec);
  }
  return;
}

// --- OpenGLContextCache::MaterialShininess @0x04091f80 ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* source: openGlContextCache */

undefined4
OpenGLContextCache__MaterialShininess
          (int param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  float fVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  float fVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined4 local_34;
  int local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  
  iVar8 = FUN_040e5e80(*(undefined4 *)(param_1 + 0xeb54),param_2);
  iVar9 = FUN_040e5e80(*(undefined4 *)(param_1 + 0xeb54),param_3);
  bVar5 = false;
  if (((*(char *)(*(int *)(param_1 + 0xe9d4) + 0x70) == '\0') &&
      (bVar5 = true, *(int *)(param_1 + 0x7c5c) == 0)) &&
     (bVar5 = false, *(int *)(param_1 + 0x79cc) != 0)) {
    iVar11 = *(int *)(param_1 + 0x79c4);
    if (iVar11 != *(int *)(param_1 + 0x79c8)) {
      FUN_040910a0(param_1);
      iVar11 = *(int *)(param_1 + 0x79c4);
      *(int *)(param_1 + 0x79c8) = iVar11;
    }
    if (*(char *)(param_1 + 0xeb4c) == '\0') {
      iVar12 = *(int *)(param_1 + 0xeb48);
      if (iVar11 != *(int *)(iVar12 + 0x19c)) {
        OpenGLContextCache__LightDirection(param_1);
        iVar12 = *(int *)(param_1 + 0xeb48);
        *(undefined4 *)(iVar12 + 0x19c) = *(undefined4 *)(param_1 + 0x79c4);
      }
      if (*(int *)(param_1 + 0x7c54) != *(int *)(iVar12 + 0x1a0)) {
        iVar11 = memcmp((undefined4 *)(iVar12 + 0x828),(void *)(param_1 + 0x7c10),0x10);
        if (iVar11 != 0) {
          if (*(char *)(iVar12 + 0x218) != '\0') {
            FUN_0400a810("!mUsingOpenGLCore",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                         ,0x38a,"void OpenGLContextCache::MaterialDiffuse(const GLfloat*)");
          }
          glMaterialfv(0x404,0x1201,(void *)(param_1 + 0x7c10));
          *(undefined4 *)(iVar12 + 0x828) = *(undefined4 *)(param_1 + 0x7c10);
          *(undefined4 *)(iVar12 + 0x82c) = *(undefined4 *)(param_1 + 0x7c14);
          *(undefined4 *)(iVar12 + 0x830) = *(undefined4 *)(param_1 + 0x7c18);
          *(undefined4 *)(iVar12 + 0x834) = *(undefined4 *)(param_1 + 0x7c1c);
          iVar12 = *(int *)(param_1 + 0xeb48);
        }
        iVar11 = memcmp((undefined4 *)(iVar12 + 0x838),(void *)(param_1 + 0x7c20),0x10);
        if (iVar11 != 0) {
          if (*(char *)(iVar12 + 0x218) != '\0') {
            FUN_0400a810("!mUsingOpenGLCore",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                         ,0x394,"void OpenGLContextCache::MaterialAmbient(const GLfloat*)");
          }
          glMaterialfv(0x404,0x1200,(void *)(param_1 + 0x7c20));
          *(undefined4 *)(iVar12 + 0x838) = *(undefined4 *)(param_1 + 0x7c20);
          *(undefined4 *)(iVar12 + 0x83c) = *(undefined4 *)(param_1 + 0x7c24);
          *(undefined4 *)(iVar12 + 0x840) = *(undefined4 *)(param_1 + 0x7c28);
          *(undefined4 *)(iVar12 + 0x844) = *(undefined4 *)(param_1 + 0x7c2c);
          iVar12 = *(int *)(param_1 + 0xeb48);
        }
        iVar11 = memcmp((undefined4 *)(iVar12 + 0x848),(void *)(param_1 + 0x7c30),0x10);
        if (iVar11 != 0) {
          if (*(char *)(iVar12 + 0x218) != '\0') {
            FUN_0400a810("!mUsingOpenGLCore",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                         ,0x39e,"void OpenGLContextCache::MaterialSpecular(const GLfloat*)");
          }
          glMaterialfv(0x404,0x1202,(void *)(param_1 + 0x7c30));
          *(undefined4 *)(iVar12 + 0x848) = *(undefined4 *)(param_1 + 0x7c30);
          *(undefined4 *)(iVar12 + 0x84c) = *(undefined4 *)(param_1 + 0x7c34);
          *(undefined4 *)(iVar12 + 0x850) = *(undefined4 *)(param_1 + 0x7c38);
          *(undefined4 *)(iVar12 + 0x854) = *(undefined4 *)(param_1 + 0x7c3c);
          iVar12 = *(int *)(param_1 + 0xeb48);
        }
        iVar11 = memcmp((undefined4 *)(iVar12 + 0x858),(void *)(param_1 + 0x7c40),0x10);
        if (iVar11 != 0) {
          if (*(char *)(iVar12 + 0x218) != '\0') {
            FUN_0400a810("!mUsingOpenGLCore",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                         ,0x3a8,"void OpenGLContextCache::MaterialEmission(const GLfloat*)");
          }
          glMaterialfv(0x404,0x1600,(void *)(param_1 + 0x7c40));
          *(undefined4 *)(iVar12 + 0x858) = *(undefined4 *)(param_1 + 0x7c40);
          *(undefined4 *)(iVar12 + 0x85c) = *(undefined4 *)(param_1 + 0x7c44);
          *(undefined4 *)(iVar12 + 0x860) = *(undefined4 *)(param_1 + 0x7c48);
          *(undefined4 *)(iVar12 + 0x864) = *(undefined4 *)(param_1 + 0x7c4c);
          iVar12 = *(int *)(param_1 + 0xeb48);
        }
        fVar1 = *(float *)(param_1 + 0x7c50);
        if (fVar1 != *(float *)(iVar12 + 0x868)) {
          if (*(char *)(iVar12 + 0x218) != '\0') {
            FUN_0400a810("!mUsingOpenGLCore",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                         ,0x3b2,"void OpenGLContextCache::MaterialShininess(GLfloat)");
          }
          glMaterialf(0x404,0x1601,fVar1);
          *(float *)(iVar12 + 0x868) = fVar1;
          iVar12 = *(int *)(param_1 + 0xeb48);
        }
        *(undefined4 *)(iVar12 + 0x1a0) = *(undefined4 *)(param_1 + 0x7c54);
      }
      local_30 = *(int *)(param_1 + 0x7a1c);
      bVar5 = false;
      if (local_30 != *(int *)(iVar12 + 0x1a4)) {
        uVar4 = *(uint *)(param_1 + 0x7a18);
        local_2c = (DAT_042dbf34 * 0.0 + (float)(uVar4 >> 0x10 & 0xff)) / _DAT_042dc5a0;
        local_28 = (DAT_042dbf34 * 0.0 + (float)(uVar4 >> 8 & 0xff)) / _DAT_042dc5a0;
        local_24 = (DAT_042dbf34 * 0.0 + (float)(uVar4 & 0xff)) / _DAT_042dc5a0;
        local_20 = ((float)(uVar4 >> 0x18) + 0.0) / _DAT_042dc5a0;
        iVar11 = memcmp((void *)(iVar12 + 0x478),&local_2c,0x10);
        if (iVar11 != 0) {
          glLightModelfv(0xb53,&local_2c);
          *(float *)(iVar12 + 0x478) = local_2c;
          *(float *)(iVar12 + 0x47c) = local_28;
          *(float *)(iVar12 + 0x480) = local_24;
          *(float *)(iVar12 + 0x484) = local_20;
          local_30 = *(int *)(param_1 + 0x7a1c);
          iVar12 = *(int *)(param_1 + 0xeb48);
        }
        *(int *)(iVar12 + 0x1a4) = local_30;
        bVar5 = false;
      }
    }
    else {
      iVar12 = *(int *)(param_1 + 0xeb78);
      if (*(int *)(iVar12 + 0x18) != iVar11) {
        FUN_04091ce0(param_1);
        iVar12 = *(int *)(param_1 + 0xeb78);
        *(undefined4 *)(iVar12 + 0x18) = *(undefined4 *)(param_1 + 0x79c4);
      }
      if (*(int *)(param_1 + 0x7c54) != *(int *)(iVar12 + 0x1c)) {
        *(undefined4 *)(iVar12 + 0xf3c) = *(undefined4 *)(param_1 + 0x7c40);
        *(undefined4 *)(iVar12 + 0xf40) = *(undefined4 *)(param_1 + 0x7c44);
        *(undefined4 *)(iVar12 + 0xf44) = *(undefined4 *)(param_1 + 0x7c48);
        *(undefined4 *)(iVar12 + 0xf48) = *(undefined4 *)(param_1 + 0x7c4c);
        *(undefined4 *)(iVar12 + 0xf4c) = *(undefined4 *)(param_1 + 0x7c20);
        *(undefined4 *)(iVar12 + 0xf50) = *(undefined4 *)(param_1 + 0x7c24);
        *(undefined4 *)(iVar12 + 0xf54) = *(undefined4 *)(param_1 + 0x7c28);
        *(undefined4 *)(iVar12 + 0xf58) = *(undefined4 *)(param_1 + 0x7c2c);
        *(undefined4 *)(iVar12 + 0xf5c) = *(undefined4 *)(param_1 + 0x7c10);
        *(undefined4 *)(iVar12 + 0xf60) = *(undefined4 *)(param_1 + 0x7c14);
        *(undefined4 *)(iVar12 + 0xf64) = *(undefined4 *)(param_1 + 0x7c18);
        *(undefined4 *)(iVar12 + 0xf68) = *(undefined4 *)(param_1 + 0x7c1c);
        *(undefined4 *)(iVar12 + 0xf6c) = *(undefined4 *)(param_1 + 0x7c30);
        *(undefined4 *)(iVar12 + 0xf70) = *(undefined4 *)(param_1 + 0x7c34);
        *(undefined4 *)(iVar12 + 0xf74) = *(undefined4 *)(param_1 + 0x7c38);
        *(undefined4 *)(iVar12 + 0xf78) = *(undefined4 *)(param_1 + 0x7c3c);
        *(undefined4 *)(iVar12 + 0xf7c) = *(undefined4 *)(param_1 + 0x7c50);
        iVar12 = *(int *)(param_1 + 0xeb78);
        uVar3 = *(undefined4 *)(param_1 + 0x7c54);
        *(int *)(iVar12 + 0x24) = *(int *)(iVar12 + 0x24) + 1;
        *(undefined4 *)(iVar12 + 0x1c) = uVar3;
      }
      fVar6 = _DAT_042dc5a0;
      fVar1 = DAT_042dbf34;
      iVar11 = *(int *)(param_1 + 0x7a1c);
      bVar5 = false;
      if (iVar11 != *(int *)(iVar12 + 0x20)) {
        uVar4 = *(uint *)(param_1 + 0x7a18);
        *(float *)(iVar12 + 0xf2c) =
             (DAT_042dbf34 * 0.0 + (float)(*(uint *)(param_1 + 0x7a18) >> 0x10 & 0xff)) /
             _DAT_042dc5a0;
        bVar2 = *(byte *)(param_1 + 0x7a18);
        *(float *)(iVar12 + 0xf30) = (fVar1 * 0.0 + (float)(uVar4 >> 8 & 0xff)) / fVar6;
        uVar4 = *(uint *)(param_1 + 0x7a18);
        *(int *)(iVar12 + 0x24) = *(int *)(iVar12 + 0x24) + 1;
        *(float *)(iVar12 + 0xf34) = (fVar1 * 0.0 + (float)bVar2) / fVar6;
        *(int *)(iVar12 + 0x20) = iVar11;
        *(float *)(iVar12 + 0xf38) = ((float)(uVar4 >> 0x18) + 0.0) / fVar6;
      }
    }
  }
  if ((iVar8 == *(int *)(param_1 + 0xea40)) && (iVar9 == *(int *)(param_1 + 0xea44))) {
    piVar10 = *(int **)(param_1 + 0xe9ec);
  }
  else {
    FUN_040ea600(*(undefined4 *)(param_1 + 0xeb54),param_2,param_3);
    piVar10 = (int *)FUN_040ed2d0(*(undefined4 *)(param_1 + 0xeb54),
                                  *(undefined4 *)(param_1 + 0xeb48),iVar8,iVar9);
    if (piVar10[1] < 2) {
      FUN_0402cd10(0xf,
                   "Wasn\'t able to link program properly from vertex shader %u and fragment shader %u in SetupRenderPipeline()!!!!"
                   ,iVar8,iVar9);
      return 0;
    }
    if (piVar10[1] == 2) {
      local_34 = 0;
      if (bVar5) {
        local_34 = *(undefined4 *)(param_1 + 0x7c5c);
      }
      ShaderCache__FillInProgramConstants
                (*(undefined4 *)(param_1 + 0xeb54),piVar10,param_2,param_3,local_34,
                 *(undefined4 *)(param_1 + 0x7c58));
    }
    *(int *)(param_1 + 0xea40) = iVar8;
    *(int *)(param_1 + 0xea44) = iVar9;
    *(int **)(param_1 + 0xe9ec) = piVar10;
  }
  if (*(char *)(param_1 + 0xeb4c) == '\0') {
    bVar13 = true;
    if (!bVar5) {
      bVar13 = *(int *)(param_1 + 0x7c58) != 0;
    }
    iVar8 = *(int *)(param_1 + 0xeb48);
    *param_4 = bVar13;
    iVar9 = *piVar10;
    if (iVar9 != *(int *)(iVar8 + 0x338)) {
      (*DAT_0451ec14)(iVar9);
      *(int *)(iVar8 + 0x338) = iVar9;
    }
    bVar13 = false;
    if (bVar5) {
      cVar7 = Direct3DVertexShader9Imp__ShaderSetsPointSize(*(int *)(param_1 + 0x7c5c) + 4);
      bVar13 = cVar7 != '\0';
    }
    iVar8 = *(int *)(param_1 + 0xeb48);
    if (bVar13 != (bool)*(char *)(iVar8 + 0xa93)) {
      if (bVar13 == false) {
        glDisable();
      }
      else {
        glEnable(0x8642);
      }
      *(bool *)(iVar8 + 0xa93) = bVar13;
      return 1;
    }
  }
  else {
    iVar8 = *(int *)(param_1 + 0xeb48);
    *param_4 = 0;
    iVar9 = *piVar10;
    if (iVar9 != *(int *)(iVar8 + 0x338)) {
      (*DAT_0451ec14)(iVar9);
      *(int *)(iVar8 + 0x338) = iVar9;
    }
  }
  return 1;
}

// --- OpenGLContextCache::PointAttenuation @0x0408cc90 ---
/* source: openGlContextCache */

void OpenGLContextCache__PointAttenuation(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  
  uVar8 = *(uint *)(param_1 + 0xea04);
  if ((uVar8 & 4) == 0) {
    iVar10 = *(int *)(param_1 + 0xeb48);
  }
  else {
    if (*(char *)(param_1 + 0xeb4c) == '\0') {
      iVar10 = *(int *)(param_1 + 0xeb48);
      uVar5 = *(uint *)(param_1 + 0x7a60);
      if (DAT_0451c9c8 == '\0') {
        cVar6 = (char)(uVar5 & 0xf);
        if ((((cVar6 != *(char *)(iVar10 + 0x424)) || (cVar6 != *(char *)(iVar10 + 0x425))) ||
            (cVar6 != *(char *)(iVar10 + 0x426))) || (cVar6 != *(char *)(iVar10 + 0x427))) {
          glColorMask(uVar5 & 1,(uVar5 & 2) != 0,(uVar5 & 4) != 0,(uVar5 & 0xf) >> 3);
          *(char *)(iVar10 + 0x424) = cVar6;
          *(char *)(iVar10 + 0x425) = cVar6;
          *(char *)(iVar10 + 0x426) = cVar6;
          *(char *)(iVar10 + 0x427) = cVar6;
          iVar10 = *(int *)(param_1 + 0xeb48);
          goto LAB_0408d523;
        }
      }
      else {
        if ((uVar5 & 0xf) != (uint)*(byte *)(iVar10 + 0x424)) {
          (*DAT_0451d894)(0,uVar5 & 1,(uVar5 & 2) != 0,(uVar5 & 4) != 0,(uVar5 & 8) != 0);
          *(char *)(iVar10 + 0x424) = (char)(uVar5 & 0xf);
          iVar10 = *(int *)(param_1 + 0xeb48);
        }
        uVar8 = *(uint *)(param_1 + 0x7a64);
        if ((uVar8 & 0xf) != (uint)*(byte *)(iVar10 + 0x425)) {
          (*DAT_0451d894)(1,uVar8 & 1,(uVar8 & 2) != 0,(uVar8 & 4) != 0,(uVar8 & 8) != 0);
          *(char *)(iVar10 + 0x425) = (char)(uVar8 & 0xf);
          iVar10 = *(int *)(param_1 + 0xeb48);
        }
        uVar8 = *(uint *)(param_1 + 0x7a68);
        if ((uVar8 & 0xf) != (uint)*(byte *)(iVar10 + 0x426)) {
          (*DAT_0451d894)(2,uVar8 & 1,(uVar8 & 2) != 0,(uVar8 & 4) != 0,(uVar8 & 8) != 0);
          *(char *)(iVar10 + 0x426) = (char)(uVar8 & 0xf);
          iVar10 = *(int *)(param_1 + 0xeb48);
        }
        uVar8 = *(uint *)(param_1 + 0x7a6c);
        if ((uVar8 & 0xf) == (uint)*(byte *)(iVar10 + 0x427)) {
LAB_0408d523:
          uVar8 = *(uint *)(param_1 + 0xea04);
        }
        else {
          (*DAT_0451d894)(3,uVar8 & 1,(uVar8 & 2) != 0,(uVar8 & 4) != 0,(uVar8 & 8) != 0);
          *(char *)(iVar10 + 0x427) = (char)(uVar8 & 0xf);
          iVar10 = *(int *)(param_1 + 0xeb48);
          uVar8 = *(uint *)(param_1 + 0xea04);
        }
      }
    }
    else {
      FUN_040c7380(*(undefined4 *)(param_1 + 0xeb48),0,*(undefined4 *)(param_1 + 0x7a60));
      FUN_040c7380(*(undefined4 *)(param_1 + 0xeb48),1,*(undefined4 *)(param_1 + 0x7a64));
      FUN_040c7380(*(undefined4 *)(param_1 + 0xeb48),2,*(undefined4 *)(param_1 + 0x7a68));
      FUN_040c7380(*(undefined4 *)(param_1 + 0xeb48),3,*(undefined4 *)(param_1 + 0x7a6c));
      iVar10 = *(int *)(param_1 + 0xeb48);
      uVar8 = *(uint *)(param_1 + 0xea04);
    }
    uVar8 = uVar8 & 0xfffffffb;
    *(uint *)(param_1 + 0xea04) = uVar8;
  }
  if ((uVar8 & 2) == 0) {
    if (*(int *)(param_1 + 0xc66c) != 0) goto joined_r0x0408cff8;
  }
  else if (*(int *)(param_1 + 0xc66c) == 0) {
    if ((uVar8 & 0x10) == 0) {
      if (*(char *)(iVar10 + 0xa8c) != '\0') {
        glDisable(0xb71);
        *(undefined1 *)(iVar10 + 0xa8c) = 0;
        iVar10 = *(int *)(param_1 + 0xeb48);
      }
      if (*(char *)(iVar10 + 0x42e) != '\0') {
        glDepthMask(0);
        *(undefined1 *)(iVar10 + 0x42e) = 0;
        iVar10 = *(int *)(param_1 + 0xeb48);
      }
      if (*(char *)(iVar10 + 0xa8d) != '\0') {
        glDisable(0xb90);
        *(undefined1 *)(iVar10 + 0xa8d) = 0;
      }
      cVar6 = FUN_04021f90();
      iVar10 = *(int *)(param_1 + 0xeb48);
      if ((cVar6 != '\0') && (*(char *)(iVar10 + 0xa8e) != '\0')) {
        if (*(char *)(iVar10 + 0x218) != '\0') {
          FUN_0400a810("!mUsingOpenGLCore",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                       ,0x159,"void OpenGLContextCache::EnableTwoSideStencilTest(bool)");
        }
        glDisable(0x8910);
        *(undefined1 *)(iVar10 + 0xa8e) = 0;
        iVar10 = *(int *)(param_1 + 0xeb48);
      }
      uVar8 = *(uint *)(param_1 + 0xea04) | 0x18;
      *(uint *)(param_1 + 0xea04) = uVar8;
    }
  }
  else {
joined_r0x0408cff8:
    if ((uVar8 & 8) != 0) {
      bVar11 = *(int *)(param_1 + 0x7a50) != 0;
      if (bVar11 != (bool)*(char *)(iVar10 + 0xa8c)) {
        if (bVar11) {
          glEnable();
        }
        else {
          glDisable(0xb71);
        }
        *(bool *)(iVar10 + 0xa8c) = bVar11;
        iVar10 = *(int *)(param_1 + 0xeb48);
      }
      bVar11 = *(int *)(param_1 + 0x7a54) != 0;
      if (bVar11 != (bool)*(char *)(iVar10 + 0x42e)) {
        glDepthMask(bVar11);
        *(bool *)(iVar10 + 0x42e) = bVar11;
        iVar10 = *(int *)(param_1 + 0xeb48);
      }
      iVar2 = *(int *)(param_1 + 0x7a88);
      if (iVar2 != *(int *)(iVar10 + 0x430)) {
        glStencilMask(iVar2);
        cVar6 = FUN_04021f90();
        if (cVar6 != '\0') {
          (*DAT_0451d648)(0x405);
          glStencilMask(iVar2);
          (*DAT_0451d648)(0x404);
        }
        *(int *)(iVar10 + 0x430) = iVar2;
        iVar10 = *(int *)(param_1 + 0xeb48);
      }
      bVar11 = *(int *)(param_1 + 0x7a7c) != 0;
      if (bVar11 != (bool)*(char *)(iVar10 + 0xa8d)) {
        if (bVar11) {
          glEnable();
        }
        else {
          glDisable(0xb90);
        }
        *(bool *)(iVar10 + 0xa8d) = bVar11;
      }
      cVar6 = FUN_04021f90();
      iVar10 = *(int *)(param_1 + 0xeb48);
      if (cVar6 != '\0') {
        bVar11 = *(int *)(param_1 + 0x7a8c) != 0;
        if (bVar11 != (bool)*(char *)(iVar10 + 0xa8e)) {
          if (*(char *)(iVar10 + 0x218) != '\0') {
            FUN_0400a810("!mUsingOpenGLCore",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                         ,0x159,"void OpenGLContextCache::EnableTwoSideStencilTest(bool)");
          }
          if (bVar11) {
            glEnable(0x8910);
          }
          else {
            glDisable();
          }
          *(bool *)(iVar10 + 0xa8e) = bVar11;
          iVar10 = *(int *)(param_1 + 0xeb48);
        }
      }
      uVar8 = *(uint *)(param_1 + 0xea04) & 0xffffffe7;
      *(uint *)(param_1 + 0xea04) = uVar8;
    }
  }
  if ((uVar8 & 3) == 0) {
    FUN_040c5250(iVar10 + 0x1f8,*(undefined4 *)(param_1 + 0xea08));
    bVar1 = *(byte *)(param_1 + 0xea05);
  }
  else {
    uVar7 = FramebufferCache__GetFramebufferHash
                      (iVar10 + 0x1f8,*(undefined4 *)(param_1 + 0xc65c),
                       *(undefined4 *)(param_1 + 0xc660),*(undefined4 *)(param_1 + 0xc664),
                       *(undefined4 *)(param_1 + 0xc668),*(undefined4 *)(param_1 + 0xc66c),
                       *(undefined4 *)(param_1 + 0xc66c));
    bVar1 = *(byte *)(param_1 + 0xea05);
    *(undefined4 *)(param_1 + 0xea08) = uVar7;
  }
  if ((bVar1 & 1) != 0) {
    iVar10 = *(int *)(param_1 + 0xe9bc);
    iVar9 = *(int *)(param_1 + 0xeb48);
    iVar2 = *(int *)(param_1 + 0xe9c8);
    iVar3 = *(int *)(param_1 + 0xe9c4);
    iVar4 = *(int *)(param_1 + 0xe9c0);
    if (((iVar10 != *(int *)(iVar9 + 0x3f8)) || (iVar4 != *(int *)(iVar9 + 0x3fc))) ||
       ((iVar3 != *(int *)(iVar9 + 0x400) || (iVar2 != *(int *)(iVar9 + 0x404))))) {
      glViewport(iVar10,iVar4,iVar3,iVar2);
      *(int *)(iVar9 + 0x3f8) = iVar10;
      *(int *)(iVar9 + 0x3fc) = iVar4;
      *(int *)(iVar9 + 0x400) = iVar3;
      *(int *)(iVar9 + 0x404) = iVar2;
      iVar9 = *(int *)(param_1 + 0xeb48);
    }
    dVar13 = (double)*(float *)(param_1 + 0xe9cc);
    dVar15 = (double)*(float *)(param_1 + 0xe9d0);
    if ((dVar13 != *(double *)(iVar9 + 0x408)) || (dVar15 != *(double *)(iVar9 + 0x410))) {
      glDepthRange(dVar13,dVar15);
      *(double *)(iVar9 + 0x408) = dVar13;
      *(double *)(iVar9 + 0x410) = dVar15;
    }
  }
  if (*(char *)(param_1 + 0x7ad4) == '\0') {
    return;
  }
  iVar10 = *(int *)(param_1 + 0xeb48);
  fVar12 = *(float *)(param_1 + 0x7aa4);
  fVar16 = *(float *)(iVar10 + 0xa80);
  fVar17 = *(float *)(iVar10 + 0xa84);
  if (*(int *)(param_1 + 0x7aac) == 0) {
    if (fVar16 <= fVar12) {
      cVar6 = *(char *)(param_1 + 0xeb4c);
      if (fVar17 < fVar12) {
        fVar12 = fVar17;
      }
    }
    else {
      cVar6 = *(char *)(param_1 + 0xeb4c);
      fVar12 = fVar16;
    }
    *(float *)(param_1 + 0x7ac4) = fVar12;
    if (cVar6 == '\0') goto LAB_0408d1cb;
LAB_0408ce70:
    fVar16 = *(float *)(param_1 + 0x7abc);
    if (fVar12 < fVar16) {
      *(float *)(param_1 + 0x7ac4) = fVar16;
      fVar12 = fVar16;
    }
    fVar16 = *(float *)(param_1 + 0x7ac0);
    if (fVar12 <= fVar16) goto LAB_0408d1cb;
    *(float *)(param_1 + 0x7ac4) = fVar16;
    bVar11 = fVar16 == *(float *)(iVar10 + 0x4e0);
    fVar12 = fVar16;
    if (NAN(fVar16) || NAN(*(float *)(iVar10 + 0x4e0))) goto LAB_0408ceb8;
  }
  else {
    uVar8 = *(uint *)(*(int *)(param_1 + 0xc65c) + 0x8c);
    if (fVar16 <= fVar12) {
      fVar14 = DAT_042dbf3c;
      if (fVar17 < fVar12) {
        fVar14 = fVar12 / fVar17;
        fVar12 = fVar17;
      }
    }
    else {
      fVar14 = fVar12 / fVar16;
      fVar12 = fVar16;
    }
    fVar14 = ((float)(uVar8 >> 0x10) * DAT_042dbf34 + (float)(uVar8 & 0xffff)) * fVar14;
    fVar14 = fVar14 * fVar14;
    fVar16 = *(float *)(param_1 + 0x7ab0) * fVar14;
    fVar17 = *(float *)(param_1 + 0x7ab4) * fVar14;
    fVar14 = fVar14 * *(float *)(param_1 + 0x7ab8);
    *(float *)(param_1 + 0x7ac8) = fVar16;
    *(float *)(param_1 + 0x7acc) = fVar17;
    *(float *)(param_1 + 0x7ad0) = fVar14;
    if (*(char *)(param_1 + 0xeb4c) != '\0') {
      *(float *)(param_1 + 0x7ac4) = fVar12;
      goto LAB_0408ce70;
    }
    if (((fVar16 == *(float *)(iVar10 + 0x4d4)) && (fVar17 == *(float *)(iVar10 + 0x4d8))) &&
       (fVar14 == *(float *)(iVar10 + 0x4dc))) {
      *(float *)(param_1 + 0x7ac4) = fVar12;
    }
    else {
      if (*(char *)(iVar10 + 0x218) != '\0') {
        FUN_0400a810("!mUsingOpenGLCore",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                     ,0x2e7,"void OpenGLContextCache::PointAttenuation(const GLfloat*)");
      }
      (*DAT_0451edc8)(0x8129,param_1 + 0x7ac8);
      *(undefined4 *)(iVar10 + 0x4d4) = *(undefined4 *)(param_1 + 0x7ac8);
      *(undefined4 *)(iVar10 + 0x4d8) = *(undefined4 *)(param_1 + 0x7acc);
      *(undefined4 *)(iVar10 + 0x4dc) = *(undefined4 *)(param_1 + 0x7ad0);
      iVar10 = *(int *)(param_1 + 0xeb48);
      *(float *)(param_1 + 0x7ac4) = fVar12;
      if (*(char *)(param_1 + 0xeb4c) != '\0') goto LAB_0408ce70;
    }
LAB_0408d1cb:
    bVar11 = fVar12 == *(float *)(iVar10 + 0x4e0);
    fVar16 = fVar12;
    if (NAN(fVar12) || NAN(*(float *)(iVar10 + 0x4e0))) goto LAB_0408ceb8;
  }
  fVar16 = fVar12;
  if (bVar11) {
    *(undefined1 *)(param_1 + 0x7ad4) = 0;
    return;
  }
LAB_0408ceb8:
  glPointSize(fVar16);
  *(float *)(iVar10 + 0x4e0) = fVar16;
  *(undefined1 *)(param_1 + 0x7ad4) = 0;
  return;
}

// --- OpenGLContextCache::UpdateTextureMatrices @0x04093810 ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* source: direct3ddevice9imp, openGlContextCache */

void OpenGLContextCache__UpdateTextureMatrices(int param_1,char param_2)

{
  float fVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  char *pcVar16;
  undefined4 *puVar17;
  char *pcVar18;
  uint uVar19;
  undefined4 *puVar20;
  bool bVar21;
  byte bVar22;
  float fVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  undefined8 in_stack_ffffff34;
  char *pcVar30;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  
  pcVar30 = (char *)((ulonglong)in_stack_ffffff34 >> 0x20);
  bVar22 = 0;
  if ((*(byte *)(param_1 + 0xea04) & 0x80) != 0) {
    cVar5 = *(char *)(*(int *)(param_1 + 0xe9d4) + 0x70);
    iVar6 = *(int *)(param_1 + 0xeb48);
    iVar15 = 0x901 - (uint)(cVar5 == '\0');
    if (iVar15 != *(int *)(iVar6 + 0x418)) {
      glFrontFace(iVar15);
      *(int *)(iVar6 + 0x418) = iVar15;
    }
    if (*(char *)(param_1 + 0xeb4c) == '\0') {
LAB_040938d0:
      bVar8 = *(byte *)(param_1 + 0xea04);
    }
    else {
      if ((cVar5 != '\0') || (*(int *)(param_1 + 0x7c5c) == 0)) {
        if ((*(int *)(param_1 + 0x7aac) != 0) &&
           (((DAT_042dbf3c != *(float *)(param_1 + 0x7ac8) || (*(float *)(param_1 + 0x7acc) != 0.0))
            || (*(float *)(param_1 + 0x7ad0) != 0.0)))) {
          pcVar30 = 
          "Point distance attenuation unhandled in OpenGL Core profile. Some code will be needed in fixed pipeline vertex shader to handle this."
          ;
          FUN_0402cd10(0xf);
        }
        goto LAB_040938d0;
      }
      bVar8 = *(byte *)(param_1 + 0xea04);
    }
    if ((bVar8 & 0x60) != 0) {
      if (((*(int *)(param_1 + 0x7c5c) == 0) &&
          (*(char *)(*(int *)(param_1 + 0xe9d4) + 0x70) != '\0')) ||
         (*(char *)(param_1 + 0x7ad5) == '\0')) {
        iVar6 = *(int *)(param_1 + 0xeb48);
        if (*(char *)(iVar6 + 0xa88) != '\0') {
          glDisable(0xb44);
          *(undefined1 *)(iVar6 + 0xa88) = 0;
        }
      }
      else {
        iVar6 = *(int *)(param_1 + 0xeb48);
        if (*(char *)(iVar6 + 0xa88) != '\x01') {
          glEnable(0xb44);
          *(undefined1 *)(iVar6 + 0xa88) = 1;
          iVar6 = *(int *)(param_1 + 0xeb48);
        }
        iVar15 = *(int *)(param_1 + 0x7ad8);
        if (iVar15 != *(int *)(iVar6 + 0x41c)) {
          glCullFace(iVar15);
          *(int *)(iVar6 + 0x41c) = iVar15;
        }
      }
    }
  }
  if (*(char *)(param_1 + 0xeb4c) == '\0') {
    iVar6 = *(int *)(param_1 + 0xeb48);
    uVar19 = *(uint *)(param_1 + 0x7c04);
    uVar7 = *(uint *)(iVar6 + 0x420);
    uVar11 = uVar19 & 0x3f;
    if (uVar11 != uVar7) {
      if (*(char *)(iVar6 + 0x218) != '\0') {
        pcVar30 = 
        "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
        ;
        FUN_0400a810("!mUsingOpenGLCore",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                     ,0xb7);
        uVar7 = *(uint *)(iVar6 + 0x420);
      }
      uVar7 = uVar7 ^ uVar11;
      if ((uVar7 & 1) != 0) {
        if ((uVar19 & 1) == 0) {
          glDisable();
        }
        else {
          glEnable(0x3000);
        }
      }
      if ((uVar7 >> 1 & 1) != 0) {
        if ((uVar11 >> 1 & 1) == 0) {
          glDisable();
        }
        else {
          glEnable(0x3001);
        }
      }
      if ((uVar7 >> 2 & 1) != 0) {
        if ((uVar11 >> 2 & 1) == 0) {
          glDisable();
        }
        else {
          glEnable(0x3002);
        }
      }
      if ((uVar7 >> 3 & 1) != 0) {
        if ((uVar11 >> 3 & 1) == 0) {
          glDisable();
        }
        else {
          glEnable(0x3003);
        }
      }
      if ((uVar7 >> 4 & 1) != 0) {
        if ((uVar11 >> 4 & 1) == 0) {
          glDisable();
        }
        else {
          glEnable(0x3004);
        }
      }
      if ((uVar7 >> 4 & 2) != 0) {
        if (uVar11 >> 5 == 0) {
          glDisable(0x3005);
        }
        else {
          glEnable();
        }
      }
      *(uint *)(iVar6 + 0x420) = uVar11;
      uVar19 = *(uint *)(param_1 + 0x7c04);
    }
    cVar5 = '\x01';
    if (*(int *)(param_1 + 0x7c5c) != 0) {
      cVar5 = *(char *)(*(int *)(param_1 + 0xe9d4) + 0x70);
    }
    if ((uVar19 != 0) &&
       ((iVar6 = *(int *)(param_1 + 0xeb48), *(int *)(param_1 + 0x7bfc) != *(int *)(iVar6 + 0x198)
        || ((cVar5 != '\0' && (*(int *)(param_1 + 0xc630) != *(int *)(iVar6 + 0x1a8))))))) {
      if (*(int *)(iVar6 + 0x500) != 0x1700) {
        if (*(char *)(iVar6 + 0x218) != '\0') {
          FUN_0400a810("!mUsingOpenGLCore",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                       ,0x3bc);
        }
        glMatrixMode(0x1700);
        *(undefined4 *)(iVar6 + 0x500) = 0x1700;
      }
      glPushMatrix();
      if (cVar5 == '\0') {
        glLoadIdentity();
      }
      else {
        glLoadMatrixf(param_1 + 0x83b0);
      }
      glClipPlane(0x3000);
      glClipPlane(0x3001);
      glClipPlane(0x3002);
      glClipPlane(0x3003);
      glClipPlane(0x3004);
      pcVar30 = (char *)(param_1 + 0x7bdc);
      glClipPlane(0x3005);
      *(undefined4 *)(*(int *)(param_1 + 0xeb48) + 0x198) = *(undefined4 *)(param_1 + 0x7bfc);
      glPopMatrix();
    }
  }
  else {
    piVar13 = *(int **)(param_1 + 0xeb78);
    if (*(int *)(param_1 + 0x7c00) != *piVar13) {
      if (*(int *)(param_1 + 0x7c08) == 0) {
        *piVar13 = *(int *)(param_1 + 0x7c00);
        pcVar18 = (char *)0x0;
      }
      else {
        uVar19 = *(uint *)(param_1 + 0x7c04);
        bVar21 = (uVar19 & 1) != 0;
        if (bVar21) {
          piVar13[0x1e3] = *(int *)(param_1 + 0x7adc);
          piVar13[0x1e4] = *(int *)(param_1 + 0x7ae0);
          piVar13[0x1e5] = *(int *)(param_1 + 0x7ae4);
          piVar13[0x1e6] = *(int *)(param_1 + 0x7ae8);
          pcVar30 = (char *)0x0;
          OpenGLContextCache__EnableClipDistance(*(undefined4 *)(param_1 + 0xeb48),0,1);
          piVar13 = *(int **)(param_1 + 0xeb78);
        }
        pcVar16 = (char *)(uint)bVar21;
        pcVar18 = pcVar16;
        if ((uVar19 >> 1 & 1) != 0) {
          pcVar30 = pcVar16 + 0x78;
          piVar13[(int)pcVar30 * 4 + 3] = *(int *)(param_1 + 0x7aec);
          piVar13[(int)pcVar30 * 4 + 4] = *(int *)(param_1 + 0x7af0);
          piVar13[(int)pcVar30 * 4 + 5] = *(int *)(param_1 + 0x7af4);
          piVar13[(int)pcVar30 * 4 + 6] = *(int *)(param_1 + 0x7af8);
          pcVar18 = pcVar16 + 1;
          pcVar30 = (char *)(uint)bVar21;
          OpenGLContextCache__EnableClipDistance(*(undefined4 *)(param_1 + 0xeb48),pcVar16,1);
          piVar13 = *(int **)(param_1 + 0xeb78);
        }
        pcVar16 = pcVar18;
        if ((uVar19 >> 2 & 1) != 0) {
          pcVar30 = pcVar18 + 0x78;
          piVar13[(int)pcVar30 * 4 + 3] = *(int *)(param_1 + 0x7afc);
          piVar13[(int)pcVar30 * 4 + 4] = *(int *)(param_1 + 0x7b00);
          piVar13[(int)pcVar30 * 4 + 5] = *(int *)(param_1 + 0x7b04);
          piVar13[(int)pcVar30 * 4 + 6] = *(int *)(param_1 + 0x7b08);
          pcVar16 = pcVar18 + 1;
          pcVar30 = pcVar18;
          OpenGLContextCache__EnableClipDistance(*(undefined4 *)(param_1 + 0xeb48),pcVar18,1);
          piVar13 = *(int **)(param_1 + 0xeb78);
        }
        pcVar18 = pcVar16;
        if ((uVar19 >> 3 & 1) != 0) {
          pcVar30 = pcVar16 + 0x78;
          piVar13[(int)pcVar30 * 4 + 3] = *(int *)(param_1 + 0x7b0c);
          piVar13[(int)pcVar30 * 4 + 4] = *(int *)(param_1 + 0x7b10);
          piVar13[(int)pcVar30 * 4 + 5] = *(int *)(param_1 + 0x7b14);
          piVar13[(int)pcVar30 * 4 + 6] = *(int *)(param_1 + 0x7b18);
          pcVar18 = pcVar16 + 1;
          pcVar30 = pcVar16;
          OpenGLContextCache__EnableClipDistance(*(undefined4 *)(param_1 + 0xeb48),pcVar16,1);
          piVar13 = *(int **)(param_1 + 0xeb78);
        }
        pcVar16 = pcVar18;
        if ((uVar19 >> 4 & 1) != 0) {
          pcVar30 = pcVar18 + 0x78;
          piVar13[(int)pcVar30 * 4 + 3] = *(int *)(param_1 + 0x7b1c);
          piVar13[(int)pcVar30 * 4 + 4] = *(int *)(param_1 + 0x7b20);
          piVar13[(int)pcVar30 * 4 + 5] = *(int *)(param_1 + 0x7b24);
          piVar13[(int)pcVar30 * 4 + 6] = *(int *)(param_1 + 0x7b28);
          pcVar16 = pcVar18 + 1;
          pcVar30 = pcVar18;
          OpenGLContextCache__EnableClipDistance(*(undefined4 *)(param_1 + 0xeb48),pcVar18,1);
          piVar13 = *(int **)(param_1 + 0xeb78);
        }
        if ((uVar19 >> 4 & 2) != 0) {
          pcVar30 = pcVar16 + 0x78;
          piVar13[(int)pcVar30 * 4 + 3] = *(int *)(param_1 + 0x7b2c);
          piVar13[(int)pcVar30 * 4 + 4] = *(int *)(param_1 + 0x7b30);
          piVar13[(int)pcVar30 * 4 + 5] = *(int *)(param_1 + 0x7b34);
          piVar13[(int)pcVar30 * 4 + 6] = *(int *)(param_1 + 0x7b38);
          pcVar30 = pcVar16;
          OpenGLContextCache__EnableClipDistance(*(undefined4 *)(param_1 + 0xeb48),pcVar16,1);
          piVar13 = *(int **)(param_1 + 0xeb78);
        }
        pcVar18 = *(char **)(param_1 + 0x7c08);
        *piVar13 = *(int *)(param_1 + 0x7c00);
        if (5 < (int)pcVar18) goto LAB_04093932;
      }
      do {
        pcVar16 = pcVar18 + 1;
        pcVar30 = pcVar18;
        OpenGLContextCache__EnableClipDistance(*(undefined4 *)(param_1 + 0xeb48),pcVar18,0);
        pcVar18 = pcVar16;
      } while (pcVar16 != (char *)0x6);
    }
  }
LAB_04093932:
  uVar19 = *(uint *)(param_1 + 0xea04);
  if ((uVar19 & 0x21) != 0) {
    if (((*(int *)(param_1 + 0x7a78) == 0) && (*(int *)(param_1 + 0x7a74) == 0)) ||
       (((param_2 == '\0' && (*(int *)(param_1 + 0x7a20) != 0x1b01)) ||
        (*(int *)(*(int *)(param_1 + 0xc65c) + 0xa0) != 1)))) {
      cVar5 = '\0';
      bVar21 = *(int *)(param_1 + 0x7a44) != 0;
    }
    else {
      cVar5 = '\x01';
      bVar21 = true;
    }
    iVar6 = *(int *)(param_1 + 0xeb48);
    if (bVar21 != (bool)*(char *)(iVar6 + 0xa89)) {
      if (bVar21 == false) {
        glDisable();
      }
      else {
        glEnable(0xbe2);
      }
      *(bool *)(iVar6 + 0xa89) = bVar21;
      iVar6 = *(int *)(param_1 + 0xeb48);
    }
    if (cVar5 != *(char *)(iVar6 + 0xa92)) {
      if (cVar5 == '\0') {
        glDisable();
      }
      else {
        glEnable(0xb20);
      }
      *(char *)(iVar6 + 0xa92) = cVar5;
      iVar6 = *(int *)(param_1 + 0xeb48);
    }
    if (cVar5 == '\0') {
      iVar15 = *(int *)(param_1 + 0x79d8);
      pcVar18 = *(char **)(param_1 + 0x79dc);
      if (iVar15 == 0x2ff) {
        pcVar18 = (char *)0x303;
        iVar15 = 0x302;
      }
      else if (iVar15 == 0x2fe) {
        pcVar18 = (char *)0x302;
        iVar15 = 0x303;
      }
      if (*(int *)(param_1 + 0x7a48) == 0) {
        if (((iVar15 != *(int *)(iVar6 + 0x460)) || (pcVar18 != *(char **)(iVar6 + 0x464))) ||
           ((iVar15 != *(int *)(iVar6 + 0x468) || (pcVar18 != *(char **)(iVar6 + 0x46c))))) {
          pcVar30 = pcVar18;
          (*DAT_0451edec)(iVar15,pcVar18,iVar15);
          *(int *)(iVar6 + 0x460) = iVar15;
          *(int *)(iVar6 + 0x468) = iVar15;
          *(char **)(iVar6 + 0x464) = pcVar18;
          *(char **)(iVar6 + 0x46c) = pcVar18;
          iVar6 = *(int *)(param_1 + 0xeb48);
        }
        pcVar18 = *(char **)(param_1 + 0x79e8);
        if ((pcVar18 != *(char **)(iVar6 + 0x470)) || (pcVar18 != *(char **)(iVar6 + 0x474))) {
          pcVar30 = pcVar18;
          (*DAT_0451ece4)(pcVar18);
          *(char **)(iVar6 + 0x470) = pcVar18;
          *(char **)(iVar6 + 0x474) = pcVar18;
        }
      }
      else {
        iVar12 = *(int *)(param_1 + 0x79e0);
        iVar14 = *(int *)(param_1 + 0x79e4);
        if (iVar12 == 0x2ff) {
          iVar14 = 0x303;
          iVar12 = 0x302;
        }
        else if (iVar12 == 0x2fe) {
          iVar14 = 0x302;
          iVar12 = 0x303;
        }
        if ((((iVar15 != *(int *)(iVar6 + 0x460)) || (pcVar18 != *(char **)(iVar6 + 0x464))) ||
            (iVar12 != *(int *)(iVar6 + 0x468))) || (iVar14 != *(int *)(iVar6 + 0x46c))) {
          pcVar30 = pcVar18;
          (*DAT_0451edec)(iVar15,pcVar18,iVar12);
          *(int *)(iVar6 + 0x460) = iVar15;
          *(char **)(iVar6 + 0x464) = pcVar18;
          *(int *)(iVar6 + 0x468) = iVar12;
          *(int *)(iVar6 + 0x46c) = iVar14;
          iVar6 = *(int *)(param_1 + 0xeb48);
        }
        iVar15 = *(int *)(param_1 + 0x79e8);
        iVar12 = *(int *)(param_1 + 0x79ec);
        if ((iVar15 != *(int *)(iVar6 + 0x470)) || (iVar12 != *(int *)(iVar6 + 0x474))) {
          pcVar30 = (char *)((ulonglong)*(undefined8 *)(param_1 + 0x79e8) >> 0x20);
          (*DAT_0451ece4)(iVar15);
          *(int *)(iVar6 + 0x470) = iVar15;
          *(int *)(iVar6 + 0x474) = iVar12;
          uVar19 = *(uint *)(param_1 + 0xea04);
          goto LAB_04093add;
        }
      }
    }
    else {
      if ((((*(int *)(iVar6 + 0x460) != 0x302) || (*(int *)(iVar6 + 0x464) != 0x303)) ||
          (*(int *)(iVar6 + 0x468) != 0x302)) || (*(int *)(iVar6 + 0x46c) != 0x303)) {
        pcVar30 = (char *)0x303;
        (*DAT_0451edec)(0x302,0x303,0x302);
        *(undefined4 *)(iVar6 + 0x460) = 0x302;
        *(undefined4 *)(iVar6 + 0x464) = 0x303;
        *(undefined4 *)(iVar6 + 0x468) = 0x302;
        *(undefined4 *)(iVar6 + 0x46c) = 0x303;
        iVar6 = *(int *)(param_1 + 0xeb48);
      }
      if ((*(int *)(iVar6 + 0x470) != 0x8006) || (*(int *)(iVar6 + 0x474) != 0x8006)) {
        pcVar30 = (char *)0x8006;
        (*DAT_0451ece4)(0x8006);
        *(undefined4 *)(iVar6 + 0x470) = 0x8006;
        *(undefined4 *)(iVar6 + 0x474) = 0x8006;
        uVar19 = *(uint *)(param_1 + 0xea04);
        goto LAB_04093add;
      }
    }
    uVar19 = *(uint *)(param_1 + 0xea04);
  }
LAB_04093add:
  if ((uVar19 & 0x22) == 0) {
LAB_04093cf1:
    iVar12 = *(int *)(param_1 + 0xeb48);
  }
  else {
    iVar6 = 0;
    if (*(int *)(param_1 + 0xc66c) != 0) {
      iVar6 = Direct3DSurface9Imp__GetDepthBits(*(int *)(param_1 + 0xc66c) + 4);
    }
    iVar15 = *(int *)(param_1 + 0xeb48);
    fVar28 = *(float *)(param_1 + 0x7a90);
    fVar23 = *(float *)(param_1 + 0x7a94);
    if (((fVar28 != *(float *)(iVar15 + 0xa6c)) || (fVar23 != *(float *)(iVar15 + 0xa70))) ||
       (iVar6 != *(int *)(iVar15 + 0xa74))) {
      *(float *)(iVar15 + 0xa6c) = fVar28;
      *(float *)(iVar15 + 0xa70) = fVar23;
      *(int *)(iVar15 + 0xa74) = iVar6;
      if ((iVar6 == 0) || ((fVar23 == 0.0 && (fVar28 == 0.0)))) {
        glDisable(0x8037);
        glDisable(0x2a02);
        glDisable(0x2a01);
      }
      else {
        glEnable(0x8037);
        glEnable(0x2a02);
        glEnable(0x2a01);
        bVar8 = (byte)*(uint *)(iVar15 + 0xa74);
        bVar21 = (*(uint *)(iVar15 + 0xa74) & 0x20) == 0;
        iVar6 = (uint)bVar21 << (bVar8 & 0x1f);
        iVar12 = ((uint)!bVar21 << (bVar8 & 0x1f)) + -1 + (uint)(iVar6 != 0);
        fVar28 = (float)CONCAT44(iVar12,iVar6 + -1);
        if (iVar12 < 0) {
          fVar28 = fVar28 + _DAT_042f73a4;
        }
        pcVar30 = (char *)(fVar28 * *(float *)(iVar15 + 0xa6c));
        glPolygonOffset(fVar23);
      }
    }
    pcVar18 = (char *)0x0;
    if ((*(int *)(param_1 + 0xc66c) == 0) ||
       (cVar5 = direct3dsurface9imp_040add10(*(int *)(param_1 + 0xc66c) + 4), cVar5 == '\0')) {
      if (*(int *)(param_1 + 0x7a8c) == 0) goto LAB_04093c19;
LAB_04094c04:
      iVar6 = *(int *)(param_1 + 0xeb48);
      iVar15 = *(int *)(param_1 + 0x7a84);
      iVar12 = *(int *)(param_1 + 0x7a10);
      iVar14 = *(int *)(param_1 + 0x7a00);
      if (*(char *)(iVar6 + 0x218) == '\0') {
        cVar5 = FUN_04021f80();
        if (cVar5 == '\0') {
          cVar5 = FUN_04021f90();
          if (cVar5 != '\0') {
            if ((pcVar18 == *(char **)(iVar6 + 0x450)) && (iVar15 == *(int *)(iVar6 + 0x454))) {
              if (iVar14 != *(int *)(iVar6 + 0x448)) {
                pcVar30 = pcVar18;
                glStencilFunc(iVar14,pcVar18,iVar15);
              }
              if (iVar12 == *(int *)(iVar6 + 0x44c)) goto LAB_04094c85;
            }
            else {
              pcVar30 = pcVar18;
              glStencilFunc(iVar14,pcVar18,iVar15);
            }
            (*DAT_0451d648)(CONCAT44(pcVar30,0x405));
            glStencilFunc(iVar12,pcVar18,iVar15);
            (*DAT_0451d648)(0x404);
          }
        }
        else if ((((pcVar18 != *(char **)(iVar6 + 0x450)) || (iVar15 != *(int *)(iVar6 + 0x454))) ||
                 (iVar14 != *(int *)(iVar6 + 0x448))) || (iVar12 != *(int *)(iVar6 + 0x44c))) {
          if (iVar12 == iVar14) goto LAB_040970ab;
          (*DAT_0451dd80)(iVar14,iVar12,pcVar18);
        }
      }
      else if ((pcVar18 == *(char **)(iVar6 + 0x450)) && (iVar15 == *(int *)(iVar6 + 0x454))) {
        if (iVar14 != *(int *)(iVar6 + 0x448)) {
          (*DAT_0451ec6c)(0x404,iVar14,pcVar18);
        }
        if (iVar12 != *(int *)(iVar6 + 0x44c)) {
          (*DAT_0451ec6c)(0x405,iVar14,pcVar18);
        }
      }
      else if (iVar12 == iVar14) {
LAB_040970ab:
        glStencilFunc(iVar12,pcVar18,iVar15);
      }
      else {
        (*DAT_0451ec6c)(0x404,iVar14,pcVar18);
        (*DAT_0451ec6c)(0x405,iVar12,pcVar18);
      }
LAB_04094c85:
      *(int *)(iVar6 + 0x448) = iVar14;
      *(char **)(iVar6 + 0x450) = pcVar18;
      iVar14 = *(int *)(param_1 + 0x7a04);
      *(int *)(iVar6 + 0x44c) = iVar12;
      iVar12 = *(int *)(param_1 + 0x7a0c);
      *(int *)(iVar6 + 0x454) = iVar15;
      iVar6 = *(int *)(param_1 + 0xeb48);
      iVar15 = *(int *)(param_1 + 0x7a08);
      iVar10 = *(int *)(param_1 + 0x79fc);
      iVar9 = *(int *)(param_1 + 0x79f8);
      iVar3 = *(int *)(param_1 + 0x79f4);
      if (((iVar3 != *(int *)(iVar6 + 0x488)) || (iVar9 != *(int *)(iVar6 + 0x48c))) ||
         (iVar10 != *(int *)(iVar6 + 0x490))) {
        if (*(char *)(iVar6 + 0x218) == '\0') {
          cVar5 = FUN_04021f80();
          if (cVar5 == '\0') {
            cVar5 = FUN_04021f90();
            if (cVar5 != '\0') {
              glStencilOp(iVar3,iVar9,iVar10);
            }
          }
          else {
            (*DAT_0451dd7c)(0x404,iVar3,iVar9);
          }
        }
        else {
          (*DAT_0451ec64)(0x404,iVar3,iVar9);
        }
        *(int *)(iVar6 + 0x488) = iVar3;
        *(int *)(iVar6 + 0x48c) = iVar9;
        *(int *)(iVar6 + 0x490) = iVar10;
      }
      if (((iVar14 == *(int *)(iVar6 + 0x494)) && (iVar15 == *(int *)(iVar6 + 0x498))) &&
         (iVar12 == *(int *)(iVar6 + 0x49c))) {
LAB_04093ceb:
        uVar19 = *(uint *)(param_1 + 0xea04);
        goto LAB_04093cf1;
      }
      if (*(char *)(iVar6 + 0x218) == '\0') {
        cVar5 = FUN_04021f80();
        if (cVar5 == '\0') {
          cVar5 = FUN_04021f90();
          if (cVar5 != '\0') {
            (*DAT_0451d648)(0x405);
            glStencilOp(iVar14,iVar15,iVar12);
            (*DAT_0451d648)(0x404);
          }
        }
        else {
          (*DAT_0451dd7c)(0x405,iVar14,iVar15);
        }
      }
      else {
        (*DAT_0451ec64)(0x405,iVar14,iVar15);
      }
      *(int *)(iVar6 + 0x494) = iVar14;
      uVar19 = *(uint *)(param_1 + 0xea04);
      *(int *)(iVar6 + 0x498) = iVar15;
      *(int *)(iVar6 + 0x49c) = iVar12;
      iVar12 = *(int *)(param_1 + 0xeb48);
    }
    else {
      pcVar18 = *(char **)(param_1 + 0x7a80);
      if (*(int *)(param_1 + 0x7a8c) != 0) goto LAB_04094c04;
LAB_04093c19:
      iVar6 = *(int *)(param_1 + 0x7a00);
      iVar12 = *(int *)(param_1 + 0xeb48);
      iVar15 = *(int *)(param_1 + 0x7a84);
      if (((iVar6 != *(int *)(iVar12 + 0x448)) || (pcVar18 != *(char **)(iVar12 + 0x450))) ||
         (iVar15 != *(int *)(iVar12 + 0x454))) {
        glStencilFunc(iVar6,pcVar18,iVar15);
        *(int *)(iVar12 + 0x448) = iVar6;
        cVar5 = FUN_04021f90();
        if (cVar5 == '\0') {
          *(int *)(iVar12 + 0x44c) = iVar6;
        }
        *(char **)(iVar12 + 0x450) = pcVar18;
        *(int *)(iVar12 + 0x454) = iVar15;
        iVar12 = *(int *)(param_1 + 0xeb48);
      }
      iVar6 = *(int *)(param_1 + 0x79f4);
      iVar15 = *(int *)(param_1 + 0x79fc);
      iVar14 = *(int *)(param_1 + 0x79f8);
      if (((iVar6 != *(int *)(iVar12 + 0x488)) || (iVar14 != *(int *)(iVar12 + 0x48c))) ||
         (iVar15 != *(int *)(iVar12 + 0x490))) {
        glStencilOp(iVar6,iVar14,iVar15);
        *(int *)(iVar12 + 0x488) = iVar6;
        *(int *)(iVar12 + 0x48c) = iVar14;
        *(int *)(iVar12 + 0x490) = iVar15;
        cVar5 = FUN_04021f90();
        if (cVar5 == '\0') {
          *(int *)(iVar12 + 0x498) = iVar14;
          *(int *)(iVar12 + 0x494) = iVar6;
          *(int *)(iVar12 + 0x49c) = iVar15;
        }
        goto LAB_04093ceb;
      }
      uVar19 = *(uint *)(param_1 + 0xea04);
    }
  }
  if ((uVar19 & 0x20) != 0) {
    if (DAT_0451c9ca != '\0') {
      if (*(int *)(param_1 + 0x7a98) == 0x4244564e) {
        fVar28 = *(float *)(param_1 + 0x7a9c);
        fVar23 = *(float *)(param_1 + 0x7aa0);
        if (fVar28 <= fVar23) {
          if ((fVar28 != *(float *)(iVar12 + 0xa78)) || (fVar23 != *(float *)(iVar12 + 0xa7c))) {
            (*DAT_0451dbf0)((double)fVar28,(double)fVar23);
            *(float *)(iVar12 + 0xa78) = fVar28;
            *(float *)(iVar12 + 0xa7c) = fVar23;
            iVar12 = *(int *)(param_1 + 0xeb48);
          }
          if (*(char *)(iVar12 + 0xa94) != '\x01') {
            glEnable(0x8890);
            *(undefined1 *)(iVar12 + 0xa94) = 1;
            iVar12 = *(int *)(param_1 + 0xeb48);
          }
          goto LAB_04093d3a;
        }
      }
      if (*(char *)(iVar12 + 0xa94) != '\0') {
        glDisable(0x8890);
        *(undefined1 *)(iVar12 + 0xa94) = 0;
        iVar12 = *(int *)(param_1 + 0xeb48);
      }
    }
LAB_04093d3a:
    uVar19 = *(uint *)(param_1 + 0x79f0);
    if (uVar19 != *(uint *)(iVar12 + 0x504)) {
      *(uint *)(iVar12 + 0x504) = uVar19;
      (*DAT_0451edf4)((DAT_042dbf34 * 0.0 + (float)(uVar19 >> 0x10 & 0xff)) / _DAT_042dc5a0,
                      (DAT_042dbf34 * 0.0 + (float)(uVar19 >> 8 & 0xff)) / _DAT_042dc5a0,
                      (DAT_042dbf34 * 0.0 + (float)(uVar19 & 0xff)) / _DAT_042dc5a0);
      iVar12 = *(int *)(param_1 + 0xeb48);
    }
    if (*(char *)(param_1 + 0xeb51) == '\0') {
      iVar6 = *(int *)(param_1 + 0x7a4c);
      bVar21 = iVar6 != 0;
      if (bVar21 != (bool)*(char *)(iVar12 + 0xa8a)) {
        if (*(char *)(iVar12 + 0x218) != '\0') {
          FUN_0400a810("!mUsingOpenGLCore",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                       ,0x127);
        }
        if (bVar21) {
          glEnable();
        }
        else {
          glDisable(0xbc0);
        }
        iVar6 = *(int *)(param_1 + 0x7a4c);
        *(bool *)(iVar12 + 0xa8a) = bVar21;
        iVar12 = *(int *)(param_1 + 0xeb48);
      }
      if (iVar6 != 0) {
        iVar6 = *(int *)(param_1 + 0x79d0);
        fVar28 = *(float *)(param_1 + 0x79d4);
        if ((iVar6 != *(int *)(iVar12 + 0x458)) || (fVar28 != *(float *)(iVar12 + 0x45c))) {
          glAlphaFunc(iVar6);
          *(int *)(iVar12 + 0x458) = iVar6;
          *(float *)(iVar12 + 0x45c) = fVar28;
          iVar12 = *(int *)(param_1 + 0xeb48);
        }
      }
    }
    else if (*(char *)(iVar12 + 0xa8a) != '\0') {
      if (*(char *)(iVar12 + 0x218) != '\0') {
        FUN_0400a810("!mUsingOpenGLCore",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                     ,0x127);
      }
      glDisable(0xbc0);
      *(undefined1 *)(iVar12 + 0xa8a) = 0;
      iVar12 = *(int *)(param_1 + 0xeb48);
    }
    bVar21 = *(int *)(param_1 + 0x7a58) != 0;
    if (bVar21 != (bool)*(char *)(iVar12 + 0xa8f)) {
      if (bVar21) {
        glEnable(0xbd0);
      }
      else {
        glDisable();
      }
      *(bool *)(iVar12 + 0xa8f) = bVar21;
      iVar12 = *(int *)(param_1 + 0xeb48);
    }
    bVar21 = *(int *)(param_1 + 0x7a70) != 0;
    if (bVar21 != (bool)*(char *)(iVar12 + 0xa90)) {
      if (bVar21) {
        glEnable(0x8db9);
      }
      else {
        glDisable();
      }
      *(bool *)(iVar12 + 0xa90) = bVar21;
      iVar12 = *(int *)(param_1 + 0xeb48);
    }
    iVar6 = *(int *)(param_1 + 0x7a14);
    if (iVar6 != *(int *)(iVar12 + 0x444)) {
      glDepthFunc(iVar6);
      *(int *)(iVar12 + 0x444) = iVar6;
      iVar12 = *(int *)(param_1 + 0xeb48);
    }
    iVar6 = *(int *)(param_1 + 0x7a20);
    if (iVar6 != *(int *)(iVar12 + 0x4a0)) {
      (*DAT_0451eec4)(0x408);
      *(int *)(iVar12 + 0x4a0) = iVar6;
      iVar12 = *(int *)(param_1 + 0xeb48);
    }
  }
  iVar6 = *(int *)(param_1 + 0x7a5c);
  bVar21 = iVar6 != 0;
  if (bVar21 != (bool)*(char *)(iVar12 + 0xa8b)) {
    if (bVar21) {
      glEnable(0xc11);
    }
    else {
      glDisable();
    }
    *(bool *)(iVar12 + 0xa8b) = bVar21;
    iVar6 = *(int *)(param_1 + 0x7a5c);
    iVar12 = *(int *)(param_1 + 0xeb48);
  }
  if (iVar6 != 0) {
    iVar6 = *(int *)(param_1 + 0x8168);
    iVar15 = *(int *)(param_1 + 0x816c);
    iVar14 = *(int *)(param_1 + 0x8170) - iVar6;
    if (iVar14 < 0) {
      iVar14 = 0;
    }
    iVar9 = *(int *)(param_1 + 0x8174) - iVar15;
    iVar10 = 0;
    if (-1 < iVar9) {
      iVar10 = iVar9;
    }
    if ((((iVar6 != *(int *)(iVar12 + 0x434)) || (iVar15 != *(int *)(iVar12 + 0x438))) ||
        (*(int *)(iVar12 + 0x43c) != iVar14)) || (*(int *)(iVar12 + 0x440) != iVar10)) {
      glScissor(iVar6,iVar15,iVar14);
      *(int *)(iVar12 + 0x434) = iVar6;
      *(int *)(iVar12 + 0x438) = iVar15;
      *(int *)(iVar12 + 0x43c) = iVar14;
      *(int *)(iVar12 + 0x440) = iVar10;
      iVar12 = *(int *)(param_1 + 0xeb48);
    }
  }
  if (*(int *)(iVar12 + 0x358) == 0) {
    FUN_0400a810("mOpenGLContextCache->GetCurrentDrawFramebuffer() != 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                 ,0x2aba);
  }
  if (*(char *)(param_1 + 0xeb4c) == '\0') {
    iVar6 = *(int *)(param_1 + 0xeb48);
    bVar21 = *(int *)(param_1 + 0x7aa8) != 0;
    cVar5 = *(char *)(iVar6 + 0x218);
    if (bVar21 != (bool)*(char *)(iVar6 + 0xa91)) {
      if (cVar5 != '\0') {
        FUN_0400a810("!mUsingOpenGLCore",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                     ,0x17f);
      }
      if (bVar21) {
        glTexEnvi(0x8861,0x8862,1);
        glEnable(0x8861);
      }
      else {
        glDisable(0x8861);
        glTexEnvi(0x8861,0x8862,0);
      }
      *(bool *)(iVar6 + 0xa91) = bVar21;
      iVar6 = *(int *)(param_1 + 0xeb48);
      cVar5 = *(char *)(iVar6 + 0x218);
    }
    fVar28 = *(float *)(iVar6 + 0x4d0);
    if (*(float *)(param_1 + 0x7ac0) <= *(float *)(iVar6 + 0x4d0)) {
      fVar28 = *(float *)(param_1 + 0x7ac0);
    }
    if (fVar28 != *(float *)(iVar6 + 0x4c8)) {
      if (cVar5 != '\0') {
        FUN_0400a810("!mUsingOpenGLCore",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                     ,0x2dd);
      }
      (*DAT_0451edcc)(0x8127);
      *(float *)(iVar6 + 0x4c8) = fVar28;
      iVar6 = *(int *)(param_1 + 0xeb48);
      cVar5 = *(char *)(iVar6 + 0x218);
    }
    fVar28 = *(float *)(param_1 + 0x7abc);
    fVar23 = *(float *)(iVar6 + 0x4cc);
    if ((*(float *)(iVar6 + 0x4cc) <= fVar28) &&
       (fVar23 = *(float *)(iVar6 + 0x4c8), fVar28 <= *(float *)(iVar6 + 0x4c8))) {
      fVar23 = fVar28;
    }
    if (fVar23 != *(float *)(iVar6 + 0x4c4)) {
      if (cVar5 != '\0') {
        FUN_0400a810("!mUsingOpenGLCore",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                     ,0x2d0);
      }
      (*DAT_0451edcc)(0x8126);
      *(float *)(iVar6 + 0x4c4) = fVar23;
      iVar6 = *(int *)(param_1 + 0xeb48);
      cVar5 = *(char *)(iVar6 + 0x218);
    }
    iVar15 = *(int *)(param_1 + 0x7a24);
    if (iVar15 != *(int *)(iVar6 + 0x4a4)) {
      if (cVar5 != '\0') {
        FUN_0400a810("!mUsingOpenGLCore",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                     ,0x2a3);
      }
      glShadeModel(iVar15);
      *(int *)(iVar6 + 0x4a4) = iVar15;
      iVar6 = *(int *)(param_1 + 0xeb48);
      cVar5 = *(char *)(iVar6 + 0x218);
    }
    iVar15 = memcmp((undefined4 *)(iVar6 + 0x4e4),(void *)(param_1 + 0x7a28),0x10);
    if (iVar15 != 0) {
      if (cVar5 != '\0') {
        FUN_0400a810("!mUsingOpenGLCore",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                     ,0x2fc);
      }
      glFogfv(0xb66);
      *(undefined4 *)(iVar6 + 0x4e4) = *(undefined4 *)(param_1 + 0x7a28);
      *(undefined4 *)(iVar6 + 0x4e8) = *(undefined4 *)(param_1 + 0x7a2c);
      *(undefined4 *)(iVar6 + 0x4ec) = *(undefined4 *)(param_1 + 0x7a30);
      *(undefined4 *)(iVar6 + 0x4f0) = *(undefined4 *)(param_1 + 0x7a34);
      iVar6 = *(int *)(param_1 + 0xeb48);
      cVar5 = *(char *)(iVar6 + 0x218);
    }
    fVar28 = *(float *)(param_1 + 0x7a38);
    if (fVar28 != *(float *)(iVar6 + 0x4f4)) {
      if (cVar5 != '\0') {
        FUN_0400a810("!mUsingOpenGLCore",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                     ,0x306);
      }
      glFogf(0xb63);
      *(float *)(iVar6 + 0x4f4) = fVar28;
      iVar6 = *(int *)(param_1 + 0xeb48);
      cVar5 = *(char *)(iVar6 + 0x218);
    }
    fVar28 = *(float *)(param_1 + 0x7a3c);
    if (fVar28 != *(float *)(iVar6 + 0x4f8)) {
      if (cVar5 != '\0') {
        FUN_0400a810("!mUsingOpenGLCore",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                     ,0x310);
      }
      glFogf(0xb64);
      *(float *)(iVar6 + 0x4f8) = fVar28;
      iVar6 = *(int *)(param_1 + 0xeb48);
      cVar5 = *(char *)(iVar6 + 0x218);
    }
    fVar28 = *(float *)(param_1 + 0x7a40);
    if (fVar28 != *(float *)(iVar6 + 0x4fc)) {
      if (cVar5 != '\0') {
        FUN_0400a810("!mUsingOpenGLCore",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                     ,0x31a);
      }
      glFogf(0xb62);
      *(float *)(iVar6 + 0x4fc) = fVar28;
      iVar6 = *(int *)(param_1 + 0xeb48);
    }
    if ((*(int *)(param_1 + 0xc630) != *(int *)(iVar6 + 0x1a8)) ||
       (*(int *)(param_1 + 0xc63c) != *(int *)(iVar6 + 0x1ac))) {
      if (*(int *)(iVar6 + 0x500) != 0x1700) {
        if (*(char *)(iVar6 + 0x218) != '\0') {
          FUN_0400a810("!mUsingOpenGLCore",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                       ,0x3bc);
        }
        glMatrixMode(0x1700);
        *(undefined4 *)(iVar6 + 0x500) = 0x1700;
      }
      glLoadMatrixf(param_1 + 0x83b0);
      glMultMatrixf(param_1 + 0x8630);
      iVar6 = *(int *)(param_1 + 0xeb48);
      *(undefined4 *)(iVar6 + 0x1a8) = *(undefined4 *)(param_1 + 0xc630);
      *(undefined4 *)(iVar6 + 0x1ac) = *(undefined4 *)(param_1 + 0xc63c);
    }
    if (*(int *)(param_1 + 0xc634) != *(int *)(iVar6 + 0x1b0)) {
      if (*(int *)(iVar6 + 0x500) != 0x1701) {
        if (*(char *)(iVar6 + 0x218) != '\0') {
          FUN_0400a810("!mUsingOpenGLCore",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                       ,0x3bc);
        }
        glMatrixMode(0x1701);
        *(undefined4 *)(iVar6 + 0x500) = 0x1701;
      }
      glLoadMatrixf(param_1 + 0x83f0);
      iVar6 = *(int *)(param_1 + 0xeb48);
      *(undefined4 *)(iVar6 + 0x1b0) = *(undefined4 *)(param_1 + 0xc634);
    }
    if (*(int *)(param_1 + 0xc638) == *(int *)(iVar6 + 0x1b4)) {
      return;
    }
    if (*(char *)(iVar6 + 0x218) != '\0') {
      FUN_0400a810("!mUsingOpenGLCore",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                   ,0x3da);
    }
    local_44 = *(float *)(iVar6 + 0x234);
    local_40 = *(float *)(iVar6 + 0x500);
    iVar15 = memcmp((undefined4 *)(iVar6 + 0x86c),(void *)(param_1 + 0x8430),0x40);
    if (iVar15 != 0) {
      (*DAT_0451eeac)(0x84c0);
      if (local_40 != 8.25365e-42) {
        glMatrixMode(0x1702);
      }
      glLoadMatrixf((void *)(param_1 + 0x8430));
      *(undefined4 *)(iVar6 + 0x86c) = *(undefined4 *)(param_1 + 0x8430);
      *(undefined4 *)(iVar6 + 0x870) = *(undefined4 *)(param_1 + 0x8434);
      *(undefined4 *)(iVar6 + 0x874) = *(undefined4 *)(param_1 + 0x8438);
      *(undefined4 *)(iVar6 + 0x878) = *(undefined4 *)(param_1 + 0x843c);
      *(undefined4 *)(iVar6 + 0x87c) = *(undefined4 *)(param_1 + 0x8440);
      *(undefined4 *)(iVar6 + 0x880) = *(undefined4 *)(param_1 + 0x8444);
      *(undefined4 *)(iVar6 + 0x884) = *(undefined4 *)(param_1 + 0x8448);
      *(undefined4 *)(iVar6 + 0x888) = *(undefined4 *)(param_1 + 0x844c);
      *(undefined4 *)(iVar6 + 0x88c) = *(undefined4 *)(param_1 + 0x8450);
      *(undefined4 *)(iVar6 + 0x890) = *(undefined4 *)(param_1 + 0x8454);
      *(undefined4 *)(iVar6 + 0x894) = *(undefined4 *)(param_1 + 0x8458);
      *(undefined4 *)(iVar6 + 0x898) = *(undefined4 *)(param_1 + 0x845c);
      *(undefined4 *)(iVar6 + 0x89c) = *(undefined4 *)(param_1 + 0x8460);
      *(undefined4 *)(iVar6 + 0x8a0) = *(undefined4 *)(param_1 + 0x8464);
      *(undefined4 *)(iVar6 + 0x8a4) = *(undefined4 *)(param_1 + 0x8468);
      *(undefined4 *)(iVar6 + 0x8a8) = *(undefined4 *)(param_1 + 0x846c);
      local_40 = 8.25365e-42;
      local_44 = 4.76217e-41;
    }
    iVar15 = memcmp((undefined4 *)(iVar6 + 0x8ac),(void *)(param_1 + 0x8470),0x40);
    if (iVar15 != 0) {
      (*DAT_0451eeac)(0x84c1);
      if (local_40 != 8.25365e-42) {
        glMatrixMode(0x1702);
      }
      glLoadMatrixf((void *)(param_1 + 0x8470));
      *(undefined4 *)(iVar6 + 0x8ac) = *(undefined4 *)(param_1 + 0x8470);
      *(undefined4 *)(iVar6 + 0x8b0) = *(undefined4 *)(param_1 + 0x8474);
      *(undefined4 *)(iVar6 + 0x8b4) = *(undefined4 *)(param_1 + 0x8478);
      *(undefined4 *)(iVar6 + 0x8b8) = *(undefined4 *)(param_1 + 0x847c);
      *(undefined4 *)(iVar6 + 0x8bc) = *(undefined4 *)(param_1 + 0x8480);
      *(undefined4 *)(iVar6 + 0x8c0) = *(undefined4 *)(param_1 + 0x8484);
      *(undefined4 *)(iVar6 + 0x8c4) = *(undefined4 *)(param_1 + 0x8488);
      *(undefined4 *)(iVar6 + 0x8c8) = *(undefined4 *)(param_1 + 0x848c);
      *(undefined4 *)(iVar6 + 0x8cc) = *(undefined4 *)(param_1 + 0x8490);
      *(undefined4 *)(iVar6 + 0x8d0) = *(undefined4 *)(param_1 + 0x8494);
      *(undefined4 *)(iVar6 + 0x8d4) = *(undefined4 *)(param_1 + 0x8498);
      *(undefined4 *)(iVar6 + 0x8d8) = *(undefined4 *)(param_1 + 0x849c);
      *(undefined4 *)(iVar6 + 0x8dc) = *(undefined4 *)(param_1 + 0x84a0);
      *(undefined4 *)(iVar6 + 0x8e0) = *(undefined4 *)(param_1 + 0x84a4);
      *(undefined4 *)(iVar6 + 0x8e4) = *(undefined4 *)(param_1 + 0x84a8);
      *(undefined4 *)(iVar6 + 0x8e8) = *(undefined4 *)(param_1 + 0x84ac);
      local_40 = 8.25365e-42;
      local_44 = 4.76231e-41;
    }
    iVar15 = memcmp((undefined4 *)(iVar6 + 0x8ec),(void *)(param_1 + 0x84b0),0x40);
    if (iVar15 != 0) {
      (*DAT_0451eeac)(0x84c2);
      if (local_40 != 8.25365e-42) {
        glMatrixMode(0x1702);
      }
      glLoadMatrixf((void *)(param_1 + 0x84b0));
      *(undefined4 *)(iVar6 + 0x8ec) = *(undefined4 *)(param_1 + 0x84b0);
      *(undefined4 *)(iVar6 + 0x8f0) = *(undefined4 *)(param_1 + 0x84b4);
      *(undefined4 *)(iVar6 + 0x8f4) = *(undefined4 *)(param_1 + 0x84b8);
      *(undefined4 *)(iVar6 + 0x8f8) = *(undefined4 *)(param_1 + 0x84bc);
      *(undefined4 *)(iVar6 + 0x8fc) = *(undefined4 *)(param_1 + 0x84c0);
      *(undefined4 *)(iVar6 + 0x900) = *(undefined4 *)(param_1 + 0x84c4);
      *(undefined4 *)(iVar6 + 0x904) = *(undefined4 *)(param_1 + 0x84c8);
      *(undefined4 *)(iVar6 + 0x908) = *(undefined4 *)(param_1 + 0x84cc);
      *(undefined4 *)(iVar6 + 0x90c) = *(undefined4 *)(param_1 + 34000);
      *(undefined4 *)(iVar6 + 0x910) = *(undefined4 *)(param_1 + 0x84d4);
      *(undefined4 *)(iVar6 + 0x914) = *(undefined4 *)(param_1 + 0x84d8);
      *(undefined4 *)(iVar6 + 0x918) = *(undefined4 *)(param_1 + 0x84dc);
      *(undefined4 *)(iVar6 + 0x91c) = *(undefined4 *)(param_1 + 0x84e0);
      *(undefined4 *)(iVar6 + 0x920) = *(undefined4 *)(param_1 + 0x84e4);
      *(undefined4 *)(iVar6 + 0x924) = *(undefined4 *)(param_1 + 0x84e8);
      *(undefined4 *)(iVar6 + 0x928) = *(undefined4 *)(param_1 + 0x84ec);
      local_40 = 8.25365e-42;
      local_44 = 4.76245e-41;
    }
    iVar15 = memcmp((undefined4 *)(iVar6 + 0x92c),(void *)(param_1 + 0x84f0),0x40);
    if (iVar15 != 0) {
      (*DAT_0451eeac)(0x84c3);
      if (local_40 != 8.25365e-42) {
        glMatrixMode(0x1702);
      }
      glLoadMatrixf((void *)(param_1 + 0x84f0));
      *(undefined4 *)(iVar6 + 0x92c) = *(undefined4 *)(param_1 + 0x84f0);
      *(undefined4 *)(iVar6 + 0x930) = *(undefined4 *)(param_1 + 0x84f4);
      *(undefined4 *)(iVar6 + 0x934) = *(undefined4 *)(param_1 + 0x84f8);
      *(undefined4 *)(iVar6 + 0x938) = *(undefined4 *)(param_1 + 0x84fc);
      *(undefined4 *)(iVar6 + 0x93c) = *(undefined4 *)(param_1 + 0x8500);
      *(undefined4 *)(iVar6 + 0x940) = *(undefined4 *)(param_1 + 0x8504);
      *(undefined4 *)(iVar6 + 0x944) = *(undefined4 *)(param_1 + 0x8508);
      *(undefined4 *)(iVar6 + 0x948) = *(undefined4 *)(param_1 + 0x850c);
      *(undefined4 *)(iVar6 + 0x94c) = *(undefined4 *)(param_1 + 0x8510);
      *(undefined4 *)(iVar6 + 0x950) = *(undefined4 *)(param_1 + 0x8514);
      *(undefined4 *)(iVar6 + 0x954) = *(undefined4 *)(param_1 + 0x8518);
      *(undefined4 *)(iVar6 + 0x958) = *(undefined4 *)(param_1 + 0x851c);
      *(undefined4 *)(iVar6 + 0x95c) = *(undefined4 *)(param_1 + 0x8520);
      *(undefined4 *)(iVar6 + 0x960) = *(undefined4 *)(param_1 + 0x8524);
      *(undefined4 *)(iVar6 + 0x964) = *(undefined4 *)(param_1 + 0x8528);
      *(undefined4 *)(iVar6 + 0x968) = *(undefined4 *)(param_1 + 0x852c);
      local_40 = 8.25365e-42;
      local_44 = 4.76259e-41;
    }
    iVar15 = memcmp((undefined4 *)(iVar6 + 0x96c),(void *)(param_1 + 0x8530),0x40);
    if (iVar15 != 0) {
      (*DAT_0451eeac)(0x84c4);
      if (local_40 != 8.25365e-42) {
        glMatrixMode(0x1702);
      }
      glLoadMatrixf((void *)(param_1 + 0x8530));
      *(undefined4 *)(iVar6 + 0x96c) = *(undefined4 *)(param_1 + 0x8530);
      *(undefined4 *)(iVar6 + 0x970) = *(undefined4 *)(param_1 + 0x8534);
      *(undefined4 *)(iVar6 + 0x974) = *(undefined4 *)(param_1 + 0x8538);
      *(undefined4 *)(iVar6 + 0x978) = *(undefined4 *)(param_1 + 0x853c);
      *(undefined4 *)(iVar6 + 0x97c) = *(undefined4 *)(param_1 + 0x8540);
      *(undefined4 *)(iVar6 + 0x980) = *(undefined4 *)(param_1 + 0x8544);
      *(undefined4 *)(iVar6 + 0x984) = *(undefined4 *)(param_1 + 0x8548);
      *(undefined4 *)(iVar6 + 0x988) = *(undefined4 *)(param_1 + 0x854c);
      *(undefined4 *)(iVar6 + 0x98c) = *(undefined4 *)(param_1 + 0x8550);
      *(undefined4 *)(iVar6 + 0x990) = *(undefined4 *)(param_1 + 0x8554);
      *(undefined4 *)(iVar6 + 0x994) = *(undefined4 *)(param_1 + 0x8558);
      *(undefined4 *)(iVar6 + 0x998) = *(undefined4 *)(param_1 + 0x855c);
      *(undefined4 *)(iVar6 + 0x99c) = *(undefined4 *)(param_1 + 0x8560);
      *(undefined4 *)(iVar6 + 0x9a0) = *(undefined4 *)(param_1 + 0x8564);
      *(undefined4 *)(iVar6 + 0x9a4) = *(undefined4 *)(param_1 + 0x8568);
      *(undefined4 *)(iVar6 + 0x9a8) = *(undefined4 *)(param_1 + 0x856c);
      local_40 = 8.25365e-42;
      local_44 = 4.76273e-41;
    }
    iVar15 = memcmp((undefined4 *)(iVar6 + 0x9ac),(void *)(param_1 + 0x8570),0x40);
    if (iVar15 != 0) {
      (*DAT_0451eeac)(0x84c5);
      if (local_40 != 8.25365e-42) {
        glMatrixMode(0x1702);
      }
      glLoadMatrixf((void *)(param_1 + 0x8570));
      *(undefined4 *)(iVar6 + 0x9ac) = *(undefined4 *)(param_1 + 0x8570);
      *(undefined4 *)(iVar6 + 0x9b0) = *(undefined4 *)(param_1 + 0x8574);
      *(undefined4 *)(iVar6 + 0x9b4) = *(undefined4 *)(param_1 + 0x8578);
      *(undefined4 *)(iVar6 + 0x9b8) = *(undefined4 *)(param_1 + 0x857c);
      *(undefined4 *)(iVar6 + 0x9bc) = *(undefined4 *)(param_1 + 0x8580);
      *(undefined4 *)(iVar6 + 0x9c0) = *(undefined4 *)(param_1 + 0x8584);
      *(undefined4 *)(iVar6 + 0x9c4) = *(undefined4 *)(param_1 + 0x8588);
      *(undefined4 *)(iVar6 + 0x9c8) = *(undefined4 *)(param_1 + 0x858c);
      *(undefined4 *)(iVar6 + 0x9cc) = *(undefined4 *)(param_1 + 0x8590);
      *(undefined4 *)(iVar6 + 0x9d0) = *(undefined4 *)(param_1 + 0x8594);
      *(undefined4 *)(iVar6 + 0x9d4) = *(undefined4 *)(param_1 + 0x8598);
      *(undefined4 *)(iVar6 + 0x9d8) = *(undefined4 *)(param_1 + 0x859c);
      *(undefined4 *)(iVar6 + 0x9dc) = *(undefined4 *)(param_1 + 0x85a0);
      *(undefined4 *)(iVar6 + 0x9e0) = *(undefined4 *)(param_1 + 0x85a4);
      *(undefined4 *)(iVar6 + 0x9e4) = *(undefined4 *)(param_1 + 0x85a8);
      *(undefined4 *)(iVar6 + 0x9e8) = *(undefined4 *)(param_1 + 0x85ac);
      local_40 = 8.25365e-42;
      local_44 = 4.76287e-41;
    }
    iVar15 = memcmp((undefined4 *)(iVar6 + 0x9ec),(void *)(param_1 + 0x85b0),0x40);
    if (iVar15 != 0) {
      (*DAT_0451eeac)(0x84c6);
      if (local_40 != 8.25365e-42) {
        glMatrixMode(0x1702);
      }
      glLoadMatrixf((void *)(param_1 + 0x85b0));
      *(undefined4 *)(iVar6 + 0x9ec) = *(undefined4 *)(param_1 + 0x85b0);
      *(undefined4 *)(iVar6 + 0x9f0) = *(undefined4 *)(param_1 + 0x85b4);
      *(undefined4 *)(iVar6 + 0x9f4) = *(undefined4 *)(param_1 + 0x85b8);
      *(undefined4 *)(iVar6 + 0x9f8) = *(undefined4 *)(param_1 + 0x85bc);
      *(undefined4 *)(iVar6 + 0x9fc) = *(undefined4 *)(param_1 + 0x85c0);
      *(undefined4 *)(iVar6 + 0xa00) = *(undefined4 *)(param_1 + 0x85c4);
      *(undefined4 *)(iVar6 + 0xa04) = *(undefined4 *)(param_1 + 0x85c8);
      *(undefined4 *)(iVar6 + 0xa08) = *(undefined4 *)(param_1 + 0x85cc);
      *(undefined4 *)(iVar6 + 0xa0c) = *(undefined4 *)(param_1 + 0x85d0);
      *(undefined4 *)(iVar6 + 0xa10) = *(undefined4 *)(param_1 + 0x85d4);
      *(undefined4 *)(iVar6 + 0xa14) = *(undefined4 *)(param_1 + 0x85d8);
      *(undefined4 *)(iVar6 + 0xa18) = *(undefined4 *)(param_1 + 0x85dc);
      *(undefined4 *)(iVar6 + 0xa1c) = *(undefined4 *)(param_1 + 0x85e0);
      *(undefined4 *)(iVar6 + 0xa20) = *(undefined4 *)(param_1 + 0x85e4);
      *(undefined4 *)(iVar6 + 0xa24) = *(undefined4 *)(param_1 + 0x85e8);
      *(undefined4 *)(iVar6 + 0xa28) = *(undefined4 *)(param_1 + 0x85ec);
      local_40 = 8.25365e-42;
      local_44 = 4.76301e-41;
    }
    iVar15 = memcmp((undefined4 *)(iVar6 + 0xa2c),(void *)(param_1 + 0x85f0),0x40);
    if (iVar15 != 0) {
      (*DAT_0451eeac)(0x84c7);
      if (local_40 != 8.25365e-42) {
        glMatrixMode(0x1702);
      }
      glLoadMatrixf((void *)(param_1 + 0x85f0));
      *(undefined4 *)(iVar6 + 0xa2c) = *(undefined4 *)(param_1 + 0x85f0);
      *(undefined4 *)(iVar6 + 0xa30) = *(undefined4 *)(param_1 + 0x85f4);
      *(undefined4 *)(iVar6 + 0xa34) = *(undefined4 *)(param_1 + 0x85f8);
      *(undefined4 *)(iVar6 + 0xa38) = *(undefined4 *)(param_1 + 0x85fc);
      *(undefined4 *)(iVar6 + 0xa3c) = *(undefined4 *)(param_1 + 0x8600);
      *(undefined4 *)(iVar6 + 0xa40) = *(undefined4 *)(param_1 + 0x8604);
      *(undefined4 *)(iVar6 + 0xa44) = *(undefined4 *)(param_1 + 0x8608);
      *(undefined4 *)(iVar6 + 0xa48) = *(undefined4 *)(param_1 + 0x860c);
      *(undefined4 *)(iVar6 + 0xa4c) = *(undefined4 *)(param_1 + 0x8610);
      *(undefined4 *)(iVar6 + 0xa50) = *(undefined4 *)(param_1 + 0x8614);
      *(undefined4 *)(iVar6 + 0xa54) = *(undefined4 *)(param_1 + 0x8618);
      *(undefined4 *)(iVar6 + 0xa58) = *(undefined4 *)(param_1 + 0x861c);
      *(undefined4 *)(iVar6 + 0xa5c) = *(undefined4 *)(param_1 + 0x8620);
      *(undefined4 *)(iVar6 + 0xa60) = *(undefined4 *)(param_1 + 0x8624);
      *(undefined4 *)(iVar6 + 0xa64) = *(undefined4 *)(param_1 + 0x8628);
      *(undefined4 *)(iVar6 + 0xa68) = *(undefined4 *)(param_1 + 0x862c);
      local_40 = 8.25365e-42;
      local_44 = 4.76315e-41;
    }
    if ((float)*(int *)(iVar6 + 0x234) != local_44) {
      (*DAT_0451eeac)(*(int *)(iVar6 + 0x234));
    }
    if ((float)*(int *)(iVar6 + 0x500) != local_40) {
      glMatrixMode(*(int *)(iVar6 + 0x500));
    }
    *(undefined4 *)(*(int *)(param_1 + 0xeb48) + 0x1b4) = *(undefined4 *)(param_1 + 0xc638);
    return;
  }
  iVar6 = *(int *)(param_1 + 0xe9ec);
  uVar19 = 1;
  iVar15 = *(int *)(iVar6 + 0x16c);
  bVar21 = iVar15 == 0;
  if (bVar21) {
    uVar19 = 2;
    FUN_040f03f0(*(undefined4 *)(param_1 + 0xeb78),*(undefined4 *)(iVar6 + 0x164),
                 *(undefined4 *)(iVar6 + 0x168));
    iVar15 = *(int *)(iVar6 + 0x170);
  }
  uVar7 = (uint)bVar21;
  if (iVar15 == 1) {
    FUN_040f0410(*(undefined4 *)(param_1 + 0xeb78));
    iVar15 = *(int *)(iVar6 + 0x16c + uVar19 * 4);
    uVar7 = uVar19;
  }
  uVar19 = uVar7;
  if (iVar15 == 2) {
    uVar19 = uVar7 + 1;
    FUN_040f0480(*(undefined4 *)(param_1 + 0xeb78));
    iVar15 = *(int *)(iVar6 + 0x170 + uVar7 * 4);
  }
  uVar7 = uVar19;
  if (iVar15 == 3) {
    uVar7 = uVar19 + 1;
    FUN_040f04f0(*(undefined4 *)(param_1 + 0xeb78),
                 *(undefined4 *)(*(int *)(param_1 + 0xe9ec) + 0x164),
                 *(undefined4 *)(*(int *)(param_1 + 0xe9ec) + 0x168));
    iVar15 = *(int *)(iVar6 + 0x170 + uVar19 * 4);
  }
  uVar19 = uVar7;
  if (iVar15 == 4) {
    uVar19 = uVar7 + 1;
    FUN_040f0510(*(undefined4 *)(param_1 + 0xeb78));
    iVar15 = *(int *)(iVar6 + 0x170 + uVar7 * 4);
  }
  uVar7 = uVar19;
  if (iVar15 == 5) {
    uVar7 = uVar19 + 1;
    FUN_040f0580(*(undefined4 *)(param_1 + 0xeb78));
    iVar15 = *(int *)(iVar6 + 0x170 + uVar19 * 4);
  }
  uVar19 = uVar7;
  if (iVar15 == 6) {
    uVar19 = uVar7 + 1;
    FUN_040f05f0(*(undefined4 *)(param_1 + 0xeb78));
    iVar15 = *(int *)(iVar6 + 0x170 + uVar7 * 4);
  }
  uVar7 = uVar19;
  if (iVar15 == 7) {
    uVar7 = uVar19 + 1;
    FUN_040f0660(*(undefined4 *)(param_1 + 0xeb78),*(undefined4 *)(param_1 + 0xc644),uVar19);
    iVar15 = *(int *)(iVar6 + 0x170 + uVar19 * 4);
  }
  if (iVar15 == 8) {
    if ((*(byte *)(param_1 + 0xea05) & 1) == 0) {
      iVar12 = *(int *)(param_1 + 0xc648);
      iVar15 = *(int *)(param_1 + 0xeb78);
    }
    else {
      local_2c = 0;
      local_28 = 0;
      iVar15 = *(int *)(param_1 + 0xeb78);
      local_24 = DAT_042f7398 /
                 ((float)(*(uint *)(param_1 + 0xe9c4) >> 0x10) * DAT_042dbf34 +
                 (float)(*(uint *)(param_1 + 0xe9c4) & 0xffff));
      local_20 = DAT_042f7398 /
                 ((float)(*(uint *)(param_1 + 0xe9c8) >> 0x10) * DAT_042dbf34 +
                 (float)(*(uint *)(param_1 + 0xe9c8) & 0xffff));
      iVar12 = memcmp((void *)(iVar15 + 0x75c),&local_2c,0x10);
      if (iVar12 == 0) {
        iVar12 = *(int *)(param_1 + 0xc648);
      }
      else {
        *(undefined4 *)(iVar15 + 0x75c) = local_2c;
        *(undefined4 *)(iVar15 + 0x760) = local_28;
        *(float *)(iVar15 + 0x764) = local_24;
        *(float *)(iVar15 + 0x768) = local_20;
        iVar15 = *(int *)(param_1 + 0xeb78);
        iVar12 = *(int *)(param_1 + 0xc648) + 1;
        *(int *)(param_1 + 0xc648) = iVar12;
      }
    }
    FUN_040f06d0(iVar15,iVar12,uVar7);
    iVar15 = *(int *)(iVar6 + 0x170 + uVar7 * 4);
    uVar7 = uVar7 + 1;
  }
  if (iVar15 != 9) goto joined_r0x04096c8c;
  iVar15 = *(int *)(param_1 + 0xeb78);
  if (*(int *)(param_1 + 0xc630) == *(int *)(iVar15 + 4)) {
    if (*(int *)(param_1 + 0xc63c) != *(int *)(iVar15 + 8)) goto LAB_04094ecc;
    if (*(int *)(param_1 + 0xc634) != *(int *)(iVar15 + 0xc)) {
      local_5c = *(float *)(iVar15 + 0x7ec);
      local_60 = *(float *)(iVar15 + 0x7f0);
      local_64 = *(float *)(iVar15 + 0x7f4);
      goto LAB_040967d3;
    }
  }
  else {
    *(undefined4 *)(iVar15 + 0x8ac) = *(undefined4 *)(param_1 + 0x83b0);
    *(undefined4 *)(iVar15 + 0x8b0) = *(undefined4 *)(param_1 + 0x83b4);
    *(undefined4 *)(iVar15 + 0x8b4) = *(undefined4 *)(param_1 + 0x83b8);
    *(undefined4 *)(iVar15 + 0x8b8) = *(undefined4 *)(param_1 + 0x83bc);
    *(undefined4 *)(iVar15 + 0x8bc) = *(undefined4 *)(param_1 + 0x83c0);
    *(undefined4 *)(iVar15 + 0x8c0) = *(undefined4 *)(param_1 + 0x83c4);
    *(undefined4 *)(iVar15 + 0x8c4) = *(undefined4 *)(param_1 + 0x83c8);
    *(undefined4 *)(iVar15 + 0x8c8) = *(undefined4 *)(param_1 + 0x83cc);
    *(undefined4 *)(iVar15 + 0x8cc) = *(undefined4 *)(param_1 + 0x83d0);
    *(undefined4 *)(iVar15 + 0x8d0) = *(undefined4 *)(param_1 + 0x83d4);
    *(undefined4 *)(iVar15 + 0x8d4) = *(undefined4 *)(param_1 + 0x83d8);
    *(undefined4 *)(iVar15 + 0x8d8) = *(undefined4 *)(param_1 + 0x83dc);
    *(undefined4 *)(iVar15 + 0x8dc) = *(undefined4 *)(param_1 + 0x83e0);
    *(undefined4 *)(iVar15 + 0x8e0) = *(undefined4 *)(param_1 + 0x83e4);
    *(undefined4 *)(iVar15 + 0x8e4) = *(undefined4 *)(param_1 + 0x83e8);
    *(undefined4 *)(iVar15 + 0x8e8) = *(undefined4 *)(param_1 + 0x83ec);
    iVar15 = *(int *)(param_1 + 0xeb78);
LAB_04094ecc:
    *(float *)(iVar15 + 0x7ec) =
         *(float *)(param_1 + 0x8630) * *(float *)(param_1 + 0x83b0) +
         *(float *)(param_1 + 0x8634) * *(float *)(param_1 + 0x83c0) +
         *(float *)(param_1 + 0x8638) * *(float *)(param_1 + 0x83d0) +
         *(float *)(param_1 + 0x863c) * *(float *)(param_1 + 0x83e0);
    *(float *)(iVar15 + 0x7f0) =
         *(float *)(param_1 + 0x8630) * *(float *)(param_1 + 0x83b4) +
         *(float *)(param_1 + 0x8634) * *(float *)(param_1 + 0x83c4) +
         *(float *)(param_1 + 0x8638) * *(float *)(param_1 + 0x83d4) +
         *(float *)(param_1 + 0x863c) * *(float *)(param_1 + 0x83e4);
    *(float *)(iVar15 + 0x7f4) =
         *(float *)(param_1 + 0x8630) * *(float *)(param_1 + 0x83b8) +
         *(float *)(param_1 + 0x8634) * *(float *)(param_1 + 0x83c8) +
         *(float *)(param_1 + 0x8638) * *(float *)(param_1 + 0x83d8) +
         *(float *)(param_1 + 0x863c) * *(float *)(param_1 + 0x83e8);
    *(float *)(iVar15 + 0x7f8) =
         *(float *)(param_1 + 0x8630) * *(float *)(param_1 + 0x83bc) +
         *(float *)(param_1 + 0x8634) * *(float *)(param_1 + 0x83cc) +
         *(float *)(param_1 + 0x8638) * *(float *)(param_1 + 0x83dc) +
         *(float *)(param_1 + 0x863c) * *(float *)(param_1 + 0x83ec);
    *(float *)(iVar15 + 0x7fc) =
         *(float *)(param_1 + 0x8640) * *(float *)(param_1 + 0x83b0) +
         *(float *)(param_1 + 0x8644) * *(float *)(param_1 + 0x83c0) +
         *(float *)(param_1 + 0x8648) * *(float *)(param_1 + 0x83d0) +
         *(float *)(param_1 + 0x864c) * *(float *)(param_1 + 0x83e0);
    *(float *)(iVar15 + 0x800) =
         *(float *)(param_1 + 0x8640) * *(float *)(param_1 + 0x83b4) +
         *(float *)(param_1 + 0x8644) * *(float *)(param_1 + 0x83c4) +
         *(float *)(param_1 + 0x8648) * *(float *)(param_1 + 0x83d4) +
         *(float *)(param_1 + 0x864c) * *(float *)(param_1 + 0x83e4);
    *(float *)(iVar15 + 0x804) =
         *(float *)(param_1 + 0x8640) * *(float *)(param_1 + 0x83b8) +
         *(float *)(param_1 + 0x8644) * *(float *)(param_1 + 0x83c8) +
         *(float *)(param_1 + 0x8648) * *(float *)(param_1 + 0x83d8) +
         *(float *)(param_1 + 0x864c) * *(float *)(param_1 + 0x83e8);
    *(float *)(iVar15 + 0x808) =
         *(float *)(param_1 + 0x8640) * *(float *)(param_1 + 0x83bc) +
         *(float *)(param_1 + 0x8644) * *(float *)(param_1 + 0x83cc) +
         *(float *)(param_1 + 0x8648) * *(float *)(param_1 + 0x83dc) +
         *(float *)(param_1 + 0x864c) * *(float *)(param_1 + 0x83ec);
    *(float *)(iVar15 + 0x80c) =
         *(float *)(param_1 + 0x8650) * *(float *)(param_1 + 0x83b0) +
         *(float *)(param_1 + 0x8654) * *(float *)(param_1 + 0x83c0) +
         *(float *)(param_1 + 0x8658) * *(float *)(param_1 + 0x83d0) +
         *(float *)(param_1 + 0x865c) * *(float *)(param_1 + 0x83e0);
    *(float *)(iVar15 + 0x810) =
         *(float *)(param_1 + 0x8650) * *(float *)(param_1 + 0x83b4) +
         *(float *)(param_1 + 0x8654) * *(float *)(param_1 + 0x83c4) +
         *(float *)(param_1 + 0x8658) * *(float *)(param_1 + 0x83d4) +
         *(float *)(param_1 + 0x865c) * *(float *)(param_1 + 0x83e4);
    *(float *)(iVar15 + 0x814) =
         *(float *)(param_1 + 0x8650) * *(float *)(param_1 + 0x83b8) +
         *(float *)(param_1 + 0x8654) * *(float *)(param_1 + 0x83c8) +
         *(float *)(param_1 + 0x8658) * *(float *)(param_1 + 0x83d8) +
         *(float *)(param_1 + 0x865c) * *(float *)(param_1 + 0x83e8);
    *(float *)(iVar15 + 0x818) =
         *(float *)(param_1 + 0x8650) * *(float *)(param_1 + 0x83bc) +
         *(float *)(param_1 + 0x8654) * *(float *)(param_1 + 0x83cc) +
         *(float *)(param_1 + 0x8658) * *(float *)(param_1 + 0x83dc) +
         *(float *)(param_1 + 0x865c) * *(float *)(param_1 + 0x83ec);
    *(float *)(iVar15 + 0x81c) =
         *(float *)(param_1 + 0x8660) * *(float *)(param_1 + 0x83b0) +
         *(float *)(param_1 + 0x8664) * *(float *)(param_1 + 0x83c0) +
         *(float *)(param_1 + 0x8668) * *(float *)(param_1 + 0x83d0) +
         *(float *)(param_1 + 0x866c) * *(float *)(param_1 + 0x83e0);
    *(float *)(iVar15 + 0x820) =
         *(float *)(param_1 + 0x8660) * *(float *)(param_1 + 0x83b4) +
         *(float *)(param_1 + 0x8664) * *(float *)(param_1 + 0x83c4) +
         *(float *)(param_1 + 0x8668) * *(float *)(param_1 + 0x83d4) +
         *(float *)(param_1 + 0x866c) * *(float *)(param_1 + 0x83e4);
    *(float *)(iVar15 + 0x824) =
         *(float *)(param_1 + 0x8660) * *(float *)(param_1 + 0x83b8) +
         *(float *)(param_1 + 0x8664) * *(float *)(param_1 + 0x83c8) +
         *(float *)(param_1 + 0x8668) * *(float *)(param_1 + 0x83d8) +
         *(float *)(param_1 + 0x866c) * *(float *)(param_1 + 0x83e8);
    *(float *)(iVar15 + 0x828) =
         *(float *)(param_1 + 0x8660) * *(float *)(param_1 + 0x83bc) +
         *(float *)(param_1 + 0x8664) * *(float *)(param_1 + 0x83cc) +
         *(float *)(param_1 + 0x8668) * *(float *)(param_1 + 0x83dc) +
         *(float *)(param_1 + 0x866c) * *(float *)(param_1 + 0x83ec);
    iVar12 = *(int *)(param_1 + 0xeb78);
    local_40 = *(float *)(iVar12 + 0x800);
    local_44 = *(float *)(iVar12 + 0x810);
    local_48 = *(float *)(iVar12 + 0x804);
    fVar28 = *(float *)(iVar12 + 0x814);
    local_50 = *(float *)(iVar12 + 0x80c);
    local_4c = *(float *)(iVar12 + 0x7fc);
    fVar25 = *(float *)(iVar12 + 0x7ec);
    fVar23 = *(float *)(iVar12 + 0x7f0);
    fVar27 = local_40 * fVar28 - local_44 * local_48;
    fVar26 = *(float *)(iVar12 + 0x7f4);
    local_54 = local_4c * fVar28 - local_48 * local_50;
    local_58 = local_44 * local_4c - local_40 * local_50;
    dVar29 = (double)((fVar25 * fVar27 - local_54 * fVar23) + local_58 * fVar26);
    iVar15 = iVar12;
    local_64 = fVar26;
    local_60 = fVar23;
    local_5c = fVar25;
    if (dVar29 == _DAT_042f73c0) {
      FUN_0400a810("det != 0.f",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                   ,0x29ca,"void CalculateOpenGLNormal(Matrix3x4*, const D3DXMATRIX*)");
      local_40 = *(float *)(iVar12 + 0x800);
      local_48 = *(float *)(iVar12 + 0x804);
      fVar28 = *(float *)(iVar12 + 0x814);
      local_44 = *(float *)(iVar12 + 0x810);
      local_50 = *(float *)(iVar12 + 0x80c);
      iVar15 = *(int *)(param_1 + 0xeb78);
      local_4c = *(float *)(iVar12 + 0x7fc);
      fVar23 = *(float *)(iVar12 + 0x7f0);
      fVar26 = *(float *)(iVar12 + 0x7f4);
      fVar27 = local_40 * fVar28 - local_44 * local_48;
      local_54 = local_4c * fVar28 - local_48 * local_50;
      fVar25 = *(float *)(iVar12 + 0x7ec);
      local_58 = local_44 * local_4c - local_40 * local_50;
      local_64 = *(float *)(iVar15 + 0x7f4);
      local_60 = *(float *)(iVar15 + 0x7f0);
      local_5c = *(float *)(iVar15 + 0x7ec);
    }
    dVar24 = _DAT_042f73c8;
    *(undefined4 *)(iVar12 + 0x908) = 0;
    dVar24 = dVar24 / dVar29;
    uVar4 = *(undefined4 *)(param_1 + 0xc630);
    *(undefined4 *)(iVar12 + 0x918) = 0;
    *(undefined4 *)(iVar12 + 0x928) = 0;
    *(float *)(iVar12 + 0x8fc) = (float)((double)fVar27 * dVar24);
    uVar19 = DAT_042f73b0;
    *(float *)(iVar12 + 0x900) =
         (float)((double)(float)((uint)(fVar28 * fVar23 - local_44 * fVar26) ^ DAT_042f73b0) *
                dVar24);
    *(float *)(iVar12 + 0x904) = (float)((double)(local_48 * fVar23 - local_40 * fVar26) * dVar24);
    *(float *)(iVar12 + 0x90c) = (float)((double)(float)((uint)local_54 ^ uVar19) * dVar24);
    *(float *)(iVar12 + 0x910) = (float)((double)(fVar28 * fVar25 - local_50 * fVar26) * dVar24);
    *(float *)(iVar12 + 0x91c) = (float)((double)local_58 * dVar24);
    *(float *)(iVar12 + 0x914) =
         (float)((double)(float)((uint)(local_48 * fVar25 - fVar26 * local_4c) ^ uVar19) * dVar24);
    *(float *)(iVar12 + 0x920) =
         (float)((double)(float)((uint)(local_44 * fVar25 - local_50 * fVar23) ^ uVar19) * dVar24);
    *(float *)(iVar12 + 0x924) = (float)((double)(fVar25 * local_40 - fVar23 * local_4c) * dVar24);
    *(undefined4 *)(iVar15 + 4) = uVar4;
    uVar4 = *(undefined4 *)(param_1 + 0xc63c);
    *(int *)(iVar15 + 0x10) = *(int *)(iVar15 + 0x10) + 1;
    *(undefined4 *)(iVar15 + 8) = uVar4;
LAB_040967d3:
    fVar28 = *(float *)(iVar15 + 0x7f8);
    fVar23 = *(float *)(iVar15 + 0x7f0);
    *(float *)(iVar15 + 0x86c) =
         local_5c * *(float *)(param_1 + 0x83f0) + local_60 * *(float *)(param_1 + 0x8400) +
         local_64 * *(float *)(param_1 + 0x8410) + *(float *)(param_1 + 0x8420) * fVar28;
    fVar26 = *(float *)(iVar15 + 0x7ec);
    fVar25 = *(float *)(iVar15 + 0x7f4);
    *(float *)(iVar15 + 0x870) =
         *(float *)(param_1 + 0x83f4) * fVar26 + *(float *)(param_1 + 0x8404) * fVar23 +
         *(float *)(param_1 + 0x8414) * fVar25 + *(float *)(param_1 + 0x8424) * fVar28;
    *(float *)(iVar15 + 0x874) =
         *(float *)(param_1 + 0x83f8) * fVar26 + *(float *)(param_1 + 0x8408) * fVar23 +
         *(float *)(param_1 + 0x8418) * fVar25 + *(float *)(param_1 + 0x8428) * fVar28;
    fVar27 = *(float *)(iVar15 + 0x800);
    fVar1 = *(float *)(iVar15 + 0x804);
    *(float *)(iVar15 + 0x878) =
         fVar26 * *(float *)(param_1 + 0x83fc) + fVar23 * *(float *)(param_1 + 0x840c) +
         fVar25 * *(float *)(param_1 + 0x841c) + fVar28 * *(float *)(param_1 + 0x842c);
    fVar28 = *(float *)(iVar15 + 0x7fc);
    fVar23 = *(float *)(iVar15 + 0x808);
    *(float *)(iVar15 + 0x87c) =
         *(float *)(param_1 + 0x83f0) * fVar28 + *(float *)(param_1 + 0x8400) * fVar27 +
         *(float *)(param_1 + 0x8410) * fVar1 + *(float *)(param_1 + 0x8420) * fVar23;
    *(float *)(iVar15 + 0x880) =
         *(float *)(param_1 + 0x83f4) * fVar28 + *(float *)(param_1 + 0x8404) * fVar27 +
         *(float *)(param_1 + 0x8414) * fVar1 + *(float *)(param_1 + 0x8424) * fVar23;
    *(float *)(iVar15 + 0x884) =
         *(float *)(param_1 + 0x83f8) * fVar28 + *(float *)(param_1 + 0x8408) * fVar27 +
         *(float *)(param_1 + 0x8418) * fVar1 + *(float *)(param_1 + 0x8428) * fVar23;
    fVar26 = *(float *)(iVar15 + 0x810);
    fVar25 = *(float *)(iVar15 + 0x814);
    *(float *)(iVar15 + 0x888) =
         fVar28 * *(float *)(param_1 + 0x83fc) + fVar27 * *(float *)(param_1 + 0x840c) +
         fVar1 * *(float *)(param_1 + 0x841c) + fVar23 * *(float *)(param_1 + 0x842c);
    fVar28 = *(float *)(iVar15 + 0x80c);
    fVar23 = *(float *)(iVar15 + 0x818);
    *(float *)(iVar15 + 0x88c) =
         *(float *)(param_1 + 0x83f0) * fVar28 + *(float *)(param_1 + 0x8400) * fVar26 +
         *(float *)(param_1 + 0x8410) * fVar25 + *(float *)(param_1 + 0x8420) * fVar23;
    *(float *)(iVar15 + 0x890) =
         *(float *)(param_1 + 0x83f4) * fVar28 + *(float *)(param_1 + 0x8404) * fVar26 +
         *(float *)(param_1 + 0x8414) * fVar25 + *(float *)(param_1 + 0x8424) * fVar23;
    *(float *)(iVar15 + 0x894) =
         *(float *)(param_1 + 0x83f8) * fVar28 + *(float *)(param_1 + 0x8408) * fVar26 +
         *(float *)(param_1 + 0x8418) * fVar25 + *(float *)(param_1 + 0x8428) * fVar23;
    fVar27 = *(float *)(iVar15 + 0x820);
    fVar1 = *(float *)(iVar15 + 0x828);
    *(float *)(iVar15 + 0x898) =
         fVar28 * *(float *)(param_1 + 0x83fc) + fVar26 * *(float *)(param_1 + 0x840c) +
         fVar25 * *(float *)(param_1 + 0x841c) + fVar23 * *(float *)(param_1 + 0x842c);
    *(float *)(iVar15 + 0x89c) =
         *(float *)(param_1 + 0x83f0) * *(float *)(iVar15 + 0x81c) +
         *(float *)(param_1 + 0x8400) * *(float *)(iVar15 + 0x820) +
         *(float *)(param_1 + 0x8410) * *(float *)(iVar15 + 0x824) +
         *(float *)(param_1 + 0x8420) * fVar1;
    fVar28 = *(float *)(iVar15 + 0x81c);
    fVar23 = *(float *)(iVar15 + 0x824);
    *(float *)(iVar15 + 0x8a0) =
         *(float *)(param_1 + 0x83f4) * fVar28 + *(float *)(param_1 + 0x8404) * fVar27 +
         *(float *)(param_1 + 0x8414) * fVar23 + *(float *)(param_1 + 0x8424) * fVar1;
    *(float *)(iVar15 + 0x8a4) =
         *(float *)(param_1 + 0x83f8) * fVar28 + *(float *)(param_1 + 0x8408) * fVar27 +
         *(float *)(param_1 + 0x8418) * fVar23 + *(float *)(param_1 + 0x8428) * fVar1;
    *(float *)(iVar15 + 0x8a8) =
         fVar28 * *(float *)(param_1 + 0x83fc) + fVar27 * *(float *)(param_1 + 0x840c) +
         fVar23 * *(float *)(param_1 + 0x841c) + fVar1 * *(float *)(param_1 + 0x842c);
    iVar15 = *(int *)(param_1 + 0xeb78);
    *(undefined4 *)(iVar15 + 0xc) = *(undefined4 *)(param_1 + 0xc634);
    *(int *)(iVar15 + 0x10) = *(int *)(iVar15 + 0x10) + 1;
  }
  FUN_040f0760(iVar15,uVar7);
  iVar15 = *(int *)(iVar6 + 0x170 + uVar7 * 4);
  uVar7 = uVar7 + 1;
joined_r0x04096c8c:
  uVar19 = uVar7;
  if (iVar15 == 10) {
    iVar6 = *(int *)(param_1 + 0xeb78);
    if (*(int *)(param_1 + 0xc640) != *(int *)(iVar6 + 0x14)) {
      puVar20 = (undefined4 *)(iVar6 + 0xb2c);
      uVar19 = 0x100;
      puVar17 = (undefined4 *)(param_1 + 0x8630);
      bVar21 = ((uint)puVar20 & 1) != 0;
      if (bVar21) {
        puVar20 = (undefined4 *)(iVar6 + 0xb2d);
        puVar17 = (undefined4 *)(param_1 + 0x8631);
        *(undefined1 *)(iVar6 + 0xb2c) = *(undefined1 *)(param_1 + 0x8630);
        uVar19 = 0xff;
      }
      if (((uint)puVar20 & 2) != 0) {
        uVar2 = *(undefined2 *)puVar17;
        uVar19 = uVar19 - 2;
        puVar17 = (undefined4 *)((int)puVar17 + 2);
        *(undefined2 *)puVar20 = uVar2;
        puVar20 = (undefined4 *)((int)puVar20 + 2);
      }
      for (uVar11 = uVar19 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *puVar20 = *puVar17;
        puVar17 = puVar17 + (uint)bVar22 * -2 + 1;
        puVar20 = puVar20 + (uint)bVar22 * -2 + 1;
      }
      iVar6 = 0;
      if ((uVar19 & 2) != 0) {
        *(undefined2 *)puVar20 = *(undefined2 *)puVar17;
        iVar6 = 2;
      }
      if (bVar21) {
        *(undefined1 *)((int)puVar20 + iVar6) = *(undefined1 *)((int)puVar17 + iVar6);
      }
      iVar6 = *(int *)(param_1 + 0xeb78);
      *(undefined4 *)(iVar6 + 0x14) = *(undefined4 *)(param_1 + 0xc640);
    }
    uVar19 = uVar7 + 1;
    FUN_040f07d0(iVar6,*(undefined4 *)(param_1 + 0xc638),uVar7);
  }
  FUN_040c7220(*(undefined4 *)(param_1 + 0xeb48),uVar19);
  return;
}

// --- OpenGLContextCache::glLodBias @0x0408e2d0 ---
/* source: openGlContextCache */

void OpenGLContextCache__glLodBias(int param_1,int param_2)

{
  float *pfVar1;
  void *__s1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int local_24;
  int local_20;
  
  iVar10 = 0;
  local_24 = param_1;
  local_20 = param_1;
  if (DAT_0451ca41 == '\0') {
    do {
      while (iVar8 = *(int *)(param_2 + iVar10 * 4), iVar8 == 0) {
        iVar8 = iVar10 + 0x84c0;
        iVar10 = iVar10 + 1;
        FUN_040c6e20(*(undefined4 *)(param_1 + 0xeb48),iVar8,0xde1,0);
        local_24 = local_24 + 0x38;
        if (iVar10 == 0x10) goto LAB_0408e5c8;
      }
      iVar5 = iVar10 + 0x84c0;
      iVar7 = *(int *)(param_1 + 0xeb48);
      fVar2 = *(float *)(local_24 + 0x7c90);
      pfVar1 = (float *)(iVar7 + 8 + (iVar10 + 0xbc) * 4);
      if (NAN(fVar2) || NAN(*pfVar1)) {
        cVar3 = *(char *)(iVar7 + 0x218);
joined_r0x0408e3f9:
        if (cVar3 != '\0') {
          FUN_0400a810("!mUsingOpenGLCore",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                       ,0x41,"void OpenGLContextCache::glLodBias(GLenum, GLfloat)");
        }
        if (*(int *)(iVar7 + 0x234) != iVar5) {
          (*DAT_0451eeac)(iVar5);
          *(int *)(iVar7 + 0x234) = iVar5;
        }
        glTexEnvf(0x8500,0x8501,fVar2);
        *(float *)(iVar7 + 8 + (iVar10 + 0xbc) * 4) = fVar2;
        iVar7 = *(int *)(param_1 + 0xeb48);
      }
      else if (fVar2 != *pfVar1) {
        cVar3 = *(char *)(iVar7 + 0x218);
        goto joined_r0x0408e3f9;
      }
      FUN_040c6e20(iVar7,iVar5,*(undefined4 *)(iVar8 + 0xc),*(undefined4 *)(iVar8 + 8));
      __s1 = (void *)(param_1 + 0x7c60 + iVar10 * 0x38);
      if ((*(char *)(iVar8 + 0x4c) != '\0') ||
         (iVar7 = memcmp(__s1,(void *)(iVar8 + 0x14),0x38), iVar7 != 0)) {
        iVar7 = *(int *)(param_1 + 0xeb48);
        if (*(int *)(iVar7 + 0x234) != iVar5) {
          (*DAT_0451eeac)(iVar5);
          *(int *)(iVar7 + 0x234) = iVar5;
        }
        FUN_0406cfc0(iVar8,__s1);
      }
      local_24 = local_24 + 0x38;
      iVar10 = iVar10 + 1;
    } while (iVar10 != 0x10);
LAB_0408e5c8:
    if ((*(int *)(param_1 + 0x82c8) != 0) && (*(char *)(*(int *)(param_1 + 0xe9ec) + 0x80) != '\0'))
    {
      if ((*(int *)(param_1 + 0x82b8) != 0) && (*(int *)(*(int *)(param_1 + 0xe9ec) + 0x2c) != -1))
      {
        iVar8 = *(int *)(param_1 + 0xeb48);
        fVar2 = *(float *)(param_1 + 0x8010);
        iVar10 = *(int *)(param_2 + 0x3c);
        if (fVar2 != *(float *)(iVar8 + 0x334)) {
          if (*(char *)(iVar8 + 0x218) != '\0') {
            FUN_0400a810("!mUsingOpenGLCore",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                         ,0x41,"void OpenGLContextCache::glLodBias(GLenum, GLfloat)");
          }
          if (*(int *)(iVar8 + 0x234) != 33999) {
            (*DAT_0451eeac)(33999);
            *(undefined4 *)(iVar8 + 0x234) = 33999;
          }
          glTexEnvf(0x8500,0x8501,fVar2);
          *(float *)(iVar8 + 0x334) = fVar2;
          iVar8 = *(int *)(param_1 + 0xeb48);
        }
        FUN_040c6e20(iVar8,33999,*(undefined4 *)(iVar10 + 0xc),*(undefined4 *)(iVar10 + 8));
        if ((*(char *)(iVar10 + 0x4c) != '\0') ||
           (iVar8 = memcmp((void *)(param_1 + 0x7fe0),(void *)(iVar10 + 0x14),0x38), iVar8 != 0)) {
          iVar8 = *(int *)(param_1 + 0xeb48);
          if (*(int *)(iVar8 + 0x234) != 33999) {
            (*DAT_0451eeac)(33999);
            *(undefined4 *)(iVar8 + 0x234) = 33999;
          }
          FUN_0406cfc0(iVar10,(void *)(param_1 + 0x7fe0));
        }
      }
      if ((*(int *)(param_1 + 0x82bc) != 0) && (*(int *)(*(int *)(param_1 + 0xe9ec) + 0x30) != -1))
      {
        iVar8 = *(int *)(param_1 + 0xeb48);
        fVar2 = *(float *)(param_1 + 0x8048);
        iVar10 = *(int *)(param_2 + 0x38);
        if (fVar2 != *(float *)(iVar8 + 0x330)) {
          if (*(char *)(iVar8 + 0x218) != '\0') {
            FUN_0400a810("!mUsingOpenGLCore",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                         ,0x41,"void OpenGLContextCache::glLodBias(GLenum, GLfloat)");
          }
          if (*(int *)(iVar8 + 0x234) != 0x84ce) {
            (*DAT_0451eeac)(0x84ce);
            *(undefined4 *)(iVar8 + 0x234) = 0x84ce;
          }
          glTexEnvf(0x8500,0x8501,fVar2);
          *(float *)(iVar8 + 0x330) = fVar2;
          iVar8 = *(int *)(param_1 + 0xeb48);
        }
        FUN_040c6e20(iVar8,0x84ce,*(undefined4 *)(iVar10 + 0xc),*(undefined4 *)(iVar10 + 8));
        if ((*(char *)(iVar10 + 0x4c) != '\0') ||
           (iVar8 = memcmp((void *)(param_1 + 0x8018),(void *)(iVar10 + 0x14),0x38), iVar8 != 0)) {
          iVar8 = *(int *)(param_1 + 0xeb48);
          if (*(int *)(iVar8 + 0x234) != 0x84ce) {
            (*DAT_0451eeac)(0x84ce);
            *(undefined4 *)(iVar8 + 0x234) = 0x84ce;
          }
          FUN_0406cfc0(iVar10,(void *)(param_1 + 0x8018));
        }
      }
      if ((*(int *)(param_1 + 0x82c0) != 0) && (*(int *)(*(int *)(param_1 + 0xe9ec) + 0x34) != -1))
      {
        iVar8 = *(int *)(param_1 + 0xeb48);
        fVar2 = *(float *)(param_1 + 0x8080);
        iVar10 = *(int *)(param_2 + 0x34);
        if (fVar2 != *(float *)(iVar8 + 0x32c)) {
          if (*(char *)(iVar8 + 0x218) != '\0') {
            FUN_0400a810("!mUsingOpenGLCore",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                         ,0x41,"void OpenGLContextCache::glLodBias(GLenum, GLfloat)");
          }
          if (*(int *)(iVar8 + 0x234) != 0x84cd) {
            (*DAT_0451eeac)(0x84cd);
            *(undefined4 *)(iVar8 + 0x234) = 0x84cd;
          }
          glTexEnvf(0x8500,0x8501,fVar2);
          *(float *)(iVar8 + 0x32c) = fVar2;
          iVar8 = *(int *)(param_1 + 0xeb48);
        }
        FUN_040c6e20(iVar8,0x84cd,*(undefined4 *)(iVar10 + 0xc),*(undefined4 *)(iVar10 + 8));
        if ((*(char *)(iVar10 + 0x4c) != '\0') ||
           (iVar8 = memcmp((void *)(param_1 + 0x8050),(void *)(iVar10 + 0x14),0x38), iVar8 != 0)) {
          iVar8 = *(int *)(param_1 + 0xeb48);
          if (*(int *)(iVar8 + 0x234) != 0x84cd) {
            (*DAT_0451eeac)(0x84cd);
            *(undefined4 *)(iVar8 + 0x234) = 0x84cd;
          }
          FUN_0406cfc0(iVar10,(void *)(param_1 + 0x8050));
        }
      }
      if ((*(int *)(param_1 + 0x82c4) != 0) && (*(int *)(*(int *)(param_1 + 0xe9ec) + 0x38) != -1))
      {
        iVar8 = *(int *)(param_1 + 0xeb48);
        fVar2 = *(float *)(param_1 + 0x80b8);
        iVar10 = *(int *)(param_2 + 0x30);
        if (fVar2 != *(float *)(iVar8 + 0x328)) {
          if (*(char *)(iVar8 + 0x218) != '\0') {
            FUN_0400a810("!mUsingOpenGLCore",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/openGlContextCache.h"
                         ,0x41,"void OpenGLContextCache::glLodBias(GLenum, GLfloat)");
          }
          if (*(int *)(iVar8 + 0x234) != 0x84cc) {
            (*DAT_0451eeac)(0x84cc);
            *(undefined4 *)(iVar8 + 0x234) = 0x84cc;
          }
          glTexEnvf(0x8500,0x8501,fVar2);
          *(float *)(iVar8 + 0x328) = fVar2;
          iVar8 = *(int *)(param_1 + 0xeb48);
        }
        FUN_040c6e20(iVar8,0x84cc,*(undefined4 *)(iVar10 + 0xc),*(undefined4 *)(iVar10 + 8));
        if ((*(char *)(iVar10 + 0x4c) != '\0') ||
           (iVar10 = memcmp((void *)(param_1 + 0x8088),(void *)(iVar10 + 0x14),0x38), iVar10 != 0))
        {
          iVar10 = *(int *)(param_1 + 0xeb48);
          if (*(int *)(iVar10 + 0x234) != 0x84cc) {
            (*DAT_0451eeac)(0x84cc);
            *(undefined4 *)(iVar10 + 0x234) = 0x84cc;
          }
          FUN_0406cfc0();
          return;
        }
      }
    }
  }
  else {
    iVar10 = 0;
    do {
      while (iVar8 = *(int *)(param_2 + iVar10 * 4), iVar8 == 0) {
        iVar8 = iVar10 + 0x84c0;
        iVar10 = iVar10 + 1;
        FUN_040c6e20(*(undefined4 *)(param_1 + 0xeb48),iVar8,0xde1,0);
        local_20 = local_20 + 4;
        if (iVar10 == 0x10) goto LAB_0408ea30;
      }
      uVar9 = 1 << ((byte)iVar10 & 0x1f);
      if ((*(uint *)(param_1 + 0x8160) & uVar9) != 0) {
        uVar4 = *(undefined4 *)(*(int *)(iVar8 + 4) + 0x23c);
        uVar6 = SamplerCache__GetSamplerForState
                          (param_1 + 0xeb9c,param_1 + 0x7c60 + iVar10 * 0x38,uVar4);
        *(undefined4 *)(local_20 + 0x8110) = uVar6;
        *(undefined4 *)(local_20 + 0x80c0) = uVar4;
        *(uint *)(param_1 + 0x8160) = *(uint *)(param_1 + 0x8160) & ~uVar9;
      }
      iVar5 = *(int *)(param_1 + 0xeb48);
      iVar7 = *(int *)(local_20 + 0x8110);
      if (iVar7 != *(int *)(iVar5 + 8 + (iVar10 + 0xac) * 4)) {
        (*DAT_0451e3c4)(iVar10,iVar7);
        *(int *)(iVar5 + 8 + (iVar10 + 0xac) * 4) = iVar7;
        iVar5 = *(int *)(param_1 + 0xeb48);
      }
      iVar7 = iVar10 + 0x84c0;
      iVar10 = iVar10 + 1;
      FUN_040c6e20(iVar5,iVar7,*(undefined4 *)(iVar8 + 0xc),*(undefined4 *)(iVar8 + 8));
      local_20 = local_20 + 4;
    } while (iVar10 != 0x10);
LAB_0408ea30:
    if ((*(int *)(param_1 + 0x82c8) != 0) && (*(char *)(*(int *)(param_1 + 0xe9ec) + 0x80) != '\0'))
    {
      if ((*(int *)(param_1 + 0x82b8) != 0) && (*(int *)(*(int *)(param_1 + 0xe9ec) + 0x2c) != -1))
      {
        iVar10 = *(int *)(param_2 + 0x3c);
        if ((*(byte *)(param_1 + 0x8162) & 1) != 0) {
          uVar4 = *(undefined4 *)(*(int *)(iVar10 + 4) + 0x23c);
          uVar6 = SamplerCache__GetSamplerForState(param_1 + 0xeb9c,param_1 + 0x7fe0,uVar4);
          *(undefined4 *)(param_1 + 0x8100) = uVar4;
          *(uint *)(param_1 + 0x8160) = *(uint *)(param_1 + 0x8160) & 0xfffeffff;
          *(undefined4 *)(param_1 + 0x8150) = uVar6;
        }
        iVar8 = *(int *)(param_1 + 0x8150);
        iVar5 = *(int *)(param_1 + 0xeb48);
        if (iVar8 != *(int *)(iVar5 + 0x2f4)) {
          (*DAT_0451e3c4)(0xf,iVar8);
          *(int *)(iVar5 + 0x2f4) = iVar8;
          iVar5 = *(int *)(param_1 + 0xeb48);
        }
        FUN_040c6e20(iVar5,33999,*(undefined4 *)(iVar10 + 0xc),*(undefined4 *)(iVar10 + 8));
      }
      if ((*(int *)(param_1 + 0x82bc) != 0) && (*(int *)(*(int *)(param_1 + 0xe9ec) + 0x30) != -1))
      {
        iVar10 = *(int *)(param_2 + 0x38);
        if ((*(byte *)(param_1 + 0x8162) & 2) != 0) {
          uVar4 = *(undefined4 *)(*(int *)(iVar10 + 4) + 0x23c);
          uVar6 = SamplerCache__GetSamplerForState(param_1 + 0xeb9c,param_1 + 0x8018,uVar4);
          *(undefined4 *)(param_1 + 0x8104) = uVar4;
          *(uint *)(param_1 + 0x8160) = *(uint *)(param_1 + 0x8160) & 0xfffdffff;
          *(undefined4 *)(param_1 + 0x8154) = uVar6;
        }
        iVar8 = *(int *)(param_1 + 0x8154);
        iVar5 = *(int *)(param_1 + 0xeb48);
        if (iVar8 != *(int *)(iVar5 + 0x2f0)) {
          (*DAT_0451e3c4)(0xe,iVar8);
          *(int *)(iVar5 + 0x2f0) = iVar8;
          iVar5 = *(int *)(param_1 + 0xeb48);
        }
        FUN_040c6e20(iVar5,0x84ce,*(undefined4 *)(iVar10 + 0xc),*(undefined4 *)(iVar10 + 8));
      }
      if ((*(int *)(param_1 + 0x82c0) != 0) && (*(int *)(*(int *)(param_1 + 0xe9ec) + 0x34) != -1))
      {
        iVar10 = *(int *)(param_2 + 0x34);
        if ((*(byte *)(param_1 + 0x8162) & 4) != 0) {
          uVar4 = *(undefined4 *)(*(int *)(iVar10 + 4) + 0x23c);
          uVar6 = SamplerCache__GetSamplerForState(param_1 + 0xeb9c,param_1 + 0x8050,uVar4);
          *(undefined4 *)(param_1 + 0x8108) = uVar4;
          *(uint *)(param_1 + 0x8160) = *(uint *)(param_1 + 0x8160) & 0xfffbffff;
          *(undefined4 *)(param_1 + 0x8158) = uVar6;
        }
        iVar8 = *(int *)(param_1 + 0x8158);
        iVar5 = *(int *)(param_1 + 0xeb48);
        if (iVar8 != *(int *)(iVar5 + 0x2ec)) {
          (*DAT_0451e3c4)(0xd,iVar8);
          *(int *)(iVar5 + 0x2ec) = iVar8;
          iVar5 = *(int *)(param_1 + 0xeb48);
        }
        FUN_040c6e20(iVar5,0x84cd,*(undefined4 *)(iVar10 + 0xc),*(undefined4 *)(iVar10 + 8));
      }
      if ((*(int *)(param_1 + 0x82c4) != 0) && (*(int *)(*(int *)(param_1 + 0xe9ec) + 0x38) != -1))
      {
        iVar10 = *(int *)(param_2 + 0x30);
        if ((*(byte *)(param_1 + 0x8162) & 8) != 0) {
          uVar4 = *(undefined4 *)(*(int *)(iVar10 + 4) + 0x23c);
          uVar6 = SamplerCache__GetSamplerForState(param_1 + 0xeb9c,param_1 + 0x8088,uVar4);
          *(undefined4 *)(param_1 + 0x810c) = uVar4;
          *(uint *)(param_1 + 0x8160) = *(uint *)(param_1 + 0x8160) & 0xfff7ffff;
          *(undefined4 *)(param_1 + 0x815c) = uVar6;
        }
        iVar8 = *(int *)(param_1 + 0x815c);
        iVar5 = *(int *)(param_1 + 0xeb48);
        if (iVar8 != *(int *)(iVar5 + 0x2e8)) {
          (*DAT_0451e3c4)(0xc,iVar8);
          *(int *)(iVar5 + 0x2e8) = iVar8;
          iVar5 = *(int *)(param_1 + 0xeb48);
        }
        FUN_040c6e20(iVar5,0x84cc,*(undefined4 *)(iVar10 + 0xc),*(undefined4 *)(iVar10 + 8));
        return;
      }
    }
  }
  return;
}

// --- glDrawArrays @0x04007000 ---
void glDrawArrays(void)

{
  (*(code *)PTR_glDrawArrays_044082fc)();
  return;
}

// --- attached helper FUN_00085020 @0x04085020 (call-graph exclusive to this TU) ---
undefined4 FUN_04085020(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20 [4];
  
  iVar4 = *param_3;
  bVar8 = param_3[10] != 1;
  if ((*(int *)(iVar4 + 0x70) == *(int *)(param_3[1] + 0x70)) && (*(int *)(iVar4 + 0xa0) < 2)) {
    puVar2 = (undefined4 *)
             FramebufferCache__GetFramebufferHash
                       (*(int *)(param_1 + 0xeb48) + 0x1f8,iVar4,0,0,0,0,0);
    uVar1 = *puVar2;
    puVar2 = (undefined4 *)
             FramebufferCache__GetFramebufferHash
                       (*(int *)(param_1 + 0xeb48) + 0x1f8,param_3[1],0,0,0,0,0);
    OpenGLContextCache____glewBindFramebuffer(*(undefined4 *)(param_1 + 0xeb48),0x8ca9,*puVar2);
    iVar4 = *(int *)(param_1 + 0xeb48);
    if ((*(char *)(iVar4 + 0x34c) == '\0') || (*(int *)(iVar4 + 0x33c) != 0x8ce0)) {
      (*DAT_0451eed0)(0x8ce0);
      *(undefined4 *)(iVar4 + 0x33c) = 0x8ce0;
      *(undefined4 *)(iVar4 + 0x340) = 0;
      *(undefined4 *)(iVar4 + 0x344) = 0;
      *(undefined4 *)(iVar4 + 0x348) = 0;
      *(undefined1 *)(iVar4 + 0x34c) = 1;
      iVar4 = *(int *)(param_1 + 0xeb48);
    }
    OpenGLContextCache____glewBindFramebuffer(iVar4,0x8ca8,uVar1);
    iVar4 = *(int *)(param_1 + 0xeb48);
    if (*(int *)(iVar4 + 0x350) != 0x8ce0) {
      (*DAT_0451eed4)(0x8ce0);
      *(undefined4 *)(iVar4 + 0x350) = 0x8ce0;
      iVar4 = *(int *)(param_1 + 0xeb48);
    }
    if (*(char *)(iVar4 + 0xa8b) != '\0') {
      glDisable(0xc11);
      *(undefined1 *)(iVar4 + 0xa8b) = 0;
    }
    (*DAT_0451e68c)(param_3[2],param_3[3],param_3[4],param_3[5],param_3[6],param_3[7],param_3[8],
                    param_3[9],0x4000,0x2601 - (uint)!bVar8);
  }
  else {
    iVar6 = param_3[4] - param_3[2];
    iVar7 = param_3[5] - param_3[3];
    puVar2 = (undefined4 *)
             FramebufferCache__GetFramebufferHash
                       (*(int *)(param_1 + 0xeb48) + 0x1f8,iVar4,0,0,0,0,0);
    uVar1 = *puVar2;
    local_2c = iVar6;
    local_28 = iVar7;
    FUN_04084100(param_1,*(undefined4 *)(iVar4 + 0x70),bVar8,&local_2c,&local_28,&local_24,local_20)
    ;
    OpenGLContextCache____glewBindFramebuffer(*(undefined4 *)(param_1 + 0xeb48),0x8ca9,local_20[0]);
    iVar3 = *(int *)(param_1 + 0xeb48);
    if ((*(char *)(iVar3 + 0x34c) == '\0') || (*(int *)(iVar3 + 0x33c) != 0x8ce0)) {
      (*DAT_0451eed0)(0x8ce0);
      *(undefined4 *)(iVar3 + 0x33c) = 0x8ce0;
      *(undefined4 *)(iVar3 + 0x340) = 0;
      *(undefined4 *)(iVar3 + 0x344) = 0;
      *(undefined4 *)(iVar3 + 0x348) = 0;
      *(undefined1 *)(iVar3 + 0x34c) = 1;
      iVar3 = *(int *)(param_1 + 0xeb48);
    }
    OpenGLContextCache____glewBindFramebuffer(iVar3,0x8ca8,uVar1);
    iVar3 = *(int *)(param_1 + 0xeb48);
    if (*(int *)(iVar3 + 0x350) != 0x8ce0) {
      (*DAT_0451eed4)(0x8ce0);
      *(undefined4 *)(iVar3 + 0x350) = 0x8ce0;
      iVar3 = *(int *)(param_1 + 0xeb48);
    }
    if (*(char *)(iVar3 + 0xa8b) != '\0') {
      glDisable(0xc11);
      *(undefined1 *)(iVar3 + 0xa8b) = 0;
    }
    (*DAT_0451e68c)(param_3[2],param_3[3],param_3[4],param_3[5],0,0,iVar6,iVar7,0x4000,0x2600);
    iVar3 = *(int *)(param_1 + 0xeb48);
    if (*(int *)(iVar3 + 0x234) != 0x84c0) {
      (*DAT_0451eeac)(0x84c0);
      *(undefined4 *)(iVar3 + 0x234) = 0x84c0;
      iVar3 = *(int *)(param_1 + 0xeb48);
    }
    FUN_040c6ee0(iVar3,0xde1,local_24);
    if (DAT_0451ca41 != '\0') {
      iVar5 = FUN_040e4f70(param_1 + 0xeb9c,0,bVar8);
      iVar3 = *(int *)(param_1 + 0xeb48);
      if (iVar5 != *(int *)(iVar3 + 0x2b8)) {
        (*DAT_0451e3c4)(0,iVar5);
        *(int *)(iVar3 + 0x2b8) = iVar5;
      }
    }
    local_3c = 0;
    local_38 = 0;
    if ((*(int *)(iVar4 + 0xa8) == 0x140b) || (*(int *)(iVar4 + 0xa8) == 0x1406)) {
      iVar4 = param_3[1];
      bVar8 = *(int *)(iVar4 + 0xa8) != 0x140b && *(int *)(iVar4 + 0xa8) != 0x1406;
    }
    else {
      bVar8 = false;
      iVar4 = param_3[1];
    }
    local_34 = iVar6;
    local_30 = iVar7;
    glDrawArrays(param_1,iVar4,&local_3c,param_3 + 6,local_2c,local_28,1,0,bVar8);
  }
  (**(code **)(*(int *)*param_3 + 8))((int *)*param_3);
  (**(code **)(*(int *)param_3[1] + 8))((int *)param_3[1]);
  return 0x2c;
}

