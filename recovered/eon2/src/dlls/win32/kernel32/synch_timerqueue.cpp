// Recovered source: eon2/src/dlls/win32/kernel32/synch_timerqueue.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- TimerQueueThreadFunction @0x04146fe0 ---
/* WARNING: Type propagation algorithm not settling */
/* source: synch_timerqueue */

undefined4 TimerQueueThreadFunction(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  int local_58 [2];
  char *local_50;
  int local_34;
  undefined4 *local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 *local_18;
  
  local_18 = &param_1;
  local_50 = "E.TQueue";
  local_24 = param_1;
  local_58[1] = 0x4147005;
  eON_SetThreadName();
  local_50 = (char *)(local_24 + 4);
  local_58[1] = 0x4147016;
  local_2c = (int)local_50;
  EnterCriticalSection();
  piVar7 = local_58 + 1;
  do {
    piVar7[0xffffffff] = 0x4147025;
    local_34 = eON_GetTickCount();
    if (*(undefined4 **)(local_24 + 0x24) == (undefined4 *)0x0) {
LAB_041472f0:
      iVar4 = -1;
LAB_041471bb:
      *piVar7 = local_2c;
      piVar7[-1] = 0x41471c6;
      LeaveCriticalSection();
      *piVar7 = iVar4;
      piVar7[-1] = *(undefined4 *)(local_24 + 0x20);
      piVar7[-2] = 0x41471db;
      eON_WaitForSingleObject();
      piVar7[-3] = local_2c;
      piVar7[-4] = 0x41471e9;
      EnterCriticalSection();
      piVar8 = piVar7 + -4;
    }
    else {
      local_28 = 0x7fffffff;
      local_30 = (undefined4 *)0x0;
      puVar6 = (undefined4 *)0x0;
      puVar9 = *(undefined4 **)(local_24 + 0x24);
      do {
        while (*(char *)(puVar9 + 7) != '\0') {
          puVar1 = (undefined4 *)puVar9[6];
          if (puVar6 == (undefined4 *)0x0) {
            *(undefined4 **)(local_24 + 0x24) = puVar1;
          }
          else {
            puVar6[6] = puVar1;
          }
          if (puVar9[4] != 0) {
            *piVar7 = puVar9[4];
            piVar7[-1] = 0x4147065;
            eON_SetEvent();
            piVar7 = piVar7 + -1;
          }
          *piVar7 = (int)puVar9;
          piVar7[-1] = 0x4147072;
          free((void *)*piVar7);
          puVar9 = puVar1;
          if (puVar1 == (undefined4 *)0x0) goto LAB_041470a9;
        }
        if (((*(char *)((int)puVar9 + 0x1d) == '\0') && (*(char *)((int)puVar9 + 0x1e) == '\0')) &&
           (puVar9[5] - local_34 < local_28)) {
          local_28 = puVar9[5] - local_34;
          local_30 = puVar9;
        }
        piVar8 = puVar9 + 6;
        puVar6 = puVar9;
        puVar9 = (undefined4 *)*piVar8;
      } while ((undefined4 *)*piVar8 != (undefined4 *)0x0);
LAB_041470a9:
      puVar6 = local_30;
      if (0 < local_28) {
        iVar4 = local_28;
        if (local_30 == (undefined4 *)0x0) goto LAB_041472f0;
        goto LAB_041471bb;
      }
      if (local_30 == (undefined4 *)0x0) goto LAB_041472f0;
      if ((*(byte *)(local_30 + 3) & 0x20) == 0) {
        piVar7[3] = (int)"DWORD TimerQueueThreadFunction(LPVOID)";
        piVar7[2] = 0x9c;
        piVar7[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synch_timerqueue.cpp"
        ;
        *piVar7 = (int)"nextTimer->Flags & 0x00000020";
        piVar7[-1] = 0x414721c;
        FUN_0400a810();
      }
      *(undefined1 *)((int)puVar6 + 0x1d) = 1;
      *piVar7 = local_2c;
      piVar7[-1] = 0x41470dd;
      LeaveCriticalSection();
      *piVar7 = 1;
      piVar7[-1] = puVar6[1];
      pcVar2 = (code *)*puVar6;
      piVar7[-2] = 0x41470f0;
      (*pcVar2)();
      piVar7[-3] = local_2c;
      piVar7[-4] = 0x41470fe;
      EnterCriticalSection();
      *(undefined1 *)((int)puVar6 + 0x1d) = 0;
      piVar8 = piVar7 + -4;
      if (*(char *)(puVar6 + 7) == '\0') {
        if (puVar6[2] == 0) {
          *(undefined1 *)((int)puVar6 + 0x1e) = 1;
          piVar8 = piVar7 + -4;
        }
        else {
          piVar7[-5] = 0x41472e5;
          iVar4 = eON_GetTickCount();
          puVar6[5] = iVar4 + puVar6[2];
        }
      }
      else {
        puVar9 = *(undefined4 **)(local_24 + 0x24);
        if (puVar9 == (undefined4 *)0x0) {
          piVar7[-1] = (int)"void RemoveTimerFromQueue(TimerQueue*, TimerQueueTimer*)";
          piVar7[-2] = 0x4e;
          piVar7[-3] = (int)
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synch_timerqueue.cpp"
          ;
          piVar7[-4] = (int)"queue->TimersList";
          piVar7[-5] = 0x414735f;
          FUN_0400a810();
          puVar9 = *(undefined4 **)(local_24 + 0x24);
        }
        if (puVar6 == puVar9) {
          *(undefined4 *)(local_24 + 0x24) = puVar6[6];
        }
        else {
          puVar1 = (undefined4 *)puVar9[6];
          while (puVar5 = puVar1, puVar6 != puVar5) {
            if (puVar5 == (undefined4 *)0x0) {
              piVar7[-1] = (int)"void RemoveTimerFromQueue(TimerQueue*, TimerQueueTimer*)";
              piVar7[-2] = 0x56;
              piVar7[-3] = (int)
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synch_timerqueue.cpp"
              ;
              piVar7[-4] = (int)"prev->Next";
              piVar7[-5] = 0x414731e;
              FUN_0400a810();
              puVar5 = (undefined4 *)puVar9[6];
            }
            puVar9 = puVar5;
            puVar1 = (undefined4 *)puVar5[6];
          }
          puVar9[6] = puVar6[6];
        }
        piVar8 = piVar7 + -4;
        if (puVar6[4] != 0) {
          piVar7[-4] = puVar6[4];
          piVar7[-5] = 0x4147278;
          eON_SetEvent();
          piVar8 = piVar7 + -5;
        }
        *piVar8 = (int)puVar6;
        piVar8[-1] = 0x4147283;
        free((void *)*piVar8);
      }
    }
    iVar4 = local_24;
    piVar7 = piVar8;
    if (*(char *)(local_24 + 0x28) != '\0') {
      iVar3 = *(int *)(local_24 + 0x24);
      while (iVar3 != 0) {
        if (*(char *)(iVar3 + 0x1d) != '\0') {
          piVar8[3] = (int)"DWORD TimerQueueThreadFunction(LPVOID)";
          piVar8[2] = 0xcb;
          piVar8[1] = (int)
                      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synch_timerqueue.cpp"
          ;
          *piVar8 = (int)"!timer->InCallback";
          piVar8[-1] = 0x4147197;
          FUN_0400a810();
        }
        *(undefined4 *)(iVar4 + 0x24) = *(undefined4 *)(iVar3 + 0x18);
        if (*(int *)(iVar3 + 0x10) != 0) {
          *piVar8 = *(int *)(iVar3 + 0x10);
          piVar8[-1] = 0x4147155;
          eON_SetEvent();
          piVar8 = piVar8 + -1;
        }
        *piVar8 = iVar3;
        piVar8[-1] = 0x4147160;
        free((void *)*piVar8);
        iVar3 = *(int *)(iVar4 + 0x24);
      }
      *piVar8 = *(int *)(local_24 + 0x20);
      piVar8[-1] = 0x414729e;
      eON_CloseHandle();
      piVar8[-1] = local_2c;
      piVar8[-2] = 0x41472ac;
      LeaveCriticalSection();
      piVar8[-2] = local_2c;
      piVar8[-3] = 0x41472ba;
      eON_DeleteCriticalSection();
      piVar8[-3] = local_24;
      piVar8[-4] = 0x41472c8;
      free((void *)piVar8[-3]);
      return 0;
    }
  } while( true );
}

// --- eON_ChangeTimerQueueTimer @0x04147a90 ---
/* source: synch_timerqueue */

undefined4 eON_ChangeTimerQueueTimer(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_48;
  undefined4 local_44;
  char *local_40;
  char *local_3c;
  undefined4 local_38;
  char *local_34;
  undefined4 local_28;
  int local_24;
  undefined4 *local_18;
  
  iVar1 = param_2;
  local_18 = &param_1;
  local_24 = param_3;
  local_28 = param_4;
  iVar4 = param_1;
  if ((param_1 == 0) && (iVar4 = DAT_04516c40, DAT_04516c40 == 0)) {
    local_44 = 0x4147b3f;
    iVar4 = eON_CreateTimerQueue();
    DAT_04516c40 = iVar4;
    if (iVar4 == 0) {
      local_34 = "WINBOOL eON_ChangeTimerQueueTimer(HANDLE, HANDLE, ULONG, ULONG)";
      local_38 = 0x1be;
      local_3c = 
      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synch_timerqueue.cpp"
      ;
      local_40 = "sDefaultTimerQueue";
      local_44 = 0x4147b72;
      FUN_0400a810();
      iVar4 = DAT_04516c40;
    }
  }
  if (iVar1 == 0) {
    local_40 = (char *)0x57;
    local_44 = 0x4147b8c;
    eON_SetLastError();
    uVar3 = 0;
  }
  else {
    local_44 = 0x4147ad4;
    local_40 = (char *)(iVar4 + 4);
    EnterCriticalSection();
    piVar5 = &local_44;
    uStack_48 = 0x4147adc;
    iVar2 = eON_GetTickCount();
    *(int *)(iVar1 + 0x14) = iVar2 + local_24;
    *(undefined4 *)(iVar1 + 8) = local_28;
    if (*(char *)(iVar1 + 0x1e) == '\0') {
      local_44 = *(undefined4 *)(iVar4 + 0x20);
      uStack_48 = 0x4147b23;
      eON_SetEvent();
      piVar5 = &uStack_48;
    }
    *piVar5 = iVar4 + 4;
    piVar5[-1] = 0x4147af8;
    LeaveCriticalSection();
    uVar3 = 1;
  }
  return uVar3;
}

// --- eON_CreateTimerQueue @0x04147370 ---
/* source: synch_timerqueue */

undefined4 * eON_CreateTimerQueue(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = malloc(0x30);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_0400a810("timerQueue",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synch_timerqueue.cpp"
                 ,0xea,"void* eON_CreateTimerQueue()");
  }
  *puVar1 = 0x5dfa73e1;
  puVar1[9] = 0;
  synch_criticalsection_04145d20(puVar1 + 1);
  iVar2 = eON_CreateEventA(0,0,0,0);
  puVar1[8] = iVar2;
  if (iVar2 == 0) {
    FUN_0400a810("timerQueue->ThreadEvent",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synch_timerqueue.cpp"
                 ,0xef,"void* eON_CreateTimerQueue()");
  }
  uVar3 = eON_CreateThread(0,0,TimerQueueThreadFunction,puVar1,0,0);
  *(undefined1 *)(puVar1 + 10) = 0;
  puVar1[7] = uVar3;
  puVar1[0xb] = 0;
  return puVar1;
}

// --- eON_CreateTimerQueueTimer @0x04147600 ---
/* source: synch_timerqueue */

undefined4
eON_CreateTimerQueueTimer
          (undefined4 *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,
          uint param_7)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  if (((param_2 == (int *)0x0) && (param_2 = DAT_04516c40, DAT_04516c40 == (int *)0x0)) &&
     (param_2 = (int *)eON_CreateTimerQueue(), DAT_04516c40 = param_2, param_2 == (int *)0x0)) {
    FUN_0400a810("sDefaultTimerQueue",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synch_timerqueue.cpp"
                 ,0x137,
                 "WINBOOL eON_CreateTimerQueueTimer(PHANDLE, HANDLE, WAITORTIMERCALLBACK, PVOID, DWORD, DWORD, ULONG)"
                );
    param_2 = DAT_04516c40;
  }
  if ((((param_1 == (undefined4 *)0x0) || (param_3 == 0)) ||
      ((*param_2 != 0x5dfa73e1 || ((param_7 & 0xfffffe46) != 0)))) ||
     (((param_7 & 8) != 0 && (param_6 != 0)))) {
    eON_SetLastError(0x57);
    uVar1 = 0;
  }
  else {
    piVar2 = malloc(0x20);
    *piVar2 = param_3;
    piVar2[4] = 0;
    piVar2[1] = param_4;
    piVar2[3] = param_7;
    piVar2[2] = param_6;
    iVar3 = eON_GetTickCount();
    *(undefined1 *)(piVar2 + 7) = 0;
    piVar2[5] = iVar3 + param_5;
    *(undefined1 *)((int)piVar2 + 0x1d) = 0;
    *(undefined1 *)((int)piVar2 + 0x1e) = 0;
    EnterCriticalSection(param_2 + 1);
    piVar2[6] = param_2[9];
    param_2[9] = (int)piVar2;
    eON_SetEvent(param_2[8]);
    *param_1 = piVar2;
    LeaveCriticalSection(param_2 + 1);
    uVar1 = 1;
  }
  return uVar1;
}

// --- eON_DeleteTimerQueueTimer @0x04147780 ---
/* source: synch_timerqueue */

undefined4 eON_DeleteTimerQueueTimer(int param_1,int param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  char **ppcVar8;
  char **ppcVar9;
  undefined4 uStack_4c;
  char *local_48;
  char *local_44;
  char *local_40;
  char *local_3c;
  char *local_38;
  char *local_34;
  int local_28;
  char *local_24;
  undefined4 *local_18;
  
  pcVar3 = param_3;
  iVar2 = param_2;
  local_18 = &param_1;
  iVar4 = param_1;
  if ((param_1 == 0) && (iVar4 = DAT_04516c40, DAT_04516c40 == 0)) {
    local_44 = (char *)0x414789b;
    iVar4 = eON_CreateTimerQueue();
    DAT_04516c40 = iVar4;
    if (iVar4 == 0) {
      local_34 = "WINBOOL eON_DeleteTimerQueueTimer(HANDLE, HANDLE, HANDLE)";
      local_38 = (char *)0x174;
      local_3c = 
      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synch_timerqueue.cpp"
      ;
      local_40 = "sDefaultTimerQueue";
      local_44 = (char *)0x41478ce;
      FUN_0400a810();
      iVar4 = DAT_04516c40;
    }
  }
  if (iVar2 == 0) {
    local_40 = (char *)0x57;
    local_44 = (char *)0x4147974;
    eON_SetLastError();
    return 0;
  }
  local_40 = (char *)(iVar4 + 4);
  local_44 = (char *)0x41477c2;
  local_24 = local_40;
  EnterCriticalSection();
  ppcVar9 = &local_44;
  ppcVar8 = &local_44;
  if (pcVar3 == (char *)0xffffffff) {
    ppcVar8 = &local_44;
    if (*(char *)(iVar2 + 0x1d) != '\0') {
      *(undefined4 *)(iVar2 + 8) = 0;
      local_44 = local_24;
      local_48 = (char *)0x41479d2;
      LeaveCriticalSection();
      cVar1 = *(char *)(iVar2 + 0x1d);
      while (cVar1 != '\0') {
        uStack_4c = 0x41479e5;
        sched_yield();
        cVar1 = *(char *)(iVar2 + 0x1d);
      }
      uStack_4c = 0x41479f8;
      local_48 = local_24;
      EnterCriticalSection();
      ppcVar8 = (char **)&uStack_4c;
    }
    iVar5 = *(int *)(iVar4 + 0x24);
    if (iVar5 == 0) {
      ppcVar8[3] = "void RemoveTimerFromQueue(TimerQueue*, TimerQueueTimer*)";
      ppcVar8[2] = (char *)0x4e;
      ppcVar8[1] = 
      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synch_timerqueue.cpp"
      ;
      *ppcVar8 = "queue->TimersList";
      ppcVar8[-1] = (char *)0x4147a82;
      FUN_0400a810();
      iVar5 = *(int *)(iVar4 + 0x24);
    }
    if (iVar2 == iVar5) {
      *(undefined4 *)(iVar4 + 0x24) = *(undefined4 *)(iVar2 + 0x18);
    }
    else {
      iVar4 = *(int *)(iVar5 + 0x18);
      while (iVar6 = iVar4, iVar2 != iVar6) {
        if (iVar6 == 0) {
          ppcVar8[3] = "void RemoveTimerFromQueue(TimerQueue*, TimerQueueTimer*)";
          ppcVar8[2] = (char *)0x56;
          ppcVar8[1] = 
          "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synch_timerqueue.cpp"
          ;
          *ppcVar8 = "prev->Next";
          ppcVar8[-1] = (char *)0x41479a4;
          FUN_0400a810();
          iVar6 = *(int *)(iVar5 + 0x18);
        }
        iVar5 = iVar6;
        iVar4 = *(int *)(iVar6 + 0x18);
      }
      *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar2 + 0x18);
    }
  }
  else {
    if ((*(char *)(iVar2 + 0x1e) == '\0') && (*(char *)(iVar2 + 0x1d) != '\0')) {
      *(undefined1 *)(iVar2 + 0x1c) = 1;
      if (pcVar3 == (char *)0x0) {
        local_44 = (char *)0x3e5;
        uVar7 = 0;
        local_48 = (char *)0x4147a0e;
        eON_SetLastError();
        ppcVar9 = &local_48;
      }
      else {
        *(char **)(iVar2 + 0x10) = pcVar3;
        uVar7 = 1;
      }
      goto LAB_0414785c;
    }
    iVar5 = *(int *)(iVar4 + 0x24);
    if (iVar5 == 0) {
      local_38 = "void RemoveTimerFromQueue(TimerQueue*, TimerQueueTimer*)";
      local_3c = (char *)0x4e;
      local_40 = 
      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synch_timerqueue.cpp"
      ;
      local_44 = "queue->TimersList";
      local_48 = (char *)0x4147a44;
      FUN_0400a810();
      iVar5 = *(int *)(iVar4 + 0x24);
    }
    if (iVar2 == iVar5) {
      *(undefined4 *)(iVar4 + 0x24) = *(undefined4 *)(iVar2 + 0x18);
    }
    else {
      iVar6 = *(int *)(iVar5 + 0x18);
      iVar4 = local_28;
      while (local_28 = iVar5, iVar5 = iVar6, iVar2 != iVar5) {
        if (iVar5 == 0) {
          local_38 = "void RemoveTimerFromQueue(TimerQueue*, TimerQueueTimer*)";
          local_3c = (char *)0x56;
          local_40 = 
          "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synch_timerqueue.cpp"
          ;
          local_44 = "prev->Next";
          local_48 = (char *)0x4147907;
          FUN_0400a810();
          iVar5 = *(int *)(local_28 + 0x18);
          iVar4 = local_28;
        }
        local_28 = iVar4;
        iVar6 = *(int *)(iVar5 + 0x18);
        iVar4 = local_28;
      }
      *(undefined4 *)(local_28 + 0x18) = *(undefined4 *)(iVar2 + 0x18);
      local_28 = iVar4;
    }
    if (pcVar3 != (char *)0x0) {
      local_44 = pcVar3;
      local_48 = (char *)0x4147825;
      eON_SetEvent();
      ppcVar8 = &local_48;
    }
  }
  *ppcVar8 = (char *)iVar2;
  uVar7 = 1;
  ppcVar8[-1] = (char *)0x4147835;
  free(*ppcVar8);
  ppcVar9 = ppcVar8;
LAB_0414785c:
  *ppcVar9 = local_24;
  ppcVar9[-1] = (char *)0x4147867;
  LeaveCriticalSection();
  return uVar7;
}

