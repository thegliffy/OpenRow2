// Recovered source: eon2/src/dlls/directx/dinput8/directinputgamepaddevice8imp.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- DirectInputGamepadDeviceImp::GetDeviceState @0x040f3e90 ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* source: directinputgamepaddevice8imp */

undefined4 DirectInputGamepadDeviceImp__GetDeviceState(int param_1,size_t param_2,void *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  int local_28;
  int local_24;
  
  GamepadControl__SetInitialMinMaxValues();
  puVar1 = (undefined4 *)FUN_04010e80(param_1 + 0x20);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0x8007001e;
  }
  else {
    bzero(param_3,param_2);
    (**(code **)*puVar1)(puVar1);
    local_24 = *(int *)(param_1 + 0x58);
    local_28 = *(int *)(param_1 + 0x54);
    uVar2 = 0;
    if (local_24 - local_28 >> 5 != 0) {
      iVar9 = 0;
      do {
        iVar6 = iVar9 * 0x20;
        piVar3 = (int *)(iVar6 + local_28);
        iVar5 = piVar3[4];
        if ((int)param_2 < piVar3[3] + iVar5) {
          FUN_0402cd10(10,"Device element positioned beyond data buffer supplied! Ignoring.");
          local_24 = *(int *)(param_1 + 0x58);
          local_28 = *(int *)(param_1 + 0x54);
          if ((uint)(local_24 - local_28 >> 5) <= iVar9 + 1U) {
            return 0;
          }
        }
        else {
          if (*piVar3 == 1) {
            if (iVar5 != 1) {
              FUN_0400a810("mElementOffsets[i].ValueSize == 1",
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/dinput8/directinputgamepaddevice8imp.cpp"
                           ,0x2cd,
                           "virtual HRESULT DirectInputGamepadDeviceImp::GetDeviceState(DWORD, LPVOID)"
                          );
              local_28 = *(int *)(param_1 + 0x54);
            }
            iVar5 = *(int *)(iVar6 + local_28 + 4);
            if (*(char *)((int)puVar1 + iVar5 * 0x18 + 0xcd) == '\0') {
              if (*(char *)(puVar1 + iVar5 * 6 + 0x33) == '\0') {
                iVar4 = puVar1[iVar5 * 6 + 0x2e];
                if (iVar4 < (int)puVar1[iVar5 * 6 + 0x2f]) {
                  cVar7 = (iVar4 != puVar1[iVar5 * 6 + 0x30]) << 7;
                }
                else {
                  cVar7 = '\0';
                  if ((iVar4 == puVar1[iVar5 * 6 + 0x2f]) &&
                     (cVar7 = '\0', 0 < (int)puVar1[iVar5 * 6 + 0x30])) {
                    cVar7 = -0x80;
                  }
                }
              }
              else {
                cVar7 = '\0';
                if ((int)puVar1[iVar5 * 6 + 0x2e] < (int)puVar1[iVar5 * 6 + 0x2f]) {
                  cVar7 = (char)((int)(((double)(int)(puVar1[iVar5 * 6 + 0x30] -
                                                     puVar1[iVar5 * 6 + 0x2e]) * _DAT_042dd9c8) /
                                      *(double *)(puVar1 + iVar5 * 6 + 0x31)) << 7);
                }
              }
            }
            else {
              cVar7 = '\0';
              if ((int)puVar1[iVar5 * 6 + 0x2e] < (int)puVar1[iVar5 * 6 + 0x2f]) {
                cVar7 = (char)((int)(((double)(int)(puVar1[iVar5 * 6 + 0x30] -
                                                   puVar1[iVar5 * 6 + 0x2e]) * _DAT_042dd9d0) /
                                    *(double *)(puVar1 + iVar5 * 6 + 0x31)) << 7);
              }
            }
            *(char *)((int)param_3 + *(int *)(iVar6 + local_28 + 0xc)) = cVar7;
            local_24 = *(int *)(param_1 + 0x58);
            local_28 = *(int *)(param_1 + 0x54);
          }
          else if (*piVar3 == 2) {
            *(undefined4 *)((int)param_3 + piVar3[3]) = 0;
          }
          else {
            if (iVar5 != 4) {
              FUN_0400a810("mElementOffsets[i].ValueSize == 4",
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/dinput8/directinputgamepaddevice8imp.cpp"
                           ,0x2b3,
                           "virtual HRESULT DirectInputGamepadDeviceImp::GetDeviceState(DWORD, LPVOID)"
                          );
              local_28 = *(int *)(param_1 + 0x54);
            }
            iVar6 = iVar6 + local_28;
            iVar5 = *(int *)(iVar6 + 4);
            fVar12 = _DAT_0430c314;
            if (*(char *)((int)puVar1 + iVar5 * 0x18 + 0x3d) == '\0') {
              if (*(char *)(puVar1 + iVar5 * 6 + 0xf) == '\0') {
                iVar4 = puVar1[iVar5 * 6 + 10];
                if (iVar4 < (int)puVar1[iVar5 * 6 + 0xb]) {
                  uVar8 = (uint)(iVar4 != puVar1[iVar5 * 6 + 0xc]);
                  fVar12 = (float)(uVar8 + 0x8000) / _DAT_042e09f0;
                }
                else {
                  uVar8 = 0;
                  if ((iVar4 == puVar1[iVar5 * 6 + 0xb]) &&
                     (uVar8 = 1, fVar12 = DAT_0430c310, (int)puVar1[iVar5 * 6 + 0xc] < 1)) {
                    uVar8 = 0;
                    fVar12 = _DAT_0430c314;
                  }
                }
              }
              else {
                uVar8 = 0;
                if ((int)puVar1[iVar5 * 6 + 10] < (int)puVar1[iVar5 * 6 + 0xb]) {
                  iVar5 = (int)(((double)(int)(puVar1[iVar5 * 6 + 0xc] - puVar1[iVar5 * 6 + 10]) *
                                _DAT_042dd9c8) / *(double *)(puVar1 + iVar5 * 6 + 0xd));
                  uVar8 = iVar5 - 0x8000;
                  fVar12 = (float)iVar5 / _DAT_042e09f0;
                }
              }
            }
            else {
              uVar8 = 0;
              if ((int)puVar1[iVar5 * 6 + 10] < (int)puVar1[iVar5 * 6 + 0xb]) {
                uVar8 = (uint)(((double)(int)(puVar1[iVar5 * 6 + 0xc] - puVar1[iVar5 * 6 + 10]) *
                               _DAT_042dd9d0) / *(double *)(puVar1 + iVar5 * 6 + 0xd));
                fVar12 = (float)(int)(uVar8 + 0x8000) / _DAT_042e09f0;
              }
            }
            iVar5 = *(int *)(iVar6 + 0x14);
            iVar10 = *(int *)(iVar6 + 0x18) - iVar5;
            iVar4 = *(int *)(iVar6 + 0x18) + iVar5 >> 1;
            uVar11 = (int)(uVar8 - iVar4) >> 0x1f;
            if ((iVar10 >> 1) * *(int *)(iVar6 + 0x1c) <=
                (int)(((uVar8 - iVar4 ^ uVar11) - uVar11) * 10000)) {
              iVar4 = (int)((float)iVar10 * fVar12) + iVar5;
            }
            *(int *)((int)param_3 + *(int *)(iVar6 + 0xc)) = iVar4;
            local_24 = *(int *)(param_1 + 0x58);
            local_28 = *(int *)(param_1 + 0x54);
          }
          if ((uint)(local_24 - local_28 >> 5) <= iVar9 + 1U) {
            return 0;
          }
        }
        iVar9 = iVar9 + 1;
      } while( true );
    }
  }
  return uVar2;
}

// --- DirectInputGamepadDeviceImp::SetDataFormat @0x040f3990 ---
/* source: directinputgamepaddevice8imp */

undefined4 directinputgamepaddevice8imp_040f3990(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int local_50;
  int local_44;
  
  GamepadControl__SetInitialMinMaxValues();
  iVar2 = FUN_04010e80(param_1 + 0x20);
  if (iVar2 == 0) {
    uVar4 = 0x8007001e;
  }
  else {
    if (*(void **)(param_1 + 0x50) != (void *)0x0) {
      free(*(void **)(param_1 + 0x50));
    }
    *(undefined4 *)(param_1 + 0x3c) = *param_2;
    *(undefined4 *)(param_1 + 0x40) = param_2[1];
    *(undefined4 *)(param_1 + 0x44) = param_2[2];
    *(undefined4 *)(param_1 + 0x48) = param_2[3];
    *(undefined4 *)(param_1 + 0x4c) = param_2[4];
    iVar2 = param_2[4];
    iVar12 = param_2[1];
    *(undefined4 *)(param_1 + 0x50) = param_2[5];
    pvVar3 = calloc(1,iVar2 * iVar12);
    *(void **)(param_1 + 0x50) = pvVar3;
    memcpy(pvVar3,(void *)param_2[5],iVar2 * iVar12);
    FUN_0402cd10(0x14,"data format: num objs %u",*(undefined4 *)(param_1 + 0x4c));
    uVar4 = 0;
    if (*(int *)(param_1 + 0x4c) != 0) {
      uVar8 = 0;
      local_44 = 0;
      local_50 = 0;
      do {
        while( true ) {
          piVar5 = (int *)(uVar8 * 0x10 + *(int *)(param_1 + 0x50));
          iVar2 = piVar5[2];
          iVar12 = piVar5[3];
          iVar14 = piVar5[1];
          pcVar10 = (char *)*piVar5;
          iVar11 = iVar2;
          iVar13 = iVar12;
          FUN_0402cd10(0x14,"obj %u: GUID %p, type %u (%#x), flags %u (%#x), offset %u",uVar8,
                       pcVar10,iVar2,iVar2,iVar12,iVar12,iVar14);
          uVar9 = piVar5[2];
          if ((uVar9 & 0xc) == 0) break;
          if (local_50 == 0xf) {
            FUN_0402cd10(10,
                         "couldn\'t map button at data struture offset %u, no such button on gamepad"
                         ,piVar5[1],pcVar10,iVar2,iVar11,iVar12,iVar13,iVar14);
          }
          else {
            puVar1 = *(undefined4 **)(param_1 + 0x58);
            iVar2 = piVar5[1];
            if (puVar1 == *(undefined4 **)(param_1 + 0x5c)) {
              FUN_040f3780();
            }
            else {
              if (puVar1 != (undefined4 *)0x0) {
                *puVar1 = 1;
                puVar1[1] = local_50;
                puVar1[2] = local_50;
                puVar1[3] = iVar2;
                puVar1[4] = 1;
                puVar1[5] = 0;
                puVar1[6] = 0xffff;
                puVar1[7] = 0;
              }
              *(undefined4 **)(param_1 + 0x58) = puVar1 + 8;
            }
            FUN_0402cd10(0x14,"added button, elem usage %u, offset %d, size %d",local_50,iVar2,1,
                         iVar11,iVar12,iVar13,iVar14);
            local_50 = local_50 + 1;
          }
LAB_040f3b22:
          uVar8 = uVar8 + 1;
          if (*(uint *)(param_1 + 0x4c) <= uVar8) goto LAB_040f3cbe;
        }
        if ((uVar9 & 3) == 0) {
          if ((uVar9 & 0x10) != 0) {
            FUN_0402cd10(10,
                         "couldn\'t map hatswitch at data struture offset %u, no hatswitches on gamepad"
                         ,piVar5[1],pcVar10,iVar2,iVar11,iVar12,iVar13,iVar14);
          }
          goto LAB_040f3b22;
        }
        uVar9 = piVar5[1];
        if ((uVar9 & 3) == 0) {
          pvVar3 = (void *)*piVar5;
          if (pvVar3 == (void *)0x0) goto LAB_040f3d57;
LAB_040f3ba5:
          iVar6 = memcmp(pvVar3,&DAT_042dbbc8,0x10);
          iVar7 = 0;
          if (iVar6 != 0) {
            iVar6 = memcmp(pvVar3,&DAT_042dbbb8,0x10);
            iVar7 = 1;
            if (iVar6 != 0) {
              iVar6 = memcmp(pvVar3,&DAT_042dbba8,0x10);
              iVar7 = 4;
              if (iVar6 != 0) {
                iVar6 = memcmp(pvVar3,&DAT_042dbb98,0x10);
                iVar7 = 2;
                if (iVar6 != 0) {
                  iVar6 = memcmp(pvVar3,&DAT_042dbb88,0x10);
                  iVar7 = 3;
                  if (iVar6 != 0) {
                    iVar6 = memcmp(pvVar3,&DAT_042dbb78,0x10);
                    iVar7 = (-(uint)(iVar6 == 0) & 6) - 1;
                  }
                }
              }
            }
          }
        }
        else {
          pcVar10 = "virtual HRESULT DirectInputGamepadDeviceImp::SetDataFormat(LPCDIDATAFORMAT)";
          FUN_0400a810("fmt->dwOfs % 4 == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/dinput8/directinputgamepaddevice8imp.cpp"
                       ,0x319,
                       "virtual HRESULT DirectInputGamepadDeviceImp::SetDataFormat(LPCDIDATAFORMAT)"
                      );
          pvVar3 = (void *)*piVar5;
          uVar9 = piVar5[1];
          if (pvVar3 != (void *)0x0) goto LAB_040f3ba5;
LAB_040f3d57:
          switch(local_44) {
          case 0:
            iVar7 = 1;
            break;
          case 1:
            iVar7 = 0;
            break;
          case 2:
            iVar7 = 3;
            break;
          case 3:
            iVar7 = 2;
            break;
          case 4:
            iVar7 = 4;
            break;
          case 5:
            iVar7 = 5;
            break;
          default:
            FUN_0402cd10(10,"couldn\'t map axis at data struture offset %u, no such axis on gamepad"
                         ,uVar9,pcVar10,iVar2,iVar11,iVar12,iVar13,iVar14);
            goto LAB_040f3b22;
          }
        }
        puVar1 = *(undefined4 **)(param_1 + 0x58);
        if (puVar1 == *(undefined4 **)(param_1 + 0x5c)) {
          FUN_040f3780();
        }
        else {
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = 0;
            puVar1[1] = iVar7;
            puVar1[2] = iVar7;
            puVar1[3] = uVar9;
            puVar1[4] = 4;
            puVar1[5] = 0;
            puVar1[6] = 0xffff;
            puVar1[7] = 0;
          }
          *(undefined4 **)(param_1 + 0x58) = puVar1 + 8;
        }
        local_44 = local_44 + 1;
        uVar8 = uVar8 + 1;
        FUN_0402cd10(0x14,"added axis, elem usage %u, offset %d",iVar7,uVar9,iVar2,iVar11,iVar12,
                     iVar13,iVar14);
      } while (uVar8 < *(uint *)(param_1 + 0x4c));
LAB_040f3cbe:
      uVar4 = 0;
    }
  }
  return uVar4;
}

