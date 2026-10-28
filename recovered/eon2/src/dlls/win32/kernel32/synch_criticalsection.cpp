// Recovered source: eon2/src/dlls/win32/kernel32/synch_criticalsection.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- eON_DeleteCriticalSection @0x04146030 ---
/* source: synch_criticalsection */

void eON_DeleteCriticalSection(int param_1)

{
  pthread_cond_t *__cond;
  int iVar1;
  
  if (param_1 == 0) {
    FUN_0400a810("lpCriticalSection",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synch_criticalsection.cpp"
                 ,0x8e,"void eON_DeleteCriticalSection(PCRITICAL_SECTION)");
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_04516c28);
    __cond = *(pthread_cond_t **)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    pthread_cond_broadcast(__cond);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_04516c28);
    pthread_mutex_lock((pthread_mutex_t *)&DAT_04516c28);
    iVar1 = pthread_cond_destroy(__cond);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_04516c28);
    if (iVar1 == 0) {
      free(__cond);
    }
    else {
      FUN_0402cd10(10,"Critical section mutex destruction failed: %d",iVar1);
    }
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
  }
  return;
}

// --- eON_InitializeCriticalSection @0x04145d20 ---
/* source: synch_criticalsection */

void synch_criticalsection_04145d20(undefined4 *param_1)

{
  pthread_cond_t *__cond;
  bool bVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_0400a810("lpCriticalSection",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synch_criticalsection.cpp"
                 ,0x44,
                 "WINBOOL eON_InitializeCriticalSectionAndSpinCount(LPCRITICAL_SECTION, DWORD)");
  }
  bVar1 = DAT_04516c24 == '\0';
  *param_1 = 0;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  if (bVar1) {
    pthread_mutex_init((pthread_mutex_t *)&DAT_04516c28,(pthread_mutexattr_t *)0x0);
    DAT_04516c24 = '\x01';
  }
  __cond = malloc(0x34);
  pthread_cond_init(__cond,(pthread_condattr_t *)0x0);
  __cond[1].__data.__lock = 0;
  param_1[4] = __cond;
  FUN_0402f3e0();
  param_1[5] = 0;
  return;
}

// --- eON_InitializeCriticalSectionAndSpinCount @0x04145df0 ---
/* source: synch_criticalsection */

undefined4 synch_criticalsection_04145df0(undefined4 *param_1,uint param_2)

{
  pthread_cond_t *__cond;
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_0400a810("lpCriticalSection",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synch_criticalsection.cpp"
                 ,0x44,
                 "WINBOOL eON_InitializeCriticalSectionAndSpinCount(LPCRITICAL_SECTION, DWORD)");
  }
  bVar3 = DAT_04516c24 == '\0';
  *param_1 = 0;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  if (bVar3) {
    pthread_mutex_init((pthread_mutex_t *)&DAT_04516c28,(pthread_mutexattr_t *)0x0);
    DAT_04516c24 = '\x01';
  }
  __cond = malloc(0x34);
  pthread_cond_init(__cond,(pthread_condattr_t *)0x0);
  __cond[1].__data.__lock = 0;
  param_1[4] = __cond;
  uVar1 = FUN_0402f3e0();
  uVar2 = 0;
  if (1 < uVar1) {
    uVar2 = param_2 & 0x7fffffff;
  }
  param_1[5] = uVar2;
  return 1;
}

// --- eON_SetCriticalSectionSpinCount @0x04145fb0 ---
/* source: synch_criticalsection */

undefined4 eON_SetCriticalSectionSpinCount(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    FUN_0400a810("lpCriticalSection",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synch_criticalsection.cpp"
                 ,0x7c,"DWORD eON_SetCriticalSectionSpinCount(LPCRITICAL_SECTION, DWORD)");
  }
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = FUN_0402f3e0();
  if (uVar2 < 2) {
    param_2 = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return uVar1;
}

// --- synch_criticalsection_04145ed0 @0x04145ed0 ---
/* source: synch_criticalsection */

undefined4 synch_criticalsection_04145ed0(undefined4 *param_1,uint param_2)

{
  pthread_cond_t *__cond;
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_0400a810("lpCriticalSection",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/synch_criticalsection.cpp"
                 ,0x44,
                 "WINBOOL eON_InitializeCriticalSectionAndSpinCount(LPCRITICAL_SECTION, DWORD)");
  }
  bVar3 = DAT_04516c24 == '\0';
  *param_1 = 0;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  if (bVar3) {
    pthread_mutex_init((pthread_mutex_t *)&DAT_04516c28,(pthread_mutexattr_t *)0x0);
    DAT_04516c24 = '\x01';
  }
  __cond = malloc(0x34);
  pthread_cond_init(__cond,(pthread_condattr_t *)0x0);
  __cond[1].__data.__lock = 0;
  param_1[4] = __cond;
  uVar1 = FUN_0402f3e0();
  uVar2 = 0;
  if (1 < uVar1) {
    uVar2 = param_2 & 0x7fffffff;
  }
  param_1[5] = uVar2;
  return 1;
}

// --- attached helper FUN_00106760 @0x04106760 (call-graph exclusive to this TU) ---
void FUN_04106760(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  *param_1 = &PTR_FUN_043102e8;
  if (param_1[5] != 0) {
    iVar4 = 0;
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 1;
      puVar1 = (undefined4 *)(param_1[4] + 0x18 + iVar4);
      iVar4 = iVar4 + 0x1c;
      free((void *)*puVar1);
    } while (uVar3 < (uint)param_1[5]);
  }
  param_1[5] = 0;
  free((void *)param_1[4]);
  *(undefined1 *)((int)param_1 + 0xa9) = 0;
  param_1[0xf] = 1;
                    /* try { // try from 041067c0 to 0410680e has its CatchHandler @ 0410686a */
  eON_SetEvent(param_1[0xe]);
  eON_WaitForSingleObject(param_1[0xd],0xffffffff);
  eON_CloseHandle(param_1[0xd]);
  eON_CloseHandle(param_1[0xe]);
  param_1[0xd] = 0;
  eON_DeleteCriticalSection(param_1 + 0x24);
  FUN_041082c0(param_1 + 0x1e,param_1[0x20]);
  if ((void *)param_1[0x14] != (void *)0x0) {
    operator_delete((void *)param_1[0x14]);
  }
  if ((void *)param_1[0x11] != (void *)0x0) {
    operator_delete((void *)param_1[0x11]);
  }
  piVar2 = (int *)param_1[0x10];
  param_1[0x10] = 0;
  if (piVar2 != (int *)0x0) {
                    /* try { // try from 04106858 to 0410685a has its CatchHandler @ 041068c5 */
    (**(code **)(*piVar2 + 0xc))(piVar2);
  }
  FUN_04030320();
  return;
}

