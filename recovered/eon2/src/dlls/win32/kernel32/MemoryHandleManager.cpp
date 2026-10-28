// Recovered source: eon2/src/dlls/win32/kernel32/MemoryHandleManager.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- MemoryHandleManager::Free @0x0413f4b0 ---
/* source: MemoryHandleManager */

uint MemoryHandleManager_0413f4b0(int *param_1,uint param_2)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  int *piVar2;
  int iVar3;
  ushort uVar4;
  undefined4 *puVar5;
  byte local_29;
  
  if ((param_2 & 0xffff0000) != 0) {
    eON_GetProcessHeap();
    iVar1 = eON_HeapFree();
    if (iVar1 != 0) {
      param_2 = 0;
    }
    return param_2;
  }
  if (param_2 != 0) {
    __mutex = (pthread_mutex_t *)(param_1 + 2);
    pthread_mutex_lock(__mutex);
    uVar4 = (ushort)(param_2 - 1);
    if (uVar4 < *(ushort *)(param_1 + 1)) {
      iVar1 = (param_2 - 1 & 0xffff) * 8;
      piVar2 = (int *)(iVar1 + *param_1);
      local_29 = *(byte *)((int)piVar2 + 5);
      if ((local_29 & 1) != 0) {
        puVar5 = (undefined4 *)&stack0xffffffc4;
        if (*piVar2 != 0) {
          eON_GetProcessHeap();
          iVar3 = eON_HeapFree();
          if (iVar3 == 0) {
            pthread_mutex_unlock(__mutex);
            return param_2;
          }
          if (*(ushort *)(param_1 + 1) <= uVar4) {
            FUN_0400a810();
          }
          piVar2 = (int *)(iVar1 + *param_1);
          local_29 = *(byte *)((int)piVar2 + 5);
          puVar5 = (undefined4 *)&stack0xffffffb8;
          if ((local_29 & 1) == 0) {
            FUN_0400a810();
            piVar2 = (int *)(iVar1 + *param_1);
            local_29 = *(byte *)((int)piVar2 + 5);
            puVar5 = (undefined4 *)&stack0xffffffb8;
          }
        }
        *(byte *)((int)piVar2 + 5) = local_29 & 0xfe;
        *puVar5 = __mutex;
        puVar5[-1] = 0x413f5dc;
        pthread_mutex_unlock((pthread_mutex_t *)*puVar5);
        return 0;
      }
    }
    pthread_mutex_unlock(__mutex);
    eON_SetLastError();
    return param_2;
  }
  return 0;
}

// --- MemoryHandleManager::FreeSlot @0x0413fef0 ---
/* source: MemoryHandleManager */

void MemoryHandleManager_0413fef0(int *param_1,ushort param_2)

{
  int iVar1;
  byte bVar2;
  
  if (*(ushort *)(param_1 + 1) <= param_2) {
    FUN_0400a810("i < mBufferSize",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/MemoryHandleManager.cpp"
                 ,0x18d,"void MemoryHandleManager::FreeSlot(WORD)");
  }
  iVar1 = *param_1 + (uint)param_2 * 8;
  bVar2 = *(byte *)(iVar1 + 5);
  if ((bVar2 & 1) == 0) {
    FUN_0400a810("mBuffer[i].Used",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/MemoryHandleManager.cpp"
                 ,0x18e,"void MemoryHandleManager::FreeSlot(WORD)");
    iVar1 = *param_1 + (uint)param_2 * 8;
    bVar2 = *(byte *)(iVar1 + 5);
  }
  *(byte *)(iVar1 + 5) = bVar2 & 0xfe;
  return;
}

// --- MemoryHandleManager::GetFreeSlot @0x0413faa0 ---
/* source: MemoryHandleManager */

uint MemoryHandleManager__GetFreeSlot(int *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 local_4c [4];
  undefined1 local_48 [8];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  uint local_24;
  int *local_20;
  
  iVar6 = 0;
  uVar4 = 0;
  puVar5 = &local_3c;
  uVar1 = *(ushort *)(param_1 + 1);
  iVar3 = *param_1;
  if (uVar1 == 0) {
LAB_0413faea:
    local_24 = uVar1 + 0x10;
    *(short *)(param_1 + 1) = (short)local_24;
    local_20 = param_1;
    if (iVar3 == 0) {
      local_40 = 0x413fbb5;
      local_3c = eON_GetProcessHeap();
      local_38 = 8;
      local_34 = (local_24 & 0xffff) << 3;
      local_40 = 0x413fbd2;
      iVar3 = HeapAlloc();
      puVar5 = (undefined4 *)local_48;
      *local_20 = iVar3;
    }
    else {
      local_40 = 0x413fb04;
      local_3c = eON_GetProcessHeap();
      local_38 = 8;
      local_30 = (local_24 & 0xffff) << 3;
      local_40 = 0x413fb25;
      local_34 = iVar3;
      iVar3 = HeapRealloc();
      puVar5 = (undefined4 *)local_4c;
      *local_20 = iVar3;
    }
    if (iVar3 == 0) {
      puVar5[3] = "WORD MemoryHandleManager::GetFreeSlot()";
      puVar5[2] = 0x17f;
      puVar5[1] = 
      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/MemoryHandleManager.cpp"
      ;
      *puVar5 = "mBuffer";
      puVar5[-1] = 0x413fbab;
      FUN_0400a810();
    }
  }
  else {
    if ((*(byte *)(iVar3 + 5) & 1) == 0) goto LAB_0413fb37;
    iVar2 = 8;
    do {
      iVar6 = iVar2;
      uVar4 = uVar4 + 1;
      if ((ushort)uVar4 == uVar1) {
        iVar6 = (uVar4 & 0xffff) << 3;
        goto LAB_0413faea;
      }
      local_20 = param_1;
      iVar2 = iVar6 + 8;
    } while ((*(byte *)(iVar3 + 5 + iVar6) & 1) != 0);
  }
  param_1 = local_20;
  if (0xfffd < (ushort)uVar4) {
    puVar5[3] = "WORD MemoryHandleManager::GetFreeSlot()";
    puVar5[2] = 0x182;
    puVar5[1] = 
    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/MemoryHandleManager.cpp"
    ;
    *puVar5 = "i < 0xFFFE";
    puVar5[-1] = 0x413fb7f;
    FUN_0400a810();
    param_1 = local_20;
  }
LAB_0413fb37:
  puVar7 = (undefined4 *)(iVar6 + *param_1);
  *(byte *)((int)puVar7 + 5) = *(byte *)((int)puVar7 + 5) | 1;
  *(undefined1 *)(puVar7 + 1) = 0;
  *puVar7 = 0;
  return uVar4;
}

// --- MemoryHandleManager::Lock @0x0413f660 ---
/* source: MemoryHandleManager */

uint MemoryHandleManager_0413f660(int *param_1,uint param_2)

{
  pthread_mutex_t *__mutex;
  uint *puVar1;
  char cVar2;
  uint uVar3;
  ushort uVar4;
  
  if ((param_2 & 0xffff0000) != 0) {
    return param_2;
  }
  if (param_2 != 0) {
    __mutex = (pthread_mutex_t *)(param_1 + 2);
    uVar4 = (short)param_2 - 1;
    pthread_mutex_lock(__mutex);
    if ((uVar4 < *(ushort *)(param_1 + 1)) &&
       (puVar1 = (uint *)(*param_1 + (uint)uVar4 * 8), (*(byte *)((int)puVar1 + 5) & 1) != 0)) {
      uVar3 = *puVar1;
      if (uVar3 == 0) {
        pthread_mutex_unlock(__mutex);
        eON_SetLastError(0x9d);
      }
      else {
        cVar2 = (char)puVar1[1];
        if (cVar2 == -1) {
          FUN_0400a810("buf.LockCount < 255",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/MemoryHandleManager.cpp"
                       ,0xf0,"void* MemoryHandleManager::Lock(MemoryManagerHandle)");
          cVar2 = (char)puVar1[1];
          uVar3 = *puVar1;
        }
        *(char *)(puVar1 + 1) = cVar2 + '\x01';
        pthread_mutex_unlock(__mutex);
      }
      return uVar3;
    }
    pthread_mutex_unlock(__mutex);
  }
  eON_SetLastError(6);
  return 0;
}

