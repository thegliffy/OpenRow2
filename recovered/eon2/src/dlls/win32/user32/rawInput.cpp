// Recovered source: eon2/src/dlls/win32/user32/rawInput.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- GetDeviceUsagePageAndUsage @0x041781a0 ---
/* source: rawInput */

undefined4 GetDeviceUsagePageAndUsage(short *param_1,int param_2)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node_base *p_Var2;
  int *piVar3;
  char cVar4;
  _Rb_tree_node_base *p_Var5;
  _Rb_tree_node_base *p_Var6;
  _Rb_tree_node_base *p_Var7;
  uint uVar8;
  void *pvVar9;
  undefined **ppuVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  _Rb_tree_node_base *p_Var14;
  uint uVar15;
  undefined *puVar16;
  int iVar17;
  short *psVar18;
  short *psVar19;
  int iVar20;
  uint uVar21;
  undefined4 *puVar22;
  bool bVar23;
  uint local_3c;
  _Rb_tree_node_base *local_38;
  
  if ((param_2 != 0) && (*param_1 != 0)) {
    iVar20 = 0;
    psVar19 = param_1;
    do {
      psVar18 = psVar19 + 6;
      uVar15 = *(uint *)(psVar19 + 2);
      if ((uVar15 & 1) == 0) {
        uVar15 = uVar15 & 0xf0;
        if (uVar15 == 0x10) {
          if ((*(int *)(psVar19 + 4) != 0) || (psVar19[1] == 0)) break;
        }
        else {
          if (uVar15 == 0x20) {
            if (psVar19[1] != 0) break;
          }
          else if ((uVar15 == 0) && (psVar19[1] == 0)) break;
          if ((*(int *)(psVar19 + 4) != 0) &&
             (cVar4 = FUN_0404ecd0(*(int *)(psVar19 + 4)), cVar4 == '\0')) break;
          if (*(undefined **)psVar19 == &DAT_00060001) {
            if ((uVar15 != 0x30) && ((*(byte *)((int)psVar19 + 5) & 4) != 0)) goto LAB_0417829a;
          }
          else if ((*(undefined **)psVar19 != &DAT_00020001) &&
                  ((uVar15 == 0x30 || ((*(uint *)(psVar19 + 2) & 0x600) != 0)))) {
LAB_0417829a:
            eON_SetLastError(0x3ec);
            return 0;
          }
        }
      }
      else {
        if (uVar15 != 1) goto LAB_0417829a;
        if (*(int *)(psVar19 + 4) != 0) break;
      }
      if (iVar20 + 1 == param_2) {
        if (DAT_0451c06c == '\0') {
          pthread_mutex_init((pthread_mutex_t *)&DAT_0451c054,(pthread_mutexattr_t *)0x0);
          bzero(&DAT_0451c094,0xd);
          piVar11 = malloc(0x34);
          *(undefined1 *)(piVar11 + 10) = 0;
          *(undefined1 *)((int)piVar11 + 0x29) = 0;
          piVar11[0xb] = 0;
          iVar20 = DAT_0451c0c8 + -0x2f220000;
          *(undefined1 *)(piVar11 + 0xc) = 0;
          DAT_0451c0c8 = DAT_0451c0c8 + 1;
          *piVar11 = iVar20;
          DAT_0451c074 = piVar11;
          puVar12 = malloc(0x15);
          piVar11[1] = (int)puVar12;
          *puVar12 = 0x5f4e4f65;
          puVar12[1] = 0x49776152;
          puVar12[2] = 0x7475706e;
          puVar12[3] = 0x6279654b;
          puVar12[4] = 0x6472616f;
          *(undefined1 *)(puVar12 + 5) = 0;
          puVar12 = DAT_0451c0c0;
          piVar11[4] = 4;
          puVar22 = DAT_0451c0c4;
          piVar11[5] = 0;
          piVar11[6] = 1;
          piVar11[7] = 0xc;
          piVar11[8] = 0;
          piVar11[9] = 0x4d;
          piVar11[2] = 0x20;
          piVar11[3] = 1;
          if (puVar12 == puVar22) {
            FUN_04177d60();
            puVar22 = DAT_0451c0c4;
          }
          else {
            puVar13 = (undefined4 *)0x0;
            if (puVar12 != (undefined4 *)0x0) {
              *puVar12 = piVar11;
              puVar13 = DAT_0451c0c0;
              puVar22 = DAT_0451c0c4;
            }
            DAT_0451c0c0 = puVar13 + 1;
          }
          puVar12 = DAT_0451c0c0;
          piVar11 = malloc(0x34);
          *(undefined1 *)(piVar11 + 10) = 0;
          *(undefined1 *)((int)piVar11 + 0x29) = 0;
          iVar20 = DAT_0451c0c8 + -0x2f220000;
          piVar11[0xb] = 0;
          DAT_0451c0c8 = DAT_0451c0c8 + 1;
          *piVar11 = iVar20;
          *(undefined1 *)(piVar11 + 0xc) = 0;
          DAT_0451c070 = piVar11;
          puVar13 = malloc(0x12);
          piVar11[1] = (int)puVar13;
          *puVar13 = 0x5f4e4f65;
          puVar13[1] = 0x49776152;
          puVar13[2] = 0x7475706e;
          puVar13[3] = 0x73756f4d;
          *(undefined2 *)(puVar13 + 4) = 0x65;
          piVar11[5] = 7;
          piVar11[6] = 100;
          piVar11[7] = 0;
          piVar11[2] = 0x20;
          piVar11[4] = *piVar11;
          piVar11[3] = 0;
          if (puVar12 == puVar22) {
            FUN_04177d60();
          }
          else {
            if (puVar12 != (undefined4 *)0x0) {
              *puVar12 = piVar11;
              puVar12 = DAT_0451c0c0;
            }
            DAT_0451c0c0 = puVar12 + 1;
          }
          DAT_0451c06c = '\x01';
        }
        iVar20 = 0;
        goto LAB_041782f8;
      }
      iVar20 = iVar20 + 1;
      psVar19 = psVar18;
    } while (*psVar18 != 0);
  }
  eON_SetLastError(0x57);
  return 0;
LAB_041782f8:
  do {
    p_Var7 = DAT_0451c0b4;
    p_Var6 = DAT_0451c0b0;
    uVar15 = CONCAT22(*param_1,param_1[1]);
    if ((*(byte *)(param_1 + 2) & 1) == 0) {
      if (DAT_0451c0ac == (_Rb_tree_node_base *)0x0) {
LAB_04178760:
        if ((DAT_0451c0b8 == 0) || (uVar15 <= *(uint *)(DAT_0451c0b4 + 0x10))) {
LAB_0417881d:
          FUN_04177f00();
          p_Var14 = local_38;
        }
        else {
          bVar23 = DAT_0451c0b4 == (_Rb_tree_node_base *)&DAT_0451c0a8;
          p_Var14 = operator_new(0x20);
          if (p_Var14 != (_Rb_tree_node_base *)0x0) {
            *(undefined4 *)p_Var14 = 0;
            *(undefined4 *)(p_Var14 + 4) = 0;
            *(undefined4 *)(p_Var14 + 8) = 0;
            *(undefined4 *)(p_Var14 + 0xc) = 0;
            *(uint *)(p_Var14 + 0x10) = uVar15;
            *(undefined4 *)(p_Var14 + 0x14) = 0;
            *(undefined4 *)(p_Var14 + 0x18) = 0;
            *(undefined4 *)(p_Var14 + 0x1c) = 0;
          }
          std::_Rb_tree_insert_and_rebalance
                    (bVar23,p_Var14,p_Var7,(_Rb_tree_node_base *)&DAT_0451c0a8);
          DAT_0451c0b8 = DAT_0451c0b8 + 1;
        }
      }
      else {
        p_Var5 = (_Rb_tree_node_base *)&DAT_0451c0a8;
        p_Var2 = DAT_0451c0ac;
        do {
          while (p_Var14 = p_Var2, uVar15 <= *(uint *)(p_Var14 + 0x10)) {
            p_Var5 = p_Var14;
            p_Var2 = *(_Rb_tree_node_base **)(p_Var14 + 8);
            if (*(_Rb_tree_node_base **)(p_Var14 + 8) == (_Rb_tree_node_base *)0x0)
            goto LAB_0417833d;
          }
          p_Var1 = p_Var14 + 0xc;
          p_Var14 = p_Var5;
          p_Var2 = *(_Rb_tree_node_base **)p_Var1;
        } while (*(_Rb_tree_node_base **)p_Var1 != (_Rb_tree_node_base *)0x0);
LAB_0417833d:
        if (p_Var14 == (_Rb_tree_node_base *)&DAT_0451c0a8) goto LAB_04178760;
        if (uVar15 < *(uint *)(p_Var14 + 0x10)) {
          if (DAT_0451c0b0 == p_Var14) {
            p_Var7 = operator_new(0x20);
            p_Var14 = p_Var6;
            if (p_Var7 != (_Rb_tree_node_base *)0x0) {
              *(undefined4 *)p_Var7 = 0;
              *(undefined4 *)(p_Var7 + 4) = 0;
              *(undefined4 *)(p_Var7 + 8) = 0;
              *(undefined4 *)(p_Var7 + 0xc) = 0;
              *(uint *)(p_Var7 + 0x10) = uVar15;
              *(undefined4 *)(p_Var7 + 0x14) = 0;
              *(undefined4 *)(p_Var7 + 0x18) = 0;
              *(undefined4 *)(p_Var7 + 0x1c) = 0;
            }
LAB_041783f5:
            std::_Rb_tree_insert_and_rebalance
                      (true,p_Var7,p_Var14,(_Rb_tree_node_base *)&DAT_0451c0a8);
            DAT_0451c0b8 = DAT_0451c0b8 + 1;
            p_Var14 = p_Var7;
            goto LAB_04178420;
          }
          p_Var6 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var14);
          if (*(uint *)(p_Var6 + 0x10) < uVar15) {
            if (*(int *)(p_Var6 + 0xc) == 0) {
              p_Var14 = operator_new(0x20);
              if (p_Var14 != (_Rb_tree_node_base *)0x0) {
                *(undefined4 *)p_Var14 = 0;
                *(undefined4 *)(p_Var14 + 4) = 0;
                *(undefined4 *)(p_Var14 + 8) = 0;
                *(undefined4 *)(p_Var14 + 0xc) = 0;
                *(uint *)(p_Var14 + 0x10) = uVar15;
                *(undefined4 *)(p_Var14 + 0x14) = 0;
                *(undefined4 *)(p_Var14 + 0x18) = 0;
                *(undefined4 *)(p_Var14 + 0x1c) = 0;
              }
              std::_Rb_tree_insert_and_rebalance
                        (p_Var6 == (_Rb_tree_node_base *)&DAT_0451c0a8,p_Var14,p_Var6,
                         (_Rb_tree_node_base *)&DAT_0451c0a8);
              DAT_0451c0b8 = DAT_0451c0b8 + 1;
              goto LAB_04178420;
            }
            p_Var7 = operator_new(0x20);
            if (p_Var7 != (_Rb_tree_node_base *)0x0) {
              *(undefined4 *)p_Var7 = 0;
              *(undefined4 *)(p_Var7 + 4) = 0;
              *(undefined4 *)(p_Var7 + 8) = 0;
              *(undefined4 *)(p_Var7 + 0xc) = 0;
              *(uint *)(p_Var7 + 0x10) = uVar15;
              *(undefined4 *)(p_Var7 + 0x14) = 0;
              *(undefined4 *)(p_Var7 + 0x18) = 0;
              *(undefined4 *)(p_Var7 + 0x1c) = 0;
            }
            goto LAB_041783f5;
          }
          goto LAB_0417881d;
        }
      }
LAB_04178420:
      *(undefined4 *)(p_Var14 + 0x14) = *(undefined4 *)param_1;
      *(undefined4 *)(p_Var14 + 0x18) = *(undefined4 *)(param_1 + 2);
      *(undefined4 *)(p_Var14 + 0x1c) = *(undefined4 *)(param_1 + 4);
    }
    else if (DAT_0451c0ac != (_Rb_tree_node_base *)0x0) {
      p_Var6 = DAT_0451c0ac;
      p_Var7 = (_Rb_tree_node_base *)&DAT_0451c0a8;
      do {
        while (p_Var5 = p_Var6, uVar15 <= *(uint *)(p_Var5 + 0x10)) {
          p_Var6 = *(_Rb_tree_node_base **)(p_Var5 + 8);
          p_Var7 = p_Var5;
          if (*(_Rb_tree_node_base **)(p_Var5 + 8) == (_Rb_tree_node_base *)0x0) goto LAB_041786a5;
        }
        p_Var2 = p_Var5 + 0xc;
        p_Var6 = *(_Rb_tree_node_base **)p_Var2;
        p_Var5 = p_Var7;
      } while (*(_Rb_tree_node_base **)p_Var2 != (_Rb_tree_node_base *)0x0);
LAB_041786a5:
      if ((p_Var5 != (_Rb_tree_node_base *)&DAT_0451c0a8) && (*(uint *)(p_Var5 + 0x10) <= uVar15)) {
        pvVar9 = (void *)std::_Rb_tree_rebalance_for_erase
                                   (p_Var5,(_Rb_tree_node_base *)&DAT_0451c0a8);
        operator_delete(pvVar9);
        DAT_0451c0b8 = DAT_0451c0b8 + -1;
      }
    }
    iVar20 = iVar20 + 1;
    param_1 = param_1 + 6;
  } while (iVar20 != param_2);
  if ((int)DAT_0451c0c0 - DAT_0451c0bc >> 2 == 0) {
    return 1;
  }
  uVar15 = 0;
  do {
    piVar11 = *(int **)(DAT_0451c0bc + uVar15 * 4);
    local_3c = 0x10000;
    puVar16 = &DAT_00010002;
    iVar20 = piVar11[3];
    if ((iVar20 != 0) && (puVar16 = &UNK_00010006, iVar20 != 1)) {
      if (iVar20 != 2) {
        FUN_0400a810("rdi->dwType == 0x00000002",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/user32/rawInput.cpp"
                     ,0xcf,"void GetDeviceUsagePageAndUsage(RawInputDeviceData*, USHORT&, USHORT&)")
        ;
      }
      local_3c = (uint)*(ushort *)(piVar11 + 7) << 0x10;
      puVar16 = (undefined *)CONCAT22(*(ushort *)(piVar11 + 7),*(undefined2 *)((int)piVar11 + 0x1e))
      ;
    }
    piVar3 = DAT_0451c070;
    iVar20 = piVar11[10];
    if (DAT_0451c0ac == (_Rb_tree_node_base *)0x0) {
LAB_04178610:
      uVar21 = 0;
      *(undefined1 *)(piVar11 + 10) = 0;
    }
    else {
      p_Var6 = DAT_0451c0ac;
      p_Var7 = (_Rb_tree_node_base *)&DAT_0451c0a8;
      do {
        while (p_Var5 = p_Var6, puVar16 <= *(undefined **)(p_Var5 + 0x10)) {
          p_Var6 = *(_Rb_tree_node_base **)(p_Var5 + 8);
          p_Var7 = p_Var5;
          if (*(_Rb_tree_node_base **)(p_Var5 + 8) == (_Rb_tree_node_base *)0x0) goto LAB_041784ed;
        }
        p_Var2 = p_Var5 + 0xc;
        p_Var6 = *(_Rb_tree_node_base **)p_Var2;
        p_Var5 = p_Var7;
      } while (*(_Rb_tree_node_base **)p_Var2 != (_Rb_tree_node_base *)0x0);
LAB_041784ed:
      p_Var6 = DAT_0451c0ac;
      if (p_Var5 == (_Rb_tree_node_base *)&DAT_0451c0a8) {
        p_Var7 = (_Rb_tree_node_base *)&DAT_0451c0a8;
LAB_041785d9:
        do {
          while (p_Var5 = p_Var6, local_3c <= *(uint *)(p_Var5 + 0x10)) {
            p_Var7 = p_Var5;
            p_Var6 = *(_Rb_tree_node_base **)(p_Var5 + 8);
            if (*(_Rb_tree_node_base **)(p_Var5 + 8) == (_Rb_tree_node_base *)0x0)
            goto LAB_041785e5;
          }
          p_Var2 = p_Var5 + 0xc;
          p_Var5 = p_Var7;
          p_Var6 = *(_Rb_tree_node_base **)p_Var2;
        } while (*(_Rb_tree_node_base **)p_Var2 != (_Rb_tree_node_base *)0x0);
LAB_041785e5:
        if ((p_Var5 == (_Rb_tree_node_base *)&DAT_0451c0a8) || (local_3c < *(uint *)(p_Var5 + 0x10))
           ) goto LAB_04178610;
        uVar21 = *(uint *)(p_Var5 + 0x18);
        iVar17 = *(int *)(p_Var5 + 0x1c);
        *(undefined1 *)(piVar11 + 10) = 1;
        uVar8 = uVar21 & 0xf0;
      }
      else {
        if (puVar16 < *(undefined **)(p_Var5 + 0x10)) {
          p_Var7 = (_Rb_tree_node_base *)&DAT_0451c0a8;
          goto LAB_041785d9;
        }
        uVar21 = *(uint *)(p_Var5 + 0x18);
        uVar8 = uVar21 & 0xf0;
        if (uVar8 == 0x10) goto LAB_04178610;
        iVar17 = *(int *)(p_Var5 + 0x1c);
        *(undefined1 *)(piVar11 + 10) = 1;
      }
      piVar11[0xb] = iVar17;
      *(bool *)((int)piVar11 + 0x29) = (uVar21 & 0x100) != 0;
      *(bool *)(piVar11 + 0xc) = uVar8 == 0x30;
      piVar3 = DAT_0451c070;
      if ((uVar21 & 0x2000) != 0) {
        FUN_0402cd10(10,
                     "Raw Input: DEVNOTIFY flag specified for device. Implement delivering WM_INPUT_DEVICE_CHANGE message?"
                    );
        piVar3 = DAT_0451c070;
      }
    }
    if (piVar11 == piVar3) {
      if ((char)piVar11[10] == '\0') {
        if (DAT_04410ab0 != -1) {
          FUN_0402cd10(0x14,"Raw Input: mouse device not wanted anymore");
          MouseDeltas_UnregisterForMouseDelta(DAT_04410ab0);
          DAT_04410ab0 = -1;
        }
      }
      else if (DAT_04410ab0 == -1) {
        ppuVar10 = &PTR_DAT_04346733;
        if ((char)piVar11[0xc] == '\0') {
          ppuVar10 = (undefined **)&DAT_0432d835;
        }
        FUN_0402cd10(0x14,"Raw Input: mouse device wanted, legacy messages: %s",ppuVar10);
        DAT_04410ab0 = MouseDeltas_RegisterForMouseDelta();
      }
    }
    if (piVar11 == DAT_0451c074) {
      if ((char)iVar20 == '\0') {
        if ((char)piVar11[10] != '\0') {
          if ((uVar21 & 0x200) != 0) {
            FUN_0402cd10(10,
                         "Raw Input: NOHOTKEYS flag specified for a keyboard device. We\'re ignoring it."
                        );
          }
          if ((uVar21 & 0x400) != 0) {
            FUN_0402cd10(10,
                         "Raw Input: APPKEYS flag specified for a keyboard device. We\'re ignoring it."
                        );
          }
          ppuVar10 = &PTR_DAT_04346733;
          if ((char)piVar11[0xc] == '\0') {
            ppuVar10 = (undefined **)&DAT_0432d835;
          }
          FUN_0402cd10(0x14,"Raw Input: keyboard device wanted, legacy messages: %s",ppuVar10);
        }
      }
      else if ((char)piVar11[10] == '\0') {
        FUN_0402cd10(0x14,"Raw Input: keyboard device not wanted anymore");
      }
    }
    uVar15 = uVar15 + 1;
    if ((uint)((int)DAT_0451c0c0 - DAT_0451c0bc >> 2) <= uVar15) {
      return 1;
    }
  } while( true );
}

