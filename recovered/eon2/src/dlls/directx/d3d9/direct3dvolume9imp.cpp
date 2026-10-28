// Recovered source: eon2/src/dlls/directx/d3d9/direct3dvolume9imp.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- Direct3DVolume9Imp::GetContainer @0x040b6050 ---
/* source: direct3dvolume9imp */

undefined4 Direct3DVolume9Imp__GetContainer(int param_1,void *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_50;
  
  piVar3 = (int *)&stack0xffffffb4;
  if (*(int *)(param_1 + 0x54) != 0) {
    local_50 = 0x40b6076;
    direct3ddevice9imp_040803c0();
  }
  local_50 = 0x40b608e;
  iVar1 = memcmp(param_2,&DAT_042db5b8,0x10);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 == 0) {
      local_50 = 0x40b6124;
      FUN_0400a810();
      iVar1 = *(int *)(param_1 + 0x58);
    }
    *param_3 = iVar1;
                    /* try { // try from 040b60a6 to 040b60a8 has its CatchHandler @ 040b612c */
    local_50 = 0x40b60a9;
    (**(code **)(**(int **)(param_1 + 0x58) + 4))();
    piVar3 = &local_50;
    uVar2 = 0;
  }
  else {
                    /* try { // try from 040b60da to 040b6123 has its CatchHandler @ 040b612c */
    local_50 = 0x40b60df;
    GUID_FormatLower();
    local_50 = 0x40b60f7;
    FUN_0402cd10();
    uVar2 = 0x80004002;
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    *piVar3 = *(int *)(param_1 + 0x54) + 0x40;
    piVar3[-1] = 0x40b60c2;
    direct3ddevice9imp_04080490();
  }
  return uVar2;
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

// --- Direct3DVolume9Imp::Release @0x040b5860 ---
/* source: direct3dvolume9imp */

int direct3dvolume9imp_040b5860(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  LOCK();
  piVar1 = (int *)(*(int *)(param_1 + 0x58) + 0x28c);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar4 = iVar2 + -2;
  if (iVar2 - 1U < 2) {
    if (iVar2 == 1) {
      FUN_0400a810(&PTR_DAT_04348b17,
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dvolume9imp.cpp"
                   ,0x3a0,"virtual ULONG Direct3DVolume9Imp::Release()");
    }
    iVar4 = 0;
    if (iVar3 == 1) {
      piVar1 = *(int **)(param_1 + 0x58);
      if (piVar1[8] != 0) {
        direct3ddevice9imp_0409a7c0(piVar1[8] + 0x40,3,piVar1);
        return 0;
      }
      (**(code **)(*piVar1 + 0x5c))(piVar1);
      iVar4 = 0;
    }
  }
  return iVar4;
}

// --- LockBox @0x040b6ac0 ---
/* source: direct3dvolume9imp */

undefined4 LockBox(int param_1,int *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  size_t __n;
  char cVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  void *__dest;
  int iVar11;
  size_t *psVar12;
  int *piVar13;
  size_t *psVar14;
  bool local_30;
  
  piVar6 = (int *)&stack0xffffffa4;
  piVar13 = (int *)&stack0xffffffa4;
  psVar12 = (size_t *)&stack0xffffffa4;
  psVar14 = (size_t *)&stack0xffffffa4;
  if (param_2 == (int *)0x0) {
    return 0x8876086c;
  }
  if ((param_4 & 0x4000) != 0) {
    FUN_0402cd10();
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    direct3ddevice9imp_040803c0();
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    uVar7 = 0x8876086c;
    goto LAB_040b6c86;
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(uint *)(param_1 + 0x14) = param_4;
  if (param_3 == (uint *)0x0) {
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  else {
    local_30 = false;
    *(uint *)(param_1 + 0x1c) = *param_3;
    *(uint *)(param_1 + 0x20) = param_3[1];
    uVar9 = param_3[2];
    *(uint *)(param_1 + 0x24) = uVar9;
    uVar1 = param_3[3];
    *(uint *)(param_1 + 0x28) = uVar1;
    *(uint *)(param_1 + 0x2c) = param_3[4];
    uVar2 = param_3[5];
    *(uint *)(param_1 + 0x30) = uVar2;
    if ((((*(int *)(param_1 + 0x1c) == 0) && (*(int *)(param_1 + 0x20) == 0)) &&
        (*(int *)(param_1 + 0x2c) == 0)) &&
       ((uVar9 == *(uint *)(param_1 + 0x70) && (uVar1 == *(uint *)(param_1 + 0x74))))) {
      local_30 = uVar2 == *(uint *)(param_1 + 0x78);
    }
    *(bool *)(param_1 + 0x18) = local_30;
  }
  if (*(int *)(param_1 + 0x60) == 0x4c4c554e) {
    FUN_0400a810();
  }
  if ((param_4 & 0x2000) == 0) {
    iVar8 = *(int *)(param_1 + 0x9c);
    if (iVar8 == 0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    if (*(int *)(param_1 + 0x6c) - 2U < 2) {
LAB_040b6cd0:
      if (iVar8 == 0) goto LAB_040b6bc4;
      cVar5 = FUN_040b69b0();
      if (cVar5 != '\0') {
        pvVar3 = *(void **)(param_1 + 0x9c);
        piVar6 = malloc(0xc);
        piVar6[2] = 1;
        eON_GetProcessHeap();
        iVar8 = HeapAlloc();
        psVar14 = (size_t *)&stack0xffffff98;
        *piVar6 = iVar8;
        if (iVar8 == 0) {
          FUN_0400a810();
          iVar8 = *piVar6;
        }
        __n = *(size_t *)(param_1 + 0x98);
        __dest = (void *)(iVar8 + 0xfU & 0xfffffff0);
        piVar6[1] = (int)__dest;
        *(int **)(param_1 + 0x9c) = piVar6;
        memcpy(__dest,*(void **)((int)pvVar3 + 4),__n);
        LOCK();
        piVar6 = (int *)((int)pvVar3 + 8);
        iVar8 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          eON_GetProcessHeap();
          eON_HeapFree();
          psVar14 = (size_t *)&stack0xffffff8c;
          free(pvVar3);
        }
        iVar8 = *(int *)(param_1 + 0x34);
        while (iVar11 = iVar8, iVar11 != 0) {
          *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar11 + 0x20);
          *(int *)(iVar11 + 0x20) = DAT_044a7ed0;
          DAT_044a7ed0 = iVar11;
          iVar8 = *(int *)(param_1 + 0x34);
        }
      }
      uVar9 = *(uint *)(*(int *)(param_1 + 0x9c) + 4);
    }
    else {
      if ((*(uint *)(param_1 + 0x3c) < *(uint *)(param_1 + 0x44)) ||
         ((*(uint *)(param_1 + 0x3c) <= *(uint *)(param_1 + 0x44) &&
          (*(uint *)(param_1 + 0x38) <= *(uint *)(param_1 + 0x40))))) goto LAB_040b6cd0;
      if (iVar8 == 0) {
        piVar6 = malloc(0xc);
        piVar6[2] = 1;
        eON_GetProcessHeap();
        iVar8 = HeapAlloc();
        piVar13 = (int *)&stack0xffffff98;
        *piVar6 = iVar8;
        if (iVar8 == 0) {
          FUN_0400a810();
          iVar8 = *piVar6;
        }
        piVar6[1] = iVar8 + 0xfU & 0xfffffff0;
        *(int **)(param_1 + 0x9c) = piVar6;
      }
      *piVar13 = *(undefined4 *)(*(int *)(param_1 + 0x54) + 0xed00);
                    /* try { // try from 040b6dd2 to 040b70b5 has its CatchHandler @ 040b70ba */
      piVar13[-1] = 0x40b6dd7;
      eON_ResetEvent();
      piVar13[2] = 8;
      piVar13[1] = 0x40;
      *piVar13 = param_1;
      piVar13[-1] = *(int *)(param_1 + 0x54) + 0xec40;
      piVar13[-2] = 0x40b6dfe;
      puVar10 = (undefined4 *)D3D9CommandQueue__GetNextCommandPointer();
      uVar7 = *(undefined4 *)(param_1 + 0x3c);
      *puVar10 = *(undefined4 *)(param_1 + 0x38);
      puVar10[1] = uVar7;
      piVar13[-1] = *(int *)(param_1 + 0x54) + 0xec40;
      piVar13[-2] = 0x40b6e19;
      D3D9CommandQueue__CommandSubmitted();
      *piVar13 = 0xffffffff;
      piVar13[-1] = *(undefined4 *)(*(int *)(param_1 + 0x54) + 0xed00);
      piVar13[-2] = 0x40b6e32;
      eON_WaitForSingleObject();
      psVar14 = (size_t *)(piVar13 + -3);
      uVar9 = *(uint *)(*(int *)(param_1 + 0x9c) + 4);
    }
  }
  else {
    pvVar3 = *(void **)(param_1 + 0x9c);
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    psVar12 = (size_t *)&stack0xffffffa4;
    if (pvVar3 != (void *)0x0) {
      iVar8 = *(int *)(param_1 + 0x34);
      while (iVar11 = iVar8, iVar11 != 0) {
        *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar11 + 0x20);
        *(int *)(iVar11 + 0x20) = DAT_044a7ed0;
        DAT_044a7ed0 = iVar11;
        iVar8 = *(int *)(param_1 + 0x34);
      }
      LOCK();
      piVar6 = (int *)((int)pvVar3 + 8);
      iVar8 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      psVar12 = (size_t *)&stack0xffffffa4;
      if (iVar8 == 1) {
        eON_GetProcessHeap();
        eON_HeapFree();
        psVar12 = (size_t *)&stack0xffffff98;
        free(pvVar3);
      }
    }
LAB_040b6bc4:
    iVar8 = *(int *)(param_1 + 0x98);
    *psVar12 = 0xc;
    psVar12[-1] = 0x40b6bd9;
    piVar6 = malloc(*psVar12);
    piVar6[2] = 1;
                    /* try { // try from 040b6be2 to 040b6c00 has its CatchHandler @ 040b70ba */
    psVar12[-1] = 0x40b6be7;
    uVar7 = eON_GetProcessHeap();
    psVar12[1] = 8;
    *psVar12 = uVar7;
    psVar12[2] = iVar8 + 0x10;
    psVar12[-1] = 0x40b6c01;
    iVar8 = HeapAlloc();
    psVar14 = psVar12 + -3;
    *piVar6 = iVar8;
    if (iVar8 == 0) {
      *psVar12 = (size_t)"VolumeData* GetVolumeData(UINT, bool)";
      psVar12[-1] = 0xa7;
      psVar12[-2] = (size_t)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dvolume9imp.cpp"
      ;
      psVar12[-3] = (size_t)"volumeData->DataBuffer";
      psVar12[-4] = 0x40b6ffc;
      FUN_0400a810();
      iVar8 = *piVar6;
    }
    uVar9 = iVar8 + 0xfU & 0xfffffff0;
    piVar6[1] = uVar9;
    *(int **)(param_1 + 0x9c) = piVar6;
  }
  iVar8 = *(int *)(param_1 + 0x90);
  iVar11 = *(int *)(param_1 + 0x94);
  *param_2 = iVar8;
  param_2[1] = iVar11;
  if (param_3 != (uint *)0x0) {
    uVar1 = param_3[4];
    uVar2 = param_3[1];
    uVar4 = *param_3;
    if (((uVar1 != 0) || (uVar2 != 0)) || (uVar4 != 0)) {
      if (*(char *)(param_1 + 0x88) == '\0') {
        iVar11 = iVar11 * uVar1;
        iVar8 = iVar8 * uVar2 + uVar4 * *(int *)(param_1 + 0x8c);
      }
      else {
        iVar11 = iVar11 * uVar1 + iVar8 * (uVar2 >> 2);
        iVar8 = *(int *)(param_1 + 0x8c) * 4 * (uVar4 >> 2);
      }
      uVar9 = uVar9 + iVar8 + iVar11;
    }
  }
  uVar7 = 0;
  param_2[2] = uVar9;
  piVar6 = (int *)psVar14;
LAB_040b6c86:
  if (*(int *)(param_1 + 0x54) != 0) {
    *piVar6 = *(int *)(param_1 + 0x54) + 0x40;
    piVar6[-1] = 0x40b6c9a;
    direct3ddevice9imp_04080490();
  }
  return uVar7;
}

// --- RetainVolumeData @0x040b6610 ---
/* source: direct3dvolume9imp */

undefined4 RetainVolumeData(int *param_1)

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
  undefined1 auStackY_64 [4];
  undefined4 uStackY_60;
  int local_4c;
  int local_48;
  int local_34;
  int local_30;
  
  if (param_1[0x15] != 0) {
    uStackY_60 = 0x40b6634;
    direct3ddevice9imp_040803c0();
  }
  if ((char)param_1[4] == '\0') {
    uStackY_60 = 0x40b6814;
    FUN_0402cd10();
  }
  uVar7 = param_1[5];
  *(undefined1 *)(param_1 + 4) = 0;
  puVar10 = (undefined4 *)&stack0xffffffa4;
  if ((uVar7 & 0x10) == 0) {
    if (1 < param_1[0x1b] - 2U) {
                    /* try { // try from 040b667b to 040b66dc has its CatchHandler @ 040b68c1 */
      uStackY_60 = 0x40b6680;
      piVar6 = (int *)D3D9CommandQueue__GetNextCommandPointer();
      iVar2 = param_1[0x27];
      iVar11 = *(int *)(iVar2 + 8);
      *piVar6 = iVar2;
      if (iVar11 < 1) {
        uStackY_60 = 0x40b68a4;
        FUN_0400a810();
      }
      LOCK();
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
      UNLOCK();
      *(char *)(piVar6 + 1) = (char)param_1[6];
      piVar6[2] = param_1[7];
      piVar6[3] = param_1[8];
      piVar6[4] = param_1[9];
      piVar6[5] = param_1[10];
      piVar6[6] = param_1[0xb];
      piVar6[7] = param_1[0xc];
      uStackY_60 = 0x40b66cd;
      (**(code **)(*param_1 + 0xc))();
      uStackY_60 = 0x40b66dd;
      D3D9CommandQueue__CommandSubmitted();
      iVar2 = param_1[0x15];
      local_48 = param_1[9];
      iVar11 = param_1[8];
      iVar9 = *(int *)(iVar2 + 0xec80);
      iVar3 = *(int *)(iVar2 + 0xec84);
      local_34 = param_1[0xb];
      param_1[0xe] = iVar9;
      param_1[0x10] = iVar9;
      local_4c = param_1[10];
      param_1[0xf] = iVar3;
      param_1[0x11] = iVar3;
      iVar9 = param_1[7];
      local_30 = param_1[0xc];
      if ((char)param_1[6] != '\0') {
        local_48 = param_1[0x1c];
        local_34 = 0;
        iVar11 = 0;
        local_4c = param_1[0x1d];
        iVar9 = 0;
        local_30 = param_1[0x1e];
      }
      iVar3 = *(int *)(iVar2 + 0xec80);
      iVar2 = *(int *)(iVar2 + 0xec84);
      if (DAT_044a7ed0 == (int *)0x0) {
        uStackY_60 = 0x40b68bc;
        piVar6 = malloc(0x24);
      }
      else {
        piVar6 = DAT_044a7ed0;
        DAT_044a7ed0 = (int *)DAT_044a7ed0[8];
      }
      *piVar6 = iVar9;
      piVar6[1] = iVar11;
      piVar6[6] = iVar3;
      piVar6[7] = iVar2;
      piVar6[3] = local_4c;
      piVar6[2] = local_48;
      piVar6[5] = local_30;
      piVar6[4] = local_34;
      piVar6[8] = param_1[0xd];
      param_1[0xd] = (int)piVar6;
      uVar7 = param_1[5];
    }
    puVar10 = (undefined4 *)&stack0xffffffa4;
    if (((uVar7 & 0x8000) == 0) && (puVar10 = (undefined4 *)&stack0xffffffa4, param_1[0x17] == 0)) {
                    /* try { // try from 040b67f8 to 040b68a3 has its CatchHandler @ 040b68c1 */
      uStackY_60 = 0x40b67fa;
      (**(code **)(*(int *)param_1[0x16] + 0x54))();
      puVar10 = (undefined4 *)auStackY_64;
    }
  }
  piVar6 = puVar10;
  if ((param_1[0x1b] == 0) && ((*(byte *)((int)param_1 + 0x69) & 2) == 0)) {
    puVar4 = (undefined4 *)param_1[0x27];
    LOCK();
    piVar1 = puVar4 + 2;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      uVar5 = *puVar4;
      puVar10[-1] = 0x40b684f;
      uVar8 = eON_GetProcessHeap();
      puVar10[2] = uVar5;
      puVar10[1] = 0;
      *puVar10 = uVar8;
      puVar10[-1] = 0x40b6863;
      eON_HeapFree();
      piVar6 = puVar10 + -3;
      puVar10[-3] = puVar4;
      puVar10[-4] = 0x40b686e;
      free((void *)puVar10[-3]);
      param_1[0x27] = 0;
    }
    else {
      param_1[0x27] = 0;
    }
  }
  if (param_1[0x15] != 0) {
    *piVar6 = param_1[0x15] + 0x40;
    piVar6[-1] = 0x40b67a5;
    direct3ddevice9imp_04080490();
  }
  return 0;
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

// --- direct3dvolume9imp_040b7520 @0x040b7520 ---
/* source: direct3dvolume9imp */

undefined4 direct3dvolume9imp_040b7520(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *__ptr;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  int **ppiVar6;
  int *local_3c;
  char *local_38;
  undefined4 local_34;
  char *local_30;
  undefined4 local_24;
  uint local_20;
  
  ppiVar6 = &local_3c;
  uVar4 = (uint)*(byte *)(param_3 + 1);
  uVar5 = *(undefined4 *)(*param_3 + 4);
  if (param_1[0x18] == 0x4c4c554e) {
    local_30 = "void Direct3DVolume9Imp::SystemDataUpdated(LPBYTE, bool, const D3DBOX*)";
    local_34 = 0x2f0;
    local_38 = 
    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dvolume9imp.cpp";
    local_3c = (int *)0x42f8592;
    local_24 = *(undefined4 *)(*param_3 + 4);
    local_20 = (uint)*(byte *)(param_3 + 1);
    FUN_0400a810();
    uVar4 = local_20;
    uVar5 = local_24;
  }
  if (param_1[0x1b] - 2U < 2) {
    local_30 = "void Direct3DVolume9Imp::SystemDataUpdated(LPBYTE, bool, const D3DBOX*)";
    local_34 = 0x2f1;
    local_38 = 
    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dvolume9imp.cpp";
    local_3c = (int *)0x42fa33b;
    local_24 = uVar5;
    local_20 = uVar4;
    FUN_0400a810();
  }
  local_3c = param_3 + 2;
  direct3dbasetexture9imp_040b5940();
  __ptr = (undefined4 *)*param_3;
  LOCK();
  piVar1 = __ptr + 2;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    uVar5 = *__ptr;
    local_3c = (int *)eON_GetProcessHeap();
    local_38 = (char *)0x0;
    local_34 = uVar5;
    eON_HeapFree();
    ppiVar6 = (int **)&stack0xffffffb8;
    free(__ptr);
  }
  iVar2 = *param_1;
  *ppiVar6 = param_1;
  pcVar3 = *(code **)(iVar2 + 0x10);
  ppiVar6[-1] = (int *)0x40b75a2;
  (*pcVar3)();
  return 0x20;
}

// --- direct3dvolume9imp_040b7630 @0x040b7630 ---
/* source: direct3dvolume9imp */

void direct3dvolume9imp_040b7630(int param_1,char param_2,char param_3)

{
  void *pvVar1;
  size_t __n;
  void *__src;
  int iVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  void *__dest;
  undefined4 *puVar7;
  size_t *psVar8;
  int *piVar9;
  
  piVar9 = (int *)&stack0xffffffb4;
  psVar8 = (size_t *)&stack0xffffffb4;
  if (*(int *)(param_1 + 0x60) == 0x4c4c554e) {
    FUN_0400a810();
  }
  if (param_2 == '\0') {
    iVar6 = *(int *)(param_1 + 0x9c);
    if (iVar6 == 0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    if (1 < *(int *)(param_1 + 0x6c) - 2U) {
      if ((*(uint *)(param_1 + 0x44) <= *(uint *)(param_1 + 0x3c)) &&
         ((*(uint *)(param_1 + 0x44) < *(uint *)(param_1 + 0x3c) ||
          (*(uint *)(param_1 + 0x40) < *(uint *)(param_1 + 0x38))))) {
        if (iVar6 == 0) {
          piVar4 = malloc(0xc);
          piVar4[2] = 1;
          eON_GetProcessHeap();
          iVar6 = HeapAlloc();
          piVar9 = (int *)&stack0xffffffa8;
          *piVar4 = iVar6;
          if (iVar6 == 0) {
            FUN_0400a810();
            iVar6 = *piVar4;
          }
          piVar4[1] = iVar6 + 0xfU & 0xfffffff0;
          *(int **)(param_1 + 0x9c) = piVar4;
        }
        if (param_3 != '\0') {
          *piVar9 = *(undefined4 *)(*(int *)(param_1 + 0x54) + 0xed00);
          piVar9[-1] = 0x40b7991;
          eON_ResetEvent();
          piVar9[2] = 8;
          piVar9[1] = 0x40;
          *piVar9 = param_1;
          piVar9[-1] = *(int *)(param_1 + 0x54) + 0xec40;
          piVar9[-2] = 0x40b79b8;
          puVar7 = (undefined4 *)D3D9CommandQueue__GetNextCommandPointer();
          uVar5 = *(undefined4 *)(param_1 + 0x3c);
          *puVar7 = *(undefined4 *)(param_1 + 0x38);
          puVar7[1] = uVar5;
          piVar9[-1] = *(int *)(param_1 + 0x54) + 0xec40;
          piVar9[-2] = 0x40b79d3;
          D3D9CommandQueue__CommandSubmitted();
          *piVar9 = 0xffffffff;
          piVar9[-1] = *(undefined4 *)(*(int *)(param_1 + 0x54) + 0xed00);
          piVar9[-2] = 0x40b79ec;
          eON_WaitForSingleObject();
          return;
        }
        piVar9[1] = param_1;
        piVar9[3] = 8;
        piVar9[2] = 0x40;
        *piVar9 = *(int *)(param_1 + 0x54) + 0xec40;
        piVar9[-1] = 0x40b78a2;
        puVar7 = (undefined4 *)D3D9CommandQueue__GetNextCommandPointer();
        uVar5 = *(undefined4 *)(param_1 + 0x3c);
        *puVar7 = *(undefined4 *)(param_1 + 0x38);
        puVar7[1] = uVar5;
        D3D9CommandQueue__CommandSubmitted();
        return;
      }
    }
    if (iVar6 != 0) {
      cVar3 = FUN_040b69b0();
      if (cVar3 == '\0') {
        return;
      }
      pvVar1 = *(void **)(param_1 + 0x9c);
      piVar4 = malloc(0xc);
      piVar4[2] = 1;
      eON_GetProcessHeap();
      iVar6 = HeapAlloc();
      *piVar4 = iVar6;
      if (iVar6 == 0) {
        FUN_0400a810();
        iVar6 = *piVar4;
      }
      __n = *(size_t *)(param_1 + 0x98);
      __dest = (void *)(iVar6 + 0xfU & 0xfffffff0);
      piVar4[1] = (int)__dest;
      __src = *(void **)((int)pvVar1 + 4);
      *(int **)(param_1 + 0x9c) = piVar4;
      memcpy(__dest,__src,__n);
      LOCK();
      piVar4 = (int *)((int)pvVar1 + 8);
      iVar6 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        eON_GetProcessHeap();
        eON_HeapFree();
        free(pvVar1);
      }
      iVar6 = *(int *)(param_1 + 0x34);
      while (iVar2 = iVar6, iVar2 != 0) {
        *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar2 + 0x20);
        *(int *)(iVar2 + 0x20) = DAT_044a7ed0;
        DAT_044a7ed0 = iVar2;
        iVar6 = *(int *)(param_1 + 0x34);
      }
      return;
    }
  }
  else {
    pvVar1 = *(void **)(param_1 + 0x9c);
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    psVar8 = (size_t *)&stack0xffffffb4;
    if (pvVar1 != (void *)0x0) {
      iVar6 = *(int *)(param_1 + 0x34);
      while (iVar2 = iVar6, iVar2 != 0) {
        *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar2 + 0x20);
        *(int *)(iVar2 + 0x20) = DAT_044a7ed0;
        DAT_044a7ed0 = iVar2;
        iVar6 = *(int *)(param_1 + 0x34);
      }
      LOCK();
      piVar4 = (int *)((int)pvVar1 + 8);
      iVar6 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      psVar8 = (size_t *)&stack0xffffffb4;
      if (iVar6 == 1) {
        eON_GetProcessHeap();
        eON_HeapFree();
        psVar8 = (size_t *)&stack0xffffffa8;
        free(pvVar1);
      }
    }
  }
  iVar6 = *(int *)(param_1 + 0x98);
  *psVar8 = 0xc;
  psVar8[-1] = 0x40b76be;
  piVar4 = malloc(*psVar8);
  piVar4[2] = 1;
  psVar8[-1] = 0x40b76cc;
  uVar5 = eON_GetProcessHeap();
  psVar8[1] = 8;
  *psVar8 = uVar5;
  psVar8[2] = iVar6 + 0x10;
  psVar8[-1] = 0x40b76e3;
  iVar6 = HeapAlloc();
  *piVar4 = iVar6;
  if (iVar6 == 0) {
    *psVar8 = (size_t)"VolumeData* GetVolumeData(UINT, bool)";
    psVar8[-1] = 0xa7;
    psVar8[-2] = (size_t)
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dvolume9imp.cpp"
    ;
    psVar8[-3] = (size_t)"volumeData->DataBuffer";
    psVar8[-4] = 0x40b7934;
    FUN_0400a810();
    iVar6 = *piVar4;
  }
  piVar4[1] = iVar6 + 0xfU & 0xfffffff0;
  *(int **)(param_1 + 0x9c) = piVar4;
  return;
}

// --- direct3dvolume9imp_040b8090 @0x040b8090 ---
/* source: direct3dvolume9imp */

void direct3dvolume9imp_040b8090(int param_1)

{
  if (*(int *)(param_1 + 0x60) == 0x4c4c554e) {
    FUN_0400a810("mDesc.Format != D3DFMT_NULL",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dvolume9imp.cpp"
                 ,0x2f0,"void Direct3DVolume9Imp::SystemDataUpdated(LPBYTE, bool, const D3DBOX*)");
  }
  if (*(int *)(param_1 + 0x6c) - 2U < 2) {
    FUN_0400a810("!IsPlainVolume()",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dvolume9imp.cpp"
                 ,0x2f1,"void Direct3DVolume9Imp::SystemDataUpdated(LPBYTE, bool, const D3DBOX*)");
  }
  direct3dbasetexture9imp_040b5940();
  return;
}

// --- attached helper FUN_000b8ea0 @0x040b8ea0 (call-graph exclusive to this TU) ---
void FUN_040b8ea0(int param_1)

{
  RetainVolumeData(param_1 + 4);
  return;
}

// --- attached helper FUN_000b8ec0 @0x040b8ec0 (call-graph exclusive to this TU) ---
void FUN_040b8ec0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  LockBox(param_1 + 4,param_2,param_3,param_4);
  return;
}

