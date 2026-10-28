// Recovered source: eon2/src/core/coreOpenAL.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- OpenALSoft_Shutdown @0x0400ddd0 ---
/* source: coreOpenAL */

void OpenALSoft_Shutdown(void)

{
  if (DAT_044111e0 == 0) {
    FUN_0400a810("sOpenALInitializeCount > 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/coreOpenAL.cpp",0x34,
                 "void OpenALSoft_Shutdown()");
  }
  DAT_044111e0 = DAT_044111e0 + -1;
  if (DAT_044111e0 == 0) {
    if (DAT_044111e8 == 0) {
      FUN_0400a810("sOpenALContext",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/coreOpenAL.cpp",0x38,
                   "void OpenALSoft_Shutdown()");
    }
    if (DAT_044111e4 == 0) {
      FUN_0400a810("sOpenALDevice",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/coreOpenAL.cpp",0x39,
                   "void OpenALSoft_Shutdown()");
    }
    alcMakeContextCurrent(0);
    alcDestroyContext(DAT_044111e8);
    DAT_044111e8 = 0;
    alcCloseDevice(DAT_044111e4);
    DAT_044111e4 = 0;
  }
  return;
}

// --- attached helper FUN_000f9730 @0x040f9730 (call-graph exclusive to this TU) ---
void FUN_040f9730(void *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  
  if (param_1 != (void *)0x0) {
    pvVar3 = *(void **)((int)param_1 + 0x44);
    if (*(void **)((int)param_1 + 0x48) != pvVar3) {
                    /* try { // try from 040f9756 to 040f975a has its CatchHandler @ 040f97a7 */
      FUN_0402cd10(10,
                   "DirectSound OpenALspoft backend: audio sources remain at the moment of shutting down the engine."
                  );
      pvVar3 = *(void **)((int)param_1 + 0x44);
      iVar4 = *(int *)((int)param_1 + 0x48) - (int)pvVar3 >> 2;
      if (iVar4 != 0) {
        iVar2 = 0;
        do {
          iVar1 = iVar2 * 4;
          iVar2 = iVar2 + 1;
          **(undefined4 **)((int)pvVar3 + iVar1) = 0;
        } while (iVar4 != iVar2);
      }
    }
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    operator_delete(param_1);
    OpenALSoft_Shutdown();
    return;
  }
  return;
}

// --- attached helper FUN_00102c10 @0x04102c10 (call-graph exclusive to this TU) ---
void FUN_04102c10(undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  
  *param_1 = &PTR_FUN_0430f7e8;
  if (*(char *)(param_1 + 0xe) != '\0') {
                    /* try { // try from 04102c28 to 04102c2c has its CatchHandler @ 04102c72 */
    OpenALSoft_Shutdown();
  }
  pvVar2 = (void *)param_1[3];
  if (pvVar2 != (void *)0x0) {
    iVar1 = param_1[0xc];
    puVar3 = (undefined4 *)param_1[8];
    if (puVar3 < (undefined4 *)(iVar1 + 4)) {
      do {
        pvVar2 = (void *)*puVar3;
        puVar3 = puVar3 + 1;
        operator_delete(pvVar2);
      } while (puVar3 < (undefined4 *)(iVar1 + 4));
      pvVar2 = (void *)param_1[3];
    }
    operator_delete(pvVar2);
  }
  *param_1 = &PTR___cxa_pure_virtual_0430f2f8;
  return;
}

// --- attached helper FUN_00102e80 @0x04102e80 (call-graph exclusive to this TU) ---
void FUN_04102e80(undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  
  *param_1 = &PTR_FUN_0430f7e8;
  if (*(char *)(param_1 + 0xe) != '\0') {
                    /* try { // try from 04102e98 to 04102e9c has its CatchHandler @ 04102ee9 */
    OpenALSoft_Shutdown();
  }
  pvVar2 = (void *)param_1[3];
  if (pvVar2 != (void *)0x0) {
    iVar1 = param_1[0xc];
    puVar3 = (undefined4 *)param_1[8];
    if (puVar3 < (undefined4 *)(iVar1 + 4)) {
      do {
        pvVar2 = (void *)*puVar3;
        puVar3 = puVar3 + 1;
        operator_delete(pvVar2);
      } while (puVar3 < (undefined4 *)(iVar1 + 4));
      pvVar2 = (void *)param_1[3];
    }
    operator_delete(pvVar2);
  }
  *param_1 = &PTR___cxa_pure_virtual_0430f2f8;
  operator_delete(param_1);
  return;
}

