// Recovered source: eon2/src/dlls/directx/d3d9/eonBuffer.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- MergeRegions @0x040bbe50 ---
/* source: eonBuffer */

void MergeRegions(int *param_1)

{
  bool bVar1;
  uint *puVar2;
  bool bVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  
  do {
    puVar7 = (uint *)*param_1;
    if ((uint *)puVar7[2] == puVar7) {
      FUN_0400a810("reg->Next != reg",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/eonBuffer.cpp"
                   ,0x3d4,"void MergeRegions(BufferRegion**)");
    }
    if ((puVar7 == (uint *)0x0) || ((uint *)puVar7[2] == (uint *)0x0)) break;
    puVar2 = (uint *)puVar7[2];
    puVar5 = (uint *)0x0;
    uVar10 = *puVar7;
    bVar3 = false;
LAB_040bbe95:
    do {
      bVar1 = bVar3;
      puVar8 = puVar2;
      uVar9 = *puVar8;
      puVar4 = puVar7;
      if (uVar9 < uVar10) {
        puVar7[2] = puVar8[2];
        puVar8[2] = (uint)puVar7;
        if (puVar5 != (uint *)0x0) {
          puVar5[2] = (uint)puVar8;
          bVar1 = true;
          puVar2 = (uint *)puVar7[2];
          puVar5 = puVar8;
          bVar3 = true;
          if ((uint *)puVar7[2] == (uint *)0x0) break;
          goto LAB_040bbe95;
        }
        bVar1 = true;
        *param_1 = (int)puVar8;
        puVar4 = puVar8;
        puVar8 = puVar7;
        uVar9 = uVar10;
      }
      puVar2 = (uint *)puVar8[2];
      puVar5 = puVar4;
      puVar7 = puVar8;
      uVar10 = uVar9;
      bVar3 = bVar1;
    } while ((uint *)puVar8[2] != (uint *)0x0);
  } while (bVar1);
  puVar7 = (uint *)*param_1;
  if ((puVar7 != (uint *)0x0) && ((uint *)puVar7[2] != (uint *)0x0)) {
    puVar2 = (uint *)puVar7[2];
    uVar10 = *puVar7;
    do {
      while( true ) {
        puVar5 = puVar2;
        uVar9 = *puVar5;
        uVar6 = puVar7[1] + uVar10;
        if (uVar6 < uVar9) break;
        if (uVar6 < uVar9 + puVar5[1]) {
          uVar6 = uVar9 + puVar5[1];
        }
        puVar7[1] = uVar6 - uVar10;
        puVar7[2] = puVar5[2];
        puVar5[2] = (uint)DAT_044a7f2c;
        puVar2 = (uint *)puVar7[2];
        DAT_044a7f2c = puVar5;
        if ((uint *)puVar7[2] == (uint *)0x0) {
          return;
        }
      }
      puVar2 = (uint *)puVar5[2];
      puVar7 = puVar5;
      uVar10 = uVar9;
    } while ((uint *)puVar5[2] != (uint *)0x0);
  }
  return;
}

// --- RetainSharedMemoryRegion @0x040bbf70 ---
/* source: eonBuffer */

undefined4 RetainSharedMemoryRegion(int *param_1,char param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  
  if (param_2 == '\0') {
    return 0;
  }
  if (param_1[0xc] != 0) {
    MergeRegions(param_1 + 0xc);
    iVar10 = param_1[0xc];
    if (iVar10 == 0) {
      FUN_0400a810("mDirtyRegions",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/eonBuffer.cpp"
                   ,0x13e,"HRESULT eON_Buffer::Unlock(bool)");
      iVar10 = param_1[0xc];
      if (iVar10 == 0) {
        FUN_0400a810("region",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/eonBuffer.cpp"
                     ,0x14f,"HRESULT eON_Buffer::Unlock(bool)");
      }
    }
    iVar9 = 0;
    do {
      iVar10 = *(int *)(iVar10 + 8);
      iVar9 = iVar9 + 1;
    } while (iVar10 != 0);
    puVar6 = (undefined4 *)
             D3D9CommandQueue__GetNextCommandPointer(*param_1 + 0xec40,param_1,0x3a,iVar9 * 8 + 0xc)
    ;
    piVar3 = (int *)param_1[8];
    iVar10 = *piVar3;
    *puVar6 = piVar3;
    if (iVar10 == 0) {
      FUN_0400a810("region->RefCount > 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/eonBuffer.cpp"
                   ,0x69,"void RetainSharedMemoryRegion(SharedMemoryRegion*)");
    }
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
    iVar10 = param_1[0xb];
    puVar7 = puVar6 + 3;
    puVar6[2] = iVar9;
    puVar6[1] = iVar10;
    puVar8 = (undefined4 *)param_1[0xc];
    do {
      *puVar7 = *puVar8;
      puVar1 = puVar8 + 1;
      puVar8 = (undefined4 *)puVar8[2];
      puVar7[1] = *puVar1;
      puVar7 = puVar7 + 2;
    } while (puVar8 != (undefined4 *)0x0);
    if (puVar7 != puVar6 + iVar9 * 2 + 3) {
      FUN_0400a810("(LPBYTE) regionData == (LPBYTE) command + commandSize",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/eonBuffer.cpp"
                   ,0x16b,"HRESULT eON_Buffer::Unlock(bool)");
    }
    (**(code **)(*(int *)param_1[1] + 0xc))((int *)param_1[1]);
    D3D9CommandQueue__CommandSubmitted(*param_1 + 0xec40);
    if ((*(byte *)((int)param_1 + 0x2d) & 0x10) == 0) {
      iVar10 = param_1[0xc];
      uVar4 = *(undefined4 *)(*param_1 + 0xec80);
      uVar5 = *(undefined4 *)(*param_1 + 0xec84);
      if (DAT_044a7f30 == (undefined4 *)0x0) {
        puVar6 = malloc(0x10);
      }
      else {
        puVar6 = DAT_044a7f30;
        DAT_044a7f30 = (undefined4 *)DAT_044a7f30[3];
      }
      puVar6[2] = iVar10;
      cVar2 = (char)param_1[5];
      iVar10 = param_1[0xd];
      *puVar6 = uVar4;
      puVar6[1] = uVar5;
      puVar6[3] = iVar10;
      param_1[0xd] = (int)puVar6;
      param_1[0xc] = 0;
      goto joined_r0x040bc09d;
    }
    *(undefined1 *)(param_1 + 0xf) = 1;
    iVar10 = param_1[0xc];
    while (iVar9 = iVar10, iVar9 != 0) {
      param_1[0xc] = *(int *)(iVar9 + 8);
      *(int *)(iVar9 + 8) = DAT_044a7f2c;
      DAT_044a7f2c = iVar9;
      iVar10 = param_1[0xc];
    }
  }
  cVar2 = (char)param_1[5];
joined_r0x040bc09d:
  if (cVar2 != '\0') {
    piVar3 = (int *)param_1[8];
    param_1[10] = (int)piVar3;
    LOCK();
    iVar10 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if ((iVar10 == 1) && (piVar3[3] == 0)) {
      eON_VirtualFree(piVar3[2],0,0x8000);
      free(piVar3);
    }
    param_1[8] = 0;
  }
  param_1[0xb] = 0x1000;
  return 0;
}

// --- TryReacquireTransientRegion @0x040bc5b0 ---
/* source: eonBuffer */

undefined4
TryReacquireTransientRegion(int param_1,int param_2,int param_3,int *param_4,uint param_5)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined1 *puVar7;
  size_t *psVar8;
  uint local_20;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
LAB_040bc7d8:
    iVar5 = *(int *)(param_1 + 0x20);
LAB_040bc7db:
    if (iVar5 != 0) goto LAB_040bc5d4;
  }
  else {
    if (*(int *)(param_1 + 0x20) != 0) goto LAB_040bc5d4;
    piVar6 = *(int **)(param_1 + 0x28);
    if (piVar6 != (int *)0x0) {
      if (*(char *)(param_1 + 0x13) != '\0') {
        FUN_0402cd10();
        piVar6 = *(int **)(param_1 + 0x28);
      }
      pthread_mutex_lock((pthread_mutex_t *)&DAT_044a7f08);
      if (piVar6[3] == 0) {
        FUN_0400a810();
      }
      if (param_1 != piVar6[4]) {
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_044a7f08);
        *(undefined4 *)(param_1 + 0x28) = 0;
        goto LAB_040bc7d8;
      }
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_044a7f08);
      iVar5 = *(int *)(param_1 + 0x28);
      *(int *)(param_1 + 0x20) = iVar5;
      goto LAB_040bc7db;
    }
  }
  iVar5 = FUN_040ba680();
  *(int *)(param_1 + 0x20) = iVar5;
  if (iVar5 == 0) {
    return 0x8007000e;
  }
LAB_040bc5d4:
  if (((param_5 & 0x10) == 0) && (*(char *)(param_1 + 0x12) == '\0')) {
    piVar6 = DAT_044a7f2c;
    psVar8 = (size_t *)&stack0xffffffb4;
    if (((param_5 & 0x1000) == 0) &&
       ((*(char *)(param_1 + 0x3c) != '\0' ||
        (cVar4 = FUN_040bc490(), piVar6 = DAT_044a7f2c, psVar8 = (size_t *)&stack0xffffffb4,
        cVar4 != '\0')))) {
      if (*(char *)(param_1 + 0x14) == '\0') {
        iVar5 = FUN_040ba680();
        if (iVar5 == 0) {
          return 0x8007000e;
        }
        if ((param_5 & 0x2000) == 0) {
          memcpy(*(void **)(iVar5 + 8),*(void **)(*(int *)(param_1 + 0x20) + 8),
                 *(size_t *)(param_1 + 8));
        }
        piVar6 = *(int **)(param_1 + 0x20);
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        puVar7 = &stack0xffffffb4;
        if ((iVar1 == 1) && (puVar7 = &stack0xffffffb4, piVar6[3] == 0)) {
          eON_VirtualFree();
          puVar7 = &stack0xffffffa8;
          free(piVar6);
        }
        *(int *)(param_1 + 0x20) = iVar5;
      }
      else {
        piVar6 = *(int **)(param_1 + 0x20);
        LOCK();
        iVar5 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        puVar7 = &stack0xffffffb4;
        if ((iVar5 == 1) && (puVar7 = &stack0xffffffb4, piVar6[3] == 0)) {
          eON_VirtualFree();
          puVar7 = &stack0xffffffa8;
          free(piVar6);
        }
        *(undefined4 *)(puVar7 + -4) = 0x40bc837;
        iVar5 = FUN_040ba680();
        *(int *)(param_1 + 0x20) = iVar5;
        if (iVar5 == 0) {
          return 0x8007000e;
        }
      }
      iVar5 = *(int *)(param_1 + 0x34);
      piVar6 = DAT_044a7f2c;
      while (iVar1 = iVar5, iVar1 != 0) {
        *(int *)(param_1 + 0x34) = *(int *)(iVar1 + 0xc);
        piVar3 = *(int **)(iVar1 + 8);
        while (piVar2 = piVar3, piVar2 != (int *)0x0) {
          *(int *)(iVar1 + 8) = piVar2[2];
          piVar2[2] = (int)piVar6;
          piVar6 = piVar2;
          DAT_044a7f2c = piVar2;
          piVar3 = *(int **)(iVar1 + 8);
        }
        *(int *)(iVar1 + 0xc) = DAT_044a7f30;
        DAT_044a7f30 = iVar1;
        iVar5 = *(int *)(param_1 + 0x34);
      }
      *(undefined1 *)(param_1 + 0x3c) = 0;
      psVar8 = (size_t *)puVar7;
    }
    local_20 = param_5 & 0x2000;
    if (piVar6 == (int *)0x0) {
      *psVar8 = 0xc;
      psVar8[-1] = 0x40bc874;
      piVar6 = malloc(*psVar8);
    }
    else {
      DAT_044a7f2c = (int *)piVar6[2];
    }
    *piVar6 = param_2;
    piVar6[1] = param_3;
    piVar6[2] = *(int *)(param_1 + 0x30);
    *(int **)(param_1 + 0x30) = piVar6;
    if (local_20 != 0) {
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x2000;
    }
    if ((param_5 & 0x1000) == 0) {
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xffffefff;
    }
  }
  *param_4 = param_2 + *(int *)(*(int *)(param_1 + 0x20) + 8);
  return 0;
}

// --- eON_Buffer::GetOpenGLSideDataRegion @0x040bbd00 ---
/* source: eonBuffer */

undefined4 eON_Buffer__GetOpenGLSideDataRegion(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x24) + 8);
  }
  iVar1 = FUN_040ba680();
  *(int *)(param_1 + 0x24) = iVar1;
  if (iVar1 == 0) {
    FUN_0400a810("mOpenGLData",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/eonBuffer.cpp"
                 ,0x39c,"UCHAR* eON_Buffer::GetOpenGLSideDataRegion(OpenGLContextCache*)");
  }
  OpenGLContextCache____glewBindBuffer
            (param_2,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
  FUN_0402cd10(10,
               "PERFORMANCE WARNING: Implicit sync. Enabling OpenGL-side data copy for a buffer (as it was either used as source for zero-stride draw, or as instance buffer and OpenGL doesn\'t support instance drawing on its own!"
              );
  (*DAT_0451ed0c)(*(undefined4 *)(param_1 + 0xc),0,*(undefined4 *)(param_1 + 8),
                  *(undefined4 *)(*(int *)(param_1 + 0x24) + 8));
  return *(undefined4 *)(*(int *)(param_1 + 0x24) + 8);
}

// --- eON_Buffer::OpenGLSide_Unlock @0x040baab0 ---
/* source: eonBuffer */

int eON_Buffer__OpenGLSide_Unlock(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  size_t *psVar2;
  int iVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  int *piVar8;
  char cVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  
  iVar3 = param_3[2];
  Direct3DDevice9Imp__GetContextCache();
  cVar5 = DAT_0451ca7c;
  bVar15 = false;
  bVar11 = (param_3[1] & 0x2000U) != 0;
  bVar12 = (param_3[1] & 0x1000U) != 0;
  if ((param_3[2] == 1) && (param_3[3] == 0)) {
    bVar15 = param_3[4] == param_1[2];
  }
  bVar13 = DAT_0451ca88 != '\0';
  bVar14 = DAT_0451ca55 == '\0';
  cVar9 = '\x01';
  if (bVar14) {
    cVar9 = *(char *)(*param_1 + 0xeb8d);
  }
  switch(param_1[0xe]) {
  case 0:
    if (param_1[6] != 0) {
      FUN_0400a810();
    }
    iVar6 = FUN_040ba100();
    param_1[6] = iVar6;
    OpenGLContextCache____glewBindBuffer();
    if ((bVar12) && (cVar9 != '\0')) {
      if (bVar13) {
        (*DAT_0451e894)();
        iVar6 = (*DAT_0451e520)();
        param_1[7] = iVar6;
        if (iVar6 == 0) {
          FUN_0400a810();
        }
        if (param_3[2] != 0) {
          uVar10 = 0;
          piVar8 = param_3;
          do {
            piVar1 = piVar8 + 3;
            uVar10 = uVar10 + 1;
            psVar2 = (size_t *)(piVar8 + 4);
            piVar8 = piVar8 + 2;
            memcpy((void *)(*piVar1 + param_1[7]),(void *)(*piVar1 + *(int *)(*param_3 + 8)),*psVar2
                  );
          } while (uVar10 < (uint)param_3[2]);
        }
      }
      else {
        (*DAT_0451ed30)();
        if (param_3[2] != 0) {
          uVar10 = 0;
          piVar8 = param_3;
          do {
            pvVar7 = (void *)(*DAT_0451e520)();
            if (pvVar7 == (void *)0x0) {
              FUN_0400a810();
            }
            memcpy(pvVar7,(void *)(*(int *)(*param_3 + 8) + piVar8[3]),piVar8[4]);
            cVar5 = (*DAT_0451ecf0)();
            if (cVar5 != '\x01') {
              FUN_0400a810();
            }
            uVar10 = uVar10 + 1;
            piVar8 = piVar8 + 2;
          } while (uVar10 < (uint)param_3[2]);
        }
      }
      param_1[0xe] = 1;
      break;
    }
    if (*(char *)((int)param_1 + 0x11) == '\0') {
      if (bVar15) {
        if (cVar5 != '\0') {
          if (bVar13) {
            (*DAT_0451e894)();
          }
          else {
            (*DAT_0451ed30)();
          }
          param_1[0xe] = 2;
          break;
        }
        goto LAB_040bb456;
      }
LAB_040bb1b7:
      if (bVar13) {
        (*DAT_0451e894)();
      }
      else {
        (*DAT_0451ed30)();
      }
      if (param_3[2] != 0) {
        uVar10 = 0;
        do {
          uVar10 = uVar10 + 1;
          (*DAT_0451ed2c)();
        } while (uVar10 < (uint)param_3[2]);
      }
    }
    else {
      if (!bVar15) goto LAB_040bb1b7;
LAB_040bb456:
      if (bVar13) {
        (*DAT_0451e894)();
      }
      else {
        (*DAT_0451ed30)();
      }
    }
    param_1[0xe] = 3;
    break;
  case 1:
    if ((bVar11) || (bVar12)) {
      param_1[0xe] = 4;
      goto switchD_040babeb_caseD_4;
    }
    if (!bVar15) {
      iVar6 = FUN_040ba100();
      param_1[6] = iVar6;
      OpenGLContextCache____glewBindBuffer();
      if (bVar13) {
        (*DAT_0451e894)();
      }
      else {
        (*DAT_0451ed30)();
      }
      if (param_3[2] != 0) {
        uVar10 = 0;
        do {
          uVar10 = uVar10 + 1;
          (*DAT_0451ed2c)();
        } while (uVar10 < (uint)param_3[2]);
      }
      if (bVar13) {
        OpenGLContextCache____glewBindBuffer();
        cVar5 = (*DAT_0451ecf0)();
        if (cVar5 != '\x01') {
          FUN_0400a810();
        }
        param_1[7] = 0;
      }
      Direct3DDevice9Imp__VertexArrays_VertexBufferInvalidated();
      FUN_040ba120();
      break;
    }
    if (bVar13) {
      OpenGLContextCache____glewBindBuffer();
      cVar5 = (*DAT_0451ecf0)();
      if (cVar5 != '\x01') {
        FUN_0400a810();
      }
      param_1[7] = 0;
    }
    Direct3DDevice9Imp__VertexArrays_VertexBufferInvalidated();
    FUN_040ba120();
    iVar6 = FUN_040ba100();
    param_1[6] = iVar6;
    OpenGLContextCache____glewBindBuffer();
    if (!bVar13) {
      (*DAT_0451ed30)();
      break;
    }
    goto LAB_040bb177;
  case 2:
    if (bVar12) {
      FUN_0400a810();
    }
    if (bVar15) {
      Direct3DDevice9Imp__VertexArrays_VertexBufferInvalidated();
      FUN_040ba120();
      iVar6 = FUN_040ba100();
      param_1[6] = iVar6;
      OpenGLContextCache____glewBindBuffer();
      if (bVar13) {
        (*DAT_0451e894)();
      }
      else {
        (*DAT_0451ed30)();
      }
    }
    else {
      iVar6 = FUN_040ba100();
      param_1[6] = iVar6;
      OpenGLContextCache____glewBindBuffer();
      if (bVar13) {
        (*DAT_0451e894)();
      }
      else {
        (*DAT_0451ed30)();
      }
      (*DAT_0451ed34)();
      (*DAT_0451ed34)();
      (*DAT_0451e85c)();
      (*DAT_0451ed34)();
      (*DAT_0451ed34)();
      Direct3DDevice9Imp__VertexArrays_VertexBufferInvalidated();
      FUN_040ba120();
      OpenGLContextCache____glewBindBuffer();
      if (param_3[2] != 0) {
        uVar10 = 0;
        do {
          uVar10 = uVar10 + 1;
          (*DAT_0451ed2c)();
        } while (uVar10 < (uint)param_3[2]);
      }
    }
    param_1[0xe] = 5;
    break;
  case 3:
    if ((bVar12) && (cVar9 != '\0')) {
      Direct3DDevice9Imp__VertexArrays_VertexBufferInvalidated();
      FUN_040ba120();
      iVar6 = FUN_040ba100();
      param_1[6] = iVar6;
      OpenGLContextCache____glewBindBuffer();
      if (bVar13) {
        (*DAT_0451e894)();
        iVar6 = (*DAT_0451e520)();
        param_1[7] = iVar6;
        if (iVar6 == 0) {
          FUN_0400a810();
        }
        if (param_3[2] != 0) {
          uVar10 = 0;
          piVar8 = param_3;
          do {
            piVar1 = piVar8 + 3;
            uVar10 = uVar10 + 1;
            psVar2 = (size_t *)(piVar8 + 4);
            piVar8 = piVar8 + 2;
            memcpy((void *)(*piVar1 + param_1[7]),(void *)(*piVar1 + *(int *)(*param_3 + 8)),*psVar2
                  );
          } while (uVar10 < (uint)param_3[2]);
        }
      }
      else {
        (*DAT_0451ed30)();
        if (param_3[2] != 0) {
          uVar10 = 0;
          piVar8 = param_3;
          do {
            pvVar7 = (void *)(*DAT_0451e520)();
            if (pvVar7 == (void *)0x0) {
              FUN_0400a810();
            }
            memcpy(pvVar7,(void *)(*(int *)(*param_3 + 8) + piVar8[3]),piVar8[4]);
            cVar5 = (*DAT_0451ecf0)();
            if (cVar5 != '\x01') {
              FUN_0400a810();
            }
            uVar10 = uVar10 + 1;
            piVar8 = piVar8 + 2;
          } while (uVar10 < (uint)param_3[2]);
        }
      }
      param_1[0xe] = 4;
      break;
    }
    param_1[0xe] = 5;
  case 5:
    if ((bVar12) && (DAT_044a7f34 != '\0')) {
      if (bVar14) {
        FUN_0402cd10();
      }
      else {
        FUN_0402cd10();
      }
      DAT_044a7f34 = '\x01';
    }
    if (bVar11) {
      if (bVar13) {
        Direct3DDevice9Imp__VertexArrays_VertexBufferInvalidated();
        FUN_040ba120();
        iVar6 = FUN_040ba100();
        param_1[6] = iVar6;
        OpenGLContextCache____glewBindBuffer();
        if (bVar15) {
LAB_040bb177:
          (*DAT_0451e894)();
        }
        else {
          (*DAT_0451e894)();
          if (param_3[2] != 0) {
            uVar10 = 0;
            do {
              uVar10 = uVar10 + 1;
              (*DAT_0451ed2c)();
            } while (uVar10 < (uint)param_3[2]);
          }
        }
      }
      else {
        OpenGLContextCache____glewBindBuffer();
        (*DAT_0451ed30)();
        if (param_3[2] != 0) {
          uVar10 = 0;
          do {
            uVar10 = uVar10 + 1;
            (*DAT_0451ed2c)();
          } while (uVar10 < (uint)param_3[2]);
        }
      }
    }
    else {
      OpenGLContextCache____glewBindBuffer();
      if (param_3[2] != 0) {
        uVar10 = 0;
        do {
          uVar10 = uVar10 + 1;
          (*DAT_0451ed2c)();
        } while (uVar10 < (uint)param_3[2]);
      }
    }
    break;
  case 4:
switchD_040babeb_caseD_4:
    if ((!bVar11) && (!bVar12)) {
      FUN_0400a810();
    }
    if (bVar13) {
      if (bVar11) {
        OpenGLContextCache____glewBindBuffer();
        cVar5 = (*DAT_0451ecf0)();
        if (cVar5 != '\x01') {
          FUN_0400a810();
        }
        iVar6 = (*DAT_0451e520)();
        param_1[7] = iVar6;
        if (iVar6 == 0) {
          FUN_0400a810();
        }
      }
      if (param_3[2] != 0) {
        uVar10 = 0;
        piVar8 = param_3;
        do {
          piVar1 = piVar8 + 3;
          uVar10 = uVar10 + 1;
          psVar2 = (size_t *)(piVar8 + 4);
          piVar8 = piVar8 + 2;
          memcpy((void *)(*piVar1 + param_1[7]),(void *)(*piVar1 + *(int *)(*param_3 + 8)),*psVar2);
        } while (uVar10 < (uint)param_3[2]);
      }
    }
    else {
      OpenGLContextCache____glewBindBuffer();
      if (param_3[2] != 0) {
        uVar10 = 0;
        piVar8 = param_3;
        do {
          pvVar7 = (void *)(*DAT_0451e520)();
          if (pvVar7 == (void *)0x0) {
            FUN_0400a810();
          }
          memcpy(pvVar7,(void *)(*(int *)(*param_3 + 8) + piVar8[3]),piVar8[4]);
          cVar5 = (*DAT_0451ecf0)();
          if (cVar5 != '\x01') {
            FUN_0400a810();
          }
          uVar10 = uVar10 + 1;
          piVar8 = piVar8 + 2;
        } while (uVar10 < (uint)param_3[2]);
      }
    }
    break;
  default:
    FUN_0400a810();
  }
  iVar6 = param_1[9];
  if ((iVar6 != 0) && (param_3[2] != 0)) {
    uVar10 = 0;
    piVar8 = param_3;
    while( true ) {
      piVar1 = piVar8 + 3;
      uVar10 = uVar10 + 1;
      psVar2 = (size_t *)(piVar8 + 4);
      piVar8 = piVar8 + 2;
      memcpy((void *)(*(int *)(iVar6 + 8) + *piVar1),(void *)(*piVar1 + *(int *)(*param_3 + 8)),
             *psVar2);
      if ((uint)param_3[2] <= uVar10) break;
      iVar6 = param_1[9];
    }
  }
  param_3 = (int *)*param_3;
  LOCK();
  iVar6 = *param_3;
  *param_3 = *param_3 + -1;
  UNLOCK();
  piVar8 = (int *)&stack0xffffffa4;
  if ((iVar6 == 1) && (piVar8 = (int *)&stack0xffffffa4, param_3[3] == 0)) {
    eON_VirtualFree();
    piVar8 = (int *)&stack0xffffff98;
    free(param_3);
  }
  iVar6 = *(int *)param_1[1];
  *piVar8 = param_1[1];
  pcVar4 = *(code **)(iVar6 + 0x10);
  piVar8[-1] = 0x40babd6;
  (*pcVar4)();
  return iVar3 * 8 + 0xc;
}

// --- attached helper FUN_000a3ba0 @0x040a3ba0 (call-graph exclusive to this TU) ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_040a3ba0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_040803c0(*(int *)(param_1 + 0x1c) + 0x40);
  }
  if (*(int *)(param_1 + 0x50) == 0) {
    uVar2 = 0x8876086c;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x50) + -1;
    *(int *)(param_1 + 0x50) = iVar1;
                    /* try { // try from 040a3be0 to 040a3c19 has its CatchHandler @ 040a3c57 */
    uVar2 = RetainSharedMemoryRegion(*(undefined4 *)(param_1 + 0x4c),iVar1 == 0);
    _DAT_04468cec = _DAT_04468cec - *(int *)(param_1 + 0x5c);
    _DAT_04468ce8 = _DAT_04468ce8 - *(int *)(param_1 + 0x58);
    DAT_04468ce4 = DAT_04468ce4 - (*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x5c));
    FUN_040bbcc0(*(undefined4 *)(param_1 + 0x4c),param_1 + 0x58,param_1 + 0x5c);
    _DAT_04468ce8 = _DAT_04468ce8 + *(int *)(param_1 + 0x58);
    _DAT_04468cec = _DAT_04468cec + *(int *)(param_1 + 0x5c);
    DAT_04468ce4 = DAT_04468ce4 + *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x5c);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_04080490(*(int *)(param_1 + 0x1c) + 0x40);
  }
  return uVar2;
}

// --- attached helper FUN_000b1640 @0x040b1640 (call-graph exclusive to this TU) ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_040b1640(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_040803c0(*(int *)(param_1 + 0x1c) + 0x40);
  }
  if (*(int *)(param_1 + 0x54) == 0) {
    uVar2 = 0x8876086c;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x54) + -1;
    *(undefined1 *)(param_1 + 0x58) = 0;
    *(int *)(param_1 + 0x54) = iVar1;
                    /* try { // try from 040b1684 to 040b16bd has its CatchHandler @ 040b16ff */
    uVar2 = RetainSharedMemoryRegion(*(undefined4 *)(param_1 + 0x50),iVar1 == 0);
    _DAT_044a385c = _DAT_044a385c - *(int *)(param_1 + 0x60);
    _DAT_044a3858 = _DAT_044a3858 - *(int *)(param_1 + 0x5c);
    DAT_044a3854 = DAT_044a3854 - (*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x60));
    FUN_040bbcc0(*(undefined4 *)(param_1 + 0x50),param_1 + 0x5c,param_1 + 0x60);
    _DAT_044a3858 = _DAT_044a3858 + *(int *)(param_1 + 0x5c);
    _DAT_044a385c = _DAT_044a385c + *(int *)(param_1 + 0x60);
    DAT_044a3854 = DAT_044a3854 + *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x60);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    direct3ddevice9imp_04080490(*(int *)(param_1 + 0x1c) + 0x40);
  }
  return uVar2;
}

