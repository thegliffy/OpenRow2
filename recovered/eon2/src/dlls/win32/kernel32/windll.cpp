// Recovered source: eon2/src/dlls/win32/kernel32/windll.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- AddTLSSlot @0x04150e20 ---
/* source: windll */

uint AddTLSSlot(char *param_1,char *param_2,_Rb_tree_node_base param_3)

{
  _Rb_tree_node_base *p_Var1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  void *__src;
  code *pcVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  size_t __size;
  void *pvVar13;
  int *piVar14;
  void *pvVar15;
  void *__dest;
  uint *puVar16;
  _Rb_tree_node_base *p_Var17;
  _Rb_tree_node_base *p_Var18;
  undefined4 *puVar19;
  uint *puVar20;
  uint *puVar21;
  char *pcVar22;
  undefined4 *puVar23;
  _Rb_tree_node_base *p_Var24;
  byte bVar25;
  undefined4 local_1a28;
  char *local_1a24;
  uint *local_1a20;
  undefined1 *local_19f0;
  _Rb_tree_node_base *local_19e0;
  uint local_19dc;
  _Rb_tree_node_base *local_19c0;
  undefined4 local_19b8 [65];
  undefined4 local_18b4 [256];
  undefined4 local_14b4;
  undefined1 local_14b0;
  undefined1 local_14af;
  undefined1 local_14ae;
  undefined4 local_14ac;
  undefined4 local_14a8;
  undefined4 local_14a4;
  undefined4 local_14a0;
  undefined4 local_1498;
  undefined4 local_1494;
  undefined4 *local_1490;
  undefined4 *local_148c;
  undefined4 local_1488;
  void *local_1484;
  undefined4 local_1480;
  undefined4 local_147c;
  undefined4 local_1478;
  uint local_1474;
  undefined4 local_1470 [65];
  undefined4 local_136c [256];
  undefined4 local_f6c;
  undefined1 local_f68;
  undefined1 local_f67;
  undefined1 local_f66;
  undefined4 local_f64;
  undefined4 local_f60;
  undefined4 local_f5c;
  undefined4 local_f58;
  undefined4 local_f50;
  undefined4 local_f4c;
  undefined4 *local_f48;
  undefined4 *local_f44;
  undefined4 local_f40;
  undefined4 local_f3c;
  undefined4 local_f38;
  undefined4 local_f34;
  undefined4 local_f30;
  char local_f2c [260];
  char local_e28 [1024];
  undefined4 local_a28;
  _Rb_tree_node_base local_a24;
  _Rb_tree_node_base local_a23;
  _Rb_tree_node_base local_a22;
  undefined4 local_a20;
  undefined4 local_a1c;
  undefined4 local_a18;
  code *local_a14;
  undefined1 local_a10 [4];
  undefined4 local_a0c;
  int local_a08;
  undefined4 *local_a04;
  undefined4 *local_a00;
  undefined4 local_9fc;
  int local_9f8;
  undefined4 local_9f4;
  undefined4 local_9f0;
  undefined4 local_9ec;
  undefined4 local_9e8 [65];
  undefined4 local_8e4 [263];
  undefined1 local_4c8 [8];
  undefined1 *local_4c0;
  undefined1 *local_4bc;
  void *local_4b4;
  uint local_4a4 [288];
  uint local_24;
  
  bVar25 = 0;
  puVar20 = (uint *)&stack0xffffe5e4;
  piVar14 = (int *)&stack0xffffe5e4;
  local_1a20 = (uint *)0x4150e45;
  strcpy((char *)local_4a4,param_1);
  if (*param_1 == '\0') {
    local_1a20 = (uint *)0x415187c;
    FUN_0400a810();
  }
  puVar16 = local_4a4;
  do {
    puVar21 = puVar16;
    uVar10 = *puVar21 + 0xfefefeff & ~*puVar21;
    uVar11 = uVar10 & 0x80808080;
    puVar16 = puVar21 + 1;
  } while (uVar11 == 0);
  if ((uVar10 & 0x8080) == 0) {
    puVar16 = (uint *)((int)puVar21 + 6);
    uVar11 = uVar11 >> 0x10;
  }
  *(undefined2 *)((int)puVar16 + (-3 - (uint)CARRY1((byte)uVar11,(byte)uVar11))) = 0x5c;
  local_1a20 = (uint *)0x4150e9c;
  strcat((char *)local_4a4,param_2);
  local_a04 = &local_a0c;
  local_a0c = 0;
  local_a08 = 0;
  local_9fc = 0;
  local_9f8 = 0;
  local_9f4 = 0;
  local_9f0 = 0;
  local_1a20 = (uint *)0x4150f0b;
  local_a00 = local_a04;
  strcpy(local_f2c,param_2);
  local_1a20 = (uint *)0x4150f23;
  strcpy(local_e28,param_1);
  local_a22 = param_3;
  local_9ec = 0;
  local_a28 = 2;
  if (param_3 == (_Rb_tree_node_base)0x0) {
                    /* try { // try from 04150f5e to 04150ff0 has its CatchHandler @ 04151a01 */
    local_1a20 = (uint *)0x4150f63;
    iVar12 = FUN_04042f10();
  }
  else {
    local_1a20 = (uint *)0x4151504;
    iVar12 = VPFS_OpenExec();
  }
  if (iVar12 == 0) {
    local_19dc = 0;
    goto LAB_0415181b;
  }
  local_1a20 = (uint *)0x4150f81;
  __size = VPFS_GetSize();
  local_1a20 = (uint *)0x4150f8b;
  pvVar13 = malloc(__size);
  if (pvVar13 == (void *)0x0) {
    local_1a20 = (uint *)0x41519ad;
    FUN_0402cd10();
    local_19dc = 0;
  }
  else {
    local_1a20 = (uint *)0x4150fba;
    iVar12 = FUN_04045da0();
    if (iVar12 == 1) {
      local_1a20 = (uint *)0x415190e;
      local_19dc = winpe_LoadFromMemory();
    }
    else {
      local_1a20 = (uint *)0x4150fd7;
      FUN_0402cd10();
      local_19dc = 0;
    }
    local_1a20 = (uint *)0x4150fe9;
    free(pvVar13);
  }
  local_1a20 = (uint *)0x4150ff1;
  eON_VPFS_Close();
  piVar14 = (int *)&stack0xffffe5e4;
  if (local_19dc == 0) goto LAB_0415181b;
  p_Var18 = (_Rb_tree_node_base *)&DAT_0451adf0;
  local_1a20 = (uint *)0x4151010;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0451add4);
  p_Var24 = DAT_0451adf4;
  if (DAT_0451adf4 == (_Rb_tree_node_base *)0x0) {
LAB_04151054:
    local_f68 = 0;
    local_f50 = 0;
    puVar19 = local_9e8;
    for (iVar12 = 0x151; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar19 = 0;
      puVar19 = puVar19 + (uint)bVar25 * -2 + 1;
    }
    local_f67 = 0;
    local_4c0 = local_4c8;
    local_4bc = local_4c8;
    local_f4c = 0;
    local_f66 = 0;
    puVar19 = local_9e8;
    puVar23 = local_1470;
    for (iVar12 = 0x41; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar23 = *puVar19;
      puVar19 = puVar19 + (uint)bVar25 * -2 + 1;
      puVar23 = puVar23 + (uint)bVar25 * -2 + 1;
    }
    local_f40 = 0;
    local_f3c = 0;
    local_f38 = 0;
    local_1474 = local_19dc;
    local_f48 = &local_f50;
    local_f44 = &local_f50;
    local_f34 = 0;
    puVar19 = local_8e4;
    puVar23 = local_136c;
    for (iVar12 = 0x100; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar23 = *puVar19;
      puVar19 = puVar19 + (uint)bVar25 * -2 + 1;
      puVar23 = puVar23 + (uint)bVar25 * -2 + 1;
    }
    local_f6c = 0;
    local_f64 = 0;
    local_f60 = 0;
    local_f5c = 0;
    local_f58 = 0;
    local_f30 = 0;
    puVar19 = local_1470;
    puVar23 = local_19b8;
    for (iVar12 = 0x41; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar23 = *puVar19;
      puVar19 = puVar19 + (uint)bVar25 * -2 + 1;
      puVar23 = puVar23 + (uint)bVar25 * -2 + 1;
    }
    puVar19 = local_136c;
    puVar23 = local_18b4;
    for (iVar12 = 0x100; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar23 = *puVar19;
      puVar19 = puVar19 + (uint)bVar25 * -2 + 1;
      puVar23 = puVar23 + (uint)bVar25 * -2 + 1;
    }
    local_14b4 = 0;
    local_14b0 = 0;
    local_14af = 0;
    local_14ae = 0;
    local_14ac = 0;
    local_14a8 = 0;
    local_14a4 = 0;
    local_14a0 = 0;
    local_1498 = 0;
    local_1494 = 0;
    local_1488 = 0;
    local_1484 = (void *)0x0;
    local_1480 = 0;
    local_147c = 0;
    local_1478 = 0;
    local_1a20 = (uint *)0x4151237;
    local_1490 = &local_1498;
    local_148c = &local_1498;
    FUN_04153bf0();
                    /* try { // try from 04151245 to 04151249 has its CatchHandler @ 04151a16 */
    local_1a20 = (uint *)0x415124a;
    FUN_0414f610();
    if (local_1484 != (void *)0x0) {
      local_1a20 = (uint *)0x4151262;
      operator_delete(local_1484);
    }
    local_1a20 = (uint *)0x415127a;
    FUN_04153bf0();
    if (local_4b4 != (void *)0x0) {
      local_1a20 = (uint *)0x415128c;
      operator_delete(local_4b4);
    }
    local_1a20 = (uint *)0x41512a4;
    FUN_04153bf0();
    p_Var17 = local_19c0;
  }
  else {
    do {
      while (p_Var17 = p_Var24, local_19dc <= *(uint *)(p_Var17 + 0x10)) {
        p_Var24 = *(_Rb_tree_node_base **)(p_Var17 + 8);
        p_Var18 = p_Var17;
        if (*(_Rb_tree_node_base **)(p_Var17 + 8) == (_Rb_tree_node_base *)0x0) goto LAB_0415103d;
      }
      p_Var1 = p_Var17 + 0xc;
      p_Var24 = *(_Rb_tree_node_base **)p_Var1;
      p_Var17 = p_Var18;
    } while (*(_Rb_tree_node_base **)p_Var1 != (_Rb_tree_node_base *)0x0);
LAB_0415103d:
    if ((p_Var17 == (_Rb_tree_node_base *)&DAT_0451adf0) || (local_19dc < *(uint *)(p_Var17 + 0x10))
       ) goto LAB_04151054;
  }
  *(undefined4 *)(p_Var17 + 0x518) = local_a28;
  pcVar22 = local_f2c;
  p_Var24 = p_Var17 + 0x14;
  for (iVar12 = 0x41; iVar12 != 0; iVar12 = iVar12 + -1) {
    *(undefined4 *)p_Var24 = *(undefined4 *)pcVar22;
    pcVar22 = pcVar22 + ((uint)bVar25 * -2 + 1) * 4;
    p_Var24 = p_Var24 + (uint)bVar25 * -8 + 4;
  }
  p_Var17[0x51c] = local_a24;
  p_Var17[0x51d] = local_a23;
  pcVar22 = local_e28;
  p_Var24 = p_Var17 + 0x118;
  for (iVar12 = 0x100; iVar12 != 0; iVar12 = iVar12 + -1) {
    *(undefined4 *)p_Var24 = *(undefined4 *)pcVar22;
    pcVar22 = pcVar22 + (uint)bVar25 * -8 + 4;
    p_Var24 = p_Var24 + (uint)bVar25 * -8 + 4;
  }
  p_Var17[0x51e] = local_a22;
  *(undefined4 *)(p_Var17 + 0x520) = local_a20;
  *(undefined4 *)(p_Var17 + 0x524) = local_a1c;
  *(undefined4 *)(p_Var17 + 0x528) = local_a18;
  *(code **)(p_Var17 + 0x52c) = local_a14;
                    /* try { // try from 0415133d to 04151803 has its CatchHandler @ 04151a01 */
  local_1a20 = (uint *)0x4151342;
  FUN_04150d90();
  local_1a20 = (uint *)0x4151353;
  FUN_0414f170();
  *(undefined4 *)(p_Var17 + 0x554) = local_9ec;
  local_1a20 = (uint *)0x415136b;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0451add4);
  local_1a20 = (uint *)0x4151393;
  FUN_0402cd10();
  local_1a20 = (uint *)0x41513ac;
  cVar9 = winpe_LinkImports();
  if (cVar9 != '\0') {
    local_1a20 = (uint *)0x415154c;
    FUN_0402cd10();
    if (DAT_0451add0 == '\0') {
      local_24 = local_19dc;
      if (DAT_0451adc8 == DAT_0451adcc) {
        local_1a20 = (uint *)0x41519fc;
        FUN_04154b70();
        piVar14 = (int *)&stack0xffffe5e4;
      }
      else {
        puVar16 = (uint *)0x0;
        if (DAT_0451adc8 != (uint *)0x0) {
          *DAT_0451adc8 = local_19dc;
          puVar16 = DAT_0451adc8;
        }
        DAT_0451adc8 = puVar16 + 1;
        piVar14 = (int *)&stack0xffffe5e4;
      }
    }
    else {
      local_1a20 = (uint *)0x4151565;
      pthread_mutex_lock((pthread_mutex_t *)&DAT_0451add4);
      iVar12 = *(int *)(local_19dc + 0xc0 + *(int *)(local_19dc + 0x3c));
      if (iVar12 != 0) {
        piVar14 = (int *)(iVar12 + local_19dc);
        iVar12 = piVar14[1] - *piVar14;
        if (iVar12 == 0) {
          local_1a20 = (uint *)0x41519e0;
          FUN_0400a810();
        }
        uVar11 = DAT_04518da8;
        local_1a20 = (uint *)0x41515ad;
        pvVar13 = malloc(DAT_04518da8 * 4 + 4);
        local_1a20 = (uint *)0x41515d5;
        memcpy(pvVar13,DAT_04518da0,uVar11 * 4);
        *(int **)((int)pvVar13 + uVar11 * 4) = piVar14;
        local_1a20 = (uint *)0x41515f0;
        pthread_mutex_lock((pthread_mutex_t *)&DAT_0451bd4c);
        local_19e0 = DAT_0451bd40;
        if (DAT_0451bd40 != (_Rb_tree_node_base *)&DAT_0451bd38) {
          do {
            iVar3 = *(int *)(*(int *)(local_19e0 + 0x14) + 0x90);
            iVar4 = *(int *)(iVar3 + 0x2c);
            local_1a20 = (uint *)0x4151642;
            pvVar15 = malloc(DAT_04518da8 * 4 + 4);
            if (pvVar15 == (void *)0x0) {
              local_1a20 = (uint *)0x4151986;
              FUN_0400a810();
            }
            local_1a20 = (uint *)0x4151664;
            __dest = malloc(iVar12 + DAT_04518da4);
            if (__dest == (void *)0x0) {
              local_1a20 = (uint *)0x415195d;
              FUN_0400a810();
            }
            if (DAT_04518da8 != 0) {
              uVar11 = 0;
              do {
                piVar5 = *(int **)((int)DAT_04518da0 + uVar11 * 4);
                iVar6 = piVar5[1];
                iVar7 = *piVar5;
                *(void **)((int)pvVar15 + uVar11 * 4) = __dest;
                iVar2 = uVar11 * 4;
                uVar11 = uVar11 + 1;
                local_1a20 = (uint *)0x41516bd;
                memcpy(__dest,*(void **)(iVar4 + iVar2),piVar5[4] + (iVar6 - iVar7));
                __dest = (void *)((int)__dest + (iVar6 - iVar7) + piVar5[4]);
              } while (uVar11 < DAT_04518da8);
            }
            __src = (void *)*piVar14;
            iVar4 = piVar14[1];
            *(void **)((int)pvVar15 + DAT_04518da8 * 4) = __dest;
            local_1a20 = (uint *)0x41516f9;
            memcpy(__dest,__src,iVar4 - (int)__src);
            local_1a20 = (uint *)0x4151714;
            bzero((void *)((int)__dest + iVar12),piVar14[4]);
            *(void **)(iVar3 + 0x2c) = pvVar15;
            local_1a20 = (uint *)0x4151731;
            local_19e0 = (_Rb_tree_node_base *)std::_Rb_tree_increment(local_19e0);
          } while (local_19e0 != (_Rb_tree_node_base *)&DAT_0451bd38);
        }
        local_1a20 = (uint *)0x415174e;
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_0451bd4c);
        piVar14[2] = DAT_04518da8;
        pvVar15 = DAT_04518da0;
        local_1a20 = (uint *)0x4151775;
        DAT_04518da0 = pvVar13;
        free(pvVar15);
        DAT_04518da8 = DAT_04518da8 + 1;
        DAT_04518da4 = DAT_04518da4 + iVar12;
      }
      local_1a20 = (uint *)0x4151796;
      FUN_0414fd00();
      iVar12 = *(int *)(local_19dc + 0xc0 + *(int *)(local_19dc + 0x3c));
      puVar16 = (uint *)&stack0xffffe5e4;
      if ((iVar12 != 0) &&
         (puVar19 = *(undefined4 **)(local_19dc + 0xc + iVar12), puVar16 = (uint *)&stack0xffffe5e4,
         puVar19 != (undefined4 *)0x0)) {
        for (; pcVar8 = (code *)*puVar19, puVar16 = puVar20, pcVar8 != (code *)0x0;
            puVar19 = puVar19 + 1) {
          puVar20[2] = 0;
          puVar20[1] = 1;
          *puVar20 = local_19dc;
          puVar20[-1] = 0x41517d3;
          (*pcVar8)();
          puVar20 = puVar20 + -3;
        }
      }
      puVar21 = puVar16;
      if (local_a14 != (code *)0x0) {
        puVar16[2] = 0;
        puVar16[1] = 1;
        *puVar16 = local_19dc;
        puVar16[-1] = 0x4151804;
        iVar12 = (*local_a14)();
        puVar21 = puVar16 + -3;
        if (iVar12 == 0) {
          puVar16[-2] = (uint)"DllMain of \'%s\' failed to initialize!";
          puVar16[-3] = 0xf;
          puVar16[-1] = (uint)param_2;
          puVar16[-4] = 0x4151934;
          FUN_0402cd10();
          puVar21 = puVar16 + -3;
        }
      }
      *puVar21 = (uint)&DAT_0451add4;
      puVar21[-1] = 0x415181b;
      pthread_mutex_unlock((pthread_mutex_t *)*puVar21);
      piVar14 = (int *)puVar21;
    }
    goto LAB_0415181b;
  }
  local_1a20 = (uint *)0x41513dc;
  FUN_0402cd10();
  local_1a20 = (uint *)0x41513e8;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0451add4);
  if (DAT_0451adf4 == (_Rb_tree_node_base *)0x0) {
LAB_041518c4:
                    /* try { // try from 041518e3 to 041519fb has its CatchHandler @ 04151a01 */
    local_1a20 = (uint *)0x41518e8;
    FUN_0400a810();
    p_Var17 = (_Rb_tree_node_base *)&DAT_0451adf0;
  }
  else {
    p_Var24 = DAT_0451adf4;
    p_Var18 = (_Rb_tree_node_base *)&DAT_0451adf0;
    do {
      while (p_Var17 = p_Var24, local_19dc <= *(uint *)(p_Var17 + 0x10)) {
        p_Var24 = *(_Rb_tree_node_base **)(p_Var17 + 8);
        p_Var18 = p_Var17;
        if (*(_Rb_tree_node_base **)(p_Var17 + 8) == (_Rb_tree_node_base *)0x0) goto LAB_0415141d;
      }
      p_Var1 = p_Var17 + 0xc;
      p_Var24 = *(_Rb_tree_node_base **)p_Var1;
      p_Var17 = p_Var18;
    } while (*(_Rb_tree_node_base **)p_Var1 != (_Rb_tree_node_base *)0x0);
LAB_0415141d:
    if ((p_Var17 == (_Rb_tree_node_base *)&DAT_0451adf0) || (local_19dc < *(uint *)(p_Var17 + 0x10))
       ) goto LAB_041518c4;
  }
  local_1a20 = (uint *)0x4151448;
  pvVar13 = (void *)std::_Rb_tree_rebalance_for_erase(p_Var17,(_Rb_tree_node_base *)&DAT_0451adf0);
  if (*(void **)((int)pvVar13 + 0x548) != (void *)0x0) {
    local_1a20 = (uint *)0x415145c;
    operator_delete(*(void **)((int)pvVar13 + 0x548));
  }
  local_1a20 = (uint *)0x4151474;
  FUN_04153bf0();
  local_1a20 = (uint *)0x415147c;
  operator_delete(pvVar13);
  DAT_0451ae00 = DAT_0451ae00 + -1;
  local_1a20 = (uint *)0x415148f;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0451add4);
  local_1a20 = (uint *)0x41514ad;
  eON_VirtualFree();
  local_1a20 = local_4a4;
  local_1a24 = "DLL LOADING: Binding failed for %s at %p, module unloaded";
  local_1a28 = 10;
  FUN_0402cd10();
  local_19dc = 0;
  piVar14 = &local_1a28;
LAB_0415181b:
  local_19f0 = local_a10;
  if (local_9f8 != 0) {
    *piVar14 = local_9f8;
    piVar14[-1] = 0x415182d;
    operator_delete((void *)*piVar14);
  }
  piVar14[1] = local_a08;
  *piVar14 = (int)local_19f0;
  piVar14[-1] = 0x4151845;
  FUN_04153bf0();
  return local_19dc;
}

// --- InitializeTLS @0x0414ffe0 ---
/* source: windll */

undefined4 InitializeTLS(void)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  undefined4 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0451add4);
  FUN_0402cd10();
  DAT_0451add0 = 1;
  DAT_04518da4 = 0;
  DAT_04518da8 = 0;
  if (DAT_0451adc8 - DAT_0451adc4 >> 2 != 0) {
    uVar4 = 0;
    iVar5 = DAT_0451adc4;
    iVar15 = DAT_0451adc8;
    do {
      iVar8 = *(int *)(iVar5 + uVar4 * 4);
      iVar7 = *(int *)(iVar8 + 0xc0 + *(int *)(iVar8 + 0x3c));
      if (iVar7 != 0) {
        piVar6 = (int *)(iVar8 + iVar7);
        iVar8 = piVar6[1] - *piVar6;
        if (iVar8 == 0) {
          FUN_0400a810();
          iVar5 = DAT_0451adc4;
          iVar15 = DAT_0451adc8;
        }
        DAT_04518da4 = DAT_04518da4 + iVar8;
        DAT_04518da8 = DAT_04518da8 + 1;
      }
      uVar4 = uVar4 + 1;
      uVar9 = iVar15 - iVar5 >> 2;
    } while (uVar4 < uVar9);
    if (DAT_04518da8 != 0) {
      DAT_04518da0 = malloc(DAT_04518da8 << 2);
      if (DAT_04518da0 == (void *)0x0) {
        FUN_0400a810();
        uVar9 = DAT_0451adc8 - DAT_0451adc4 >> 2;
        iVar5 = DAT_0451adc4;
        iVar15 = DAT_0451adc8;
      }
      if (uVar9 != 0) {
        iVar8 = 0;
        uVar4 = 0;
        do {
          iVar7 = *(int *)(iVar5 + uVar4 * 4);
          iVar2 = *(int *)(iVar7 + 0xc0 + *(int *)(iVar7 + 0x3c));
          if (iVar2 != 0) {
            iVar7 = iVar7 + iVar2;
            *(int *)((int)DAT_04518da0 + iVar8 * 4) = iVar7;
            iVar5 = DAT_0451adc4;
            *(int *)(iVar7 + 8) = iVar8;
            iVar8 = iVar8 + 1;
            iVar15 = DAT_0451adc8;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < (uint)(iVar15 - iVar5 >> 2));
      }
    }
  }
  kernel32_ProcessAttach();
  puVar11 = (uint *)&stack0xffffffc4;
  if (DAT_0451adc8 - DAT_0451adc4 >> 2 != 0) {
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 1;
      FUN_0414fd00();
      uVar9 = DAT_0451adc8 - DAT_0451adc4 >> 2;
    } while (uVar4 < uVar9);
    puVar11 = (uint *)&stack0xffffffc4;
    if (uVar9 != 0) {
      uVar4 = 0;
      puVar10 = (uint *)&stack0xffffffc4;
      do {
        uVar9 = *(uint *)(DAT_0451adc4 + uVar4 * 4);
        iVar5 = *(int *)(uVar9 + 0xc0 + *(int *)(uVar9 + 0x3c));
        if ((iVar5 != 0) &&
           (puVar12 = *(undefined4 **)(uVar9 + 0xc + iVar5), puVar12 != (undefined4 *)0x0)) {
          for (; pcVar1 = (code *)*puVar12, pcVar1 != (code *)0x0; puVar12 = puVar12 + 1) {
            puVar10[2] = 0;
            puVar10[1] = 1;
            *puVar10 = uVar9;
            puVar10[-1] = 0x4150150;
            (*pcVar1)();
            puVar10 = puVar10 + -3;
          }
        }
        puVar11 = puVar10;
        if (DAT_0451adf4 != (undefined *)0x0) {
          puVar3 = DAT_0451adf4;
          puVar13 = &DAT_0451adf0;
          do {
            while (puVar14 = puVar3, uVar9 <= *(uint *)(puVar14 + 0x10)) {
              puVar3 = *(undefined **)(puVar14 + 8);
              puVar13 = puVar14;
              if (*(undefined **)(puVar14 + 8) == (undefined *)0x0) goto LAB_04150185;
            }
            puVar12 = (undefined4 *)(puVar14 + 0xc);
            puVar3 = (undefined *)*puVar12;
            puVar14 = puVar13;
          } while ((undefined *)*puVar12 != (undefined *)0x0);
LAB_04150185:
          if ((((puVar14 != &DAT_0451adf0) && (*(uint *)(puVar14 + 0x10) <= uVar9)) &&
              (puVar14[0x51c] != '\0')) &&
             (pcVar1 = *(code **)(puVar14 + 0x52c), pcVar1 != (code *)0x0)) {
            puVar10[2] = 1;
            puVar10[1] = 1;
            *puVar10 = uVar9;
            puVar10[-1] = 0x41501ba;
            iVar5 = (*pcVar1)();
            puVar11 = puVar10 + -3;
            if (iVar5 == 0) {
              puVar10[-3] = (uint)&DAT_0451add4;
              puVar10[-4] = 0x4150223;
              pthread_mutex_unlock((pthread_mutex_t *)puVar10[-3]);
              *puVar10 = uVar9;
              puVar10[-1] = (uint)(puVar14 + 0x14);
              puVar10[-2] = (uint)
                            "dll_ProcessAttach() - DLL_PROCESS_ATTACH for dll %s (%p) failed !";
              puVar10[-3] = 0xf;
              puVar10[-4] = 0x415023f;
              FUN_0402cd10();
              return 0;
            }
          }
        }
        uVar4 = uVar4 + 1;
        puVar10 = puVar11;
      } while (uVar4 < (uint)(DAT_0451adc8 - DAT_0451adc4 >> 2));
    }
  }
  puVar11[-1] = 0x41501e7;
  DAT_0451adc8 = DAT_0451adc4;
  InitializeImplicitTLSForThread();
  puVar11[1] = (uint)"DLL_PROCESS_ATTACH done.";
  *puVar11 = 0x14;
  puVar11[-1] = 0x41501fb;
  FUN_0402cd10();
  *puVar11 = (uint)&DAT_0451add4;
  puVar11[-1] = 0x4150207;
  pthread_mutex_unlock((pthread_mutex_t *)*puVar11);
  return 1;
}

// --- ProcessLibraryPath @0x0414f020 ---
/* source: windll */

void __regparm3 ProcessLibraryPath(char *param_1,char *param_2,char *param_3)

{
  int iVar1;
  __int32_t **pp_Var2;
  char *pcVar3;
  size_t sVar4;
  char cVar5;
  char local_820 [2048];
  char *local_20 [4];
  
  strcpy(local_820,param_1);
  FUN_04159ef0(local_820);
  FUN_04159ea0(local_820);
  local_20[0] = (char *)0x0;
  iVar1 = eON_GetFullPathNameA(local_820,0x7ff,param_2,local_20);
  if (iVar1 == 0) {
    FUN_0400a810("eON_GetFullPathNameA( lcname, sizeof(lcname)-1, outPath, &filePart ) != 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/windll.cpp"
                 ,0xa6,"void ProcessLibraryPath(LPCSTR, char*, char*)");
  }
  if (local_20[0] == (char *)0x0) {
    FUN_0400a810("filePart",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/windll.cpp"
                 ,0xa7,"void ProcessLibraryPath(LPCSTR, char*, char*)");
  }
  for (; pcVar3 = local_20[0], cVar5 = *param_2, cVar5 != '\0'; param_2 = param_2 + 1) {
    if (cVar5 == '/') {
      *param_2 = '\\';
    }
    else {
      if ((int)cVar5 + 0x80U < 0x180) {
        pp_Var2 = __ctype_tolower_loc();
        cVar5 = (char)(*pp_Var2)[cVar5];
      }
      *param_2 = cVar5;
    }
  }
  strcpy(param_3,local_20[0]);
  pcVar3[-1] = '\0';
  pcVar3 = strchr(param_3,0x2e);
  if (pcVar3 != (char *)0x0) {
    return;
  }
  sVar4 = strlen(param_3);
  builtin_strncpy(param_3 + sVar4,".dll",5);
  return;
}

// --- dll_Init @0x0414fe20 ---
/* source: windll */

undefined4 dll_Init(void)

{
  int iVar1;
  pthread_mutexattr_t local_10 [2];
  
  pthread_mutexattr_init(local_10);
  pthread_mutexattr_setprioceiling(local_10,0);
  pthread_mutexattr_setprotocol(local_10,0);
  pthread_mutexattr_setpshared(local_10,1);
  pthread_mutexattr_settype(local_10,1);
  iVar1 = pthread_mutex_init((pthread_mutex_t *)&DAT_0451add4,local_10);
  if (iVar1 != 0) {
    FUN_0400a810("pthread_mutex_init( &gDLLsMutex, &attr ) == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/windll.cpp"
                 ,0x3aa,"bool dll_Init()");
  }
  pthread_mutexattr_destroy(local_10);
  return 1;
}

// --- eON_GetModuleFileNameW @0x04153620 ---
/* source: windll */

uint eON_GetModuleFileNameW(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_2020 [8200];
  undefined4 *local_18;
  
  uVar4 = param_3;
  uVar2 = param_2;
  uVar1 = param_1;
  local_18 = &param_1;
  if (0x1fff < param_3) {
    FUN_0400a810("nSize < 8192",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/windll.cpp"
                 ,0x53e,"DWORD eON_GetModuleFileNameW(HINSTANCE, LPWSTR, DWORD)");
  }
  iVar3 = windll_04153380(uVar1,local_2020,0x2000);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else if (uVar4 < iVar3 + 1U) {
    eON_MultiByteToWideChar(0,0,local_2020,uVar4,uVar2,uVar4);
  }
  else {
    uVar4 = eON_MultiByteToWideChar(0,0,local_2020,iVar3 + 1U,uVar2,uVar4);
  }
  return uVar4;
}

// --- eON_GetModuleHandleExA @0x04153230 ---
/* source: windll */

bool GetModuleHandleExA(uint param_1,uint param_2,int *param_3)

{
  int iVar1;
  _Rb_tree_node_base *p_Var2;
  
  if ((param_1 & 1) != 0) {
    FUN_0402cd10(10,"GetModuleHandleExA() - GET_MODULE_HANDLE_EX_FLAG_PIN unhandled. Handle it.");
  }
  if ((param_1 & 2) == 0) {
    FUN_0402cd10(10,
                 "GetModuleHandleExA() - need to implement reference counting for modules for this call to work!"
                );
  }
  if (param_3 == (int *)0x0) {
    return false;
  }
  *param_3 = 0;
  if ((param_1 & 4) == 0) {
    if (param_2 == 0) {
      iVar1 = DAT_0451adc0;
      if (DAT_0451adc0 == 0) {
        FUN_0400a810("gMainExecutableHandle",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/windll.cpp"
                     ,0x55c,"void* eON_GetModuleHandleA(LPCSTR)");
        iVar1 = DAT_0451adc0;
        *param_3 = DAT_0451adc0;
        goto LAB_041532b6;
      }
    }
    else {
      iVar1 = LoadLibraryA_Resolve();
    }
    *param_3 = iVar1;
  }
  else {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0451add4);
    p_Var2 = DAT_0451adf8;
    if (DAT_0451adf8 != (_Rb_tree_node_base *)&DAT_0451adf0) {
      do {
        if ((*(uint *)(p_Var2 + 0x520) <= param_2) &&
           (param_2 < *(uint *)(p_Var2 + 0x520) + *(int *)(p_Var2 + 0x524))) {
          *param_3 = *(int *)(p_Var2 + 0x10);
          break;
        }
        p_Var2 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var2);
      } while (p_Var2 != (_Rb_tree_node_base *)&DAT_0451adf0);
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0451add4);
    iVar1 = *param_3;
  }
LAB_041532b6:
  return iVar1 != 0;
}

// --- eON_GetModuleHandleExW @0x04153890 ---
/* source: windll */

bool GetModuleHandleExW(uint param_1,uint param_2,int *param_3)

{
  size_t __size;
  void *__ptr;
  int iVar1;
  _Rb_tree_node_base *p_Var2;
  bool bVar3;
  
  if ((param_1 & 1) != 0) {
    FUN_0402cd10(10,"GetModuleHandleExW() - GET_MODULE_HANDLE_EX_FLAG_PIN unhandled. Handle it.");
  }
  if ((param_1 & 2) == 0) {
    FUN_0402cd10(10,
                 "GetModuleHandleExW() - need to implement reference counting for modules for this call to work!"
                );
  }
  bVar3 = false;
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
    iVar1 = DAT_0451adc0;
    if ((param_1 & 4) == 0) {
      if (param_2 == 0) {
        if (DAT_0451adc0 == 0) {
          FUN_0400a810("gMainExecutableHandle",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/windll.cpp"
                       ,0x55c,"void* eON_GetModuleHandleA(LPCSTR)");
          iVar1 = DAT_0451adc0;
          *param_3 = DAT_0451adc0;
        }
        else {
          *param_3 = DAT_0451adc0;
        }
      }
      else {
        __size = eON_WideCharToMultiByte(0,0,param_2,0xffffffff,0,0,0,0);
        __ptr = malloc(__size);
        eON_WideCharToMultiByte(0,0,param_2,0xffffffff,__ptr,__size,0,0);
        if (__ptr == (void *)0x0) {
          iVar1 = DAT_0451adc0;
          if (DAT_0451adc0 == 0) {
            FUN_0400a810("gMainExecutableHandle",
                         "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/windll.cpp"
                         ,0x55c,"void* eON_GetModuleHandleA(LPCSTR)");
            iVar1 = DAT_0451adc0;
          }
        }
        else {
          iVar1 = LoadLibraryA_Resolve();
        }
        *param_3 = iVar1;
        free(__ptr);
        iVar1 = *param_3;
      }
    }
    else {
      pthread_mutex_lock((pthread_mutex_t *)&DAT_0451add4);
      p_Var2 = DAT_0451adf8;
      if (DAT_0451adf8 != (_Rb_tree_node_base *)&DAT_0451adf0) {
        do {
          if ((*(uint *)(p_Var2 + 0x520) <= param_2) &&
             (param_2 < *(uint *)(p_Var2 + 0x520) + *(int *)(p_Var2 + 0x524))) {
            *param_3 = *(int *)(p_Var2 + 0x10);
            break;
          }
          p_Var2 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var2);
        } while (p_Var2 != (_Rb_tree_node_base *)&DAT_0451adf0);
      }
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0451add4);
      iVar1 = *param_3;
    }
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}

// --- windll_041531d0 @0x041531d0 ---
/* source: windll */

int windll_041531d0(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = DAT_0451adc0;
    if (DAT_0451adc0 == 0) {
      FUN_0400a810("gMainExecutableHandle",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/windll.cpp"
                   ,0x55c,"void* eON_GetModuleHandleA(LPCSTR)");
      iVar1 = DAT_0451adc0;
    }
  }
  else {
    iVar1 = LoadLibraryA_Resolve();
  }
  return iVar1;
}

// --- windll_04153380 @0x04153380 ---
/* source: windll */

size_t windll_04153380(uint param_1,char *param_2,uint param_3)

{
  undefined4 *puVar1;
  char *__dest;
  uint __n;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  size_t sVar5;
  uint *puVar6;
  char cVar7;
  uint uVar8;
  uint *puVar9;
  char *pcVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined4 local_420;
  undefined4 *local_18;
  
  __n = param_3;
  __dest = param_2;
  uVar3 = param_1;
  local_18 = &param_1;
  eON_SetLastError(0);
  if (__n == 0) {
    return 0;
  }
  if (uVar3 != 0) {
    if (DAT_0451adc0 == 0) {
      FUN_0400a810("gMainExecutableHandle",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/windll.cpp"
                   ,0x55c,"void* eON_GetModuleHandleA(LPCSTR)");
    }
    if (uVar3 != DAT_0451adc0) {
      pthread_mutex_lock((pthread_mutex_t *)&DAT_0451add4);
      puVar2 = DAT_0451adf4;
      puVar11 = &DAT_0451adf0;
      if (DAT_0451adf4 == (undefined *)0x0) {
LAB_04153560:
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_0451add4);
        return 0;
      }
      do {
        while (puVar12 = puVar2, uVar3 <= *(uint *)(puVar12 + 0x10)) {
          puVar2 = *(undefined **)(puVar12 + 8);
          puVar11 = puVar12;
          if (*(undefined **)(puVar12 + 8) == (undefined *)0x0) goto LAB_04153415;
        }
        puVar1 = (undefined4 *)(puVar12 + 0xc);
        puVar2 = (undefined *)*puVar1;
        puVar12 = puVar11;
      } while ((undefined *)*puVar1 != (undefined *)0x0);
LAB_04153415:
      if ((puVar12 == &DAT_0451adf0) || (uVar3 < *(uint *)(puVar12 + 0x10))) goto LAB_04153560;
      if (puVar12[0x118] == '\0') {
        strcpy((char *)&local_420,&DAT_04519dc0);
        strcat((char *)&local_420,puVar12 + 0x14);
      }
      else {
        strcpy((char *)&local_420,puVar12 + 0x118);
        puVar9 = &local_420;
        do {
          puVar6 = puVar9;
          uVar3 = *puVar6 + 0xfefefeff & ~*puVar6;
          uVar4 = uVar3 & 0x80808080;
          puVar9 = puVar6 + 1;
        } while (uVar4 == 0);
        uVar8 = uVar4 >> 0x10;
        puVar9 = (uint *)((int)puVar6 + 6);
        if ((uVar3 & 0x8080) != 0) {
          puVar9 = puVar6 + 1;
          uVar8 = uVar4;
        }
        pcVar10 = (char *)((int)puVar9 + (-3 - (uint)CARRY1((byte)uVar8,(byte)uVar8)));
        pcVar10[0] = '\\';
        pcVar10[1] = '\0';
        strcat((char *)&local_420,puVar12 + 0x14);
      }
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0451add4);
      goto LAB_04153530;
    }
  }
  strcpy((char *)&local_420,&DAT_04519dc0);
  strcat((char *)&local_420,&DAT_04518dc0);
LAB_04153530:
  pcVar10 = (char *)&local_420;
  cVar7 = (char)local_420;
  if ((char)local_420 != '\0') {
    do {
      if (cVar7 == '/') {
        *pcVar10 = '\\';
      }
      cVar7 = pcVar10[1];
      pcVar10 = pcVar10 + 1;
    } while (cVar7 != '\0');
    pcVar10 = (char *)((int)&local_420 + 1);
    if ((char)local_420 != '\"') {
      pcVar10 = (char *)&local_420;
    }
  }
  sVar5 = strlen(pcVar10);
  if (pcVar10[sVar5 - 1] == '\"') {
    pcVar10[sVar5 - 1] = '\0';
    sVar5 = sVar5 - 1;
  }
  if (sVar5 + 1 <= __n) {
    strcpy(__dest,pcVar10);
    return sVar5;
  }
  strncpy(__dest,pcVar10,__n);
  return __n;
}

// --- windll_04153730 @0x04153730 ---
/* source: windll */

int windll_04153730(int param_1)

{
  size_t __size;
  void *__ptr;
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = DAT_0451adc0;
    if (DAT_0451adc0 == 0) {
      FUN_0400a810("gMainExecutableHandle",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/windll.cpp"
                   ,0x55c,"void* eON_GetModuleHandleA(LPCSTR)");
      iVar1 = DAT_0451adc0;
    }
  }
  else {
    __size = eON_WideCharToMultiByte(0,0,param_1,0xffffffff,0,0,0,0);
    __ptr = malloc(__size);
    eON_WideCharToMultiByte(0,0,param_1,0xffffffff,__ptr,__size,0,0);
    if (__ptr == (void *)0x0) {
      iVar1 = DAT_0451adc0;
      if (DAT_0451adc0 == 0) {
        FUN_0400a810("gMainExecutableHandle",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/windll.cpp"
                     ,0x55c,"void* eON_GetModuleHandleA(LPCSTR)");
        iVar1 = DAT_0451adc0;
      }
    }
    else {
      iVar1 = LoadLibraryA_Resolve();
    }
    free(__ptr);
  }
  return iVar1;
}

// --- winpe_LinkImports @0x041521b0 ---
/* source: windll */

byte winpe_LinkImports(int param_1,char param_2)

{
  uint *puVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint local_4c [8];
  int local_2c;
  byte local_26;
  char local_25;
  uint local_24;
  uint *local_20;
  
  puVar8 = local_4c + 4;
  local_25 = param_2;
  local_2c = *(int *)(param_1 + 0x80 + *(int *)(param_1 + 0x3c));
  if (local_2c == 0) {
    return 1;
  }
  local_2c = param_1 + 0x14 + local_2c;
  local_26 = 0;
  puVar9 = local_4c + 4;
  if (*(int *)(local_2c + -0x10) == 0) goto LAB_041522d9;
LAB_041521f8:
  iVar6 = *(int *)(local_2c + -8);
  puVar9 = puVar8;
  do {
    puVar9[2] = 0;
    puVar9[1] = 0;
    *puVar9 = iVar6 + param_1;
    puVar9[-1] = 0x4152216;
    local_24 = eON_LoadLibraryEx();
    puVar7 = puVar9 + -3;
    puVar8 = puVar9 + -3;
    if (local_24 == 0) {
      puVar9[-1] = iVar6 + param_1;
      puVar9[-2] = (uint)"winpe_LinkImports() - Error loading DLL %s";
      puVar9[-3] = 0xf;
      puVar9[-4] = 0x4152340;
      FUN_0402cd10();
      local_26 = 1;
      puVar5 = local_20;
      iVar6 = local_2c;
    }
    else {
      puVar10 = (uint *)(param_1 + *(int *)(local_2c + -4));
      puVar1 = (uint *)(param_1 + *(int *)(local_2c + -0x14));
      if (*(int *)(local_2c + -0x14) == 0) {
        puVar1 = puVar10;
      }
      uVar4 = *puVar1;
      puVar5 = local_20;
      puVar8 = puVar9 + -3;
      while (local_20 = puVar10, iVar6 = local_2c, uVar4 != 0) {
        puVar1 = puVar1 + 1;
        if ((int)uVar4 < 0) {
          uVar4 = uVar4 & 0xffff;
        }
        else {
          uVar4 = param_1 + 2 + uVar4;
          if (local_25 != '\0') {
            pcVar2 = "CreateFileA";
            iVar6 = 0;
            do {
              puVar7[1] = (uint)pcVar2;
              *puVar7 = uVar4;
              puVar7[-1] = 0x415228a;
              iVar3 = strcmp((char *)*puVar7,(char *)puVar7[1]);
              if (iVar3 == 0) {
                uVar4 = *(uint *)(&UNK_0433d720 + (&DAT_0433d724)[iVar6 * 2] * 8);
                break;
              }
              iVar6 = iVar6 + 1;
              pcVar2 = *(char **)(&UNK_0433d720 + iVar6 * 8);
            } while (pcVar2 != (char *)0x0);
          }
        }
        if (uVar4 == 0) {
          puVar7[3] = (uint)"bool winpe_LinkImports(HMODULE, bool)";
          puVar7[2] = 0x30c;
          puVar7[1] = (uint)
                      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/windll.cpp"
          ;
          *puVar7 = (uint)"procName";
          puVar7[-1] = 0x4152323;
          FUN_0400a810();
        }
        puVar7[1] = uVar4;
        *puVar7 = local_24;
        puVar7[-1] = 0x41522b2;
        uVar4 = GetProcAddress();
        puVar8 = puVar7 + -2;
        puVar7 = puVar7 + -2;
        *local_20 = uVar4;
        puVar5 = local_20 + 1;
        puVar10 = puVar5;
        uVar4 = *puVar1;
      }
    }
    local_20 = puVar5;
    local_2c = iVar6 + 0x14;
    puVar9 = puVar8;
    if (*(int *)(iVar6 + 4) != 0) goto LAB_041521f8;
LAB_041522d9:
    iVar6 = *(int *)(local_2c + -8);
    if (iVar6 == 0) {
      return local_26 ^ 1;
    }
  } while( true );
}

// --- winpe_LoadFromMemory @0x04152350 ---
/* WARNING: Removing unreachable block (ram,0x04152ea2) */
/* WARNING: Removing unreachable block (ram,0x04152e74) */
/* source: windll */

undefined4 * winpe_LoadFromMemory(void *param_1,uint param_2,int param_3)

{
  undefined2 uVar1;
  uint *puVar2;
  undefined1 uVar3;
  int *piVar4;
  uint uVar5;
  undefined1 *puVar6;
  char *pcVar7;
  void *pvVar8;
  int iVar9;
  size_t sVar10;
  ushort uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  undefined1 *puVar17;
  int iVar18;
  size_t *psVar19;
  size_t *psVar20;
  int iVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  bool bVar24;
  bool bVar25;
  byte bVar26;
  undefined4 *local_2054;
  uint local_204c;
  uint local_2048;
  int *local_2044;
  int local_2040;
  undefined1 local_203c [6];
  ushort auStack_2036 [8];
  ushort auStack_2026 [15];
  int aiStack_2008 [11];
  int aiStack_1fdc [10];
  int aiStack_1fb4 [6];
  int aiStack_1f9c [2008];
  undefined1 *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 *local_30;
  code *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d [13];
  
  bVar26 = 0;
  psVar20 = (size_t *)&stack0xffffdf74;
  puVar22 = (undefined4 *)local_203c;
  for (iVar9 = 0x800; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar22 = 0;
    puVar22 = puVar22 + 1;
  }
  sVar10 = 0x2000;
  if (param_2 < 0x2001) {
    sVar10 = param_2;
  }
  memcpy(local_203c,param_1,sVar10);
  if (local_203c._0_2_ != 0x5a4d) {
    FUN_0402cd10();
    return (undefined4 *)0x0;
  }
  piVar16 = (int *)(local_203c + aiStack_2008[2]);
  if (*piVar16 != 0x4550) {
    FUN_0402cd10();
    return (undefined4 *)0x0;
  }
  if (*(short *)((int)auStack_2026 + aiStack_2008[2] + 2) != 0x10b) {
    FUN_0402cd10();
    return (undefined4 *)0x0;
  }
  if (*(char *)(param_3 + 0x50a) == '\0') {
    uVar11 = *(ushort *)((int)auStack_2026 + aiStack_2008[2]);
    if ((uVar11 & 0x2000) == 0) {
      FUN_0402cd10();
      return (undefined4 *)0x0;
    }
  }
  else {
    uVar11 = *(ushort *)((int)auStack_2026 + aiStack_2008[2]);
    if ((uVar11 & 2) == 0) {
      FUN_0402cd10();
      return (undefined4 *)0x0;
    }
  }
  bVar24 = true;
  iVar9 = *(int *)((int)aiStack_2008 + aiStack_2008[2]);
  if ((uVar11 & 1) == 0) {
    bVar24 = *(int *)((int)aiStack_1f9c + aiStack_2008[2]) == 0;
  }
  uVar15 = 0;
  if (*(ushort *)((int)auStack_2036 + aiStack_2008[2]) != 0) {
    uVar12 = 0;
    iVar21 = 0;
    piVar4 = piVar16;
    do {
      uVar5 = piVar4[0x41];
      if ((uVar15 < uVar5) && (iVar21 = piVar4[0x40], uVar15 = uVar5, iVar21 == 0)) {
        iVar21 = piVar4[0x42];
      }
      uVar12 = uVar12 + 1;
      piVar4 = piVar4 + 10;
    } while (uVar12 < *(ushort *)((int)auStack_2036 + aiStack_2008[2]));
    uVar15 = uVar15 + iVar21;
  }
  *(uint *)(param_3 + 0x510) = uVar15;
  if (*(char *)(param_3 + 0x50a) != '\0') {
    local_2054 = (undefined4 *)vmm_PrepareImageRegion();
    if ((local_2054 != (undefined4 *)0x0) || (iVar9 == 0)) goto LAB_041524cb;
    if (bVar24) {
      FUN_0402cd10();
      return (undefined4 *)0x0;
    }
  }
  local_2054 = (undefined4 *)vmm_PrepareImageRegion();
LAB_041524cb:
  if (local_2054 == (undefined4 *)0x0) {
    FUN_0402cd10();
  }
  else {
    *(undefined4 **)(param_3 + 0x50c) = local_2054;
    if (*(char *)(param_3 + 0x50a) != '\0') {
      DAT_0451adc0 = local_2054;
      if (DAT_04518db8 == 0) {
        DAT_04518db8 = *(int *)((int)aiStack_1fdc + aiStack_2008[2]);
      }
      if (DAT_04518db4 == 0) {
        DAT_04518db4 = *(int *)((int)aiStack_1fdc + aiStack_2008[2] + 8);
      }
      if (DAT_04518db0 == 0) {
        DAT_04518db0 = *(int *)((int)aiStack_1fdc + aiStack_2008[2] + 0xc);
      }
    }
    puVar22 = (undefined4 *)local_203c;
    uVar15 = 0x2000;
    bVar25 = ((uint)local_2054 & 1) != 0;
    puVar23 = local_2054;
    if (bVar25) {
      puVar22 = (undefined4 *)(local_203c + 1);
      uVar15 = 0x1fff;
      *(undefined1 *)local_2054 = local_203c[0];
      puVar23 = (undefined4 *)((int)local_2054 + 1);
    }
    if (((uint)puVar23 & 2) != 0) {
      uVar1 = *(undefined2 *)puVar22;
      uVar15 = uVar15 - 2;
      puVar22 = (undefined4 *)((int)puVar22 + 2);
      *(undefined2 *)puVar23 = uVar1;
      puVar23 = (undefined4 *)((int)puVar23 + 2);
    }
    iVar9 = 0;
    for (uVar12 = uVar15 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *puVar23 = *puVar22;
      puVar22 = puVar22 + (uint)bVar26 * -2 + 1;
      puVar23 = puVar23 + (uint)bVar26 * -2 + 1;
    }
    if ((uVar15 & 2) != 0) {
      *(undefined2 *)puVar23 = *(undefined2 *)puVar22;
      iVar9 = 2;
    }
    if (bVar25) {
      *(undefined1 *)((int)puVar23 + iVar9) = *(undefined1 *)((int)puVar22 + iVar9);
    }
    uVar11 = *(ushort *)((int)auStack_2036 + aiStack_2008[2]);
    if (uVar11 != 0) {
      uVar15 = 0;
      do {
        while (piVar16[0x43] == 0) {
LAB_04152598:
          uVar15 = uVar15 + 1;
          piVar16 = piVar16 + 10;
          if (uVar11 <= uVar15) goto LAB_041525fd;
        }
        iVar9 = piVar16[0x41];
        memcpy((void *)((int)local_2054 + iVar9),(void *)(piVar16[0x43] + (int)param_1),
               piVar16[0x42]);
        if (*(int *)((int)aiStack_1fb4 + aiStack_2008[2]) == piVar16[0x41]) {
          *(void **)(param_3 + 0x514) = (void *)((int)local_2054 + iVar9);
          uVar11 = *(ushort *)((int)auStack_2036 + aiStack_2008[2]);
          goto LAB_04152598;
        }
        uVar11 = *(ushort *)((int)auStack_2036 + aiStack_2008[2]);
        uVar15 = uVar15 + 1;
        piVar16 = piVar16 + 10;
      } while (uVar15 < uVar11);
    }
LAB_041525fd:
    iVar9 = local_2054[0xf];
    puVar22 = *(undefined4 **)((int)local_2054 + iVar9 + 0x34);
    if (local_2054 != puVar22) {
      if (bVar24) {
        FUN_0400a810();
        puVar22 = *(undefined4 **)((int)local_2054 + iVar9 + 0x34);
      }
      uVar15 = *(uint *)((int)local_2054 + iVar9 + 0xa4);
      if (uVar15 != 0) {
        local_2048 = 0;
        local_2044 = (int *)(*(int *)((int)local_2054 + iVar9 + 0xa0) + (int)local_2054);
        do {
          iVar21 = local_2044[1];
          uVar12 = iVar21 - 8U >> 1;
          piVar16 = local_2044 + 2;
          if (uVar12 != 0) {
            uVar5 = 0;
            do {
              uVar11 = *(ushort *)((int)local_2044 + uVar5 * 2 + 8);
              if ((uVar11 & 0x3000) != 0) {
                piVar16 = (int *)((int)local_2054 + (uVar11 & 0xfff) + *local_2044);
                *piVar16 = (int)local_2054 + (*piVar16 - (int)puVar22);
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 != uVar12);
            iVar21 = local_2044[1];
            piVar16 = (int *)((int)(local_2044 + 2) + uVar5 * 2);
          }
          local_2044 = piVar16;
          local_2048 = local_2048 + iVar21;
        } while (local_2048 < uVar15);
      }
    }
    uVar3 = 0;
    iVar21 = 0;
    if (*(char *)(param_3 + 0x50a) == '\0') {
      iVar13 = *(int *)((int)local_2054 + iVar9 + 0x28);
      uVar3 = 0;
      if (iVar13 != 0) {
        uVar3 = 1;
        iVar21 = (int)local_2054 + iVar13;
      }
    }
    *(int *)(param_3 + 0x518) = iVar21;
    *(undefined1 *)(param_3 + 0x508) = uVar3;
    *(undefined1 *)(param_3 + 0x509) = uVar3;
    iVar21 = *(int *)((int)local_2054 + iVar9 + 0x78);
    if (iVar21 == 0) {
      if (*(char *)(param_3 + 0x50a) == '\0') {
        FUN_0402cd10();
        return local_2054;
      }
    }
    else {
      puVar6 = (undefined1 *)(iVar21 + (int)local_2054);
      iVar21 = *(int *)(puVar6 + 0x1c);
      if (*(int *)(puVar6 + 0x10) != 0) {
        uVar15 = 0;
        do {
          puVar22 = *(undefined4 **)(param_3 + 0x538);
          local_34 = 0;
          if (puVar22 == *(undefined4 **)(param_3 + 0x53c)) {
            FUN_04154b70();
          }
          else {
            iVar13 = 0;
            if (puVar22 != (undefined4 *)0x0) {
              *puVar22 = 0;
              iVar13 = *(int *)(param_3 + 0x538);
            }
            *(int *)(param_3 + 0x538) = iVar13 + 4;
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < *(uint *)(puVar6 + 0x10));
      }
      if (*(int *)(puVar6 + 0x14) != 0) {
        uVar15 = 0;
        iVar13 = param_3 + 0x534;
        psVar20 = (size_t *)&stack0xffffdf74;
        do {
          while ((puVar17 = (undefined1 *)
                            ((int)local_2054 + *(int *)((int)local_2054 + uVar15 * 4 + iVar21)),
                 local_30 = puVar17, puVar6 <= puVar17 &&
                 (puVar17 < puVar6 + *(int *)((int)local_2054 + iVar9 + 0x7c)))) {
            psVar20[1] = 0x2e;
            *psVar20 = (size_t)puVar17;
            psVar20[-1] = 0x4152810;
            pcVar7 = strchr((char *)*psVar20,psVar20[1]);
            if (pcVar7 == (char *)0x0) {
              psVar20[2] = (size_t)puVar17;
              psVar20[1] = (size_t)"DLL: malformed function forwarding? (\'%s\')";
              *psVar20 = 0xf;
              psVar20[-1] = 0x4152c35;
              FUN_0402cd10();
              puVar22 = *(undefined4 **)(param_3 + 0x538);
              local_2c = EmptyFunction;
              if (puVar22 != *(undefined4 **)(param_3 + 0x53c)) {
                iVar14 = 0;
                if (puVar22 != (undefined4 *)0x0) {
                  *puVar22 = EmptyFunction;
                  iVar14 = *(int *)(param_3 + 0x538);
                }
                goto LAB_04152931;
              }
              psVar20[1] = (size_t)puVar22;
              psVar20[2] = (size_t)&local_2c;
              *psVar20 = iVar13;
              psVar20[-1] = 0x4152db8;
              FUN_04154b70();
            }
            else {
              sVar10 = (int)(pcVar7 + 1) - (int)puVar17;
              *psVar20 = sVar10;
              psVar20[-1] = 0x4152833;
              pvVar8 = malloc(*psVar20);
              psVar20[1] = (size_t)puVar17;
              *psVar20 = (size_t)pvVar8;
              psVar20[2] = sVar10;
              psVar20[-1] = 0x415284f;
              memcpy((void *)*psVar20,(void *)psVar20[1],psVar20[2]);
              *(undefined1 *)((int)pvVar8 + (sVar10 - 1)) = 0;
              psVar20[2] = 0;
              psVar20[1] = 0;
              *psVar20 = (size_t)pvVar8;
              psVar20[-1] = 0x4152878;
              iVar14 = eON_LoadLibraryEx();
              psVar19 = psVar20 + -3;
              if (iVar14 == 0) {
                *psVar20 = (size_t)puVar17;
                psVar20[-2] = (size_t)"DLL: error loading DLL \'%s\' for forwarded function \'%s\'";
                psVar20[-3] = 0xf;
                psVar20[-1] = (size_t)pvVar8;
                psVar20[-4] = 0x4152cb7;
                FUN_0402cd10();
              }
              else {
                psVar20[-2] = (size_t)(pcVar7 + 1);
                psVar20[-3] = iVar14;
                psVar20[-4] = 0x4152895;
                local_28 = GetProcAddress();
                puVar22 = *(undefined4 **)(param_3 + 0x538);
                psVar19 = psVar20 + -5;
                if (puVar22 == *(undefined4 **)(param_3 + 0x53c)) {
                  psVar20[-4] = (size_t)puVar22;
                  psVar20[-3] = (size_t)&local_28;
                  psVar20[-5] = iVar13;
                  psVar20[-6] = 0x4152d77;
                  FUN_04023c70();
                }
                else {
                  iVar14 = 0;
                  if (puVar22 != (undefined4 *)0x0) {
                    *puVar22 = local_28;
                    iVar14 = *(int *)(param_3 + 0x538);
                  }
                  *(int *)(param_3 + 0x538) = iVar14 + 4;
                  psVar19 = psVar20 + -5;
                }
              }
              *psVar19 = (size_t)pvVar8;
              psVar19[-1] = 0x41528d2;
              free((void *)*psVar19);
              psVar20 = psVar19;
            }
LAB_041528d2:
            uVar15 = uVar15 + 1;
            if (*(uint *)(puVar6 + 0x14) <= uVar15) goto LAB_04152948;
          }
          puVar2 = *(uint **)(param_3 + 0x538);
          if (puVar2 == *(uint **)(param_3 + 0x53c)) {
            psVar20[1] = (size_t)puVar2;
            psVar20[2] = (size_t)&local_30;
            *psVar20 = iVar13;
            psVar20[-1] = 0x4152cd5;
            FUN_04023c70();
            goto LAB_041528d2;
          }
          iVar14 = 0;
          if (puVar2 != (uint *)0x0) {
            *puVar2 = (uint)puVar17;
            iVar14 = *(int *)(param_3 + 0x538);
          }
LAB_04152931:
          uVar15 = uVar15 + 1;
          *(int *)(param_3 + 0x538) = iVar14 + 4;
        } while (uVar15 < *(uint *)(puVar6 + 0x14));
      }
LAB_04152948:
      iVar9 = *(int *)(puVar6 + 0x20);
      iVar21 = *(int *)(puVar6 + 0x24);
      if (*(int *)(puVar6 + 0x18) != 0) {
        local_204c = 0;
        do {
          uVar11 = *(ushort *)((int)local_2054 + local_204c * 2 + iVar21);
          iVar13 = *(int *)(puVar6 + 0x10);
          psVar20[2] = (size_t)&local_1f;
          iVar14 = *(int *)((int)local_2054 + local_204c * 4 + iVar9);
          *psVar20 = (size_t)&local_24;
          psVar20[1] = (int)local_2054 + iVar14;
          psVar20[-1] = 0x41529f1;
          std::string::string((string *)*psVar20,(char *)psVar20[1],(allocator *)psVar20[2]);
          puVar17 = local_24;
          local_2044 = (int *)local_24;
          if (*(int *)(param_3 + 0x524) == 0) {
LAB_04152a9e:
            local_24 = &DAT_04410d0c;
            *psVar20 = (size_t)&local_3c;
            local_38 = 0;
            local_3c = puVar17;
                    /* try { // try from 04152acd to 04152ad1 has its CatchHandler @ 04152e57 */
            psVar20[-1] = 0x4152ad2;
            FUN_0414f9e0();
            local_2048 = local_2040;
            if ((undefined4 *)(local_3c + -0xc) == &std::string::_Rep::_S_empty_rep_storage) {
              local_2044 = (int *)local_24;
            }
            else {
              LOCK();
              piVar16 = (int *)(local_3c + -4);
              iVar14 = *piVar16;
              *piVar16 = *piVar16 + -1;
              UNLOCK();
              if (iVar14 < 1) {
                *psVar20 = (size_t)(local_3c + -0xc);
                psVar20[1] = (size_t)&local_1e;
                psVar20[-1] = 0x4152e94;
                std::string::_Rep::_M_destroy((allocator *)*psVar20);
                local_2044 = (int *)local_24;
              }
              else {
                local_2044 = (int *)local_24;
              }
            }
          }
          else {
            uVar15 = *(uint *)(local_24 + -0xc);
            iVar14 = *(int *)(param_3 + 0x524);
            local_2048 = param_3 + 0x520;
            do {
              while( true ) {
                iVar18 = iVar14;
                uVar12 = *(uint *)(*(int *)(iVar18 + 0x10) + -0xc);
                *psVar20 = *(int *)(iVar18 + 0x10);
                uVar5 = uVar12;
                if (uVar15 <= uVar12) {
                  uVar5 = uVar15;
                }
                psVar20[2] = uVar5;
                psVar20[1] = (size_t)puVar17;
                psVar20[-1] = 0x4152a52;
                iVar14 = memcmp((void *)*psVar20,(void *)psVar20[1],psVar20[2]);
                if (iVar14 == 0) {
                  iVar14 = uVar12 - uVar15;
                }
                if (-1 < iVar14) break;
                iVar14 = *(int *)(iVar18 + 0xc);
                if (*(int *)(iVar18 + 0xc) == 0) goto LAB_04152a62;
              }
              iVar14 = *(int *)(iVar18 + 8);
              local_2048 = iVar18;
            } while (*(int *)(iVar18 + 8) != 0);
LAB_04152a62:
            if (param_3 + 0x520 == local_2048) goto LAB_04152a9e;
            uVar12 = *(uint *)(*(int *)(local_2048 + 0x10) + -0xc);
            psVar20[1] = *(int *)(local_2048 + 0x10);
            uVar5 = uVar12;
            if (uVar15 <= uVar12) {
              uVar5 = uVar15;
            }
            psVar20[2] = uVar5;
            *psVar20 = (size_t)puVar17;
            psVar20[-1] = 0x4152a95;
            iVar14 = memcmp((void *)*psVar20,(void *)psVar20[1],psVar20[2]);
            if (iVar14 == 0) {
              iVar14 = uVar15 - uVar12;
            }
            if (iVar14 < 0) goto LAB_04152a9e;
          }
          *(uint *)(local_2048 + 0x14) = (uint)uVar11 + iVar13;
          if ((undefined4 *)((int)local_2044 + -0xc) != &std::string::_Rep::_S_empty_rep_storage) {
            LOCK();
            piVar16 = (int *)((int)local_2044 + -4);
            iVar13 = *piVar16;
            *piVar16 = *piVar16 + -1;
            UNLOCK();
            if (iVar13 < 1) {
              *psVar20 = (size_t)((int)local_2044 + -0xc);
              psVar20[1] = (size_t)local_1d;
              psVar20[-1] = 0x4152e52;
              std::string::_Rep::_M_destroy((allocator *)*psVar20);
            }
          }
          local_204c = local_204c + 1;
        } while (local_204c < *(uint *)(puVar6 + 0x18));
      }
    }
  }
  return local_2054;
}

