// Recovered source: eon2/src/core/gameControllers.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- GamepadMapping::InitializeFromMappingString @0x04010020 ---
/* source: gameControllers */

undefined4 GamepadMapping__InitializeFromMappingString(void *param_1,char *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  void *__dest;
  uint uVar5;
  size_t __size;
  byte bVar6;
  int iVar7;
  char *pcVar8;
  size_t __n;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  bool bVar12;
  byte bVar13;
  char *local_ac;
  char local_9c [64];
  char local_5c [76];
  
  bVar13 = 0;
  if (param_2 == (char *)0x0) {
    return 0;
  }
  local_ac = strchr(param_2,0x2c);
  if (local_ac == (char *)0x0) {
    FUN_0400a810("endOfGUID",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/gameControllers.cpp",0xce
                 ,"bool GamepadMapping::InitializeFromMappingString(const char*)");
  }
  uVar3 = (int)local_ac - (int)param_2 & 0xfffffffe;
  uVar10 = 0x20;
  if (uVar3 < 0x21) {
    uVar10 = uVar3;
  }
  bzero(param_1,0x10);
  if ((((uVar10 != 0) && ((byte)(*param_2 - 0x30U) < 0x37)) &&
      (cVar2 = *(char *)((int)&PTR_DAT_042da040 + (uint)(byte)(*param_2 - 0x30U)), cVar2 != -1)) &&
     (((byte)(param_2[1] - 0x30U) < 0x37 &&
      (bVar6 = *(byte *)((int)&PTR_DAT_042da040 + (uint)(byte)(param_2[1] - 0x30U)), bVar6 != 0xff))
     )) {
    uVar3 = 0;
    while( true ) {
      uVar5 = uVar3 + 2;
      *(byte *)((int)param_1 + (uVar3 >> 1)) = cVar2 << 4 | bVar6;
      if ((uVar10 <= uVar5) || (0x36 < (byte)(param_2[uVar5] - 0x30U))) break;
      cVar2 = *(char *)((int)&PTR_DAT_042da040 + (uint)(byte)(param_2[uVar5] - 0x30U));
      if ((cVar2 == -1) ||
         ((0x36 < (byte)(param_2[uVar3 + 3] - 0x30U) ||
          (bVar6 = *(byte *)((int)&PTR_DAT_042da040 + (uint)(byte)(param_2[uVar3 + 3] - 0x30U)),
          uVar3 = uVar5, bVar6 == 0xff)))) break;
    }
  }
  local_ac = local_ac + 1;
  pcVar4 = strchr(local_ac,0x2c);
  if (pcVar4 == (char *)0x0) {
    FUN_0402cd10(0x14,"Gamepad mapping: no comma after gamepad name");
    return 0;
  }
  pcVar8 = local_9c;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    pcVar8[2] = '\0';
    pcVar8[3] = '\0';
    pcVar8 = pcVar8 + (uint)bVar13 * -8 + 4;
  }
  pcVar8 = local_5c;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    pcVar8[2] = '\0';
    pcVar8[3] = '\0';
    pcVar8 = pcVar8 + ((uint)bVar13 * -2 + 1) * 4;
  }
  cVar2 = pcVar4[1];
  bVar12 = cVar2 == '\0';
  if (!bVar12) {
    iVar7 = 0;
    bVar1 = true;
    pcVar8 = pcVar4 + 1;
    do {
      while (cVar2 == ',') {
        iVar7 = 9;
        bVar12 = true;
        pcVar9 = local_9c;
        pcVar11 = "platform";
        do {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          bVar12 = *pcVar9 == *pcVar11;
          pcVar9 = pcVar9 + (uint)bVar13 * -2 + 1;
          pcVar11 = pcVar11 + (uint)bVar13 * -2 + 1;
        } while (bVar12);
        if (bVar12) {
          iVar7 = strcasecmp(local_5c,"Linux");
          if (iVar7 != 0) {
            FUN_0402cd10(0x14,
                         "Gamepads: mapping provided on Linux is for platform \'%s\', not Linux!",
                         local_5c);
          }
        }
        else {
          GamepadMapping__ApplyControlBinding();
        }
        pcVar8 = pcVar8 + 1;
        iVar7 = 0;
        bVar1 = true;
        bzero(local_9c,0x40);
        bzero(local_5c,0x40);
        cVar2 = *pcVar8;
        bVar12 = true;
        if (cVar2 == '\0') goto LAB_040101b4;
      }
      if (cVar2 == ':') {
        iVar7 = 0;
        bVar1 = false;
      }
      else if (cVar2 != ' ') {
        if (bVar1) {
          local_9c[iVar7] = cVar2;
        }
        else {
          local_5c[iVar7] = cVar2;
        }
        if (iVar7 < 0x3f) {
          iVar7 = iVar7 + 1;
        }
        else {
          FUN_0402cd10(0x14,"Gamepad mapping: control name too long");
        }
      }
      pcVar8 = pcVar8 + 1;
      cVar2 = *pcVar8;
      bVar12 = true;
    } while (cVar2 != '\0');
  }
LAB_040101b4:
  iVar7 = 9;
  pcVar8 = local_9c;
  pcVar9 = "platform";
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    bVar12 = *pcVar8 == *pcVar9;
    pcVar8 = pcVar8 + (uint)bVar13 * -2 + 1;
    pcVar9 = pcVar9 + (uint)bVar13 * -2 + 1;
  } while (bVar12);
  if (bVar12) {
    iVar7 = strcasecmp(local_5c,"Linux");
    if (iVar7 != 0) {
      FUN_0402cd10(0x14,"Gamepads: mapping provided on Linux is for platform \'%s\', not Linux!",
                   local_5c);
    }
  }
  else {
    GamepadMapping__ApplyControlBinding();
  }
  __n = (int)pcVar4 - (int)local_ac;
  if (__n == 0) {
    __size = 0xf;
    __n = 0xe;
    local_ac = "Unnamed device";
  }
  else {
    __size = __n + 1;
  }
  __dest = malloc(__size);
  *(void **)((int)param_1 + 0x10) = __dest;
  memcpy(__dest,local_ac,__n);
  *(undefined1 *)(*(int *)((int)param_1 + 0x10) + __n) = 0;
  return 1;
}

