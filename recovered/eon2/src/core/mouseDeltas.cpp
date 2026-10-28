// Recovered source: eon2/src/core/mouseDeltas.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- MouseDeltas_GetLastMouseDelta @0x0402e930 ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* source: mouseDeltas */

void MouseDeltas_GetLastMouseDelta(int param_1,int *param_2,int *param_3)

{
  float __x;
  char cVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int local_38;
  int local_34;
  int local_2c;
  int local_28;
  int local_24;
  int local_20 [4];
  
  if ((_DAT_042e2470 < (float)((uint)DAT_04411730 & DAT_042e2460)) ||
     (_DAT_042e2470 < (float)((uint)DAT_04411734 & DAT_042e2460))) {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_044116e4);
    if (DAT_04411700 != 0) {
      DAT_04411704 = DAT_04411704 - DAT_04411730;
      DAT_04411708 = DAT_04411708 - DAT_04411734;
    }
    if (DAT_0441170c != 0) {
      DAT_04411710 = DAT_04411710 - DAT_04411730;
      DAT_04411714 = DAT_04411714 - DAT_04411734;
    }
    if (DAT_04411718 != 0) {
      DAT_0441171c = DAT_0441171c - DAT_04411730;
      DAT_04411720 = DAT_04411720 - DAT_04411734;
    }
    if (DAT_04411724 != 0) {
      DAT_04411728 = DAT_04411728 - DAT_04411730;
      DAT_0441172c = DAT_0441172c - DAT_04411734;
    }
    DAT_04411730 = 0.0;
    DAT_04411734 = 0.0;
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_044116e4);
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_044116e4);
  if (DAT_044116e0 == 0) {
    FUN_0400a810("sInitialized",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/mouseDeltas.cpp",0xa6,
                 "void MouseDeltas_GetLastMouseDelta(int32_t, int32_t*, int32_t*)");
  }
  if (3 < param_1) {
    FUN_0400a810("regNum < 4",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/mouseDeltas.cpp",0xa7,
                 "void MouseDeltas_GetLastMouseDelta(int32_t, int32_t*, int32_t*)");
  }
  if ((&DAT_04411700)[param_1 * 3] == 0) {
    FUN_0400a810("sRegistrations[regNum].Used",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/mouseDeltas.cpp",0xa8,
                 "void MouseDeltas_GetLastMouseDelta(int32_t, int32_t*, int32_t*)");
  }
  __x = DAT_04411734;
  fVar3 = DAT_04411730;
  fVar5 = (&DAT_04411708)[param_1 * 3];
  fVar4 = (&DAT_04411704)[param_1 * 3];
  cVar1 = FUN_0402d6a0();
  if (cVar1 == '\0') {
    fVar3 = floorf(fVar3);
    fVar4 = floorf(fVar4);
    iVar2 = (int)fVar3 - (int)fVar4;
    fVar4 = floorf(__x);
    fVar5 = floorf(fVar5);
    local_38 = (int)fVar4 - (int)fVar5;
  }
  else {
    FUN_0402d560(&local_2c,&local_28);
    FUN_0402d6b0(&local_24,local_20);
    fVar4 = floorf(fVar4 * ((float)local_24 / (float)local_2c));
    local_34 = (int)(longlong)fVar4;
    iVar2 = local_34;
    fVar4 = floorf(((float)local_24 / (float)local_2c) * fVar3);
    local_34 = (int)(longlong)fVar4;
    iVar2 = local_34 - iVar2;
    fVar5 = floorf(fVar5 * ((float)local_20[0] / (float)local_28));
    local_34 = (int)(longlong)fVar5;
    local_38 = local_34;
    fVar5 = floorf(((float)local_20[0] / (float)local_28) * __x);
    local_34 = (int)(longlong)fVar5;
    local_38 = local_34 - local_38;
  }
  (&DAT_04411704)[param_1 * 3] = DAT_04411730;
  (&DAT_04411708)[param_1 * 3] = DAT_04411734;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_044116e4);
  *param_2 = iVar2;
  *param_3 = -local_38;
  return;
}

// --- MouseDeltas_RegisterForMouseDelta @0x0402e630 ---
/* source: mouseDeltas */

int MouseDeltas_RegisterForMouseDelta(void)

{
  int iVar1;
  
  if (DAT_044116e0 == 0) {
    pthread_mutex_init((pthread_mutex_t *)&DAT_044116e4,(pthread_mutexattr_t *)0x0);
    bzero(&DAT_04411700,0x30);
    DAT_04411730 = 0;
    DAT_04411734 = 0;
    DAT_044116e0 = 1;
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_044116e4);
  if (DAT_04411700 == 0) {
    iVar1 = 0;
  }
  else if (DAT_0441170c == 0) {
    iVar1 = 1;
  }
  else if (DAT_04411718 == 0) {
    iVar1 = 2;
  }
  else {
    iVar1 = 3;
    if (DAT_04411724 != 0) {
      iVar1 = -1;
      FUN_0400a810("regNum != -1",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/mouseDeltas.cpp",0x3b,
                   "int32_t MouseDeltas_RegisterForMouseDelta()");
      goto LAB_0402e6b5;
    }
  }
  (&DAT_04411700)[iVar1 * 3] = 1;
  (&DAT_04411704)[iVar1 * 3] = DAT_04411730;
  (&DAT_04411708)[iVar1 * 3] = DAT_04411734;
LAB_0402e6b5:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_044116e4);
  return iVar1;
}

// --- MouseDeltas_UnregisterForMouseDelta @0x0402e770 ---
/* source: mouseDeltas */

void MouseDeltas_UnregisterForMouseDelta(int param_1)

{
  pthread_mutex_lock((pthread_mutex_t *)&DAT_044116e4);
  if (DAT_044116e0 == 0) {
    FUN_0400a810("sInitialized",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/mouseDeltas.cpp",0x45,
                 "void MouseDeltas_UnregisterForMouseDelta(int32_t)");
  }
  if (3 < param_1) {
    FUN_0400a810("regNum < 4",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/mouseDeltas.cpp",0x46,
                 "void MouseDeltas_UnregisterForMouseDelta(int32_t)");
  }
  if ((&DAT_04411700)[param_1 * 3] == 0) {
    FUN_0400a810("sRegistrations[regNum].Used",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/mouseDeltas.cpp",0x47,
                 "void MouseDeltas_UnregisterForMouseDelta(int32_t)");
  }
  (&DAT_04411700)[param_1 * 3] = 0;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_044116e4);
  return;
}

// --- attached helper FUN_000f82c0 @0x040f82c0 (call-graph exclusive to this TU) ---
void FUN_040f82c0(int param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_24;
  int local_20 [4];
  
  bVar2 = false;
  iVar3 = eON_timeGetTime();
  MouseDeltas_GetLastMouseDelta(*(undefined4 *)(param_1 + 0xc),&local_24,local_20);
  pthread_mutex_lock((pthread_mutex_t *)(*(int *)(param_1 + 8) + 0x78));
  iVar4 = *(int *)(param_1 + 8);
  *(int *)(iVar4 + 0x5c) = *(int *)(iVar4 + 0x5c) + local_20[0];
  iVar5 = *(int *)(iVar4 + 0x58) + local_24;
  *(int *)(iVar4 + 0x58) = iVar5;
  if (*(int *)(iVar4 + 0xac) != -1) {
    if (*(char *)(iVar4 + 0xd8) == '\0') {
      iVar5 = local_24;
    }
    piVar1 = *(int **)(iVar4 + 0x48);
    if (piVar1 == (int *)(*(int *)(iVar4 + 0x50) + -0x14)) {
      bVar2 = true;
      FUN_040f7e60();
      iVar4 = *(int *)(param_1 + 8);
    }
    else {
      if (piVar1 != (int *)0x0) {
        *piVar1 = *(int *)(iVar4 + 0xac);
        piVar1[1] = iVar5;
        piVar1[2] = iVar3;
        piVar1[3] = param_2;
        piVar1[4] = 0;
      }
      bVar2 = true;
      *(int **)(iVar4 + 0x48) = piVar1 + 5;
    }
  }
  if (*(int *)(iVar4 + 0xb0) == -1) {
    pthread_mutex_unlock((pthread_mutex_t *)(iVar4 + 0x78));
    if (!bVar2) {
      return;
    }
  }
  else {
    if (*(char *)(iVar4 + 0xd9) != '\0') {
      local_20[0] = *(int *)(iVar4 + 0x5c);
    }
    piVar1 = *(int **)(iVar4 + 0x48);
    if (piVar1 == (int *)(*(int *)(iVar4 + 0x50) + -0x14)) {
      FUN_040f7e60();
      iVar4 = *(int *)(param_1 + 8);
    }
    else {
      if (piVar1 != (int *)0x0) {
        *piVar1 = *(int *)(iVar4 + 0xb0);
        piVar1[1] = local_20[0];
        piVar1[2] = iVar3;
        piVar1[3] = param_2;
        piVar1[4] = 0;
      }
      *(int **)(iVar4 + 0x48) = piVar1 + 5;
    }
    pthread_mutex_unlock((pthread_mutex_t *)(iVar4 + 0x78));
  }
  FUN_040f22b0(*(undefined4 *)(param_1 + 8));
  return;
}

// --- attached helper FUN_000f85d0 @0x040f85d0 (call-graph exclusive to this TU) ---
void FUN_040f85d0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_0430d608;
  uVar1 = MouseDeltas_RegisterForMouseDelta();
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = uVar1;
  return;
}

// --- attached helper FUN_000f8600 @0x040f8600 (call-graph exclusive to this TU) ---
void FUN_040f8600(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0430d608;
  MouseDeltas_UnregisterForMouseDelta();
  return;
}

// --- attached helper FUN_00178eb0 @0x04178eb0 (call-graph exclusive to this TU) ---
void FUN_04178eb0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_18;
  int local_14;
  undefined4 *local_10;
  
  MouseDeltas_GetLastMouseDelta(DAT_04410ab0,&local_18,&local_14);
  if ((local_18 != 0) || (local_14 != 0)) {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0451c054);
    if (DAT_0451c07c == DAT_0451c078) {
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0451c054);
      local_10 = malloc(0x28);
    }
    else {
      local_10 = *(undefined4 **)(DAT_0451c07c + -4);
      DAT_0451c07c = DAT_0451c07c + -4;
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0451c054);
    }
    puVar3 = DAT_0451c070;
    *local_10 = 0;
    local_10[1] = 0x28;
    uVar1 = *puVar3;
    *(undefined2 *)(local_10 + 4) = 0;
    *(undefined2 *)(local_10 + 5) = 0;
    *(undefined2 *)((int)local_10 + 0x16) = 0;
    local_10[6] = 0;
    local_10[2] = uVar1;
    local_10[9] = 0;
    local_10[3] = 0;
    local_10[7] = local_18;
    local_10[8] = local_14;
    iVar2 = puVar3[0xb];
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0451c054);
    if (DAT_0451c088 == DAT_0451c08c) {
      FUN_04179f00(&DAT_0451c084,DAT_0451c088,&local_10);
    }
    else {
      puVar3 = (undefined4 *)0x0;
      if (DAT_0451c088 != (undefined4 *)0x0) {
        *DAT_0451c088 = local_10;
        puVar3 = DAT_0451c088;
      }
      DAT_0451c088 = puVar3 + 1;
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0451c054);
    if (iVar2 == 0) {
      iVar2 = eON_GetFocus_Thunk();
    }
    FUN_041724b0(iVar2,0xff,local_10[3],local_10);
  }
  return;
}

// --- attached helper FUN_00179030 @0x04179030 (call-graph exclusive to this TU) ---
void FUN_04179030(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  if (5 < param_1) {
    return;
  }
  MouseDeltas_GetLastMouseDelta(DAT_04410ab0,&local_18,&local_14);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0451c054);
  if (DAT_0451c07c == DAT_0451c078) {
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0451c054);
    local_10 = malloc(0x28);
  }
  else {
    local_10 = *(undefined4 **)(DAT_0451c07c + -4);
    DAT_0451c07c = DAT_0451c07c + -4;
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0451c054);
  }
  puVar3 = DAT_0451c070;
  *local_10 = 0;
  local_10[1] = 0x28;
  uVar1 = *puVar3;
  *(undefined2 *)(local_10 + 4) = 0;
  *(undefined2 *)((int)local_10 + 0x16) = 0;
  local_10[6] = 0;
  local_10[9] = 0;
  local_10[2] = uVar1;
  local_10[3] = 0;
  *(short *)(local_10 + 5) = (short)(1 << (param_2 == 0 | (char)param_1 * '\x02' & 0x1fU));
  local_10[7] = local_18;
  local_10[8] = local_14;
  iVar2 = puVar3[0xb];
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0451c054);
  if (DAT_0451c088 == DAT_0451c08c) {
    FUN_04179f00(&DAT_0451c084,DAT_0451c088,&local_10);
  }
  else {
    puVar3 = (undefined4 *)0x0;
    if (DAT_0451c088 != (undefined4 *)0x0) {
      *DAT_0451c088 = local_10;
      puVar3 = DAT_0451c088;
    }
    DAT_0451c088 = puVar3 + 1;
  }
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0451c054);
  if (iVar2 == 0) {
    iVar2 = eON_GetFocus_Thunk();
  }
  FUN_041724b0(iVar2,0xff,local_10[3],local_10);
  return;
}

// --- attached helper FUN_00179c80 @0x04179c80 (call-graph exclusive to this TU) ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04179c80(float param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20 [4];
  
  if (_DAT_04346a68 <= (double)(float)(DAT_042e2460 & (uint)param_1)) {
    sVar4 = 0x78;
    fVar6 = DAT_042dbf3c;
    if (param_1 + _DAT_0451c090 < _DAT_042dbf44) {
      sVar4 = -0x78;
      fVar6 = DAT_042e6f58;
    }
    fVar7 = fabsf(param_1 + _DAT_0451c090);
    fVar8 = floorf(fVar7 / DAT_042e0cc4);
    iVar3 = (int)fVar8;
    _DAT_0451c090 = (fVar7 - (float)(iVar3 * 0x78)) * fVar6;
    if (iVar3 != 0) {
      MouseDeltas_GetLastMouseDelta(DAT_04410ab0,&local_28,&local_24);
      iVar5 = 10;
      if (iVar3 < 0xb) {
        iVar5 = iVar3;
      }
      pthread_mutex_lock((pthread_mutex_t *)&DAT_0451c054);
      if (DAT_0451c07c == DAT_0451c078) {
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_0451c054);
        local_20[0] = malloc(0x28);
      }
      else {
        local_20[0] = *(undefined4 **)(DAT_0451c07c + -4);
        DAT_0451c07c = DAT_0451c07c + -4;
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_0451c054);
      }
      puVar2 = DAT_0451c070;
      *local_20[0] = 0;
      local_20[0][1] = 0x28;
      uVar1 = *puVar2;
      *(undefined2 *)(local_20[0] + 4) = 0;
      *(undefined2 *)(local_20[0] + 5) = 0x400;
      *(short *)((int)local_20[0] + 0x16) = sVar4 * (short)iVar5;
      local_20[0][6] = 0;
      local_20[0][2] = uVar1;
      local_20[0][9] = 0;
      local_20[0][3] = 0;
      local_20[0][7] = local_28;
      local_20[0][8] = local_24;
      iVar3 = puVar2[0xb];
      pthread_mutex_lock((pthread_mutex_t *)&DAT_0451c054);
      if (DAT_0451c088 == DAT_0451c08c) {
        FUN_04179f00(&DAT_0451c084,DAT_0451c088,local_20);
      }
      else {
        puVar2 = (undefined4 *)0x0;
        if (DAT_0451c088 != (undefined4 *)0x0) {
          *DAT_0451c088 = local_20[0];
          puVar2 = DAT_0451c088;
        }
        DAT_0451c088 = puVar2 + 1;
      }
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0451c054);
      if (iVar3 == 0) {
        iVar3 = eON_GetFocus_Thunk();
      }
      FUN_041724b0(iVar3,0xff,local_20[0][3],local_20[0]);
      return;
    }
  }
  return;
}

