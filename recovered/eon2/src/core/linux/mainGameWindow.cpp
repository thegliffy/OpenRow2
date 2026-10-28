// Recovered source: eon2/src/core/linux/mainGameWindow.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- MainGameWindow_GetDisplayDimensions @0x0401ef80 ---
/* source: mainGameWindow */

void MainGameWindow_GetDisplayDimensions(void)

{
  if (DAT_044116a4 == (int *)0x0) {
    FUN_0400a810("sMainGameWindow",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/mainGameWindow.cpp"
                 ,0x2b,"void MainGameWindow_GetDisplayDimensions(bool, int*, int*)");
  }
                    /* WARNING: Could not recover jumptable at 0x0401efb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_044116a4 + 0x50))();
  return;
}

// --- MainGameWindow_GetDisplayOrigin @0x0401ef20 ---
/* source: mainGameWindow */

void MainGameWindow_GetDisplayOrigin(undefined4 param_1,undefined4 param_2)

{
  if (DAT_044116a4 == (int *)0x0) {
    FUN_0400a810("sMainGameWindow",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/linux/mainGameWindow.cpp"
                 ,0x25,"void MainGameWindow_GetDisplayOrigin(int*, int*)");
  }
  (**(code **)(*DAT_044116a4 + 0x4c))(DAT_044116a4,param_1,param_2);
  return;
}

// --- attached helper FUN_0002d440 @0x0402d440 (call-graph exclusive to this TU) ---
undefined4 FUN_0402d440(int *param_1,int *param_2)

{
  undefined4 uVar1;
  float fVar2;
  int local_14;
  int local_10;
  
  if (DAT_044116a4 == 0) {
    FUN_0402cd10(10,
                 "When looking for origin of the main game window , found that no main game window is set!"
                );
    uVar1 = 0;
  }
  else {
    if (DAT_044116a0 != '\0') {
      MainGameWindow_GetDisplayDimensions(0,&local_14,&local_10);
      fVar2 = (float)local_14 / (float)DAT_0441169c;
      if ((float)local_10 / (float)DAT_04411698 < fVar2) {
        *param_1 = (local_14 - (int)(((float)local_10 / (float)DAT_04411698) * (float)DAT_0441169c))
                   / 2;
        *param_2 = 0;
        return 1;
      }
      *param_1 = 0;
      *param_2 = (local_10 - (int)((float)DAT_04411698 * fVar2)) / 2;
      return 1;
    }
    *param_1 = 0;
    uVar1 = 1;
    *param_2 = 0;
  }
  return uVar1;
}

// --- attached helper FUN_0002d560 @0x0402d560 (call-graph exclusive to this TU) ---
undefined4 FUN_0402d560(int *param_1,int *param_2)

{
  undefined4 uVar1;
  float fVar2;
  int local_14;
  int local_10;
  
  if (DAT_044116a4 == (int *)0x0) {
    FUN_0402cd10(10,
                 "When looking for dimensions of the main game window , found that no main game window is set!"
                );
    uVar1 = 0;
  }
  else {
    if (DAT_044116a0 != '\0') {
      MainGameWindow_GetDisplayDimensions(0,&local_14,&local_10);
      fVar2 = (float)local_14 / (float)DAT_0441169c;
      if ((float)local_10 / (float)DAT_04411698 < fVar2) {
        *param_1 = (int)(((float)local_10 / (float)DAT_04411698) * (float)DAT_0441169c);
        *param_2 = local_10;
        return 1;
      }
      *param_1 = local_14;
      *param_2 = (int)((float)DAT_04411698 * fVar2);
      return 1;
    }
    (**(code **)(*DAT_044116a4 + 0x88))(DAT_044116a4,param_1,param_2);
    uVar1 = 1;
  }
  return uVar1;
}

// --- attached helper FUN_0002d700 @0x0402d700 (call-graph exclusive to this TU) ---
void FUN_0402d700(float *param_1,float *param_2)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int local_2c;
  int local_28;
  int local_24;
  int local_20 [4];
  
  if (DAT_044116a0 != '\0') {
    if (DAT_044116a4 == (int *)0x0) {
      FUN_0402cd10(10,
                   "When looking for origin of the main game window , found that no main game window is set!"
                  );
      fVar5 = 0.0;
      fVar3 = fVar5;
    }
    else {
      MainGameWindow_GetDisplayDimensions(0,local_20,&local_24);
      fVar3 = (float)local_20[0] / (float)DAT_0441169c;
      fVar4 = (float)local_24 / (float)DAT_04411698;
      if (fVar4 < fVar3) {
        fVar5 = 0.0;
        fVar3 = (float)((local_20[0] - (int)(fVar4 * (float)DAT_0441169c)) / 2);
      }
      else {
        fVar5 = (float)((local_24 - (int)(fVar3 * (float)DAT_04411698)) / 2);
        fVar3 = 0.0;
      }
    }
    piVar2 = DAT_044116a4;
    local_2c = 0;
    local_28 = 0;
    *param_1 = *param_1 - fVar3;
    *param_2 = *param_2 - fVar5;
    if (piVar2 == (int *)0x0) {
      FUN_0402cd10(10,
                   "When looking for dimensions of the main game window , found that no main game window is set!"
                  );
    }
    else if (DAT_044116a0 == '\0') {
      (**(code **)(*piVar2 + 0x88))(piVar2,&local_2c,&local_28);
    }
    else {
      MainGameWindow_GetDisplayDimensions(0,&local_24,local_20);
      fVar3 = (float)local_24 / (float)DAT_0441169c;
      fVar5 = (float)local_20[0] / (float)DAT_04411698;
      if (fVar3 <= fVar5) {
        local_2c = local_24;
        local_28 = (int)(fVar3 * (float)DAT_04411698);
      }
      else {
        local_28 = local_20[0];
        local_2c = (int)(fVar5 * (float)DAT_0441169c);
      }
    }
    iVar1 = DAT_04411698;
    if (DAT_0441169c != local_2c) {
      *param_1 = ((float)DAT_0441169c * *param_1) / (float)local_2c;
    }
    if (iVar1 != local_28) {
      *param_2 = ((float)iVar1 * *param_2) / (float)local_28;
    }
  }
  if (DAT_044116c8 == '\0') {
    return;
  }
  if (0.0 <= *param_1) {
    if ((float)DAT_0441169c <= *param_1) {
      *param_1 = (float)(DAT_0441169c + -1);
      fVar3 = *param_2;
      goto joined_r0x0402d7b8;
    }
  }
  else {
    *param_1 = 0.0;
  }
  fVar3 = *param_2;
joined_r0x0402d7b8:
  if (fVar3 < 0.0) {
    *param_2 = 0.0;
  }
  else if ((float)DAT_04411698 <= fVar3) {
    *param_2 = (float)(DAT_04411698 + -1);
  }
  local_24 = 0;
  local_20[0] = 0;
  MainGameWindow_GetDisplayOrigin(&local_24,local_20);
  *param_1 = (float)local_24 + *param_1;
  *param_2 = (float)local_20[0] + *param_2;
  return;
}

// --- attached helper FUN_0002d9f0 @0x0402d9f0 (call-graph exclusive to this TU) ---
void FUN_0402d9f0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  int local_48;
  int local_44;
  int local_34;
  int local_30;
  int local_24;
  int local_20 [4];
  
  if (DAT_044116a4 != (int *)0x0) {
    piVar5 = DAT_044116a4;
    if (DAT_044116c8 != '\0') {
      local_24 = 0;
      local_20[0] = 0;
      MainGameWindow_GetDisplayOrigin(&local_24,local_20);
      piVar5 = DAT_044116a4;
      *param_1 = *param_1 - local_24;
      *param_2 = *param_2 - local_20[0];
    }
    *param_1 = *param_1 - piVar5[1];
    *param_2 = *param_2 - piVar5[2];
    iVar2 = DAT_0441169c;
    iVar1 = DAT_04411698;
    if (DAT_044116a0 != '\0') {
      MainGameWindow_GetDisplayDimensions(0,local_20,&local_24);
      fVar6 = (float)local_20[0] / (float)DAT_0441169c;
      fVar7 = (float)local_24 / (float)DAT_04411698;
      if (fVar7 < fVar6) {
        iVar4 = (int)(fVar7 * (float)DAT_0441169c);
        iVar3 = local_24;
      }
      else {
        iVar3 = (int)(fVar6 * (float)DAT_04411698);
        iVar4 = local_20[0];
      }
      if (iVar2 != iVar4) {
        *param_1 = (int)(((float)iVar4 * (float)*param_1) / (float)iVar2);
      }
      if (iVar1 != iVar3) {
        fVar6 = ceilf(((float)iVar3 * (float)*param_2) / (float)iVar1);
        *param_2 = (int)fVar6;
      }
      if (*param_1 < 0) {
        *param_1 = 0;
      }
      else if (iVar4 + -1 < *param_1) {
        *param_1 = iVar4 + -1;
      }
      if (*param_2 < 0) {
        *param_2 = 0;
      }
      else if (iVar3 + -1 < *param_2) {
        *param_2 = iVar3 + -1;
      }
      if (DAT_044116a4 == (int *)0x0) {
        FUN_0402cd10(10,
                     "When looking for origin of the main game window , found that no main game window is set!"
                    );
        local_48 = 0;
        local_44 = 0;
      }
      else {
        local_48 = 0;
        local_44 = 0;
        if (DAT_044116a0 != '\0') {
          local_48 = 0;
          local_44 = 0;
          MainGameWindow_GetDisplayDimensions(0,&local_24,local_20);
          fVar6 = (float)local_24 / (float)DAT_0441169c;
          fVar7 = (float)local_20[0] / (float)DAT_04411698;
          if (fVar6 <= fVar7) {
            local_48 = (local_20[0] - (int)(fVar6 * (float)DAT_04411698)) / 2;
          }
          else {
            local_44 = (local_24 - (int)(fVar7 * (float)DAT_0441169c)) / 2;
          }
        }
      }
      *param_1 = *param_1 + local_44;
      *param_2 = *param_2 + local_48;
    }
    (**(code **)(*piVar5 + 0x84))(piVar5,&local_34);
    *param_1 = *param_1 + local_34;
    *param_2 = *param_2 + local_30;
  }
  return;
}

