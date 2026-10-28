// Recovered source: eon2/src/dlls/directx/d3d9/D3DBytecodeToGLSLText.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- DetermineCoordMaskForSampling @0x04053c00 ---
/* source: D3DBytecodeToGLSLText */

void DetermineCoordMaskForSampling(int *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  char *local_3d8;
  uint local_3d0;
  undefined1 *local_3cc;
  char local_3b2 [256];
  undefined1 local_2b2 [128];
  undefined1 local_232 [128];
  undefined1 local_1b2 [128];
  undefined1 local_132 [128];
  undefined1 local_b2 [128];
  undefined1 local_32 [16];
  undefined1 local_22 [18];
  
  local_b2[0] = 0;
  local_32[0] = 0;
  iVar5 = param_1[0xe];
  eON_ShaderData__InputRegisterIsColor(local_b2);
  iVar3 = ShaderData_AppendDestMask();
  if (iVar3 != 0) {
    eON_AppendShaderCompileMessage
              (iVar5,"%s%s = %s(",local_b2,local_32,
               (&PTR_DAT_042eb360)[*(byte *)((int)param_1 + 0xf) & 0xf]);
  }
  iVar5 = *param_1;
  if (*(int *)(iVar5 + 8) == 1) {
    if (*(int *)(iVar5 + 0xc) < 4) {
      uVar7 = 0;
      uVar8 = 0;
      cVar1 = '\0';
      uVar9 = 0;
      uVar10 = param_1[3] & 0x7ff;
    }
    else {
      if (*(int *)(iVar5 + 0xc) != 4) goto LAB_04053c8e;
      uVar7 = 0x30000;
      uVar10 = param_1[3] & 0x7ff;
      if ((param_1[6] & 0xf000000U) == 0x9000000) {
        uVar8 = 0x70000;
        cVar1 = '\x01';
        uVar9 = 0x70000;
      }
      else {
        cVar1 = (param_1[6] & 0xf000000U) == 0xa000000;
        if (!(bool)cVar1) {
          uVar7 = 0;
        }
        uVar8 = 0x70000;
        if (!(bool)cVar1) {
          uVar8 = 0;
        }
        uVar9 = 0xf0000;
        if (!(bool)cVar1) {
          uVar9 = 0;
        }
      }
    }
  }
  else {
LAB_04053c8e:
    uVar9 = param_1[2] & 0x10000;
    uVar10 = param_1[7] & 0x7ff;
    uVar7 = ~-(uint)(uVar9 == 0) & 0x30000;
    uVar8 = ~-(uint)(uVar9 == 0) & 0x70000;
    cVar1 = '\x01' - (uVar9 == 0);
    uVar9 = ~-(uint)(uVar9 == 0) & 0xf0000;
  }
  local_3d0 = *(uint *)(iVar5 + 0xd4 + uVar10 * 4);
  uVar4 = local_3d0 & 0x78000000;
  cVar2 = FUN_04021ee0();
  if (cVar2 == '\0') {
    uVar6 = local_3d0 & 0x38000000;
    if ((local_3d0 & 0x40000000) != 0) {
      if (uVar6 == 0x8000000) {
        if (cVar1 == '\0') {
          local_3d8 = "shadow1D";
          goto LAB_04053ef0;
        }
        local_3d8 = "shadow1DProj";
      }
      else {
        if (uVar6 != 0x10000000) {
          pcVar11 = "Unknown depth sampler type in GetSampleFunction_OpenGLCore()!";
LAB_0405406a:
          FUN_0402cd10(0xf,pcVar11);
          local_3d8 = "";
          goto LAB_04054098;
        }
        if (cVar1 == '\0') {
          local_3d8 = "shadow2D";
          goto LAB_04053ef0;
        }
        local_3d8 = "shadow2DProj";
      }
      goto LAB_04053d4a;
    }
    if (uVar6 != 0x18000000) {
      if (uVar6 == 0x20000000) {
        if (cVar1 == '\0') {
          local_3d8 = "texture3D";
          goto LAB_04053ef0;
        }
        local_3d8 = "texture3DProj";
      }
      else {
        if (uVar6 != 0x10000000) {
          pcVar11 = "Unknown sampler type in GetSampleFunction()!";
          goto LAB_0405406a;
        }
        if (cVar1 == '\0') {
          local_3d8 = "texture2D";
          goto LAB_04053ef0;
        }
        local_3d8 = "texture2DProj";
      }
      goto LAB_04053d4a;
    }
    local_3d8 = "textureCube";
LAB_04054098:
    if (cVar1 != '\0') goto LAB_04053d4a;
LAB_04053ef0:
    if (uVar4 != 0x20000000) {
      if (uVar4 < 0x20000001) {
        if (uVar4 != 0x10000000) {
          if (uVar4 != 0x18000000) goto LAB_04054158;
          goto LAB_04053f30;
        }
        if (uVar9 == 0) {
          uVar9 = 0x30000;
        }
        else if (uVar7 != 0x30000) {
          FUN_0400a810("( incomingMask & ( 0x10000 | 0x20000 ) ) == ( 0x10000 | 0x20000 )",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/D3DBytecodeToGLSLText.cpp"
                       ,0x6cb,"DWORD DetermineCoordMaskForSampling(DWORD, bool, DWORD)");
        }
      }
      else {
        if (((uVar4 == 0x50000000) || (uVar4 == 0x58000000)) || (uVar4 == 0x48000000))
        goto LAB_04053f30;
LAB_04054158:
        uVar9 = 0xf0000;
        FUN_0400a810("false",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/D3DBytecodeToGLSLText.cpp"
                     ,0x6dd,"DWORD DetermineCoordMaskForSampling(DWORD, bool, DWORD)");
      }
      goto LAB_04053db8;
    }
LAB_04053f30:
    if (uVar9 != 0) {
      if (uVar8 != 0x70000) {
        FUN_0400a810("( incomingMask & ( 0x10000 | 0x20000 | 0x40000 ) ) == ( 0x10000 | 0x20000 | 0x40000 )"
                     ,
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/D3DBytecodeToGLSLText.cpp"
                     ,0x6d8,"DWORD DetermineCoordMaskForSampling(DWORD, bool, DWORD)");
      }
      goto LAB_04053db8;
    }
LAB_04053f38:
    iVar5 = *param_1;
    uVar9 = 0x70000;
    if (*(int *)(iVar5 + 8) < 2) {
      uVar9 = 0x70000;
      goto LAB_04053f50;
    }
  }
  else {
    local_3d8 = "texture";
    if (cVar1 == '\0') goto LAB_04053ef0;
    local_3d8 = "textureProj";
LAB_04053d4a:
    if (uVar9 != 0xf0000) {
      if (uVar4 == 0x48000000) {
LAB_040541e0:
        if (uVar9 == 0) {
          uVar9 = 0xf0000;
        }
        else {
          uVar9 = 0xf0000;
          FUN_0400a810("!incomingMask",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/D3DBytecodeToGLSLText.cpp"
                       ,0x6ba,"DWORD DetermineCoordMaskForSampling(DWORD, bool, DWORD)");
        }
      }
      else {
        if (uVar4 < 0x48000001) {
          if (uVar4 == 0x10000000) {
            if (uVar9 == 0) goto LAB_04053f38;
            if (uVar8 != 0x70000) {
              FUN_0400a810("( incomingMask & ( 0x10000 | 0x20000 | 0x40000 ) ) == ( 0x10000 | 0x20000 | 0x40000 )"
                           ,
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/D3DBytecodeToGLSLText.cpp"
                           ,0x6b2,"DWORD DetermineCoordMaskForSampling(DWORD, bool, DWORD)");
            }
            goto LAB_04053db8;
          }
          if (uVar4 == 0x20000000) goto LAB_040541e0;
        }
        else if ((uVar4 == 0x50000000) || (uVar4 == 0x58000000)) goto LAB_040541e0;
        FUN_0400a810("false",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/D3DBytecodeToGLSLText.cpp"
                     ,0x6be,"DWORD DetermineCoordMaskForSampling(DWORD, bool, DWORD)");
        uVar9 = 0xf0000;
      }
    }
LAB_04053db8:
    iVar5 = *param_1;
    if (*(int *)(iVar5 + 8) < 2) {
LAB_04053f50:
      ShaderData_AppendDestMask();
      goto LAB_04053de5;
    }
  }
  ShaderData_AppendSwizzle(local_22,*(undefined1 *)(iVar5 + 0x10));
LAB_04053de5:
  local_3d0 = local_3d0 & 0x40000000;
  local_3cc = local_22;
  if ((*(int *)(*param_1 + 8) == 1) && (*(int *)(*param_1 + 0xc) < 4)) {
    ShaderData_AppendDestMask();
    sprintf(local_3b2,"%s( PSampler%u, Texture%u%s )",local_3d8,uVar10,uVar10,local_b2);
  }
  else {
    eON_ShaderData_ApplySourceModifier(uVar9,local_2b2);
    if ((*(byte *)((int)param_1 + 10) & 2) == 0) {
      sprintf(local_3b2,"%s( PSampler%u, %s )",local_3d8,uVar10,local_232);
    }
    else {
      eON_ShaderData_ApplySourceModifier(0x80000,local_1b2);
      sprintf(local_3b2,"%s( PSampler%u, %s, %s )",local_3d8,uVar10,local_232,local_132);
    }
  }
  if (local_3d0 != 0) {
    cVar1 = FUN_04021ee0();
    if (cVar1 != '\0') {
      iVar5 = *(int *)(*param_1 + 0x114 + uVar10 * 4);
      if (iVar5 == 2) {
        eON_AppendShaderCompileMessage
                  (param_1[0xe],"vec4( vec3( %s ), 1.0 )%s );\n",local_3b2,local_3cc);
        return;
      }
      if (iVar5 != 3) {
        if (iVar5 != 1) {
          eON_AppendShaderCompileMessage
                    (param_1[0xe],"vec4( %s, 0.0, 0.0, 1.0 )%s );\n",local_3b2,local_3cc);
          return;
        }
        eON_AppendShaderCompileMessage
                  (param_1[0xe],"vec4( 1.0, 1.0, 1.0, %s )%s );\n",local_3b2,local_3cc);
        return;
      }
      eON_AppendShaderCompileMessage
                (param_1[0xe],"vec4( vec3( %s ), 0.0 )%s );\n",local_3b2,local_3cc);
      return;
    }
  }
  iVar5 = *(int *)(*param_1 + 0x114 + uVar10 * 4);
  if (iVar5 == 2) {
    eON_AppendShaderCompileMessage(param_1[0xe],"vec4( %s.rrr, 1.0 )%s );\n",local_3b2,local_3cc);
    return;
  }
  if (iVar5 != 3) {
    if (iVar5 != 1) {
      eON_AppendShaderCompileMessage(param_1[0xe],"%s%s );\n",local_3b2,local_3cc);
      return;
    }
    eON_AppendShaderCompileMessage
              (param_1[0xe],"vec4( 1.0, 1.0, 1.0, %s.r )%s );\n",local_3b2,local_3cc);
    return;
  }
  eON_AppendShaderCompileMessage(param_1[0xe],"vec4( %s.rrrg )%s );\n",local_3b2,local_3cc);
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

// --- convert_texldd @0x04053130 ---
/* source: D3DBytecodeToGLSLText */

void convert_texldd(int *param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  char *local_3c4;
  undefined1 local_3b2 [128];
  undefined1 local_332 [128];
  undefined1 local_2b2 [128];
  undefined1 local_232 [128];
  undefined1 local_1b2 [128];
  undefined1 local_132 [128];
  undefined1 local_b2 [128];
  undefined1 local_32 [16];
  undefined1 local_22 [18];
  
  local_b2[0] = 0;
  local_32[0] = 0;
  iVar1 = param_1[0xe];
  eON_ShaderData__InputRegisterIsColor(local_b2);
  iVar4 = ShaderData_AppendDestMask();
  if (iVar4 != 0) {
    eON_AppendShaderCompileMessage
              (iVar1,"%s%s = %s(",local_b2,local_32,
               (&PTR_DAT_042eb360)[*(byte *)((int)param_1 + 0xf) & 0xf]);
  }
  ShaderData_AppendSwizzle(local_22,*(undefined1 *)(*param_1 + 0x10));
  uVar8 = param_1[7] & 0x7ff;
  uVar2 = *(uint *)(*param_1 + 0xd4 + uVar8 * 4);
  iVar1 = *(int *)(*param_1 + 0x114 + uVar8 * 4);
  uVar7 = uVar2 & 0x78000000;
  cVar3 = FUN_04021ee0();
  local_3c4 = "texture";
  if (cVar3 == '\0') {
    uVar6 = uVar2 & 0x38000000;
    if ((uVar2 & 0x40000000) == 0) {
      local_3c4 = "textureCube";
      if (((uVar6 != 0x18000000) && (local_3c4 = "texture3D", uVar6 != 0x20000000)) &&
         (local_3c4 = "texture2D", uVar6 != 0x10000000)) {
        FUN_0402cd10(0xf,"Unknown sampler type in GetSampleFunction()!");
        local_3c4 = "";
      }
    }
    else {
      local_3c4 = "shadow1D";
      if ((uVar6 != 0x8000000) && (local_3c4 = "shadow2D", uVar6 != 0x10000000)) {
        FUN_0402cd10(0xf,"Unknown depth sampler type in GetSampleFunction_OpenGLCore()!");
        local_3c4 = "";
      }
    }
  }
  if (uVar7 == 0x20000000) {
LAB_04053548:
    uVar9 = 3;
    uVar5 = 3;
  }
  else {
    uVar9 = 2;
    if (uVar7 < 0x20000001) {
      uVar5 = 2;
      if (uVar7 == 0x10000000) goto LAB_04053287;
      if (uVar7 == 0x18000000) goto LAB_04053548;
      uVar9 = 1;
      uVar5 = 1;
      if (uVar7 == 0x8000000) goto LAB_04053287;
    }
    else {
      uVar5 = 3;
      if (uVar7 == 0x50000000) goto LAB_04053287;
      uVar9 = 3;
      uVar5 = 4;
      if (uVar7 == 0x58000000) goto LAB_04053287;
      uVar9 = 1;
      uVar5 = 3;
      if (uVar7 == 0x48000000) goto LAB_04053287;
    }
    uVar9 = 2;
    FUN_0400a810("false",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/D3DBytecodeToGLSLText.cpp"
                 ,0x7a8,"void convert_texldd(ConversionState*)");
    uVar5 = 2;
  }
LAB_04053287:
  eON_ShaderData_ApplySourceModifier(uVar5,local_3b2);
  eON_ShaderData_ApplySourceModifier(uVar9,local_2b2);
  eON_ShaderData_ApplySourceModifier(uVar9,local_1b2);
  cVar3 = (-(*(char *)(*param_1 + 0x10) == '\0') & 6U) + 0x50;
  if (iVar1 == 2) {
    eON_AppendShaderCompileMessage
              (param_1[0xe],"vec4( %sGrad( %cSampler%u, %s, %s, %s ).rrr, 1.0 )%s );\n",local_3c4,
               cVar3,uVar8,local_332,local_232,local_132,local_22);
    return;
  }
  if (iVar1 == 3) {
    eON_AppendShaderCompileMessage
              (param_1[0xe],"vec4( %sGrad( %cSampler%u, %s, %s, %s ).rrrg )%s );\n",local_3c4,cVar3,
               uVar8,local_332,local_232,local_132,local_22);
    return;
  }
  if (iVar1 == 1) {
    eON_AppendShaderCompileMessage
              (param_1[0xe],"vec4( 1.0, 1.0, 1.0, %sGrad( %cSampler%u, %s, %s, %s ).r )%s );\n",
               local_3c4,cVar3,uVar8,local_332,local_232,local_132,local_22);
    return;
  }
  eON_AppendShaderCompileMessage
            (param_1[0xe],"%sGrad( %cSampler%u, %s, %s, %s )%s );\n",local_3c4,cVar3,uVar8,local_332
             ,local_232,local_132,local_22);
  return;
}

// --- convert_texreg2ar @0x04053a90 ---
/* source: D3DBytecodeToGLSLText */

void convert_texreg2ar(int *param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined1 local_1b2 [128];
  undefined1 local_132 [128];
  undefined1 local_b2 [128];
  undefined1 local_32 [16];
  undefined1 local_22 [18];
  
  cVar3 = FUN_04021ee0();
  uVar1 = param_1[3];
  if (*(int *)(*param_1 + 0x114 + (uVar1 & 0x7ff) * 4) != 0) {
    FUN_0400a810("state->Shader->Regs.SamplersMapping[samplerIndex] == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/D3DBytecodeToGLSLText.cpp"
                 ,0x654,"void convert_texreg2ar(ConversionState*)");
  }
  ShaderData_AppendDestMask();
  iVar2 = param_1[0xe];
  local_b2[0] = 0;
  local_32[0] = 0;
  eON_ShaderData__InputRegisterIsColor(local_b2);
  iVar4 = ShaderData_AppendDestMask();
  if (iVar4 != 0) {
    eON_AppendShaderCompileMessage
              (iVar2,"%s%s = %s(",local_b2,local_32,
               (&PTR_DAT_042eb360)[*(byte *)((int)param_1 + 0xf) & 0xf]);
  }
  eON_ShaderData_ApplySourceModifier(0xf0000,local_1b2);
  pcVar5 = "";
  if (cVar3 == '\0') {
    pcVar5 = "2D";
  }
  eON_AppendShaderCompileMessage
            (param_1[0xe],"texture%s( PSampler%u, %s.wx )%s );\n",pcVar5,uVar1 & 0x7ff,local_132,
             local_22);
  return;
}

// --- convert_texreg2gb @0x04053920 ---
/* source: D3DBytecodeToGLSLText */

void convert_texreg2gb(int *param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined1 local_1b2 [128];
  undefined1 local_132 [128];
  undefined1 local_b2 [128];
  undefined1 local_32 [16];
  undefined1 local_22 [18];
  
  cVar3 = FUN_04021ee0();
  uVar1 = param_1[3];
  if (*(int *)(*param_1 + 0x114 + (uVar1 & 0x7ff) * 4) != 0) {
    FUN_0400a810("state->Shader->Regs.SamplersMapping[samplerIndex] == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/D3DBytecodeToGLSLText.cpp"
                 ,0x661,"void convert_texreg2gb(ConversionState*)");
  }
  ShaderData_AppendDestMask();
  iVar2 = param_1[0xe];
  local_b2[0] = 0;
  local_32[0] = 0;
  eON_ShaderData__InputRegisterIsColor(local_b2);
  iVar4 = ShaderData_AppendDestMask();
  if (iVar4 != 0) {
    eON_AppendShaderCompileMessage
              (iVar2,"%s%s = %s(",local_b2,local_32,
               (&PTR_DAT_042eb360)[*(byte *)((int)param_1 + 0xf) & 0xf]);
  }
  eON_ShaderData_ApplySourceModifier(0xf0000,local_1b2);
  pcVar5 = "";
  if (cVar3 == '\0') {
    pcVar5 = "2D";
  }
  eON_AppendShaderCompileMessage
            (param_1[0xe],"texture%s( PSampler%u, %s.yz )%s );\n",pcVar5,uVar1 & 0x7ff,local_132,
             local_22);
  return;
}

// --- eON_ShaderData::GenerateGLSLDeclarations @0x0405b220 ---
/* WARNING: Removing unreachable block (ram,0x0405be29) */
/* WARNING: Removing unreachable block (ram,0x0405be82) */
/* WARNING: Removing unreachable block (ram,0x0405be8f) */
/* WARNING: Removing unreachable block (ram,0x0405be36) */
/* WARNING: Removing unreachable block (ram,0x0405be3d) */
/* WARNING: Removing unreachable block (ram,0x0405bf3c) */
/* source: D3DBytecodeToGLSLText */

void eON_ShaderData__GenerateGLSLDeclarations(int param_1,undefined4 param_2)

{
  allocator *paVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  undefined2 *puVar6;
  int iVar7;
  char cVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  uint uVar13;
  char **ppcVar14;
  int *piVar15;
  byte bVar16;
  char *local_a8 [4];
  char *local_98;
  undefined *local_94;
  char *local_90;
  undefined *local_8c;
  char *local_88;
  char *local_84;
  char *local_80;
  char *local_7c;
  char *local_78;
  char *local_74;
  char *local_70;
  char *local_6c;
  char *local_68;
  char *local_64;
  char *local_60;
  char *local_5c;
  int *local_30;
  int *local_2c;
  int *local_28;
  undefined1 *local_24;
  allocator local_20 [16];
  
  bVar16 = 0;
  cVar8 = *(char *)(param_1 + 0x10);
  cVar5 = FUN_04021ee0();
  cVar8 = (-(cVar8 == '\0') & 6U) + 0x50;
  if (*(char *)(param_1 + 0x15c) != '\0') {
    *(undefined1 *)(param_1 + 0x15d) = 1;
  }
  if (cVar5 == '\0') {
    eON_AppendShaderCompileMessage(param_2,"#extension GL_ARB_shader_texture_lod : require\n\n");
  }
  else {
    eON_AppendShaderCompileMessage(param_2,"#version 150\n\n");
  }
  uVar11 = *(uint *)(param_1 + 0x48);
  if (uVar11 != 0) {
    uVar10 = 0;
    do {
      while (*(char *)(param_1 + 0xad + uVar10) == '\0') {
        uVar10 = uVar10 + 1;
        if (uVar11 <= uVar10) goto LAB_0405b2c5;
      }
      uVar13 = uVar10 + 1;
      eON_AppendShaderCompileMessage(param_2,"void LabelFunction%u();\n",uVar10);
      uVar11 = *(uint *)(param_1 + 0x48);
      uVar10 = uVar13;
    } while (uVar13 < uVar11);
  }
LAB_0405b2c5:
  if (cVar5 != '\0') {
    eON_AppendShaderCompileMessage
              (param_2,
               "layout(std140) uniform CommonVariables {\n\tvec4 PositionFix;\n\tvec4 GlFogcolor;\n\tfloat GlFogdensity;\n\tfloat GlFogend;\n\tfloat GlFogscale;\n\tfloat AlphaRef;\n\tvec4 ClipPlanes[6];\n};\n\n"
              );
    pcVar9 = "Pixel";
    cVar12 = (-(*(char *)(param_1 + 0x10) == '\0') & 6U) + 0x50;
    if (*(char *)(param_1 + 0x10) == '\0') {
      pcVar9 = "Vertex";
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      eON_AppendShaderCompileMessage
                (param_2,"layout(std140) uniform Asm%sFloat {\n\tvec4 %cConstFloat[%u];\n};\n\n",
                 pcVar9,cVar12,*(int *)(param_1 + 0x2c));
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      eON_AppendShaderCompileMessage
                (param_2,"layout(std140) uniform Asm%sInt {\n\tivec4 %cConstInt[%u];\n};\n\n",pcVar9
                 ,cVar12,*(int *)(param_1 + 0x28));
    }
    if (*(int *)(param_1 + 0x34) != 0) {
      eON_AppendShaderCompileMessage
                (param_2,"layout(std140) uniform Asm%sBool {\n\tbool %cConstBool[%u];\n};\n\n",
                 pcVar9,cVar12,*(int *)(param_1 + 0x34));
    }
    if (((*(char *)(param_1 + 0x10) != '\0') &&
        (eON_AppendShaderCompileMessage
                   (param_2,
                    "layout(std140) uniform AsmPixelOnly {\n\tvec4 BumpEnvMatrix;\n\tfloat LuminanceScale;\n\tfloat LuminanceOffset;\n};\n\n"
                   ), *(char *)(param_1 + 0x10) != '\0')) && (*(char *)(param_1 + 0x15c) != '\0')) {
      eON_AppendShaderCompileMessage(param_2,"vec4 VPos;\n\n");
    }
    goto LAB_0405b375;
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar7 = *(int *)(param_1 + 0x28);
    if (iVar7 != 0) goto LAB_0405bc89;
LAB_0405b2e8:
    iVar7 = *(int *)(param_1 + 0x34);
  }
  else {
    eON_AppendShaderCompileMessage
              (param_2,"uniform vec4 %cConstFloat[%u];\n",cVar8,*(int *)(param_1 + 0x2c));
    iVar7 = *(int *)(param_1 + 0x28);
    if (iVar7 == 0) goto LAB_0405b2e8;
LAB_0405bc89:
    eON_AppendShaderCompileMessage(param_2,"uniform ivec4 %cConstInt[%u];\n",cVar8,iVar7);
    iVar7 = *(int *)(param_1 + 0x34);
  }
  if (iVar7 != 0) {
    eON_AppendShaderCompileMessage(param_2,"uniform bool %cConstBool[%u];\n",cVar8,iVar7);
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    eON_AppendShaderCompileMessage(param_2,"uniform vec4 PositionFix;\n");
  }
  else {
    if ((*(char *)(param_1 + 0x154) != -1) &&
       (eON_AppendShaderCompileMessage(param_2,"uniform mat2 BumpEnvMatrix;\n"),
       *(char *)(param_1 + 0x155) != -1)) {
      eON_AppendShaderCompileMessage(param_2,"uniform float LuminanceScale;\n");
      eON_AppendShaderCompileMessage(param_2,"uniform float LuminanceOffset;\n");
    }
    if (*(char *)(param_1 + 0x15c) == '\0') {
      if (*(char *)(param_1 + 0x15d) != '\0') {
        eON_AppendShaderCompileMessage(param_2,"uniform vec4 PositionFix;\n\n");
      }
    }
    else {
      eON_AppendShaderCompileMessage(param_2,"vec4 VPos;\nuniform vec4 PositionFix;\n\n");
    }
  }
  if ((*(char *)(param_1 + 0x10) != '\0') && (*(char *)(param_1 + 0x160) != '\0')) {
    eON_AppendShaderCompileMessage(param_2,"uniform float AlphaRef;\n");
  }
LAB_0405b375:
  uVar11 = *(uint *)(param_1 + 0x24);
  uVar10 = 0;
  if (uVar11 != 0) {
    do {
      while (uVar13 = *(uint *)(param_1 + 0xd4 + uVar10 * 4), uVar13 == 0) {
LAB_0405b3fc:
        uVar10 = uVar10 + 1;
        if (uVar11 <= uVar10) goto LAB_0405b49d;
      }
      if ((uVar13 & 0x40000000) != 0) {
        uVar11 = uVar13 & 0x38000000;
        pcVar9 = "2D";
        if (((uVar11 != 0x10000000) && (pcVar9 = "Cube", uVar11 != 0x18000000)) &&
           (pcVar9 = "1D", uVar11 != 0x8000000)) {
          FUN_0402cd10(0xf,
                       "Unsupported depth sampler type while processing GLSL declarations! (%x). Fix it."
                       ,uVar13 & 0x78000000);
          pcVar9 = "_no_idea";
        }
        eON_AppendShaderCompileMessage
                  (param_2,"uniform sampler%sShadow %cSampler%u;\n",pcVar9,cVar8,uVar10);
        uVar11 = *(uint *)(param_1 + 0x24);
        goto LAB_0405b3fc;
      }
      uVar11 = uVar13 & 0x38000000;
      pcVar9 = "Cube";
      if (((uVar11 != 0x18000000) && (pcVar9 = "3D", uVar11 != 0x20000000)) &&
         (pcVar9 = "2D", uVar11 != 0x10000000)) {
        FUN_0402cd10(0xf,
                     "Unsupported sampler type while processing GLSL declarations! (%x). Fix it.",
                     uVar13 & 0x78000000);
        pcVar9 = "_no_idea";
      }
      uVar13 = uVar10 + 1;
      eON_AppendShaderCompileMessage(param_2,"uniform sampler%s %cSampler%u;\n",pcVar9,cVar8,uVar10)
      ;
      uVar11 = *(uint *)(param_1 + 0x24);
      uVar10 = uVar13;
    } while (uVar13 < uVar11);
  }
LAB_0405b49d:
  if (*(char *)(param_1 + 0x84) != '\0') {
    eON_AppendShaderCompileMessage(param_2,"\nivec4 Address0;\n");
  }
  if (DAT_04468c04 == 0) {
    if (cVar5 == '\0') {
      cVar8 = *(char *)(param_1 + 0xbd);
    }
    else {
      FUN_0400a810("!openGl32Core",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/D3DBytecodeToGLSLText.cpp"
                   ,0xcb7,"void eON_ShaderData::GenerateGLSLDeclarations(TextBuffer*)");
      cVar8 = *(char *)(param_1 + 0xbd);
    }
    if (cVar8 != '\0') {
      eON_AppendShaderCompileMessage(param_2,"\nvarying vec4 eON_Texcoord8;\n");
    }
    if (*(char *)(param_1 + 0xbe) != '\0') {
      eON_AppendShaderCompileMessage(param_2,"\nvarying vec4 eON_Texcoord9;\n");
    }
  }
  else {
    pcVar9 = &DAT_0433e9db;
    if (*(char *)(param_1 + 0x10) == '\0') {
      pcVar9 = (char *)&PTR_DAT_0435a044;
    }
    if (cVar5 == '\0') {
      pcVar9 = "varying";
    }
    eON_AppendShaderCompileMessage(param_2,"%s vec4 eON_Varyings[10];\n",pcVar9);
    eON_AppendShaderCompileMessage(param_2,"%s float eON_VaryingFog;\n",pcVar9);
  }
  if ((*(char *)(param_1 + 0x10) != '\0') && (cVar5 != '\0')) {
    eON_AppendShaderCompileMessage(param_2,"out vec4 FragData[gl_MaxDrawBuffers];\n");
  }
  uVar11 = *(uint *)(param_1 + 0x20);
  if (uVar11 != 0) {
    uVar10 = 0;
    do {
      while (*(char *)(param_1 + 0x4c + uVar10) == '\0') {
        uVar10 = uVar10 + 1;
        if (uVar11 <= uVar10) goto LAB_0405b640;
      }
      ppcVar14 = local_a8;
      for (iVar7 = 0x1e; iVar7 != 0; iVar7 = iVar7 + -1) {
        *ppcVar14 = (char *)0x0;
        ppcVar14 = ppcVar14 + (uint)bVar16 * -2 + 1;
      }
      local_84 = "gl_TexCoord[4]";
      local_a8[0] = "eON_Varyings[0]";
      local_a8[1] = "gl_TexCoord[0]";
      local_a8[2] = "eON_Varyings[1]";
      local_a8[3] = "gl_TexCoord[1]";
      local_98 = "eON_Varyings[2]";
      local_94 = &DAT_042e76da;
      uVar13 = uVar10 + 1;
      local_90 = "eON_Varyings[3]";
      local_8c = &DAT_042e76f9;
      local_88 = "eON_Varyings[4]";
      local_80 = "eON_Varyings[5]";
      local_7c = "gl_TexCoord[5]";
      local_78 = "eON_Varyings[6]";
      local_74 = "gl_TexCoord[6]";
      local_70 = "eON_Varyings[7]";
      local_6c = "gl_TexCoord[7]";
      local_68 = "eON_Varyings[8]";
      local_64 = "eON_Texcoord8";
      local_60 = "eON_Varyings[9]";
      local_5c = "eON_Texcoord9";
      eON_AppendShaderCompileMessage
                (param_2,"vec4 Texture%u = %s;\n",uVar10,local_a8[(DAT_04468c04 ^ 1) + uVar10 * 2]);
      uVar11 = *(uint *)(param_1 + 0x20);
      uVar10 = uVar13;
    } while (uVar13 < uVar11);
  }
LAB_0405b640:
  if ((*(char *)(param_1 + 0x10) != '\0') && (2 < *(int *)(param_1 + 8))) {
    eON_AppendShaderCompileMessage(param_2,"\nvec4 IN[13];\n");
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    eON_AppendShaderCompileMessage(param_2,"\nvec4 OUT[%u];\n",*(int *)(param_1 + 0x3c));
  }
  uVar11 = *(uint *)(param_1 + 0x1c);
  if (uVar11 != 0) {
    uVar10 = 0;
    do {
      while (*(char *)(param_1 + 100 + uVar10) == '\0') {
        uVar10 = uVar10 + 1;
        if (uVar11 <= uVar10) goto LAB_0405b69c;
      }
      uVar13 = uVar10 + 1;
      eON_AppendShaderCompileMessage(param_2,"vec4 Temporary%u;\n",uVar10);
      uVar11 = *(uint *)(param_1 + 0x1c);
      uVar10 = uVar13;
    } while (uVar13 < uVar11);
  }
LAB_0405b69c:
  uVar11 = *(uint *)(param_1 + 0x44);
  local_30 = (int *)0x0;
  local_2c = (int *)0x0;
  local_28 = (int *)0x0;
  if (uVar11 != 0) {
    uVar10 = 0;
    do {
      while (*(char *)(param_1 + 0x9d + uVar10) != '\0') {
                    /* try { // try from 0405b6eb to 0405b8e8 has its CatchHandler @ 0405be42 */
        eON_ShaderData__FormatAttributeName(param_1,uVar10,local_a8);
        piVar2 = local_2c;
        piVar15 = local_30;
        if (local_30 == local_2c) {
LAB_0405b988:
          pcVar9 = "in";
          if (cVar5 == '\0') {
            pcVar9 = "attribute";
          }
                    /* try { // try from 0405b9b8 to 0405b9dd has its CatchHandler @ 0405be42 */
          eON_AppendShaderCompileMessage(param_2,"%s vec4 e%s;\n",pcVar9,local_a8);
          eON_AppendShaderCompileMessage(param_2,"vec4 %s = e%s;\n",local_a8,local_a8);
                    /* try { // try from 0405b9f5 to 0405b9f9 has its CatchHandler @ 0405bf23 */
          std::string::string((string *)&local_24,(char *)local_a8,local_20);
          if (local_2c == local_28) {
                    /* try { // try from 0405bab5 to 0405bab9 has its CatchHandler @ 0405bf28 */
            FUN_0405cc50(&local_30,local_2c,(string *)&local_24);
          }
          else {
            if (local_2c != (int *)0x0) {
              *local_2c = (int)local_24;
              local_24 = &DAT_04410d0c;
            }
            local_2c = local_2c + 1;
          }
          if ((allocator *)(local_24 + -0xc) !=
              (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
            LOCK();
            piVar2 = (int *)(local_24 + -4);
            iVar7 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar7 < 1) {
              std::string::_Rep::_M_destroy((allocator *)(local_24 + -0xc));
            }
          }
        }
        else {
          do {
            iVar7 = strcmp((char *)local_a8,(char *)*piVar15);
            if (piVar15 + 1 == piVar2) {
              if (iVar7 != 0) goto LAB_0405b988;
              break;
            }
            piVar15 = piVar15 + 1;
          } while (iVar7 != 0);
        }
        uVar11 = *(uint *)(param_1 + 0x44);
        uVar10 = uVar10 + 1;
        if (uVar11 <= uVar10) goto LAB_0405b73e;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar11);
  }
LAB_0405b73e:
  if (*(int *)(param_1 + 0x158) != 0) {
    uVar11 = 0;
    do {
      eON_AppendShaderCompileMessage(param_2,"int Loop%u;\n",uVar11);
      eON_AppendShaderCompileMessage(param_2,"int LoopTemp%u;\n",uVar11);
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(param_1 + 0x158));
  }
  eON_AppendShaderCompileMessage(param_2,"\nvec4 InstrHelpTemp;\n");
  if ((*(char *)(param_1 + 0x15f) == '\0') && (uVar11 = 0, *(int *)(param_1 + 0x2b8) != 0)) {
    iVar7 = 0;
    do {
      puVar6 = (undefined2 *)(*(int *)(param_1 + 0x2b4) + iVar7);
      eON_AppendShaderCompileMessage
                (param_2,"const vec4 LocalConst%u = vec4(%.9f, %.9f, %.9f, %.9f);\n",*puVar6,
                 (double)*(float *)(puVar6 + 2),(double)*(float *)(puVar6 + 4),
                 (double)*(float *)(puVar6 + 6),(double)*(float *)(puVar6 + 8));
      uVar11 = uVar11 + 1;
      iVar7 = iVar7 + 0x24;
    } while (uVar11 < *(uint *)(param_1 + 0x2b8));
  }
  iVar7 = 0;
  uVar11 = 0;
  if (*(int *)(param_1 + 0x2c0) != 0) {
    do {
      puVar6 = (undefined2 *)(*(int *)(param_1 + 700) + iVar7);
      eON_AppendShaderCompileMessage
                (param_2,"const ivec4 LocalConstI%u = ivec4(%d, %d, %d, %d);\n",*puVar6,
                 *(undefined4 *)(puVar6 + 2),*(undefined4 *)(puVar6 + 4),*(undefined4 *)(puVar6 + 6)
                 ,*(undefined4 *)(puVar6 + 8));
      uVar11 = uVar11 + 1;
      iVar7 = iVar7 + 0x24;
    } while (uVar11 < *(uint *)(param_1 + 0x2c0));
  }
  if (*(int *)(param_1 + 0x2c8) != 0) {
    uVar11 = 0;
    iVar7 = 0;
    do {
      puVar6 = (undefined2 *)(*(int *)(param_1 + 0x2c4) + iVar7);
      pcVar9 = "true";
      if (*(int *)(puVar6 + 2) == 0) {
        pcVar9 = "false";
      }
      eON_AppendShaderCompileMessage(param_2,"const bool LocalConstB%u = %s;\n",*puVar6,pcVar9);
      uVar11 = uVar11 + 1;
      iVar7 = iVar7 + 0x24;
    } while (uVar11 < *(uint *)(param_1 + 0x2c8));
  }
  eON_AppendShaderCompileMessage(param_2,"\nvoid main()\n{\n");
  if ((*(char *)(param_1 + 0x10) != '\0') && (*(char *)(param_1 + 0x15c) != '\0')) {
                    /* try { // try from 0405bd6b to 0405bd6f has its CatchHandler @ 0405be42 */
    eON_AppendShaderCompileMessage(param_2,"VPos.rg = floor( gl_FragCoord.rg );\n");
  }
  piVar2 = local_30;
  piVar15 = local_2c;
  if ((DAT_04468c04 != 0) && (*(char *)(param_1 + 0x10) == '\0')) {
                    /* try { // try from 0405bad0 to 0405bb74 has its CatchHandler @ 0405be42 */
    eON_AppendShaderCompileMessage(param_2,"eON_Varyings[0] = vec4(0.0);\n");
    eON_AppendShaderCompileMessage(param_2,"eON_Varyings[1] = vec4(0.0);\n");
    eON_AppendShaderCompileMessage(param_2,"eON_Varyings[2] = vec4(0.0);\n");
    eON_AppendShaderCompileMessage(param_2,"eON_Varyings[3] = vec4(0.0);\n");
    eON_AppendShaderCompileMessage(param_2,"eON_Varyings[4] = vec4(0.0);\n");
    eON_AppendShaderCompileMessage(param_2,"eON_Varyings[5] = vec4(0.0);\n");
    eON_AppendShaderCompileMessage(param_2,"eON_Varyings[6] = vec4(0.0);\n");
    eON_AppendShaderCompileMessage(param_2,"eON_Varyings[7] = vec4(0.0);\n");
    eON_AppendShaderCompileMessage(param_2,"eON_Varyings[8] = vec4(0.0);\n");
    eON_AppendShaderCompileMessage(param_2,"eON_Varyings[9] = vec4(0.0);\n");
    eON_AppendShaderCompileMessage(param_2,"eON_VaryingFog = 0.0;\n");
    piVar2 = local_30;
    piVar15 = local_2c;
  }
  for (; piVar4 = local_2c, local_2c != piVar2; piVar2 = piVar2 + 1) {
    paVar1 = (allocator *)(*piVar2 + -0xc);
    local_2c = piVar15;
    if (paVar1 != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
      LOCK();
      piVar3 = (int *)(*piVar2 + -4);
      iVar7 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar7 < 1) {
        std::string::_Rep::_M_destroy(paVar1);
      }
    }
    piVar15 = local_2c;
    local_2c = piVar4;
  }
  if (local_30 != (int *)0x0) {
    local_2c = piVar15;
    operator_delete(local_30);
  }
  return;
}

// --- eON_ShaderData::GenerateOutputRegistersAssignments @0x04059dc0 ---
/* source: D3DBytecodeToGLSLText */

void eON_ShaderData__GenerateOutputRegistersAssignments
               (int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char **ppcVar7;
  byte bVar8;
  int local_d8;
  uint local_d4;
  char *local_c4 [4];
  char *local_b4;
  char *local_b0;
  char *local_ac;
  char *local_a8;
  char *local_a4;
  char *local_a0;
  char *local_9c;
  char *local_98;
  char *local_94;
  char *local_90;
  char *local_8c;
  char *local_88;
  char *local_84;
  char *local_80;
  char *local_7c;
  char *local_78;
  int local_4c [10];
  undefined1 local_22 [18];
  
  bVar8 = 0;
  if (*(char *)(param_1 + 0x10) != '\0') {
    FUN_0400a810("!IsPixelShader",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/D3DBytecodeToGLSLText.cpp"
                 ,0xd20,
                 "void eON_ShaderData::GenerateOutputRegistersAssignments(TextBuffer*, ColorRegisterAssignment*)"
                );
  }
  *param_3 = 0xffffffff;
  param_3[1] = 0xffffffff;
  param_3[2] = 0xffffffff;
  param_3[3] = 0xffffffff;
  param_3[4] = 0xffffffff;
  if (*(int *)(param_1 + 8) < 3) {
    iVar2 = 0;
    if (*(int *)(param_1 + 0x5c) == 0) {
      iVar6 = *(int *)(param_1 + 0x60);
    }
    else {
      iVar6 = *(int *)(param_1 + 0x5c) + -1;
      *(char *)((int)param_3 + 1) = (char)iVar6;
      *(undefined1 *)param_3 = 0;
      ppcVar7 = local_c4;
      for (iVar2 = 0x1e; iVar2 != 0; iVar2 = iVar2 + -1) {
        *ppcVar7 = (char *)0x0;
        ppcVar7 = ppcVar7 + (uint)bVar8 * -2 + 1;
      }
      local_84 = "eON_Varyings[8]";
      local_c4[0] = "eON_Varyings[0]";
      local_c4[1] = "gl_FrontColor";
      local_c4[2] = "eON_Varyings[1]";
      local_c4[3] = "gl_FrontSecondaryColor";
      local_b4 = "eON_Varyings[2]";
      local_b0 = "gl_TexCoord[7]";
      local_ac = "eON_Varyings[3]";
      local_a8 = "gl_TexCoord[6]";
      local_a4 = "eON_Varyings[4]";
      local_a0 = "gl_TexCoord[5]";
      local_9c = "eON_Varyings[5]";
      local_98 = "gl_TexCoord[4]";
      local_94 = "eON_Varyings[6]";
      local_90 = "gl_TexCoord[3]";
      local_8c = "eON_Varyings[7]";
      local_88 = "gl_TexCoord[2]";
      local_80 = "gl_TexCoord[1]";
      local_7c = "eON_Varyings[9]";
      local_78 = "gl_TexCoord[0]";
      eON_AppendShaderCompileMessage
                (param_2,"%s = clamp( %s, 0.0, 1.0 );\n",local_c4[(DAT_04468c04 ^ 1) + iVar6 * 2],
                 local_c4[(DAT_04468c04 ^ 1) + iVar6 * 2]);
      iVar2 = 1;
      iVar6 = *(int *)(param_1 + 0x60);
    }
    if (iVar6 != 0) {
      puVar1 = (undefined1 *)((int)param_3 + iVar2 * 2);
      puVar1[1] = (char)(iVar6 + -1);
      *puVar1 = 1;
      ppcVar7 = local_c4;
      for (iVar2 = 0x1e; iVar2 != 0; iVar2 = iVar2 + -1) {
        *ppcVar7 = (char *)0x0;
        ppcVar7 = ppcVar7 + (uint)bVar8 * -2 + 1;
      }
      local_84 = "eON_Varyings[8]";
      local_c4[0] = "eON_Varyings[0]";
      local_c4[1] = "gl_FrontColor";
      local_c4[2] = "eON_Varyings[1]";
      local_c4[3] = "gl_FrontSecondaryColor";
      local_b4 = "eON_Varyings[2]";
      local_b0 = "gl_TexCoord[7]";
      local_ac = "eON_Varyings[3]";
      local_a8 = "gl_TexCoord[6]";
      local_a4 = "eON_Varyings[4]";
      local_a0 = "gl_TexCoord[5]";
      local_9c = "eON_Varyings[5]";
      local_98 = "gl_TexCoord[4]";
      local_94 = "eON_Varyings[6]";
      local_90 = "gl_TexCoord[3]";
      local_8c = "eON_Varyings[7]";
      local_88 = "gl_TexCoord[2]";
      local_80 = "gl_TexCoord[1]";
      local_7c = "eON_Varyings[9]";
      local_78 = "gl_TexCoord[0]";
      eON_AppendShaderCompileMessage
                (param_2,"%s = clamp( %s, 0.0, 1.0 );\n",
                 local_c4[(DAT_04468c04 ^ 1) + (iVar6 + -1) * 2],
                 local_c4[(DAT_04468c04 ^ 1) + (iVar6 + -1) * 2]);
    }
  }
  local_4c[0] = 1;
  local_4c[1] = 1;
  local_4c[2] = 1;
  local_4c[3] = 1;
  local_4c[4] = 1;
  local_4c[5] = 1;
  local_4c[6] = 1;
  local_4c[7] = 1;
  local_4c[8] = 1;
  local_4c[9] = 1;
  if (*(int *)(param_1 + 0x224) == 5) {
    local_4c[*(int *)(param_1 + 0x228)] = 0;
  }
  if (*(int *)(param_1 + 0x230) == 5) {
    local_4c[*(int *)(param_1 + 0x234)] = 0;
  }
  if (*(int *)(param_1 + 0x23c) == 5) {
    local_4c[*(int *)(param_1 + 0x240)] = 0;
  }
  if (*(int *)(param_1 + 0x248) == 5) {
    local_4c[*(int *)(param_1 + 0x24c)] = 0;
    iVar2 = *(int *)(param_1 + 0x254);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x254);
  }
  if (iVar2 == 5) {
    iVar2 = *(int *)(param_1 + 0x260);
    local_4c[*(int *)(param_1 + 600)] = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x260);
  }
  if (iVar2 == 5) {
    local_4c[*(int *)(param_1 + 0x264)] = 0;
    iVar2 = *(int *)(param_1 + 0x26c);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x26c);
  }
  if (iVar2 == 5) {
    iVar2 = *(int *)(param_1 + 0x278);
    local_4c[*(int *)(param_1 + 0x270)] = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x278);
  }
  if (iVar2 == 5) {
    local_4c[*(int *)(param_1 + 0x27c)] = 0;
    iVar2 = *(int *)(param_1 + 0x284);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x284);
  }
  if (iVar2 == 5) {
    iVar2 = *(int *)(param_1 + 0x290);
    local_4c[*(int *)(param_1 + 0x288)] = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x290);
  }
  if (iVar2 == 5) {
    local_4c[*(int *)(param_1 + 0x294)] = 0;
    iVar2 = *(int *)(param_1 + 0x29c);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x29c);
  }
  if (iVar2 == 5) {
    iVar2 = *(int *)(param_1 + 0x2a8);
    local_4c[*(int *)(param_1 + 0x2a0)] = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2a8);
  }
  if (iVar2 == 5) {
    local_4c[*(int *)(param_1 + 0x2ac)] = 0;
  }
  iVar6 = 0;
  local_d8 = 0;
  local_d4 = 0;
  iVar2 = param_1;
LAB_04059f5b:
  do {
    if (*(char *)(param_1 + 0x91 + iVar6) == '\0') goto LAB_04059f50;
    ShaderData_AppendDestMask();
    switch(*(undefined4 *)(iVar2 + 0x224)) {
    case 0:
    case 9:
      if (*(int *)(iVar2 + 0x228) != 0) {
        FUN_0402cd10(0xf,"Trying to use vertex shader 3.0 output position register > 0.");
      }
      eON_AppendShaderCompileMessage(param_2,"gl_Position%s = OUT[%u]%s;\n",local_22,iVar6,local_22)
      ;
      break;
    case 1:
    case 2:
    case 3:
    case 6:
    case 7:
    case 8:
    case 0xb:
      pcVar3 = "eON_VaryingFog";
      if (DAT_04468c04 == 0) {
        pcVar3 = "gl_FogFragCoord";
      }
      eON_AppendShaderCompileMessage(param_2,"%s = OUT[%u]%s;\n",pcVar3,iVar6,local_22);
      break;
    case 4:
      FUN_0402cd10(0xf,
                   "Trying to use vertex shader 3.0 output register, which has been declared with usage that is never passed to pixel shader."
                  );
      break;
    case 5:
      uVar5 = *(uint *)(iVar2 + 0x228);
      if (uVar5 < 10) {
        ppcVar7 = local_c4;
        for (iVar4 = 0x1e; iVar4 != 0; iVar4 = iVar4 + -1) {
          *ppcVar7 = (char *)0x0;
          ppcVar7 = ppcVar7 + (uint)bVar8 * -2 + 1;
        }
        local_84 = "eON_Varyings[8]";
        local_c4[0] = "eON_Varyings[0]";
        local_c4[1] = "gl_TexCoord[0]";
        local_c4[2] = "eON_Varyings[1]";
        local_c4[3] = "gl_TexCoord[1]";
        local_b4 = "eON_Varyings[2]";
        local_b0 = "gl_TexCoord[2]";
        local_ac = "eON_Varyings[3]";
        local_a8 = "gl_TexCoord[3]";
        local_a4 = "eON_Varyings[4]";
        local_a0 = "gl_TexCoord[4]";
        local_9c = "eON_Varyings[5]";
        local_98 = "gl_TexCoord[5]";
        local_94 = "eON_Varyings[6]";
        local_90 = "gl_TexCoord[6]";
        local_8c = "eON_Varyings[7]";
        local_88 = "gl_TexCoord[7]";
        local_80 = "eON_Texcoord8";
        local_7c = "eON_Varyings[9]";
        local_78 = "eON_Texcoord9";
        eON_AppendShaderCompileMessage
                  (param_2,"%s%s = OUT[%u]%s;\n",local_c4[(DAT_04468c04 ^ 1) + uVar5 * 2],local_22,
                   iVar6,local_22);
        *(uint *)(param_1 + 0x2cc) =
             *(uint *)(param_1 + 0x2cc) | 1 << ((byte)*(undefined4 *)(iVar2 + 0x228) & 0x1f);
      }
      else {
        FUN_0402cd10(0xf,
                     "Trying to use vertex shader 3.0 output register, which has been declared as texcoord with index > 9."
                    );
      }
      break;
    case 10:
      if (DAT_04468c04 == 0) {
        uVar5 = *(uint *)(iVar2 + 0x228);
      }
      else {
        while (uVar5 = local_d4, local_4c[local_d4] == 0) {
          while (local_d4 = local_d4 + 1, local_d4 < 10) {
            uVar5 = local_d4;
            if (local_4c[local_d4] != 0) goto LAB_0405a244;
          }
          FUN_0400a810("firstFreeRegister < 10",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/D3DBytecodeToGLSLText.cpp"
                       ,0xd62,
                       "void eON_ShaderData::GenerateOutputRegistersAssignments(TextBuffer*, ColorRegisterAssignment*)"
                      );
        }
LAB_0405a244:
        puVar1 = (undefined1 *)((int)param_3 + local_d8 * 2);
        *puVar1 = (char)*(undefined4 *)(iVar2 + 0x228);
        local_d4._0_1_ = (undefined1)uVar5;
        puVar1[1] = (undefined1)local_d4;
        local_4c[uVar5] = 0;
        local_d8 = local_d8 + 1;
        local_d4 = uVar5;
      }
      ppcVar7 = local_c4;
      for (iVar4 = 0x1e; iVar4 != 0; iVar4 = iVar4 + -1) {
        *ppcVar7 = (char *)0x0;
        ppcVar7 = ppcVar7 + (uint)bVar8 * -2 + 1;
      }
      local_84 = "eON_Varyings[8]";
      local_c4[0] = "eON_Varyings[0]";
      local_c4[1] = "gl_FrontColor";
      local_c4[2] = "eON_Varyings[1]";
      local_c4[3] = "gl_FrontSecondaryColor";
      local_b4 = "eON_Varyings[2]";
      local_b0 = "gl_TexCoord[7]";
      local_ac = "eON_Varyings[3]";
      local_a8 = "gl_TexCoord[6]";
      local_a4 = "eON_Varyings[4]";
      local_a0 = "gl_TexCoord[5]";
      local_9c = "eON_Varyings[5]";
      local_98 = "gl_TexCoord[4]";
      local_94 = "eON_Varyings[6]";
      local_90 = "gl_TexCoord[3]";
      local_8c = "eON_Varyings[7]";
      local_88 = "gl_TexCoord[2]";
      local_80 = "gl_TexCoord[1]";
      local_7c = "eON_Varyings[9]";
      local_78 = "gl_TexCoord[0]";
      eON_AppendShaderCompileMessage
                (param_2,"%s%s = OUT[%u]%s;\n",local_c4[(DAT_04468c04 ^ 1) + uVar5 * 2],local_22,
                 iVar6,local_22);
      if ((DAT_04468c04 == 0) && ((int)uVar5 < 2)) {
        pcVar3 = "gl_BackSecondaryColor";
        if (uVar5 == 0) {
          pcVar3 = "gl_BackColor";
        }
        eON_AppendShaderCompileMessage(param_2,"%s%s = OUT[%u]%s;\n",pcVar3,local_22,iVar6,local_22)
        ;
      }
      break;
    default:
      goto switchD_04059fbe_default;
    }
LAB_04059f50:
    iVar6 = iVar6 + 1;
    iVar2 = iVar2 + 0xc;
    if (iVar6 == 0xc) {
      return;
    }
  } while( true );
switchD_04059fbe_default:
  iVar6 = iVar6 + 1;
  iVar2 = iVar2 + 0xc;
  FUN_0402cd10(0xf,
               "Trying to use vertex shader 3.0 output register, which has been declared with usage for which output GLSL register has not been defined!"
              );
  if (iVar6 == 0xc) {
    return;
  }
  goto LAB_04059f5b;
}

// --- eON_ShaderData::InputRegisterIsColor @0x04051590 ---
/* source: D3DBytecodeToGLSLText */

undefined1 __regparm2 eON_ShaderData__InputRegisterIsColor(int *param_1,uint param_2,char *param_3)

{
  ushort *puVar1;
  byte bVar2;
  byte *pbVar3;
  undefined1 uVar4;
  char cVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  undefined **ppuVar10;
  uint uVar11;
  char **ppcVar12;
  byte bVar13;
  int local_1b0;
  undefined1 local_1a0 [128];
  char local_120 [128];
  char *local_a0 [4];
  char *local_90;
  char *local_8c;
  char *local_88;
  char *local_84;
  char *local_80;
  char *local_7c;
  char *local_78;
  char *local_74;
  char *local_70;
  char *local_6c;
  char *local_68;
  char *local_64;
  char *local_60;
  char *local_5c;
  char *local_58;
  char *local_54;
  char *local_28 [6];
  
  bVar13 = 0;
  local_28[0] = "gl_Position";
  local_28[2] = "gl_PointSize";
  local_28[1] = "eON_VaryingFog";
  if (DAT_04468c04 == 0) {
    local_28[1] = "gl_FogFragCoord";
  }
  uVar11 = param_2 & 0x7ff;
  switch((param_2 & 0x1800) >> 8 | (param_2 & 0x70000000) >> 0x1c) {
  case 0:
    sprintf(param_3,"Temporary%u",uVar11);
    break;
  case 1:
    iVar8 = *param_1;
    if (*(char *)(iVar8 + 0x10) == '\0') {
      iVar7 = iVar8 + uVar11 * 0xc;
      bVar13 = *(byte *)(iVar7 + 0x164);
      bVar2 = *(byte *)(iVar7 + 0x168);
      local_1b0 = iVar8;
      if (*(int *)(iVar8 + 0x2dc) == 0) {
        FUN_0400a810("mAsmParams",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/D3DBytecodeToGLSLText.cpp"
                     ,0xd9,"bool eON_ShaderData::InputRegisterIsColor(DWORD)");
        local_1b0 = *param_1;
      }
      pbVar3 = *(byte **)(iVar8 + 0x2dc);
      uVar4 = 0;
      if (*pbVar3 != 0) {
        iVar8 = 0;
        do {
          if ((bVar13 == pbVar3[iVar8 + 1]) && (bVar2 == pbVar3[iVar8 + 2])) {
            uVar4 = 1;
            goto LAB_040516d6;
          }
          iVar8 = iVar8 + 2;
        } while (iVar8 != (*pbVar3 - 1 & 0xff) * 2 + 2);
        uVar4 = 0;
      }
LAB_040516d6:
      eON_ShaderData__FormatAttributeName(local_1b0,uVar11,param_3);
      return uVar4;
    }
    if (2 < *(int *)(iVar8 + 8)) {
      if ((param_2 & 0x2000) == 0) {
        sprintf(param_3,"IN[%u]",uVar11);
        return 0;
      }
      eON_ShaderData_ApplySourceModifier(0x10000,local_1a0);
      if (uVar11 != 0) {
        sprintf(param_3,"IN[%s + %u]",local_120,uVar11);
        return 0;
      }
      sprintf(param_3,"IN[%s]",local_120);
      return 0;
    }
    if (uVar11 == *(byte *)(iVar8 + 0x2e0)) {
      iVar7 = 0;
    }
    else if (uVar11 == *(byte *)(iVar8 + 0x2e2)) {
      iVar7 = 1;
    }
    else if (uVar11 == *(byte *)(iVar8 + 0x2e4)) {
      iVar7 = 2;
    }
    else if (uVar11 == *(byte *)(iVar8 + 0x2e6)) {
      iVar7 = 3;
    }
    else if (uVar11 == *(byte *)(iVar8 + 0x2e8)) {
      iVar7 = 4;
    }
    else if (uVar11 == *(byte *)(iVar8 + 0x2ea)) {
      iVar7 = 5;
    }
    else if (uVar11 == *(byte *)(iVar8 + 0x2ec)) {
      iVar7 = 6;
    }
    else if (uVar11 == *(byte *)(iVar8 + 0x2ee)) {
      iVar7 = 7;
    }
    else if (uVar11 == *(byte *)(iVar8 + 0x2f0)) {
      iVar7 = 8;
    }
    else {
      if (uVar11 != *(byte *)(iVar8 + 0x2f2)) {
        builtin_strncpy(param_3,"vec4(0.0)",10);
        return 0;
      }
      iVar7 = 9;
    }
    bVar13 = *(byte *)(iVar8 + 0x2e1 + iVar7 * 2);
    ppcVar12 = local_a0;
    for (iVar8 = 0x1e; iVar8 != 0; iVar8 = iVar8 + -1) {
      *ppcVar12 = (char *)0x0;
      ppcVar12 = ppcVar12 + 1;
    }
    local_84 = "gl_TexCoord[6]";
    local_a0[0] = "eON_Varyings[0]";
    local_a0[1] = "gl_Color";
    local_a0[2] = "eON_Varyings[1]";
    local_a0[3] = "gl_SecondaryColor";
    local_90 = "eON_Varyings[2]";
    local_8c = "gl_TexCoord[7]";
    local_88 = "eON_Varyings[3]";
    local_80 = "eON_Varyings[4]";
    local_7c = "gl_TexCoord[5]";
    local_78 = "eON_Varyings[5]";
    local_74 = "gl_TexCoord[4]";
    local_70 = "eON_Varyings[6]";
    local_6c = "gl_TexCoord[3]";
    local_68 = "eON_Varyings[7]";
    local_64 = "gl_TexCoord[2]";
    local_60 = "eON_Varyings[8]";
    local_5c = "gl_TexCoord[1]";
    local_58 = "eON_Varyings[9]";
    local_54 = "gl_TexCoord[0]";
    pcVar6 = local_a0[(uint)(DAT_04468c04 ^ 1) + (uint)bVar13 * 2];
    goto LAB_040517c4;
  case 2:
    if ((param_2 & 0x2000) == 0) {
      iVar8 = *param_1;
      if ((*(char *)(iVar8 + 0x15f) == '\0') && (*(int *)(iVar8 + 0x2b8) != 0)) {
        puVar9 = *(ushort **)(iVar8 + 0x2b4);
        if (uVar11 != *puVar9) {
          iVar7 = 0;
          do {
            iVar7 = iVar7 + 1;
            if (iVar7 == *(int *)(iVar8 + 0x2b8)) goto LAB_04051756;
            puVar1 = puVar9 + 0x12;
            puVar9 = puVar9 + 0x12;
          } while (uVar11 != *puVar1);
        }
        sprintf(param_3,"LocalConst%u",uVar11);
      }
      else {
LAB_04051756:
        sprintf(param_3,"%cConstFloat[%u]",(-(uint)(*(char *)(iVar8 + 0x10) == '\0') & 6) + 0x50,
                uVar11);
      }
    }
    else {
      iVar8 = *param_1;
      pcVar6 = "Address0.x";
      if (1 < *(int *)(iVar8 + 8)) {
        eON_ShaderData_ApplySourceModifier(0x10000,local_1a0);
        iVar8 = *param_1;
        pcVar6 = local_120;
      }
      iVar8 = (-(uint)(*(char *)(iVar8 + 0x10) == '\0') & 6) + 0x50;
      if (uVar11 == 0) {
        sprintf(param_3,"%cConstFloat[ %s ]",iVar8,pcVar6);
      }
      else {
        sprintf(param_3,"%cConstFloat[ %s + %u ]",iVar8,pcVar6,uVar11);
      }
    }
    break;
  case 3:
    pcVar6 = "Texture";
    if (*(char *)(*param_1 + 0x10) == '\0') {
      pcVar6 = "Address";
    }
    sprintf(param_3,"%s%u",pcVar6,uVar11);
    break;
  case 4:
    pcVar6 = local_28[uVar11];
LAB_040517c4:
    strcpy(param_3,pcVar6);
    break;
  case 5:
    if (1 < uVar11) {
      FUN_0400a810("regNum < (UINT) MaxColorRegisters",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/D3DBytecodeToGLSLText.cpp"
                   ,0x284,"bool GetRegisterName(ConversionState&, DWORD, DWORD, char*)");
    }
    iVar8 = *param_1;
    if (2 < *(int *)(iVar8 + 8)) {
      FUN_0400a810("state.Shader->ShaderVersionMajor < 3",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/D3DBytecodeToGLSLText.cpp"
                   ,0x285,"bool GetRegisterName(ConversionState&, DWORD, DWORD, char*)");
      iVar8 = *param_1;
    }
    iVar7 = uVar11 + 0x14;
    uVar11 = *(uint *)(iVar8 + 0xc + iVar7 * 4);
    if (uVar11 == 0) {
      FUN_0400a810("state.Shader->Regs.ColorOutput[regNum] > 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/D3DBytecodeToGLSLText.cpp"
                   ,0x286,"bool GetRegisterName(ConversionState&, DWORD, DWORD, char*)");
      uVar11 = *(uint *)(*param_1 + 0xc + iVar7 * 4);
    }
    if (10 < uVar11) {
      FUN_0400a810("state.Shader->Regs.ColorOutput[regNum] < 11",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/D3DBytecodeToGLSLText.cpp"
                   ,0x287,"bool GetRegisterName(ConversionState&, DWORD, DWORD, char*)");
      uVar11 = *(uint *)(*param_1 + 0xc + iVar7 * 4);
    }
    ppcVar12 = local_a0;
    for (iVar8 = 0x1e; iVar8 != 0; iVar8 = iVar8 + -1) {
      *ppcVar12 = (char *)0x0;
      ppcVar12 = ppcVar12 + (uint)bVar13 * -2 + 1;
    }
    local_84 = "gl_TexCoord[6]";
    local_a0[0] = "eON_Varyings[0]";
    local_a0[1] = "gl_FrontColor";
    local_a0[2] = "eON_Varyings[1]";
    local_a0[3] = "gl_FrontSecondaryColor";
    local_90 = "eON_Varyings[2]";
    local_80 = "eON_Varyings[4]";
    local_8c = "gl_TexCoord[7]";
    local_88 = "eON_Varyings[3]";
    local_7c = "gl_TexCoord[5]";
    local_78 = "eON_Varyings[5]";
    local_74 = "gl_TexCoord[4]";
    local_70 = "eON_Varyings[6]";
    local_6c = "gl_TexCoord[3]";
    local_68 = "eON_Varyings[7]";
    local_64 = "gl_TexCoord[2]";
    local_60 = "eON_Varyings[8]";
    local_5c = "gl_TexCoord[1]";
    local_58 = "eON_Varyings[9]";
    local_54 = "gl_TexCoord[0]";
    strcpy(param_3,local_a0[((DAT_04468c04 ^ 1) - 2) + uVar11 * 2]);
    break;
  case 6:
    if (*(int *)(*param_1 + 8) < 3) {
      ppcVar12 = local_a0;
      for (iVar8 = 0x1e; iVar8 != 0; iVar8 = iVar8 + -1) {
        *ppcVar12 = (char *)0x0;
        ppcVar12 = ppcVar12 + 1;
      }
      local_84 = "gl_TexCoord[3]";
      local_a0[0] = "eON_Varyings[0]";
      local_a0[1] = "gl_TexCoord[0]";
      local_a0[2] = "eON_Varyings[1]";
      local_a0[3] = "gl_TexCoord[1]";
      local_90 = "eON_Varyings[2]";
      local_8c = "gl_TexCoord[2]";
      local_88 = "eON_Varyings[3]";
      local_80 = "eON_Varyings[4]";
      local_7c = "gl_TexCoord[4]";
      local_78 = "eON_Varyings[5]";
      local_74 = "gl_TexCoord[5]";
      local_70 = "eON_Varyings[6]";
      local_6c = "gl_TexCoord[6]";
      local_68 = "eON_Varyings[7]";
      local_64 = "gl_TexCoord[7]";
      local_60 = "eON_Varyings[8]";
      local_5c = "eON_Texcoord8";
      local_58 = "eON_Varyings[9]";
      local_54 = "eON_Texcoord9";
      strcpy(param_3,local_a0[(uint)(DAT_04468c04 ^ 1) + uVar11 * 2]);
      *(uint *)(*param_1 + 0x2cc) = *(uint *)(*param_1 + 0x2cc) | 1 << ((byte)uVar11 & 0x1f);
    }
    else {
      sprintf(param_3,"OUT[%u]",uVar11);
    }
    break;
  case 7:
    iVar8 = *param_1;
    if (*(int *)(iVar8 + 0x2c0) == 0) {
LAB_04051ae6:
      sprintf(param_3,"%cConstInt[%u]",(-(uint)(*(char *)(iVar8 + 0x10) == '\0') & 6) + 0x50,uVar11)
      ;
    }
    else {
      puVar9 = *(ushort **)(iVar8 + 700);
      if (uVar11 != *puVar9) {
        iVar7 = 0;
        do {
          iVar7 = iVar7 + 1;
          if (iVar7 == *(int *)(iVar8 + 0x2c0)) goto LAB_04051ae6;
          puVar1 = puVar9 + 0x12;
          puVar9 = puVar9 + 0x12;
        } while (uVar11 != *puVar1);
      }
      sprintf(param_3,"LocalConstI%u",uVar11);
    }
    break;
  case 8:
    if (3 < uVar11) {
      FUN_0402cd10(0xf,"Trying to write to render target %u (supported %u)!",uVar11,4);
    }
    cVar5 = FUN_04021ee0();
    ppuVar10 = (undefined **)&DAT_04328763;
    if (cVar5 == '\0') {
      ppuVar10 = &PTR_DAT_042e7930;
    }
    sprintf(param_3,"%sFragData[%u]",ppuVar10,uVar11);
    break;
  case 9:
    builtin_strncpy(param_3,"gl_FragDepth",0xd);
    break;
  case 10:
    sprintf(param_3,"%cSampler%u",(-(uint)(*(char *)(*param_1 + 0x10) == '\0') & 6) + 0x50,uVar11);
    break;
  default:
    break;
  case 0xe:
    iVar8 = *param_1;
    if (*(int *)(iVar8 + 0x2c8) == 0) {
LAB_040519ae:
      sprintf(param_3,"%cConstBool[%u]",(-(uint)(*(char *)(iVar8 + 0x10) == '\0') & 6) + 0x50,uVar11
             );
    }
    else {
      puVar9 = *(ushort **)(iVar8 + 0x2c4);
      if (uVar11 != *puVar9) {
        iVar7 = 0;
        do {
          iVar7 = iVar7 + 1;
          if (iVar7 == *(int *)(iVar8 + 0x2c8)) goto LAB_040519ae;
          puVar1 = puVar9 + 0x12;
          puVar9 = puVar9 + 0x12;
        } while (uVar11 != *puVar1);
      }
      sprintf(param_3,"LocalConstB%u",uVar11);
    }
    break;
  case 0xf:
    sprintf(param_3,"Loop%u",*(int *)(*param_1 + 0x2d4) + -1);
    break;
  case 0x11:
    if (uVar11 < 2) {
      if (uVar11 == 1) {
        param_3[0] = '(';
        param_3[1] = 'v';
        param_3[2] = 'e';
        param_3[3] = 'c';
        param_3[4] = '4';
        param_3[5] = '(';
        param_3[6] = 'g';
        param_3[7] = 'l';
        param_3[8] = '_';
        param_3[9] = 'F';
        param_3[10] = 'r';
        param_3[0xb] = 'o';
        param_3[0xc] = 'n';
        param_3[0xd] = 't';
        param_3[0xe] = 'F';
        param_3[0xf] = 'a';
        param_3[0x10] = 'c';
        param_3[0x11] = 'i';
        param_3[0x12] = 'n';
        param_3[0x13] = 'g';
        param_3[0x14] = '?';
        param_3[0x15] = '-';
        param_3[0x16] = '1';
        param_3[0x17] = '.';
        param_3[0x18] = '0';
        param_3[0x19] = ':';
        param_3[0x1a] = '1';
        param_3[0x1b] = '.';
        *(undefined **)(param_3 + 0x1c) = &DAT_00292930;
      }
      else {
        builtin_strncpy(param_3,"VPos",5);
      }
    }
    else {
      FUN_0402cd10(0xf,"Misc registers > 1 don\'t exist!");
    }
  }
  return 0;
}

