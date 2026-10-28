// Recovered source: eon2/src/core/ImageScaling.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- InterpolateRGB @0x04012c00 ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* source: ImageScaling */

void InterpolateRGB(int param_1,uint param_2,uint param_3,undefined1 *param_4,uint param_5,
                   uint param_6,uint param_7,int param_8,int param_9)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint3 uVar5;
  uint3 uVar6;
  uint3 uVar7;
  uint3 uVar8;
  undefined3 uVar9;
  float fVar10;
  int *piVar11;
  int *__ptr;
  int iVar12;
  int iVar13;
  void *__ptr_00;
  int iVar14;
  uint3 *puVar15;
  int *piVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 *local_bc;
  uint local_b0;
  undefined1 *local_68;
  uint local_64;
  uint local_58;
  int *local_54;
  undefined1 *local_50;
  int local_44;
  int *local_40;
  uint local_3c;
  uint3 *local_38;
  uint3 *local_34;
  undefined1 *local_30;
  undefined1 local_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  
  if ((param_7 & 0x600000) != 0) {
    FUN_0402cd10(10,"D3DX_FILTER_SRGB_IN and D3DX_FILTER_SRGB_OUT not implemented! Add them.");
  }
  param_7 = param_7 & 0xffff;
  if (param_7 == 0) {
    FUN_0400a810("filterMethod != 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/ImageScaling.cpp",0x1de,
                 "void ScaleImage24(const uint32_t*, uint32_t, uint32_t, uint32_t*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t)"
                );
LAB_04012fb7:
    FUN_0400a810();
    return;
  }
  if (param_7 == 3) {
    piVar11 = (int *)FUN_04010fd0();
    __ptr = (int *)FUN_04010fd0();
    if (param_6 != 0) {
      local_50 = param_4;
      local_54 = (int *)0x0;
      local_40 = __ptr;
      do {
        fVar24 = _DAT_042dbf50;
        fVar10 = DAT_042dbf3c;
        iVar12 = param_8 * *local_40 + param_1;
        iVar13 = param_8 * local_40[1] + param_1;
        if (param_5 != 0) {
          local_34 = (uint3 *)local_50;
          piVar16 = piVar11;
          do {
            uVar5 = *(uint3 *)(iVar12 + *piVar16 * 3);
            uVar6 = *(uint3 *)(iVar12 + piVar16[1] * 3);
            uVar7 = *(uint3 *)(*piVar16 * 3 + iVar13);
            fVar26 = (float)piVar16[2];
            uVar8 = *(uint3 *)(piVar16[1] * 3 + iVar13);
            if (fVar26 < 0.0) {
              FUN_0400a810("factor >= 0.f",
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/ImageScaling.cpp"
                           ,0x75,"uint32_t InterpolateRGB(uint32_t, uint32_t, float)");
            }
            if (fVar10 < fVar26) {
              FUN_0400a810("factor <= 1.f",
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/ImageScaling.cpp"
                           ,0x76,"uint32_t InterpolateRGB(uint32_t, uint32_t, float)");
            }
            fVar23 = fVar10 - fVar26;
            fVar21 = (float)(uVar5 >> 8 & 0xff) * fVar23 + (float)((uVar6 & 0xff00) >> 8) * fVar26;
            fVar22 = (float)(uVar5 >> 0x10) * fVar23 + (float)(uVar6 >> 0x10) * fVar26;
            fVar23 = (float)(uVar5 & 0xff) * fVar23 + (float)(uVar6 & 0xff) * fVar26;
            fVar26 = (float)piVar16[2];
            if (fVar26 < 0.0) {
              FUN_0400a810("factor >= 0.f",
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/ImageScaling.cpp"
                           ,0x75,"uint32_t InterpolateRGB(uint32_t, uint32_t, float)");
            }
            if (fVar10 < fVar26) {
              FUN_0400a810("factor <= 1.f",
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/ImageScaling.cpp"
                           ,0x76,"uint32_t InterpolateRGB(uint32_t, uint32_t, float)");
            }
            fVar25 = fVar10 - fVar26;
            fVar27 = (float)((uVar7 & 0xff00) >> 8) * fVar25 +
                     (float)((uVar8 & 0xff00) >> 8) * fVar26;
            fVar29 = (float)(uVar7 >> 0x10) * fVar25 + (float)(uVar8 >> 0x10) * fVar26;
            fVar25 = (float)(uVar7 & 0xff) * fVar25 + (float)(uVar8 & 0xff) * fVar26;
            fVar26 = (float)local_40[2];
            if (fVar26 < 0.0) {
              FUN_0400a810("factor >= 0.f",
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/ImageScaling.cpp"
                           ,0x75,"uint32_t InterpolateRGB(uint32_t, uint32_t, float)");
            }
            if (fVar10 < fVar26) {
              FUN_0400a810("factor <= 1.f",
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/ImageScaling.cpp"
                           ,0x76,"uint32_t InterpolateRGB(uint32_t, uint32_t, float)");
            }
            fVar28 = fVar10 - fVar26;
            piVar16 = piVar16 + 4;
            fVar21 = (float)((int)(fVar21 - (float)((uint)fVar24 & -(uint)(fVar24 <= fVar21))) &
                            0xff) * fVar28 +
                     (float)((int)(fVar27 - (float)((uint)fVar24 & -(uint)(fVar24 <= fVar27))) &
                            0xff) * fVar26;
            fVar22 = (float)((int)(fVar22 - (float)((uint)fVar24 & -(uint)(fVar24 <= fVar22))) &
                            0xff) * fVar28 +
                     (float)((int)(fVar29 - (float)((uint)fVar24 & -(uint)(fVar24 <= fVar29))) &
                            0xff) * fVar26;
            fVar26 = (float)((int)(fVar23 - (float)((uint)fVar24 & -(uint)(fVar24 <= fVar23))) &
                            0xff) * fVar28 +
                     (float)((int)(fVar25 - (float)((uint)fVar24 & -(uint)(fVar24 <= fVar25))) &
                            0xff) * fVar26;
            local_20 = (undefined1)(int)(fVar26 - (float)((uint)fVar24 & -(uint)(fVar24 <= fVar26)))
            ;
            *(undefined1 *)local_34 = local_20;
            uStack_1f = (undefined1)
                        (int)(fVar21 - (float)((uint)fVar24 & -(uint)(fVar24 <= fVar21)));
            *(undefined1 *)((int)local_34 + 1) = uStack_1f;
            uStack_1e = (undefined1)
                        (int)(fVar22 - (float)((uint)fVar24 & -(uint)(fVar24 <= fVar22)));
            *(undefined1 *)((int)local_34 + 2) = uStack_1e;
            local_34 = (uint3 *)((int)local_34 + 3);
          } while (local_34 != (uint3 *)(local_50 + param_5 * 3));
        }
        local_54 = (int *)((int)local_54 + 1);
        local_40 = local_40 + 4;
        local_50 = local_50 + param_9;
      } while (local_54 != (int *)param_6);
    }
    free(piVar11);
  }
  else if (param_7 < 4) {
    if (param_7 != 2) goto LAB_04012fb7;
    __ptr_00 = (void *)FUN_04010fd0();
    __ptr = (int *)FUN_04010fd0();
    if (param_6 != 0) {
      local_30 = param_4;
      local_3c = 0;
      local_38 = (uint3 *)__ptr;
      do {
        iVar12 = *(int *)(local_38 + 3);
        if (param_5 != 0) {
          puVar18 = local_30;
          local_50 = __ptr_00;
          do {
            uVar9 = *(undefined3 *)(*(int *)((int)local_50 + 0xc) * 3 + param_8 * iVar12 + param_1);
            local_20 = (undefined1)uVar9;
            *puVar18 = local_20;
            uStack_1f = (undefined1)((uint3)uVar9 >> 8);
            puVar18[1] = uStack_1f;
            uStack_1e = (undefined1)((uint3)uVar9 >> 0x10);
            puVar18[2] = uStack_1e;
            puVar18 = puVar18 + 3;
            local_50 = (void *)((int)local_50 + 0x10);
          } while (puVar18 != local_30 + param_5 * 3);
        }
        local_3c = local_3c + 1;
        local_38 = local_38 + 4;
        local_30 = local_30 + param_9;
      } while (local_3c != param_6);
    }
    free(__ptr_00);
  }
  else if (param_7 == 4) {
    piVar11 = malloc(param_5 * 8 + 8);
    fVar10 = DAT_042dbf34;
    uVar20 = 0;
    fVar26 = (float)(param_2 >> 0x10) * DAT_042dbf34;
    fVar24 = (float)(param_5 >> 0x10) * DAT_042dbf34;
    do {
      fVar21 = ((float)(uVar20 >> 0x10) * fVar10 + (float)(uVar20 & 0xffff)) *
               ((fVar26 + (float)(param_2 & 0xffff)) / (fVar24 + (float)(param_5 & 0xffff)));
      fVar22 = floorf(fVar21);
      piVar11[uVar20 * 2] = (int)fVar22;
      piVar11[uVar20 * 2 + 1] = (int)(fVar21 - (float)(int)fVar22);
      uVar20 = uVar20 + 1;
    } while (uVar20 <= param_5);
    uVar20 = 0;
    __ptr = malloc(param_6 * 8 + 8);
    fVar26 = (float)(param_3 >> 0x10) * DAT_042dbf34;
    fVar24 = (float)(param_6 >> 0x10) * DAT_042dbf34;
    do {
      fVar21 = ((float)(uVar20 >> 0x10) * fVar10 + (float)(uVar20 & 0xffff)) *
               ((fVar26 + (float)(param_3 & 0xffff)) / (fVar24 + (float)(param_6 & 0xffff)));
      fVar22 = floorf(fVar21);
      __ptr[uVar20 * 2] = (int)fVar22;
      __ptr[uVar20 * 2 + 1] = (int)(fVar21 - (float)(int)fVar22);
      fVar21 = DAT_042dbf3c;
      uVar20 = uVar20 + 1;
    } while (uVar20 <= param_6);
    if (param_6 != 0) {
      local_bc = param_4;
      local_b0 = 0;
      do {
        fVar24 = _DAT_042dbf50;
        uVar20 = local_b0 + 1;
        piVar16 = __ptr + local_b0 * 2;
        piVar1 = __ptr + uVar20 * 2;
        if (param_5 != 0) {
          local_64 = 0;
          iVar12 = *piVar16;
          iVar13 = *piVar1;
          local_44 = *piVar11;
          local_68 = local_bc;
          iVar19 = iVar12 + 1;
          iVar14 = param_8 * iVar12 + param_1;
          do {
            piVar2 = piVar11 + local_64 * 2;
            local_64 = local_64 + 1;
            piVar3 = piVar11 + local_64 * 2;
            if (iVar12 == iVar13) {
              iVar4 = *piVar3;
              fVar26 = (float)piVar1[1] - (float)piVar16[1];
              if (iVar4 == local_44) {
                fVar26 = ((float)piVar3[1] - (float)piVar2[1]) * fVar26;
                fVar22 = fVar26 + 0.0;
                uVar5 = *(uint3 *)(local_44 * 3 + iVar14);
                fVar23 = (fVar10 * 0.0 + (float)(uVar5 & 0xff)) * fVar26 + 0.0;
                fVar27 = (fVar10 * 0.0 + (float)((uVar5 & 0xff00) >> 8)) * fVar26 + 0.0;
                fVar29 = (fVar10 * 0.0 + (float)(uVar5 >> 0x10)) * fVar26 + 0.0;
                iVar4 = local_44;
              }
              else {
                fVar29 = (DAT_042dbf3c - (float)piVar2[1]) * fVar26;
                fVar22 = fVar29 + 0.0;
                uVar5 = *(uint3 *)(local_44 * 3 + iVar14);
                local_44 = local_44 + 1;
                fVar23 = (fVar10 * 0.0 + (float)(uVar5 & 0xff)) * fVar29 + 0.0;
                fVar27 = (fVar10 * 0.0 + (float)((uVar5 & 0xff00) >> 8)) * fVar29 + 0.0;
                fVar29 = (fVar10 * 0.0 + (float)(uVar5 >> 0x10)) * fVar29 + 0.0;
                if (local_44 < iVar4) {
                  puVar15 = (uint3 *)(local_44 * 3 + iVar14);
                  local_34 = (uint3 *)fVar29;
                  do {
                    local_44 = local_44 + 1;
                    fVar22 = fVar22 + fVar26;
                    uVar5 = *puVar15;
                    puVar15 = (uint3 *)((int)puVar15 + 3);
                    fVar23 = fVar23 + (fVar10 * 0.0 + (float)(uVar5 & 0xff)) * fVar26;
                    fVar27 = fVar27 + (fVar10 * 0.0 + (float)((uVar5 & 0xff00) >> 8)) * fVar26;
                    fVar29 = (fVar10 * 0.0 + (float)(uVar5 >> 0x10)) * fVar26 + (float)local_34;
                    local_34 = (uint3 *)fVar29;
                  } while (local_44 < iVar4);
                }
                if (iVar4 < (int)param_2) {
                  local_30 = (undefined1 *)(fVar26 * (float)piVar3[1]);
                  fVar22 = fVar22 + (float)local_30;
                  uVar5 = *(uint3 *)(iVar4 * 3 + iVar14);
                  fVar23 = fVar23 + (fVar10 * 0.0 + (float)(uVar5 & 0xff)) * (float)local_30;
                  fVar27 = fVar27 + (fVar10 * 0.0 + (float)((uVar5 & 0xff00) >> 8)) *
                                    (float)local_30;
                  local_44 = iVar4;
LAB_04013c47:
                  fVar29 = fVar29 + (fVar10 * 0.0 + (float)(uVar5 >> 0x10)) * (float)local_30;
                  iVar4 = local_44;
                }
              }
            }
            else {
              fVar25 = fVar21 - (float)piVar16[1];
              fVar26 = (float)piVar2[1];
              iVar4 = *piVar3;
              if (iVar4 == local_44) {
                fVar25 = ((float)piVar3[1] - fVar26) * fVar25;
                fVar22 = fVar25 + 0.0;
                uVar5 = *(uint3 *)(iVar14 + local_44 * 3);
                fVar23 = (fVar10 * 0.0 + (float)(uVar5 & 0xff)) * fVar25 + 0.0;
                fVar27 = (fVar10 * 0.0 + (float)((uVar5 & 0xff00) >> 8)) * fVar25 + 0.0;
                fVar29 = (fVar10 * 0.0 + (float)(uVar5 >> 0x10)) * fVar25 + 0.0;
              }
              else {
                fVar29 = (fVar21 - fVar26) * fVar25;
                fVar22 = fVar29 + 0.0;
                uVar5 = *(uint3 *)(iVar14 + local_44 * 3);
                fVar23 = (fVar10 * 0.0 + (float)(uVar5 & 0xff)) * fVar29 + 0.0;
                iVar17 = *piVar2 + 1;
                fVar27 = (fVar10 * 0.0 + (float)((uVar5 & 0xff00) >> 8)) * fVar29 + 0.0;
                fVar29 = (fVar10 * 0.0 + (float)(uVar5 >> 0x10)) * fVar29 + 0.0;
                if (iVar17 < iVar4) {
                  puVar15 = (uint3 *)(iVar17 * 3 + iVar14);
                  local_34 = (uint3 *)fVar29;
                  do {
                    iVar17 = iVar17 + 1;
                    fVar22 = fVar22 + fVar25;
                    uVar5 = *puVar15;
                    puVar15 = (uint3 *)((int)puVar15 + 3);
                    fVar23 = fVar23 + (fVar10 * 0.0 + (float)(uVar5 & 0xff)) * fVar25;
                    fVar27 = fVar27 + (fVar10 * 0.0 + (float)((uVar5 & 0xff00) >> 8)) * fVar25;
                    fVar29 = (fVar10 * 0.0 + (float)(uVar5 >> 0x10)) * fVar25 + (float)local_34;
                    local_34 = (uint3 *)fVar29;
                  } while (iVar17 < iVar4);
                }
                if (iVar4 < (int)param_2) {
                  uVar5 = *(uint3 *)(iVar4 * 3 + iVar14);
                  fVar25 = fVar25 * (float)piVar3[1];
                  fVar22 = fVar22 + fVar25;
                  fVar23 = fVar23 + (fVar10 * 0.0 + (float)(uVar5 & 0xff)) * fVar25;
                  fVar27 = fVar27 + (fVar10 * 0.0 + (float)((uVar5 & 0xff00) >> 8)) * fVar25;
                  fVar29 = fVar29 + (fVar10 * 0.0 + (float)(uVar5 >> 0x10)) * fVar25;
                }
              }
              local_54 = (int *)(local_44 * 3);
              if (iVar19 < iVar13) {
                local_38 = (uint3 *)(param_8 * iVar19 + iVar4 * 3 + param_1);
                local_34 = (uint3 *)((local_44 + 1) * 3 + param_8 * iVar19 + param_1);
                local_3c = iVar19;
                do {
                  if (iVar4 == local_44) {
                    fVar25 = (float)piVar3[1] - fVar26;
                    fVar22 = fVar22 + fVar25;
                    uVar5 = *(uint3 *)((int)local_34 + -3);
                    fVar23 = fVar23 + (fVar10 * 0.0 + (float)(uVar5 & 0xff)) * fVar25;
                    fVar27 = fVar27 + (fVar10 * 0.0 + (float)((uVar5 & 0xff00) >> 8)) * fVar25;
                    fVar29 = fVar29 + (fVar10 * 0.0 + (float)(uVar5 >> 0x10)) * fVar25;
                    local_54 = (int *)(iVar4 * 3);
                  }
                  else {
                    fVar25 = fVar21 - fVar26;
                    fVar22 = fVar22 + fVar25;
                    uVar5 = *(uint3 *)((int)local_34 + -3);
                    fVar23 = fVar23 + (fVar10 * 0.0 + (float)(uVar5 & 0xff)) * fVar25;
                    fVar27 = fVar27 + (fVar10 * 0.0 + (float)((uVar5 & 0xff00) >> 8)) * fVar25;
                    fVar29 = fVar29 + (fVar10 * 0.0 + (float)(uVar5 >> 0x10)) * fVar25;
                    puVar15 = local_34;
                    for (iVar17 = local_44 + 1; iVar17 < iVar4; iVar17 = iVar17 + 1) {
                      fVar22 = fVar22 + fVar21;
                      uVar5 = *puVar15;
                      puVar15 = (uint3 *)((int)puVar15 + 3);
                      fVar23 = fVar23 + fVar10 * 0.0 + (float)(uVar5 & 0xff);
                      fVar27 = fVar27 + fVar10 * 0.0 + (float)((uVar5 & 0xff00) >> 8);
                      fVar29 = fVar29 + fVar10 * 0.0 + (float)(uVar5 >> 0x10);
                    }
                    local_54 = (int *)(local_44 * 3);
                    if (iVar4 < (int)param_2) {
                      fVar25 = (float)piVar3[1];
                      fVar22 = fVar22 + fVar25;
                      uVar5 = *local_38;
                      fVar23 = fVar23 + (fVar10 * 0.0 + (float)(uVar5 & 0xff)) * fVar25;
                      fVar27 = fVar27 + (fVar10 * 0.0 + (float)((uVar5 & 0xff00) >> 8)) * fVar25;
                      fVar29 = fVar29 + (fVar10 * 0.0 + (float)(uVar5 >> 0x10)) * fVar25;
                    }
                  }
                  local_3c = local_3c + 1;
                  local_38 = (uint3 *)((int)local_38 + param_8);
                  local_34 = (uint3 *)((int)local_34 + param_8);
                } while ((int)local_3c < iVar13);
              }
              if (iVar13 < (int)param_3) {
                iVar17 = iVar13 * param_8 + param_1;
                fVar25 = (float)piVar1[1];
                if (iVar4 == local_44) {
                  fVar25 = fVar25 * ((float)piVar3[1] - fVar26);
                  fVar22 = fVar22 + fVar25;
                  uVar5 = *(uint3 *)(iVar17 + (int)local_54);
                  fVar23 = fVar23 + (fVar10 * 0.0 + (float)(uVar5 & 0xff)) * fVar25;
                  fVar27 = fVar27 + (fVar10 * 0.0 + (float)((uVar5 & 0xff00) >> 8)) * fVar25;
                  fVar29 = fVar29 + (fVar10 * 0.0 + (float)(uVar5 >> 0x10)) * fVar25;
                  iVar4 = local_44;
                }
                else {
                  fVar26 = fVar25 * (fVar21 - fVar26);
                  fVar22 = fVar22 + fVar26;
                  uVar5 = *(uint3 *)(iVar17 + (int)local_54);
                  fVar23 = fVar23 + (fVar10 * 0.0 + (float)(uVar5 & 0xff)) * fVar26;
                  local_44 = local_44 + 1;
                  fVar27 = fVar27 + (fVar10 * 0.0 + (float)((uVar5 & 0xff00) >> 8)) * fVar26;
                  fVar29 = fVar29 + (fVar10 * 0.0 + (float)(uVar5 >> 0x10)) * fVar26;
                  if (local_44 < iVar4) {
                    puVar15 = (uint3 *)(local_44 * 3 + iVar17);
                    local_34 = (uint3 *)fVar29;
                    do {
                      local_44 = local_44 + 1;
                      fVar22 = fVar22 + fVar25;
                      uVar5 = *puVar15;
                      puVar15 = (uint3 *)((int)puVar15 + 3);
                      fVar23 = fVar23 + (fVar10 * 0.0 + (float)(uVar5 & 0xff)) * fVar25;
                      fVar27 = fVar27 + (fVar10 * 0.0 + (float)((uVar5 & 0xff00) >> 8)) * fVar25;
                      fVar29 = (fVar10 * 0.0 + (float)(uVar5 >> 0x10)) * fVar25 + (float)local_34;
                      local_34 = (uint3 *)fVar29;
                    } while (local_44 < iVar4);
                  }
                  if (iVar4 < (int)param_2) {
                    local_30 = (undefined1 *)(fVar25 * (float)piVar3[1]);
                    fVar22 = fVar22 + (float)local_30;
                    uVar5 = *(uint3 *)(iVar4 * 3 + iVar17);
                    fVar23 = fVar23 + (fVar10 * 0.0 + (float)(uVar5 & 0xff)) * (float)local_30;
                    fVar27 = fVar27 + (fVar10 * 0.0 + (float)((uVar5 & 0xff00) >> 8)) *
                                      (float)local_30;
                    local_44 = iVar4;
                    goto LAB_04013c47;
                  }
                }
              }
            }
            local_44 = iVar4;
            local_20 = (undefined1)
                       (int)(fVar23 / fVar22 -
                            (float)((uint)fVar24 & -(uint)(fVar24 <= fVar23 / fVar22)));
            *local_68 = local_20;
            uStack_1f = (undefined1)
                        (int)(fVar27 / fVar22 -
                             (float)((uint)fVar24 & -(uint)(fVar24 <= fVar27 / fVar22)));
            local_68[1] = uStack_1f;
            uStack_1e = (undefined1)
                        (int)(fVar29 / fVar22 -
                             (float)((uint)fVar24 & -(uint)(fVar24 <= fVar29 / fVar22)));
            local_68[2] = uStack_1e;
            local_68 = local_68 + 3;
          } while (local_64 != param_5);
        }
        local_bc = local_bc + param_9;
        local_b0 = uVar20;
      } while (uVar20 != param_6);
    }
    free(piVar11);
  }
  else {
    if (param_7 != 5) goto LAB_04012fb7;
    piVar11 = (int *)FUN_04010fd0();
    __ptr = (int *)FUN_04010fd0();
    fVar26 = _DAT_042dbf50;
    fVar24 = DAT_042dbf40;
    fVar10 = DAT_042dbf34;
    if (param_6 != 0) {
      local_50 = param_4;
      local_58 = 0;
      local_54 = __ptr;
      do {
        iVar12 = param_8 * *local_54 + param_1;
        iVar13 = param_2 * local_54[1] + param_1;
        if (param_5 != 0) {
          piVar16 = piVar11;
          puVar18 = local_50;
          do {
            uVar5 = *(uint3 *)(iVar12 + *piVar16 * 3);
            uVar6 = *(uint3 *)(iVar12 + piVar16[1] * 3);
            uVar7 = *(uint3 *)(*piVar16 * 3 + iVar13);
            uVar8 = *(uint3 *)(piVar16[1] * 3 + iVar13);
            fVar21 = (fVar10 * 0.0 +
                     (float)(((uVar8 & 0xff00) >> 8) +
                            ((uVar6 & 0xff00) >> 8) + ((uVar5 & 0xff00) >> 8) +
                            ((uVar7 & 0xff00) >> 8))) * fVar24;
            fVar22 = (fVar10 * 0.0 +
                     (float)(uint3)((uVar8 >> 0x10) +
                                   (uVar7 >> 0x10) + (uVar5 >> 0x10) + (uVar6 >> 0x10))) * fVar24;
            fVar23 = (fVar10 * 0.0 +
                     (float)(uint3)((uVar7 & 0xff) + (uVar6 & 0xff) + (uVar5 & 0xff) +
                                   (uVar8 & 0xff))) * fVar24;
            piVar16 = piVar16 + 4;
            local_20 = (undefined1)(int)(fVar23 - (float)((uint)fVar26 & -(uint)(fVar26 <= fVar23)))
            ;
            *puVar18 = local_20;
            uStack_1f = (undefined1)
                        (int)(fVar21 - (float)((uint)fVar26 & -(uint)(fVar26 <= fVar21)));
            puVar18[1] = uStack_1f;
            uStack_1e = (undefined1)
                        (int)(fVar22 - (float)((uint)fVar26 & -(uint)(fVar26 <= fVar22)));
            puVar18[2] = uStack_1e;
            puVar18 = puVar18 + 3;
          } while (puVar18 != local_50 + param_5 * 3);
        }
        local_58 = local_58 + 1;
        local_54 = local_54 + 4;
        local_50 = local_50 + param_9;
      } while (local_58 != param_6);
    }
    free(piVar11);
  }
  free(__ptr);
  return;
}

// --- InterpolateRGBA @0x04011150 ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* source: ImageScaling */

void InterpolateRGBA(int param_1,uint param_2,uint param_3,int param_4,uint param_5,uint param_6,
                    uint param_7,int param_8,int param_9)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  int *piVar6;
  int *__ptr;
  int iVar7;
  int iVar8;
  void *__ptr_00;
  int iVar9;
  int iVar10;
  void *pvVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  int local_70;
  uint local_3c;
  int *local_38;
  float local_34;
  int *local_30;
  uint local_28;
  int *local_24;
  uint local_20;
  
  if ((param_7 & 0x600000) != 0) {
    FUN_0402cd10(10,"D3DX_FILTER_SRGB_IN and D3DX_FILTER_SRGB_OUT not implemented! Add them.");
  }
  param_7 = param_7 & 0xffff;
  if (param_7 == 0) {
    FUN_0400a810("filterMethod != 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/ImageScaling.cpp",0x120,
                 "void ScaleImage32(const uint32_t*, uint32_t, uint32_t, uint32_t*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t)"
                );
LAB_0401148f:
    FUN_0400a810();
    return;
  }
  if (param_7 == 3) {
    piVar6 = (int *)FUN_04010fd0();
    __ptr = (int *)FUN_04010fd0();
    fVar5 = DAT_042dbf3c;
    if (param_6 != 0) {
      local_34 = (float)param_4;
      local_38 = (int *)0x0;
      local_30 = __ptr;
      do {
        fVar21 = _DAT_042dbf50;
        iVar7 = param_8 * *local_30 + param_1;
        iVar8 = param_8 * local_30[1] + param_1;
        if (param_5 != 0) {
          local_24 = (int *)0x0;
          piVar13 = piVar6;
          do {
            fVar23 = (float)piVar13[2];
            uVar14 = *(uint *)(iVar7 + *piVar13 * 4);
            uVar2 = *(uint *)(iVar7 + piVar13[1] * 4);
            uVar12 = *(uint *)(iVar8 + piVar13[1] * 4);
            uVar3 = *(uint *)(iVar8 + *piVar13 * 4);
            if (fVar23 < 0.0) {
              FUN_0400a810("factor >= 0.f",
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/ImageScaling.cpp"
                           ,0x61,"uint32_t InterpolateRGBA(uint32_t, uint32_t, float)");
            }
            if (fVar5 < fVar23) {
              FUN_0400a810("factor <= 1.f",
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/ImageScaling.cpp"
                           ,0x62,"uint32_t InterpolateRGBA(uint32_t, uint32_t, float)");
            }
            fVar20 = fVar5 - fVar23;
            fVar17 = (float)(uVar14 >> 8 & 0xff) * fVar20 + (float)(uVar2 >> 8 & 0xff) * fVar23;
            fVar18 = (float)(uVar14 >> 0x10 & 0xff) * fVar20 +
                     (float)(uVar2 >> 0x10 & 0xff) * fVar23;
            fVar19 = (float)(uVar14 & 0xff) * fVar20 + (float)(uVar2 & 0xff) * fVar23;
            fVar20 = (float)(uVar14 >> 0x18) * fVar20 + (float)(uVar2 >> 0x18) * fVar23;
            fVar23 = (float)piVar13[2];
            if (fVar23 < 0.0) {
              FUN_0400a810("factor >= 0.f",
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/ImageScaling.cpp"
                           ,0x61,"uint32_t InterpolateRGBA(uint32_t, uint32_t, float)");
            }
            if (fVar5 < fVar23) {
              FUN_0400a810("factor <= 1.f",
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/ImageScaling.cpp"
                           ,0x62,"uint32_t InterpolateRGBA(uint32_t, uint32_t, float)");
            }
            fVar25 = fVar5 - fVar23;
            fVar24 = (float)(uVar3 >> 8 & 0xff) * fVar25 + (float)(uVar12 >> 8 & 0xff) * fVar23;
            fVar22 = (float)(uVar3 >> 0x10 & 0xff) * fVar25 +
                     (float)(uVar12 >> 0x10 & 0xff) * fVar23;
            fVar27 = (float)(uVar3 & 0xff) * fVar25 + (float)(uVar12 & 0xff) * fVar23;
            fVar25 = (float)(uVar3 >> 0x18) * fVar25 + (float)(uVar12 >> 0x18) * fVar23;
            fVar23 = (float)local_30[2];
            if (fVar23 < 0.0) {
              FUN_0400a810("factor >= 0.f",
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/ImageScaling.cpp"
                           ,0x61,"uint32_t InterpolateRGBA(uint32_t, uint32_t, float)");
            }
            if (fVar5 < fVar23) {
              FUN_0400a810("factor <= 1.f",
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/ImageScaling.cpp"
                           ,0x62,"uint32_t InterpolateRGBA(uint32_t, uint32_t, float)");
            }
            fVar26 = fVar5 - fVar23;
            piVar13 = piVar13 + 4;
            fVar20 = (float)((int)(fVar20 - (float)((uint)fVar21 & -(uint)(fVar21 <= fVar20))) &
                            0xff) * fVar26 +
                     (float)((int)(fVar25 - (float)((uint)fVar21 & -(uint)(fVar21 <= fVar25))) &
                            0xff) * fVar23;
            fVar19 = (float)((int)(fVar19 - (float)((uint)fVar21 & -(uint)(fVar21 <= fVar19))) &
                            0xff) * fVar26 +
                     (float)((int)(fVar27 - (float)((uint)fVar21 & -(uint)(fVar21 <= fVar27))) &
                            0xff) * fVar23;
            fVar17 = (float)((int)(fVar17 - (float)((uint)fVar21 & -(uint)(fVar21 <= fVar17))) &
                            0xff) * fVar26 +
                     (float)((int)(fVar24 - (float)((uint)fVar21 & -(uint)(fVar21 <= fVar24))) &
                            0xff) * fVar23;
            fVar23 = (float)((int)(fVar18 - (float)((uint)fVar21 & -(uint)(fVar21 <= fVar18))) &
                            0xff) * fVar26 +
                     (float)((int)(fVar22 - (float)((uint)fVar21 & -(uint)(fVar21 <= fVar22))) &
                            0xff) * fVar23;
            *(uint *)((int)local_34 + (int)local_24 * 4) =
                 (int)(fVar20 - (float)((uint)fVar21 & -(uint)(fVar21 <= fVar20))) << 0x18 |
                 (int)(fVar19 - (float)((uint)fVar21 & -(uint)(fVar21 <= fVar19))) & 0xffU |
                 ((int)(fVar17 - (float)((uint)fVar21 & -(uint)(fVar21 <= fVar17))) & 0xffU) << 8 |
                 ((int)(fVar23 - (float)((uint)fVar21 & -(uint)(fVar21 <= fVar23))) & 0xffU) << 0x10
            ;
            local_24 = (int *)((int)local_24 + 1);
          } while (local_24 != (int *)param_5);
        }
        local_38 = (int *)((int)local_38 + 1);
        local_30 = local_30 + 4;
        local_34 = (float)((int)local_34 + param_9);
      } while (local_38 != (int *)param_6);
    }
    free(piVar6);
  }
  else if (param_7 < 4) {
    if (param_7 != 2) goto LAB_0401148f;
    __ptr_00 = (void *)FUN_04010fd0();
    __ptr = (int *)FUN_04010fd0();
    if (param_6 != 0) {
      local_20 = 0;
      local_24 = __ptr;
      do {
        iVar7 = local_24[3];
        if (param_5 != 0) {
          uVar14 = 0;
          pvVar11 = __ptr_00;
          do {
            piVar6 = (int *)((int)pvVar11 + 0xc);
            pvVar11 = (void *)((int)pvVar11 + 0x10);
            *(undefined4 *)(param_4 + uVar14 * 4) =
                 *(undefined4 *)(param_8 * iVar7 + param_1 + *piVar6 * 4);
            uVar14 = uVar14 + 1;
          } while (uVar14 != param_5);
        }
        local_20 = local_20 + 1;
        param_4 = param_4 + param_9;
        local_24 = local_24 + 4;
      } while (local_20 != param_6);
    }
    free(__ptr_00);
  }
  else if (param_7 == 4) {
    piVar6 = malloc(param_5 * 8 + 8);
    fVar5 = DAT_042dbf34;
    uVar14 = 0;
    fVar23 = (float)(param_2 >> 0x10) * DAT_042dbf34;
    fVar21 = (float)(param_5 >> 0x10) * DAT_042dbf34;
    do {
      fVar17 = ((float)(uVar14 >> 0x10) * fVar5 + (float)(uVar14 & 0xffff)) *
               ((fVar23 + (float)(param_2 & 0xffff)) / (fVar21 + (float)(param_5 & 0xffff)));
      fVar18 = floorf(fVar17);
      piVar6[uVar14 * 2] = (int)fVar18;
      piVar6[uVar14 * 2 + 1] = (int)(fVar17 - (float)(int)fVar18);
      uVar14 = uVar14 + 1;
    } while (uVar14 <= param_5);
    uVar14 = 0;
    __ptr = malloc(param_6 * 8 + 8);
    fVar23 = (float)(param_3 >> 0x10) * DAT_042dbf34;
    fVar21 = (float)(param_6 >> 0x10) * DAT_042dbf34;
    do {
      fVar17 = ((float)(uVar14 >> 0x10) * fVar5 + (float)(uVar14 & 0xffff)) *
               ((fVar23 + (float)(param_3 & 0xffff)) / (fVar21 + (float)(param_6 & 0xffff)));
      fVar18 = floorf(fVar17);
      __ptr[uVar14 * 2] = (int)fVar18;
      __ptr[uVar14 * 2 + 1] = (int)(fVar17 - (float)(int)fVar18);
      uVar14 = uVar14 + 1;
    } while (uVar14 <= param_6);
    if (param_6 != 0) {
      local_70 = param_4;
      uVar14 = 0;
      do {
        fVar21 = _DAT_042dbf50;
        uVar2 = uVar14 + 1;
        if (param_5 != 0) {
          iVar7 = __ptr[uVar14 * 2];
          piVar13 = __ptr + uVar2 * 2;
          fVar23 = (float)(__ptr + uVar14 * 2)[1];
          iVar8 = *piVar13;
          iVar15 = iVar7 + 1;
          iVar9 = param_8 * iVar7 + param_1;
          local_28 = *piVar6;
          iVar10 = param_8 * iVar8 + param_1;
          uVar14 = 0;
          do {
            uVar12 = uVar14 + 1;
            piVar1 = piVar6 + uVar12 * 2;
            if (iVar7 == iVar8) {
              uVar3 = *piVar1;
              fVar17 = (float)piVar13[1] - fVar23;
              if (uVar3 == local_28) {
                uVar3 = *(uint *)(iVar9 + local_28 * 4);
                fVar17 = ((float)piVar1[1] - (float)piVar6[uVar14 * 2 + 1]) * fVar17;
                fVar18 = fVar17 + 0.0;
                fVar19 = (fVar5 * 0.0 + (float)(uVar3 & 0xff)) * fVar17 + 0.0;
                fVar20 = (fVar5 * 0.0 + (float)(uVar3 >> 8 & 0xff)) * fVar17 + 0.0;
                fVar24 = (fVar5 * 0.0 + (float)(uVar3 >> 0x10 & 0xff)) * fVar17 + 0.0;
                fVar22 = ((float)(uVar3 >> 0x18) + 0.0) * fVar17 + 0.0;
                uVar3 = local_28;
              }
              else {
                uVar4 = *(uint *)(iVar9 + local_28 * 4);
                fVar22 = (DAT_042dbf3c - (float)piVar6[uVar14 * 2 + 1]) * fVar17;
                fVar18 = fVar22 + 0.0;
                fVar19 = (fVar5 * 0.0 + (float)(uVar4 & 0xff)) * fVar22 + 0.0;
                fVar20 = (fVar5 * 0.0 + (float)(uVar4 >> 8 & 0xff)) * fVar22 + 0.0;
                fVar24 = (fVar5 * 0.0 + (float)(uVar4 >> 0x10 & 0xff)) * fVar22 + 0.0;
                fVar22 = ((float)(uVar4 >> 0x18) + 0.0) * fVar22 + 0.0;
                while (local_28 = local_28 + 1, (int)local_28 < (int)uVar3) {
                  uVar14 = *(uint *)(iVar9 + local_28 * 4);
                  fVar18 = fVar18 + fVar17;
                  fVar19 = fVar19 + (fVar5 * 0.0 + (float)(uVar14 & 0xff)) * fVar17;
                  fVar20 = (fVar5 * 0.0 + (float)(uVar14 >> 8 & 0xff)) * fVar17 + fVar20;
                  fVar24 = fVar24 + (fVar5 * 0.0 + (float)(uVar14 >> 0x10 & 0xff)) * fVar17;
                  fVar22 = fVar22 + ((float)(uVar14 >> 0x18) + 0.0) * fVar17;
                }
                if ((int)uVar3 < (int)param_2) {
                  uVar14 = *(uint *)(iVar9 + uVar3 * 4);
                  local_24 = (int *)(fVar17 * (float)piVar1[1]);
                  fVar18 = fVar18 + (float)local_24;
                  fVar19 = fVar19 + (fVar5 * 0.0 + (float)(uVar14 & 0xff)) * (float)local_24;
                  fVar20 = fVar20 + (fVar5 * 0.0 + (float)(uVar14 >> 8 & 0xff)) * (float)local_24;
                  fVar24 = fVar24 + (fVar5 * 0.0 + (float)(uVar14 >> 0x10 & 0xff)) * (float)local_24
                  ;
                  local_28 = uVar3;
LAB_04012022:
                  fVar22 = fVar22 + ((float)(uVar14 >> 0x18) + 0.0) * (float)local_24;
                  uVar3 = local_28;
                }
              }
            }
            else {
              uVar3 = *piVar1;
              fVar17 = DAT_042dbf3c - fVar23;
              if (uVar3 == local_28) {
                local_34 = (float)piVar6[uVar14 * 2 + 1];
                uVar14 = *(uint *)(iVar9 + local_28 * 4);
                fVar17 = ((float)piVar1[1] - local_34) * fVar17;
                fVar18 = fVar17 + 0.0;
                fVar19 = (fVar5 * 0.0 + (float)(uVar14 & 0xff)) * fVar17 + 0.0;
                fVar20 = (fVar5 * 0.0 + (float)(uVar14 >> 8 & 0xff)) * fVar17 + 0.0;
                fVar24 = (fVar5 * 0.0 + (float)(uVar14 >> 0x10 & 0xff)) * fVar17 + 0.0;
                fVar22 = ((float)(uVar14 >> 0x18) + 0.0) * fVar17 + 0.0;
              }
              else {
                local_34 = (float)piVar6[uVar14 * 2 + 1];
                uVar14 = *(uint *)(iVar9 + local_28 * 4);
                fVar22 = (DAT_042dbf3c - local_34) * fVar17;
                fVar18 = fVar22 + 0.0;
                fVar19 = (fVar5 * 0.0 + (float)(uVar14 & 0xff)) * fVar22 + 0.0;
                fVar20 = (fVar5 * 0.0 + (float)(uVar14 >> 8 & 0xff)) * fVar22 + 0.0;
                fVar24 = (fVar5 * 0.0 + (float)(uVar14 >> 0x10 & 0xff)) * fVar22 + 0.0;
                fVar22 = ((float)(uVar14 >> 0x18) + 0.0) * fVar22 + 0.0;
                uVar14 = local_28;
                while (uVar14 = uVar14 + 1, (int)uVar14 < (int)uVar3) {
                  uVar4 = *(uint *)(iVar9 + uVar14 * 4);
                  fVar18 = fVar18 + fVar17;
                  fVar19 = fVar19 + (fVar5 * 0.0 + (float)(uVar4 & 0xff)) * fVar17;
                  fVar20 = (fVar5 * 0.0 + (float)(uVar4 >> 8 & 0xff)) * fVar17 + fVar20;
                  fVar24 = fVar24 + (fVar5 * 0.0 + (float)(uVar4 >> 0x10 & 0xff)) * fVar17;
                  fVar22 = fVar22 + ((float)(uVar4 >> 0x18) + 0.0) * fVar17;
                }
                if ((int)uVar3 < (int)param_2) {
                  uVar14 = *(uint *)(iVar9 + uVar3 * 4);
                  fVar17 = fVar17 * (float)piVar1[1];
                  fVar18 = fVar18 + fVar17;
                  fVar19 = fVar19 + (fVar5 * 0.0 + (float)(uVar14 & 0xff)) * fVar17;
                  fVar20 = fVar20 + (fVar5 * 0.0 + (float)(uVar14 >> 8 & 0xff)) * fVar17;
                  fVar24 = fVar24 + (fVar5 * 0.0 + (float)(uVar14 >> 0x10 & 0xff)) * fVar17;
                  fVar22 = fVar22 + ((float)(uVar14 >> 0x18) + 0.0) * fVar17;
                }
              }
              local_38 = (int *)(local_28 * 4);
              if (iVar15 < iVar8) {
                iVar16 = param_8 * iVar15 + param_1;
                local_24 = (int *)iVar15;
                do {
                  if (uVar3 == local_28) {
                    uVar14 = *(uint *)(iVar16 + (int)local_38);
                    fVar17 = (float)piVar1[1] - local_34;
                    fVar18 = fVar18 + fVar17;
                    fVar19 = fVar19 + (fVar5 * 0.0 + (float)(uVar14 & 0xff)) * fVar17;
                    fVar20 = fVar20 + (fVar5 * 0.0 + (float)(uVar14 >> 8 & 0xff)) * fVar17;
                    fVar24 = fVar24 + (fVar5 * 0.0 + (float)(uVar14 >> 0x10 & 0xff)) * fVar17;
                    fVar22 = fVar22 + ((float)_DAT_042dbf44 + (float)(uVar14 >> 0x18)) * fVar17;
                  }
                  else {
                    fVar17 = DAT_042dbf3c - local_34;
                    uVar14 = *(uint *)(iVar16 + (int)local_38);
                    fVar18 = fVar18 + fVar17;
                    fVar19 = fVar19 + (fVar5 * 0.0 + (float)(uVar14 & 0xff)) * fVar17;
                    fVar20 = fVar20 + (fVar5 * 0.0 + (float)(uVar14 >> 8 & 0xff)) * fVar17;
                    fVar24 = fVar24 + (fVar5 * 0.0 + (float)(uVar14 >> 0x10 & 0xff)) * fVar17;
                    fVar22 = fVar22 + ((float)(uVar14 >> 0x18) + (float)_DAT_042dbf44) * fVar17;
                    uVar14 = local_28;
                    while (uVar14 = uVar14 + 1, (int)uVar14 < (int)uVar3) {
                      uVar4 = *(uint *)(iVar16 + uVar14 * 4);
                      fVar18 = fVar18 + DAT_042dbf3c;
                      fVar19 = fVar19 + fVar5 * 0.0 + (float)(uVar4 & 0xff);
                      fVar20 = fVar20 + fVar5 * 0.0 + (float)(uVar4 >> 8 & 0xff);
                      fVar24 = fVar24 + fVar5 * 0.0 + (float)(uVar4 >> 0x10 & 0xff);
                      fVar22 = fVar22 + (float)(uVar4 >> 0x18) + 0.0;
                    }
                    if ((int)uVar3 < (int)param_2) {
                      uVar14 = *(uint *)(iVar16 + uVar3 * 4);
                      fVar17 = (float)piVar1[1];
                      fVar18 = fVar18 + fVar17;
                      fVar19 = fVar19 + (fVar5 * 0.0 + (float)(uVar14 & 0xff)) * fVar17;
                      fVar20 = fVar20 + (fVar5 * 0.0 + (float)(uVar14 >> 8 & 0xff)) * fVar17;
                      fVar24 = fVar24 + (fVar5 * 0.0 + (float)(uVar14 >> 0x10 & 0xff)) * fVar17;
                      fVar22 = fVar22 + ((float)_DAT_042dbf44 + (float)(uVar14 >> 0x18)) * fVar17;
                    }
                  }
                  local_24 = (int *)((int)local_24 + 1);
                  iVar16 = iVar16 + param_8;
                } while ((int)local_24 < iVar8);
              }
              if (iVar8 < (int)param_3) {
                fVar17 = (float)piVar13[1];
                uVar14 = *(uint *)(iVar10 + (int)local_38);
                if (uVar3 == local_28) {
                  fVar17 = fVar17 * ((float)piVar1[1] - local_34);
                  fVar18 = fVar18 + fVar17;
                  fVar19 = fVar19 + (fVar5 * 0.0 + (float)(uVar14 & 0xff)) * fVar17;
                  fVar20 = fVar20 + (fVar5 * 0.0 + (float)(uVar14 >> 8 & 0xff)) * fVar17;
                  fVar24 = fVar24 + (fVar5 * 0.0 + (float)(uVar14 >> 0x10 & 0xff)) * fVar17;
                  fVar22 = fVar22 + ((float)(uVar14 >> 0x18) + 0.0) * fVar17;
                  uVar3 = local_28;
                }
                else {
                  fVar27 = fVar17 * (DAT_042dbf3c - local_34);
                  fVar18 = fVar18 + fVar27;
                  fVar19 = fVar19 + (fVar5 * 0.0 + (float)(uVar14 & 0xff)) * fVar27;
                  fVar20 = fVar20 + (fVar5 * 0.0 + (float)(uVar14 >> 8 & 0xff)) * fVar27;
                  fVar24 = fVar24 + (fVar5 * 0.0 + (float)(uVar14 >> 0x10 & 0xff)) * fVar27;
                  fVar22 = fVar22 + ((float)(uVar14 >> 0x18) + 0.0) * fVar27;
                  while (local_28 = local_28 + 1, (int)local_28 < (int)uVar3) {
                    uVar14 = *(uint *)(iVar10 + local_28 * 4);
                    fVar18 = fVar18 + fVar17;
                    fVar19 = fVar19 + (fVar5 * 0.0 + (float)(uVar14 & 0xff)) * fVar17;
                    fVar20 = (fVar5 * 0.0 + (float)(uVar14 >> 8 & 0xff)) * fVar17 + fVar20;
                    fVar24 = fVar24 + (fVar5 * 0.0 + (float)(uVar14 >> 0x10 & 0xff)) * fVar17;
                    fVar22 = fVar22 + ((float)(uVar14 >> 0x18) + 0.0) * fVar17;
                  }
                  if ((int)uVar3 < (int)param_2) {
                    uVar14 = *(uint *)(iVar10 + uVar3 * 4);
                    local_24 = (int *)(fVar17 * (float)piVar1[1]);
                    fVar18 = fVar18 + (float)local_24;
                    fVar19 = fVar19 + (fVar5 * 0.0 + (float)(uVar14 & 0xff)) * (float)local_24;
                    fVar20 = fVar20 + (fVar5 * 0.0 + (float)(uVar14 >> 8 & 0xff)) * (float)local_24;
                    fVar24 = fVar24 + (fVar5 * 0.0 + (float)(uVar14 >> 0x10 & 0xff)) *
                                      (float)local_24;
                    local_28 = uVar3;
                    goto LAB_04012022;
                  }
                }
              }
            }
            local_28 = uVar3;
            *(uint *)(local_70 + -4 + uVar12 * 4) =
                 (int)(fVar22 / fVar18 - (float)((uint)fVar21 & -(uint)(fVar21 <= fVar22 / fVar18)))
                 << 0x18 | (int)(fVar19 / fVar18 -
                                (float)((uint)fVar21 & -(uint)(fVar21 <= fVar19 / fVar18))) & 0xffU
                 | ((int)(fVar20 / fVar18 -
                         (float)((uint)fVar21 & -(uint)(fVar21 <= fVar20 / fVar18))) & 0xffU) << 8 |
                 ((int)(fVar24 / fVar18 - (float)((uint)fVar21 & -(uint)(fVar21 <= fVar24 / fVar18))
                       ) & 0xffU) << 0x10;
            uVar14 = uVar12;
          } while (uVar12 != param_5);
        }
        local_70 = local_70 + param_9;
        uVar14 = uVar2;
      } while (uVar2 != param_6);
    }
    free(piVar6);
  }
  else {
    if (param_7 != 5) goto LAB_0401148f;
    piVar6 = (int *)FUN_04010fd0();
    __ptr = (int *)FUN_04010fd0();
    fVar23 = _DAT_042dbf50;
    fVar21 = DAT_042dbf40;
    fVar5 = DAT_042dbf34;
    if (param_6 != 0) {
      local_3c = 0;
      local_34 = (float)param_4;
      local_38 = __ptr;
      do {
        iVar7 = param_8 * *local_38 + param_1;
        iVar8 = param_2 * local_38[1] + param_1;
        if (param_5 != 0) {
          local_28 = 0;
          piVar13 = piVar6;
          do {
            uVar14 = *(uint *)(iVar8 + *piVar13 * 4);
            uVar2 = *(uint *)(iVar7 + *piVar13 * 4);
            uVar12 = *(uint *)(iVar7 + piVar13[1] * 4);
            uVar3 = *(uint *)(iVar8 + piVar13[1] * 4);
            fVar17 = (fVar5 * 0.0 +
                     (float)((uVar12 >> 8 & 0xff) + (uVar2 >> 8 & 0xff) + (uVar14 >> 8 & 0xff) +
                            (uVar3 >> 8 & 0xff))) * fVar21;
            fVar18 = (fVar5 * 0.0 +
                     (float)((uVar3 >> 0x10 & 0xff) +
                            (uVar12 >> 0x10 & 0xff) + (uVar2 >> 0x10 & 0xff) +
                            (uVar14 >> 0x10 & 0xff))) * fVar21;
            fVar19 = (fVar5 * 0.0 +
                     (float)((uVar3 & 0xff) + (uVar12 & 0xff) + (uVar2 & 0xff) + (uVar14 & 0xff))) *
                     fVar21;
            piVar13 = piVar13 + 4;
            fVar20 = (fVar5 * 0.0 +
                     (float)((uVar2 >> 0x18) + (uVar12 >> 0x18) + (uVar14 >> 0x18) + (uVar3 >> 0x18)
                            )) * fVar21;
            *(uint *)((int)local_34 + local_28 * 4) =
                 ((int)(fVar17 - (float)((uint)fVar23 & -(uint)(fVar23 <= fVar17))) & 0xffU) << 8 |
                 ((int)(fVar18 - (float)((uint)fVar23 & -(uint)(fVar23 <= fVar18))) & 0xffU) << 0x10
                 | (int)(fVar19 - (float)((uint)fVar23 & -(uint)(fVar23 <= fVar19))) & 0xffU |
                 (int)(fVar20 - (float)((uint)fVar23 & -(uint)(fVar23 <= fVar20))) << 0x18;
            local_28 = local_28 + 1;
          } while (local_28 != param_5);
        }
        local_3c = local_3c + 1;
        local_38 = local_38 + 4;
        local_34 = (float)((int)local_34 + param_9);
      } while (local_3c != param_6);
    }
    free(piVar6);
  }
  free(__ptr);
  return;
}

// --- ScaleImage1 @0x04014830 ---
/* source: ImageScaling */

void ScaleImage1(int param_1,undefined4 param_2,undefined4 param_3,byte *param_4,int param_5,
                int param_6,uint param_7,int param_8,int param_9)

{
  float fVar1;
  int iVar2;
  float fVar3;
  void *__ptr;
  void *__ptr_00;
  int *__ptr_01;
  int *__ptr_02;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  void *pvVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int local_48;
  int *local_44;
  byte *local_40;
  int *local_3c;
  byte *local_2c;
  void *local_28;
  int local_24;
  int local_20;
  
  local_40 = param_4;
  if ((param_7 & 0x600000) != 0) {
    FUN_0402cd10(10,"D3DX_FILTER_SRGB_IN and D3DX_FILTER_SRGB_OUT not implemented! Add them.");
  }
  param_7 = param_7 & 0xffff;
  if (param_7 == 0) {
    FUN_0400a810("filterMethod != 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/ImageScaling.cpp",0x299,
                 "void ScaleImage1(const uint32_t*, uint32_t, uint32_t, uint32_t*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t)"
                );
  }
  else {
    if (param_7 == 3) {
LAB_04014a40:
      __ptr_01 = (int *)FUN_04010fd0();
      __ptr_02 = (int *)FUN_04010fd0();
      fVar3 = DAT_042dbf3c;
      if (param_6 != 0) {
        local_48 = 0;
        local_44 = __ptr_02;
        local_3c = __ptr_01;
        do {
          iVar4 = param_8 * *local_44 + param_1;
          iVar5 = param_8 * local_44[1] + param_1;
          if (param_5 != 0) {
            local_20 = 0;
            local_24 = 0;
            local_2c = local_40;
            piVar6 = __ptr_01;
            do {
              while( true ) {
                iVar12 = *piVar6;
                iVar11 = iVar12 + 7;
                if (-1 < iVar12) {
                  iVar11 = iVar12;
                }
                fVar13 = 0.0;
                if ((*(byte *)(iVar4 + (iVar11 >> 3)) >> (iVar12 % 8 & 0x1fU) & 1) != 0) {
                  fVar13 = fVar3;
                }
                iVar2 = piVar6[1];
                iVar10 = iVar2;
                if (iVar2 < 0) {
                  iVar10 = iVar2 + 7;
                }
                fVar16 = 0.0;
                if ((*(byte *)(iVar4 + (iVar10 >> 3)) >> (iVar2 % 8 & 0x1fU) & 1) != 0) {
                  fVar16 = fVar3;
                }
                fVar15 = 0.0;
                if ((*(byte *)(iVar5 + (iVar11 >> 3)) >> (iVar12 % 8 & 0x1fU) & 1) != 0) {
                  fVar15 = fVar3;
                }
                fVar14 = 0.0;
                if ((*(byte *)(iVar5 + (iVar10 >> 3)) >> (iVar2 % 8 & 0x1fU) & 1) != 0) {
                  fVar14 = fVar3;
                }
                fVar1 = (float)piVar6[2];
                if ((fVar3 - (float)local_3c[2]) * (fVar13 * (fVar3 - fVar1) + fVar16 * fVar1) +
                    ((fVar3 - fVar1) * fVar15 + fVar1 * fVar14) * (float)local_3c[2] < DAT_042dbf38)
                break;
                *local_2c = *local_2c | (byte)(1 << ((byte)local_20 & 0x1f));
                if (local_20 != 7) goto LAB_04014aee;
LAB_04014bf5:
                local_24 = local_24 + 1;
                piVar6 = piVar6 + 4;
                local_20 = 0;
                local_2c = local_2c + 1;
                if (local_24 == param_5) goto LAB_04014c13;
              }
              *local_2c = *local_2c &
                          ((byte)(-2 << ((byte)local_20 & 0x1f)) |
                          (byte)(0xfffffffe >> 0x20 - ((byte)local_20 & 0x1f)));
              if (local_20 == 7) goto LAB_04014bf5;
LAB_04014aee:
              local_20 = local_20 + 1;
              local_24 = local_24 + 1;
              piVar6 = piVar6 + 4;
            } while (local_24 != param_5);
          }
LAB_04014c13:
          local_48 = local_48 + 1;
          local_44 = local_44 + 4;
          local_40 = local_40 + param_9;
          local_3c = local_3c + 4;
        } while (local_48 != param_6);
      }
      free(__ptr_01);
      free(__ptr_02);
      return;
    }
    if (param_7 < 4) {
      if (param_7 == 2) {
        __ptr = (void *)FUN_04010fd0();
        __ptr_00 = (void *)FUN_04010fd0();
        if (param_6 != 0) {
          local_2c = (byte *)0x0;
          local_28 = __ptr_00;
          do {
            iVar4 = *(int *)((int)local_28 + 0xc);
            if (param_5 != 0) {
              uVar7 = 0;
              local_3c = (int *)0x0;
              pvVar8 = __ptr;
              pbVar9 = local_40;
              do {
                while( true ) {
                  iVar5 = *(int *)((int)pvVar8 + 0xc);
                  iVar12 = iVar5 + 7;
                  if (-1 < iVar5) {
                    iVar12 = iVar5;
                  }
                  if ((*(byte *)(param_8 * iVar4 + param_1 + (iVar12 >> 3)) >> (iVar5 % 8 & 0x1fU) &
                      1) == 0) break;
                  *pbVar9 = *pbVar9 | (byte)(1 << ((byte)uVar7 & 0x1f));
                  if (uVar7 != 7) goto LAB_0401497e;
LAB_040149d1:
                  local_3c = (int *)((int)local_3c + 1);
                  pbVar9 = pbVar9 + 1;
                  uVar7 = uVar7 + 1 & 0xffffff00;
                  pvVar8 = (void *)((int)pvVar8 + 0x10);
                  if (local_3c == (int *)param_5) goto LAB_040149e5;
                }
                *pbVar9 = *pbVar9 & ~(byte)(1 << ((byte)uVar7 & 0x1f));
                if (uVar7 == 7) goto LAB_040149d1;
LAB_0401497e:
                uVar7 = uVar7 + 1;
                local_3c = (int *)((int)local_3c + 1);
                pvVar8 = (void *)((int)pvVar8 + 0x10);
              } while (local_3c != (int *)param_5);
            }
LAB_040149e5:
            local_2c = (byte *)((int)local_2c + 1);
            local_28 = (void *)((int)local_28 + 0x10);
            local_40 = local_40 + param_9;
          } while (local_2c != (byte *)param_6);
        }
        free(__ptr);
        free(__ptr_00);
        return;
      }
    }
    else if (param_7 == 4) {
      FUN_0400a810("false",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/core/ImageScaling.cpp",0x2b6
                   ,
                   "void ScaleImage1(const uint32_t*, uint32_t, uint32_t, uint32_t*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t)"
                  );
      goto LAB_04014a40;
    }
  }
  FUN_0400a810();
  return;
}

