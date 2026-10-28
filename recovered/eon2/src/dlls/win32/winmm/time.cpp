// Recovered source: eon2/src/dlls/win32/winmm/time.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- eON_Int_TimerThreadRoutine @0x0418e7a0 ---
/* source: time */

void eON_Int_TimerThreadRoutine(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  code *pcVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  char **ppcVar9;
  uint *puVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  char *local_50 [8];
  int local_30;
  void *local_2c;
  int local_28;
  undefined4 *local_24;
  undefined4 *puStack_18;
  
  puVar11 = param_1;
  puStack_18 = &param_1;
  ppcVar9 = local_50;
  local_50[0] = "E.mmTimers";
  eON_SetThreadName();
  do {
    ppcVar9[1] = (char *)0xffffffff;
    *ppcVar9 = (char *)puVar11[1];
    ppcVar9[-1] = (char *)0x418e7db;
    iVar5 = eON_WaitForSingleObject();
    puVar10 = (uint *)(ppcVar9 + -2);
    if (iVar5 == 0) {
      puVar2 = (uint *)*puVar11;
    }
    else {
      ppcVar9[1] = "DWORD eON_Int_TimerThreadRoutine(LPVOID)";
      *ppcVar9 = (char *)0x87;
      ppcVar9[-1] = "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/winmm/time.cpp";
      ppcVar9[-2] = "eON_WaitForSingleObject( threadData->ThreadEvent, 0xFFFFFFFF ) == 0";
      ppcVar9[-3] = (char *)0x418ea6d;
      FUN_0400a810();
      puVar2 = (uint *)*puVar11;
    }
    if (puVar2 == (uint *)0x0) {
      ppcVar9[1] = "DWORD eON_Int_TimerThreadRoutine(LPVOID)";
      *ppcVar9 = (char *)0x8a;
      ppcVar9[-1] = "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/winmm/time.cpp";
      ppcVar9[-2] = "timerData";
      ppcVar9[-3] = (char *)0x418ea9b;
      FUN_0400a810();
    }
    local_24 = puVar11;
    if (puVar2[1] == 0) {
      puVar2[1] = 1;
      puVar10 = (uint *)(ppcVar9 + -2);
    }
    do {
      uVar13 = puVar2[8];
      while( true ) {
        puVar10[-1] = 0x418e82f;
        uVar6 = eON_timeGetTime();
        ppcVar9 = (char **)puVar10;
        if (*puVar2 <= uVar6 - uVar13) break;
        *puVar10 = puVar2[1] * 1000;
        puVar10[-1] = 0x418e81f;
        usleep(*puVar10);
        if (puVar2[6] != 0) {
          puVar2[8] = uVar6;
          goto LAB_0418e86b;
        }
      }
      puVar2[8] = uVar6;
      if (puVar2[6] != 0) break;
      if ((puVar2[4] & 0x20) == 0) {
        if ((puVar2[4] & 0x10) == 0) {
          puVar10[4] = 0;
          puVar10[3] = 0;
          uVar13 = puVar2[3];
          puVar10[1] = 0;
          puVar10[2] = uVar13;
          *puVar10 = local_24[2];
          pcVar3 = (code *)puVar2[2];
          puVar10[-1] = 0x418e94b;
          (*pcVar3)();
          puVar10 = puVar10 + -5;
        }
        else {
          *puVar10 = puVar2[2];
          puVar10[-1] = 0x418e85f;
          eON_SetEvent();
          puVar10 = puVar10 + -1;
        }
      }
      else {
        *puVar10 = puVar2[2];
        puVar10[-1] = 0x418e963;
        eON_PulseEvent();
        puVar10 = puVar10 + -1;
      }
      ppcVar9 = (char **)puVar10;
    } while ((puVar2[4] & 1) != 0);
LAB_0418e86b:
    puVar11 = local_24;
    *ppcVar9 = &DAT_0451c108;
    ppcVar9[-1] = (char *)0x418e877;
    pthread_mutex_lock((pthread_mutex_t *)*ppcVar9);
    local_24 = (undefined4 *)puVar2[7];
    *puVar11 = 0;
    iVar5 = DAT_0451c13c - (int)DAT_0451c138 >> 2;
    if (iVar5 == 0) {
LAB_0418e8bf:
      if (DAT_0451c130 == DAT_0451c134) goto LAB_0418e9ad;
LAB_0418e8d1:
      puVar8 = (undefined4 *)0x0;
      if (DAT_0451c130 != (undefined4 *)0x0) {
        *DAT_0451c130 = puVar11;
        puVar8 = DAT_0451c130;
      }
      DAT_0451c130 = puVar8 + 1;
    }
    else {
      iVar7 = 0;
      if (puVar2 == (uint *)*DAT_0451c138) {
        iVar12 = 0;
      }
      else {
        do {
          iVar7 = iVar7 + 1;
          if (iVar7 == iVar5) goto LAB_0418e8bf;
          iVar12 = iVar7 * 4;
        } while (puVar2 != (uint *)DAT_0451c138[iVar7]);
      }
      *ppcVar9 = (char *)puVar2;
      ppcVar9[-1] = (char *)0x418e97d;
      operator_delete(*ppcVar9);
      *(undefined4 *)((int)DAT_0451c138 + iVar12) =
           DAT_0451c138[(DAT_0451c13c - (int)DAT_0451c138 >> 2) + -1];
      DAT_0451c13c = DAT_0451c13c + -4;
      if (DAT_0451c130 != DAT_0451c134) goto LAB_0418e8d1;
LAB_0418e9ad:
      puVar8 = DAT_0451c130;
      local_28 = 4;
      uVar13 = (int)DAT_0451c130 - (int)DAT_0451c12c >> 2;
      if (uVar13 != 0) {
        local_28 = -4;
        if (uVar13 <= uVar13 * 2) {
          local_28 = uVar13 * 8;
          if (0x3fffffff < uVar13 * 2) {
            local_28 = -4;
          }
        }
      }
      *ppcVar9 = (char *)local_28;
      ppcVar9[-1] = (char *)0x418e9e0;
      local_2c = operator_new((uint)*ppcVar9);
      puVar1 = (undefined4 *)((int)local_2c + uVar13 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = puVar11;
      }
      iVar5 = (int)puVar8 - (int)DAT_0451c12c >> 2;
      if (iVar5 != 0) {
        ppcVar9[1] = DAT_0451c12c;
        pvVar4 = local_2c;
        ppcVar9[2] = (char *)(iVar5 * 4);
        *ppcVar9 = pvVar4;
        ppcVar9[-1] = (char *)0x418eadc;
        memmove(*ppcVar9,ppcVar9[1],(size_t)ppcVar9[2]);
      }
      iVar5 = (int)local_2c + iVar5 * 4 + 4;
      iVar7 = (int)DAT_0451c130 - (int)puVar8 >> 2;
      if (iVar7 != 0) {
        *ppcVar9 = (char *)iVar5;
        local_30 = iVar5;
        ppcVar9[2] = (char *)(iVar7 * 4);
        ppcVar9[1] = (char *)puVar8;
        ppcVar9[-1] = (char *)0x418eaba;
        memmove(*ppcVar9,ppcVar9[1],(size_t)ppcVar9[2]);
        iVar5 = local_30;
      }
      if (DAT_0451c12c != (void *)0x0) {
        *ppcVar9 = DAT_0451c12c;
        ppcVar9[-1] = (char *)0x418ea2e;
        operator_delete(*ppcVar9);
      }
      DAT_0451c12c = local_2c;
      DAT_0451c134 = (undefined4 *)((int)local_2c + local_28);
      DAT_0451c130 = (undefined4 *)(iVar5 + iVar7 * 4);
    }
    if (local_24 != (undefined4 *)0x0) {
      *ppcVar9 = (char *)local_24;
      ppcVar9[-1] = (char *)0x418e8f8;
      eON_SetEvent();
      ppcVar9 = ppcVar9 + -1;
    }
    *ppcVar9 = &DAT_0451c108;
    ppcVar9[-1] = (char *)0x418e907;
    pthread_mutex_unlock((pthread_mutex_t *)*ppcVar9);
  } while( true );
}

