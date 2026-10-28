// Recovered source: eon2/projects/saintsrow2/linux//../../../src/core/gameControllers.h
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- GamepadControl::SetInitialMinMaxValues @0x0401c9c0 ---
/* source: gameControllers */

void GamepadControl__SetInitialMinMaxValues(void)

{
  byte *pbVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  ssize_t sVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ushort uVar25;
  int *piVar26;
  byte *pbVar27;
  int *piVar28;
  byte *pbVar29;
  bool bVar30;
  undefined4 local_44 [6];
  undefined1 local_2c [8];
  undefined2 local_24;
  ushort local_22;
  undefined4 local_20;
  
  ApplySDLGamepadConfigEnv();
  bVar2 = false;
  if (DAT_04411525 != '\0') {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_044114c8);
    if (DAT_0441120c != (int *)0x0) {
      piVar28 = (int *)0x0;
      piVar5 = DAT_0441120c;
      do {
        while (*(char *)(piVar5[0x8b] + 0x2d) == '\0') {
          piVar26 = (int *)piVar5[0x8a];
          piVar28 = piVar5;
          piVar5 = DAT_0441120c;
LAB_0401d3b8:
          DAT_0441120c = piVar5;
          piVar5 = piVar26;
          if (piVar26 == (int *)0x0) goto LAB_0401d405;
        }
        FUN_0402cd10(0x14,"Gamepads: removing device: %s",piVar5[9]);
        piVar26 = (int *)piVar5[0x8a];
        (**(code **)(*piVar5 + 0xc))(piVar5);
        piVar5 = piVar26;
        if (piVar28 == (int *)0x0) goto LAB_0401d3b8;
        piVar28[0x8a] = (int)piVar26;
      } while (piVar26 != (int *)0x0);
    }
LAB_0401d405:
    if (DAT_044114c4 != (byte *)0x0) {
      pbVar1 = DAT_044114c4;
      pbVar29 = (byte *)0x0;
      do {
        while (pbVar27 = pbVar1, pbVar27[0x2d] != 0) {
          iVar4 = *(int *)(pbVar27 + 0x4e8);
          pbVar1 = *(byte **)(pbVar27 + 0x4f4);
          if (iVar4 != -1) {
            uVar25 = *(ushort *)(pbVar27 + 0x4ec);
            if (uVar25 != 0xffff) {
              if (pbVar27[0x4f2] != 0) {
                local_24 = 0x15;
                local_20 = 0;
                local_22 = uVar25;
                sVar8 = write((uint)uVar25,local_2c,0x10);
                if (sVar8 < 0) {
                  FUN_0402cd10(10,"Force feedback effect stop failed!");
                  uVar25 = *(ushort *)(pbVar27 + 0x4ec);
                  iVar4 = *(int *)(pbVar27 + 0x4e8);
                }
                else {
                  pbVar27[0x4f2] = 0;
                  uVar25 = *(ushort *)(pbVar27 + 0x4ec);
                  iVar4 = *(int *)(pbVar27 + 0x4e8);
                }
              }
              iVar4 = ioctl(iVar4,0x40044581,(uint)uVar25);
              if (iVar4 < 0) {
                FUN_0402cd10(10,"Force feedback effect destroy failed!");
              }
              pbVar27[0x4ec] = 0xff;
              pbVar27[0x4ed] = 0xff;
              iVar4 = *(int *)(pbVar27 + 0x4e8);
            }
            close(iVar4);
            pbVar27[0x4e8] = 0xff;
            pbVar27[0x4e9] = 0xff;
            pbVar27[0x4ea] = 0xff;
            pbVar27[0x4eb] = 0xff;
          }
          if (*(int *)(pbVar27 + 0x4e0) != 0) {
            close(*(int *)(pbVar27 + 0x4e0));
            pbVar27[0x4e0] = 0;
            pbVar27[0x4e1] = 0;
            pbVar27[0x4e2] = 0;
            pbVar27[0x4e3] = 0;
          }
          if (*(void **)(pbVar27 + 0x28) != (void *)0x0) {
            free(*(void **)(pbVar27 + 0x28));
            pbVar27[0x28] = 0;
            pbVar27[0x29] = 0;
            pbVar27[0x2a] = 0;
            pbVar27[0x2b] = 0;
          }
          if (*(void **)(pbVar27 + 0x4dc) != (void *)0x0) {
            free(*(void **)(pbVar27 + 0x4dc));
            pbVar27[0x4dc] = 0;
            pbVar27[0x4dd] = 0;
            pbVar27[0x4de] = 0;
            pbVar27[0x4df] = 0;
          }
          operator_delete(pbVar27);
          pbVar27 = pbVar1;
          if (pbVar29 != (byte *)0x0) {
            *(byte **)(pbVar29 + 0x4f4) = pbVar1;
            pbVar27 = DAT_044114c4;
          }
          DAT_044114c4 = pbVar27;
          if (pbVar1 == (byte *)0x0) goto LAB_0401d4f9;
        }
        pbVar1 = *(byte **)(pbVar27 + 0x4f4);
        pbVar29 = pbVar27;
      } while (*(byte **)(pbVar27 + 0x4f4) != (byte *)0x0);
    }
LAB_0401d4f9:
    DAT_04411525 = '\0';
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_044114c8);
    bVar2 = true;
  }
  piVar5 = DAT_0441120c;
  if (DAT_04411524 != '\0') {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_044114c8);
    for (pbVar1 = DAT_044114c4; pbVar1 != (byte *)0x0; pbVar1 = *(byte **)(pbVar1 + 0x4f4)) {
      if (pbVar1[0x2c] != 0) {
        if (pbVar1[0x2d] == 0) {
          iVar4 = FUN_04010c20(pbVar1);
          if (iVar4 == 0) {
            uVar9 = (uint)pbVar1[0xf];
            uVar10 = (uint)pbVar1[0xe];
            uVar11 = (uint)pbVar1[0xd];
            uVar12 = (uint)pbVar1[0xc];
            uVar13 = (uint)pbVar1[0xb];
            uVar14 = (uint)pbVar1[10];
            uVar15 = (uint)pbVar1[9];
            uVar16 = (uint)pbVar1[8];
            uVar17 = (uint)pbVar1[7];
            uVar18 = (uint)pbVar1[6];
            uVar19 = (uint)pbVar1[5];
            uVar20 = (uint)pbVar1[4];
            uVar21 = (uint)pbVar1[3];
            uVar22 = (uint)pbVar1[2];
            uVar23 = (uint)pbVar1[1];
            uVar24 = (uint)*pbVar1;
            FUN_0402cd10(0xf,
                         "Gamepads: Device couldn\'t be activated, because no SDL mapping for device GUID %02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x has been found!"
                         ,uVar24,uVar23,uVar22,uVar21,uVar20,uVar19,uVar18,uVar17,uVar16,uVar15,
                         uVar14,uVar13,uVar12,uVar11,uVar10,uVar9);
            if (DAT_04411526 == '\0') {
              FUN_0402cd10(0x14,
                           "Gamepads:     To activate the device, please provide the appropriate mapping in SDL2 format through command-line ( --eon_gamepad_mapping= option ),"
                           ,uVar24,uVar23,uVar22,uVar21,uVar20,uVar19,uVar18,uVar17,uVar16,uVar15,
                           uVar14,uVar13,uVar12,uVar11,uVar10,uVar9);
              FUN_0402cd10(0x14,
                           "Gamepads:     SDL_GAMECONTROLLERCONFIG environment variable, or SDLGamepad.config file, located in game data folder."
                          );
              FUN_0402cd10(0x14,
                           "Gamepads:     SDL2 format mapping strings can be determined using Steam Big Picture configurator."
                          );
              DAT_04411526 = '\x01';
            }
          }
          else {
            piVar5 = operator_new(0x240);
            *piVar5 = (int)&PTR___cxa_pure_virtual_042dd870;
            piVar5[0xd] = 0;
            piVar5[0xe] = 0;
            piVar5[0x13] = 0;
            piVar5[0x14] = 0;
            piVar5[0x19] = 0;
            piVar5[0x1a] = 0;
            piVar5[0x1f] = 0;
            piVar5[0x20] = 0;
            piVar5[0x25] = 0;
            piVar5[0x26] = 0;
            piVar5[9] = 0;
            piVar5[10] = (int)&DAT_000186a0;
            piVar5[0xb] = -100000;
            piVar5[0xc] = 0;
            *(undefined1 *)(piVar5 + 0xf) = 0;
            *(undefined1 *)((int)piVar5 + 0x3d) = 0;
            piVar5[0x10] = (int)&DAT_000186a0;
            piVar5[0x11] = -100000;
            piVar5[0x12] = 0;
            *(undefined1 *)(piVar5 + 0x15) = 0;
            *(undefined1 *)((int)piVar5 + 0x55) = 0;
            piVar5[0x16] = (int)&DAT_000186a0;
            piVar5[0x17] = -100000;
            piVar5[0x18] = 0;
            *(undefined1 *)(piVar5 + 0x1b) = 0;
            *(undefined1 *)((int)piVar5 + 0x6d) = 0;
            piVar5[0x1c] = (int)&DAT_000186a0;
            piVar5[0x1d] = -100000;
            piVar5[0x1e] = 0;
            *(undefined1 *)(piVar5 + 0x21) = 0;
            *(undefined1 *)((int)piVar5 + 0x85) = 0;
            piVar5[0x22] = (int)&DAT_000186a0;
            piVar5[0x23] = -100000;
            piVar5[0x24] = 0;
            *(undefined1 *)(piVar5 + 0x27) = 0;
            *(undefined1 *)((int)piVar5 + 0x9d) = 0;
            piVar5[0x28] = (int)&DAT_000186a0;
            piVar5[0x2b] = 0;
            piVar5[0x2c] = 0;
            piVar5[0x31] = 0;
            piVar5[0x32] = 0;
            piVar5[0x37] = 0;
            piVar5[0x38] = 0;
            piVar5[0x3d] = 0;
            piVar5[0x3e] = 0;
            piVar5[0x43] = 0;
            piVar5[0x44] = 0;
            piVar5[0x49] = 0;
            piVar5[0x4a] = 0;
            piVar5[0x29] = -100000;
            piVar5[0x2a] = 0;
            *(undefined1 *)(piVar5 + 0x2d) = 0;
            *(undefined1 *)((int)piVar5 + 0xb5) = 0;
            piVar5[0x2e] = (int)&DAT_000186a0;
            piVar5[0x2f] = -100000;
            piVar5[0x30] = 0;
            *(undefined1 *)(piVar5 + 0x33) = 0;
            *(undefined1 *)((int)piVar5 + 0xcd) = 0;
            piVar5[0x34] = (int)&DAT_000186a0;
            piVar5[0x35] = -100000;
            piVar5[0x36] = 0;
            *(undefined1 *)(piVar5 + 0x39) = 0;
            *(undefined1 *)((int)piVar5 + 0xe5) = 0;
            piVar5[0x3a] = (int)&DAT_000186a0;
            piVar5[0x3b] = -100000;
            piVar5[0x3c] = 0;
            *(undefined1 *)(piVar5 + 0x3f) = 0;
            *(undefined1 *)((int)piVar5 + 0xfd) = 0;
            piVar5[0x40] = (int)&DAT_000186a0;
            piVar5[0x41] = -100000;
            piVar5[0x42] = 0;
            *(undefined1 *)(piVar5 + 0x45) = 0;
            *(undefined1 *)((int)piVar5 + 0x115) = 0;
            piVar5[0x46] = (int)&DAT_000186a0;
            piVar5[0x47] = -100000;
            piVar5[0x48] = 0;
            *(undefined1 *)(piVar5 + 0x4b) = 0;
            piVar5[0x4f] = 0;
            piVar5[0x50] = 0;
            piVar5[0x55] = 0;
            piVar5[0x56] = 0;
            piVar5[0x5b] = 0;
            piVar5[0x5c] = 0;
            piVar5[0x61] = 0;
            piVar5[0x62] = 0;
            piVar5[0x67] = 0;
            piVar5[0x68] = 0;
            *(undefined1 *)((int)piVar5 + 0x12d) = 0;
            piVar5[0x4c] = (int)&DAT_000186a0;
            piVar5[0x4d] = -100000;
            piVar5[0x4e] = 0;
            *(undefined1 *)(piVar5 + 0x51) = 0;
            *(undefined1 *)((int)piVar5 + 0x145) = 0;
            piVar5[0x52] = (int)&DAT_000186a0;
            piVar5[0x53] = -100000;
            piVar5[0x54] = 0;
            *(undefined1 *)(piVar5 + 0x57) = 0;
            *(undefined1 *)((int)piVar5 + 0x15d) = 0;
            piVar5[0x58] = (int)&DAT_000186a0;
            piVar5[0x59] = -100000;
            piVar5[0x5a] = 0;
            *(undefined1 *)(piVar5 + 0x5d) = 0;
            *(undefined1 *)((int)piVar5 + 0x175) = 0;
            piVar5[0x5e] = (int)&DAT_000186a0;
            piVar5[0x5f] = -100000;
            piVar5[0x60] = 0;
            *(undefined1 *)(piVar5 + 99) = 0;
            *(undefined1 *)((int)piVar5 + 0x18d) = 0;
            piVar5[100] = (int)&DAT_000186a0;
            piVar5[0x65] = -100000;
            piVar5[0x66] = 0;
            *(undefined1 *)(piVar5 + 0x69) = 0;
            *(undefined1 *)((int)piVar5 + 0x1a5) = 0;
            piVar5[0x6a] = (int)&DAT_000186a0;
            piVar5[0x6b] = -100000;
            piVar5[0x6c] = 0;
            piVar5[0x6d] = 0;
            piVar5[0x6e] = 0;
            piVar5[0x73] = 0;
            piVar5[0x74] = 0;
            piVar5[0x79] = 0;
            piVar5[0x7a] = 0;
            piVar5[0x7f] = 0;
            piVar5[0x80] = 0;
            piVar5[0x85] = 0;
            piVar5[0x86] = 0;
            *(undefined1 *)(piVar5 + 0x6f) = 0;
            *(undefined1 *)((int)piVar5 + 0x1bd) = 0;
            piVar5[0x70] = (int)&DAT_000186a0;
            piVar5[0x71] = -100000;
            piVar5[0x72] = 0;
            *(undefined1 *)(piVar5 + 0x75) = 0;
            *(undefined1 *)((int)piVar5 + 0x1d5) = 0;
            piVar5[0x76] = (int)&DAT_000186a0;
            piVar5[0x77] = -100000;
            piVar5[0x78] = 0;
            *(undefined1 *)(piVar5 + 0x7b) = 0;
            *(undefined1 *)((int)piVar5 + 0x1ed) = 0;
            piVar5[0x7c] = (int)&DAT_000186a0;
            piVar5[0x7d] = -100000;
            piVar5[0x7e] = 0;
            *(undefined1 *)(piVar5 + 0x81) = 0;
            *(undefined1 *)((int)piVar5 + 0x205) = 0;
            piVar5[0x82] = (int)&DAT_000186a0;
            piVar5[0x83] = -100000;
            piVar5[0x84] = 0;
            *(undefined1 *)(piVar5 + 0x87) = 0;
            *(undefined1 *)((int)piVar5 + 0x21d) = 0;
            *(undefined1 *)(piVar5 + 0x88) = 1;
            *(undefined1 *)((int)piVar5 + 0x221) = 0;
            piVar5[0x89] = 0;
            piVar5[0x8a] = 0;
            bzero(piVar5 + 1,0x10);
            bzero(piVar5 + 5,0x10);
            pcVar6 = *(char **)(pbVar1 + 0x28);
            *(undefined1 *)(piVar5 + 0xf) = 1;
            *(undefined1 *)(piVar5 + 0x15) = 1;
            *(undefined1 *)(piVar5 + 0x1b) = 1;
            *(undefined1 *)(piVar5 + 0x21) = 1;
            *(undefined1 *)(piVar5 + 0x27) = 1;
            *(undefined1 *)(piVar5 + 0x2d) = 1;
            *(undefined1 *)((int)piVar5 + 0x9d) = 1;
            *(undefined1 *)((int)piVar5 + 0xb5) = 1;
            *piVar5 = (int)&PTR_eON_GamepadLinux__UpdateControlValues_042dd858;
            piVar5[0x8c] = -1;
            piVar5[0x8d] = -1;
            piVar5[0x8e] = -1;
            piVar5[0x8f] = -1;
            *(undefined1 *)(piVar5 + 0x88) = 0;
            piVar5[0x8b] = (int)pbVar1;
            piVar5[0x89] = iVar4;
            pcVar6 = strdup(pcVar6);
            bVar30 = DAT_04411208 == '\0';
            piVar5[9] = (int)pcVar6;
            *(byte *)((int)piVar5 + 0x221) = pbVar1[0x4e4];
            piVar5[1] = *(int *)pbVar1;
            piVar5[2] = *(int *)(pbVar1 + 4);
            piVar5[3] = *(int *)(pbVar1 + 8);
            piVar5[4] = *(int *)(pbVar1 + 0xc);
            piVar5[5] = *(int *)(pbVar1 + 0x10);
            piVar5[6] = *(int *)(pbVar1 + 0x14);
            piVar5[7] = *(int *)(pbVar1 + 0x18);
            piVar5[8] = *(int *)(pbVar1 + 0x1c);
            if (bVar30) {
              if ((char)piVar5[0xf] == '\0') {
                FUN_0400a810(&DAT_042dd82b,
                             "/home/peterm/Development/Projects/eon2-sr2/eon2/projects/saintsrow2/linux//../../../src/core/gameControllers.h"
                             ,0x93,"void GamepadControl::SetInitialMinMaxValues()");
              }
              iVar4 = piVar5[10];
              if (iVar4 < -0x7fff) {
                iVar7 = piVar5[0xb];
              }
              else {
                iVar7 = piVar5[0xb];
                piVar5[10] = -0x8000;
                iVar4 = -0x8000;
                *(double *)(piVar5 + 0xd) = (double)(iVar7 + 0x8000);
              }
              if ((iVar7 < -0x8000) || (piVar5[0xc] = -0x8000, iVar7 < 0x7fff)) {
                piVar5[0xb] = 0x7fff;
                *(double *)(piVar5 + 0xd) = (double)(0x7fff - iVar4);
              }
              piVar5[0xc] = ~-(uint)(*(char *)((int)piVar5 + 0x3d) == '\0') & 0xffff8000;
              if ((char)piVar5[0x15] == '\0') {
                FUN_0400a810(&DAT_042dd82b,
                             "/home/peterm/Development/Projects/eon2-sr2/eon2/projects/saintsrow2/linux//../../../src/core/gameControllers.h"
                             ,0x93,"void GamepadControl::SetInitialMinMaxValues()");
              }
              iVar4 = piVar5[0x10];
              if (iVar4 < -0x7fff) {
                iVar7 = piVar5[0x11];
              }
              else {
                iVar7 = piVar5[0x11];
                piVar5[0x10] = -0x8000;
                iVar4 = -0x8000;
                *(double *)(piVar5 + 0x13) = (double)(iVar7 + 0x8000);
              }
              if ((iVar7 < -0x8000) || (piVar5[0x12] = -0x8000, iVar7 < 0x7fff)) {
                piVar5[0x11] = 0x7fff;
                *(double *)(piVar5 + 0x13) = (double)(0x7fff - iVar4);
              }
              piVar5[0x12] = ~-(uint)(*(char *)((int)piVar5 + 0x55) == '\0') & 0xffff8000;
              if ((char)piVar5[0x1b] == '\0') {
                FUN_0400a810(&DAT_042dd82b,
                             "/home/peterm/Development/Projects/eon2-sr2/eon2/projects/saintsrow2/linux//../../../src/core/gameControllers.h"
                             ,0x93,"void GamepadControl::SetInitialMinMaxValues()");
              }
              iVar4 = piVar5[0x16];
              if (iVar4 < -0x7fff) {
                iVar7 = piVar5[0x17];
              }
              else {
                iVar7 = piVar5[0x17];
                piVar5[0x16] = -0x8000;
                iVar4 = -0x8000;
                *(double *)(piVar5 + 0x19) = (double)(iVar7 + 0x8000);
              }
              if ((iVar7 < -0x8000) || (piVar5[0x18] = -0x8000, iVar7 < 0x7fff)) {
                piVar5[0x17] = 0x7fff;
                *(double *)(piVar5 + 0x19) = (double)(0x7fff - iVar4);
              }
              piVar5[0x18] = ~-(uint)(*(char *)((int)piVar5 + 0x6d) == '\0') & 0xffff8000;
              if ((char)piVar5[0x21] == '\0') {
                FUN_0400a810(&DAT_042dd82b,
                             "/home/peterm/Development/Projects/eon2-sr2/eon2/projects/saintsrow2/linux//../../../src/core/gameControllers.h"
                             ,0x93,"void GamepadControl::SetInitialMinMaxValues()");
              }
              iVar4 = piVar5[0x1c];
              if (iVar4 < -0x7fff) {
                iVar7 = piVar5[0x1d];
              }
              else {
                iVar7 = piVar5[0x1d];
                piVar5[0x1c] = -0x8000;
                iVar4 = -0x8000;
                *(double *)(piVar5 + 0x1f) = (double)(iVar7 + 0x8000);
              }
              if ((iVar7 < -0x8000) || (piVar5[0x1e] = -0x8000, iVar7 < 0x7fff)) {
                piVar5[0x1d] = 0x7fff;
                *(double *)(piVar5 + 0x1f) = (double)(0x7fff - iVar4);
              }
              piVar5[0x1e] = ~-(uint)(*(char *)((int)piVar5 + 0x85) == '\0') & 0xffff8000;
              if ((char)piVar5[0x27] == '\0') {
                FUN_0400a810(&DAT_042dd82b,
                             "/home/peterm/Development/Projects/eon2-sr2/eon2/projects/saintsrow2/linux//../../../src/core/gameControllers.h"
                             ,0x93,"void GamepadControl::SetInitialMinMaxValues()");
              }
              iVar4 = piVar5[0x22];
              if (iVar4 < -0x7fff) {
                iVar7 = piVar5[0x23];
              }
              else {
                piVar5[0x22] = -0x8000;
                iVar7 = piVar5[0x23];
                iVar4 = -0x8000;
                *(double *)(piVar5 + 0x25) = (double)(iVar7 + 0x8000);
              }
              if ((iVar7 < -0x8000) || (piVar5[0x24] = -0x8000, iVar7 < 0x7fff)) {
                piVar5[0x23] = 0x7fff;
                *(double *)(piVar5 + 0x25) = (double)(0x7fff - iVar4);
              }
              piVar5[0x24] = ~-(uint)(*(char *)((int)piVar5 + 0x9d) == '\0') & 0xffff8000;
              if ((char)piVar5[0x2d] == '\0') {
                FUN_0400a810(&DAT_042dd82b,
                             "/home/peterm/Development/Projects/eon2-sr2/eon2/projects/saintsrow2/linux//../../../src/core/gameControllers.h"
                             ,0x93,"void GamepadControl::SetInitialMinMaxValues()");
              }
              iVar4 = piVar5[0x28];
              if (iVar4 < -0x7fff) {
                iVar7 = piVar5[0x29];
              }
              else {
                piVar5[0x28] = -0x8000;
                iVar7 = piVar5[0x29];
                iVar4 = -0x8000;
                *(double *)(piVar5 + 0x2b) = (double)(iVar7 + 0x8000);
              }
              if ((iVar7 < -0x8000) || (piVar5[0x2a] = -0x8000, iVar7 < 0x7fff)) {
                piVar5[0x29] = 0x7fff;
                *(double *)(piVar5 + 0x2b) = (double)(0x7fff - iVar4);
              }
              piVar5[0x2a] = ~-(uint)(*(char *)((int)piVar5 + 0xb5) == '\0') & 0xffff8000;
            }
            iVar4 = 0;
            piVar28 = piVar5;
            piVar5[0x8a] = (int)DAT_0441120c;
            DAT_0441120c = piVar28;
            do {
              if (iVar4 == 0x10) {
                iVar4 = 0x18;
              }
              if ((pbVar1[(iVar4 + 3) * 0x10 + 5] != 0) &&
                 (iVar7 = ioctl(*(int *)(pbVar1 + 0x4e0),iVar4 + 0x40U | 0x80184500,local_44),
                 -1 < iVar7)) {
                Gamepad_CleanupAxisValue(pbVar1,iVar4,local_44);
                eON_GamepadLinux__ControlValueUpdate
                          (piVar5,2,pbVar1[(iVar4 + 3) * 0x10 + 4],local_44[0]);
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < 0x28);
            FUN_0402cd10(0x14,
                         "Gamepads: SDL mapping %02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x present, device \'%s\' active"
                         ,*pbVar1,pbVar1[1],pbVar1[2],pbVar1[3],pbVar1[4],pbVar1[5],pbVar1[6],
                         pbVar1[7],pbVar1[8],pbVar1[9],pbVar1[10],pbVar1[0xb],pbVar1[0xc],
                         pbVar1[0xd],pbVar1[0xe],pbVar1[0xf],piVar5[9]);
          }
        }
        pbVar1[0x2c] = 0;
      }
    }
    DAT_04411524 = '\0';
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_044114c8);
    piVar5 = DAT_0441120c;
  }
  for (; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[0x8a]) {
    if (((char)piVar5[0x88] == '\0') && (*(char *)(piVar5[0x8b] + 0x4f3) != '\0')) {
      *(undefined1 *)(piVar5 + 0x88) = 1;
      bVar2 = true;
    }
  }
  if (bVar2) {
    uVar3 = eON_GetTopWindow(0);
    eON_Int_SendMessageA_Checked(uVar3,0x219,7,0);
  }
  return;
}

