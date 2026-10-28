// Recovered source: eon2/src/dlls/directx/d3d9/d3dstructs.h
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- Direct3DDevice9Imp::AddResourceToPool @0x04080c30 ---
/* source: d3dstructs */

void d3dstructs_04080c30(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  pthread_mutex_t *__mutex;
  
  if (param_3 == 1) {
    iVar3 = param_1 + 0xea84;
    __mutex = (pthread_mutex_t *)(param_1 + 0xea90);
  }
  else {
    iVar3 = param_1 + 60000;
    __mutex = (pthread_mutex_t *)(param_1 + 0xea6c);
    if (param_3 != 0) {
      if (param_3 == 2) {
        iVar3 = param_1 + 0xeaa8;
        __mutex = (pthread_mutex_t *)(param_1 + 0xeab4);
      }
      else {
        if (param_3 != 3) {
          FUN_0402cd10();
          return;
        }
        iVar3 = param_1 + 0xeacc;
        __mutex = (pthread_mutex_t *)(param_1 + 0xead8);
      }
    }
  }
  pthread_mutex_lock(__mutex);
  if (*(int *)(param_2 + 0x18) != 0) {
    FUN_0400a810("Prev == __null",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/d3dstructs.h"
                 ,0x26,"void eON_ListElement::AddToList(eON_ListElement*)");
  }
  if (*(int *)(param_2 + 0x1c) != 0) {
    FUN_0400a810("Next == __null",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/d3dstructs.h"
                 ,0x27,"void eON_ListElement::AddToList(eON_ListElement*)");
  }
  uVar1 = *(undefined4 *)(iVar3 + 8);
  *(int *)(param_2 + 0x18) = iVar3;
  *(undefined4 *)(param_2 + 0x1c) = uVar1;
  iVar2 = *(int *)(iVar3 + 8);
  *(int *)(iVar3 + 8) = param_2 + 0x14;
  *(int *)(iVar2 + 4) = param_2 + 0x14;
  pthread_mutex_unlock(__mutex);
  return;
}

// --- Direct3DDevice9Imp::CreateQuery @0x04070f30 ---
/* source: d3dstructs */

undefined4 d3d9device_CreateQuery(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 local_50;
  undefined1 local_20 [16];
  
  piVar5 = (int *)&stack0xffffffb4;
  if (param_3 == (undefined4 *)0x0) {
    uVar4 = 0;
    if (1 < param_2 - 8U) {
      uVar4 = 0x8876086a;
      local_50 = 0x40710c5;
      FUN_0402cd10();
    }
  }
  else {
    local_50 = 0x4070f60;
    direct3ddevice9imp_040704e0();
                    /* try { // try from 04070f67 to 04070f6b has its CatchHandler @ 040710e6 */
    local_50 = 0x4070f6c;
    piVar3 = operator_new(0x54);
    *piVar3 = (int)&PTR_FUN_042f7088;
                    /* try { // try from 04070f81 to 04070f85 has its CatchHandler @ 040710ca */
    local_50 = 0x4070f86;
    Direct3DQuery9Imp__Direct3DQuery9Imp();
                    /* try { // try from 04070f9a to 04070faa has its CatchHandler @ 040710e6 */
    local_50 = 0x4070f9f;
    cVar2 = Direct3DQuery9Imp__Initialize();
    if (cVar2 == '\0') {
      local_50 = 0x4070fab;
      (**(code **)(*piVar3 + 8))();
      piVar5 = &local_50;
      uVar4 = 0x8876086a;
      *param_3 = 0;
    }
    else {
      local_50 = 0x4070fe9;
      pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xeb20));
      if (piVar3[6] != 0) {
                    /* try { // try from 0407100f to 0407103e has its CatchHandler @ 040710e6 */
        local_50 = 0x4071014;
        FUN_0400a810();
      }
      if (piVar3[7] != 0) {
        local_50 = 0x407103f;
        FUN_0400a810();
      }
      piVar3[6] = param_1 + 0xeb14;
      piVar3[7] = *(int *)(param_1 + 0xeb1c);
      iVar1 = *(int *)(param_1 + 0xeb1c);
      *(int **)(param_1 + 0xeb1c) = piVar3 + 5;
      *(int **)(iVar1 + 4) = piVar3 + 5;
      local_50 = 0x407106e;
      pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xeb20));
      *param_3 = piVar3;
      uVar4 = 0;
    }
    *piVar5 = (int)local_20;
    piVar5[-1] = 0x4070fc4;
    direct3ddevice9imp_040a2df0();
  }
  return uVar4;
}

// --- Direct3DDevice9Imp::CreateVertexDeclaration @0x04072ae0 ---
/* source: d3dstructs, direct3ddevice9imp */

undefined4 d3d9device_CreateVertexDeclaration(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  undefined4 uStack_40;
  int local_3c [6];
  int local_24;
  int *local_20 [4];
  
  local_20[0] = &local_24;
  puVar7 = (uint *)local_3c;
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = iVar1;
  if (iVar1 != 0) {
    puVar7 = (uint *)local_3c;
    if (*(char *)(iVar1 + 0xebbc) != '\0') {
      local_3c[0] = iVar1 + 0xebc4;
      uStack_40 = 0x4072c9e;
      EnterCriticalSection();
      puVar7 = &uStack_40;
    }
    if (*(int *)(iVar1 + 0xec64) == 0) {
      if (*(int *)(iVar1 + 0xebc0) != 0) {
        puVar7[3] = (uint)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        puVar7[2] = 0x3ae;
        puVar7[1] = (uint)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *puVar7 = (uint)"!mCurrentD3D9Thread";
        puVar7[-1] = 0x4072c44;
        FUN_0400a810();
      }
      puVar7[-1] = 0x4072b2a;
      uVar4 = FUN_0415b750();
      *(undefined4 *)(iVar1 + 0xebc0) = uVar4;
    }
    else {
      iVar3 = *(int *)(iVar1 + 0xebc0);
      puVar7[-1] = 0x4072c5b;
      iVar6 = FUN_0415b750();
      if (iVar3 != iVar6) {
        puVar7[3] = (uint)"void Direct3DDevice9Imp::MultithreadedGuard_Enter()";
        puVar7[2] = 0x3b3;
        puVar7[1] = (uint)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
        ;
        *puVar7 = (uint)"mCurrentD3D9Thread == thread_GetCurrentThreadId()";
        puVar7[-1] = 0x4072c87;
        FUN_0400a810();
      }
    }
    *(int *)(iVar1 + 0xec64) = *(int *)(iVar1 + 0xec64) + 1;
  }
  *puVar7 = 0x74;
                    /* try { // try from 04072b3e to 04072b42 has its CatchHandler @ 04072ca6 */
  puVar7[-1] = 0x4072b43;
  puVar5 = operator_new(*puVar7);
  *puVar5 = &PTR_FUN_042f6f48;
  puVar7[1] = (uint)puVar5;
  *puVar7 = (uint)(puVar5 + 1);
                    /* try { // try from 04072b55 to 04072b59 has its CatchHandler @ 04072cbb */
  puVar7[-1] = 0x4072b5a;
  Direct3DVertexDeclaration9Imp__Direct3DVertexDeclaration9Imp();
  puVar7[2] = param_2;
  uVar2 = *(uint *)(param_1 + 0xc);
  *puVar7 = (uint)(puVar5 + 1);
  puVar7[1] = uVar2;
                    /* try { // try from 04072b6b to 04072bd8 has its CatchHandler @ 04072ca6 */
  puVar7[-1] = 0x4072b70;
  Direct3DVertexDeclaration9Imp__Initialize();
  *param_3 = puVar5;
  *puVar7 = param_1 + 0xeafc;
  puVar7[-1] = 0x4072b83;
  pthread_mutex_lock((pthread_mutex_t *)*puVar7);
  if (puVar5[6] != 0) {
    puVar7[3] = (uint)"void eON_ListElement::AddToList(eON_ListElement*)";
    puVar7[2] = 0x26;
    puVar7[1] = (uint)
                "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/d3dstructs.h"
    ;
    *puVar7 = (uint)"Prev == __null";
    puVar7[-1] = 0x4072bae;
    FUN_0400a810();
  }
  if (puVar5[7] != 0) {
    puVar7[3] = (uint)"void eON_ListElement::AddToList(eON_ListElement*)";
    puVar7[2] = 0x27;
    puVar7[1] = (uint)
                "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/d3dstructs.h"
    ;
    *puVar7 = (uint)"Next == __null";
    puVar7[-1] = 0x4072bd9;
    FUN_0400a810();
  }
  puVar5[6] = param_1 + 0xeaf0;
  puVar5[7] = *(undefined4 *)(param_1 + 0xeaf8);
  iVar1 = *(int *)(param_1 + 0xeaf8);
  *(undefined4 **)(param_1 + 0xeaf8) = puVar5 + 5;
  *(undefined4 **)(iVar1 + 4) = puVar5 + 5;
  *puVar7 = param_1 + 0xeafc;
  puVar7[-1] = 0x4072c05;
  pthread_mutex_unlock((pthread_mutex_t *)*puVar7);
  *puVar7 = (uint)local_20;
  puVar7[-1] = 0x4072c10;
  direct3ddevice9imp_040a2df0();
  return 0;
}

// --- Direct3DDevice9Imp::GRTD_Delete @0x0409d1c0 ---
/* source: d3dstructs, direct3ddevice9imp */

void Direct3DDevice9Imp__GRTD_Delete(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 0xebd8);
  if (puVar1 == param_2) {
    *(undefined4 *)(param_1 + 0xebd8) = param_2[6];
  }
  else {
    for (puVar3 = (undefined4 *)puVar1[6];
        (puVar4 = puVar3, param_2 != puVar3 &&
        (puVar4 = (undefined4 *)0x0, puVar3 != (undefined4 *)0x0)); puVar3 = (undefined4 *)puVar3[6]
        ) {
      puVar1 = puVar3;
    }
    if (puVar4 == (undefined4 *)0x0) {
      FUN_0400a810(&PTR_DAT_042dc67e,
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                   ,0x499,"void Direct3DDevice9Imp::GRTD_Delete(RenderTargetDataTransfer*)");
    }
    puVar1[6] = puVar4[6];
  }
  FUN_040ba120(param_1,*param_2);
  FUN_0409d0d0(param_1,param_2 + 1);
  iVar2 = param_2[5];
  if (*(undefined4 **)(iVar2 + 0xd8) != param_2) {
    FUN_0400a810("surfaceImp.GRTD == GRTD",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp"
                 ,0x4a5,"void Direct3DDevice9Imp::GRTD_Delete(RenderTargetDataTransfer*)");
  }
  *(undefined4 *)(iVar2 + 0xd8) = 0;
  if ((param_2[2] == 0) && (param_2[3] == 0)) {
    operator_delete(param_2);
    return;
  }
  FUN_0400a810("!FenceARB && !FenceAPPLE",
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/d3dstructs.h",
               299,"eONFence::~eONFence()");
  operator_delete(param_2);
  return;
}

// --- TextureType::GetType @0x04059000 ---
/* WARNING: Type propagation algorithm not settling */
/* source: D3DBytecodeToGLSLText, d3dstructs */

void TextureType__GetType(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  void *pvVar8;
  uint uVar9;
  ushort *puVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  uint *puVar15;
  uint *puVar16;
  size_t __size;
  int iVar17;
  int iVar18;
  char *pcVar19;
  uint local_40;
  uint local_3c;
  uint local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  
  bzero((void *)(param_1 + 0x4c),0x118);
  *(undefined1 *)(param_1 + 0x154) = 0xff;
  *(undefined4 *)(param_1 + 0xcc) = 0x1000;
  *(undefined1 *)(param_1 + 0x155) = 0xff;
  if (param_2 != 0) {
    *(bool *)(param_1 + 0x160) = (ushort)(*(short *)(param_2 + 0x12) - 0x201U) < 6;
  }
  puVar16 = *(uint **)(param_1 + 0x18);
  if (puVar16 != (uint *)0x0) {
    local_30 = *puVar16;
    local_40 = 0;
    local_3c = 0;
LAB_04059078:
    puVar15 = puVar16;
    if (local_30 != 0xffff) {
      while (puVar16 = puVar15, 1 < (local_30 >> 0x10) - 0xfffe) {
        uVar4 = local_30 & 0xffff;
        if (uVar4 != 0xfffe) {
          puVar16 = puVar15 + 1;
          cVar1 = *(char *)(*(uint **)(param_1 + 0x2d8))[1];
          puVar3 = *(uint **)(param_1 + 0x2d8);
          goto joined_r0x04059162;
        }
        puVar15 = (uint *)((int)puVar15 + ((local_30 & 0x7fff0000) >> 0xe) + 4);
        local_30 = *puVar15;
        if (local_30 == 0xffff) goto LAB_040590c1;
      }
LAB_04059140:
      local_30 = puVar16[1];
      puVar16 = puVar16 + 1;
      goto LAB_04059078;
    }
LAB_040590c1:
    if (*(int *)(param_1 + 8) < 3) {
      uVar4 = 0;
      iVar18 = param_1;
      do {
        while (*(int *)(iVar18 + 0x5c) == 0) {
LAB_040590ed:
          iVar18 = iVar18 + 4;
          if (iVar18 == param_1 + 8) goto LAB_040590f4;
        }
        if ((int)uVar4 < 8) {
          do {
            if (*(char *)(param_1 + 0x54 + uVar4) == '\0') goto LAB_040590de;
            uVar4 = uVar4 + 1;
          } while (uVar4 != 8);
          *(undefined4 *)(iVar18 + 0x5c) = 9;
          uVar4 = 9;
        }
        else {
LAB_040590de:
          uVar4 = uVar4 + 1;
          *(uint *)(iVar18 + 0x5c) = uVar4;
          if (uVar4 < 0xb) goto LAB_040590ed;
          FUN_0400a810("Regs.ColorOutput[i] <= 10",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/D3DBytecodeToGLSLText.cpp"
                       ,0xc11,
                       "void eON_ShaderData::DetermineUsedRegisters(const FragmentShaderCompileArgs*, ShaderConstant**, int*)"
                      );
        }
        iVar18 = iVar18 + 4;
      } while (iVar18 != param_1 + 8);
    }
LAB_040590f4:
    *(uint *)(param_1 + 0x158) = local_40;
    if ((param_4 != (undefined4 *)0x0) && (param_3 != (undefined4 *)0x0)) {
      if ((*(char *)(param_1 + 0x15f) == '\0') || (*(int *)(param_1 + 0x2b8) == 0)) {
        *param_3 = 0;
        *param_4 = 0;
      }
      else {
        __size = *(int *)(param_1 + 0x2b8) * 0x24;
        pvVar8 = malloc(__size);
        *param_3 = pvVar8;
        memcpy(pvVar8,*(void **)(param_1 + 0x2b4),__size);
        *param_4 = *(undefined4 *)(param_1 + 0x2b8);
      }
    }
  }
  return;
joined_r0x04059162:
  if (cVar1 == '\0') goto LAB_04059258;
  if (uVar4 == *puVar3) {
    if (puVar3[5] == 0) {
      uVar9 = puVar3[6];
      if (uVar9 != 0) {
        uVar5 = *(uint *)(param_1 + 4);
        goto LAB_04059198;
      }
LAB_0405919c:
      if (puVar3 == (uint *)0x0) goto LAB_04059277;
      uVar9 = local_40;
      switch(uVar4) {
      case 0x1b:
      case 0x26:
        local_3c = local_3c + 1;
        uVar9 = local_3c;
        if (local_3c <= local_40) {
          uVar9 = local_40;
        }
        break;
      default:
        if (uVar4 - 0x42 < 0x1b) {
          uVar9 = 1 << ((byte)(uVar4 - 0x42) & 0x1f);
          if ((uVar9 & 0x30d59) == 0) {
            if ((uVar9 & 0x800006) == 0) {
              if ((uVar9 & 0x4000000) != 0) {
                *(undefined1 *)(param_1 + 0x15d) = 1;
              }
            }
            else {
              if (*(int *)(param_1 + 8) == 1) {
                if ((*(char *)(param_1 + 0x154) == -1) ||
                   ((int)*(char *)(param_1 + 0x154) == (puVar15[1] & 0x7ff))) {
                  uVar11 = (undefined1)(puVar15[1] & 0x7ff);
                  *(undefined1 *)(param_1 + 0x154) = uVar11;
                  uVar4 = *puVar3;
                  if (uVar4 == 0x44) {
                    *(undefined1 *)(param_1 + 0x155) = uVar11;
                    uVar4 = *puVar3;
                  }
                }
                else {
                  FUN_0402cd10(0xf,"Shader uses bem or texbem instruction on more than one sampler!"
                              );
                  uVar4 = *puVar3;
                }
              }
              if (uVar4 != 0x59) goto LAB_04059759;
            }
          }
          else {
LAB_04059759:
            if (*(int *)(param_1 + 8) == 1) {
              uVar4 = puVar15[1] & 0x7ff;
              if (param_2 == 0) {
                *(undefined4 *)(param_1 + 0xd4 + uVar4 * 4) = 0x90000000;
                *(undefined4 *)(param_1 + 0x114 + uVar4 * 4) = 0;
              }
              else {
                switch(*(byte *)(param_2 + uVar4) & 7) {
                default:
                  FUN_0400a810("false",
                               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/d3dstructs.h"
                               ,0xb6,"DWORD TextureType::GetType() const");
                  uVar7 = 0x90000000;
                  break;
                case 1:
                  uVar7 = 0x90000000;
                  break;
                case 2:
                  uVar7 = 0x98000000;
                  break;
                case 3:
                  uVar7 = 0xa0000000;
                  break;
                case 4:
                  uVar7 = 0xc8000000;
                  break;
                case 5:
                  uVar7 = 0xd0000000;
                  break;
                case 6:
                  uVar7 = 0xd8000000;
                }
                *(undefined4 *)(param_1 + 0xd4 + uVar4 * 4) = uVar7;
                *(int *)(param_1 + 0x114 + uVar4 * 4) =
                     (int)(*(byte *)(param_2 + uVar4) & 0x18) >> 3;
              }
            }
          }
        }
        iVar18 = ((uint)(byte)puVar3[2] + puVar3[3] + 1) - (uint)((local_30 & 0x10000000) == 0);
        if (0 < iVar18) {
          iVar17 = 0;
          puVar15 = puVar16;
          goto LAB_040591f0;
        }
        local_30 = puVar15[1];
        goto LAB_04059078;
      case 0x1d:
      case 0x27:
        local_30 = puVar15[1];
        local_3c = local_3c - 1;
        goto LAB_04059078;
      case 0x1e:
        *(undefined1 *)(param_1 + 0xad + (puVar15[1] & 0x7ff)) = 1;
        break;
      case 0x1f:
        uVar4 = puVar15[1];
        puVar16 = puVar15 + 3;
        uVar9 = puVar15[2];
        uVar12 = uVar4 & 0xf;
        uVar5 = uVar9 & 0x7ff;
        uVar13 = (uVar4 & 0xf0000) >> 0x10;
        uVar6 = (uVar9 & 0x1800) >> 8 | (uVar9 & 0x70000000) >> 0x1c;
        if (uVar6 != 6) {
          if (uVar6 == 10) {
            *(uint *)(param_1 + 0x14 + (uVar5 + 0x30) * 4) = uVar4;
            if (param_2 == 0) {
              *(undefined4 *)(param_1 + 0x114 + uVar5 * 4) = 0;
              local_30 = puVar15[3];
            }
            else {
              pbVar14 = (byte *)(param_2 + uVar5);
              uVar9 = (uint)*pbVar14;
              if ((*pbVar14 & 7) == 0) {
LAB_04059a47:
                FUN_0400a810("false",
                             "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/d3dstructs.h"
                             ,0xb6,"DWORD TextureType::GetType() const");
                uVar9 = (uint)*pbVar14;
              }
              else if (3 < (uVar9 & 7)) {
                if (6 < (uVar9 & 7)) goto LAB_04059a47;
                *(uint *)(param_1 + 0x14 + (uVar5 + 0x30) * 4) = uVar4 | 0x40000000;
                uVar9 = (uint)*pbVar14;
              }
              *(int *)(param_1 + 0x114 + uVar5 * 4) = (int)(uVar9 & 0x18) >> 3;
              local_30 = puVar15[3];
            }
          }
          else {
            if (uVar6 == 1) {
              cVar1 = *(char *)(param_1 + 0x10);
              iVar18 = param_1 + uVar5 * 0xc;
              *(uint *)(iVar18 + 0x16c) = uVar9;
              *(uint *)(iVar18 + 0x164) = uVar12;
              *(uint *)(iVar18 + 0x168) = uVar13;
              if (cVar1 == '\0') {
                *(undefined1 *)(param_1 + 0x9d + uVar5) = 1;
              }
              else {
                *(undefined1 *)(param_1 + 0x85 + uVar5) = 1;
                if (uVar12 == 5) {
                  if (uVar13 == 8) goto LAB_04059d68;
                  if (uVar13 == 9) goto LAB_04059d54;
                  if (9 < uVar13) {
                    pcVar19 = "Add varying for input texcoord > 9!";
                    goto LAB_04059cee;
                  }
                  goto LAB_04059b99;
                }
              }
            }
LAB_04059739:
            local_30 = puVar15[3];
          }
          goto LAB_04059078;
        }
        iVar18 = param_1 + uVar5 * 0xc;
        *(uint *)(iVar18 + 0x22c) = uVar9;
        *(uint *)(iVar18 + 0x224) = uVar12;
        *(uint *)(iVar18 + 0x228) = uVar13;
        *(undefined1 *)(param_1 + 0x91 + uVar5) = 1;
        if (uVar12 == 5) {
          if (uVar13 == 8) {
LAB_04059d68:
            *(undefined1 *)(param_1 + 0xbd) = 1;
          }
          else {
            if (uVar13 == 9) {
LAB_04059d54:
              local_30 = puVar15[3];
              *(undefined1 *)(param_1 + 0xbe) = 1;
              goto LAB_04059078;
            }
            if (9 < uVar13) {
              pcVar19 = "Add varying for output texcoord > 9!";
LAB_04059cee:
              FUN_0402cd10(0xf,pcVar19);
              goto LAB_04059739;
            }
          }
        }
        else {
          if (uVar12 != 0xb) {
            if (uVar12 != 4) goto LAB_04059739;
            local_30 = puVar15[3];
            *(undefined1 *)(param_1 + 0x161) = 1;
            goto LAB_04059078;
          }
          *(undefined1 *)(param_1 + 0x15e) = 1;
        }
LAB_04059b99:
        local_30 = puVar15[3];
        goto LAB_04059078;
      case 0x2f:
        uVar4 = puVar15[2];
        uVar5 = puVar15[1];
        if (*(void **)(param_1 + 0x2c4) == (void *)0x0) {
          pvVar8 = malloc(0x24);
          iVar18 = 0;
          *(void **)(param_1 + 0x2c4) = pvVar8;
          *(undefined4 *)(param_1 + 0x2c8) = 1;
        }
        else {
          iVar18 = *(int *)(param_1 + 0x2c8) + 1;
          *(int *)(param_1 + 0x2c8) = iVar18;
          pvVar8 = realloc(*(void **)(param_1 + 0x2c4),iVar18 * 0x24);
          *(void **)(param_1 + 0x2c4) = pvVar8;
          iVar18 = (*(int *)(param_1 + 0x2c8) * 9 + -9) * 4;
        }
        *(ushort *)((int)pvVar8 + iVar18) = (ushort)uVar5 & 0x7ff;
        *(uint *)((ushort *)((int)pvVar8 + iVar18) + 2) = uVar4;
        break;
      case 0x30:
        uVar4 = puVar15[1];
        if (*(void **)(param_1 + 700) == (void *)0x0) {
          pvVar8 = malloc(0x24);
          iVar18 = 0;
          *(void **)(param_1 + 700) = pvVar8;
          *(undefined4 *)(param_1 + 0x2c0) = 1;
        }
        else {
          iVar18 = *(int *)(param_1 + 0x2c0) + 1;
          *(int *)(param_1 + 0x2c0) = iVar18;
          pvVar8 = realloc(*(void **)(param_1 + 700),iVar18 * 0x24);
          *(void **)(param_1 + 700) = pvVar8;
          iVar18 = (*(int *)(param_1 + 0x2c0) * 9 + -9) * 4;
        }
        puVar10 = (ushort *)((int)pvVar8 + iVar18);
        *puVar10 = (ushort)uVar4 & 0x7ff;
        *(uint *)(puVar10 + 2) = puVar15[2];
        *(uint *)(puVar10 + 4) = puVar15[3];
        *(uint *)(puVar10 + 6) = puVar15[4];
        *(uint *)(puVar10 + 8) = puVar15[5];
        break;
      case 0x51:
        local_2c = (float)puVar15[2];
        uVar4 = puVar15[1];
        local_20 = (float)puVar15[5];
        local_28 = (float)puVar15[3];
        local_24 = (float)puVar15[4];
        if ((*(char *)(param_1 + 0x10) != '\0') && (*(int *)(param_1 + 8) == 1)) {
          if (local_2c < DAT_042e6f58) {
            local_2c = -1.0;
          }
          else if (DAT_042dbf3c < local_2c) {
            local_2c = DAT_042dbf3c;
          }
          if (DAT_042e6f58 <= local_28) {
            if (DAT_042dbf3c < local_28) {
              local_28 = DAT_042dbf3c;
            }
          }
          else {
            local_28 = -1.0;
          }
          if (DAT_042e6f58 <= local_24) {
            if (DAT_042dbf3c < local_24) {
              local_24 = DAT_042dbf3c;
            }
          }
          else {
            local_24 = -1.0;
          }
          if (DAT_042e6f58 <= local_20) {
            if (DAT_042dbf3c < local_20) {
              local_20 = 1.0;
            }
          }
          else {
            local_20 = -1.0;
          }
        }
        if (*(void **)(param_1 + 0x2b4) == (void *)0x0) {
          pvVar8 = malloc(0x24);
          iVar18 = 0;
          *(void **)(param_1 + 0x2b4) = pvVar8;
          *(undefined4 *)(param_1 + 0x2b8) = 1;
        }
        else {
          iVar18 = *(int *)(param_1 + 0x2b8) + 1;
          *(int *)(param_1 + 0x2b8) = iVar18;
          pvVar8 = realloc(*(void **)(param_1 + 0x2b4),iVar18 * 0x24);
          *(void **)(param_1 + 0x2b4) = pvVar8;
          iVar18 = (*(int *)(param_1 + 0x2b8) * 9 + -9) * 4;
        }
        puVar10 = (ushort *)(iVar18 + (int)pvVar8);
        *puVar10 = (ushort)uVar4 & 0x7ff;
        *(float *)(puVar10 + 2) = local_2c;
        *(float *)(puVar10 + 4) = local_28;
        *(float *)(puVar10 + 6) = local_24;
        *(float *)(puVar10 + 8) = local_20;
        puVar16 = puVar16 + puVar3[3];
        if ((char)puVar3[2] != '\0') goto LAB_04059140;
        local_30 = *puVar16;
        goto LAB_04059078;
      }
      local_40 = uVar9;
      puVar16 = puVar16 + puVar3[3];
      if ((char)puVar3[2] != '\0') goto LAB_04059140;
      local_30 = *puVar16;
      goto LAB_04059078;
    }
    uVar5 = *(uint *)(param_1 + 4);
    if (puVar3[5] <= uVar5) {
      uVar9 = puVar3[6];
LAB_04059198:
      if (uVar5 <= uVar9) goto LAB_0405919c;
    }
  }
  cVar1 = *(char *)puVar3[8];
  puVar3 = puVar3 + 7;
  goto joined_r0x04059162;
LAB_04059258:
  FUN_0402cd10(0xf,
               "Unsupported asm opcode in ShaderData::IdentifyInstruction() !!!. Opcode %#x, shader version %#x"
               ,uVar4,*(undefined4 *)(param_1 + 4));
LAB_04059277:
  FUN_0402cd10(0xf,"Unrecognized instruction when determining registers used in bytecode\n");
  local_30 = puVar15[1];
  while ((int)local_30 < 0) {
    puVar16 = puVar16 + 1;
    local_30 = *puVar16;
  }
  goto LAB_04059078;
LAB_040591f0:
  uVar4 = *puVar15;
  iVar2 = *(int *)(param_1 + 8);
  puVar16 = puVar15 + 1;
  if ((1 < iVar2) && (puVar16 = puVar15 + 2, (uVar4 & 0x2000) == 0)) {
    puVar16 = puVar15 + 1;
  }
  uVar9 = uVar4 & 0x7ff;
  puVar15 = puVar16;
  switch((uVar4 & 0x1800) >> 8 | (uVar4 & 0x70000000) >> 0x1c) {
  case 0:
    *(undefined1 *)(param_1 + 100 + uVar9) = 1;
    goto joined_r0x040599dd;
  case 1:
    if (*(char *)(param_1 + 0x10) == '\0') {
      *(undefined1 *)(param_1 + 0x9d + uVar9) = 1;
    }
    else if ((uVar4 & 0x2000) == 0) {
      *(undefined1 *)(param_1 + 0xbf + uVar9) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0xbf + iVar17) = 1;
    }
    goto joined_r0x040599dd;
  case 2:
    if ((((uVar4 & 0x2000) != 0) &&
        (*(undefined1 *)(param_1 + 0x15f) = 1, *(char *)(param_1 + 0x10) == '\0')) &&
       ((iVar17 != 0 || ((char)puVar3[2] == '\0')))) {
      if ((int)uVar9 < *(int *)(param_1 + 0xcc)) {
        *(uint *)(param_1 + 0xcc) = uVar9;
      }
      if (*(int *)(param_1 + 0xd0) < (int)uVar9) {
        *(uint *)(param_1 + 0xd0) = uVar9;
      }
    }
    break;
  case 3:
    if (*(char *)(param_1 + 0x10) == '\0') {
      if (uVar9 != 0) {
        FUN_0402cd10(0xf,"Address register > 0 addressed!");
        break;
      }
      *(undefined1 *)(param_1 + 0x84) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x4c + uVar9) = 1;
    }
    goto joined_r0x040599dd;
  case 4:
    if (uVar9 == 1) {
      *(undefined1 *)(param_1 + 0x15e) = 1;
    }
    else {
      if (uVar9 != 2) break;
      *(undefined1 *)(param_1 + 0x161) = 1;
    }
    goto joined_r0x040599dd;
  case 5:
    if (((iVar17 == 0) && (*(char *)(param_1 + 0x10) == '\0')) && (iVar2 < 3)) {
      if (1 < uVar9) {
        FUN_0400a810("registerNum < MaxColorRegisters",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/D3DBytecodeToGLSLText.cpp"
                     ,0xbe7,
                     "void eON_ShaderData::DetermineUsedRegisters(const FragmentShaderCompileArgs*, ShaderConstant**, int*)"
                    );
      }
      *(undefined4 *)(param_1 + 0x5c + uVar9 * 4) = 1;
    }
    break;
  case 6:
    if (((iVar17 == 0) && (*(char *)(param_1 + 0x10) == '\0')) && (iVar2 < 3)) {
      if (7 < uVar9) {
        FUN_0400a810("registerNum < MaxTexcoordRegisters",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/D3DBytecodeToGLSLText.cpp"
                     ,0xbd7,
                     "void eON_ShaderData::DetermineUsedRegisters(const FragmentShaderCompileArgs*, ShaderConstant**, int*)"
                    );
      }
      *(undefined1 *)(param_1 + 0x54 + uVar9) = 1;
    }
    break;
  case 8:
    if ((iVar17 != 0) || (*(char *)(param_1 + 0x10) == '\0')) break;
    if (7 < uVar9) {
      FUN_0400a810("registerNum < 8",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/D3DBytecodeToGLSLText.cpp"
                   ,0xbdf,
                   "void eON_ShaderData::DetermineUsedRegisters(const FragmentShaderCompileArgs*, ShaderConstant**, int*)"
                  );
    }
    iVar17 = 1;
    *(byte *)(param_1 + 0x162) = *(byte *)(param_1 + 0x162) | (byte)(1 << ((byte)uVar9 & 0x1f));
    if (iVar18 == 1) goto LAB_04059394;
    goto LAB_040591f0;
  case 0x11:
    if (*(char *)(param_1 + 0x10) != '\0') {
      if (uVar9 == 0) {
        *(undefined1 *)(param_1 + 0x15c) = 1;
        goto joined_r0x040599dd;
      }
      if (uVar9 == 1) {
        *(undefined1 *)(param_1 + 0x15d) = 1;
      }
    }
  }
joined_r0x040599dd:
  iVar17 = iVar17 + 1;
  if (iVar17 == iVar18) goto LAB_04059394;
  goto LAB_040591f0;
LAB_04059394:
  local_30 = *puVar16;
  goto LAB_04059078;
}

// --- d3dstructs_04098020 @0x04098020 ---
/* source: d3dstructs */

void d3dstructs_04098020(int param_1,uint param_2)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node_base *p_Var2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  _Rb_tree_node_base *p_Var6;
  _Rb_tree_node_base *p_Var7;
  _Rb_tree_node_base *p_Var8;
  _Rb_tree_node_base *local_34;
  
  if (param_2 == 0) {
    return;
  }
  p_Var2 = (_Rb_tree_node_base *)(param_1 + 0xea4c);
  p_Var6 = *(_Rb_tree_node_base **)(param_1 + 0xea50);
  p_Var7 = p_Var2;
  if (*(_Rb_tree_node_base **)(param_1 + 0xea50) != (_Rb_tree_node_base *)0x0) {
    do {
      while (p_Var8 = p_Var6, *(uint *)(p_Var8 + 0x10) < param_2) {
        p_Var1 = p_Var8 + 0xc;
        p_Var6 = *(_Rb_tree_node_base **)p_Var1;
        p_Var8 = p_Var7;
        if (*(_Rb_tree_node_base **)p_Var1 == (_Rb_tree_node_base *)0x0) goto LAB_04098065;
      }
      p_Var6 = *(_Rb_tree_node_base **)(p_Var8 + 8);
      p_Var7 = p_Var8;
    } while (*(_Rb_tree_node_base **)(p_Var8 + 8) != (_Rb_tree_node_base *)0x0);
LAB_04098065:
    if ((p_Var2 != p_Var8) && (*(uint *)(p_Var8 + 0x10) <= param_2)) {
      puVar5 = *(undefined4 **)(p_Var8 + 0x14);
      goto LAB_040980d3;
    }
  }
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  puVar5 = operator_new(0x74);
  *puVar5 = &PTR_FUN_042f6f48;
                    /* try { // try from 0409809e to 040980a2 has its CatchHandler @ 04098365 */
  Direct3DVertexDeclaration9Imp__Direct3DVertexDeclaration9Imp(puVar5 + 1,puVar5,uVar3,param_2);
  p_Var7 = p_Var2;
  p_Var6 = *(_Rb_tree_node_base **)(param_1 + 0xea50);
  if (*(_Rb_tree_node_base **)(param_1 + 0xea50) == (_Rb_tree_node_base *)0x0) {
LAB_040980e7:
    if ((*(int *)(param_1 + 0xea5c) == 0) ||
       (p_Var6 = *(_Rb_tree_node_base **)(param_1 + 0xea58), param_2 <= *(uint *)(p_Var6 + 0x10))) {
      FUN_040705b0();
      p_Var8 = local_34;
    }
    else {
      p_Var8 = operator_new(0x18);
      if (p_Var8 != (_Rb_tree_node_base *)0x0) {
        *(undefined4 *)p_Var8 = 0;
        *(undefined4 *)(p_Var8 + 4) = 0;
        *(undefined4 *)(p_Var8 + 8) = 0;
        *(undefined4 *)(p_Var8 + 0xc) = 0;
        *(uint *)(p_Var8 + 0x10) = param_2;
        *(undefined4 *)(p_Var8 + 0x14) = 0;
      }
LAB_0409815c:
      std::_Rb_tree_insert_and_rebalance(p_Var2 == p_Var6,p_Var8,p_Var6,p_Var2);
      *(int *)(param_1 + 0xea5c) = *(int *)(param_1 + 0xea5c) + 1;
    }
  }
  else {
    do {
      p_Var8 = p_Var6;
      if (*(uint *)(p_Var8 + 0x10) < param_2) {
        p_Var6 = *(_Rb_tree_node_base **)(p_Var8 + 0xc);
        p_Var8 = p_Var7;
      }
      else {
        p_Var6 = *(_Rb_tree_node_base **)(p_Var8 + 8);
      }
      p_Var7 = p_Var8;
    } while (p_Var6 != (_Rb_tree_node_base *)0x0);
    if (p_Var2 == p_Var8) goto LAB_040980e7;
    if (param_2 < *(uint *)(p_Var8 + 0x10)) {
      p_Var6 = *(_Rb_tree_node_base **)(param_1 + 0xea54);
      if (p_Var6 == p_Var8) {
        p_Var7 = operator_new(0x18);
        p_Var8 = p_Var6;
        if (p_Var7 != (_Rb_tree_node_base *)0x0) {
          *(undefined4 *)p_Var7 = 0;
          *(undefined4 *)(p_Var7 + 4) = 0;
          *(undefined4 *)(p_Var7 + 8) = 0;
          *(undefined4 *)(p_Var7 + 0xc) = 0;
          *(uint *)(p_Var7 + 0x10) = param_2;
          *(undefined4 *)(p_Var7 + 0x14) = 0;
        }
LAB_040982c1:
        std::_Rb_tree_insert_and_rebalance(true,p_Var7,p_Var8,p_Var2);
        *(int *)(param_1 + 0xea5c) = *(int *)(param_1 + 0xea5c) + 1;
        p_Var8 = p_Var7;
        goto LAB_04098178;
      }
      p_Var6 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var8);
      if (param_2 <= *(uint *)(p_Var6 + 0x10)) {
        FUN_040705b0();
        p_Var8 = local_34;
        goto LAB_04098178;
      }
      if (*(int *)(p_Var6 + 0xc) != 0) {
        p_Var7 = operator_new(0x18);
        if (p_Var7 != (_Rb_tree_node_base *)0x0) {
          *(undefined4 *)p_Var7 = 0;
          *(undefined4 *)(p_Var7 + 4) = 0;
          *(undefined4 *)(p_Var7 + 8) = 0;
          *(undefined4 *)(p_Var7 + 0xc) = 0;
          *(uint *)(p_Var7 + 0x10) = param_2;
          *(undefined4 *)(p_Var7 + 0x14) = 0;
        }
        goto LAB_040982c1;
      }
      p_Var8 = operator_new(0x18);
      if (p_Var8 != (_Rb_tree_node_base *)0x0) {
        *(undefined4 *)p_Var8 = 0;
        *(undefined4 *)(p_Var8 + 4) = 0;
        *(undefined4 *)(p_Var8 + 8) = 0;
        *(undefined4 *)(p_Var8 + 0xc) = 0;
        *(uint *)(p_Var8 + 0x10) = param_2;
        *(undefined4 *)(p_Var8 + 0x14) = 0;
      }
      goto LAB_0409815c;
    }
  }
LAB_04098178:
  *(undefined4 **)(p_Var8 + 0x14) = puVar5;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xeafc));
  if (puVar5[6] != 0) {
    FUN_0400a810("Prev == __null",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/d3dstructs.h"
                 ,0x26,"void eON_ListElement::AddToList(eON_ListElement*)");
  }
  if (puVar5[7] != 0) {
    FUN_0400a810("Next == __null",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/d3dstructs.h"
                 ,0x27,"void eON_ListElement::AddToList(eON_ListElement*)");
  }
  puVar5[6] = param_1 + 0xeaf0;
  puVar5[7] = *(undefined4 *)(param_1 + 0xeaf8);
  iVar4 = *(int *)(param_1 + 0xeaf8);
  *(undefined4 **)(param_1 + 0xeaf8) = puVar5 + 5;
  *(undefined4 **)(iVar4 + 4) = puVar5 + 5;
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xeafc));
LAB_040980d3:
  Direct3DDevice9Imp__SetVertexDeclaration(param_1,puVar5);
  return;
}

// --- d3dstructs_040a4ea0 @0x040a4ea0 ---
/* source: d3dstructs, direct3dquery9imp */

void d3dstructs_040a4ea0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[7];
  *param_1 = &PTR_d3dstructs_040a4ea0_042f7a08;
  if (iVar1 != 0) {
    if ((param_1[0xc] != 0) || (param_1[0xd] != 0)) {
                    /* try { // try from 040a4ecf to 040a4f22 has its CatchHandler @ 040a4fae */
      FUN_0409d0d0(iVar1 + 0x40,param_1 + 0xb);
      if ((param_1[0xc] != 0) || (param_1[0xd] != 0)) {
        FUN_0400a810("!( FenceARB || FenceAPPLE )",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/direct3dquery9imp.cpp"
                     ,0x20,"void eONFence::Clear(Direct3DDevice9Imp*)");
      }
      iVar1 = param_1[7];
      *(undefined1 *)(param_1 + 0xe) = 1;
    }
    FUN_040ba490(iVar1 + 0x40,param_1[3],param_1[0x11]);
  }
  if ((param_1[0xc] == 0) && (param_1[0xd] == 0)) {
    FUN_04030320();
    return;
  }
                    /* try { // try from 040a4f49 to 040a4f4d has its CatchHandler @ 040a4f98 */
  FUN_0400a810("!FenceARB && !FenceAPPLE",
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/d3dstructs.h",
               299,"eONFence::~eONFence()");
  FUN_04030320();
  return;
}

// --- d3dstructs_040eec00 @0x040eec00 ---
/* source: d3dstructs */

void d3dstructs_040eec00(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  OpenGLContextCache____glewBindBuffer(param_1[1],0x8a11,0);
  puVar1 = (undefined4 *)param_1[6];
  while (puVar2 = puVar1, puVar1 != (undefined4 *)0x0) {
    while( true ) {
      FUN_040ba120(*param_1 + 0x40,*puVar2);
      direct3dquery9imp_040a5890(puVar2 + 1,*param_1 + 0x40);
      puVar1 = (undefined4 *)puVar2[5];
      if ((puVar2[2] != 0) || (puVar2[3] != 0)) break;
      operator_delete(puVar2);
      puVar2 = puVar1;
      if (puVar1 == (undefined4 *)0x0) goto LAB_040eecb8;
    }
    FUN_0400a810("!FenceARB && !FenceAPPLE",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/d3dstructs.h"
                 ,299,"eONFence::~eONFence()");
    operator_delete(puVar2);
  }
LAB_040eecb8:
  param_1[6] = 0;
  if (param_1[4] != 0) {
    FUN_040ba120(*param_1 + 0x40,param_1[4]);
  }
  return;
}

// --- eON_UniformBufferStreamed::UpdateToNewBuffer @0x040eede0 ---
/* source: d3dstructs, uniformBuffer */

void eON_UniformBufferStreamed__UpdateToNewBuffer(int *param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;
  
  if (param_1[4] == 0) {
    FUN_0400a810("mBuffer",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/uniformBuffer.cpp"
                 ,0x60,"void eON_UniformBufferStreamed::UpdateToNewBuffer()");
  }
  bVar9 = DAT_0451ca88 != '\0';
  if (bVar9) {
    OpenGLContextCache____glewBindBuffer(param_1[1],0x8a11,param_1[4]);
    cVar3 = (*DAT_0451ecf0)(0x8a11);
    if (cVar3 != '\x01') {
      FUN_0400a810("__glewUnmapBuffer( 0x8A11 ) == 1",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/uniformBuffer.cpp"
                   ,0x6b,"void eON_UniformBufferStreamed::UpdateToNewBuffer()");
    }
    param_1[5] = 0;
  }
  piVar4 = operator_new(0x18);
  iVar5 = param_1[4];
  piVar4[1] = 0;
  piVar4[2] = 0;
  piVar4[3] = 0;
  *piVar4 = iVar5;
  iVar5 = *param_1;
  *(undefined1 *)(piVar4 + 4) = 1;
  FUN_040a5910(piVar4 + 1,iVar5 + 0x40);
  piVar1 = (int *)param_1[6];
  piVar4[5] = (int)piVar1;
  param_1[6] = (int)piVar4;
  piVar2 = piVar4;
  iVar5 = 1;
  if (piVar1 == (int *)0x0) {
    iVar8 = 2;
  }
  else {
    do {
      iVar8 = iVar5;
      piVar7 = piVar1;
      piVar6 = piVar2;
      piVar2 = piVar7;
      piVar1 = (int *)piVar7[5];
      iVar5 = iVar8 + 1;
    } while ((int *)piVar7[5] != (int *)0x0);
    if ((piVar4 != piVar7) && (cVar3 = FUN_040a5960(piVar7 + 1,*param_1 + 0x40), cVar3 != '\0')) {
      param_1[4] = *piVar7;
      piVar6[5] = 0;
      if ((piVar7[2] != 0) || (piVar7[3] != 0)) {
        FUN_0400a810("!FenceARB && !FenceAPPLE",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/d3dstructs.h"
                     ,299,"eONFence::~eONFence()");
      }
      operator_delete(piVar7);
      OpenGLContextCache____glewBindBuffer(param_1[1],0x8a11,param_1[4]);
      if (bVar9) {
        iVar5 = (*DAT_0451e520)(0x8a11,0,param_1[7],0xca);
        param_1[5] = iVar5;
        if (iVar5 == 0) {
          FUN_0400a810("mBufferPtr",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/uniformBuffer.cpp"
                       ,0x97,"void eON_UniformBufferStreamed::UpdateToNewBuffer()");
        }
      }
      return;
    }
    iVar8 = iVar8 + 2;
  }
  eON_UniformBufferStreamed__MakeNewBuffer(param_1);
  FUN_0402cd10(0x14,"Uniform buffer %s (%p) now has %d internal buffers, taking %d bytes",param_1[2]
               ,param_1,iVar8,iVar8 * param_1[7]);
  return;
}

// --- attached helper FUN_000a1610 @0x040a1610 (call-graph exclusive to this TU) ---
void FUN_040a1610(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_042f7088;
  d3dstructs_040a4ea0();
  return;
}

// --- attached helper FUN_000a2b00 @0x040a2b00 (call-graph exclusive to this TU) ---
void FUN_040a2b00(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_042f7088;
  d3dstructs_040a4ea0(param_1 + 1);
  operator_delete(param_1);
  return;
}

// --- attached helper FUN_000a4ff0 @0x040a4ff0 (call-graph exclusive to this TU) ---
void FUN_040a4ff0(void *param_1)

{
  d3dstructs_040a4ea0(param_1);
  operator_delete(param_1);
  return;
}

// --- attached helper FUN_000effb0 @0x040effb0 (call-graph exclusive to this TU) ---
void FUN_040effb0(int param_1)

{
                    /* try { // try from 040effc3 to 040effc7 has its CatchHandler @ 040f0059 */
  d3dstructs_040eec00(param_1 + 0x570);
                    /* try { // try from 040effd1 to 040effd5 has its CatchHandler @ 040f0165 */
  d3dstructs_040eec00(param_1 + 0x52c);
                    /* try { // try from 040effdf to 040effe3 has its CatchHandler @ 040f0155 */
  d3dstructs_040eec00(param_1 + 0x4e8);
                    /* try { // try from 040effed to 040efff1 has its CatchHandler @ 040f0145 */
  d3dstructs_040eec00(param_1 + 0x49c);
                    /* try { // try from 040efffb to 040effff has its CatchHandler @ 040f0136 */
  d3dstructs_040eec00(param_1 + 0x458);
                    /* try { // try from 040f0009 to 040f000d has its CatchHandler @ 040f0134 */
  d3dstructs_040eec00(param_1 + 0x414);
                    /* try { // try from 040f0017 to 040f001b has its CatchHandler @ 040f0132 */
  d3dstructs_040eec00(param_1 + 0x3d0);
                    /* try { // try from 040f0025 to 040f0029 has its CatchHandler @ 040f012d */
  d3dstructs_040eec00(param_1 + 0x38c);
                    /* try { // try from 040f0033 to 040f0037 has its CatchHandler @ 040f012b */
  d3dstructs_040eec00(param_1 + 0x348);
                    /* try { // try from 040f0041 to 040f0045 has its CatchHandler @ 040f0129 */
  d3dstructs_040eec00(param_1 + 0x304);
  d3dstructs_040eec00();
  return;
}

