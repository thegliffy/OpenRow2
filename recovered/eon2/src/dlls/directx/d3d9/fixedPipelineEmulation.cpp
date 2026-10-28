// Recovered source: eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- FragmentShaderCompiler::GenerateProgram @0x040c2310 ---
/* source: fixedPipelineEmulation */

void * fixedPipelineEmulation_040c2310(int param_1,byte *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  size_t __n;
  size_t __n_00;
  size_t __n_01;
  byte bVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  void *__dest;
  char *pcVar12;
  undefined **ppuVar13;
  int iVar14;
  uint *puVar15;
  bool bVar16;
  byte bVar17;
  char *local_bc;
  char *local_b0;
  char *local_a4;
  uint local_90 [20];
  void *local_40;
  size_t local_3c;
  undefined4 local_38;
  void *local_34;
  size_t local_30;
  undefined4 local_2c;
  void *local_28;
  size_t local_24;
  undefined4 local_20;
  
  bVar17 = 0;
  local_40 = (void *)0x0;
  local_3c = 0;
  local_38 = 0;
  local_34 = (void *)0x0;
  local_30 = 0;
  local_2c = 0;
  local_28 = (void *)0x0;
  local_24 = 0;
  local_20 = 0;
  if ((*param_2 & 0x40) != 0) {
                    /* try { // try from 040c2383 to 040c2a9e has its CatchHandler @ 040c5200 */
    eON_AppendShaderCompileMessage(&local_40,"#version 150\n");
  }
  eON_AppendShaderCompileMessage(&local_40,"\n// Fixed function fragment shader for eON\n\n");
  bVar6 = *param_2;
  if ((bVar6 & 0x40) != 0) {
    eON_AppendShaderCompileMessage
              (&local_40,
               "layout(std140) uniform CommonVariables {\n\tvec4 PositionFix;\n\tvec4 GlFogcolor;\n\tfloat GlFogdensity;\n\tfloat GlFogend;\n\tfloat GlFogscale;\n\tfloat AlphaRef;\n\tvec4 ClipPlanes[6];\n};\n\n"
              );
    eON_AppendShaderCompileMessage
              (&local_40,
               "layout(std140) uniform FixedPipelinePixelOnly {\n\tvec4 TextureStageConstant[%d];\n\tvec4 TextureFactor;\n\tvec4 LuminanceScaleOffset[%d];\n\tvec4 BumpEnvMap[%d];\n};\n\n"
               ,8,8,8);
    bVar6 = *param_2;
  }
  if ((bVar6 & 0x20) != 0) {
    pcVar11 = "in";
    if ((bVar6 & 0x40) == 0) {
      pcVar11 = "varying";
    }
    eON_AppendShaderCompileMessage(&local_40,"%s vec4 eON_Varyings[10];\n",pcVar11);
    eON_AppendShaderCompileMessage(&local_40,"%s float eON_VaryingFog;\n",pcVar11);
  }
  eON_AppendShaderCompileMessage(&local_34,"\nvoid main( void )\n{\n");
  if (param_2[1] != 1) {
    eON_AppendShaderCompileMessage(&local_34,"\tvec4 StageArg1;\n");
    eON_AppendShaderCompileMessage(&local_34,"\tvec4 StageArg2;\n");
    eON_AppendShaderCompileMessage(&local_34,"\tvec4 StageArg0;\n");
  }
  pcVar11 = "gl_Color";
  if ((*param_2 & 0x20) != 0) {
    if (param_2[0x58] == 0) {
      iVar9 = 0;
    }
    else {
      pcVar11 = "vec4(0.0)";
      if (param_2[0x58] == 0xff) goto LAB_040c256b;
      if (param_2[0x5a] == 0) {
        iVar9 = 1;
      }
      else {
        if (param_2[0x5a] == 0xff) goto LAB_040c256b;
        if (param_2[0x5c] == 0) {
          iVar9 = 2;
        }
        else {
          if (param_2[0x5c] == 0xff) goto LAB_040c256b;
          if (param_2[0x5e] == 0) {
            iVar9 = 3;
          }
          else {
            if (param_2[0x5e] == 0xff) goto LAB_040c256b;
            if (param_2[0x60] == 0) {
              iVar9 = 4;
            }
            else {
              if (param_2[0x60] == 0xff) goto LAB_040c256b;
              if (param_2[0x62] == 0) {
                iVar9 = 5;
              }
              else {
                if (param_2[0x62] == 0xff) goto LAB_040c256b;
                if (param_2[100] == 0) {
                  iVar9 = 6;
                }
                else {
                  if (param_2[100] == 0xff) goto LAB_040c256b;
                  if (param_2[0x66] == 0) {
                    iVar9 = 7;
                  }
                  else {
                    if (param_2[0x66] == 0xff) goto LAB_040c256b;
                    if (param_2[0x68] == 0) {
                      iVar9 = 8;
                    }
                    else {
                      if ((param_2[0x68] == 0xff) || (param_2[0x6a] != 0)) goto LAB_040c256b;
                      iVar9 = 9;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    bVar6 = param_2[iVar9 * 2 + 0x59];
    ppuVar13 = &PTR_s_eON_Varyings_0__042ff180;
    puVar15 = local_90;
    for (iVar9 = 0x14; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar15 = (uint)*ppuVar13;
      ppuVar13 = ppuVar13 + (uint)bVar17 * -2 + 1;
      puVar15 = puVar15 + (uint)bVar17 * -2 + 1;
    }
    pcVar11 = (char *)local_90[(uint)bVar6 * 2];
  }
LAB_040c256b:
  eON_AppendShaderCompileMessage(&local_34,"\tvec4 currentRegister = %s;\n",pcVar11);
  local_a4 = (char *)0x0;
  bVar5 = false;
  bVar3 = false;
  bVar4 = false;
  do {
    if (param_2[(int)local_a4 * 10 + 1] == 1) break;
    pcVar11 = local_a4;
    eON_AppendShaderCompileMessage(&local_28,"\n\t// Texture stage %u\n",local_a4);
    bVar2 = false;
    if ((param_2[(int)local_a4 * 10 + 9] == 5) && (bVar2 = true, !bVar3)) {
      eON_AppendShaderCompileMessage(&local_28,"\tvec4 tempRegister;\n",pcVar11);
      bVar2 = true;
      bVar3 = true;
    }
    bVar6 = param_2[(int)local_a4 * 10 + 1];
    if ((bVar6 == param_2[(int)local_a4 * 10 + 2]) &&
       (param_2[(int)local_a4 * 10 + 3] == param_2[(int)local_a4 * 10 + 6])) {
      bVar16 = param_2[(int)local_a4 * 10 + 4] == param_2[(int)local_a4 * 10 + 7];
      local_b0 = "";
      if (!bVar16) {
        local_b0 = ".rgb";
      }
      pcVar12 = (char *)(uint)bVar16;
    }
    else {
      pcVar12 = (char *)0x0;
      bVar16 = false;
      local_b0 = ".rgb";
    }
    pcVar10 = local_b0;
    pcVar8 = local_b0;
    switch(bVar6) {
    default:
      FUN_0402cd10(0xf,
                   "Unknown color operation ( %u ) while preparing fixed pipeline emulation fragment shader!"
                   ,bVar6);
      __dest = (void *)0x0;
      goto LAB_040c2b21;
    case 2:
      pcVar8 = (char *)(uint)param_2[(int)local_a4 * 10 + 10];
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,1,1,param_2[(int)local_a4 * 10 + 3],pcVar8,pcVar12);
      pcVar11 = "temp";
      if (!bVar2) {
        pcVar11 = "current";
      }
      eON_AppendShaderCompileMessage
                (&local_28,"\t%sRegister%s = StageArg1%s;\n",pcVar11,local_b0,local_b0);
      break;
    case 3:
      pcVar8 = (char *)(uint)param_2[(int)local_a4 * 10 + 10];
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,2,1,param_2[(int)local_a4 * 10 + 4],pcVar8,pcVar12);
      pcVar11 = "temp";
      if (!bVar2) {
        pcVar11 = "current";
      }
      eON_AppendShaderCompileMessage
                (&local_28,"\t%sRegister%s = StageArg2%s;\n",pcVar11,local_b0,local_b0);
      break;
    case 4:
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,1,1,param_2[(int)local_a4 * 10 + 3],
                 param_2[(int)local_a4 * 10 + 10],pcVar12);
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,2,1,param_2[(int)local_a4 * 10 + 4],
                 param_2[(int)local_a4 * 10 + 10],pcVar12);
      pcVar11 = "temp";
      if (!bVar2) {
        pcVar11 = "current";
      }
      eON_AppendShaderCompileMessage
                (&local_28,"\t%sRegister%s = StageArg1%s * StageArg2%s;\n",pcVar11,local_b0,local_b0
                 ,local_b0);
      break;
    case 5:
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,1,1,param_2[(int)local_a4 * 10 + 3],
                 param_2[(int)local_a4 * 10 + 10],pcVar12);
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,2,1,param_2[(int)local_a4 * 10 + 4],
                 param_2[(int)local_a4 * 10 + 10],pcVar12);
      pcVar11 = "temp";
      if (!bVar2) {
        pcVar11 = "current";
      }
      eON_AppendShaderCompileMessage
                (&local_28,"\t%sRegister%s = 2.0 * StageArg1%s * StageArg2%s;\n",pcVar11,local_b0,
                 local_b0,local_b0);
      break;
    case 6:
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,1,1,param_2[(int)local_a4 * 10 + 3],
                 param_2[(int)local_a4 * 10 + 10],pcVar12);
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,2,1,param_2[(int)local_a4 * 10 + 4],
                 param_2[(int)local_a4 * 10 + 10],pcVar12);
      pcVar11 = "temp";
      if (!bVar2) {
        pcVar11 = "current";
      }
      eON_AppendShaderCompileMessage
                (&local_28,"\t%sRegister%s = 4.0 * StageArg1%s * StageArg2%s;\n",pcVar11,local_b0,
                 local_b0,local_b0);
      break;
    case 7:
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,1,1,param_2[(int)local_a4 * 10 + 3],
                 param_2[(int)local_a4 * 10 + 10],pcVar12);
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,2,1,param_2[(int)local_a4 * 10 + 4],
                 param_2[(int)local_a4 * 10 + 10],pcVar12);
      pcVar11 = "temp";
      if (!bVar2) {
        pcVar11 = "current";
      }
      eON_AppendShaderCompileMessage
                (&local_28,"\t%sRegister%s = StageArg1%s + StageArg2%s;\n",pcVar11,local_b0,local_b0
                 ,local_b0);
      break;
    case 8:
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,1,1,param_2[(int)local_a4 * 10 + 3],
                 param_2[(int)local_a4 * 10 + 10],pcVar12);
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,2,1,param_2[(int)local_a4 * 10 + 4],
                 param_2[(int)local_a4 * 10 + 10],pcVar12);
      pcVar11 = "temp";
      pcVar12 = (char *)(4 - (uint)!bVar16);
      if (!bVar2) {
        pcVar11 = "current";
      }
      eON_AppendShaderCompileMessage
                (&local_28,"\t%sRegister%s = StageArg1%s + StageArg2%s - vec%u(0.5);\n",pcVar11,
                 local_b0,local_b0,local_b0,pcVar12);
      break;
    case 9:
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,1,1,param_2[(int)local_a4 * 10 + 3],
                 param_2[(int)local_a4 * 10 + 10],pcVar12);
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,2,1,param_2[(int)local_a4 * 10 + 4],
                 param_2[(int)local_a4 * 10 + 10],pcVar12);
      pcVar11 = "temp";
      pcVar12 = (char *)(4 - (uint)!bVar16);
      if (!bVar2) {
        pcVar11 = "current";
      }
      eON_AppendShaderCompileMessage
                (&local_28,"\t%sRegister%s = 2.0 * ( StageArg1%s + StageArg2%s - vec%u(0.5) );\n",
                 pcVar11,local_b0,local_b0,local_b0,pcVar12);
      break;
    case 10:
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,1,1,param_2[(int)local_a4 * 10 + 3],
                 param_2[(int)local_a4 * 10 + 10],pcVar12);
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,2,1,param_2[(int)local_a4 * 10 + 4],
                 param_2[(int)local_a4 * 10 + 10],pcVar12);
      pcVar11 = "temp";
      if (!bVar2) {
        pcVar11 = "current";
      }
      eON_AppendShaderCompileMessage
                (&local_28,"\t%sRegister%s = StageArg1%s - StageArg2%s;\n",pcVar11,local_b0,local_b0
                 ,local_b0);
      break;
    case 0xb:
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,1,1,param_2[(int)local_a4 * 10 + 3],
                 param_2[(int)local_a4 * 10 + 10],pcVar12);
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,2,1,param_2[(int)local_a4 * 10 + 4],
                 param_2[(int)local_a4 * 10 + 10],pcVar12);
      pcVar11 = "temp";
      pcVar12 = (char *)(4 - (uint)!bVar16);
      if (!bVar2) {
        pcVar11 = "current";
      }
      eON_AppendShaderCompileMessage
                (&local_28,
                 "\t%sRegister%s = StageArg1%s + ( StageArg2%s * ( vec%u(1.0) - StageArg1%s );\n",
                 pcVar11,local_b0,local_b0,local_b0,pcVar12,local_b0);
      break;
    case 0xc:
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,1,1,param_2[(int)local_a4 * 10 + 3],
                 param_2[(int)local_a4 * 10 + 10],pcVar12);
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,2,1,param_2[(int)local_a4 * 10 + 4],
                 param_2[(int)local_a4 * 10 + 10],pcVar12);
      pcVar8 = "gl_Color";
      local_bc = "gl_Color";
      if ((*param_2 & 0x20) == 0) goto LAB_040c3480;
      if (param_2[0x58] == 0) {
        ppuVar13 = &PTR_s_eON_Varyings_0__042ff180;
        puVar15 = local_90;
        for (iVar9 = 0x14; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar15 = (uint)*ppuVar13;
          ppuVar13 = ppuVar13 + (uint)bVar17 * -2 + 1;
          puVar15 = puVar15 + (uint)bVar17 * -2 + 1;
        }
        local_bc = (char *)local_90[(uint)param_2[0x59] * 2];
        iVar9 = 0;
LAB_040c3458:
        ppuVar13 = &PTR_s_eON_Varyings_0__042ff180;
        puVar15 = local_90;
        for (iVar14 = 0x14; iVar14 != 0; iVar14 = iVar14 + -1) {
          *puVar15 = (uint)*ppuVar13;
          ppuVar13 = ppuVar13 + (uint)bVar17 * -2 + 1;
          puVar15 = puVar15 + (uint)bVar17 * -2 + 1;
        }
        pcVar8 = (char *)local_90[(uint)param_2[iVar9 * 2 + 0x59] * 2];
      }
      else {
        pcVar8 = "vec4(0.0)";
        local_bc = "vec4(0.0)";
        if (param_2[0x58] == 0xff) goto LAB_040c3480;
        bVar6 = param_2[0x5a];
        if (bVar6 == 0) {
          iVar9 = 1;
LAB_040c50cc:
          ppuVar13 = &PTR_s_eON_Varyings_0__042ff180;
          puVar15 = local_90;
          for (iVar14 = 0x14; iVar14 != 0; iVar14 = iVar14 + -1) {
            *puVar15 = (uint)*ppuVar13;
            ppuVar13 = ppuVar13 + (uint)bVar17 * -2 + 1;
            puVar15 = puVar15 + (uint)bVar17 * -2 + 1;
          }
          local_bc = (char *)local_90[(uint)param_2[iVar9 * 2 + 0x59] * 2];
        }
        else if (bVar6 != 0xff) {
          if (param_2[0x5c] == 0) {
            iVar9 = 2;
          }
          else {
            if (param_2[0x5c] == 0xff) goto LAB_040c33a5;
            if (param_2[0x5e] == 0) {
              iVar9 = 3;
            }
            else {
              if (param_2[0x5e] == 0xff) goto LAB_040c33a5;
              if (param_2[0x60] == 0) {
                iVar9 = 4;
              }
              else {
                if (param_2[0x60] == 0xff) goto LAB_040c33a5;
                if (param_2[0x62] == 0) {
                  iVar9 = 5;
                }
                else {
                  if (param_2[0x62] == 0xff) goto LAB_040c33a5;
                  if (param_2[100] == 0) {
                    iVar9 = 6;
                  }
                  else {
                    if (param_2[100] == 0xff) goto LAB_040c33a5;
                    if (param_2[0x66] == 0) {
                      iVar9 = 7;
                    }
                    else {
                      if (param_2[0x66] == 0xff) goto LAB_040c33a5;
                      if (param_2[0x68] == 0) {
                        iVar9 = 8;
                      }
                      else if ((param_2[0x68] == 0xff) || (iVar9 = 9, param_2[0x6a] != 0))
                      goto LAB_040c33a5;
                    }
                  }
                }
              }
            }
          }
          goto LAB_040c50cc;
        }
LAB_040c33a5:
        if (bVar6 == 0) {
          iVar9 = 1;
          goto LAB_040c3458;
        }
        pcVar8 = "vec4(0.0)";
        if (bVar6 != 0xff) {
          if (param_2[0x5c] == 0) {
            iVar9 = 2;
          }
          else {
            if (param_2[0x5c] == 0xff) goto LAB_040c3480;
            if (param_2[0x5e] == 0) {
              iVar9 = 3;
            }
            else {
              if (param_2[0x5e] == 0xff) goto LAB_040c3480;
              if (param_2[0x60] == 0) {
                iVar9 = 4;
              }
              else {
                if (param_2[0x60] == 0xff) goto LAB_040c3480;
                if (param_2[0x62] == 0) {
                  iVar9 = 5;
                }
                else {
                  if (param_2[0x62] == 0xff) goto LAB_040c3480;
                  if (param_2[100] == 0) {
                    iVar9 = 6;
                  }
                  else {
                    if (param_2[100] == 0xff) goto LAB_040c3480;
                    if (param_2[0x66] == 0) {
                      iVar9 = 7;
                    }
                    else {
                      if (param_2[0x66] == 0xff) goto LAB_040c3480;
                      if (param_2[0x68] == 0) {
                        iVar9 = 8;
                      }
                      else {
                        if ((param_2[0x68] == 0xff) || (param_2[0x6a] != 0)) goto LAB_040c3480;
                        iVar9 = 9;
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_040c3458;
        }
      }
LAB_040c3480:
      pcVar11 = "temp";
      if (!bVar2) {
        pcVar11 = "current";
      }
      pcVar12 = local_b0;
      eON_AppendShaderCompileMessage
                (&local_28,
                 "\t%sRegister%s = ( StageArg1%s * %s.a ) + ( StageArg2%s * ( 1.0 - %s.a ) );\n",
                 pcVar11,local_b0,local_b0,pcVar8,local_b0,local_bc);
      break;
    case 0xd:
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,1,1,param_2[(int)local_a4 * 10 + 3],
                 param_2[(int)local_a4 * 10 + 10],pcVar12);
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,2,1,param_2[(int)local_a4 * 10 + 4],
                 param_2[(int)local_a4 * 10 + 10],pcVar12);
      pcVar11 = "temp";
      if (!bVar2) {
        pcVar11 = "current";
      }
      pcVar8 = local_a4;
      pcVar12 = local_b0;
      eON_AppendShaderCompileMessage
                (&local_28,
                 "\t%sRegister%s = ( StageArg1%s * texSample%u.a ) + ( StageArg2%s * ( 1.0 - texSample%u.a ) );\n"
                 ,pcVar11,local_b0,local_b0,local_a4,local_b0,local_a4);
      *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | (byte)(1 << ((byte)local_a4 & 0x1f));
      bVar1 = false;
      goto LAB_040c2c5a;
    case 0xe:
    case 0xf:
    case 0x11:
      FUN_0402cd10(0xf,
                   "This operation ( %u ) is not implemented in fixed pipeline emulation fragment shader compiler. Add it."
                   ,bVar6);
      __dest = (void *)0x0;
      goto LAB_040c2b21;
    case 0x10:
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,1,1,param_2[(int)local_a4 * 10 + 3],
                 param_2[(int)local_a4 * 10 + 10],pcVar12);
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,2,1,param_2[(int)local_a4 * 10 + 4],
                 param_2[(int)local_a4 * 10 + 10],pcVar12);
      pcVar11 = "temp";
      if (!bVar2) {
        pcVar11 = "current";
      }
      eON_AppendShaderCompileMessage
                (&local_28,
                 "\t%sRegister%s = StageArg1%s * currentRegister.a + StageArg2%s * ( 1.0 - currentRegister.a );\n"
                 ,pcVar11,local_b0,local_b0,local_b0);
      break;
    case 0x12:
      if (bVar16) {
        FUN_0400a810("!colorOpSameAsAlphaOp",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                     ,0x57f,
                     "char* FragmentShaderCompiler::GenerateProgram(const FragmentShaderConfig&)");
      }
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,1,0,param_2[(int)local_a4 * 10 + 6],
                 param_2[(int)local_a4 * 10 + 10],0);
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,1,1,param_2[(int)local_a4 * 10 + 3],
                 param_2[(int)local_a4 * 10 + 10],0);
      pcVar12 = (char *)0x0;
      pcVar8 = (char *)(uint)param_2[(int)local_a4 * 10 + 10];
      pcVar10 = (char *)(uint)param_2[(int)local_a4 * 10 + 4];
      local_b0 = (char *)0x1;
      fixedPipelineEmulation_040bd330(param_2,local_a4,2,1,pcVar10,pcVar8,0);
      pcVar11 = "temp";
      if (!bVar2) {
        pcVar11 = "current";
      }
      eON_AppendShaderCompileMessage
                (&local_28,"\t%sRegister.rgb = StageArg1.rgb + StageArg1.a * StageArg2.rgb;\n",
                 pcVar11);
      goto LAB_040c3806;
    case 0x13:
      if (bVar16) {
        FUN_0400a810("!colorOpSameAsAlphaOp",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                     ,0x588,
                     "char* FragmentShaderCompiler::GenerateProgram(const FragmentShaderConfig&)");
      }
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,1,0,param_2[(int)local_a4 * 10 + 6],
                 param_2[(int)local_a4 * 10 + 10],0);
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,1,1,param_2[(int)local_a4 * 10 + 3],
                 param_2[(int)local_a4 * 10 + 10],0);
      pcVar12 = (char *)0x0;
      pcVar8 = (char *)(uint)param_2[(int)local_a4 * 10 + 10];
      pcVar10 = (char *)(uint)param_2[(int)local_a4 * 10 + 4];
      local_b0 = (char *)0x1;
      fixedPipelineEmulation_040bd330(param_2,local_a4,2,1,pcVar10,pcVar8,0);
      pcVar11 = "temp";
      if (!bVar2) {
        pcVar11 = "current";
      }
      eON_AppendShaderCompileMessage
                (&local_28,"\t%sRegister.rgb = StageArg1.rgb * StageArg2.rgb + StageArg1.a;\n",
                 pcVar11);
      goto LAB_040c3806;
    case 0x14:
      if (bVar16) {
        FUN_0400a810("!colorOpSameAsAlphaOp",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                     ,0x591,
                     "char* FragmentShaderCompiler::GenerateProgram(const FragmentShaderConfig&)");
      }
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,1,0,param_2[(int)local_a4 * 10 + 6],
                 param_2[(int)local_a4 * 10 + 10],0);
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,1,1,param_2[(int)local_a4 * 10 + 3],
                 param_2[(int)local_a4 * 10 + 10],0);
      pcVar12 = (char *)0x0;
      pcVar8 = (char *)(uint)param_2[(int)local_a4 * 10 + 10];
      pcVar10 = (char *)(uint)param_2[(int)local_a4 * 10 + 4];
      local_b0 = (char *)0x1;
      fixedPipelineEmulation_040bd330(param_2,local_a4,2,1,pcVar10,pcVar8,0);
      pcVar11 = "temp";
      if (!bVar2) {
        pcVar11 = "current";
      }
      eON_AppendShaderCompileMessage
                (&local_28,
                 "\t%sRegister.rgb = ( 1.0 - StageArg1.a ) * StageArg2.rgb + StageArg1.rgb;\n",
                 pcVar11);
      goto LAB_040c3806;
    case 0x15:
      if (bVar16) {
        FUN_0400a810("!colorOpSameAsAlphaOp",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                     ,0x59a,
                     "char* FragmentShaderCompiler::GenerateProgram(const FragmentShaderConfig&)");
      }
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,1,0,param_2[(int)local_a4 * 10 + 6],
                 param_2[(int)local_a4 * 10 + 10],0);
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,1,1,param_2[(int)local_a4 * 10 + 3],
                 param_2[(int)local_a4 * 10 + 10],0);
      pcVar12 = (char *)0x0;
      pcVar8 = (char *)(uint)param_2[(int)local_a4 * 10 + 10];
      pcVar10 = (char *)(uint)param_2[(int)local_a4 * 10 + 4];
      local_b0 = (char *)0x1;
      fixedPipelineEmulation_040bd330(param_2,local_a4,2,1,pcVar10,pcVar8,0);
      pcVar11 = "temp";
      if (!bVar2) {
        pcVar11 = "current";
      }
      eON_AppendShaderCompileMessage
                (&local_28,
                 "\t%sRegister.rgb = ( vec3(1.0) - StageArg1.rgb ) * StageArg2.rgb + StageArg1.a;\n"
                 ,pcVar11);
LAB_040c3806:
      bVar1 = true;
      goto LAB_040c2c5a;
    case 0x17:
      if (bVar16) {
        FUN_0400a810("!colorOpSameAsAlphaOp",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                     ,0x5b7,
                     "char* FragmentShaderCompiler::GenerateProgram(const FragmentShaderConfig&)");
      }
      if ((*param_2 & 0x40) == 0) {
        eON_AppendShaderCompileMessage(&local_40,"uniform vec4 LuminanceScaleOffset%u;\n",local_a4);
      }
    case 0x16:
      if (bVar16) {
        FUN_0400a810("!colorOpSameAsAlphaOp",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                     ,0x5bc,
                     "char* FragmentShaderCompiler::GenerateProgram(const FragmentShaderConfig&)");
      }
      if ((*param_2 & 0x40) == 0) {
        eON_AppendShaderCompileMessage(&local_40,"uniform vec4 BumpEnvMap%u;\n",local_a4);
      }
      pcVar8 = (char *)(uint)param_2[(int)local_a4 * 10 + 10];
      pcVar10 = (char *)(uint)param_2[(int)local_a4 * 10 + 3];
      local_b0 = (char *)0x1;
      pcVar11 = (char *)0x1;
      fixedPipelineEmulation_040bd330(param_2,local_a4,1,1,pcVar10,pcVar8,pcVar12);
      if (!bVar5) {
        eON_AppendShaderCompileMessage(&local_28,"vec4 bumpEnvMapPixel;\n");
        bVar5 = true;
      }
      eON_AppendShaderCompileMessage(&local_28,"\tbumpEnvMapPixel.rgb = StageArg1.rgb;\n");
      break;
    case 0x18:
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,1,1,param_2[(int)local_a4 * 10 + 3],
                 param_2[(int)local_a4 * 10 + 10],pcVar12);
      pcVar8 = (char *)(uint)param_2[(int)local_a4 * 10 + 10];
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,2,1,param_2[(int)local_a4 * 10 + 4],pcVar8,pcVar12);
      pcVar11 = "temp";
      pcVar10 = (char *)(4 - (uint)!bVar16);
      if (!bVar2) {
        pcVar11 = "current";
      }
      eON_AppendShaderCompileMessage
                (&local_28,
                 "\t%sRegister%s = vec%d( dot( StageArg1.rgb - vec3( 0.5 ), StageArg2.rgb - vec3( 0.5 ) ) );\n"
                 ,pcVar11,local_b0,pcVar10);
      break;
    case 0x19:
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,1,1,param_2[(int)local_a4 * 10 + 3],
                 param_2[(int)local_a4 * 10 + 10],pcVar12);
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,2,1,param_2[(int)local_a4 * 10 + 4],
                 param_2[(int)local_a4 * 10 + 10],pcVar12);
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,0,1,param_2[(int)local_a4 * 10 + 5],
                 param_2[(int)local_a4 * 10 + 10],pcVar12);
      pcVar11 = "temp";
      if (!bVar2) {
        pcVar11 = "current";
      }
      pcVar12 = local_b0;
      eON_AppendShaderCompileMessage
                (&local_28,"\t%sRegister%s = StageArg1%s + StageArg2%s * StageArg0%s;\n",pcVar11,
                 local_b0,local_b0,local_b0,local_b0);
      break;
    case 0x1a:
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,1,1,param_2[(int)local_a4 * 10 + 3],
                 param_2[(int)local_a4 * 10 + 10],pcVar12);
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,2,1,param_2[(int)local_a4 * 10 + 4],
                 param_2[(int)local_a4 * 10 + 10],pcVar12);
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,0,1,param_2[(int)local_a4 * 10 + 5],
                 param_2[(int)local_a4 * 10 + 10],pcVar12);
      pcVar11 = "temp";
      pcVar12 = (char *)(4 - (uint)!bVar16);
      if (!bVar2) {
        pcVar11 = "current";
      }
      eON_AppendShaderCompileMessage
                (&local_28,
                 "\t%sRegister%s = StageArg1%s * StageArg2%s + ( vec%u(1.0) - StageArg1%s ) * StageArg0%s;\n"
                 ,pcVar11,local_b0,local_b0,local_b0,pcVar12,local_b0,local_b0);
    }
    bVar1 = false;
LAB_040c2c5a:
    if (bVar16) goto LAB_040c27f0;
    bVar6 = param_2[(int)local_a4 * 10 + 2];
    switch(bVar6) {
    default:
      FUN_0402cd10(0xf,
                   "Unknown alpha operation ( %u ) while preparing fixed pipeline emulation fragment shader!"
                   ,bVar6);
      __dest = (void *)0x0;
      goto LAB_040c2b21;
    case 1:
      bVar6 = *(byte *)(param_1 + 3);
      goto LAB_040c27f7;
    case 2:
      if (!bVar1) {
        pcVar12 = (char *)0x0;
        pcVar8 = (char *)(uint)param_2[(int)local_a4 * 10 + 10];
        pcVar10 = (char *)(uint)param_2[(int)local_a4 * 10 + 6];
        local_b0 = (char *)0x0;
        fixedPipelineEmulation_040bd330(param_2,local_a4,1,0,pcVar10,pcVar8,0);
      }
      pcVar11 = "temp";
      if (!bVar2) {
        pcVar11 = "current";
      }
      eON_AppendShaderCompileMessage
                (&local_28,"\t%sRegister.a = StageArg1.a;\n",pcVar11,local_b0,pcVar10,pcVar8,pcVar12
                );
      break;
    case 3:
      pcVar12 = (char *)0x0;
      pcVar8 = (char *)(uint)param_2[(int)local_a4 * 10 + 10];
      pcVar10 = (char *)(uint)param_2[(int)local_a4 * 10 + 7];
      local_b0 = (char *)0x0;
      fixedPipelineEmulation_040bd330(param_2,local_a4,2,0,pcVar10,pcVar8,0);
      pcVar11 = "temp";
      if (!bVar2) {
        pcVar11 = "current";
      }
      eON_AppendShaderCompileMessage(&local_28,"\t%sRegister.a = StageArg2.a;\n",pcVar11);
      break;
    case 4:
      if (!bVar1) {
        fixedPipelineEmulation_040bd330
                  (param_2,local_a4,1,0,param_2[(int)local_a4 * 10 + 6],
                   param_2[(int)local_a4 * 10 + 10],0);
      }
      pcVar12 = (char *)0x0;
      pcVar8 = (char *)(uint)param_2[(int)local_a4 * 10 + 10];
      pcVar10 = (char *)(uint)param_2[(int)local_a4 * 10 + 7];
      local_b0 = (char *)0x0;
      fixedPipelineEmulation_040bd330(param_2,local_a4,2,0,pcVar10,pcVar8,0);
      pcVar11 = "temp";
      if (!bVar2) {
        pcVar11 = "current";
      }
      eON_AppendShaderCompileMessage
                (&local_28,"\t%sRegister.a = StageArg1.a * StageArg2.a;\n",pcVar11);
      break;
    case 5:
      if (!bVar1) {
        fixedPipelineEmulation_040bd330
                  (param_2,local_a4,1,0,param_2[(int)local_a4 * 10 + 6],
                   param_2[(int)local_a4 * 10 + 10],0);
      }
      pcVar12 = (char *)0x0;
      pcVar8 = (char *)(uint)param_2[(int)local_a4 * 10 + 10];
      pcVar10 = (char *)(uint)param_2[(int)local_a4 * 10 + 7];
      local_b0 = (char *)0x0;
      fixedPipelineEmulation_040bd330(param_2,local_a4,2,0,pcVar10,pcVar8,0);
      pcVar11 = "temp";
      if (!bVar2) {
        pcVar11 = "current";
      }
      eON_AppendShaderCompileMessage
                (&local_28,"\t%sRegister.a = 2.0 * StageArg1.a * StageArg2.a;\n",pcVar11);
      break;
    case 6:
      if (!bVar1) {
        fixedPipelineEmulation_040bd330
                  (param_2,local_a4,1,0,param_2[(int)local_a4 * 10 + 6],
                   param_2[(int)local_a4 * 10 + 10],0);
      }
      pcVar12 = (char *)0x0;
      pcVar8 = (char *)(uint)param_2[(int)local_a4 * 10 + 10];
      pcVar10 = (char *)(uint)param_2[(int)local_a4 * 10 + 7];
      local_b0 = (char *)0x0;
      fixedPipelineEmulation_040bd330(param_2,local_a4,2,0,pcVar10,pcVar8,0);
      pcVar11 = "temp";
      if (!bVar2) {
        pcVar11 = "current";
      }
      eON_AppendShaderCompileMessage
                (&local_28,"\t%sRegister.a = 4.0 * StageArg1.a * StageArg2.a;\n",pcVar11);
      break;
    case 7:
      if (!bVar1) {
        fixedPipelineEmulation_040bd330
                  (param_2,local_a4,1,0,param_2[(int)local_a4 * 10 + 6],
                   param_2[(int)local_a4 * 10 + 10],0);
      }
      pcVar12 = (char *)0x0;
      pcVar8 = (char *)(uint)param_2[(int)local_a4 * 10 + 10];
      pcVar10 = (char *)(uint)param_2[(int)local_a4 * 10 + 7];
      local_b0 = (char *)0x0;
      fixedPipelineEmulation_040bd330(param_2,local_a4,2,0,pcVar10,pcVar8,0);
      pcVar11 = "temp";
      if (!bVar2) {
        pcVar11 = "current";
      }
      eON_AppendShaderCompileMessage
                (&local_28,"\t%sRegister.a = StageArg1.a + StageArg2.a;\n",pcVar11);
      break;
    case 8:
      if (!bVar1) {
        fixedPipelineEmulation_040bd330
                  (param_2,local_a4,1,0,param_2[(int)local_a4 * 10 + 6],
                   param_2[(int)local_a4 * 10 + 10],0);
      }
      pcVar12 = (char *)0x0;
      pcVar8 = (char *)(uint)param_2[(int)local_a4 * 10 + 10];
      pcVar10 = (char *)(uint)param_2[(int)local_a4 * 10 + 7];
      local_b0 = (char *)0x0;
      fixedPipelineEmulation_040bd330(param_2,local_a4,2,0,pcVar10,pcVar8,0);
      pcVar11 = "temp";
      if (!bVar2) {
        pcVar11 = "current";
      }
      eON_AppendShaderCompileMessage
                (&local_28,"\t%sRegister.a = StageArg1.a + StageArg2.a - 0.5;\n",pcVar11);
      break;
    case 9:
      if (!bVar1) {
        fixedPipelineEmulation_040bd330
                  (param_2,local_a4,1,0,param_2[(int)local_a4 * 10 + 6],
                   param_2[(int)local_a4 * 10 + 10],0);
      }
      pcVar12 = (char *)0x0;
      pcVar8 = (char *)(uint)param_2[(int)local_a4 * 10 + 10];
      pcVar10 = (char *)(uint)param_2[(int)local_a4 * 10 + 7];
      local_b0 = (char *)0x0;
      fixedPipelineEmulation_040bd330(param_2,local_a4,2,0,pcVar10,pcVar8,0);
      pcVar11 = "temp";
      if (!bVar2) {
        pcVar11 = "current";
      }
      eON_AppendShaderCompileMessage
                (&local_28,"\t%sRegister.a = 2.0 * ( StageArg1.a + StageArg2.a - 0.5 );\n",pcVar11);
      break;
    case 10:
      if (!bVar1) {
        fixedPipelineEmulation_040bd330
                  (param_2,local_a4,1,0,param_2[(int)local_a4 * 10 + 6],
                   param_2[(int)local_a4 * 10 + 10],0);
      }
      pcVar12 = (char *)0x0;
      pcVar8 = (char *)(uint)param_2[(int)local_a4 * 10 + 10];
      pcVar10 = (char *)(uint)param_2[(int)local_a4 * 10 + 7];
      local_b0 = (char *)0x0;
      fixedPipelineEmulation_040bd330(param_2,local_a4,2,0,pcVar10,pcVar8,0);
      pcVar11 = "temp";
      if (!bVar2) {
        pcVar11 = "current";
      }
      eON_AppendShaderCompileMessage
                (&local_28,"\t%sRegister.a = StageArg1.a - StageArg2.a;\n",pcVar11);
      break;
    case 0xb:
      if (!bVar1) {
        fixedPipelineEmulation_040bd330
                  (param_2,local_a4,1,0,param_2[(int)local_a4 * 10 + 6],
                   param_2[(int)local_a4 * 10 + 10],0);
      }
      pcVar12 = (char *)0x0;
      pcVar8 = (char *)(uint)param_2[(int)local_a4 * 10 + 10];
      pcVar10 = (char *)(uint)param_2[(int)local_a4 * 10 + 7];
      local_b0 = (char *)0x0;
      fixedPipelineEmulation_040bd330(param_2,local_a4,2,0,pcVar10,pcVar8,0);
      pcVar11 = "temp";
      if (!bVar2) {
        pcVar11 = "current";
      }
      eON_AppendShaderCompileMessage
                (&local_28,"\t%sRegister.a = StageArg1.a + ( StageArg2.a * ( 1.0 - StageArg1.a );\n"
                 ,pcVar11);
      break;
    case 0xc:
    case 0xe:
    case 0xf:
    case 0x11:
    case 0x18:
      FUN_0402cd10(0xf,
                   "This operation ( %u ) is not implemented for alpha in fixed pipeline emulation fragment shader compiler. Add it."
                   ,bVar6);
      __dest = (void *)0x0;
      goto LAB_040c2b21;
    case 0xd:
      if (!bVar1) {
        fixedPipelineEmulation_040bd330
                  (param_2,local_a4,1,0,param_2[(int)local_a4 * 10 + 6],
                   param_2[(int)local_a4 * 10 + 10],0);
      }
      pcVar12 = (char *)0x0;
      pcVar8 = (char *)(uint)param_2[(int)local_a4 * 10 + 10];
      fixedPipelineEmulation_040bd330(param_2,local_a4,2,0,param_2[(int)local_a4 * 10 + 7],pcVar8,0)
      ;
      pcVar11 = "temp";
      if (!bVar2) {
        pcVar11 = "current";
      }
      local_b0 = local_a4;
      pcVar10 = local_a4;
      eON_AppendShaderCompileMessage
                (&local_28,
                 "\t%sRegister.a = ( StageArg1.a * texSample%u.a ) + ( StageArg2.a * ( 1.0 - texSample%u.a ) );\n"
                 ,pcVar11,local_a4,local_a4);
      bVar6 = (byte)(1 << ((byte)local_a4 & 0x1f)) | *(byte *)(param_1 + 3);
      *(byte *)(param_1 + 3) = bVar6;
      goto LAB_040c27f7;
    case 0x10:
      if (!bVar1) {
        fixedPipelineEmulation_040bd330
                  (param_2,local_a4,1,0,param_2[(int)local_a4 * 10 + 6],
                   param_2[(int)local_a4 * 10 + 10],0);
      }
      pcVar12 = (char *)0x0;
      pcVar8 = (char *)(uint)param_2[(int)local_a4 * 10 + 10];
      pcVar10 = (char *)(uint)param_2[(int)local_a4 * 10 + 7];
      local_b0 = (char *)0x0;
      fixedPipelineEmulation_040bd330(param_2,local_a4,2,0,pcVar10,pcVar8,0);
      pcVar11 = "temp";
      if (!bVar2) {
        pcVar11 = "current";
      }
      eON_AppendShaderCompileMessage
                (&local_28,
                 "\t%sRegister.a = StageArg1.a * currentRegister.a + StageArg2.a * ( 1.0 - currentRegister.a );\n"
                 ,pcVar11);
      break;
    case 0x19:
      if (!bVar1) {
        fixedPipelineEmulation_040bd330
                  (param_2,local_a4,1,0,param_2[(int)local_a4 * 10 + 6],
                   param_2[(int)local_a4 * 10 + 10],0);
      }
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,2,0,param_2[(int)local_a4 * 10 + 7],
                 param_2[(int)local_a4 * 10 + 10],0);
      pcVar12 = (char *)0x0;
      pcVar8 = (char *)(uint)param_2[(int)local_a4 * 10 + 10];
      pcVar10 = (char *)(uint)param_2[(int)local_a4 * 10 + 8];
      local_b0 = (char *)0x0;
      fixedPipelineEmulation_040bd330(param_2,local_a4,0,0,pcVar10,pcVar8,0);
      pcVar11 = "temp";
      if (!bVar2) {
        pcVar11 = "current";
      }
      eON_AppendShaderCompileMessage
                (&local_28,"\t%sRegister.a = StageArg1.a + StageArg2.a * StageArg0.a;\n",pcVar11);
      break;
    case 0x1a:
      if (!bVar1) {
        fixedPipelineEmulation_040bd330
                  (param_2,local_a4,1,0,param_2[(int)local_a4 * 10 + 6],
                   param_2[(int)local_a4 * 10 + 10],0);
      }
      fixedPipelineEmulation_040bd330
                (param_2,local_a4,2,0,param_2[(int)local_a4 * 10 + 7],
                 param_2[(int)local_a4 * 10 + 10],0);
      pcVar12 = (char *)0x0;
      pcVar8 = (char *)(uint)param_2[(int)local_a4 * 10 + 10];
      pcVar10 = (char *)(uint)param_2[(int)local_a4 * 10 + 8];
      local_b0 = (char *)0x0;
      fixedPipelineEmulation_040bd330(param_2,local_a4,0,0,pcVar10,pcVar8,0);
      pcVar11 = "temp";
      if (!bVar2) {
        pcVar11 = "current";
      }
      eON_AppendShaderCompileMessage
                (&local_28,
                 "\t%sRegister.a = StageArg1.a * StageArg2.a + ( 1 - StageArg1.a ) * StageArg0.a;\n"
                 ,pcVar11);
    }
LAB_040c27f0:
    bVar6 = *(byte *)(param_1 + 3);
LAB_040c27f7:
    if ((bVar6 >> ((uint)local_a4 & 0x1f) & 1) != 0) {
      if (!bVar4) {
        eON_AppendShaderCompileMessage
                  (&local_34,"\n\t// Required texture samples\n",pcVar11,local_b0,pcVar10,pcVar8,
                   pcVar12);
        bVar4 = true;
      }
      eON_AppendShaderCompileMessage
                (&local_34,"\tvec4 texSample%u = ",local_a4,local_b0,pcVar10,pcVar8,pcVar12);
      pcVar11 = "";
      fixedPipelineEmulation_040bca60
                (local_a4,param_2[(int)local_a4 * 10 + 10],&DAT_04328763,&DAT_04328763,
                 (*param_2 & 0x20) != 0,(*param_2 & 0x40) != 0);
      eON_AppendShaderCompileMessage(&local_34,";\n");
    }
    local_a4 = local_a4 + 1;
  } while (local_a4 != (char *)0x8);
  eON_AppendShaderCompileMessage(&local_28,"\n",pcVar11);
  bVar6 = *param_2;
  uVar7 = (uint)bVar6;
  if ((bVar6 & 1) != 0) {
    pcVar11 = "GlFog";
    if ((bVar6 & 0x40) == 0) {
      pcVar11 = "gl_Fog.";
    }
    iVar9 = (int)(uVar7 & 0x18) >> 3;
    if (iVar9 == 2) {
      pcVar12 = "eON_VaryingFog";
      if ((bVar6 & 0x20) == 0) {
        pcVar12 = "gl_FogFragCoord";
      }
      eON_AppendShaderCompileMessage
                (&local_28,"\tfloat fogFactor = exp2( - %s * %s * %sdensity * %sdensity );\n",
                 pcVar12,pcVar12,pcVar11,pcVar11);
    }
    else if (iVar9 == 3) {
      pcVar12 = "gl_FogFragCoord";
      if ((bVar6 & 0x20) != 0) {
        pcVar12 = "eON_VaryingFog";
      }
      eON_AppendShaderCompileMessage
                (&local_28,"\tfloat fogFactor = ( %send - %s ) * %sscale;\n",pcVar11,pcVar12,pcVar11
                );
    }
    else {
      pcVar12 = "eON_VaryingFog";
      if (iVar9 == 1) {
        if ((bVar6 & 0x20) == 0) {
          pcVar12 = "gl_FogFragCoord";
        }
        eON_AppendShaderCompileMessage
                  (&local_28,"\tfloat fogFactor = exp2( - %s * %sdensity );\n",pcVar12,pcVar11);
      }
      else {
        if ((bVar6 & 0x20) == 0) {
          pcVar12 = "gl_FogFragCoord";
        }
        eON_AppendShaderCompileMessage(&local_28,"\tfloat fogFactor = %s;\n",pcVar12);
      }
    }
    eON_AppendShaderCompileMessage
              (&local_28,
               "\tcurrentRegister.rgb = mix( %scolor.rgb, currentRegister.rgb, clamp( fogFactor, 0.0, 1.0 ) );\n"
               ,pcVar11);
    uVar7 = (uint)*param_2;
  }
  if ((uVar7 & 4) == 0) goto LAB_040c2a40;
  pcVar11 = "gl_SecondaryColor";
  if ((uVar7 & 0x20) != 0) {
    if (param_2[0x58] == 1) {
      iVar9 = 0;
    }
    else {
      pcVar11 = "vec4(0.0)";
      if (param_2[0x58] == 0xff) goto LAB_040c2a26;
      if (param_2[0x5a] == 1) {
        iVar9 = 1;
      }
      else {
        if (param_2[0x5a] == 0xff) goto LAB_040c2a26;
        if (param_2[0x5c] == 1) {
          iVar9 = 2;
        }
        else {
          if (param_2[0x5c] == 0xff) goto LAB_040c2a26;
          if (param_2[0x5e] == 1) {
            iVar9 = 3;
          }
          else {
            if (param_2[0x5e] == 0xff) goto LAB_040c2a26;
            if (param_2[0x60] == 1) {
              iVar9 = 4;
            }
            else {
              if (param_2[0x60] == 0xff) goto LAB_040c2a26;
              if (param_2[0x62] == 1) {
                iVar9 = 5;
              }
              else {
                if (param_2[0x62] == 0xff) goto LAB_040c2a26;
                if (param_2[100] == 1) {
                  iVar9 = 6;
                }
                else {
                  if (param_2[100] == 0xff) goto LAB_040c2a26;
                  if (param_2[0x66] == 1) {
                    iVar9 = 7;
                  }
                  else {
                    if (param_2[0x66] == 0xff) goto LAB_040c2a26;
                    if (param_2[0x68] == 1) {
                      iVar9 = 8;
                    }
                    else if ((param_2[0x68] == 0xff) || (iVar9 = 9, param_2[0x6a] != 1))
                    goto LAB_040c2a26;
                  }
                }
              }
            }
          }
        }
      }
    }
    ppuVar13 = &PTR_s_eON_Varyings_0__042ff180;
    puVar15 = local_90;
    for (iVar14 = 0x14; iVar14 != 0; iVar14 = iVar14 + -1) {
      *puVar15 = (uint)*ppuVar13;
      ppuVar13 = ppuVar13 + (uint)bVar17 * -2 + 1;
      puVar15 = puVar15 + (uint)bVar17 * -2 + 1;
    }
    pcVar11 = (char *)local_90[(uint)param_2[iVar9 * 2 + 0x59] * 2];
  }
LAB_040c2a26:
  eON_AppendShaderCompileMessage(&local_28,"\tcurrentRegister.rgb += %s.rgb;\n",pcVar11);
LAB_040c2a40:
  switch(*(undefined4 *)(param_2 + 0x54)) {
  case 0x200:
    eON_AppendShaderCompileMessage(&local_28,"\tdiscard;\n",pcVar11);
    break;
  case 0x201:
    if ((*param_2 & 0x40) == 0) {
      eON_AppendShaderCompileMessage(&local_40,"uniform float AlphaRef;\n",pcVar11);
    }
    eON_AppendShaderCompileMessage
              (&local_28,"\tif( currentRegister.a >= AlphaRef ) discard;\n",pcVar11);
    break;
  case 0x202:
    if ((*param_2 & 0x40) == 0) {
      eON_AppendShaderCompileMessage(&local_40,"uniform float AlphaRef;\n",pcVar11);
    }
    eON_AppendShaderCompileMessage
              (&local_28,"\tif( currentRegister.a != AlphaRef ) discard;\n",pcVar11);
    break;
  case 0x203:
    if ((*param_2 & 0x40) == 0) {
      eON_AppendShaderCompileMessage(&local_40,"uniform float AlphaRef;\n",pcVar11);
    }
    eON_AppendShaderCompileMessage
              (&local_28,"\tif( currentRegister.a > AlphaRef ) discard;\n",pcVar11);
    break;
  case 0x204:
    if ((*param_2 & 0x40) == 0) {
      eON_AppendShaderCompileMessage(&local_40,"uniform float AlphaRef;\n",pcVar11);
    }
    eON_AppendShaderCompileMessage
              (&local_28,"\tif( currentRegister.a <= AlphaRef ) discard;\n",pcVar11);
    break;
  case 0x205:
    if ((*param_2 & 0x40) == 0) {
      eON_AppendShaderCompileMessage(&local_40,"uniform float AlphaRef;\n",pcVar11);
    }
    eON_AppendShaderCompileMessage
              (&local_28,"\tif( currentRegister.a == AlphaRef ) discard;\n",pcVar11);
    break;
  case 0x206:
    if ((*param_2 & 0x40) == 0) {
      eON_AppendShaderCompileMessage(&local_40,"uniform float AlphaRef;\n",pcVar11);
    }
    eON_AppendShaderCompileMessage
              (&local_28,"\tif( currentRegister.a < AlphaRef ) discard;\n",pcVar11);
  }
  if ((*param_2 & 0x40) == 0) {
                    /* try { // try from 040c2b71 to 040c4fe1 has its CatchHandler @ 040c5200 */
    eON_AppendShaderCompileMessage(&local_28,"\tgl_FragColor = currentRegister;\n",pcVar11);
  }
  else {
    eON_AppendShaderCompileMessage(&local_40,"out vec4 FragColor;\n",pcVar11);
    eON_AppendShaderCompileMessage(&local_28,"\tFragColor = currentRegister;\n");
  }
  eON_AppendShaderCompileMessage(&local_28,&PTR_DAT_042fc048);
  __n_01 = local_24;
  __n_00 = local_30;
  __n = local_3c;
  iVar9 = local_3c + local_30;
  iVar14 = iVar9 + local_24;
  __dest = malloc(iVar14 + 1);
  *(undefined1 *)((int)__dest + iVar14) = 0;
  memcpy(__dest,local_40,__n);
  memcpy((void *)(__n + (int)__dest),local_34,__n_00);
  memcpy((void *)(iVar9 + (int)__dest),local_28,__n_01);
LAB_040c2b21:
                    /* try { // try from 040c2b2a to 040c2b2e has its CatchHandler @ 040c51c9 */
  FUN_0402f590(&local_28);
                    /* try { // try from 040c2b38 to 040c2b3c has its CatchHandler @ 040c5212 */
  FUN_0402f590(&local_34);
  FUN_0402f590(&local_40);
  return __dest;
}

// --- FragmentShaderConfig::AnalyzeDeviceState @0x040be730 ---
/* source: fixedPipelineEmulation */

void fixedPipelineEmulation_040be730
               (undefined1 *param_1,int param_2,undefined4 param_3,char param_4)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  uint local_20;
  
  bzero(param_1,0x6c);
  *(undefined4 *)(param_1 + 0x54) = param_3;
  cVar3 = FUN_04021ee0();
  local_20 = (-(uint)(param_4 == '\0') & 0xffffffe0) + 0x60;
  if (cVar3 == '\0') {
    local_20 = ~-(uint)(param_4 == '\0') & 0x20;
  }
  if (*(int *)(param_2 + 0x444) != 0) {
    uVar6 = *(uint *)(param_2 + 0x460);
    if (3 < uVar6) {
      FUN_0400a810("tableFogType < 4",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                   ,0xd1,
                   "void FragmentShaderConfig::AnalyzeDeviceState(const eON_Direct3DDeviceState*, uint32_t, bool)"
                  );
    }
    local_20 = local_20 | uVar6 * 8 | 1;
  }
  uVar6 = local_20 | 4;
  if (*(int *)(param_2 + 0x448) == 0) {
    uVar6 = local_20;
  }
  local_20._0_1_ = (undefined1)uVar6;
  iVar8 = *(int *)(param_2 + 0x5278);
  if (iVar8 == 0) {
    FUN_0400a810("deviceState->VertexDeclaration",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                 ,0xd8,
                 "void FragmentShaderConfig::AnalyzeDeviceState(const eON_Direct3DDeviceState*, uint32_t, bool)"
                );
    iVar8 = *(int *)(param_2 + 0x5278);
  }
  iVar9 = (*(int *)(iVar8 + 0x28) - *(int *)(iVar8 + 0x24) >> 3) * -0x55555555;
  if (iVar9 != 0) {
    iVar7 = 0;
    iVar5 = 0;
    do {
      while( true ) {
        local_20._0_1_ = (undefined1)uVar6;
        pcVar1 = (char *)(*(int *)(iVar8 + 0x24) + iVar7);
        if (*pcVar1 == '\n') break;
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + 0x18;
        if (iVar5 == iVar9) goto LAB_040be820;
      }
      if (pcVar1[1] == '\0') {
        uVar6 = uVar6 | 2;
      }
      local_20._0_1_ = (undefined1)uVar6;
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + 0x18;
    } while (iVar5 != iVar9);
  }
LAB_040be820:
  iVar8 = 0;
  do {
    piVar2 = (int *)(param_2 + 0xda0 + iVar8 * 0x48);
    param_1[iVar8 * 10 + 1] = (char)*piVar2;
    if (*piVar2 == 1) break;
    switch(*piVar2) {
    default:
switchD_040be990_caseD_0:
      param_1[iVar8 * 10 + 3] = (char)piVar2[2];
      param_1[iVar8 * 10 + 4] = (char)piVar2[3];
LAB_040be908:
      bVar10 = true;
      if (piVar2[2] != 2) {
        bVar10 = piVar2[3] == 2;
      }
      break;
    case 2:
      param_1[iVar8 * 10 + 3] = (char)piVar2[2];
      bVar10 = piVar2[2] == 2;
      break;
    case 3:
      param_1[iVar8 * 10 + 4] = (char)piVar2[3];
      bVar10 = piVar2[3] == 2;
      break;
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
      param_1[iVar8 * 10 + 6] = (char)piVar2[6];
      param_1[iVar8 * 10 + 3] = (char)piVar2[2];
      param_1[iVar8 * 10 + 4] = (char)piVar2[3];
      bVar10 = true;
      if (piVar2[6] != 2) goto LAB_040be908;
      break;
    case 0x16:
    case 0x17:
      if (piVar2[2] != 2) {
        FUN_0400a810("sourceStage.ColorArg1 == 0x02",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                     ,0xf7,
                     "void FragmentShaderConfig::AnalyzeDeviceState(const eON_Direct3DDeviceState*, uint32_t, bool)"
                    );
      }
      if (iVar8 == 0) {
        if (1 < (uint)piVar2[3]) {
          FUN_0400a810("(sourceStage.ColorArg2 == 0x01) || (sourceStage.ColorArg2 == 0x00)",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                       ,0xf9,
                       "void FragmentShaderConfig::AnalyzeDeviceState(const eON_Direct3DDeviceState*, uint32_t, bool)"
                      );
        }
      }
      else if (piVar2[3] != 1) {
        FUN_0400a810("sourceStage.ColorArg2 == 0x01",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                     ,0xfb,
                     "void FragmentShaderConfig::AnalyzeDeviceState(const eON_Direct3DDeviceState*, uint32_t, bool)"
                    );
      }
      param_1[iVar8 * 10 + 3] = (char)piVar2[2];
      param_1[iVar8 * 10 + 4] = (char)piVar2[3];
      bVar10 = true;
      break;
    case 0x19:
    case 0x1a:
      param_1[iVar8 * 10 + 5] = (char)piVar2[1];
      bVar10 = true;
      if (piVar2[1] != 2) goto switchD_040be990_caseD_0;
    }
    param_1[iVar8 * 10 + 9] = (char)piVar2[8];
    param_1[iVar8 * 10 + 2] = (char)piVar2[4];
    switch(piVar2[4]) {
    case 1:
      break;
    case 2:
      param_1[iVar8 * 10 + 6] = (char)piVar2[6];
      if (piVar2[6] == 2) {
        bVar10 = true;
      }
      break;
    case 3:
      param_1[iVar8 * 10 + 7] = (char)piVar2[7];
      if (piVar2[7] == 2) {
        bVar10 = true;
      }
      break;
    case 0x19:
    case 0x1a:
      param_1[iVar8 * 10 + 8] = (char)piVar2[5];
      if (piVar2[5] == 2) {
        bVar10 = true;
      }
    default:
      param_1[iVar8 * 10 + 6] = (char)piVar2[6];
      param_1[iVar8 * 10 + 7] = (char)piVar2[7];
      if (piVar2[6] == 2) {
        bVar10 = true;
      }
      else if (piVar2[7] == 2) {
        bVar10 = true;
      }
    }
    if ((*(int *)(param_2 + 0xd4c + iVar8 * 4) != 0) && (bVar10)) {
      uVar6 = piVar2[0x10];
      if ((uVar6 & 0xfffffeff) == 0) {
        param_1[iVar8 * 10 + 10] = 0x10;
        bVar4 = 0x10;
        if (*(int *)(*(int *)(param_2 + 0xd4c + iVar8 * 4) + 0x24) == 4) goto LAB_040beaba;
LAB_040be8af:
        cVar3 = FUN_04021ee0();
      }
      else {
        if (((uVar6 & 7) - 1 & 0xfffffffc) != 0) {
          FUN_0400a810("( ( ( sourceStage.TextureTransformFlags & 0x7 ) - 1 ) & ~3 ) == 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                       ,0x142,
                       "void FragmentShaderConfig::AnalyzeDeviceState(const eON_Direct3DDeviceState*, uint32_t, bool)"
                      );
          uVar6 = piVar2[0x10];
        }
        bVar4 = (-((uVar6 & 0x100) == 0) & 0xfcU) + 0x1c | ((byte)uVar6 & 7) - 1;
        param_1[iVar8 * 10 + 10] = bVar4;
        if (*(int *)(*(int *)(param_2 + 0xd4c + iVar8 * 4) + 0x24) != 4) goto LAB_040be8af;
LAB_040beaba:
        param_1[iVar8 * 10 + 10] = bVar4 | 0x20;
        cVar3 = FUN_04021ee0();
      }
      if (cVar3 != '\0') {
        iVar9 = *(int *)(param_2 + 0xd4c + iVar8 * 4);
        uVar6 = (**(code **)(*(int *)(iVar9 + 4) + 0x54))(iVar9 + 4);
        if (uVar6 == 0x32) {
LAB_040bebbe:
          param_1[iVar8 * 10 + 10] = param_1[iVar8 * 10 + 10] | 0x80;
        }
        else if (uVar6 < 0x33) {
          if (uVar6 == 0x1c) {
            param_1[iVar8 * 10 + 10] = param_1[iVar8 * 10 + 10] | 0x40;
          }
        }
        else if (uVar6 == 0x33) {
          param_1[iVar8 * 10 + 10] = param_1[iVar8 * 10 + 10] | 0xc0;
        }
        else if (uVar6 == 0x51) goto LAB_040bebbe;
      }
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 8);
  *param_1 = (undefined1)local_20;
  return;
}

// --- VertexShaderCompiler::GenerateProgram @0x040bec40 ---
/* source: fixedPipelineEmulation */

void * fixedPipelineEmulation_040bec40(undefined4 param_1,uint *param_2,undefined4 *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  void *__dest;
  undefined **ppuVar9;
  char cVar10;
  int iVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  uint uVar14;
  undefined **ppuVar15;
  char *pcVar16;
  uint *puVar17;
  uint uVar18;
  void *__dest_00;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  byte bVar25;
  char *pcVar26;
  uint local_a8;
  void **local_a4;
  int local_9c;
  uint local_98;
  int local_94;
  uint local_84 [20];
  void *local_34;
  size_t local_30;
  undefined4 local_2c;
  void *local_28;
  size_t local_24;
  undefined4 local_20;
  
  bVar25 = 0;
  local_34 = (void *)0x0;
  local_30 = 0;
  local_2c = 0;
  local_28 = (void *)0x0;
  local_24 = 0;
  local_20 = 0;
  *param_3 = 0xffffffff;
  param_3[1] = 0xffffffff;
  param_3[2] = 0xffffffff;
  param_3[3] = 0xffffffff;
  param_3[4] = 0xffffffff;
  ppuVar12 = (undefined **)"eON_AttrPosition0";
  if ((*param_2 & 0x100) != 0) {
    ppuVar12 = (undefined **)"eON_AttrPositionT0";
  }
  if ((*param_2 & 0x20000) == 0) {
    eON_AppendShaderCompileMessage(&local_34,"#version 120\n\n");
  }
  else {
                    /* try { // try from 040bece1 to 040bffca has its CatchHandler @ 040c1223 */
    eON_AppendShaderCompileMessage(&local_34,"#version 150\n\n");
  }
  local_a4 = &local_34;
  eON_AppendShaderCompileMessage(local_a4,"\n// Fixed function vertex shader for eON\n\n");
  pcVar6 = "in";
  if ((*param_2 & 0x20000) == 0) {
    pcVar6 = "attribute";
  }
  pcVar26 = (char *)ppuVar12;
  eON_AppendShaderCompileMessage(local_a4,"%s vec4 %s;\n",pcVar6,ppuVar12);
  if ((*param_2 & 0x20000) != 0) {
    eON_AppendShaderCompileMessage
              (local_a4,
               "layout(std140) uniform CommonVariables {\n\tvec4 PositionFix;\n\tvec4 GlFogcolor;\n\tfloat GlFogdensity;\n\tfloat GlFogend;\n\tfloat GlFogscale;\n\tfloat AlphaRef;\n\tvec4 ClipPlanes[6];\n};\n\n"
               ,pcVar6,pcVar26);
    eON_AppendShaderCompileMessage
              (local_a4,
               "layout(std140) uniform FixedPipelineVertexOnly {\n\tmat4 ModelViewMatrix;\n\tmat4 ProjectionMatrix;\n\tmat4 ModelViewProjectionMatrix;\n\tmat4 ViewTransform;\n\tvec4 ViewportSizes;\n\tmat3 NormalMatrix;\n};\n\n"
              );
    pcVar26 = (char *)0x8;
    pcVar6 = (char *)0x8;
    eON_AppendShaderCompileMessage
              (local_a4,
               "struct LightSource {\n\tvec4\tambient;\n\tvec4\tdiffuse;\n\tvec4\tspecular;\n\tvec4\tposition;\n\tvec3\tspotDirection;\n\tfloat\tspotExponent;\n\tfloat\tspotCosCutoff;\n\tfloat\tconstantAttenuation;\n\tfloat\tlinearAttenuation;\n\tfloat\tquadraticAttenuation;\n};\n\nstruct MaterialInfo {\n\tvec4\temission;\n\tvec4\tambient;\n\tvec4\tdiffuse;\n\tvec4\tspecular;\n\tfloat\tshininess;\n};\n\nlayout(std140) uniform FixedPipelineVertexOnlyRare {\n\tmat4 TextureMatrix[%u];\n\tmat4 WorldTransforms[4];\n\tLightSource LightSources[%u];\n\tvec4 LightModelAmbient;\n\tMaterialInfo Material;\n};\n\n"
               ,8,8);
  }
  pcVar7 = pcVar6;
  if (*(byte *)((int)param_2 + 5) != 0) {
    pcVar7 = "in";
    if ((*param_2 & 0x20000) == 0) {
      eON_AppendShaderCompileMessage(local_a4,"uniform mat4 ViewTransform;\n",pcVar6,pcVar26);
      eON_AppendShaderCompileMessage(local_a4,"uniform mat4 WorldTransforms0;\n");
      eON_AppendShaderCompileMessage(local_a4,"uniform mat4 WorldTransforms1;\n");
      pcVar7 = "in";
      if ((*param_2 & 0x20000) == 0) {
        pcVar7 = "attribute";
      }
    }
    eON_AppendShaderCompileMessage(local_a4,"%s vec4 eON_AttrBlendWeight0;\n",pcVar7,pcVar26);
    bVar5 = *(byte *)((int)param_2 + 5);
    if (1 < bVar5) {
      if ((*param_2 & 0x20000) == 0) {
        eON_AppendShaderCompileMessage(local_a4,"uniform mat4 WorldTransforms2;\n",pcVar7,pcVar26);
        bVar5 = *(byte *)((int)param_2 + 5);
      }
      if ((2 < bVar5) && ((*param_2 & 0x20000) == 0)) {
        eON_AppendShaderCompileMessage(local_a4,"uniform mat4 WorldTransforms3;\n",pcVar7);
      }
    }
  }
  eON_AppendShaderCompileMessage(&local_28,"\n\nvoid main( void )\n{\n",pcVar7,pcVar26);
  uVar18 = *param_2;
  if ((uVar18 & 0x10000) != 0) {
    eON_AppendShaderCompileMessage(&local_28,"\teON_Varyings[0] = vec4(0.0);\n",pcVar7,pcVar26);
    eON_AppendShaderCompileMessage(&local_28,"\teON_Varyings[1] = vec4(0.0);\n");
    eON_AppendShaderCompileMessage(&local_28,"\teON_Varyings[2] = vec4(0.0);\n");
    eON_AppendShaderCompileMessage(&local_28,"\teON_Varyings[3] = vec4(0.0);\n");
    eON_AppendShaderCompileMessage(&local_28,"\teON_Varyings[4] = vec4(0.0);\n");
    eON_AppendShaderCompileMessage(&local_28,"\teON_Varyings[5] = vec4(0.0);\n");
    eON_AppendShaderCompileMessage(&local_28,"\teON_Varyings[6] = vec4(0.0);\n");
    eON_AppendShaderCompileMessage(&local_28,"\teON_Varyings[7] = vec4(0.0);\n");
    eON_AppendShaderCompileMessage(&local_28,"\teON_Varyings[8] = vec4(0.0);\n");
    eON_AppendShaderCompileMessage(&local_28,"\teON_Varyings[9] = vec4(0.0);\n");
    eON_AppendShaderCompileMessage(&local_28,"\teON_VaryingFog = 0.0;\n");
    eON_AppendShaderCompileMessage(&local_28,"\n");
    uVar18 = *param_2;
  }
  if ((uVar18 & 1) == 0) {
    if ((uVar18 & 0x100) != 0) goto LAB_040beef9;
    cVar10 = '\0';
    if (*(byte *)((int)param_2 + 5) == 0) goto LAB_040bee0a;
LAB_040bfa97:
    if ((cVar10 != '\0') || (bVar4 = false, (uVar18 & 0x20) != 0)) {
      ppuVar13 = (undefined **)&DAT_04328763;
      if ((uVar18 & 0x20000) == 0) {
        ppuVar13 = &PTR_DAT_042e7930;
      }
      eON_AppendShaderCompileMessage
                (&local_28,"\tvec4 eyeCoordPosition = %sModelViewMatrix * %s;\n",ppuVar13,ppuVar12);
      eON_AppendShaderCompileMessage
                (&local_28,"\tvec3 eyeCoordPos3 = eyeCoordPosition.xyz / eyeCoordPosition.w;\n");
      bVar4 = true;
      uVar18 = *param_2;
    }
    ppuVar13 = &PTR_DAT_042e8492;
    if ((uVar18 & 0x20000) == 0) {
      ppuVar13 = (undefined **)0x42dd794;
    }
    ppuVar15 = ppuVar12;
    eON_AppendShaderCompileMessage
              (&local_28,"\tvec4 position = WorldTransforms%s * eON_AttrBlendWeight0.x * %s;\n",
               ppuVar13,ppuVar12);
    bVar3 = false;
    if (cVar10 != '\0') {
      ppuVar13 = &PTR_DAT_042e8492;
      if ((*param_2 & 0x20000) == 0) {
        ppuVar13 = (undefined **)0x42dd794;
      }
      eON_AppendShaderCompileMessage
                (&local_28,
                 "\tvec4 normal = WorldTransforms%s * eON_AttrBlendWeight0.x * vec4(eON_AttrNormal0, 1.0);\n"
                 ,ppuVar13,ppuVar15);
      bVar3 = true;
    }
    if (*(byte *)((int)param_2 + 5) == 1) {
      ppuVar13 = &PTR_DAT_042e76c6;
      if ((*param_2 & 0x20000) == 0) {
        ppuVar13 = (undefined **)0x439ca4d;
      }
      pcVar26 = (char *)ppuVar12;
      eON_AppendShaderCompileMessage
                (&local_28,
                 "\tposition += WorldTransforms%s * ( 1.0 - eON_AttrBlendWeight0.x ) * %s;\n",
                 ppuVar13,ppuVar12);
      if (cVar10 != '\0') {
        ppuVar13 = &PTR_DAT_042e76c6;
        if ((*param_2 & 0x20000) == 0) {
          ppuVar13 = (undefined **)0x439ca4d;
        }
        eON_AppendShaderCompileMessage
                  (&local_28,
                   "\tnormal += WorldTransforms%s * ( 1.0 - eON_AttrBlendWeight0.x ) * vec4(eON_AttrNormal0, 1.0);\n"
                   ,ppuVar13,pcVar26);
        goto LAB_040bfca2;
      }
    }
    else if (*(byte *)((int)param_2 + 5) == 2) {
      ppuVar13 = &PTR_DAT_042e76c6;
      if ((*param_2 & 0x20000) == 0) {
        ppuVar13 = (undefined **)0x439ca4d;
      }
      eON_AppendShaderCompileMessage
                (&local_28,"\tposition += WorldTransforms%s * eON_AttrBlendWeight0.y * %s;\n",
                 ppuVar13,ppuVar12);
      ppuVar13 = &PTR_DAT_042e76e5;
      if ((*param_2 & 0x20000) == 0) {
        ppuVar13 = (undefined **)0x430a836;
      }
      pcVar26 = (char *)ppuVar12;
      eON_AppendShaderCompileMessage
                (&local_28,
                 "\tposition += WorldTransforms%s * ( 1.0 - eON_AttrBlendWeight0.x - eON_AttrBlendWeight0.y ) * %s;\n"
                 ,ppuVar13,ppuVar12);
      if (cVar10 != '\0') {
        ppuVar13 = &PTR_DAT_042e76c6;
        if ((*param_2 & 0x20000) == 0) {
          ppuVar13 = (undefined **)0x439ca4d;
        }
        eON_AppendShaderCompileMessage
                  (&local_28,
                   "\tnormal += WorldTransforms%s * eON_AttrBlendWeight0.y * vec4(eON_AttrNormal0, 1.0);\n"
                   ,ppuVar13,pcVar26);
        ppuVar13 = &PTR_DAT_042e76e5;
        if ((*param_2 & 0x20000) == 0) {
          ppuVar13 = (undefined **)0x430a836;
        }
        eON_AppendShaderCompileMessage
                  (&local_28,
                   "\tnormal += WorldTransforms%s * ( 1.0 - eON_AttrBlendWeight0.x - eON_AttrBlendWeight0.y ) * vec4(eON_AttrNormal0, 1.0);\n"
                   ,ppuVar13,pcVar26);
        goto LAB_040bfca2;
      }
    }
    else {
      ppuVar13 = &PTR_DAT_042e76c6;
      if ((*param_2 & 0x20000) == 0) {
        ppuVar13 = (undefined **)0x439ca4d;
      }
      eON_AppendShaderCompileMessage
                (&local_28,"\tposition += WorldTransforms%s * eON_AttrBlendWeight0.y * %s;\n",
                 ppuVar13,ppuVar12);
      ppuVar13 = &PTR_DAT_042e76e5;
      if ((*param_2 & 0x20000) == 0) {
        ppuVar13 = (undefined **)0x430a836;
      }
      eON_AppendShaderCompileMessage
                (&local_28,"\tposition += WorldTransforms%s * eON_AttrBlendWeight0.z * %s;\n",
                 ppuVar13,ppuVar12);
      ppuVar13 = &PTR_DAT_042e7704;
      if ((*param_2 & 0x20000) == 0) {
        ppuVar13 = (undefined **)0x42f60aa;
      }
      pcVar26 = (char *)ppuVar12;
      eON_AppendShaderCompileMessage
                (&local_28,
                 "\tposition += WorldTransforms%s * ( 1.0 - eON_AttrBlendWeight0.x - eON_AttrBlendWeight0.y - eON_AttrBlendWeight0.z ) * %s;\n"
                 ,ppuVar13,ppuVar12);
      if (cVar10 != '\0') {
        ppuVar13 = &PTR_DAT_042e76c6;
        if ((*param_2 & 0x20000) == 0) {
          ppuVar13 = (undefined **)0x439ca4d;
        }
        eON_AppendShaderCompileMessage
                  (&local_28,
                   "\tnormal += WorldTransforms%s * eON_AttrBlendWeight0.y * vec4(eON_AttrNormal0, 1.0);\n"
                   ,ppuVar13,pcVar26);
        ppuVar13 = &PTR_DAT_042e76e5;
        if ((*param_2 & 0x20000) == 0) {
          ppuVar13 = (undefined **)0x430a836;
        }
        eON_AppendShaderCompileMessage
                  (&local_28,
                   "\tnormal += WorldTransforms%s * eON_AttrBlendWeight0.z * vec4(eON_AttrNormal0, 1.0);\n"
                   ,ppuVar13,pcVar26);
        ppuVar13 = &PTR_DAT_042e7704;
        if ((*param_2 & 0x20000) == 0) {
          ppuVar13 = (undefined **)0x42f60aa;
        }
        eON_AppendShaderCompileMessage
                  (&local_28,
                   "\tnormal += WorldTransforms%s * ( 1.0 - eON_AttrBlendWeight0.x - eON_AttrBlendWeight0.y - eON_AttrBlendWeight0.z ) * vec4(eON_AttrNormal0, 1.0);\n"
                   ,ppuVar13,pcVar26);
LAB_040bfca2:
        bVar3 = true;
      }
    }
    eON_AppendShaderCompileMessage
              (&local_28,"\tposition = ViewTransform * position;\n",ppuVar13,pcVar26);
    ppuVar13 = (undefined **)&DAT_04328763;
    if ((*param_2 & 0x20000) == 0) {
      ppuVar13 = &PTR_DAT_042e7930;
    }
    eON_AppendShaderCompileMessage
              (&local_28,"\tgl_Position = %sProjectionMatrix * position;\n",ppuVar13,pcVar26);
    if (cVar10 != '\0') {
      eON_AppendShaderCompileMessage
                (&local_28,"\tnormal = ViewTransform * normal;\n",ppuVar13,pcVar26);
    }
    bVar21 = false;
    bVar2 = false;
    uVar18 = *param_2;
    if ((uVar18 & 0x20) != 0) {
      if ((uVar18 & 0x4000) == 0) {
        bVar21 = true;
        if ((uVar18 & 0x3000) != 0) {
          if ((uVar18 & 0x800) == 0) {
            eON_AppendShaderCompileMessage
                      (&local_28,"\tfloat fogCoord = abs( eyeCoordPos3.z );\n",ppuVar13);
            bVar21 = false;
            bVar2 = true;
            uVar18 = *param_2;
          }
          else {
            eON_AppendShaderCompileMessage
                      (&local_28,"\tfloat fogCoord = length( eyeCoordPos3 );\n",ppuVar13);
            bVar2 = true;
            uVar18 = *param_2;
            bVar21 = false;
          }
        }
      }
      else {
        pcVar6 = "eON_VaryingFog";
        if ((uVar18 & 0x10000) == 0) {
          pcVar6 = "gl_FogFragCoord";
        }
        eON_AppendShaderCompileMessage(&local_28,"\t%s = length( eyeCoordPos3 );\n",pcVar6);
        bVar2 = false;
        uVar18 = *param_2;
        ppuVar13 = (undefined **)pcVar6;
      }
    }
  }
  else if ((uVar18 & 0x100) == 0) {
    cVar10 = (*(byte *)((int)param_2 + 0xe) & 0xf) +
             (*(byte *)((int)param_2 + 0xd) >> 4) + (*(byte *)((int)param_2 + 0xd) & 0xf);
    if (*(byte *)((int)param_2 + 5) != 0) goto LAB_040bfa97;
LAB_040bee0a:
    if ((cVar10 != '\0') || (bVar4 = false, (uVar18 & 0x20) != 0)) {
      ppuVar13 = (undefined **)&DAT_04328763;
      if ((uVar18 & 0x20000) == 0) {
        ppuVar13 = &PTR_DAT_042e7930;
      }
      eON_AppendShaderCompileMessage
                (&local_28,"\tvec4 eyeCoordPosition = %sModelViewMatrix * %s;\n",ppuVar13,ppuVar12);
      eON_AppendShaderCompileMessage
                (&local_28,"\tvec3 eyeCoordPos3 = eyeCoordPosition.xyz / eyeCoordPosition.w;\n");
      bVar4 = true;
      uVar18 = *param_2;
    }
    ppuVar13 = (undefined **)&DAT_04328763;
    if ((uVar18 & 0x20000) == 0) {
      ppuVar13 = &PTR_DAT_042e7930;
    }
    pcVar26 = (char *)ppuVar12;
    eON_AppendShaderCompileMessage
              (&local_28,"\tgl_Position = %sModelViewProjectionMatrix * %s;\n",ppuVar13,ppuVar12);
    uVar18 = *param_2;
    if ((uVar18 & 0x20) == 0) {
      bVar3 = false;
      bVar21 = false;
      bVar2 = false;
    }
    else if ((uVar18 & 0x4000) == 0) {
      if ((uVar18 & 0x3000) == 0) {
        bVar3 = false;
        bVar21 = true;
        bVar2 = false;
      }
      else if ((uVar18 & 0x800) == 0) {
        eON_AppendShaderCompileMessage
                  (&local_28,"\tfloat fogCoord = abs( eyeCoordPos3.z );\n",ppuVar13,pcVar26);
        bVar3 = false;
        bVar21 = false;
        bVar2 = true;
        uVar18 = *param_2;
      }
      else {
        eON_AppendShaderCompileMessage
                  (&local_28,"\tfloat fogCoord = length( eyeCoordPos3 );\n",ppuVar13,pcVar26);
        bVar3 = false;
        bVar2 = true;
        uVar18 = *param_2;
        bVar21 = false;
      }
    }
    else {
      pcVar6 = "eON_VaryingFog";
      if ((uVar18 & 0x10000) == 0) {
        pcVar6 = "gl_FogFragCoord";
      }
      eON_AppendShaderCompileMessage(&local_28,"\t%s = length( eyeCoordPos3 );\n",pcVar6,pcVar26);
      bVar3 = false;
      bVar21 = false;
      bVar2 = false;
      uVar18 = *param_2;
      ppuVar13 = (undefined **)pcVar6;
    }
  }
  else {
LAB_040beef9:
    if ((uVar18 & 0x20000) == 0) {
      eON_AppendShaderCompileMessage
                (local_a4,
                 "uniform vec4 ViewportSizes;\t// For scaling D3D transformed vertices to OpenGL way\n"
                 ,pcVar7);
    }
    ppuVar13 = ppuVar12;
    eON_AppendShaderCompileMessage(&local_28,"\tgl_Position = %s;\n",ppuVar12);
    eON_AppendShaderCompileMessage
              (&local_28,"\tgl_Position.xy = gl_Position.xy - ViewportSizes.xy;\n");
    eON_AppendShaderCompileMessage
              (&local_28,"\tgl_Position.xy = gl_Position.xy / ViewportSizes.zw + vec2(-1.0,1.0);\n")
    ;
    eON_AppendShaderCompileMessage(&local_28,"\tfloat rhw = 1.0 / gl_Position.w;\n");
    eON_AppendShaderCompileMessage(&local_28,"\tgl_Position.xyz *= rhw;\n");
    eON_AppendShaderCompileMessage(&local_28,"\tgl_Position.w = rhw;\n");
    uVar18 = *param_2;
    if ((uVar18 & 0x20) != 0) {
      if ((uVar18 & 0x4000) == 0) {
        if ((uVar18 & 0x3000) == 0) {
          cVar10 = '\0';
          bVar21 = true;
          bVar4 = false;
          bVar3 = false;
          bVar2 = false;
        }
        else {
          eON_AppendShaderCompileMessage(&local_28,"\tfloat fogCoord = abs( gl_Position.z );\n");
          bVar4 = false;
          bVar21 = false;
          cVar10 = '\0';
          bVar3 = false;
          bVar2 = true;
          uVar18 = *param_2;
        }
        goto LAB_040bef9c;
      }
      pcVar6 = "eON_VaryingFog";
      if ((uVar18 & 0x10000) == 0) {
        pcVar6 = "gl_FogFragCoord";
      }
      eON_AppendShaderCompileMessage(&local_28,"\t%s = abs( gl_Position.z );\n",pcVar6);
      uVar18 = *param_2;
      ppuVar13 = (undefined **)pcVar6;
    }
    cVar10 = '\0';
    bVar21 = false;
    bVar4 = false;
    bVar3 = false;
    bVar2 = false;
  }
LAB_040bef9c:
  pcVar6 = (char *)ppuVar13;
  if ((uVar18 & 0x20000) == 0) {
    eON_AppendShaderCompileMessage(local_a4,"uniform vec4 PositionFix;\n",ppuVar13,pcVar26);
    pcVar6 = (char *)ppuVar13;
  }
  eON_AppendShaderCompileMessage(&local_28,"\tgl_Position.y = -gl_Position.y;\n",pcVar6,pcVar26);
  eON_AppendShaderCompileMessage(&local_28,"\tgl_Position.xy += gl_Position.ww * PositionFix.zw;\n")
  ;
  eON_AppendShaderCompileMessage
            (&local_28,"\tgl_Position.z = gl_Position.z * 2.0 - gl_Position.w;\n");
  if (bVar21) {
    uVar18 = *param_2;
    if ((uVar18 & 0x400) != 0) {
      pcVar6 = "eON_VaryingFog";
      if ((uVar18 & 0x10000) == 0) {
        pcVar6 = "gl_FogFragCoord";
      }
      eON_AppendShaderCompileMessage
                (&local_28,"\t%s = clamp( eON_AttrColor1.a, 0.0, 1.0 );\n",pcVar6);
      uVar18 = *param_2;
    }
  }
  else {
    uVar18 = *param_2;
  }
  local_a8 = -1;
  local_9c = -1;
  if ((uVar18 & 0x10000) != 0) {
    ppuVar13 = &PTR_DAT_0435a044;
    if ((uVar18 & 0x20000) == 0) {
      ppuVar13 = (undefined **)"varying";
    }
    eON_AppendShaderCompileMessage(local_a4,"%s vec4 eON_Varyings[10];\n",ppuVar13);
    eON_AppendShaderCompileMessage(local_a4,"%s float eON_VaryingFog;\n",ppuVar13);
    local_9c = -1;
    uVar18 = param_2[2];
    if ((uVar18 & 0xf) == 0xf) {
      *(undefined1 *)param_3 = 0;
      *(undefined1 *)((int)param_3 + 1) = 0;
      local_9c = 0;
      uVar18 = param_2[2];
    }
    local_a8 = -1;
    if ((uVar18 >> 4 & 0xf) == 0xf) {
      if (local_9c == -1) {
        local_a8 = local_9c;
        *(undefined1 *)param_3 = 0;
        *(undefined1 *)((int)param_3 + 1) = 1;
        local_9c = 1;
        uVar18 = param_2[2];
      }
      else {
        *(undefined1 *)((int)param_3 + 2) = 1;
        *(undefined1 *)((int)param_3 + 3) = 1;
        local_a8 = 1;
        local_9c = 0;
        uVar18 = param_2[2];
      }
    }
    if ((uVar18 >> 8 & 0xf) == 0xf) {
      if (local_9c == -1) {
        *(undefined1 *)param_3 = 0;
        *(undefined1 *)((int)param_3 + 1) = 2;
        local_9c = 2;
        uVar18 = param_2[2];
        goto LAB_040bf0a7;
      }
      if (local_a8 == -1) {
        *(undefined1 *)((int)param_3 + 2) = 1;
        *(undefined1 *)((int)param_3 + 3) = 2;
        local_a8 = 2;
        uVar18 = param_2[2];
        goto LAB_040bf0a7;
      }
    }
    else {
LAB_040bf0a7:
      if ((uVar18 >> 0xc & 0xf) == 0xf) {
        if (local_9c == -1) {
          *(undefined1 *)param_3 = 0;
          *(undefined1 *)((int)param_3 + 1) = 3;
          local_9c = 3;
          uVar18 = param_2[2];
        }
        else {
          if (local_a8 != -1) goto LAB_040bf11b;
          *(undefined1 *)((int)param_3 + 2) = 1;
          *(undefined1 *)((int)param_3 + 3) = 3;
          local_a8 = 3;
          uVar18 = param_2[2];
        }
      }
      if ((uVar18 >> 0x10 & 0xf) == 0xf) {
        if (local_9c == -1) {
          *(undefined1 *)param_3 = 0;
          *(undefined1 *)((int)param_3 + 1) = 4;
          local_9c = 4;
          uVar18 = param_2[2];
        }
        else {
          if (local_a8 != -1) goto LAB_040bf11b;
          *(undefined1 *)((int)param_3 + 2) = 1;
          *(undefined1 *)((int)param_3 + 3) = 4;
          local_a8 = 4;
          uVar18 = param_2[2];
        }
      }
      if ((uVar18 >> 0x14 & 0xf) == 0xf) {
        if (local_9c == -1) {
          *(undefined1 *)param_3 = 0;
          *(undefined1 *)((int)param_3 + 1) = 5;
          local_9c = 5;
          uVar18 = param_2[2];
        }
        else {
          if (local_a8 != -1) goto LAB_040bf11b;
          *(undefined1 *)((int)param_3 + 2) = 1;
          *(undefined1 *)((int)param_3 + 3) = 5;
          local_a8 = 5;
          uVar18 = param_2[2];
        }
      }
      if ((uVar18 >> 0x18 & 0xf) == 0xf) {
        if (local_9c == -1) {
          *(undefined1 *)param_3 = 0;
          *(undefined1 *)((int)param_3 + 1) = 6;
          local_9c = 6;
          uVar18 = param_2[2];
        }
        else {
          if (local_a8 != -1) goto LAB_040bf11b;
          *(undefined1 *)((int)param_3 + 2) = 1;
          *(undefined1 *)((int)param_3 + 3) = 6;
          local_a8 = 6;
          uVar18 = param_2[2];
        }
      }
      if (uVar18 >> 0x1c == 0xf) {
        if (local_9c == -1) {
          *(undefined1 *)param_3 = 0;
          *(undefined1 *)((int)param_3 + 1) = 7;
          local_9c = 7;
        }
        else {
          if (local_a8 != -1) goto LAB_040bf11b;
          *(undefined1 *)((int)param_3 + 2) = 1;
          *(undefined1 *)((int)param_3 + 3) = 7;
          local_a8 = 7;
        }
      }
      pcVar26 = 
      "char* VertexShaderCompiler::GenerateProgram(const VertexShaderConfig&, ColorRegisterAssignment*)"
      ;
      ppuVar13 = (undefined **)0x2b4;
      FUN_0400a810("i < 8",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                   ,0x2b4,
                   "char* VertexShaderCompiler::GenerateProgram(const VertexShaderConfig&, ColorRegisterAssignment*)"
                  );
    }
LAB_040bf11b:
    uVar18 = *param_2;
    pcVar6 = (char *)ppuVar13;
  }
  if (((uVar18 & 1) == 0) || ((uVar18 & 0x100) != 0)) {
    if ((uVar18 & 0x200) == 0) {
      pcVar6 = "gl_FrontColor";
      if ((uVar18 & 0x10000) != 0) {
        pcVar6 = "vec4(0.0)";
        ppuVar13 = &PTR_s_eON_Varyings_0__042ff180;
        puVar17 = local_84;
        for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar17 = (uint)*ppuVar13;
          ppuVar13 = ppuVar13 + (uint)bVar25 * -2 + 1;
          puVar17 = puVar17 + (uint)bVar25 * -2 + 1;
        }
        if (local_9c != -1) {
          pcVar6 = (char *)local_84[local_9c * 2];
        }
      }
      eON_AppendShaderCompileMessage(&local_28,"\t%s = vec4( 1.0 );\n",pcVar6);
      uVar18 = *param_2;
      if ((uVar18 & 0x10000) == 0) {
        eON_AppendShaderCompileMessage(&local_28,"\tgl_BackColor = vec4( 1.0 );\n",pcVar6);
        goto LAB_040c0747;
      }
    }
    else {
      pcVar6 = "in";
      if ((uVar18 & 0x20000) == 0) {
        pcVar6 = "attribute";
      }
                    /* try { // try from 040c0068 to 040c11f0 has its CatchHandler @ 040c1223 */
      eON_AppendShaderCompileMessage(local_a4,"%s vec4 eON_AttrColor0;\n",pcVar6);
      pcVar6 = "gl_FrontColor";
      if ((*param_2 & 0x10000) != 0) {
        pcVar6 = "vec4(0.0)";
        ppuVar13 = &PTR_s_eON_Varyings_0__042ff180;
        puVar17 = local_84;
        for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar17 = (uint)*ppuVar13;
          ppuVar13 = ppuVar13 + (uint)bVar25 * -2 + 1;
          puVar17 = puVar17 + (uint)bVar25 * -2 + 1;
        }
        if (local_9c != -1) {
          pcVar6 = (char *)local_84[local_9c * 2];
        }
      }
      eON_AppendShaderCompileMessage(&local_28,"\t%s = eON_AttrColor0.bgra;\n",pcVar6);
      uVar18 = *param_2;
      if ((uVar18 & 0x10000) == 0) {
        eON_AppendShaderCompileMessage(&local_28,"\tgl_BackColor = eON_AttrColor0.bgra;\n",pcVar6);
LAB_040c0747:
        uVar18 = *param_2;
      }
    }
    if ((uVar18 & 0x400) == 0) {
      pcVar6 = "gl_FrontSecondaryColor";
      if ((uVar18 & 0x10000) != 0) {
        pcVar6 = "vec4(0.0)";
        ppuVar13 = &PTR_s_eON_Varyings_0__042ff180;
        puVar17 = local_84;
        for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar17 = (uint)*ppuVar13;
          ppuVar13 = ppuVar13 + (uint)bVar25 * -2 + 1;
          puVar17 = puVar17 + (uint)bVar25 * -2 + 1;
        }
        if (local_a8 != -1) {
          pcVar6 = (char *)local_84[local_a8 * 2];
        }
      }
      eON_AppendShaderCompileMessage(&local_28,"\t%s = vec4( 0.0 );\n",pcVar6);
      uVar18 = *param_2;
      if ((uVar18 & 0x10000) == 0) {
        eON_AppendShaderCompileMessage(&local_28,"\tgl_BackSecondaryColor = vec4( 0.0 );\n",pcVar6);
        uVar18 = *param_2;
      }
    }
    else {
      pcVar6 = "in";
      if ((uVar18 & 0x20000) == 0) {
        pcVar6 = "attribute";
      }
      eON_AppendShaderCompileMessage(local_a4,"%s vec4 eON_AttrColor1;\n",pcVar6);
      pcVar6 = "gl_FrontSecondaryColor";
      if ((*param_2 & 0x10000) != 0) {
        pcVar6 = "vec4(0.0)";
        ppuVar13 = &PTR_s_eON_Varyings_0__042ff180;
        puVar17 = local_84;
        for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar17 = (uint)*ppuVar13;
          ppuVar13 = ppuVar13 + (uint)bVar25 * -2 + 1;
          puVar17 = puVar17 + (uint)bVar25 * -2 + 1;
        }
        if (local_a8 != -1) {
          pcVar6 = (char *)local_84[local_a8 * 2];
        }
      }
      eON_AppendShaderCompileMessage(&local_28,"\t%s = eON_AttrColor1.bgra;\n",pcVar6);
      uVar18 = *param_2;
      if ((uVar18 & 0x10000) == 0) {
        eON_AppendShaderCompileMessage
                  (&local_28,"\tgl_BackSecondaryColor = eON_AttrColor1.bgra;\n",pcVar6);
        goto LAB_040bf806;
      }
    }
  }
  else {
    pcVar7 = "gl_FrontMaterial";
    if ((uVar18 & 0x20000) != 0) {
      pcVar7 = "Material";
    }
    if (cVar10 == '\0') {
      bVar21 = false;
      bVar19 = false;
      if ((uVar18 & 0x200) != 0) {
        bVar5 = (byte)param_2[3];
        bVar19 = (bVar5 & 3) == 1;
        if (bVar19) {
          eON_AppendShaderCompileMessage
                    (&local_28,"\tvec4 materialAmbient = eON_AttrColor0.bgra;\n",pcVar6);
          bVar5 = (byte)param_2[3];
        }
        if ((bVar5 >> 4 & 3) == 1) {
          eON_AppendShaderCompileMessage
                    (&local_28,"\tvec4 materialEmissive = eON_AttrColor0.bgra;\n",pcVar6);
          bVar21 = true;
        }
        else {
          if (!bVar19) {
            bVar21 = false;
            uVar18 = *param_2;
            goto LAB_040bfded;
          }
          bVar21 = false;
        }
        pcVar6 = &DAT_0433e9db;
        if ((*param_2 & 0x20000) == 0) {
          pcVar6 = "attribute";
        }
        eON_AppendShaderCompileMessage(local_a4,"%s vec4 eON_AttrColor0;\n",pcVar6);
        uVar18 = *param_2;
      }
LAB_040bfded:
      if ((uVar18 & 0x400) != 0) {
        bVar5 = (byte)param_2[3];
        bVar20 = (bVar5 & 3) == 2;
        if (bVar20) {
          eON_AppendShaderCompileMessage
                    (&local_28,"\tvec4 materialAmbient = eON_AttrColor1.bgra;\n",pcVar6);
          bVar19 = true;
          bVar5 = (byte)param_2[3];
        }
        if ((bVar5 >> 4 & 3) == 2) {
          eON_AppendShaderCompileMessage
                    (&local_28,"\tvec4 materialEmissive = eON_AttrColor1.bgra;\n",pcVar6);
          bVar21 = true;
        }
        else if (!bVar20) goto LAB_040bfe1f;
        pcVar6 = "in";
        if ((*param_2 & 0x20000) == 0) {
          pcVar6 = "attribute";
        }
        eON_AppendShaderCompileMessage(local_a4,"%s vec4 eON_AttrColor1;\n",pcVar6);
      }
LAB_040bfe1f:
      if (!bVar19) {
        eON_AppendShaderCompileMessage(&local_28,"\tvec4 materialAmbient = %s.ambient;\n",pcVar7);
      }
      if (!bVar21) {
        eON_AppendShaderCompileMessage(&local_28,"\tvec4 materialEmissive = %s.emission;\n",pcVar7);
      }
      pcVar6 = "LightModelAmbient";
      if ((*param_2 & 0x20000) == 0) {
        pcVar6 = "gl_LightModel.ambient";
      }
      eON_AppendShaderCompileMessage
                (&local_28,
                 "\tvec4 summaryNoLightsColor = clamp( %s*materialAmbient + materialEmissive, 0.0, 1.0 );\n"
                 ,pcVar6);
      pcVar6 = "gl_FrontColor";
      if ((*param_2 & 0x10000) != 0) {
        pcVar6 = "vec4(0.0)";
        ppuVar13 = &PTR_s_eON_Varyings_0__042ff180;
        puVar17 = local_84;
        for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar17 = (uint)*ppuVar13;
          ppuVar13 = ppuVar13 + (uint)bVar25 * -2 + 1;
          puVar17 = puVar17 + (uint)bVar25 * -2 + 1;
        }
        if (local_9c != -1) {
          pcVar6 = (char *)local_84[local_9c * 2];
        }
      }
      eON_AppendShaderCompileMessage(&local_28,"\t%s = summaryNoLightsColor;\n",pcVar6);
      pcVar6 = "gl_FrontSecondaryColor";
      if ((*param_2 & 0x10000) != 0) {
        pcVar6 = "vec4(0.0)";
        ppuVar13 = &PTR_s_eON_Varyings_0__042ff180;
        puVar17 = local_84;
        for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar17 = (uint)*ppuVar13;
          ppuVar13 = ppuVar13 + (uint)bVar25 * -2 + 1;
          puVar17 = puVar17 + (uint)bVar25 * -2 + 1;
        }
        if (local_a8 != -1) {
          pcVar6 = (char *)local_84[local_a8 * 2];
        }
      }
      eON_AppendShaderCompileMessage(&local_28,"\t%s = vec4( 0.0 );\n",pcVar6);
      uVar18 = *param_2;
      if ((uVar18 & 0x10000) == 0) {
        eON_AppendShaderCompileMessage(&local_28,"\tgl_BackColor = summaryNoLightsColor;\n",pcVar6);
        eON_AppendShaderCompileMessage(&local_28,"\tgl_BackSecondaryColor = vec4( 0.0 );\n");
        goto LAB_040bf806;
      }
    }
    else {
      if (*(byte *)((int)param_2 + 5) == 0) {
        eON_AppendShaderCompileMessage(&local_28,"\tvec3 normal = eON_AttrNormal0;\n",pcVar6);
        ppuVar13 = &PTR_DAT_042e7930;
        pcVar6 = "normalize";
        if ((*param_2 & 0x20000) != 0) {
          ppuVar13 = (undefined **)&DAT_04328763;
        }
        if ((*param_2 & 0x40) == 0) {
          pcVar6 = &DAT_04328763;
        }
        eON_AppendShaderCompileMessage
                  (&local_28,"\tnormal.xyz = %s( %sNormalMatrix * normal.xyz );\n",pcVar6,ppuVar13);
        bVar3 = true;
        uVar18 = *param_2;
        pcVar26 = (char *)ppuVar13;
      }
      else if ((uVar18 & 0x40) != 0) {
        eON_AppendShaderCompileMessage(&local_28,"\tnormal.xyz = normalize( normal.xyz );\n",pcVar6)
        ;
        uVar18 = *param_2;
      }
      if ((uVar18 & 0x200) == 0) {
        bVar1 = false;
        bVar21 = false;
        bVar19 = false;
        bVar20 = false;
      }
      else {
        bVar5 = (byte)param_2[3];
        bVar19 = (bVar5 & 3) == 1;
        if (bVar19) {
          eON_AppendShaderCompileMessage
                    (&local_28,"\tvec4 materialAmbient = eON_AttrColor0.bgra;\n",pcVar6,pcVar26);
          bVar5 = (byte)param_2[3];
        }
        bVar20 = (bVar5 >> 2 & 3) == 1;
        if (bVar20) {
          eON_AppendShaderCompileMessage
                    (&local_28,"\tvec4 materialDiffuse = eON_AttrColor0.bgra;\n",pcVar6,pcVar26);
          bVar5 = (byte)param_2[3];
        }
        bVar21 = (bVar5 >> 4 & 3) == 1;
        if (bVar21) {
          eON_AppendShaderCompileMessage
                    (&local_28,"\tvec4 materialEmissive = eON_AttrColor0.bgra;\n",pcVar6,pcVar26);
          bVar5 = (byte)param_2[3];
        }
        if (bVar5 >> 6 == 1) {
          eON_AppendShaderCompileMessage
                    (&local_28,"\tvec4 materialSpecular = eON_AttrColor0.bgra;\n");
          bVar1 = true;
        }
        else {
          if (!bVar21 && (!bVar20 && !bVar19)) {
            bVar1 = false;
            uVar18 = *param_2;
            goto LAB_040bf1e1;
          }
          bVar1 = false;
        }
        pcVar6 = &DAT_0433e9db;
        if ((*param_2 & 0x20000) == 0) {
          pcVar6 = "attribute";
        }
        eON_AppendShaderCompileMessage(local_a4,"%s vec4 eON_AttrColor0;\n",pcVar6);
        uVar18 = *param_2;
      }
LAB_040bf1e1:
      if ((uVar18 & 0x400) != 0) {
        bVar5 = (byte)param_2[3];
        bVar22 = (bVar5 & 3) == 2;
        if (bVar22) {
          eON_AppendShaderCompileMessage
                    (&local_28,"\tvec4 materialAmbient = eON_AttrColor1.bgra;\n",pcVar6,pcVar26);
          bVar19 = true;
          bVar5 = (byte)param_2[3];
        }
        bVar23 = (bVar5 >> 2 & 3) == 2;
        if (bVar23) {
          eON_AppendShaderCompileMessage
                    (&local_28,"\tvec4 materialDiffuse = eON_AttrColor1.bgra;\n",pcVar6,pcVar26);
          bVar20 = true;
          bVar5 = (byte)param_2[3];
        }
        bVar24 = (bVar5 >> 4 & 3) == 2;
        if (bVar24) {
          eON_AppendShaderCompileMessage
                    (&local_28,"\tvec4 materialEmissive = eON_AttrColor1.bgra;\n",pcVar6);
          bVar21 = true;
          bVar5 = (byte)param_2[3];
        }
        if (bVar5 >> 6 == 2) {
          eON_AppendShaderCompileMessage
                    (&local_28,"\tvec4 materialSpecular = eON_AttrColor1.bgra;\n");
          bVar1 = true;
        }
        else if (!bVar24 && (!bVar23 && !bVar22)) goto LAB_040bf232;
        pcVar6 = "in";
        if ((*param_2 & 0x20000) == 0) {
          pcVar6 = "attribute";
        }
        eON_AppendShaderCompileMessage(local_a4,"%s vec4 eON_AttrColor1;\n",pcVar6);
      }
LAB_040bf232:
      if (!bVar19) {
        eON_AppendShaderCompileMessage
                  (&local_28,"\tvec4 materialAmbient = %s.ambient;\n",pcVar7,pcVar26);
      }
      if (!bVar20) {
        eON_AppendShaderCompileMessage(&local_28,"\tvec4 materialDiffuse = %s.diffuse;\n",pcVar7);
      }
      if (!bVar21) {
        eON_AppendShaderCompileMessage(&local_28,"\tvec4 materialEmissive = %s.emission;\n",pcVar7);
      }
      if (!bVar1) {
        eON_AppendShaderCompileMessage(&local_28,"\tvec4 materialSpecular = %s.specular;\n",pcVar7);
      }
      pcVar6 = "LightModelAmbient";
      if ((*param_2 & 0x20000) == 0) {
        pcVar6 = "gl_LightModel.ambient";
      }
      eON_AppendShaderCompileMessage(&local_28,"\tvec4 ambientLighting = %s;\n",pcVar6);
      eON_AppendShaderCompileMessage(&local_28,"\tvec4 diffuseLighting = vec4( 0.0 );\n");
      eON_AppendShaderCompileMessage(&local_28,"\tvec4 specularLighting = vec4( 0.0 );\n");
      if ((*param_2 & 2) == 0) {
        eON_AppendShaderCompileMessage
                  (&local_28,"\tvec3 halfwayVectorComponent = vec3( 0.0, 0.0, 1.0 );\n\n",pcVar6);
      }
      else {
        eON_AppendShaderCompileMessage
                  (&local_28,"\tvec3 halfwayVectorComponent = -normalize(eyeCoordPos3);\n\n",pcVar6)
        ;
      }
      pcVar16 = "LightSources";
      if ((*param_2 & 0x20000) == 0) {
        pcVar16 = "gl_LightSource";
      }
      bVar5 = *(byte *)((int)param_2 + 0xd);
      ppuVar13 = (undefined **)0x0;
      if ((bVar5 & 0xf) != 0) {
        ppuVar13 = (undefined **)0x0;
        do {
          eON_AppendShaderCompileMessage
                    (&local_28,"\t{\t// Contribution from light %d (spotlight)\n",ppuVar13,pcVar26);
          eON_AppendShaderCompileMessage
                    (&local_28,"\t\tvec3 surfaceToLight = %s[%d].position.xyz - eyeCoordPos3;\n",
                     pcVar16,ppuVar13);
          eON_AppendShaderCompileMessage
                    (&local_28,"\t\tfloat lightDistance = length( surfaceToLight );\n");
          eON_AppendShaderCompileMessage
                    (&local_28,"\t\tsurfaceToLight = normalize( surfaceToLight );\n");
          eON_AppendShaderCompileMessage
                    (&local_28,
                     "\t\tfloat attenuation = 1.0 / ( %s[%d].constantAttenuation + lightDistance * ( %s[%d].linearAttenuation + lightDistance * %s[%d].quadraticAttenuation ) );\n"
                     ,pcVar16,ppuVar13,pcVar16,ppuVar13,pcVar16,ppuVar13);
          eON_AppendShaderCompileMessage
                    (&local_28,
                     "\t\tfloat spotDot = dot( -surfaceToLight, normalize( %s[%d].spotDirection ) );\n"
                     ,pcVar16,ppuVar13);
          eON_AppendShaderCompileMessage
                    (&local_28,
                     "\t\tfloat spotlightFactor; if( spotDot < %s[%d].spotCosCutoff ) spotlightFactor = 0.0; else spotlightFactor = pow( spotDot, %s[%d].spotExponent );\n"
                     ,pcVar16,ppuVar13,pcVar16,ppuVar13);
          eON_AppendShaderCompileMessage(&local_28,"\t\tattenuation *= spotlightFactor;\n");
          eON_AppendShaderCompileMessage
                    (&local_28,
                     "\t\tvec3 halfVector = normalize( halfwayVectorComponent + surfaceToLight );\n"
                    );
          eON_AppendShaderCompileMessage
                    (&local_28,
                     "\t\tfloat normDotLightDir = max( 0.0, dot( normal.xyz, surfaceToLight ) );\n")
          ;
          eON_AppendShaderCompileMessage
                    (&local_28,
                     "\t\tfloat normDotHalfway = max( 0.0, dot( normal.xyz, halfVector ) );\n");
          eON_AppendShaderCompileMessage
                    (&local_28,
                     "\t\tfloat powerFactor; if( normDotHalfway == 0.0 ) powerFactor = 0.0; else powerFactor = pow( normDotHalfway, %s.shininess );\n"
                     ,pcVar7);
          eON_AppendShaderCompileMessage
                    (&local_28,"\t\tambientLighting += %s[%d].ambient * attenuation;\n",pcVar16,
                     ppuVar13);
          eON_AppendShaderCompileMessage
                    (&local_28,
                     "\t\tdiffuseLighting += %s[%d].diffuse * normDotLightDir * attenuation;\n",
                     pcVar16,ppuVar13);
          pcVar6 = pcVar16;
          pcVar26 = (char *)ppuVar13;
          eON_AppendShaderCompileMessage
                    (&local_28,
                     "\t\tspecularLighting += %s[%d].specular * powerFactor * attenuation;\n",
                     pcVar16);
          eON_AppendShaderCompileMessage(&local_28,&DAT_042fc047);
          ppuVar13 = (undefined **)((int)ppuVar13 + 1);
          bVar5 = *(byte *)((int)param_2 + 0xd);
        } while ((int)ppuVar13 < (int)(bVar5 & 0xf));
      }
      if (bVar5 >> 4 != 0) {
        local_94 = 0;
        do {
          eON_AppendShaderCompileMessage
                    (&local_28,"\t{\t// Contribution from light %d (directional light)\n",ppuVar13,
                     pcVar26);
          eON_AppendShaderCompileMessage
                    (&local_28,"\t\tvec3 surfaceToLight = normalize( -%s[%d].spotDirection );\n",
                     pcVar16,ppuVar13);
          eON_AppendShaderCompileMessage
                    (&local_28,
                     "\t\tvec3 halfVector = normalize( halfwayVectorComponent + surfaceToLight );\n"
                    );
          eON_AppendShaderCompileMessage
                    (&local_28,
                     "\t\tfloat normDotLightDir = max( 0.0, dot( normal.xyz, surfaceToLight ) );\n")
          ;
          eON_AppendShaderCompileMessage
                    (&local_28,
                     "\t\tfloat normDotHalfway = max( 0.0, dot( normal.xyz, halfVector ) );\n");
          eON_AppendShaderCompileMessage
                    (&local_28,
                     "\t\tfloat powerFactor; if( normDotHalfway == 0.0 ) powerFactor = 0.0; else powerFactor = pow( normDotHalfway, %s.shininess );\n"
                     ,pcVar7);
          eON_AppendShaderCompileMessage
                    (&local_28,"\t\tambientLighting += %s[%d].ambient;\n",pcVar16,ppuVar13);
          eON_AppendShaderCompileMessage
                    (&local_28,"\t\tdiffuseLighting += %s[%d].diffuse * normDotLightDir;\n",pcVar16,
                     ppuVar13);
          pcVar6 = pcVar16;
          pcVar26 = (char *)ppuVar13;
          eON_AppendShaderCompileMessage
                    (&local_28,"\t\tspecularLighting += %s[%d].specular * powerFactor;\n",pcVar16);
          eON_AppendShaderCompileMessage(&local_28,&DAT_042fc047);
          local_94 = local_94 + 1;
          ppuVar13 = (undefined **)((int)ppuVar13 + 1);
        } while (local_94 < (int)(uint)(*(byte *)((int)param_2 + 0xd) >> 4));
      }
      if ((*(byte *)((int)param_2 + 0xe) & 0xf) != 0) {
        local_94 = 0;
        do {
          eON_AppendShaderCompileMessage
                    (&local_28,"\t{\t// Contribution from light %d (point light)\n",ppuVar13,pcVar26
                    );
          eON_AppendShaderCompileMessage
                    (&local_28,"\t\tvec3 surfaceToLight = %s[%d].position.xyz - eyeCoordPos3;\n",
                     pcVar16,ppuVar13);
          eON_AppendShaderCompileMessage
                    (&local_28,"\t\tfloat lightDistance = length( surfaceToLight );\n");
          eON_AppendShaderCompileMessage
                    (&local_28,"\t\tsurfaceToLight = normalize( surfaceToLight );\n");
          eON_AppendShaderCompileMessage
                    (&local_28,
                     "\t\tfloat attenuation = 1.0 / ( %s[%d].constantAttenuation + lightDistance * ( %s[%d].linearAttenuation + lightDistance * %s[%d].quadraticAttenuation ) );\n"
                     ,pcVar16,ppuVar13,pcVar16,ppuVar13,pcVar16,ppuVar13);
          eON_AppendShaderCompileMessage
                    (&local_28,
                     "\t\tvec3 halfVector = normalize( halfwayVectorComponent + surfaceToLight );\n"
                    );
          eON_AppendShaderCompileMessage
                    (&local_28,
                     "\t\tfloat normDotLightDir = max( 0.0, dot( normal.xyz, surfaceToLight ) );\n")
          ;
          eON_AppendShaderCompileMessage
                    (&local_28,
                     "\t\tfloat normDotHalfway = max( 0.0, dot( normal.xyz, halfVector ) );\n");
          eON_AppendShaderCompileMessage
                    (&local_28,
                     "\t\tfloat powerFactor; if( normDotHalfway == 0.0 ) powerFactor = 0.0; else powerFactor = pow( normDotHalfway, %s.shininess );\n"
                     ,pcVar7);
          eON_AppendShaderCompileMessage
                    (&local_28,"\t\tambientLighting += %s[%d].ambient * attenuation;\n",pcVar16,
                     ppuVar13);
          eON_AppendShaderCompileMessage
                    (&local_28,
                     "\t\tdiffuseLighting += %s[%d].diffuse * normDotLightDir * attenuation;\n",
                     pcVar16,ppuVar13);
          pcVar6 = pcVar16;
          pcVar26 = (char *)ppuVar13;
          eON_AppendShaderCompileMessage
                    (&local_28,
                     "\t\tspecularLighting += %s[%d].specular * powerFactor * attenuation;\n",
                     pcVar16);
          eON_AppendShaderCompileMessage(&local_28,&DAT_042fc047);
          local_94 = local_94 + 1;
          ppuVar13 = (undefined **)((int)ppuVar13 + 1);
        } while (local_94 < (int)(*(byte *)((int)param_2 + 0xe) & 0xf));
      }
      if (8 < (int)ppuVar13) {
        pcVar26 = 
        "char* VertexShaderCompiler::GenerateProgram(const VertexShaderConfig&, ColorRegisterAssignment*)"
        ;
        pcVar6 = (char *)0x338;
        FUN_0400a810("lightIndex <= 8",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                     ,0x338,
                     "char* VertexShaderCompiler::GenerateProgram(const VertexShaderConfig&, ColorRegisterAssignment*)"
                    );
      }
      eON_AppendShaderCompileMessage
                (&local_28,
                 "\tspecularLighting.rgb = clamp( specularLighting.rgb * materialSpecular.rgb, 0.0, 1.0 );\n"
                 ,pcVar6,pcVar26);
      eON_AppendShaderCompileMessage
                (&local_28,"\tspecularLighting.a = clamp( materialSpecular.a, 0.0, 1.0 );\n");
      eON_AppendShaderCompileMessage(&local_28,"\tvec4 summaryDiffuseColor;\n");
      eON_AppendShaderCompileMessage
                (&local_28,
                 "\tsummaryDiffuseColor.rgb = clamp( ambientLighting.rgb * materialAmbient.rgb + materialEmissive.rgb + diffuseLighting.rgb *materialDiffuse.rgb, 0.0, 1.0 );\n"
                );
      eON_AppendShaderCompileMessage
                (&local_28,
                 "\tsummaryDiffuseColor.a = clamp( materialEmissive.a + materialDiffuse.a, 0.0, 1.0 );\n"
                );
      pcVar6 = "gl_FrontColor";
      if ((*param_2 & 0x10000) != 0) {
        pcVar6 = "vec4(0.0)";
        ppuVar13 = &PTR_s_eON_Varyings_0__042ff180;
        puVar17 = local_84;
        for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar17 = (uint)*ppuVar13;
          ppuVar13 = ppuVar13 + (uint)bVar25 * -2 + 1;
          puVar17 = puVar17 + (uint)bVar25 * -2 + 1;
        }
        if (local_9c != -1) {
          pcVar6 = (char *)local_84[local_9c * 2];
        }
      }
      eON_AppendShaderCompileMessage(&local_28,"\t%s = summaryDiffuseColor;\n",pcVar6);
      pcVar6 = "gl_FrontSecondaryColor";
      if ((*param_2 & 0x10000) != 0) {
        pcVar6 = "vec4(0.0)";
        ppuVar13 = &PTR_s_eON_Varyings_0__042ff180;
        puVar17 = local_84;
        for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar17 = (uint)*ppuVar13;
          ppuVar13 = ppuVar13 + (uint)bVar25 * -2 + 1;
          puVar17 = puVar17 + (uint)bVar25 * -2 + 1;
        }
        if (local_a8 != -1) {
          pcVar6 = (char *)local_84[local_a8 * 2];
        }
      }
      eON_AppendShaderCompileMessage(&local_28,"\t%s = specularLighting;\n",pcVar6);
      uVar18 = *param_2;
      if ((uVar18 & 0x10000) == 0) {
        eON_AppendShaderCompileMessage(&local_28,"\tgl_BackColor = summaryDiffuseColor;\n",pcVar6);
        eON_AppendShaderCompileMessage(&local_28,"\tgl_BackSecondaryColor = specularLighting;\n");
LAB_040bf806:
        uVar18 = *param_2;
      }
    }
  }
  pcVar7 = pcVar26;
  if (bVar2) {
    pcVar7 = "GlFog";
    uVar8 = uVar18 & 0x20000;
    if (uVar8 == 0) {
      pcVar7 = "gl_Fog.";
    }
    uVar14 = (uVar18 & 0x3000) >> 0xc;
    if (uVar14 == 2) {
      pcVar6 = "eON_VaryingFog";
      if ((uVar18 & 0x10000) == 0) {
        pcVar6 = "gl_FogFragCoord";
      }
      eON_AppendShaderCompileMessage
                (&local_28,
                 "\t%s = clamp( exp2( - fogCoord * fogCoord * %sdensity * %sdensity ), 0.0, 1.0 )\n"
                 ,pcVar6,pcVar7,pcVar7);
      uVar18 = *param_2;
      uVar8 = uVar18 & 0x20000;
      pcVar26 = pcVar7;
      goto LAB_040bf858;
    }
    if (uVar14 != 3) {
      if (uVar14 == 1) {
        pcVar6 = "eON_VaryingFog";
        if ((uVar18 & 0x10000) == 0) {
          pcVar6 = "gl_FogFragCoord";
        }
        eON_AppendShaderCompileMessage
                  (&local_28,"\t%s = clamp( exp2( - fogCoord * %sdensity ), 0.0, 1.0 )\n",pcVar6,
                   pcVar7);
        uVar18 = *param_2;
        uVar8 = uVar18 & 0x20000;
        pcVar26 = pcVar7;
      }
      goto LAB_040bf858;
    }
    pcVar6 = "eON_VaryingFog";
    if ((uVar18 & 0x10000) == 0) {
      pcVar6 = "gl_FogFragCoord";
    }
    eON_AppendShaderCompileMessage
              (&local_28,"\t%s = clamp( ( %send - fogCoord ) * %sscale, 0.0, 1.0 );\n",pcVar6,pcVar7
               ,pcVar7);
    uVar18 = *param_2;
  }
  uVar8 = uVar18 & 0x20000;
  pcVar26 = pcVar7;
LAB_040bf858:
  uVar18 = uVar18 >> 2 & 7;
  ppuVar13 = (undefined **)pcVar26;
  if (uVar18 != 0) {
    if (uVar8 == 0) {
      pcVar6 = (char *)ppuVar12;
      eON_AppendShaderCompileMessage
                (&local_28,"\tgl_ClipVertex = gl_ModelViewMatrix * %s;\n",ppuVar12,pcVar26);
      uVar8 = *param_2 & 0x20000;
      ppuVar13 = (undefined **)pcVar26;
    }
    else {
      ppuVar15 = (undefined **)0x0;
      do {
        pcVar6 = (char *)ppuVar15;
        ppuVar13 = ppuVar15;
        eON_AppendShaderCompileMessage
                  (&local_28,"\tgl_ClipDistance[%d] = dot( ClipPlanes[%d], %s );\n",ppuVar15,
                   ppuVar15,ppuVar12);
        ppuVar15 = (undefined **)((int)ppuVar15 + 1);
      } while ((int)ppuVar15 < (int)uVar18);
      uVar8 = *param_2 & 0x20000;
    }
  }
  ppuVar15 = &PTR_DAT_042e7930;
  if (uVar8 != 0) {
    ppuVar15 = (undefined **)&DAT_04328763;
  }
  local_94 = 0;
  local_98 = 0;
  local_a8 = 0;
  do {
    uVar18 = param_2[2] >> ((byte)(local_98 << 2) & 0x1f);
    if ((uVar18 & 0xf) != 0xf) {
      if ((uVar18 & 8) == 0) {
        ppuVar13 = (undefined **)(uVar18 & 7);
        if ((local_a8 >> (int)ppuVar13 & 1) == 0) {
          pcVar6 = "in";
          if ((*param_2 & 0x20000) == 0) {
            pcVar6 = "attribute";
          }
          eON_AppendShaderCompileMessage(local_a4,"%s vec4 eON_AttrTexCoord%u;\n",pcVar6,ppuVar13);
          local_9c._0_1_ = (sbyte)ppuVar13;
          local_a8 = local_a8 | 1 << (sbyte)local_9c;
        }
        if (((byte)param_2[1] >> (local_98 & 0x1f) & 1) == 0) {
          uVar18 = *param_2;
          ppuVar9 = &PTR_s_eON_Varyings_0__042ff180;
          puVar17 = local_84;
          for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
            *puVar17 = (uint)*ppuVar9;
            ppuVar9 = ppuVar9 + (uint)bVar25 * -2 + 1;
            puVar17 = puVar17 + (uint)bVar25 * -2 + 1;
          }
          pcVar6 = (char *)local_84[(uint)((uVar18 & 0x10000) == 0) + local_94];
          eON_AppendShaderCompileMessage(&local_28,"\t%s = eON_AttrTexCoord%u;\n",pcVar6,ppuVar13);
        }
        else {
          uVar18 = *param_2;
          ppuVar9 = &PTR_s_eON_Varyings_0__042ff180;
          puVar17 = local_84;
          for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
            *puVar17 = (uint)*ppuVar9;
            ppuVar9 = ppuVar9 + (uint)bVar25 * -2 + 1;
            puVar17 = puVar17 + (uint)bVar25 * -2 + 1;
          }
          pcVar6 = (char *)local_84[(uint)((uVar18 & 0x10000) == 0) + local_94];
          ppuVar9 = ppuVar15;
          eON_AppendShaderCompileMessage
                    (&local_28,
                     "\t%s = %sTextureMatrix[%u] * vec4( eON_AttrTexCoord%u.xy, 1.0, 1.0 );\n",
                     pcVar6,ppuVar15,local_98,ppuVar13);
          ppuVar13 = ppuVar9;
        }
      }
      else {
        uVar18 = uVar18 & 7;
        if (uVar18 == 2) {
          if (!bVar4) {
            ppuVar9 = (undefined **)&DAT_04328763;
            if ((*param_2 & 0x20000) == 0) {
              ppuVar9 = &PTR_DAT_042e7930;
            }
            ppuVar13 = ppuVar12;
            eON_AppendShaderCompileMessage
                      (&local_28,"\tvec4 eyeCoordPosition = %sModelViewMatrix * %s;\n",ppuVar9,
                       ppuVar12);
            eON_AppendShaderCompileMessage
                      (&local_28,
                       "\tvec3 eyeCoordPos3 = eyeCoordPosition.xyz / eyeCoordPosition.w;\n");
            bVar4 = true;
          }
          if (((byte)param_2[1] >> (local_98 & 0x1f) & 1) == 0) {
            uVar18 = *param_2;
            ppuVar9 = &PTR_s_eON_Varyings_0__042ff180;
            puVar17 = local_84;
            for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
              *puVar17 = (uint)*ppuVar9;
              ppuVar9 = ppuVar9 + (uint)bVar25 * -2 + 1;
              puVar17 = puVar17 + (uint)bVar25 * -2 + 1;
            }
            pcVar6 = (char *)local_84[(uint)((uVar18 & 0x10000) == 0) + local_94];
            eON_AppendShaderCompileMessage
                      (&local_28,"\t%s = vec4( eyeCoordPos3, 1.0f );\n",pcVar6,ppuVar13);
          }
          else {
            uVar18 = *param_2;
            ppuVar13 = &PTR_s_eON_Varyings_0__042ff180;
            puVar17 = local_84;
            for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
              *puVar17 = (uint)*ppuVar13;
              ppuVar13 = ppuVar13 + (uint)bVar25 * -2 + 1;
              puVar17 = puVar17 + (uint)bVar25 * -2 + 1;
            }
            pcVar6 = (char *)local_84[(uint)((uVar18 & 0x10000) == 0) + local_94];
            ppuVar13 = ppuVar15;
            eON_AppendShaderCompileMessage
                      (&local_28,"\t%s = %sTextureMatrix[%u] * vec4( eyeCoordPos3, 1.0f );\n",pcVar6
                       ,ppuVar15,local_98);
          }
        }
        else if (uVar18 == 3) {
          if (!bVar3) {
            eON_AppendShaderCompileMessage
                      (&local_28,"\tvec3 normal = eON_AttrNormal0;\n",pcVar6,ppuVar13);
            ppuVar13 = &PTR_DAT_042e7930;
            pcVar6 = "normalize";
            if ((*param_2 & 0x20000) != 0) {
              ppuVar13 = (undefined **)&DAT_04328763;
            }
            if ((*param_2 & 0x40) == 0) {
              pcVar6 = "";
            }
            eON_AppendShaderCompileMessage
                      (&local_28,"\tnormal.xyz = %s( %sNormalMatrix * normal.xyz );\n",pcVar6,
                       ppuVar13);
          }
          if (!bVar4) {
            ppuVar9 = (undefined **)&DAT_04328763;
            if ((*param_2 & 0x20000) == 0) {
              ppuVar9 = &PTR_DAT_042e7930;
            }
            ppuVar13 = ppuVar12;
            eON_AppendShaderCompileMessage
                      (&local_28,"\tvec4 eyeCoordPosition = %sModelViewMatrix * %s;\n",ppuVar9,
                       ppuVar12);
            eON_AppendShaderCompileMessage
                      (&local_28,
                       "\tvec3 eyeCoordPos3 = eyeCoordPosition.xyz / eyeCoordPosition.w;\n");
            bVar4 = true;
          }
          if (((byte)param_2[1] >> (local_98 & 0x1f) & 1) == 0) {
            uVar18 = *param_2;
            ppuVar9 = &PTR_s_eON_Varyings_0__042ff180;
            puVar17 = local_84;
            for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
              *puVar17 = (uint)*ppuVar9;
              ppuVar9 = ppuVar9 + (uint)bVar25 * -2 + 1;
              puVar17 = puVar17 + (uint)bVar25 * -2 + 1;
            }
            pcVar6 = (char *)local_84[(uint)((uVar18 & 0x10000) == 0) + local_94];
            eON_AppendShaderCompileMessage
                      (&local_28,
                       "\t%s = vec4( reflect( normalize( eyeCoordPos3 ), normal.xyz ), 1.0 );\n",
                       pcVar6,ppuVar13);
          }
          else {
            uVar18 = *param_2;
            ppuVar13 = &PTR_s_eON_Varyings_0__042ff180;
            puVar17 = local_84;
            for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
              *puVar17 = (uint)*ppuVar13;
              ppuVar13 = ppuVar13 + (uint)bVar25 * -2 + 1;
              puVar17 = puVar17 + (uint)bVar25 * -2 + 1;
            }
            pcVar6 = (char *)local_84[(uint)((uVar18 & 0x10000) == 0) + local_94];
            ppuVar13 = ppuVar15;
            eON_AppendShaderCompileMessage
                      (&local_28,
                       "\t%s = vec4( ( %sTextureMatrix[%u] * vec4( reflect( normalize( eyeCoordPos3 ), normal.xyz ), 1.0 ) ).xyz, 1.0 );\n"
                       ,pcVar6,ppuVar15,local_98);
          }
        }
        else if (uVar18 == 1) {
          if (!bVar3) {
            eON_AppendShaderCompileMessage
                      (&local_28,"\tvec3 normal = eON_AttrNormal0;\n",pcVar6,ppuVar13);
            ppuVar13 = &PTR_DAT_042e7930;
            pcVar6 = "normalize";
            if ((*param_2 & 0x20000) != 0) {
              ppuVar13 = (undefined **)&DAT_04328763;
            }
            if ((*param_2 & 0x40) == 0) {
              pcVar6 = "";
            }
            eON_AppendShaderCompileMessage
                      (&local_28,"\tnormal.xyz = %s( %sNormalMatrix * normal.xyz );\n",pcVar6,
                       ppuVar13);
            bVar3 = true;
          }
          uVar8 = param_2[1];
          uVar18 = *param_2;
          ppuVar9 = &PTR_s_eON_Varyings_0__042ff180;
          puVar17 = local_84;
          for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
            *puVar17 = (uint)*ppuVar9;
            ppuVar9 = ppuVar9 + (uint)bVar25 * -2 + 1;
            puVar17 = puVar17 + (uint)bVar25 * -2 + 1;
          }
          if (((byte)uVar8 >> (local_98 & 0x1f) & 1) == 0) {
            pcVar6 = (char *)local_84[(uint)((uVar18 & 0x10000) == 0) + local_94];
            eON_AppendShaderCompileMessage
                      (&local_28,"\t%s = vec4( normal.xyz, 1.0f );\n",pcVar6,ppuVar13);
          }
          else {
            pcVar6 = (char *)local_84[(uint)((uVar18 & 0x10000) == 0) + local_94];
            ppuVar13 = ppuVar15;
            eON_AppendShaderCompileMessage
                      (&local_28,"\t%s = %sTextureMatrix[%u] * vec4( normal.xyz, 1.0f );\n",pcVar6,
                       ppuVar15,local_98);
          }
        }
      }
    }
    local_98 = local_98 + 1;
    local_94 = local_94 + 2;
  } while (local_98 != 8);
  if (bVar3) {
    pcVar6 = &DAT_0433e9db;
    if ((*param_2 & 0x20000) == 0) {
      pcVar6 = "attribute";
    }
    eON_AppendShaderCompileMessage(local_a4,"%s vec3 eON_AttrNormal0;\n",pcVar6,ppuVar13);
  }
  eON_AppendShaderCompileMessage(&local_28,&PTR_DAT_042fc048,pcVar6,ppuVar13);
  iVar11 = local_30 + local_24;
  __dest = malloc(iVar11 + 1);
  *(undefined1 *)((int)__dest + iVar11) = 0;
  __dest_00 = (void *)(local_30 + (int)__dest);
  memcpy(__dest,local_34,local_30);
  memcpy(__dest_00,local_28,local_24);
                    /* try { // try from 040c0013 to 040c0017 has its CatchHandler @ 040c120b */
  FUN_0402f590(&local_28);
  FUN_0402f590(local_a4);
  return __dest;
}

// --- VertexShaderConfig::AnalyzeDeviceState @0x040bdb70 ---
/* source: fixedPipelineEmulation */

void fixedPipelineEmulation_040bdb70
               (uint *param_1,int param_2,byte param_3,char param_4,byte param_5,char param_6)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  bool bVar11;
  byte bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  uint local_34;
  uint local_30;
  uint local_24;
  
  bzero(param_1,0x10);
  if (param_6 != '\0') {
    *param_1 = *param_1 | 0x10000;
  }
  cVar5 = FUN_04021ee0();
  if (cVar5 != '\0') {
    *param_1 = *param_1 | 0x20000;
  }
  if (*(int *)(param_2 + 0x5f8) != 0) {
    *param_1 = *param_1 | 1;
    *(byte *)((int)param_1 + 0xd) = param_3 & 0xf | param_4 << 4;
    *(byte *)((int)param_1 + 0xe) = *(byte *)((int)param_1 + 0xe) & 0xf0 | param_5 & 0xf;
    bVar12 = (byte)param_1[3];
    bVar2 = (byte)*(undefined4 *)(param_2 + 0x620) & 3;
    *(byte *)(param_1 + 3) = bVar12 & 0xfc | bVar2;
    bVar4 = (byte)((*(uint *)(param_2 + 0x618) & 3) << 2);
    *(byte *)(param_1 + 3) = bVar12 & 0xf0 | bVar2 | bVar4;
    bVar3 = (byte)(*(int *)(param_2 + 0x61c) << 6);
    *(byte *)(param_1 + 3) = bVar12 & 0x30 | bVar2 | bVar4 | bVar3;
    *(byte *)(param_1 + 3) = bVar2 | bVar4 | bVar3 | (byte)((*(uint *)(param_2 + 0x624) & 3) << 4);
  }
  if (*(int *)(param_2 + 0x608) != 0) {
    *param_1 = *param_1 | 0x8000;
  }
  if (*(int *)(param_2 + 0x60c) != 0) {
    *param_1 = *param_1 | 2;
  }
  uVar8 = *(uint *)(param_2 + 0x634);
  if (uVar8 != 0) {
    uVar6 = uVar8 & 1;
    if ((uVar8 & 2) != 0) {
      uVar6 = (uVar8 & 1) + 1;
    }
    *param_1 = *param_1 |
               (((((uVar6 - ((uVar8 >> 2 & 1) == 0)) - (uint)((uVar8 >> 3 & 1) == 0)) -
                 (uint)((uVar8 >> 4 & 1) == 0)) + 4) - (uint)((uVar8 >> 5 & 1) == 0)) * 4;
  }
  if (*(int *)(param_2 + 0x444) != 0) {
    uVar8 = *param_1;
    iVar7 = *(int *)(param_2 + 0x460);
    uVar6 = uVar8 | 0x20;
    *param_1 = uVar6;
    if (iVar7 == 0) {
      if (*(int *)(param_2 + 0x494) != 0) {
        uVar6 = uVar8 | 0x820;
        *param_1 = uVar6;
      }
      uVar8 = *(uint *)(param_2 + 0x604);
      if (3 < uVar8) {
        FUN_0400a810("vertexFogType < 4",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                     ,0x5d,
                     "void VertexShaderConfig::AnalyzeDeviceState(const eON_Direct3DDeviceState*, int32_t, int32_t, int32_t, bool)"
                    );
        uVar6 = *param_1;
      }
      *param_1 = uVar8 << 0xc | uVar6;
    }
    else {
      *param_1 = uVar8 | 0x4020;
    }
  }
  if (*(int *)(param_2 + 0x610) != 0) {
    *param_1 = *param_1 | 0x40;
  }
  *(char *)((int)param_1 + 5) = (char)*(undefined4 *)(param_2 + 0x630);
  iVar7 = *(int *)(param_2 + 0x5278);
  if (iVar7 == 0) {
    FUN_0400a810("deviceState->VertexDeclaration",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                 ,0x6c,
                 "void VertexShaderConfig::AnalyzeDeviceState(const eON_Direct3DDeviceState*, int32_t, int32_t, int32_t, bool)"
                );
    iVar7 = *(int *)(param_2 + 0x5278);
  }
  iVar1 = *(int *)(iVar7 + 0x24);
  local_24 = 0;
  iVar7 = *(int *)(iVar7 + 0x28);
  if ((iVar7 - iVar1 >> 3) * -0x55555555 != 0) {
    iVar9 = 0;
    uVar8 = 0;
    do {
      pbVar10 = (byte *)(iVar1 + iVar9);
      bVar12 = *pbVar10;
      if (bVar12 == 5) {
        local_24 = local_24 | 1 << (pbVar10[1] & 0x1f);
      }
      else if (bVar12 < 6) {
        if (bVar12 == 3) {
          *param_1 = *param_1 | 0x80;
        }
      }
      else if (bVar12 == 9) {
        *param_1 = *param_1 | 0x100;
      }
      else if (bVar12 == 10) {
        if (pbVar10[1] == 0) {
          *param_1 = *param_1 | 0x200;
        }
        else if (pbVar10[1] == 1) {
          *param_1 = *param_1 | 0x400;
        }
      }
      uVar8 = uVar8 + 1;
      iVar9 = iVar9 + 0x18;
    } while (uVar8 < (uint)((iVar7 - iVar1 >> 3) * -0x55555555));
  }
  iVar7 = *(int *)(param_2 + 0xda0);
  local_30 = *(uint *)(param_2 + 0xddc);
  bVar11 = iVar7 == 1;
  if ((local_30 & 0xffff0000) == 0) {
    if ((local_24 >> (local_30 & 0x1f) & 1) != 0) {
      local_30 = local_30 & 7;
      goto LAB_040bde0d;
    }
    if (((param_6 != '\0') && (!bVar11)) &&
       (((((*(int *)(param_2 + 0xda8) == 2 && (iVar7 != 3)) ||
          ((*(int *)(param_2 + 0xdac) == 2 && (iVar7 != 2)))) ||
         ((*(int *)(param_2 + 0xdb8) == 2 && (*(int *)(param_2 + 0xdb0) != 3)))) ||
        ((((*(int *)(param_2 + 0xdbc) == 2 && (*(int *)(param_2 + 0xdb0) != 2)) || (iVar7 == 0xd))
         || (*(int *)(param_2 + 0xdb0) == 0xd)))))) {
      local_30 = local_30 & 7;
      goto LAB_040bde0d;
    }
    bVar12 = false;
    local_30 = param_1[2] | 0xf;
    param_1[2] = local_30;
  }
  else {
    local_30 = local_30 >> 0x10 & 7 | 8;
LAB_040bde0d:
    local_30 = local_30 | param_1[2];
    param_1[2] = local_30;
    bVar12 = *(int *)(param_2 + 0xde0) != 0;
  }
  iVar7 = *(int *)(param_2 + 0xde8);
  bVar13 = iVar7 == 1;
  uVar8 = *(uint *)(param_2 + 0xe24);
  if ((uVar8 & 0xffff0000) == 0) {
    if (((local_24 >> (uVar8 & 0x1f) & 1) != 0) ||
       (((param_6 != '\0' && (!bVar13 && !bVar11)) &&
        (((((*(int *)(param_2 + 0xdf0) == 2 && (iVar7 != 3)) ||
           (((*(int *)(param_2 + 0xdf4) == 2 && (iVar7 != 2)) ||
            ((*(int *)(param_2 + 0xe00) == 2 && (*(int *)(param_2 + 0xdf8) != 3)))))) ||
          (((*(int *)(param_2 + 0xe04) == 2 && (*(int *)(param_2 + 0xdf8) != 2)) || (iVar7 == 0xd)))
          ) || (*(int *)(param_2 + 0xdf8) == 0xd)))))) {
      uVar8 = uVar8 & 7;
      goto LAB_040bde6b;
    }
    local_34 = local_30 | 0xf0;
    param_1[2] = local_34;
  }
  else {
    uVar8 = uVar8 >> 0x10 & 7 | 8;
LAB_040bde6b:
    local_34 = uVar8 << 4 | local_30;
    iVar7 = *(int *)(param_2 + 0xe28);
    param_1[2] = local_34;
    if (iVar7 != 0) {
      bVar12 = bVar12 | 2;
    }
  }
  iVar7 = *(int *)(param_2 + 0xe30);
  uVar8 = *(uint *)(param_2 + 0xe6c);
  bVar14 = iVar7 == 1;
  if ((uVar8 & 0xffff0000) == 0) {
    if (((local_24 >> (uVar8 & 0x1f) & 1) != 0) ||
       (((param_6 != '\0' && (!bVar14 && (!bVar13 && !bVar11))) &&
        (((*(int *)(param_2 + 0xe38) == 2 && (iVar7 != 3)) ||
         ((((*(int *)(param_2 + 0xe3c) == 2 && (iVar7 != 2)) ||
           ((*(int *)(param_2 + 0xe48) == 2 && (*(int *)(param_2 + 0xe40) != 3)))) ||
          ((((*(int *)(param_2 + 0xe4c) == 2 && (*(int *)(param_2 + 0xe40) != 2)) || (iVar7 == 0xd))
           || (*(int *)(param_2 + 0xe40) == 0xd)))))))))) {
      uVar8 = uVar8 & 7;
      goto LAB_040bded3;
    }
    local_30 = local_34 | 0xf00;
    param_1[2] = local_30;
  }
  else {
    uVar8 = uVar8 >> 0x10 & 7 | 8;
LAB_040bded3:
    local_30 = uVar8 << 8 | local_34;
    param_1[2] = local_30;
    if (*(int *)(param_2 + 0xe70) != 0) {
      bVar12 = bVar12 | 4;
    }
  }
  iVar7 = *(int *)(param_2 + 0xe78);
  bVar15 = iVar7 == 1;
  uVar8 = *(uint *)(param_2 + 0xeb4);
  if ((uVar8 & 0xffff0000) == 0) {
    if (((local_24 >> (uVar8 & 0x1f) & 1) != 0) ||
       (((param_6 != '\0' && (!bVar15 && (!bVar14 && (!bVar13 && !bVar11)))) &&
        (((((*(int *)(param_2 + 0xe80) == 2 && (iVar7 != 3)) ||
           ((*(int *)(param_2 + 0xe84) == 2 && (iVar7 != 2)))) ||
          ((*(int *)(param_2 + 0xe90) == 2 && (*(int *)(param_2 + 0xe88) != 3)))) ||
         ((((*(int *)(param_2 + 0xe94) == 2 && (*(int *)(param_2 + 0xe88) != 2)) || (iVar7 == 0xd))
          || (*(int *)(param_2 + 0xe88) == 0xd)))))))) {
      uVar8 = uVar8 & 7;
      goto LAB_040bdf3b;
    }
    local_34 = local_30 | 0xf000;
    param_1[2] = local_34;
  }
  else {
    uVar8 = uVar8 >> 0x10 & 7 | 8;
LAB_040bdf3b:
    local_34 = uVar8 << 0xc | local_30;
    iVar7 = *(int *)(param_2 + 0xeb8);
    param_1[2] = local_34;
    if (iVar7 != 0) {
      bVar12 = bVar12 | 8;
    }
  }
  iVar7 = *(int *)(param_2 + 0xec0);
  uVar8 = *(uint *)(param_2 + 0xefc);
  bVar16 = iVar7 == 1;
  if ((uVar8 & 0xffff0000) == 0) {
    if (((local_24 >> (uVar8 & 0x1f) & 1) != 0) ||
       (((param_6 != '\0' && (!bVar16 && (!bVar15 && (!bVar14 && (!bVar13 && !bVar11))))) &&
        ((((*(int *)(param_2 + 0xec8) == 2 && (iVar7 != 3)) ||
          (((*(int *)(param_2 + 0xecc) == 2 && (iVar7 != 2)) ||
           ((*(int *)(param_2 + 0xed8) == 2 && (*(int *)(param_2 + 0xed0) != 3)))))) ||
         ((((*(int *)(param_2 + 0xedc) == 2 && (*(int *)(param_2 + 0xed0) != 2)) || (iVar7 == 0xd))
          || (*(int *)(param_2 + 0xed0) == 0xd)))))))) {
      local_30 = (uVar8 & 7) << 0x10;
      goto LAB_040bdfa6;
    }
    local_30 = local_34 | 0xf0000;
    param_1[2] = local_30;
  }
  else {
    local_30 = uVar8 & 0x70000 | 0x80000;
LAB_040bdfa6:
    local_30 = local_30 | local_34;
    param_1[2] = local_30;
    if (*(int *)(param_2 + 0xf00) != 0) {
      bVar12 = bVar12 | 0x10;
    }
  }
  iVar7 = *(int *)(param_2 + 0xf08);
  bVar17 = iVar7 == 1;
  uVar8 = *(uint *)(param_2 + 0xf44);
  if ((uVar8 & 0xffff0000) == 0) {
    if (((local_24 >> (uVar8 & 0x1f) & 1) != 0) ||
       (((param_6 != '\0' &&
         (!bVar17 && (!bVar16 && (!bVar15 && (!bVar14 && (!bVar13 && !bVar11)))))) &&
        (((*(int *)(param_2 + 0xf10) == 2 && (iVar7 != 3)) ||
         ((((*(int *)(param_2 + 0xf14) == 2 && (iVar7 != 2)) ||
           ((*(int *)(param_2 + 0xf20) == 2 && (*(int *)(param_2 + 0xf18) != 3)))) ||
          ((((*(int *)(param_2 + 0xf24) == 2 && (*(int *)(param_2 + 0xf18) != 2)) || (iVar7 == 0xd))
           || (*(int *)(param_2 + 0xf18) == 0xd)))))))))) {
      uVar8 = uVar8 & 7;
      goto LAB_040be00b;
    }
    local_34 = local_30 | 0xf00000;
    param_1[2] = local_34;
  }
  else {
    uVar8 = uVar8 >> 0x10 & 7 | 8;
LAB_040be00b:
    local_34 = uVar8 << 0x14 | local_30;
    iVar7 = *(int *)(param_2 + 0xf48);
    param_1[2] = local_34;
    if (iVar7 != 0) {
      bVar12 = bVar12 | 0x20;
    }
  }
  iVar7 = *(int *)(param_2 + 0xf50);
  uVar8 = *(uint *)(param_2 + 0xf8c);
  if ((uVar8 & 0xffff0000) == 0) {
    if (((local_24 >> (uVar8 & 0x1f) & 1) == 0) &&
       (((param_6 == '\0' ||
         (iVar7 == 1 || (bVar17 || (bVar16 || (bVar15 || (bVar14 || (bVar13 || bVar11))))))) ||
        (((((*(int *)(param_2 + 0xf58) != 2 || (iVar7 == 3)) &&
           ((*(int *)(param_2 + 0xf5c) != 2 || (iVar7 == 2)))) &&
          ((*(int *)(param_2 + 0xf68) != 2 || (*(int *)(param_2 + 0xf60) == 3)))) &&
         ((((*(int *)(param_2 + 0xf6c) != 2 || (*(int *)(param_2 + 0xf60) == 2)) && (iVar7 != 0xd))
          && (*(int *)(param_2 + 0xf60) != 0xd)))))))) {
      local_30 = local_34 | 0xf000000;
      param_1[2] = local_30;
      goto LAB_040be091;
    }
    uVar8 = uVar8 & 7;
  }
  else {
    uVar8 = uVar8 >> 0x10 & 7 | 8;
  }
  local_30 = uVar8 << 0x18 | local_34;
  param_1[2] = local_30;
  if (*(int *)(param_2 + 0xf90) != 0) {
    bVar12 = bVar12 | 0x40;
  }
LAB_040be091:
  iVar1 = *(int *)(param_2 + 0xf98);
  uVar8 = *(uint *)(param_2 + 0xfd4);
  if ((uVar8 & 0xffff0000) == 0) {
    if (((local_24 >> (uVar8 & 0x1f) & 1) == 0) &&
       (((param_6 == '\0' ||
         (iVar1 == 1 ||
          (iVar7 == 1 || (bVar17 || (bVar16 || (bVar15 || (bVar14 || (bVar13 || bVar11)))))))) ||
        ((((*(int *)(param_2 + 4000) != 2 || (iVar1 == 3)) &&
          (((*(int *)(param_2 + 0xfa4) != 2 || (iVar1 == 2)) &&
           ((*(int *)(param_2 + 0xfb0) != 2 || (*(int *)(param_2 + 0xfa8) == 3)))))) &&
         ((((*(int *)(param_2 + 0xfb4) != 2 || (*(int *)(param_2 + 0xfa8) == 2)) && (iVar1 != 0xd))
          && (*(int *)(param_2 + 0xfa8) != 0xd)))))))) {
      *(byte *)(param_1 + 1) = bVar12;
      param_1[2] = local_30 | 0xf0000000;
      return;
    }
    uVar8 = uVar8 & 7;
  }
  else {
    uVar8 = uVar8 >> 0x10 & 7 | 8;
  }
  if (*(int *)(param_2 + 0xfd8) != 0) {
    bVar12 = bVar12 | 0x80;
  }
  param_1[2] = uVar8 << 0x1c | local_30;
  *(byte *)(param_1 + 1) = bVar12;
  return;
}

// --- fixedPipelineEmulation_040bca60 @0x040bca60 ---
/* source: fixedPipelineEmulation */

void __regparm3
fixedPipelineEmulation_040bca60
          (int param_1,undefined4 param_2,undefined4 param_3,uint param_4,byte param_5,char *param_6
          ,undefined4 param_7,byte param_8,char param_9)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  undefined **ppuVar5;
  char *pcVar6;
  undefined4 *puVar7;
  bool bVar8;
  byte bVar9;
  char *local_188;
  char local_16c [256];
  undefined4 local_6c [23];
  
  bVar9 = 0;
  if (param_6 == (char *)0x0) {
    FUN_0400a810("coordBias",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                 ,0x428,
                 "void FragmentShaderCompiler::GenerateTexSample(TextBuffer&, TextBuffer&, int32_t, uint8_t, const char*, const char*, bool, bool)"
                );
  }
  if ((param_5 & 0x10) == 0) {
    FUN_0400a810("textureSettings & 0x10",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                 ,0x429,
                 "void FragmentShaderCompiler::GenerateTexSample(TextBuffer&, TextBuffer&, int32_t, uint8_t, const char*, const char*, bool, bool)"
                );
  }
  bVar8 = (param_5 & 0x20) == 0;
  if ((param_5 & 8) == 0) {
    ppuVar5 = &PTR_s_eON_Varyings_0__042ff180;
    puVar7 = local_6c;
    for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = *ppuVar5;
      ppuVar5 = ppuVar5 + (uint)bVar9 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
    }
    if (!bVar8) {
      if (param_4 == 0xffffffff) {
        pcVar6 = "vec4(0.0)";
        if (param_8 == 0) {
          FUN_0400a810("varyingsOnly",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                       ,0x22,"const char* TexVaryingName(bool, int32_t)");
        }
      }
      else {
        pcVar6 = (char *)local_6c[(uint)(param_8 ^ 1) + param_4 * 2];
      }
      pcVar1 = "";
      if (param_9 == '\0') {
        pcVar1 = "3D";
      }
      sprintf(local_16c,"texture%s( PSampler%u, %s.rgb%s )",pcVar1,param_4,pcVar6,param_6);
      goto joined_r0x040bccbc;
    }
LAB_040bcb3c:
    if (param_4 == 0xffffffff) {
      pcVar6 = "vec4(0.0)";
      if (param_8 == 0) {
        FUN_0400a810("varyingsOnly",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                     ,0x22,"const char* TexVaryingName(bool, int32_t)");
      }
    }
    else {
      pcVar6 = (char *)local_6c[(uint)(param_8 ^ 1) + param_4 * 2];
    }
    pcVar1 = "";
    if (param_9 == '\0') {
      pcVar1 = "2D";
    }
    sprintf(local_16c,"texture%s( PSampler%u, %s.rg%s )",pcVar1,param_4,pcVar6,param_6);
  }
  else if (*param_6 == '\0') {
    if ((param_5 & 4) == 0) goto LAB_040bcd18;
LAB_040bcae1:
    bVar4 = param_5 & 3;
    if (bVar4 == 2) {
LAB_040bce8d:
      ppuVar5 = &PTR_s_eON_Varyings_0__042ff180;
      puVar7 = local_6c;
      for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar7 = *ppuVar5;
        ppuVar5 = ppuVar5 + (uint)bVar9 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      }
      if (param_4 == 0xffffffff) {
        pcVar6 = "vec4(0.0)";
        local_188 = "vec4(0.0)";
        if (param_8 == 0) {
          FUN_0400a810("varyingsOnly",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                       ,0x22,"const char* TexVaryingName(bool, int32_t)");
          FUN_0400a810("varyingsOnly",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                       ,0x22,"const char* TexVaryingName(bool, int32_t)");
        }
      }
      else {
        iVar2 = (uint)(param_8 ^ 1) + param_4 * 2;
        local_188 = (char *)local_6c[iVar2];
        ppuVar5 = &PTR_s_eON_Varyings_0__042ff180;
        puVar7 = local_6c;
        for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = *ppuVar5;
          ppuVar5 = ppuVar5 + (uint)bVar9 * -2 + 1;
          puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        }
        pcVar6 = (char *)local_6c[iVar2];
      }
      pcVar1 = "";
      if (param_9 == '\0') {
        pcVar1 = "2D";
      }
      sprintf(local_16c,"texture%s( PSampler%u, ( %s.rg / %s.a )%s )",pcVar1,param_4,pcVar6,
              local_188,param_6);
    }
    else if (bVar4 == 3) {
      if (bVar8) goto LAB_040bce8d;
      ppuVar5 = &PTR_s_eON_Varyings_0__042ff180;
      puVar7 = local_6c;
      for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar7 = *ppuVar5;
        ppuVar5 = ppuVar5 + (uint)bVar9 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      }
      if (param_4 == 0xffffffff) {
        pcVar6 = "vec4(0.0)";
        if (param_8 == 0) {
          FUN_0400a810("varyingsOnly",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                       ,0x22,"const char* TexVaryingName(bool, int32_t)");
        }
      }
      else {
        pcVar6 = (char *)local_6c[(uint)(param_8 ^ 1) + param_4 * 2];
      }
      pcVar1 = "";
      if (param_9 == '\0') {
        pcVar1 = "3D";
      }
      sprintf(local_16c,"texture%sProj( PSampler%u, %s )",pcVar1,param_4,pcVar6);
    }
    else if (bVar4 == 1) {
      ppuVar5 = &PTR_s_eON_Varyings_0__042ff180;
      puVar7 = local_6c;
      for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar7 = *ppuVar5;
        ppuVar5 = ppuVar5 + (uint)bVar9 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      }
      if (param_4 == 0xffffffff) {
        pcVar6 = "vec4(0.0)";
        local_188 = "vec4(0.0)";
        if (param_8 == 0) {
          FUN_0400a810("varyingsOnly",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                       ,0x22,"const char* TexVaryingName(bool, int32_t)");
          FUN_0400a810("varyingsOnly",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                       ,0x22,"const char* TexVaryingName(bool, int32_t)");
        }
      }
      else {
        iVar2 = (uint)(param_8 ^ 1) + param_4 * 2;
        local_188 = (char *)local_6c[iVar2];
        ppuVar5 = &PTR_s_eON_Varyings_0__042ff180;
        puVar7 = local_6c;
        for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = *ppuVar5;
          ppuVar5 = ppuVar5 + (uint)bVar9 * -2 + 1;
          puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        }
        pcVar6 = (char *)local_6c[iVar2];
      }
      pcVar1 = "";
      if (param_9 == '\0') {
        pcVar1 = "2D";
      }
      sprintf(local_16c,"texture%sProj( PSampler%u, vec3( %s.r, 0.0, %s.g ) )",pcVar1,param_4,pcVar6
              ,local_188);
    }
    else {
      FUN_0402cd10(0xf,"COUNT1|PROJECTED in texture settings!");
    }
  }
  else {
    FUN_0402cd10(10,
                 "Texture transform flags used with texture bias! Untested, probably wrong! Make sure it\'s rendered correctly!"
                );
    if ((param_5 & 4) != 0) goto LAB_040bcae1;
LAB_040bcd18:
    bVar4 = param_5 & 3;
    if (bVar4 == 2) {
      ppuVar5 = &PTR_s_eON_Varyings_0__042ff180;
      puVar7 = local_6c;
      for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar7 = *ppuVar5;
        ppuVar5 = ppuVar5 + (uint)bVar9 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      }
      if (bVar8) goto LAB_040bcb3c;
      if (param_4 == 0xffffffff) {
        pcVar6 = "vec4(0.0)";
        if (param_8 == 0) {
          FUN_0400a810("varyingsOnly",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                       ,0x22,"const char* TexVaryingName(bool, int32_t)");
        }
      }
      else {
        pcVar6 = (char *)local_6c[(uint)(param_8 ^ 1) + param_4 * 2];
      }
      pcVar1 = "";
      if (param_9 == '\0') {
        pcVar1 = "3D";
      }
      sprintf(local_16c,"texture%s( PSampler%u, %s.rgb )",pcVar1,param_4,pcVar6);
    }
    else if (bVar4 == 3) {
      FUN_0402cd10(0xf,"COUNT4 without PROJECTED in texture settings!");
    }
    else {
      ppuVar5 = &PTR_s_eON_Varyings_0__042ff180;
      puVar7 = local_6c;
      for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar7 = *ppuVar5;
        ppuVar5 = ppuVar5 + (uint)bVar9 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      }
      if (bVar4 == 1) goto LAB_040bcb3c;
      if (param_4 == 0xffffffff) {
        pcVar6 = "vec4(0.0)";
        if (param_8 == 0) {
          FUN_0400a810("varyingsOnly",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                       ,0x22,"const char* TexVaryingName(bool, int32_t)");
        }
      }
      else {
        pcVar6 = (char *)local_6c[(uint)(param_8 ^ 1) + param_4 * 2];
      }
      pcVar1 = "";
      if (param_9 == '\0') {
        pcVar1 = "2D";
      }
      sprintf(local_16c,"texture%s( PSampler%u, vec2( %s.r, 0.0 )%s )",pcVar1,param_4,pcVar6,param_6
             );
    }
  }
joined_r0x040bccbc:
  if (param_5 >> 6 == 1) {
    eON_AppendShaderCompileMessage(param_2,"vec4( 1.0, 1.0, 1.0, %s.r )%s",local_16c,param_7);
    goto joined_r0x040bcce6;
  }
  param_5 = param_5 >> 6;
  if (param_5 != 0) {
    if (param_5 == 2) {
      eON_AppendShaderCompileMessage(param_2,"vec4( %s.rrr, 1.0 )%s",local_16c,param_7);
      goto joined_r0x040bcce6;
    }
    if (param_5 == 3) {
      eON_AppendShaderCompileMessage(param_2,"vec4( %s.rrrg )%s",local_16c,param_7);
      goto joined_r0x040bcce6;
    }
    FUN_0400a810("false",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                 ,0x45e,
                 "void FragmentShaderCompiler::GenerateTexSample(TextBuffer&, TextBuffer&, int32_t, uint8_t, const char*, const char*, bool, bool)"
                );
  }
  eON_AppendShaderCompileMessage(param_2,"%s%s",local_16c,param_7);
joined_r0x040bcce6:
  if (7 < param_4) {
    FUN_0400a810("( stageNo >= 0 ) && ( stageNo < 8 )",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                 ,0x465,
                 "void FragmentShaderCompiler::GenerateTexSample(TextBuffer&, TextBuffer&, int32_t, uint8_t, const char*, const char*, bool, bool)"
                );
  }
  bVar9 = (byte)(1 << ((byte)param_4 & 0x1f));
  if ((*(byte *)(param_1 + 2) & bVar9) == 0) {
    eON_AppendShaderCompileMessage
              (param_3,"uniform sampler%uD PSampler%u;\n",3 - (uint)bVar8,param_4);
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | bVar9;
  }
  return;
}

// --- fixedPipelineEmulation_040bd330 @0x040bd330 ---
/* source: fixedPipelineEmulation */

void __regparm3
fixedPipelineEmulation_040bd330
          (char *param_1,undefined4 param_2,undefined4 param_3,byte *param_4,char *param_5,
          undefined4 param_6,char param_7,byte param_8,byte param_9,char param_10)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined **ppuVar7;
  int *piVar8;
  bool bVar9;
  byte bVar10;
  char *pcVar11;
  char *local_90;
  int local_80 [20];
  undefined4 local_30;
  undefined2 local_2c;
  undefined4 local_2a;
  undefined1 local_26;
  undefined4 local_25;
  undefined1 local_21;
  undefined2 local_20;
  undefined1 local_1e;
  char local_1d [13];
  
  bVar10 = 0;
  local_30 = 0x6161612e;
  local_2a = 0x6161612e;
  local_2c = 0x61;
  local_1d[0] = '\0';
  local_26 = 0;
  local_25 = 0x6267722e;
  local_21 = 0;
  local_20 = 0x612e;
  local_1e = 0;
  if (param_10 == '\0') {
    if (param_7 != '\0') {
      local_90 = (char *)&local_25;
      if ((param_8 & 0x20) != 0) {
        local_90 = (char *)&local_2a;
      }
      pcVar6 = (char *)&local_25;
      goto LAB_040bd3ca;
    }
    pcVar6 = (char *)&local_20;
    bVar3 = false;
    bVar2 = false;
    local_90 = pcVar6;
  }
  else {
    if (param_7 == '\0') {
      FUN_0400a810("colorArg",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                   ,0x47e,
                   "void FragmentShaderCompiler::PrepareArg(TextBuffer&, TextBuffer&, const FragmentShaderConfig&, int32_t, int32_t, bool, uint8_t, uint8_t, bool)"
                  );
    }
    local_90 = local_1d;
    if ((param_8 & 0x20) != 0) {
      local_90 = (char *)&local_30;
    }
    pcVar6 = local_1d;
    if (param_7 == '\0') {
LAB_040bd4f8:
      bVar3 = false;
      bVar2 = false;
    }
    else {
LAB_040bd3ca:
      bVar3 = false;
      bVar2 = false;
      if ((param_8 & 0xf) == 2) {
        if (((param_9 & 0x10) == 0) || ((int)param_5 < 1)) goto LAB_040bd4f8;
        pcVar5 = param_5 + -1;
        if (param_4[(int)pcVar5 * 10 + 1] != 0x16) {
          if (param_4[(int)pcVar5 * 10 + 1] != 0x17) goto LAB_040bd3e6;
          bVar3 = true;
        }
        if ((*param_4 & 0x40) == 0) {
          eON_AppendShaderCompileMessage
                    (param_2,
                     "\tbumpEnvMapPixel.rg = bumpEnvMapPixel.rr * BumpEnvMap%u.rg + bumpEnvMapPixel.gg * BumpEnvMap%u.ba;\n"
                     ,pcVar5,pcVar5);
        }
        else {
          eON_AppendShaderCompileMessage
                    (param_2,
                     "\tbumpEnvMapPixel.rg = bumpEnvMapPixel.rr * BumpEnvMap[%u].rg + bumpEnvMapPixel.gg * BumpEnvMap[%u].ba;\n"
                     ,pcVar5,pcVar5);
        }
        if (bVar3) {
          if ((*param_4 & 0x40) == 0) {
            pcVar11 = 
            "\tbumpEnvMapPixel.b = bumpEnvMapPixel.b * LuminanceScaleOffset%u.r + LuminanceScaleOffset%u.g;\n"
            ;
          }
          else {
            pcVar11 = 
            "\tbumpEnvMapPixel.b = bumpEnvMapPixel.b * LuminanceScaleOffset[%u].r + LuminanceScaleOffset[%u].g;\n"
            ;
          }
          eON_AppendShaderCompileMessage(param_2,pcVar11,pcVar5,pcVar5);
          bVar2 = true;
        }
        else {
          bVar2 = true;
        }
      }
    }
  }
LAB_040bd3e6:
  pcVar5 = (char *)(uint)param_8;
  eON_AppendShaderCompileMessage(param_2,"\tStageArg%u%s = ",param_6,pcVar6);
  bVar9 = (param_8 & 0x10) != 0;
  if (bVar9) {
    if (param_7 == '\0') {
      eON_AppendShaderCompileMessage(param_2,"( 1.0 - ",param_6,pcVar6);
    }
    else {
      eON_AppendShaderCompileMessage(param_2,"( vec3( 1.0 ) - ",param_6,pcVar6);
    }
  }
  switch((uint)pcVar5 & 0xf) {
  case 0:
    goto switchD_040bd4d0_caseD_0;
  case 1:
    if (param_5 != (char *)0x0) {
      eON_AppendShaderCompileMessage(param_2,"currentRegister%s",local_90,pcVar6);
      pcVar5 = local_90;
      break;
    }
    goto switchD_040bd4d0_caseD_0;
  case 2:
    if ((param_9 & 0x10) != 0) {
      if (bVar2) {
        pcVar5 = " + bumpEnvMapPixel.rg";
        fixedPipelineEmulation_040bca60
                  (param_5,param_9," + bumpEnvMapPixel.rg",local_90,(*param_4 & 0x20) != 0,
                   (*param_4 & 0x40) != 0);
      }
      else {
        pcVar5 = param_5;
        eON_AppendShaderCompileMessage(param_2,"texSample%u%s",param_5,local_90);
        param_1[3] = param_1[3] | (byte)(1 << ((byte)param_5 & 0x1f));
      }
      pcVar6 = local_90;
      if (bVar3) {
        eON_AppendShaderCompileMessage(param_2," * bumpEnvMapPixel.b",pcVar5,local_90);
        pcVar6 = local_90;
      }
      break;
    }
switchD_040bd4d0_caseD_0:
    pcVar5 = "gl_Color";
    if ((*param_4 & 0x20) != 0) {
      if (param_4[0x58] == 0) {
LAB_040bdb0d:
        iVar4 = 0;
      }
      else {
        pcVar5 = "vec4(0.0)";
        if (param_4[0x58] == 0xff) goto LAB_040bd618;
        if (param_4[0x5a] == 0) {
LAB_040bdb14:
          iVar4 = 1;
        }
        else {
          if (param_4[0x5a] == 0xff) goto LAB_040bd618;
          if (param_4[0x5c] == 0) {
LAB_040bdb1e:
            iVar4 = 2;
          }
          else {
            if (param_4[0x5c] == 0xff) goto LAB_040bd618;
            if (param_4[0x5e] == 0) {
LAB_040bdb28:
              iVar4 = 3;
            }
            else {
              if (param_4[0x5e] == 0xff) goto LAB_040bd618;
              if (param_4[0x60] == 0) {
LAB_040bdb32:
                iVar4 = 4;
              }
              else {
                if (param_4[0x60] == 0xff) goto LAB_040bd618;
                if (param_4[0x62] == 0) {
LAB_040bdb3c:
                  iVar4 = 5;
                }
                else {
                  if (param_4[0x62] == 0xff) goto LAB_040bd618;
                  if (param_4[100] == 0) {
LAB_040bdb46:
                    iVar4 = 6;
                  }
                  else {
                    if (param_4[100] == 0xff) goto LAB_040bd618;
                    if (param_4[0x66] == 0) {
LAB_040bdb50:
                      iVar4 = 7;
                    }
                    else {
                      if (param_4[0x66] == 0xff) goto LAB_040bd618;
                      if (param_4[0x68] == 0) {
LAB_040bdb5a:
                        iVar4 = 8;
                      }
                      else {
                        if ((param_4[0x68] == 0xff) || (param_4[0x6a] != 0)) goto LAB_040bd618;
LAB_040bd8e3:
                        iVar4 = 9;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      bVar1 = param_4[iVar4 * 2 + 0x59];
      ppuVar7 = &PTR_s_eON_Varyings_0__042ff180;
      piVar8 = local_80;
      for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar8 = (int)*ppuVar7;
        ppuVar7 = ppuVar7 + (uint)bVar10 * -2 + 1;
        piVar8 = piVar8 + (uint)bVar10 * -2 + 1;
      }
      pcVar5 = (char *)local_80[(uint)bVar1 * 2];
    }
LAB_040bd618:
    eON_AppendShaderCompileMessage(param_2,"%s%s",pcVar5,local_90);
    pcVar6 = local_90;
    break;
  case 3:
    eON_AppendShaderCompileMessage(param_2,"TextureFactor%s",local_90,pcVar6);
    pcVar5 = local_90;
    if (*param_1 == '\0') {
      if ((*param_4 & 0x40) == 0) {
        eON_AppendShaderCompileMessage(param_3,"uniform vec4 TextureFactor;\n",local_90,pcVar6);
      }
      *param_1 = '\x01';
      pcVar5 = local_90;
    }
    break;
  case 4:
    pcVar5 = "gl_SecondaryColor";
    if ((*param_4 & 0x20) != 0) {
      if (param_4[0x58] == 1) goto LAB_040bdb0d;
      pcVar5 = "vec4(0.0)";
      if (param_4[0x58] == 0xff) goto LAB_040bd618;
      if (param_4[0x5a] == 1) goto LAB_040bdb14;
      if (param_4[0x5a] == 0xff) goto LAB_040bd618;
      if (param_4[0x5c] == 1) goto LAB_040bdb1e;
      if (param_4[0x5c] == 0xff) goto LAB_040bd618;
      if (param_4[0x5e] == 1) goto LAB_040bdb28;
      if (param_4[0x5e] == 0xff) goto LAB_040bd618;
      if (param_4[0x60] == 1) goto LAB_040bdb32;
      if (param_4[0x60] == 0xff) goto LAB_040bd618;
      if (param_4[0x62] == 1) goto LAB_040bdb3c;
      if (param_4[0x62] == 0xff) goto LAB_040bd618;
      if (param_4[100] == 1) goto LAB_040bdb46;
      if (param_4[100] == 0xff) goto LAB_040bd618;
      if (param_4[0x66] == 1) goto LAB_040bdb50;
      if (param_4[0x66] == 0xff) goto LAB_040bd618;
      if (param_4[0x68] == 1) goto LAB_040bdb5a;
      if ((param_4[0x68] == 0xff) || (param_4[0x6a] != 1)) goto LAB_040bd618;
      goto LAB_040bd8e3;
    }
    goto LAB_040bd618;
  case 5:
    eON_AppendShaderCompileMessage(param_2,"tempRegister%s",local_90,pcVar6);
    pcVar5 = local_90;
    break;
  case 6:
    if ((*param_4 & 0x40) == 0) {
      pcVar5 = param_5;
      eON_AppendShaderCompileMessage(param_2,"TextureStageConstant%u%s",param_5,local_90);
    }
    else {
      pcVar5 = param_5;
      eON_AppendShaderCompileMessage(param_2,"TextureStageConstant[%u]%s",param_5,local_90);
    }
    bVar10 = param_1[1];
    pcVar6 = local_90;
    if ((bVar10 >> ((uint)param_5 & 0x1f) & 1) == 0) {
      if ((*param_4 & 0x40) == 0) {
        pcVar5 = param_5;
        eON_AppendShaderCompileMessage
                  (param_3,"uniform vec4 TextureStageConstant%u;\n",param_5,local_90);
        bVar10 = param_1[1];
      }
      param_1[1] = (byte)(1 << ((byte)param_5 & 0x1f)) | bVar10;
      pcVar6 = local_90;
    }
    break;
  default:
    FUN_0402cd10(0xf,"Unrecognized texture stage arg type ( %u ) in texture stage %u!",pcVar5,
                 param_5);
    eON_AppendShaderCompileMessage(param_2,"(unknown)");
    pcVar6 = param_5;
  }
  if (bVar9) {
    eON_AppendShaderCompileMessage(param_2," );\n",pcVar5,pcVar6);
    return;
  }
  eON_AppendShaderCompileMessage(param_2,";\n",pcVar5,pcVar6);
  return;
}

// --- fixedPipelineEmulation_040c1240 @0x040c1240 ---
/* source: fixedPipelineEmulation */

void fixedPipelineEmulation_040c1240
               (int param_1,undefined4 param_2,undefined4 param_3,uint param_4,byte param_5,
               char *param_6,undefined4 param_7,byte param_8,char param_9)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  undefined **ppuVar5;
  char *pcVar6;
  undefined4 *puVar7;
  bool bVar8;
  byte bVar9;
  char *local_17c;
  char local_16c [256];
  undefined4 local_6c [23];
  
  bVar9 = 0;
  if (param_6 == (char *)0x0) {
    FUN_0400a810("coordBias",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                 ,0x428,
                 "void FragmentShaderCompiler::GenerateTexSample(TextBuffer&, TextBuffer&, int32_t, uint8_t, const char*, const char*, bool, bool)"
                );
  }
  if ((param_5 & 0x10) == 0) {
    FUN_0400a810("textureSettings & 0x10",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                 ,0x429,
                 "void FragmentShaderCompiler::GenerateTexSample(TextBuffer&, TextBuffer&, int32_t, uint8_t, const char*, const char*, bool, bool)"
                );
  }
  bVar8 = (param_5 & 0x20) == 0;
  if ((param_5 & 8) == 0) {
    ppuVar5 = &PTR_s_eON_Varyings_0__042ff180;
    puVar7 = local_6c;
    for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = *ppuVar5;
      ppuVar5 = ppuVar5 + (uint)bVar9 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
    }
    if (!bVar8) {
      if (param_4 == 0xffffffff) {
        pcVar6 = "vec4(0.0)";
        if (param_8 == 0) {
          FUN_0400a810("varyingsOnly",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                       ,0x22,"const char* TexVaryingName(bool, int32_t)");
        }
      }
      else {
        pcVar6 = (char *)local_6c[(uint)(param_8 ^ 1) + param_4 * 2];
      }
      pcVar1 = "";
      if (param_9 == '\0') {
        pcVar1 = "3D";
      }
      sprintf(local_16c,"texture%s( PSampler%u, %s.rgb%s )",pcVar1,param_4,pcVar6,param_6);
      goto joined_r0x040c147c;
    }
LAB_040c130c:
    if (param_4 == 0xffffffff) {
      pcVar6 = "vec4(0.0)";
      if (param_8 == 0) {
        FUN_0400a810("varyingsOnly",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                     ,0x22,"const char* TexVaryingName(bool, int32_t)");
      }
    }
    else {
      pcVar6 = (char *)local_6c[(uint)(param_8 ^ 1) + param_4 * 2];
    }
    pcVar1 = "";
    if (param_9 == '\0') {
      pcVar1 = "2D";
    }
    sprintf(local_16c,"texture%s( PSampler%u, %s.rg%s )",pcVar1,param_4,pcVar6,param_6);
  }
  else if (*param_6 == '\0') {
    if ((param_5 & 4) == 0) goto LAB_040c14d8;
LAB_040c12af:
    bVar4 = param_5 & 3;
    if (bVar4 == 2) {
LAB_040c164d:
      ppuVar5 = &PTR_s_eON_Varyings_0__042ff180;
      puVar7 = local_6c;
      for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar7 = *ppuVar5;
        ppuVar5 = ppuVar5 + (uint)bVar9 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      }
      if (param_4 == 0xffffffff) {
        pcVar6 = "vec4(0.0)";
        local_17c = "vec4(0.0)";
        if (param_8 == 0) {
          FUN_0400a810("varyingsOnly",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                       ,0x22,"const char* TexVaryingName(bool, int32_t)");
          FUN_0400a810("varyingsOnly",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                       ,0x22,"const char* TexVaryingName(bool, int32_t)");
        }
      }
      else {
        iVar2 = (uint)(param_8 ^ 1) + param_4 * 2;
        local_17c = (char *)local_6c[iVar2];
        ppuVar5 = &PTR_s_eON_Varyings_0__042ff180;
        puVar7 = local_6c;
        for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = *ppuVar5;
          ppuVar5 = ppuVar5 + (uint)bVar9 * -2 + 1;
          puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        }
        pcVar6 = (char *)local_6c[iVar2];
      }
      pcVar1 = "";
      if (param_9 == '\0') {
        pcVar1 = "2D";
      }
      sprintf(local_16c,"texture%s( PSampler%u, ( %s.rg / %s.a )%s )",pcVar1,param_4,pcVar6,
              local_17c,param_6);
    }
    else if (bVar4 == 3) {
      if (bVar8) goto LAB_040c164d;
      ppuVar5 = &PTR_s_eON_Varyings_0__042ff180;
      puVar7 = local_6c;
      for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar7 = *ppuVar5;
        ppuVar5 = ppuVar5 + (uint)bVar9 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      }
      if (param_4 == 0xffffffff) {
        pcVar6 = "vec4(0.0)";
        if (param_8 == 0) {
          FUN_0400a810("varyingsOnly",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                       ,0x22,"const char* TexVaryingName(bool, int32_t)");
        }
      }
      else {
        pcVar6 = (char *)local_6c[(uint)(param_8 ^ 1) + param_4 * 2];
      }
      pcVar1 = "";
      if (param_9 == '\0') {
        pcVar1 = "3D";
      }
      sprintf(local_16c,"texture%sProj( PSampler%u, %s )",pcVar1,param_4,pcVar6);
    }
    else if (bVar4 == 1) {
      ppuVar5 = &PTR_s_eON_Varyings_0__042ff180;
      puVar7 = local_6c;
      for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar7 = *ppuVar5;
        ppuVar5 = ppuVar5 + (uint)bVar9 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      }
      if (param_4 == 0xffffffff) {
        pcVar6 = "vec4(0.0)";
        local_17c = "vec4(0.0)";
        if (param_8 == 0) {
          FUN_0400a810("varyingsOnly",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                       ,0x22,"const char* TexVaryingName(bool, int32_t)");
          FUN_0400a810("varyingsOnly",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                       ,0x22,"const char* TexVaryingName(bool, int32_t)");
        }
      }
      else {
        iVar2 = (uint)(param_8 ^ 1) + param_4 * 2;
        local_17c = (char *)local_6c[iVar2];
        ppuVar5 = &PTR_s_eON_Varyings_0__042ff180;
        puVar7 = local_6c;
        for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = *ppuVar5;
          ppuVar5 = ppuVar5 + (uint)bVar9 * -2 + 1;
          puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        }
        pcVar6 = (char *)local_6c[iVar2];
      }
      pcVar1 = "";
      if (param_9 == '\0') {
        pcVar1 = "2D";
      }
      sprintf(local_16c,"texture%sProj( PSampler%u, vec3( %s.r, 0.0, %s.g ) )",pcVar1,param_4,pcVar6
              ,local_17c);
    }
    else {
      FUN_0402cd10(0xf,"COUNT1|PROJECTED in texture settings!");
    }
  }
  else {
    FUN_0402cd10(10,
                 "Texture transform flags used with texture bias! Untested, probably wrong! Make sure it\'s rendered correctly!"
                );
    if ((param_5 & 4) != 0) goto LAB_040c12af;
LAB_040c14d8:
    bVar4 = param_5 & 3;
    if (bVar4 == 2) {
      ppuVar5 = &PTR_s_eON_Varyings_0__042ff180;
      puVar7 = local_6c;
      for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar7 = *ppuVar5;
        ppuVar5 = ppuVar5 + (uint)bVar9 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      }
      if (bVar8) goto LAB_040c130c;
      if (param_4 == 0xffffffff) {
        pcVar6 = "vec4(0.0)";
        if (param_8 == 0) {
          FUN_0400a810("varyingsOnly",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                       ,0x22,"const char* TexVaryingName(bool, int32_t)");
        }
      }
      else {
        pcVar6 = (char *)local_6c[(uint)(param_8 ^ 1) + param_4 * 2];
      }
      pcVar1 = "";
      if (param_9 == '\0') {
        pcVar1 = "3D";
      }
      sprintf(local_16c,"texture%s( PSampler%u, %s.rgb )",pcVar1,param_4,pcVar6);
    }
    else if (bVar4 == 3) {
      FUN_0402cd10(0xf,"COUNT4 without PROJECTED in texture settings!");
    }
    else {
      ppuVar5 = &PTR_s_eON_Varyings_0__042ff180;
      puVar7 = local_6c;
      for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar7 = *ppuVar5;
        ppuVar5 = ppuVar5 + (uint)bVar9 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      }
      if (bVar4 == 1) goto LAB_040c130c;
      if (param_4 == 0xffffffff) {
        pcVar6 = "vec4(0.0)";
        if (param_8 == 0) {
          FUN_0400a810("varyingsOnly",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                       ,0x22,"const char* TexVaryingName(bool, int32_t)");
        }
      }
      else {
        pcVar6 = (char *)local_6c[(uint)(param_8 ^ 1) + param_4 * 2];
      }
      pcVar1 = "";
      if (param_9 == '\0') {
        pcVar1 = "2D";
      }
      sprintf(local_16c,"texture%s( PSampler%u, vec2( %s.r, 0.0 )%s )",pcVar1,param_4,pcVar6,param_6
             );
    }
  }
joined_r0x040c147c:
  if (param_5 >> 6 == 1) {
    eON_AppendShaderCompileMessage(param_2,"vec4( 1.0, 1.0, 1.0, %s.r )%s",local_16c,param_7);
    goto joined_r0x040c14a3;
  }
  param_5 = param_5 >> 6;
  if (param_5 != 0) {
    if (param_5 == 2) {
      eON_AppendShaderCompileMessage(param_2,"vec4( %s.rrr, 1.0 )%s",local_16c,param_7);
      goto joined_r0x040c14a3;
    }
    if (param_5 == 3) {
      eON_AppendShaderCompileMessage(param_2,"vec4( %s.rrrg )%s",local_16c,param_7);
      goto joined_r0x040c14a3;
    }
    FUN_0400a810("false",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                 ,0x45e,
                 "void FragmentShaderCompiler::GenerateTexSample(TextBuffer&, TextBuffer&, int32_t, uint8_t, const char*, const char*, bool, bool)"
                );
  }
  eON_AppendShaderCompileMessage(param_2,"%s%s",local_16c,param_7);
joined_r0x040c14a3:
  if (7 < param_4) {
    FUN_0400a810("( stageNo >= 0 ) && ( stageNo < 8 )",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                 ,0x465,
                 "void FragmentShaderCompiler::GenerateTexSample(TextBuffer&, TextBuffer&, int32_t, uint8_t, const char*, const char*, bool, bool)"
                );
  }
  bVar9 = (byte)(1 << ((byte)param_4 & 0x1f));
  if ((*(byte *)(param_1 + 2) & bVar9) == 0) {
    eON_AppendShaderCompileMessage
              (param_3,"uniform sampler%uD PSampler%u;\n",3 - (uint)bVar8,param_4);
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | bVar9;
  }
  return;
}

// --- fixedPipelineEmulation_040c1af0 @0x040c1af0 ---
/* source: fixedPipelineEmulation */

void fixedPipelineEmulation_040c1af0
               (char *param_1,undefined4 param_2,char *param_3,byte *param_4,char *param_5,
               undefined4 param_6,char param_7,byte param_8,byte param_9,char param_10)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined **ppuVar7;
  int *piVar8;
  bool bVar9;
  byte bVar10;
  char *pcVar11;
  char *local_94;
  int local_80 [20];
  undefined4 local_30;
  undefined2 local_2c;
  undefined4 local_2a;
  undefined1 local_26;
  undefined4 local_25;
  undefined1 local_21;
  undefined2 local_20;
  undefined1 local_1e;
  char local_1d [13];
  
  bVar10 = 0;
  local_30 = 0x6161612e;
  local_2c = 0x61;
  local_1d[0] = '\0';
  local_2a = 0x6161612e;
  local_26 = 0;
  local_25 = 0x6267722e;
  local_21 = 0;
  local_20 = 0x612e;
  local_1e = 0;
  if (param_10 == '\0') {
    if (param_7 != '\0') {
      local_94 = (char *)&local_25;
      if ((param_8 & 0x20) != 0) {
        local_94 = (char *)&local_2a;
      }
      pcVar6 = (char *)&local_25;
      goto LAB_040c1b7f;
    }
    pcVar6 = (char *)&local_20;
    bVar3 = false;
    bVar2 = false;
    local_94 = pcVar6;
  }
  else {
    if (param_7 == '\0') {
      FUN_0400a810("colorArg",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/d3d9/fixedPipelineEmulation.cpp"
                   ,0x47e,
                   "void FragmentShaderCompiler::PrepareArg(TextBuffer&, TextBuffer&, const FragmentShaderConfig&, int32_t, int32_t, bool, uint8_t, uint8_t, bool)"
                  );
    }
    local_94 = local_1d;
    if ((param_8 & 0x20) != 0) {
      local_94 = (char *)&local_30;
    }
    pcVar6 = local_1d;
    if (param_7 == '\0') {
LAB_040c1ca8:
      bVar3 = false;
      bVar2 = false;
    }
    else {
LAB_040c1b7f:
      bVar3 = false;
      bVar2 = false;
      if ((param_8 & 0xf) == 2) {
        if (((param_9 & 0x10) == 0) || ((int)param_5 < 1)) goto LAB_040c1ca8;
        pcVar5 = param_5 + -1;
        if (param_4[(int)pcVar5 * 10 + 1] != 0x16) {
          if (param_4[(int)pcVar5 * 10 + 1] != 0x17) goto LAB_040c1b9b;
          bVar3 = true;
        }
        if ((*param_4 & 0x40) == 0) {
          eON_AppendShaderCompileMessage
                    (param_2,
                     "\tbumpEnvMapPixel.rg = bumpEnvMapPixel.rr * BumpEnvMap%u.rg + bumpEnvMapPixel.gg * BumpEnvMap%u.ba;\n"
                     ,pcVar5,pcVar5);
        }
        else {
          eON_AppendShaderCompileMessage
                    (param_2,
                     "\tbumpEnvMapPixel.rg = bumpEnvMapPixel.rr * BumpEnvMap[%u].rg + bumpEnvMapPixel.gg * BumpEnvMap[%u].ba;\n"
                     ,pcVar5,pcVar5);
        }
        if (bVar3) {
          if ((*param_4 & 0x40) == 0) {
            pcVar11 = 
            "\tbumpEnvMapPixel.b = bumpEnvMapPixel.b * LuminanceScaleOffset%u.r + LuminanceScaleOffset%u.g;\n"
            ;
          }
          else {
            pcVar11 = 
            "\tbumpEnvMapPixel.b = bumpEnvMapPixel.b * LuminanceScaleOffset[%u].r + LuminanceScaleOffset[%u].g;\n"
            ;
          }
          eON_AppendShaderCompileMessage(param_2,pcVar11,pcVar5,pcVar5);
          bVar2 = true;
        }
        else {
          bVar2 = true;
        }
      }
    }
  }
LAB_040c1b9b:
  pcVar5 = (char *)(uint)param_8;
  eON_AppendShaderCompileMessage(param_2,"\tStageArg%u%s = ",param_6,pcVar6);
  bVar9 = (param_8 & 0x10) != 0;
  if (bVar9) {
    if (param_7 == '\0') {
      eON_AppendShaderCompileMessage(param_2,"( 1.0 - ",param_6,pcVar6);
    }
    else {
      eON_AppendShaderCompileMessage(param_2,"( vec3( 1.0 ) - ",param_6,pcVar6);
    }
  }
  switch((uint)pcVar5 & 0xf) {
  case 0:
    goto switchD_040c1c80_caseD_0;
  case 1:
    if (param_5 != (char *)0x0) {
      eON_AppendShaderCompileMessage(param_2,"currentRegister%s",local_94,pcVar6);
      pcVar5 = local_94;
      break;
    }
    goto switchD_040c1c80_caseD_0;
  case 2:
    if ((param_9 & 0x10) != 0) {
      if (bVar2) {
        fixedPipelineEmulation_040c1240
                  (param_1,param_2,param_3,param_5,param_9," + bumpEnvMapPixel.rg",local_94,
                   (*param_4 & 0x20) != 0,(*param_4 & 0x40) != 0);
        local_94 = param_5;
      }
      else {
        param_3 = param_5;
        eON_AppendShaderCompileMessage(param_2,"texSample%u%s",param_5,local_94);
        param_1[3] = param_1[3] | (byte)(1 << ((byte)param_5 & 0x1f));
      }
      pcVar5 = param_3;
      pcVar6 = local_94;
      if (bVar3) {
        eON_AppendShaderCompileMessage(param_2," * bumpEnvMapPixel.b",param_3,local_94);
        pcVar5 = param_3;
        pcVar6 = local_94;
      }
      break;
    }
switchD_040c1c80_caseD_0:
    pcVar5 = "gl_Color";
    if ((*param_4 & 0x20) != 0) {
      if (param_4[0x58] == 0) {
LAB_040c22ad:
        iVar4 = 0;
      }
      else {
        pcVar5 = "vec4(0.0)";
        if (param_4[0x58] == 0xff) goto LAB_040c1dc8;
        if (param_4[0x5a] == 0) {
LAB_040c22b4:
          iVar4 = 1;
        }
        else {
          if (param_4[0x5a] == 0xff) goto LAB_040c1dc8;
          if (param_4[0x5c] == 0) {
LAB_040c22be:
            iVar4 = 2;
          }
          else {
            if (param_4[0x5c] == 0xff) goto LAB_040c1dc8;
            if (param_4[0x5e] == 0) {
LAB_040c22c8:
              iVar4 = 3;
            }
            else {
              if (param_4[0x5e] == 0xff) goto LAB_040c1dc8;
              if (param_4[0x60] == 0) {
LAB_040c22d2:
                iVar4 = 4;
              }
              else {
                if (param_4[0x60] == 0xff) goto LAB_040c1dc8;
                if (param_4[0x62] == 0) {
LAB_040c22dc:
                  iVar4 = 5;
                }
                else {
                  if (param_4[0x62] == 0xff) goto LAB_040c1dc8;
                  if (param_4[100] == 0) {
LAB_040c22e6:
                    iVar4 = 6;
                  }
                  else {
                    if (param_4[100] == 0xff) goto LAB_040c1dc8;
                    if (param_4[0x66] == 0) {
LAB_040c22f0:
                      iVar4 = 7;
                    }
                    else {
                      if (param_4[0x66] == 0xff) goto LAB_040c1dc8;
                      if (param_4[0x68] == 0) {
LAB_040c22fa:
                        iVar4 = 8;
                      }
                      else {
                        if ((param_4[0x68] == 0xff) || (param_4[0x6a] != 0)) goto LAB_040c1dc8;
LAB_040c2083:
                        iVar4 = 9;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      bVar1 = param_4[iVar4 * 2 + 0x59];
      ppuVar7 = &PTR_s_eON_Varyings_0__042ff180;
      piVar8 = local_80;
      for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar8 = (int)*ppuVar7;
        ppuVar7 = ppuVar7 + (uint)bVar10 * -2 + 1;
        piVar8 = piVar8 + (uint)bVar10 * -2 + 1;
      }
      pcVar5 = (char *)local_80[(uint)bVar1 * 2];
    }
LAB_040c1dc8:
    eON_AppendShaderCompileMessage(param_2,"%s%s",pcVar5,local_94);
    pcVar6 = local_94;
    break;
  case 3:
    eON_AppendShaderCompileMessage(param_2,"TextureFactor%s",local_94,pcVar6);
    pcVar5 = local_94;
    if (*param_1 == '\0') {
      if ((*param_4 & 0x40) == 0) {
        eON_AppendShaderCompileMessage(param_3,"uniform vec4 TextureFactor;\n",local_94,pcVar6);
      }
      *param_1 = '\x01';
      pcVar5 = local_94;
    }
    break;
  case 4:
    pcVar5 = "gl_SecondaryColor";
    if ((*param_4 & 0x20) != 0) {
      if (param_4[0x58] == 1) goto LAB_040c22ad;
      pcVar5 = "vec4(0.0)";
      if (param_4[0x58] == 0xff) goto LAB_040c1dc8;
      if (param_4[0x5a] == 1) goto LAB_040c22b4;
      if (param_4[0x5a] == 0xff) goto LAB_040c1dc8;
      if (param_4[0x5c] == 1) goto LAB_040c22be;
      if (param_4[0x5c] == 0xff) goto LAB_040c1dc8;
      if (param_4[0x5e] == 1) goto LAB_040c22c8;
      if (param_4[0x5e] == 0xff) goto LAB_040c1dc8;
      if (param_4[0x60] == 1) goto LAB_040c22d2;
      if (param_4[0x60] == 0xff) goto LAB_040c1dc8;
      if (param_4[0x62] == 1) goto LAB_040c22dc;
      if (param_4[0x62] == 0xff) goto LAB_040c1dc8;
      if (param_4[100] == 1) goto LAB_040c22e6;
      if (param_4[100] == 0xff) goto LAB_040c1dc8;
      if (param_4[0x66] == 1) goto LAB_040c22f0;
      if (param_4[0x66] == 0xff) goto LAB_040c1dc8;
      if (param_4[0x68] == 1) goto LAB_040c22fa;
      if ((param_4[0x68] == 0xff) || (param_4[0x6a] != 1)) goto LAB_040c1dc8;
      goto LAB_040c2083;
    }
    goto LAB_040c1dc8;
  case 5:
    eON_AppendShaderCompileMessage(param_2,"tempRegister%s",local_94,pcVar6);
    pcVar5 = local_94;
    break;
  case 6:
    pcVar5 = param_5;
    if ((*param_4 & 0x40) == 0) {
      eON_AppendShaderCompileMessage(param_2,"TextureStageConstant%u%s",param_5,local_94);
    }
    else {
      eON_AppendShaderCompileMessage(param_2,"TextureStageConstant[%u]%s",param_5,local_94);
    }
    bVar10 = param_1[1];
    pcVar6 = local_94;
    if ((bVar10 >> ((uint)param_5 & 0x1f) & 1) == 0) {
      if ((*param_4 & 0x40) == 0) {
        pcVar5 = param_5;
        eON_AppendShaderCompileMessage
                  (param_3,"uniform vec4 TextureStageConstant%u;\n",param_5,local_94);
        bVar10 = param_1[1];
      }
      param_1[1] = bVar10 | (byte)(1 << ((byte)param_5 & 0x1f));
      pcVar6 = local_94;
    }
    break;
  default:
    FUN_0402cd10(0xf,"Unrecognized texture stage arg type ( %u ) in texture stage %u!",pcVar5,
                 param_5);
    eON_AppendShaderCompileMessage(param_2,"(unknown)");
    pcVar6 = param_5;
  }
  if (bVar9) {
    eON_AppendShaderCompileMessage(param_2," );\n",pcVar5,pcVar6);
    return;
  }
  eON_AppendShaderCompileMessage(param_2,";\n",pcVar5,pcVar6);
  return;
}

