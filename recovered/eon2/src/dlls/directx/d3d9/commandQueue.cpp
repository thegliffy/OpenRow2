// Recovered source: eon2/src/dlls/directx/d3d9/commandQueue.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- D3D9CommandQueue::CommandSubmitted @0x0404fd50 ---
/* source: commandQueue */

void D3D9CommandQueue__CommandSubmitted(int param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    FUN_0400a810("InCommandSubmission",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/commandQueue.cpp"
                 ,0x11c,"void D3D9CommandQueue::CommandSubmitted()");
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  uVar3 = *(uint *)(param_1 + 0x40);
  iVar5 = *(int *)(param_1 + 0x44);
  do {
    iVar4 = iVar5;
    uVar2 = uVar3;
    LOCK();
    lVar1 = *(longlong *)(param_1 + 0x40);
    bVar6 = CONCAT44(iVar4,uVar2) == lVar1;
    if (bVar6) {
      *(longlong *)(param_1 + 0x40) = CONCAT44(iVar4 + (uint)(0xfffffffe < uVar2),uVar2 + 1);
      uVar3 = uVar2;
      iVar5 = iVar4;
    }
    else {
      uVar3 = (uint)lVar1;
      iVar5 = (int)((ulonglong)lVar1 >> 0x20);
    }
    UNLOCK();
  } while (!bVar6);
  if ((iVar4 - *(int *)(param_1 + 0x84) == (uint)(uVar2 < *(uint *)(param_1 + 0x80))) &&
     (uVar2 - *(uint *)(param_1 + 0x80) < 2)) {
    eON_SetEvent(*(undefined4 *)(param_1 + 0x1c));
  }
  return;
}

// --- D3D9CommandQueue::D3D9CommandQueue @0x0404f850 ---
/* source: commandQueue */

void D3D9CommandQueue__D3D9CommandQueue(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  synch_criticalsection_04145d20(param_1);
  iVar1 = eON_CreateEventA(0,1,0,0);
  *(int *)(param_1 + 0x1c) = iVar1;
  if (iVar1 == 0) {
    FUN_0400a810("mOpenGLThreadWaitEvent",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/commandQueue.cpp"
                 ,0x7e,"D3D9CommandQueue::D3D9CommandQueue()");
  }
  uVar2 = eON_VirtualAlloc(0,0x2000,0x1000,4);
  *(undefined4 *)(param_1 + 0x8c) = uVar2;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  return;
}

// --- D3D9CommandQueue::GetNextCommandPointer @0x0404fa10 ---
/* source: commandQueue */

int D3D9CommandQueue__GetNextCommandPointer
              (int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    FUN_0400a810("MutexLocked",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/commandQueue.cpp"
                 ,0xa5,"void* D3D9CommandQueue::GetNextCommandPointer(LPVOID, DWORD, ULONG)");
    cVar1 = *(char *)(param_1 + 0x20);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x20);
  }
  if (cVar1 != '\0') {
    FUN_0400a810("!InCommandSubmission",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/commandQueue.cpp"
                 ,0xa6,"void* D3D9CommandQueue::GetNextCommandPointer(LPVOID, DWORD, ULONG)");
  }
  if (0x1ff0 < param_4) {
    FUN_0400a810("commandSize <= ( 0x1000 * 2 - ( 2 * sizeof(LPVOID) ) ) - ( sizeof(LPVOID) + sizeof(DWORD) )"
                 ,
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/commandQueue.cpp"
                 ,0xa8,"void* D3D9CommandQueue::GetNextCommandPointer(LPVOID, DWORD, ULONG)");
  }
  puVar4 = *(undefined4 **)(param_1 + 0x4c);
  uVar3 = (*(int *)(param_1 + 0x48) + 0x1ff8) - (int)puVar4;
  if (uVar3 < param_4 + 8) {
    if (7 < uVar3) {
      *puVar4 = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x4c) + 4) = 0;
    }
    if (*(int *)(param_1 + 0x18) == 0) {
      puVar4 = (undefined4 *)eON_VirtualAlloc(0,0x2000,0x1000,4);
    }
    else {
      EnterCriticalSection(param_1);
      puVar4 = *(undefined4 **)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0x18) = puVar4[0x7ff];
      LeaveCriticalSection(param_1);
    }
    puVar4[0x7ff] = 0;
    puVar4[0x7fe] = 0;
    puVar4[0x7ff] = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 **)(*(int *)(param_1 + 0x48) + 0x1ff8) = puVar4;
    *(undefined4 **)(param_1 + 0x48) = puVar4;
    *(undefined4 **)(param_1 + 0x4c) = puVar4;
  }
  *puVar4 = param_2;
  iVar2 = *(int *)(param_1 + 0x4c);
  *(undefined4 *)(iVar2 + 4) = param_3;
  *(uint *)(param_1 + 0x4c) = param_4 + 8 + iVar2;
  *(undefined1 *)(param_1 + 0x20) = 1;
  return iVar2 + 8;
}

// --- D3D9CommandQueue::TryExecuteNextCommand @0x0404fba0 ---
/* source: commandQueue */

undefined4 D3D9CommandQueue__TryExecuteNextCommand(char *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  int *piVar7;
  char **ppcVar8;
  bool bVar9;
  undefined4 local_44;
  char *local_40;
  char *local_3c;
  char *local_38;
  undefined4 local_34;
  char *local_30;
  int local_24;
  int local_20;
  
  ppcVar8 = &local_3c;
  if (*(int *)(param_1 + 0x44) == *(int *)(param_1 + 0x84) &&
      *(int *)(param_1 + 0x40) == *(int *)(param_1 + 0x80)) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x8c);
  piVar7 = *(int **)(param_1 + 0x88);
  if (7 < (uint)((iVar3 + 0x1ff8) - (int)piVar7)) {
    iVar2 = piVar7[1];
    iVar5 = *piVar7;
    piVar7 = piVar7 + 2;
    *(int **)(param_1 + 0x88) = piVar7;
    if (iVar2 != 0) goto LAB_0404fc3f;
    if (iVar5 != 0) {
      local_30 = "WINBOOL D3D9CommandQueue::TryExecuteNextCommand()";
      local_34 = 0xda;
      local_38 = 
      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/commandQueue.cpp";
      local_3c = "targetObject == __null";
      local_40 = (char *)0x404fcf2;
      FUN_0400a810();
      iVar3 = *(int *)(param_1 + 0x8c);
    }
  }
  piVar7 = *(int **)(iVar3 + 0x1ff8);
  if (piVar7 == (int *)0x0) {
    local_30 = "WINBOOL D3D9CommandQueue::TryExecuteNextCommand()";
    local_34 = 0xe3;
    local_38 = 
    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/commandQueue.cpp";
    local_3c = "nextBuffer";
    local_40 = (char *)0x404fd44;
    FUN_0400a810();
  }
  piVar7[0x7ff] = 0;
  iVar3 = *(int *)(param_1 + 0x8c);
  local_3c = param_1;
  local_40 = (char *)0x404fc0b;
  EnterCriticalSection();
  *(undefined4 *)(iVar3 + 0x1ffc) = *(undefined4 *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = iVar3;
  local_40 = param_1;
  local_44 = 0x404fc22;
  LeaveCriticalSection();
  *(int **)(param_1 + 0x88) = piVar7;
  iVar2 = piVar7[1];
  *(int **)(param_1 + 0x8c) = piVar7;
  ppcVar8 = (char **)&local_44;
  iVar5 = *piVar7;
  piVar7 = piVar7 + 2;
  *(int **)(param_1 + 0x88) = piVar7;
LAB_0404fc3f:
  pcVar6 = *(code **)(&DAT_042e71c0 + iVar2 * 8);
  iVar3 = *(int *)(&DAT_042e71c4 + iVar2 * 8);
  if (((uint)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(int *)(iVar5 + iVar3) + -1);
  }
  ppcVar8[2] = (char *)piVar7;
  ppcVar8[1] = (char *)iVar2;
  *ppcVar8 = (char *)(iVar5 + iVar3);
  ppcVar8[-1] = (char *)0x404fc65;
  iVar3 = (*pcVar6)();
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + iVar3;
  uVar4 = *(uint *)(param_1 + 0x80);
  iVar3 = *(int *)(param_1 + 0x84);
  do {
    local_24 = uVar4 + 1;
    local_20 = iVar3 + (uint)(0xfffffffe < uVar4);
    LOCK();
    lVar1 = *(longlong *)(param_1 + 0x80);
    bVar9 = CONCAT44(iVar3,uVar4) == lVar1;
    if (bVar9) {
      *(longlong *)(param_1 + 0x80) = CONCAT44(local_20,local_24);
    }
    else {
      iVar3 = (int)((ulonglong)lVar1 >> 0x20);
      uVar4 = (uint)lVar1;
    }
    UNLOCK();
  } while (!bVar9);
  if (local_20 != *(int *)(param_1 + 0x44) || local_24 != *(int *)(param_1 + 0x40)) {
    return 1;
  }
  *ppcVar8 = (char *)*(undefined4 *)(param_1 + 0x1c);
  ppcVar8[-1] = (char *)0x404fd0b;
  eON_ResetEvent();
  return 1;
}

// --- D3D9CommandQueue::~D3D9CommandQueue @0x0404f930 ---
/* source: commandQueue */

void D3D9CommandQueue___D3D9CommandQueue(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined1 local_1c [16];
  
  piVar4 = (int *)local_1c;
  iVar2 = *(int *)(param_1 + 0x48);
  piVar3 = (int *)local_1c;
  if (*(int *)(param_1 + 0x48) != 0) {
    while( true ) {
      iVar1 = *(int *)(iVar2 + 0x1ffc);
      piVar3[2] = 0x8000;
      piVar3[1] = 0;
      *piVar3 = iVar2;
      piVar3[-1] = 0x404f96b;
      eON_VirtualFree();
      piVar4 = piVar3 + -3;
      if (iVar1 == 0) break;
      *(int *)(param_1 + 0x48) = iVar1;
      iVar2 = iVar1;
      piVar3 = piVar3 + -3;
    }
    if (*(int *)(param_1 + 0x8c) != *(int *)(param_1 + 0x48)) {
      *piVar3 = (int)"D3D9CommandQueue::~D3D9CommandQueue()";
      piVar3[-1] = 0x8e;
      piVar3[-2] = (int)
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/commandQueue.cpp"
      ;
      piVar3[-3] = (int)"CommandBufferQueueTail == CommandBufferQueueHead";
      piVar3[-4] = 0x404f9a1;
      FUN_0400a810();
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x1ffc);
    piVar4[2] = 0x8000;
    piVar4[1] = 0;
    *piVar4 = iVar2;
    piVar4[-1] = 0x404f9e0;
    eON_VirtualFree();
    piVar4 = piVar4 + -3;
    *(int *)(param_1 + 0x18) = iVar1;
    iVar2 = iVar1;
  }
  *piVar4 = *(int *)(param_1 + 0x1c);
  piVar4[-1] = 0x404f9f5;
  eON_CloseHandle();
  piVar4[-1] = param_1;
  piVar4[-2] = 0x404fa00;
  eON_DeleteCriticalSection();
  return;
}

