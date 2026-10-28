// Recovered source: eon2/src/dlls/win32/kernel32/heapImplementation.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- GetFreeSubheapAreaForAllocation @0x04137130 ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* source: heapImplementation */

uint __regparm3 GetFreeSubheapAreaForAllocation(int param_1,int param_2,uint *param_3)

{
  undefined *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar8 = param_2 + 8;
  if (uVar8 < 0x18) {
    FUN_0400a810("totalAreaSize >= 24",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/heapImplementation.cpp"
                 ,0x215,"SIZE_T GetFreeAreasListIndex(SIZE_T)");
  }
  uVar6 = (uVar8 >> 3) - 3;
  uVar3 = 0x1fe;
  if (uVar6 < 0x1ff) {
    uVar3 = uVar6;
  }
  iVar5 = *(int *)(param_1 + 0x24 + uVar3 * 0x14);
  if (iVar5 != 0) {
    for (iVar5 = *(int *)(iVar5 + 0xc); iVar5 != 0; iVar5 = *(int *)(iVar5 + 4)) {
      uVar3 = *(uint *)(iVar5 + -8);
      if (((((uVar3 & 7) != 0) || ((*(byte *)(iVar5 + -4) & 0xfc) != 0xfc)) ||
          (*(char *)(iVar5 + -3) != 'x')) ||
         ((*(char *)(iVar5 + -2) != -0x1b || (*(char *)(iVar5 + -1) != 'w')))) {
        FUN_0400a810("((AreaData_Free*)area)->Header.IsFreeAreaValid()",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/heapImplementation.cpp"
                     ,0x450,
                     "AreaData_Free* GetFreeSubheapAreaForAllocation(eON_Heap*, SIZE_T, eON_Subheap**)"
                    );
        uVar3 = *(uint *)(iVar5 + -8);
      }
      if (uVar8 <= uVar3) {
        uVar6 = iVar5 - 8;
        uVar8 = *(uint *)(param_1 + 0xc);
        uVar3 = uVar8;
        if (uVar8 == 0) {
          FUN_0400a810("startSubheap",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/heapImplementation.cpp"
                       ,0x22f,"eON_Subheap* FindSubheapByAddress(const eON_Heap*, LPCVOID)");
        }
        goto LAB_041372d8;
      }
    }
  }
  if ((*(uint *)(param_1 + 4) & 2) == 0) {
    uVar8 = 0;
    FUN_0402cd10(0xf,"GetFreeSubheapAreaForAllocation() - Not enough space in non-growable heap!");
  }
  else {
    puVar1 = (undefined *)(param_2 + 0x30);
    if ((undefined *)(param_2 + 0x37U & 0xfffffff8) != puVar1) {
      FUN_0400a810("( ( (minimalSubheapSizeNeeded) + (2*sizeof(void*)) - 1) & ~((2*sizeof(void*))-1) ) == minimalSubheapSizeNeeded"
                   ,
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/heapImplementation.cpp"
                   ,0x46d,
                   "AreaData_Free* GetFreeSubheapAreaForAllocation(eON_Heap*, SIZE_T, eON_Subheap**)"
                  );
    }
    puVar4 = *(undefined **)(param_1 + 8);
    if (*(undefined **)(param_1 + 8) <= puVar1) {
      puVar4 = puVar1;
    }
    uVar3 = Subheap_Create(puVar4);
    if (uVar3 == 0) {
      do {
        puVar4 = (undefined *)(*(uint *)(param_1 + 8) >> 1);
        *(undefined **)(param_1 + 8) = puVar4;
        if ((puVar4 < puVar1) || (puVar4 < &UNK_00200001)) {
          FUN_0402cd10(0xf,
                       "GetFreeSubheapAreaForAllocation - no continuous free memory area to allocate of size %zu!"
                       ,(int)puVar4 * 2);
          return 0;
        }
        if (puVar4 < puVar1) {
          puVar4 = puVar1;
        }
        uVar3 = Subheap_Create(puVar4);
      } while (uVar3 == 0);
    }
    else if (*(uint *)(param_1 + 8) < 0x8000000) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) * 2;
    }
    uVar8 = uVar3 + 0x18;
    *param_3 = uVar3;
  }
  return uVar8;
  while (puVar2 = (uint *)(uVar3 + 4), uVar3 = *puVar2, uVar8 != *puVar2) {
LAB_041372d8:
    if ((uVar3 <= uVar6) && (uVar7 = *(uint *)(uVar3 + 8), uVar6 < uVar3 + uVar7))
    goto LAB_041372fb;
  }
  uVar3 = 0;
  uVar7 = _DAT_00000008;
LAB_041372fb:
  uVar8 = *(uint *)(uVar3 + 0x10);
  uVar9 = (uint)(&DAT_00010017 + param_2 + (uVar6 - uVar3)) & 0xffff0000;
  if (uVar7 < ((uint)(&DAT_00010017 + param_2 + (uVar6 - uVar3)) & 0xffff0000)) {
    uVar9 = uVar7;
  }
  if (uVar8 < uVar9) {
    iVar5 = eON_VirtualAlloc(uVar8 + uVar3,uVar9 - uVar8,0x1000,0x40);
    if (iVar5 == 0) {
      return 0;
    }
    *(uint *)(uVar3 + 0x10) = uVar9;
  }
  *param_3 = uVar3;
  return uVar6;
}

// --- Heap_Allocate @0x04138200 ---
/* source: heapImplementation */

uint * Heap_Allocate(int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  char *pcVar5;
  uint uVar6;
  char **ppcVar7;
  char **ppcVar8;
  char **ppcVar9;
  uint uVar10;
  int local_64 [2];
  char *local_5c [8];
  uint *local_3c;
  int *local_38;
  byte local_31;
  uint *local_30;
  undefined4 local_20;
  
  if (param_1 == (int *)0x0) {
    return (uint *)0x0;
  }
  if (*param_1 != 0x59372851) {
    return (uint *)0x0;
  }
  if (DAT_04515b5c == 0) {
    local_5c[3] = "void* Heap_Allocate(HANDLE, DWORD, SIZE_T)";
    local_5c[2] = (char *)0x537;
    local_5c[1] = 
    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/heapImplementation.cpp"
    ;
    local_5c[0] = "sProcessHeap";
    FUN_0400a810();
  }
  uVar2 = param_1[1];
  uVar10 = param_2 & 0xd | uVar2;
  uVar6 = param_3 + 7U & 0xfffffff8;
  local_31 = (byte)uVar10 & 1 ^ 1;
  if (uVar6 < 0x10) {
    local_30 = (uint *)0x20;
    uVar6 = 0x10;
  }
  else {
    local_30 = (uint *)(uVar6 + 0x10);
  }
  ppcVar7 = local_5c;
  if (local_31 != 0) {
    piVar1 = param_1 + 0xa00;
    local_38 = param_1;
    ppcVar8 = local_5c;
    while( true ) {
      *ppcVar8 = (char *)piVar1;
      ppcVar8[-1] = (char *)0x413832d;
      iVar3 = TryEnterCriticalSection();
      ppcVar7 = ppcVar8 + -1;
      param_1 = local_38;
      if (iVar3 != 0) break;
      ppcVar8[-2] = (char *)0x4138325;
      sched_yield();
      ppcVar8 = ppcVar8 + -1;
    }
  }
  ppcVar8 = ppcVar7;
  if ((&UNK_0007f000 <= local_30) && ((uVar2 & 2) != 0)) {
    ppcVar7[3] = (char *)0x40;
    pcVar5 = (char *)(uVar6 + 0x100f & 0xfffff000);
    ppcVar7[2] = (char *)0x3000;
    ppcVar7[1] = pcVar5;
    local_3c = (uint *)pcVar5;
    *ppcVar7 = (char *)0x0;
    ppcVar7[-1] = (char *)0x413838f;
    puVar4 = (uint *)eON_VirtualAlloc();
    ppcVar9 = ppcVar7 + -4;
    ppcVar8 = ppcVar7 + -4;
    if (puVar4 == (uint *)0x0) {
      ppcVar7[-2] = (char *)local_3c;
      ppcVar7[-3] = "LargeArea_Allocate() - Couldn\'t allocate large block of %u bytes";
      ppcVar7[-4] = (char *)0xf;
      ppcVar7[-5] = (char *)0x413846d;
      FUN_0402cd10();
      ppcVar8 = ppcVar7 + -4;
    }
    else {
      *puVar4 = (uint)local_3c;
      local_38 = (int *)param_1[4];
      local_30 = puVar4 + 2;
      puVar4[1] = uVar6;
      if (local_38 == (int *)0x0) {
        puVar4[3] = (uint)local_30;
        puVar4[2] = (uint)local_30;
        param_1[4] = (int)puVar4;
      }
      else {
        puVar4[3] = (uint)(local_38 + 2);
        puVar4[2] = local_38[2];
        *(uint **)(local_38[2] + 4) = local_30;
        local_38[2] = (int)local_30;
      }
      puVar4 = puVar4 + 4;
      if (puVar4 != (uint *)0x0) goto LAB_041382c1;
    }
  }
  local_20 = 0;
  ppcVar8[-1] = (char *)0x4138293;
  local_30 = (uint *)GetFreeSubheapAreaForAllocation();
  if (local_30 == (uint *)0x0) {
    if (local_31 != 0) {
      *ppcVar8 = (char *)(param_1 + 0xa00);
      ppcVar8[-1] = (char *)0x413842c;
      LeaveCriticalSection();
      ppcVar8 = ppcVar8 + -1;
    }
    ppcVar8[2] = (char *)uVar10;
    ppcVar8[1] = "Heap_Allocate( dwFlags = %#x, dwBytes = %zu ) failed to allocate memory!";
    *ppcVar8 = (char *)0xf;
    ppcVar8[3] = (char *)param_3;
    ppcVar8[-1] = (char *)0x413844e;
    FUN_0402cd10();
    return (uint *)0x0;
  }
  *ppcVar8 = (char *)param_3;
  ppcVar8[-1] = (char *)0x41382b2;
  SetupNewlyAllocatedArea();
  puVar4 = local_30 + 2;
  ppcVar9 = ppcVar8;
  if ((uVar10 & 8) != 0) {
    *ppcVar8 = (char *)puVar4;
    local_3c = puVar4;
    ppcVar8[1] = (char *)param_3;
    ppcVar8[-1] = (char *)0x4138352;
    bzero(*ppcVar8,(size_t)ppcVar8[1]);
    puVar4 = local_3c;
  }
LAB_041382c1:
  if (local_31 == 0) {
    return puVar4;
  }
  local_3c = puVar4;
  *ppcVar9 = (char *)(param_1 + 0xa00);
  ppcVar9[-1] = (char *)0x41382dc;
  LeaveCriticalSection();
  return local_3c;
}

// --- Heap_Destroy @0x04138020 ---
/* source: heapImplementation */

undefined4 Heap_Destroy(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  bool bVar7;
  undefined4 local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  char *local_28;
  undefined4 local_24;
  char *local_20;
  
  if (((param_1 == (int *)0x0) || (*param_1 != 0x59372851)) || (param_1 == DAT_04515b5c)) {
    return 0;
  }
  if (DAT_04515b5c == (int *)0x0) {
    local_20 = "WINBOOL Heap_Destroy(HANDLE)";
    local_24 = 0x4e4;
    local_28 = 
    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/heapImplementation.cpp"
    ;
    local_2c = (int *)0x432b47a;
    local_30 = (int *)0x413819f;
    FUN_0400a810();
  }
  local_2c = DAT_04515b5c + 0xa00;
  local_30 = (int *)0x4138068;
  EnterCriticalSection();
  if (DAT_04515b58 != 0) {
    iVar2 = 0;
    piVar3 = (int *)*DAT_04515b54;
    puVar5 = DAT_04515b54;
    while (param_1 != piVar3) {
      puVar5 = puVar5 + 1;
      iVar2 = iVar2 + 1;
      if (iVar2 == DAT_04515b58) goto LAB_041380a5;
      piVar3 = (int *)*puVar5;
    }
    DAT_04515b58 = DAT_04515b58 + -1;
    *puVar5 = DAT_04515b54[DAT_04515b58];
  }
LAB_041380a5:
  local_30 = DAT_04515b5c;
  *param_1 = 0;
  local_30 = local_30 + 0xa00;
  local_34 = (int *)0x41380bd;
  LeaveCriticalSection();
  local_34 = param_1 + 0xa00;
  local_38 = 0x41380ce;
  eON_DeleteCriticalSection();
  piVar6 = &local_38;
  piVar4 = &local_38;
  if (param_1[4] != 0) {
    piVar3 = (int *)(param_1[4] + 8);
    do {
      piVar1 = (int *)piVar3[1];
      *piVar1 = *piVar3;
      *(int **)(*piVar3 + 4) = piVar1;
      piVar4[2] = 0x8000;
      piVar4[1] = 0;
      *piVar4 = (int)(piVar3 + -2);
      piVar4[-1] = 0x4138109;
      eON_VirtualFree();
      piVar6 = piVar4 + -3;
      piVar4 = piVar4 + -3;
      bVar7 = piVar1 != piVar3;
      piVar3 = piVar1;
    } while (bVar7);
  }
  piVar3 = (int *)param_1[3];
  puVar5 = piVar6;
  if ((int *)param_1[3] != (int *)0x0) {
    do {
      piVar1 = (int *)piVar3[1];
      *piVar1 = *piVar3;
      *(int **)(*piVar3 + 4) = piVar1;
      puVar5[2] = 0x8000;
      puVar5[1] = 0;
      *puVar5 = piVar3;
      puVar5[-1] = 0x4138146;
      eON_VirtualFree();
      piVar6 = puVar5 + -3;
      puVar5 = puVar5 + -3;
      bVar7 = piVar1 != piVar3;
      piVar3 = piVar1;
    } while (bVar7);
  }
  *piVar6 = (int)param_1;
  piVar6[-1] = 0x4138155;
  free((void *)*piVar6);
  return 1;
}

// --- Heap_Free @0x04138da0 ---
/* source: heapImplementation */

undefined4 Heap_Free(int *param_1,byte param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char **ppcVar8;
  char **ppcVar9;
  int aiStack_44 [2];
  char *local_3c [6];
  undefined4 *local_24;
  byte local_1d;
  
  ppcVar9 = local_3c;
  if (DAT_04515b5c == 0) {
    local_3c[3] = "WINBOOL Heap_Free(HANDLE, DWORD, PVOID)";
    local_3c[2] = (char *)0x65a;
    local_3c[1] = 
    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/heapImplementation.cpp"
    ;
    local_3c[0] = "sProcessHeap";
    FUN_0400a810();
  }
  uVar3 = 1;
  if (param_3 != (undefined4 *)0x0) {
    if ((param_1 != (int *)0x0) && (*param_1 == 0x59372851)) {
      local_1d = (param_2 | (byte)param_1[1]) & 1 ^ 1;
      if (local_1d != 0) {
        ppcVar8 = local_3c;
        while( true ) {
          *ppcVar8 = (char *)(param_1 + 0xa00);
          ppcVar8[-1] = (char *)0x4138e9d;
          iVar5 = TryEnterCriticalSection();
          ppcVar9 = ppcVar8 + -1;
          if (iVar5 != 0) break;
          ppcVar8[-2] = (char *)0x4138e95;
          sched_yield();
          ppcVar8 = ppcVar8 + -1;
        }
      }
      puVar4 = (undefined4 *)param_1[3];
      puVar2 = param_3 + -2;
      puVar6 = puVar4;
      if (puVar4 == (undefined4 *)0x0) {
        local_24 = puVar4;
        ppcVar9[3] = "eON_Subheap* FindSubheapByAddress(const eON_Heap*, LPCVOID)";
        ppcVar9[2] = (char *)0x22f;
        ppcVar9[1] = 
        "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/heapImplementation.cpp"
        ;
        *ppcVar9 = "startSubheap";
        ppcVar9[-1] = (char *)0x4138f87;
        FUN_0400a810();
        puVar4 = local_24;
        puVar6 = local_24;
      }
      do {
        if ((puVar4 <= puVar2) && (puVar2 < (undefined4 *)(puVar4[2] + (int)puVar4))) {
          if (((((uint)puVar2 & 7) != 0) ||
              (((*(char *)((int)param_3 + -3) != -0x1b || (*(char *)((int)param_3 + -2) != '\0')) ||
               ((*(byte *)(param_3 + -1) & 1) != 0)))) || ((uint)param_3[-2] < 0x18))
          goto LAB_04138e58;
          ppcVar9[-1] = (char *)0x4138efb;
          Subheap_FreeArea();
          goto LAB_04138f00;
        }
        piVar1 = puVar4 + 1;
        puVar4 = (undefined4 *)*piVar1;
      } while (puVar6 != (undefined4 *)*piVar1);
      puVar2 = (undefined4 *)param_1[4];
      if (puVar2 != (undefined4 *)0x0) {
        puVar4 = puVar2 + 2;
        do {
          if (param_3 == puVar4 + 2) {
            puVar6 = puVar4 + -2;
            if (puVar6 != (undefined4 *)0x0) {
              puVar7 = (undefined4 *)param_3[-1];
              if (puVar7 == puVar4) {
                if (puVar2 != puVar6) {
                  local_24 = puVar6;
                  ppcVar9[3] = "void LargeArea_Free(eON_Heap*, LPVOID)";
                  ppcVar9[2] = (char *)0x37b;
                  ppcVar9[1] = 
                  "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/heapImplementation.cpp"
                  ;
                  *ppcVar9 = "heap->LargeAreasList == area";
                  ppcVar9[-1] = (char *)0x4138ffd;
                  FUN_0400a810();
                  puVar6 = local_24;
                }
                param_1[4] = 0;
              }
              else {
                if (puVar2 == puVar6) {
                  param_1[4] = (int)(puVar7 + -2);
                  puVar7 = (undefined4 *)param_3[-1];
                }
                *puVar7 = param_3[-2];
                *(undefined4 **)(param_3[-2] + 4) = puVar7;
              }
              ppcVar9[2] = (char *)0x8000;
              ppcVar9[1] = (char *)0x0;
              *ppcVar9 = (char *)puVar6;
              ppcVar9[-1] = (char *)0x4138fca;
              eON_VirtualFree();
              ppcVar9 = ppcVar9 + -3;
LAB_04138f00:
              if (local_1d == 0) {
                return 1;
              }
              local_24 = (undefined4 *)0x1;
              *ppcVar9 = (char *)(param_1 + 0xa00);
              ppcVar9[-1] = (char *)0x4138f20;
              LeaveCriticalSection();
              return local_24;
            }
            break;
          }
          puVar4 = (undefined4 *)puVar4[1];
        } while (puVar2 + 2 != puVar4);
      }
LAB_04138e58:
      if (local_1d != 0) {
        *ppcVar9 = (char *)(param_1 + 0xa00);
        ppcVar9[-1] = (char *)0x4138ebe;
        LeaveCriticalSection();
        ppcVar9 = ppcVar9 + -1;
      }
      *ppcVar9 = (char *)0x57;
      ppcVar9[-1] = (char *)0x4138e6a;
      eON_SetLastError();
      return 0;
    }
    local_3c[0] = (char *)0x6;
    eON_SetLastError();
    uVar3 = 0;
  }
  return uVar3;
}

// --- Heap_GetProcessHeap @0x041381b0 ---
/* source: heapImplementation */

int Heap_GetProcessHeap(void)

{
  if (DAT_04515b5c != 0) {
    return DAT_04515b5c;
  }
  FUN_0400a810("sProcessHeap",
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/heapImplementation.cpp"
               ,0x528,"void* Heap_GetProcessHeap()");
  return DAT_04515b5c;
}

// --- Heap_GetProcessHeaps @0x041393a0 ---
/* source: heapImplementation */

uint Heap_GetProcessHeaps(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (DAT_04515b5c == 0) {
    FUN_0400a810("sProcessHeap",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/heapImplementation.cpp"
                 ,0x713,"DWORD Heap_GetProcessHeaps(DWORD, PHANDLE)");
  }
  EnterCriticalSection(DAT_04515b5c + 0x2800);
  uVar2 = DAT_04515b58;
  iVar1 = DAT_04515b54;
  if ((DAT_04515b58 <= param_1) && (DAT_04515b58 != 0)) {
    uVar3 = 0;
    do {
      *(undefined4 *)(param_2 + uVar3 * 4) = *(undefined4 *)(iVar1 + uVar3 * 4);
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
  }
  LeaveCriticalSection(DAT_04515b5c + 0x2800);
  return DAT_04515b58;
}

// --- Heap_GetSize @0x04139020 ---
/* source: heapImplementation */

uint Heap_GetSize(int *param_1,byte param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char **ppcVar7;
  char **ppcVar8;
  int aiStack_44 [2];
  char *local_3c [6];
  uint local_24;
  byte local_1d;
  
  ppcVar7 = local_3c;
  if (DAT_04515b5c == 0) {
    local_3c[3] = "SIZE_T Heap_GetSize(HANDLE, DWORD, PCVOID)";
    local_3c[2] = (char *)0x699;
    local_3c[1] = 
    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/heapImplementation.cpp"
    ;
    local_3c[0] = "sProcessHeap";
    FUN_0400a810();
  }
  if ((param_1 == (int *)0x0) || (*param_1 != 0x59372851)) {
    local_3c[0] = (char *)0x6;
    eON_SetLastError();
    local_24 = -1;
  }
  else {
    local_1d = (param_2 | (byte)param_1[1]) & 1 ^ 1;
    if (local_1d != 0) {
      ppcVar8 = local_3c;
      while( true ) {
        *ppcVar8 = (char *)(param_1 + 0xa00);
        ppcVar8[-1] = (char *)0x413913d;
        iVar3 = TryEnterCriticalSection();
        ppcVar7 = ppcVar8 + -1;
        if (iVar3 != 0) break;
        ppcVar8[-2] = (char *)0x4139135;
        sched_yield();
        ppcVar8 = ppcVar8 + -1;
      }
    }
    uVar2 = param_1[3];
    uVar6 = param_3 - 8;
    uVar5 = uVar2;
    if (uVar2 == 0) {
      local_24 = uVar2;
      ppcVar7[3] = "eON_Subheap* FindSubheapByAddress(const eON_Heap*, LPCVOID)";
      ppcVar7[2] = (char *)0x22f;
      ppcVar7[1] = 
      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/heapImplementation.cpp"
      ;
      *ppcVar7 = "startSubheap";
      ppcVar7[-1] = (char *)0x413924f;
      FUN_0400a810();
      uVar2 = local_24;
      uVar5 = local_24;
    }
    do {
      if ((uVar2 <= uVar6) && (uVar6 < *(int *)(uVar2 + 8) + uVar2)) {
        iVar3 = -1;
        if ((((uVar6 & 7) == 0) &&
            (((*(char *)(param_3 + -3) == -0x1b && (*(char *)(param_3 + -2) == '\0')) &&
             ((*(byte *)(param_3 + -4) & 1) == 0)))) &&
           (uVar6 = *(uint *)(param_3 + -8), 0x17 < uVar6)) {
          if (((uVar6 & 7) != 0) || ((*(byte *)(param_3 + -4) & 0xfc) != 0xfc)) {
            ppcVar7[3] = "SIZE_T Heap_GetSize(HANDLE, DWORD, PCVOID)";
            ppcVar7[2] = (char *)0x6b1;
            ppcVar7[1] = 
            "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/heapImplementation.cpp"
            ;
            *ppcVar7 = "((AreaData_Allocated*)possibleArea)->Header.IsUsedAreaValid()";
            ppcVar7[-1] = (char *)0x41391e2;
            FUN_0400a810();
            uVar6 = *(uint *)(param_3 + -8);
          }
          iVar3 = uVar6 - *(byte *)(param_3 + -1);
        }
        goto LAB_041390f0;
      }
      puVar1 = (uint *)(uVar2 + 4);
      uVar2 = *puVar1;
    } while (uVar5 != *puVar1);
    iVar3 = -1;
    if (param_1[4] != 0) {
      iVar4 = param_1[4] + 8;
      iVar3 = iVar4;
      do {
        if (param_3 == iVar3 + 8) {
          if (iVar3 != 8) {
            iVar3 = *(int *)(iVar3 + -4);
            goto LAB_041390f0;
          }
          break;
        }
        iVar3 = *(int *)(iVar3 + 4);
      } while (iVar4 != iVar3);
      iVar3 = -1;
    }
LAB_041390f0:
    local_24 = iVar3;
    if (local_1d != 0) {
      *ppcVar7 = (char *)(param_1 + 0xa00);
      ppcVar7[-1] = (char *)0x4139161;
      LeaveCriticalSection();
      ppcVar7 = ppcVar7 + -1;
    }
    if (local_24 == -1) {
      *ppcVar7 = (char *)0x57;
      ppcVar7[-1] = (char *)0x413910e;
      eON_SetLastError();
      return local_24;
    }
  }
  return local_24;
}

// --- Heap_Reallocate @0x04138480 ---
/* source: heapImplementation */

int * Heap_Reallocate(int *param_1,uint param_2,int *param_3,uint param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  char **ppcVar10;
  uint *puVar11;
  char **ppcVar12;
  int *piVar13;
  uint uVar14;
  int *piVar15;
  int local_74 [2];
  char *local_6c [5];
  int local_58;
  int *local_54;
  int *local_50;
  int *local_4c;
  int *local_48;
  undefined4 *local_44;
  int *local_40;
  uint local_3c;
  uint local_38;
  byte local_31;
  int *local_30;
  
  ppcVar12 = local_6c;
  if (DAT_04515b5c == 0) {
    local_6c[3] = "void* Heap_Reallocate(HANDLE, DWORD, PVOID, SIZE_T)";
    local_6c[2] = (char *)0x578;
    local_6c[1] = 
    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/heapImplementation.cpp"
    ;
    local_6c[0] = "sProcessHeap";
    FUN_0400a810();
  }
  if (param_3 != (int *)0x0) {
    if ((param_1 == (int *)0x0) || (*param_1 != 0x59372851)) {
      local_6c[0] = (char *)0x6;
      eON_SetLastError();
    }
    else {
      local_38 = param_2 & 0x1d | param_1[1];
      local_31 = (byte)local_38 & 1 ^ 1;
      if (local_31 != 0) {
        ppcVar10 = local_6c;
        while( true ) {
          *ppcVar10 = (char *)(param_1 + 0xa00);
          ppcVar10[-1] = (char *)0x41385bd;
          iVar4 = TryEnterCriticalSection();
          ppcVar12 = ppcVar10 + -1;
          if (iVar4 != 0) break;
          ppcVar10[-2] = (char *)0x41385b5;
          sched_yield();
          ppcVar10 = ppcVar10 + -1;
        }
      }
      piVar15 = (int *)(param_4 + 7 & 0xfffffff8);
      if (piVar15 < (int *)0x10) {
        piVar15 = (int *)0x10;
      }
      piVar8 = (int *)param_1[3];
      piVar13 = param_3 + -2;
      local_40 = piVar13;
      piVar9 = piVar8;
      if (piVar8 == (int *)0x0) {
        local_54 = piVar8;
        ppcVar12[3] = "eON_Subheap* FindSubheapByAddress(const eON_Heap*, LPCVOID)";
        ppcVar12[2] = (char *)0x22f;
        ppcVar12[1] = 
        "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/heapImplementation.cpp"
        ;
        *ppcVar12 = "startSubheap";
        ppcVar12[-1] = (char *)0x41386f7;
        FUN_0400a810();
        piVar8 = local_54;
        piVar9 = local_54;
      }
      do {
        if ((piVar9 <= piVar13) && (piVar13 < (int *)(piVar9[2] + (int)piVar9))) {
          if ((((uint)piVar13 & 7) != 0) ||
             ((((*(char *)((int)param_3 + -3) != -0x1b || (*(char *)((int)param_3 + -2) != '\0')) ||
               ((*(byte *)(param_3 + -1) & 1) != 0)) ||
              (piVar8 = (int *)param_3[-2], piVar8 < (int *)0x18)))) goto LAB_04138578;
          if ((((uint)piVar8 & 7) != 0) || ((*(byte *)(param_3 + -1) & 0xfc) != 0xfc)) {
            ppcVar12[3] = "void* Heap_Reallocate(HANDLE, DWORD, PVOID, SIZE_T)";
            ppcVar12[2] = (char *)0x5a8;
            ppcVar12[1] = 
            "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/heapImplementation.cpp"
            ;
            *ppcVar12 = "((AreaData_Allocated*)area)->Header.IsUsedAreaValid()";
            ppcVar12[-1] = (char *)0x413862c;
            FUN_0400a810();
            piVar8 = (int *)param_3[-2];
          }
          local_3c = (int)piVar8 - (uint)*(byte *)((int)param_3 + -1);
          if (piVar15 <= piVar8 + -2) {
            if (piVar8 < piVar15 + 8) goto LAB_041387f1;
            piVar8 = piVar15 + 2;
            ppcVar12[-1] = (char *)0x41388da;
            Subheap_SetupMemoryAsFreeArea();
            param_3[-2] = (int)piVar8;
            goto LAB_0413880d;
          }
          if ((&DAT_0007efff < piVar15 + 4) && ((*(byte *)(param_1 + 1) & 2) != 0)) {
            puVar11 = (uint *)ppcVar12;
            if ((local_38 & 0x10) != 0) goto LAB_04138670;
            ppcVar12[3] = (char *)0x40;
            ppcVar12[2] = (char *)0x3000;
            *ppcVar12 = (char *)0x0;
            piVar8 = (int *)((int)piVar15 + 0x100fU & 0xfffff000);
            ppcVar12[1] = (char *)piVar8;
            local_54 = piVar8;
            ppcVar12[-1] = (char *)0x4138a59;
            piVar8 = (int *)eON_VirtualAlloc();
            uVar14 = local_3c;
            puVar11 = (uint *)(ppcVar12 + -4);
            if (piVar8 == (int *)0x0) {
              ppcVar12[-2] = (char *)local_54;
              ppcVar12[-3] = "LargeArea_Allocate() - Couldn\'t allocate large block of %u bytes";
              ppcVar12[-4] = (char *)0xf;
              ppcVar12[-5] = (char *)0x4138d8c;
              FUN_0402cd10();
              goto LAB_04138670;
            }
            *piVar8 = (int)local_54;
            piVar8[1] = (int)piVar15;
            piVar15 = piVar8 + 2;
            iVar4 = param_1[4];
            if (iVar4 == 0) {
              piVar8[3] = (int)piVar15;
              piVar8[2] = (int)piVar15;
              param_1[4] = (int)piVar8;
            }
            else {
              piVar8[3] = iVar4 + 8;
              piVar8[2] = *(int *)(iVar4 + 8);
              iVar7 = *(int *)(iVar4 + 8);
              *(int **)(iVar4 + 8) = piVar15;
              *(int **)(iVar7 + 4) = piVar15;
            }
            piVar8 = piVar8 + 4;
            puVar11 = (uint *)(ppcVar12 + -4);
            if (piVar8 == (int *)0x0) goto LAB_04138670;
            ppcVar12[-4] = (char *)piVar8;
            ppcVar12[-2] = (char *)uVar14;
            ppcVar12[-3] = (char *)param_3;
            ppcVar12[-5] = (char *)0x4138ab5;
            memcpy(ppcVar12[-4],ppcVar12[-3],(size_t)ppcVar12[-2]);
            ppcVar12[-5] = (char *)0x4138abe;
            Subheap_FreeArea();
            param_3 = piVar8;
            ppcVar12 = ppcVar12 + -4;
            goto joined_r0x04138ac2;
          }
          local_30 = (int *)((int)piVar13 + (int)piVar8);
          local_48 = piVar15 + 2;
          if ((local_30 < (int *)(piVar9[2] + (int)piVar9)) && ((*(byte *)(local_30 + 1) & 1) != 0))
          {
            local_4c = (int *)*local_30;
            if (piVar15 + 2 <= (int *)((int)local_4c + (int)piVar8)) {
              if ((((((uint)local_4c & 7) != 0) || ((*(byte *)(local_30 + 1) & 0xfc) != 0xfc)) ||
                  (*(char *)((int)local_30 + 5) != 'x')) ||
                 ((*(char *)((int)local_30 + 6) != -0x1b || (*(char *)((int)local_30 + 7) != 'w'))))
              {
                local_54 = piVar8;
                ppcVar12[3] = "void* Heap_Reallocate(HANDLE, DWORD, PVOID, SIZE_T)";
                ppcVar12[2] = (char *)0x5e0;
                ppcVar12[1] = 
                "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/heapImplementation.cpp"
                ;
                *ppcVar12 = "((AreaData_Free*)areaToFree)->Header.IsFreeAreaValid()";
                ppcVar12[-1] = (char *)0x413877e;
                FUN_0400a810();
                piVar8 = local_54;
              }
              local_44 = (undefined4 *)local_30[3];
              if (local_44 == (undefined4 *)0x0) {
                local_4c = (int *)local_30[2];
                piVar3 = local_4c;
                if (local_4c[-2] == 0) {
                  piVar2 = (int *)*local_4c;
                  local_4c[2] = 0;
                  local_50 = piVar2;
                  for (; (piVar2 != (int *)0x0 && (piVar3 = local_4c, piVar2[-2] == 0));
                      piVar2 = (int *)*piVar2) {
                    piVar2[2] = 0;
                  }
                }
                goto LAB_041387b4;
              }
              if (local_44[-2] != 0) {
                local_50 = (int *)local_30[2];
                goto LAB_041387a6;
              }
              local_4c = (int *)local_30[2];
              local_50 = local_4c;
              if (local_4c[-2] != 0) goto LAB_041387a6;
              local_58 = local_44[2];
              local_4c[2] = local_58;
              piVar3 = (int *)*local_4c;
              if (piVar3 == (int *)0x0) goto LAB_041387a6;
              goto LAB_0413895d;
            }
          }
          if ((local_38 & 0x10) == 0) {
            ppcVar12[-1] = (char *)0x41389c5;
            piVar15 = (int *)GetFreeSubheapAreaForAllocation();
            if (piVar15 != (int *)0x0) {
              *ppcVar12 = (char *)param_4;
              ppcVar12[-1] = (char *)0x41389e2;
              SetupNewlyAllocatedArea();
              uVar14 = local_3c;
              local_30 = piVar15 + 2;
              *ppcVar12 = (char *)(piVar15 + 2);
              ppcVar12[1] = (char *)param_3;
              ppcVar12[2] = (char *)uVar14;
              ppcVar12[-1] = (char *)0x41389fe;
              memcpy(*ppcVar12,ppcVar12[1],(size_t)ppcVar12[2]);
              ppcVar12[-1] = (char *)0x4138a07;
              Subheap_FreeArea();
              param_3 = local_30;
              local_40 = piVar15;
              cVar6 = (char)*piVar15;
              goto LAB_0413881b;
            }
          }
          if (local_31 != 0) {
            *ppcVar12 = (char *)(param_1 + 0xa00);
            ppcVar12[-1] = (char *)0x4138880;
            LeaveCriticalSection();
            ppcVar12 = ppcVar12 + -1;
          }
          *ppcVar12 = (char *)0x8;
          ppcVar12[-1] = (char *)0x4138891;
          eON_SetLastError();
          uVar14 = local_38;
          *ppcVar12 = "Heap_Reallocate( dwFlags = %#x, dwBytes = %zu ) failed to allocate memory!";
          ppcVar12[-1] = (char *)0xf;
          ppcVar12[2] = (char *)param_4;
          ppcVar12[1] = (char *)uVar14;
          ppcVar12[-2] = (char *)0x41388b6;
          FUN_0402cd10();
          return (int *)0x0;
        }
        piVar3 = piVar9 + 1;
        piVar9 = (int *)*piVar3;
      } while (piVar8 != (int *)*piVar3);
      if (param_1[4] != 0) {
        iVar7 = param_1[4] + 8;
        iVar4 = iVar7;
        do {
          if (param_3 == (int *)(iVar4 + 8)) {
            if (iVar4 != 8) {
              piVar8 = (int *)param_3[-3];
              piVar9 = param_3;
              puVar11 = (uint *)ppcVar12;
              if (piVar15 < piVar8) {
                param_3[-3] = (int)piVar15;
              }
              else if ((int *)param_3[-4] < piVar15 + 4) {
                piVar9 = (int *)0x0;
                if ((local_38 & 0x10) == 0) {
                  ppcVar12[3] = (char *)0x40;
                  ppcVar12[2] = (char *)0x3000;
                  *ppcVar12 = (char *)0x0;
                  piVar8 = (int *)((int)piVar15 + 0x100fU & 0xfffff000);
                  ppcVar12[1] = (char *)piVar8;
                  local_54 = piVar8;
                  ppcVar12[-1] = (char *)0x4138bae;
                  puVar5 = (undefined4 *)eON_VirtualAlloc();
                  if (puVar5 == (undefined4 *)0x0) {
                    ppcVar12[-2] = (char *)local_54;
                    ppcVar12[-3] = 
                    "LargeArea_Allocate() - Couldn\'t allocate large block of %u bytes";
                    ppcVar12[-4] = (char *)0xf;
                    ppcVar12[-5] = (char *)0x4138d6f;
                    FUN_0402cd10();
                    puVar11 = (uint *)(ppcVar12 + -4);
                  }
                  else {
                    *puVar5 = local_54;
                    puVar1 = puVar5 + 2;
                    puVar5[1] = piVar15;
                    iVar4 = param_1[4];
                    if (iVar4 == 0) {
                      puVar5[3] = puVar1;
                      puVar5[2] = puVar1;
                      param_1[4] = (int)puVar5;
                    }
                    else {
                      puVar5[3] = iVar4 + 8;
                      puVar5[2] = *(undefined4 *)(iVar4 + 8);
                      iVar7 = *(int *)(iVar4 + 8);
                      *(undefined4 **)(iVar4 + 8) = puVar1;
                      *(undefined4 **)(iVar7 + 4) = puVar1;
                    }
                    piVar9 = puVar5 + 4;
                    puVar11 = (uint *)(ppcVar12 + -4);
                    if (piVar9 != (int *)0x0) {
                      uVar14 = param_3[-3];
                      ppcVar12[-3] = (char *)param_3;
                      ppcVar12[-4] = (char *)piVar9;
                      ppcVar12[-2] = (char *)uVar14;
                      ppcVar12[-5] = (char *)0x4138c08;
                      memcpy(ppcVar12[-4],ppcVar12[-3],(size_t)ppcVar12[-2]);
                      piVar15 = (int *)param_3[-1];
                      piVar8 = param_3 + -4;
                      if (piVar15 == piVar13) {
                        if (piVar8 != (int *)param_1[4]) {
                          ppcVar12[-1] = "void LargeArea_Free(eON_Heap*, LPVOID)";
                          ppcVar12[-2] = (char *)0x37b;
                          ppcVar12[-3] = 
                          "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/heapImplementation.cpp"
                          ;
                          ppcVar12[-4] = "heap->LargeAreasList == area";
                          ppcVar12[-5] = (char *)0x4138d29;
                          FUN_0400a810();
                        }
                        param_1[4] = 0;
                      }
                      else {
                        if (piVar8 == (int *)param_1[4]) {
                          param_1[4] = (int)(piVar15 + -2);
                          piVar15 = (int *)param_3[-1];
                        }
                        *piVar15 = param_3[-2];
                        *(int **)(param_3[-2] + 4) = piVar15;
                      }
                      ppcVar12[-2] = (char *)0x8000;
                      ppcVar12[-3] = (char *)0x0;
                      ppcVar12[-4] = (char *)piVar8;
                      ppcVar12[-5] = (char *)0x4138c4e;
                      eON_VirtualFree();
                      puVar11 = (uint *)(ppcVar12 + -7);
                    }
                  }
                }
              }
              else {
                if ((local_38 & 8) != 0) {
                  ppcVar12[1] = (char *)((int)piVar15 - (int)piVar8);
                  *ppcVar12 = (char *)((int)piVar8 + (int)param_3);
                  ppcVar12[-1] = (char *)0x4138b3a;
                  bzero(*ppcVar12,(size_t)ppcVar12[1]);
                }
                param_3[-3] = (int)piVar15;
              }
              if (local_31 != 0) {
                *puVar11 = (uint)(param_1 + 0xa00);
                puVar11[-1] = 0x4138c66;
                LeaveCriticalSection();
                puVar11 = puVar11 + -1;
              }
              if (piVar9 == (int *)0x0) {
                *puVar11 = 8;
                puVar11[-1] = 0x4138b62;
                eON_SetLastError();
                return (int *)0x0;
              }
              return piVar9;
            }
            break;
          }
          iVar4 = *(int *)(iVar4 + 4);
        } while (iVar7 != iVar4);
      }
LAB_04138578:
      if (local_31 != 0) {
        *ppcVar12 = (char *)(param_1 + 0xa00);
        ppcVar12[-1] = (char *)0x4138ae0;
        LeaveCriticalSection();
        ppcVar12 = ppcVar12 + -1;
      }
      *ppcVar12 = (char *)0x57;
      ppcVar12[-1] = (char *)0x4138590;
      eON_SetLastError();
    }
  }
  return (int *)0x0;
  while( true ) {
    piVar3[2] = local_58;
    piVar3 = (int *)*piVar3;
    if (piVar3 == (int *)0x0) break;
LAB_0413895d:
    if (piVar3[-2] != 0) {
      goto LAB_041387a6;
    }
  }
LAB_041387a6:
  *local_44 = local_50;
  piVar3 = (int *)local_30[2];
LAB_041387b4:
  piVar3[1] = (int)local_44;
  piVar8 = (int *)((int)piVar8 + *local_30);
  param_3[-2] = (int)piVar8;
  piVar3 = (int *)piVar9[2];
  if ((int *)((uint)(&DAT_00010017 + ((int)piVar13 - (int)piVar9) + (int)piVar15) & 0xffff0000) <=
      (int *)piVar9[2]) {
    piVar3 = (int *)((uint)(&DAT_00010017 + ((int)piVar13 - (int)piVar9) + (int)piVar15) &
                    0xffff0000);
  }
  piVar2 = (int *)piVar9[4];
  if (piVar2 < piVar3) {
    local_54 = piVar3;
    ppcVar12[3] = (char *)0x40;
    ppcVar12[2] = (char *)0x1000;
    ppcVar12[1] = (char *)((int)piVar3 - (int)piVar2);
    *ppcVar12 = (char *)((int)piVar2 + (int)piVar9);
    ppcVar12[-1] = (char *)0x4138995;
    iVar4 = eON_VirtualAlloc();
    puVar11 = (uint *)(ppcVar12 + -4);
    ppcVar12 = ppcVar12 + -4;
    if (iVar4 == 0) {
LAB_04138670:
      if (local_31 != 0) {
        *puVar11 = (uint)(param_1 + 0xa00);
        puVar11[-1] = 0x4138686;
        LeaveCriticalSection();
        puVar11 = puVar11 + -1;
      }
      *puVar11 = 8;
      puVar11[-1] = 0x4138697;
      eON_SetLastError();
      return (int *)0x0;
    }
    piVar9[4] = (int)local_54;
    piVar8 = (int *)param_3[-2];
  }
  if (piVar8 < piVar15 + 8) {
LAB_041387f1:
    uVar14 = (int)piVar13 + (int)piVar8;
    if (uVar14 < (uint)((int)piVar9 + piVar9[2])) {
      *(byte *)(uVar14 + 4) = *(byte *)(uVar14 + 4) & 1 | 0xfc;
      piVar8 = (int *)param_3[-2];
    }
  }
  else {
    *(undefined4 *)((int)ppcVar12 + -4) = 0x4138af7;
    Subheap_SetupMemoryAsFreeArea();
    param_3[-2] = (int)local_48;
    piVar8 = local_48;
  }
LAB_0413880d:
  cVar6 = (char)piVar8;
  *(undefined1 *)((int)param_3 + -3) = 0xe5;
  *(undefined1 *)((int)param_3 + -2) = 0;
LAB_0413881b:
  uVar14 = local_3c;
  *(char *)((int)local_40 + 7) = cVar6 - (char)param_4;
  if ((local_3c < param_4) && ((local_38 & 8) != 0)) {
    ppcVar12[1] = (char *)(param_4 - local_3c);
    *ppcVar12 = (char *)((int)param_3 + uVar14);
    ppcVar12[-1] = (char *)0x4138910;
    bzero(*ppcVar12,(size_t)ppcVar12[1]);
  }
joined_r0x04138ac2:
  if (local_31 != 0) {
    *ppcVar12 = (char *)(param_1 + 0xa00);
    ppcVar12[-1] = (char *)0x413884a;
    LeaveCriticalSection();
    return param_3;
  }
  return param_3;
}

// --- SetupNewlyAllocatedArea @0x041373f0 ---
/* source: heapImplementation */

void __regparm3 SetupNewlyAllocatedArea(uint *param_1,int param_2,uint param_3,int param_4)

{
  byte *pbVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (((((*param_1 & 7) != 0) || ((param_1[1] & 0xfc) != 0xfc)) ||
      (*(byte *)((int)param_1 + 5) != 0x78)) ||
     ((*(byte *)((int)param_1 + 6) != 0xe5 || (*(byte *)((int)param_1 + 7) != 0x77)))) {
    FUN_0400a810("((AreaData_Free*)area)->Header.IsFreeAreaValid()",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/heapImplementation.cpp"
                 ,0x48e,"void SetupNewlyAllocatedArea(AreaData_Free*, eON_Subheap*, SIZE_T, SIZE_T)"
                );
  }
  puVar2 = (uint *)param_1[3];
  if (puVar2 == (uint *)0x0) {
    puVar5 = (undefined4 *)param_1[2];
    if (puVar5[-2] == 0) {
      puVar4 = (undefined4 *)*puVar5;
      puVar5[2] = 0;
      for (; (puVar4 != (undefined4 *)0x0 && (puVar4[-2] == 0)); puVar4 = (undefined4 *)*puVar4) {
        puVar4[2] = 0;
      }
    }
  }
  else {
    if (puVar2[-2] == 0) {
      puVar5 = (undefined4 *)param_1[2];
      if (puVar5[-2] == 0) {
        puVar4 = (undefined4 *)*puVar5;
        uVar3 = puVar2[2];
        puVar5[2] = uVar3;
        for (; (puVar4 != (undefined4 *)0x0 && (puVar4[-2] == 0)); puVar4 = (undefined4 *)*puVar4) {
          puVar4[2] = uVar3;
        }
      }
    }
    else {
      puVar5 = (undefined4 *)param_1[2];
    }
    *puVar2 = (uint)puVar5;
    puVar5 = (undefined4 *)param_1[2];
  }
  puVar5[1] = puVar2;
  uVar3 = *param_1;
  *(byte *)(param_1 + 1) = (byte)param_1[1] & 2 | 0xfc;
  if (uVar3 < param_3 + 0x18) {
    pbVar1 = (byte *)((int)param_1 + uVar3);
    param_3 = uVar3;
    if (pbVar1 < (byte *)(param_2 + *(int *)(param_2 + 8))) {
      pbVar1[4] = pbVar1[4] & 1 | 0xfc;
      param_3 = *param_1;
    }
  }
  else {
    Subheap_SetupMemoryAsFreeArea();
    *param_1 = param_3;
  }
  *(byte *)((int)param_1 + 5) = 0xe5;
  *(byte *)((int)param_1 + 6) = 0;
  if (0xff < param_3 - param_4) {
    FUN_0400a810("usedArea->Header.AreaSize - newAreaDataSize <= (BYTE) -1",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/heapImplementation.cpp"
                 ,0x497,"void SetupNewlyAllocatedArea(AreaData_Free*, eON_Subheap*, SIZE_T, SIZE_T)"
                );
    param_3 = *param_1;
  }
  *(char *)((int)param_1 + 7) = (char)param_3 - (char)param_4;
  return;
}

// --- Subheap_FreeArea @0x04136b80 ---
/* source: heapImplementation */

void __regparm3 Subheap_FreeArea(int *param_1,uint *param_2)

{
  byte bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  if (((((*param_2 & 7) != 0) || (bVar1 = (byte)param_2[1], (bVar1 & 0xfc) != 0xfc)) ||
      (*(byte *)((int)param_2 + 5) != 0xe5)) || (*(byte *)((int)param_2 + 6) != 0)) {
    FUN_0400a810("((AreaData_Allocated*)usedArea)->Header.IsUsedAreaValid()",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/heapImplementation.cpp"
                 ,0x302,"void Subheap_FreeArea(eON_Subheap*, AreaData_Allocated*)");
    bVar1 = (byte)param_2[1];
  }
  if ((bVar1 & 2) != 0) {
    param_2 = (uint *)param_2[-1];
    if ((((*param_2 & 7) != 0) || ((param_2[1] & 0xfc) != 0xfc)) ||
       ((*(byte *)((int)param_2 + 5) != 0x78 ||
        ((*(byte *)((int)param_2 + 6) != 0xe5 || (*(byte *)((int)param_2 + 7) != 0x77)))))) {
      FUN_0400a810("((AreaData_Free*)previousArea)->Header.IsFreeAreaValid()",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/heapImplementation.cpp"
                   ,0x30b,"void Subheap_FreeArea(eON_Subheap*, AreaData_Allocated*)");
    }
    puVar2 = (uint *)param_2[3];
    if (puVar2 == (uint *)0x0) {
      puVar6 = (undefined4 *)param_2[2];
      if (puVar6[-2] == 0) {
        puVar6[2] = 0;
        for (puVar3 = (undefined4 *)*puVar6; (puVar3 != (undefined4 *)0x0 && (puVar3[-2] == 0));
            puVar3 = (undefined4 *)*puVar3) {
          puVar3[2] = 0;
        }
      }
    }
    else {
      if (puVar2[-2] == 0) {
        puVar6 = (undefined4 *)param_2[2];
        if (puVar6[-2] == 0) {
          uVar7 = puVar2[2];
          puVar6[2] = uVar7;
          for (puVar3 = (undefined4 *)*puVar6; (puVar3 != (undefined4 *)0x0 && (puVar3[-2] == 0));
              puVar3 = (undefined4 *)*puVar3) {
            puVar3[2] = uVar7;
          }
        }
      }
      else {
        puVar6 = (undefined4 *)param_2[2];
      }
      *puVar2 = (uint)puVar6;
      puVar6 = (undefined4 *)param_2[2];
    }
    puVar6[1] = puVar2;
  }
  Subheap_SetupMemoryAsFreeArea();
  if ((byte *)(param_1[2] + (int)param_1) <= (byte *)(*param_2 + (int)param_2)) {
    if ((param_2 == (uint *)(param_1 + 6)) && (*(int **)(param_1[5] + 0xc) != param_1)) {
      piVar5 = (int *)param_1[9];
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)param_1[8];
        do {
          if (piVar5[-2] != 0) break;
          piVar5[2] = 0;
          piVar5 = (int *)*piVar5;
        } while (piVar5 != (int *)0x0);
      }
      else {
        if (piVar5[-2] == 0) {
          puVar6 = (undefined4 *)param_1[8];
          if (puVar6[-2] == 0) {
            iVar4 = piVar5[2];
            puVar6[2] = iVar4;
            for (puVar3 = (undefined4 *)*puVar6; (puVar3 != (undefined4 *)0x0 && (puVar3[-2] == 0));
                puVar3 = (undefined4 *)*puVar3) {
              puVar3[2] = iVar4;
            }
          }
        }
        else {
          puVar6 = (undefined4 *)param_1[8];
        }
        *piVar5 = (int)puVar6;
      }
      *(uint *)(param_2[2] + 4) = param_2[3];
      piVar5 = (int *)param_1[1];
      *piVar5 = *param_1;
      *(int **)(*param_1 + 4) = piVar5;
      eON_VirtualFree(param_1,0,0x8000);
    }
    else {
      uVar7 = ((uint)(&DAT_0001000f + ((int)param_2 - (int)param_1)) & 0xffff0000) + 0x10000;
      if (uVar7 < (uint)param_1[3]) {
        uVar7 = param_1[3];
      }
      if ((uVar7 < (uint)param_1[4]) &&
         (iVar4 = eON_VirtualFree((int)param_1 + uVar7,param_1[4] - uVar7,0x4000), iVar4 != 0)) {
        param_1[4] = uVar7;
        return;
      }
    }
  }
  return;
}

// --- Subheap_SetupMemoryAsFreeArea @0x04136850 ---
/* source: heapImplementation */

void __regparm3 Subheap_SetupMemoryAsFreeArea(int param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  byte *pbVar10;
  undefined4 *local_28;
  
  pbVar10 = (byte *)((int)param_2 + param_3);
  pbVar5 = (byte *)(*(int *)(param_1 + 8) + param_1);
  if ((pbVar10 < pbVar5) && ((pbVar10[4] & 1) != 0)) {
    if (((*pbVar10 & 7) != 0) ||
       (((((pbVar10[4] & 0xfc) != 0xfc || (pbVar10[5] != 0x78)) || (pbVar10[6] != 0xe5)) ||
        (pbVar10[7] != 0x77)))) {
      FUN_0400a810("((AreaData_Free*)nextArea)->Header.IsFreeAreaValid()",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/heapImplementation.cpp"
                   ,0x2ab,"void Subheap_SetupMemoryAsFreeArea(eON_Subheap*, LPVOID, SIZE_T)");
    }
    piVar3 = *(int **)(pbVar10 + 0xc);
    if (piVar3 == (int *)0x0) {
      puVar8 = *(undefined4 **)(pbVar10 + 8);
      if (puVar8[-2] == 0) {
        puVar4 = (undefined4 *)*puVar8;
        puVar8[2] = 0;
        for (; (puVar4 != (undefined4 *)0x0 && (puVar4[-2] == 0)); puVar4 = (undefined4 *)*puVar4) {
          puVar4[2] = 0;
        }
      }
    }
    else {
      if (piVar3[-2] == 0) {
        local_28 = *(undefined4 **)(pbVar10 + 8);
        if (local_28[-2] == 0) {
          iVar2 = piVar3[2];
          local_28[2] = iVar2;
          for (puVar8 = (undefined4 *)*local_28; (puVar8 != (undefined4 *)0x0 && (puVar8[-2] == 0));
              puVar8 = (undefined4 *)*puVar8) {
            puVar8[2] = iVar2;
          }
        }
      }
      else {
        local_28 = *(undefined4 **)(pbVar10 + 8);
      }
      *piVar3 = (int)local_28;
      puVar8 = *(undefined4 **)(pbVar10 + 8);
    }
    puVar8[1] = piVar3;
    param_3 = param_3 + *(int *)pbVar10;
    pbVar10 = pbVar10 + *(int *)pbVar10;
  }
  if (pbVar5 < pbVar10) {
    FUN_0400a810("addressPastMemory <= subheapEndAddress",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/heapImplementation.cpp"
                 ,0x2bd,"void Subheap_SetupMemoryAsFreeArea(eON_Subheap*, LPVOID, SIZE_T)");
  }
  if (pbVar10 != pbVar5) {
    pbVar10[4] = pbVar10[4] | 0xfe;
    *(uint **)(pbVar10 + -4) = param_2;
  }
  puVar1 = param_2 + 2;
  *(undefined1 *)((int)param_2 + 5) = 0x78;
  *(undefined1 *)((int)param_2 + 6) = 0xe5;
  *(undefined1 *)((int)param_2 + 7) = 0x77;
  *param_2 = param_3;
  *(undefined1 *)(param_2 + 1) = 0xfd;
  if (param_3 < 0x18) {
    FUN_0400a810("totalAreaSize >= 24",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/heapImplementation.cpp"
                 ,0x215,"SIZE_T GetFreeAreasListIndex(SIZE_T)");
  }
  iVar2 = *(int *)(param_1 + 0x14);
  uVar7 = (param_3 >> 3) - 3;
  uVar9 = 0x1fe;
  if (uVar7 < 0x1ff) {
    uVar9 = uVar7;
  }
  iVar6 = iVar2 + 0x10 + uVar9 * 0x14;
  if (*(int *)(iVar6 + 4) == 0) {
    puVar8 = *(undefined4 **)(iVar6 + 0xc);
    *(int *)(iVar6 + 0x14) = iVar6 + 4;
    for (; (puVar8 != (undefined4 *)0x0 && (puVar8[-2] == 0)); puVar8 = (undefined4 *)*puVar8) {
      puVar8[2] = iVar6 + 4;
    }
  }
  if (pbVar10 == pbVar5) {
    uVar7 = iVar6 + 0xcU;
    if (uVar9 != 0x1fe) {
      iVar2 = iVar2 + 0x10 + (uVar9 * 5 + 5) * 4;
      param_2[3] = iVar2 + 0xc;
      param_2[2] = *(uint *)(iVar2 + 0xc);
      iVar6 = *(int *)(iVar2 + 0xc);
      if (iVar6 == 0) {
        FUN_0400a810("rootLink2->Prev",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/heapImplementation.cpp"
                     ,0x2e2,"void Subheap_SetupMemoryAsFreeArea(eON_Subheap*, LPVOID, SIZE_T)");
        iVar6 = *(int *)(iVar2 + 0xc);
      }
      *(uint **)(iVar6 + 4) = puVar1;
      *(uint **)(iVar2 + 0xc) = puVar1;
      return;
    }
    do {
      uVar9 = uVar7;
      uVar7 = *(uint *)(uVar9 + 4);
    } while (*(uint *)(uVar9 + 4) != 0);
    param_2[2] = uVar9;
    param_2[3] = 0;
    *(uint **)(uVar9 + 4) = puVar1;
    return;
  }
  uVar9 = *(uint *)(iVar6 + 0x10);
  param_2[2] = iVar6 + 0xcU;
  param_2[3] = uVar9;
  if (*(int **)(iVar6 + 0x10) != (int *)0x0) {
    **(int **)(iVar6 + 0x10) = (int)puVar1;
  }
  *(uint **)(iVar6 + 0x10) = puVar1;
  return;
}

