// Recovered source: eon2/src/dlls/win32/kernel32/winthreads.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- eON_CreateThread @0x0415c090 ---
/* source: winthreads */

undefined4
eON_CreateThread(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                uint *param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 *__s;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  size_t __stacksize;
  undefined *puVar12;
  undefined *puVar13;
  int in_FS_OFFSET;
  undefined *local_64;
  pthread_attr_t local_58;
  undefined4 *local_34;
  int local_30;
  uint local_2c;
  undefined4 local_28;
  pthread_t local_24 [3];
  undefined4 *local_18;
  
  puVar6 = param_6;
  uVar5 = param_5;
  uVar4 = param_4;
  uVar9 = param_3;
  uVar3 = param_2;
  uVar2 = DAT_04410a14;
  local_18 = &param_1;
  if (param_1 != 0) {
    FUN_0402cd10(0xf,"eON_CreateThread() - lpThreadAttributes not supported!!");
    *(undefined4 *)(*(int *)(in_FS_OFFSET + 0x18) + 0x34) = 0x32;
    return 0;
  }
  DAT_04410a14 = DAT_04410a14 + 1;
  uVar8 = synchronisationPrimitives_0414a7f0(2,uVar2);
  Synchronisation_AddRefHandle(uVar8);
  __s = malloc(0x94);
  if (__s == (undefined4 *)0x0) {
    FUN_0400a810("threadInfo",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/winthreads.cpp"
                 ,0x526,
                 "void* eON_CreateThread(LPSECURITY_ATTRIBUTES, SIZE_T, LPTHREAD_START_ROUTINE, PVOID, DWORD, PDWORD)"
                );
  }
  bzero(__s,0x94);
  __s[2] = uVar2;
  __s[0x13] = 0;
  __s[3] = uVar8;
  __s[4] = 0;
  *__s = uVar9;
  __s[1] = uVar4;
  __s[0x14] = (uint)((uVar5 & 4) != 0);
  uVar9 = synchronisationPrimitives_0414aaf0(0,0,0);
  __s[0x16] = 0xdeadbabe;
  __s[5] = uVar9;
  if (uVar3 == 0) {
    __stacksize = 0x100000;
    if (DAT_04518db8 != 0) {
      __stacksize = DAT_04518db8 + 0xfffU & 0xfffff000;
    }
  }
  else {
    __stacksize = 0x100000;
    if (0xfffff < uVar3) {
      __stacksize = uVar3 + 0xfff & 0xfffff000;
    }
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0451bd4c);
  pthread_attr_init(&local_58);
  pthread_attr_setdetachstate(&local_58,1);
  pthread_attr_setstacksize(&local_58,__stacksize);
  local_30 = 0;
  local_34 = __s;
  iVar10 = pthread_create(local_24,&local_58,eON_Int_Thread_StartThunk,&local_34);
  pthread_attr_destroy(&local_58);
  if (iVar10 == -1) {
    piVar11 = __errno_location();
    FUN_0402cd10(0xf,"eON_CreateThread() - pthread_create() failed, errno %d",*piVar11);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0451bd4c);
    free(__s);
    eON_CloseHandle(uVar8);
    eON_CloseHandle(uVar8);
    return 0;
  }
  if (puVar6 != (uint *)0x0) {
    *puVar6 = uVar2;
  }
  puVar7 = DAT_0451bd3c;
  puVar12 = &DAT_0451bd38;
  if (DAT_0451bd3c != (undefined *)0x0) {
    do {
      while (puVar13 = puVar7, uVar2 <= *(uint *)(puVar13 + 0x10)) {
        puVar7 = *(undefined **)(puVar13 + 8);
        puVar12 = puVar13;
        if (*(undefined **)(puVar13 + 8) == (undefined *)0x0) goto LAB_0415c245;
      }
      puVar1 = (undefined4 *)(puVar13 + 0xc);
      puVar7 = (undefined *)*puVar1;
      puVar13 = puVar12;
    } while ((undefined *)*puVar1 != (undefined *)0x0);
LAB_0415c245:
    if ((puVar13 != &DAT_0451bd38) && (*(uint *)(puVar13 + 0x10) <= uVar2)) goto LAB_0415c26a;
  }
  local_2c = uVar2;
  local_28 = 0;
  eON_Int_ThreadMap_InsertNode();
  puVar13 = local_64;
LAB_0415c26a:
  *(undefined4 **)(puVar13 + 0x14) = __s;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0451bd4c);
  while (local_30 == 0) {
    sched_yield();
  }
  return uVar8;
}

// --- eON_SuspendThread @0x0415c5d0 ---
/* source: winthreads */

undefined4 eON_SuspendThread(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  int in_FS_OFFSET;
  undefined *local_24;
  uint local_18;
  int local_14;
  
  if (param_1 == 0) {
    *(undefined4 *)(*(int *)(in_FS_OFFSET + 0x18) + 0x34) = 0x57;
    return 0xffffffff;
  }
  if (param_1 == -2) {
    param_1 = *(int *)(*(int *)(*(int *)(in_FS_OFFSET + 0x18) + 0x130) + 0xc);
  }
  iVar4 = Synchronisation_GetObjectInfo(param_1,&local_18,&local_14);
  if ((iVar4 == 0) || (local_14 != 2)) {
    *(undefined4 *)(*(int *)(in_FS_OFFSET + 0x18) + 0x34) = 6;
    return 0xffffffff;
  }
  if (*(uint *)(*(int *)(in_FS_OFFSET + 0x18) + 0x24) == local_18) {
    iVar4 = *(int *)(*(int *)(in_FS_OFFSET + 0x18) + 0x130);
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0451bd4c);
    *(int *)(iVar4 + 0x50) = *(int *)(iVar4 + 0x50) + 1;
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0451bd4c);
    if (*(int *)(iVar4 + 0x50) == 0) {
      return 0;
    }
    if (*(int *)(iVar4 + 0x54) == 0) {
      return 0;
    }
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0451bd4c);
    if (*(int *)(iVar4 + 0x50) != 0) {
      uVar2 = *(undefined4 *)(iVar4 + 0x4c);
      *(undefined4 *)(iVar4 + 0x4c) = 2;
      if (*(int *)(iVar4 + 0x50) != 0) {
        do {
          pthread_cond_wait((pthread_cond_t *)(iVar4 + 0x1c),(pthread_mutex_t *)&DAT_0451bd4c);
        } while (*(int *)(iVar4 + 0x50) != 0);
      }
      *(undefined4 *)(iVar4 + 0x4c) = uVar2;
    }
    goto LAB_0415c703;
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0451bd4c);
  puVar3 = DAT_0451bd3c;
  puVar5 = &DAT_0451bd38;
  if (DAT_0451bd3c == (undefined *)0x0) {
LAB_0415c6d2:
    FUN_0415af30();
    puVar6 = local_24;
  }
  else {
    do {
      while (puVar6 = puVar3, *(uint *)(puVar6 + 0x10) < local_18) {
        puVar1 = (undefined4 *)(puVar6 + 0xc);
        puVar3 = (undefined *)*puVar1;
        puVar6 = puVar5;
        if ((undefined *)*puVar1 == (undefined *)0x0) goto LAB_0415c6c5;
      }
      puVar3 = *(undefined **)(puVar6 + 8);
      puVar5 = puVar6;
    } while (*(undefined **)(puVar6 + 8) != (undefined *)0x0);
LAB_0415c6c5:
    if ((puVar6 == &DAT_0451bd38) || (local_18 < *(uint *)(puVar6 + 0x10))) goto LAB_0415c6d2;
  }
  iVar4 = *(int *)(puVar6 + 0x14);
  if (iVar4 == 0) {
    FUN_0400a810("threadInfo",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/winthreads.cpp"
                 ,0x5e2,"DWORD eON_SuspendThread(HANDLE)");
  }
  *(int *)(iVar4 + 0x50) = *(int *)(iVar4 + 0x50) + 1;
LAB_0415c703:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0451bd4c);
  return 0;
}

// --- thread_EraseThreadInfo @0x0415d820 ---
/* source: winthreads */

void thread_EraseThreadInfo(uint param_1)

{
  _Rb_tree_node_base *p_Var1;
  void *__ptr;
  uint uVar2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  void *pvVar5;
  _Rb_tree_node_base *p_Var6;
  _Rb_tree_node_base *p_Var7;
  _Rb_tree_node_base *local_30;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0451bd4c);
  p_Var4 = DAT_0451bd3c;
  p_Var6 = (_Rb_tree_node_base *)&DAT_0451bd38;
  if (DAT_0451bd3c != (_Rb_tree_node_base *)0x0) {
    do {
      while (p_Var7 = p_Var4, param_1 <= *(uint *)(p_Var7 + 0x10)) {
        p_Var4 = *(_Rb_tree_node_base **)(p_Var7 + 8);
        p_Var6 = p_Var7;
        if (*(_Rb_tree_node_base **)(p_Var7 + 8) == (_Rb_tree_node_base *)0x0) goto LAB_0415d865;
      }
      p_Var1 = p_Var7 + 0xc;
      p_Var4 = *(_Rb_tree_node_base **)p_Var1;
      p_Var7 = p_Var6;
    } while (*(_Rb_tree_node_base **)p_Var1 != (_Rb_tree_node_base *)0x0);
LAB_0415d865:
    if ((p_Var7 != (_Rb_tree_node_base *)&DAT_0451bd38) && (*(uint *)(p_Var7 + 0x10) <= param_1))
    goto LAB_0415d87a;
  }
  eON_Int_ThreadMap_InsertNode();
  p_Var7 = local_30;
LAB_0415d87a:
  __ptr = *(void **)(p_Var7 + 0x14);
  if (*(int *)((int)__ptr + 0x4c) != 3) {
    FUN_0400a810("threadInfo->ThreadStatus == eON_ThreadInfo::THREAD_FINISHED",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/winthreads.cpp"
                 ,0x39a,"void thread_EraseThreadInfo(DWORD, HANDLE)");
  }
  p_Var6 = (_Rb_tree_node_base *)&DAT_0451bd38;
  p_Var4 = DAT_0451bd3c;
joined_r0x0415d8bb:
  p_Var7 = p_Var6;
  if (p_Var4 != (_Rb_tree_node_base *)0x0) {
    while( true ) {
      p_Var6 = p_Var4;
      if (*(uint *)(p_Var6 + 0x10) < param_1) goto LAB_0415d8c0;
      if (*(uint *)(p_Var6 + 0x10) <= param_1) break;
      p_Var4 = *(_Rb_tree_node_base **)(p_Var6 + 8);
      p_Var7 = p_Var6;
      if (*(_Rb_tree_node_base **)(p_Var6 + 8) == (_Rb_tree_node_base *)0x0) goto LAB_0415d8dd;
    }
    p_Var4 = *(_Rb_tree_node_base **)(p_Var6 + 8);
    p_Var1 = *(_Rb_tree_node_base **)(p_Var6 + 0xc);
    while (p_Var3 = p_Var1, p_Var3 != (_Rb_tree_node_base *)0x0) {
      if (param_1 < *(uint *)(p_Var3 + 0x10)) {
        p_Var1 = *(_Rb_tree_node_base **)(p_Var3 + 8);
        p_Var7 = p_Var3;
      }
      else {
        p_Var1 = *(_Rb_tree_node_base **)(p_Var3 + 0xc);
      }
    }
    while (p_Var4 != (_Rb_tree_node_base *)0x0) {
      uVar2 = *(uint *)(p_Var4 + 0x10);
      p_Var1 = p_Var6;
      while (p_Var6 = p_Var4, param_1 <= uVar2) {
        p_Var4 = *(_Rb_tree_node_base **)(p_Var6 + 8);
        if (p_Var4 == (_Rb_tree_node_base *)0x0) goto LAB_0415d8dd;
        uVar2 = *(uint *)(p_Var4 + 0x10);
        p_Var1 = p_Var6;
      }
      p_Var4 = *(_Rb_tree_node_base **)(p_Var6 + 0xc);
      p_Var6 = p_Var1;
    }
  }
LAB_0415d8dd:
  if ((DAT_0451bd40 == p_Var6) && (p_Var7 == (_Rb_tree_node_base *)&DAT_0451bd38)) {
    eON_Int_ThreadMap_DestroySubtree(&DAT_0451bd34,DAT_0451bd3c);
    DAT_0451bd40 = (_Rb_tree_node_base *)&DAT_0451bd38;
    DAT_0451bd3c = (_Rb_tree_node_base *)0x0;
    DAT_0451bd44 = &DAT_0451bd38;
    DAT_0451bd48 = 0;
  }
  else {
    while (p_Var7 != p_Var6) {
      p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var6);
      pvVar5 = (void *)std::_Rb_tree_rebalance_for_erase(p_Var6,(_Rb_tree_node_base *)&DAT_0451bd38)
      ;
      operator_delete(pvVar5);
      DAT_0451bd48 = DAT_0451bd48 + -1;
      p_Var6 = p_Var4;
    }
  }
  FUN_04145b80(*(undefined4 *)((int)__ptr + 0x80));
  eON_Int_ThreadMsgLists_Free(*(undefined4 *)((int)__ptr + 0x84));
  free(__ptr);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0451bd4c);
  return;
LAB_0415d8c0:
  p_Var4 = *(_Rb_tree_node_base **)(p_Var6 + 0xc);
  p_Var6 = p_Var7;
  goto joined_r0x0415d8bb;
}

// --- thread_MakeSureThreadHasTEB @0x0415bd50 ---
/* source: winthreads */

void thread_MakeSureThreadHasTEB(void)

{
  undefined4 *puVar1;
  pthread_t pVar2;
  uint uVar3;
  pthread_t *ppVar4;
  undefined *puVar5;
  pthread_t pVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *__s;
  long lVar9;
  int iVar10;
  undefined *puVar11;
  undefined *puVar12;
  int in_FS_OFFSET;
  undefined *local_50;
  char local_44 [32];
  uint local_24;
  undefined4 local_20;
  
  pVar6 = pthread_self();
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0451bd4c);
  iVar10 = (int)DAT_0451bd2c - (int)DAT_0451bd28 >> 2;
  if (iVar10 != 0) {
    iVar7 = 0;
    pVar2 = *DAT_0451bd28;
    while( true ) {
      if (pVar6 == pVar2) {
        *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET + 0x18) + 0x130) + 0x4c) = 0;
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_0451bd4c);
        return;
      }
      iVar7 = iVar7 + 1;
      if (iVar7 == iVar10) break;
      pVar2 = DAT_0451bd28[iVar7];
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0451bd4c);
  uVar3 = DAT_04410a14;
  while (DAT_0441163c != '\0') {
    DAT_04410a14 = uVar3;
    usleep(1000);
    uVar3 = DAT_04410a14;
  }
  DAT_04410a14 = uVar3 + 1;
  uVar8 = synchronisationPrimitives_0414a7f0(2,uVar3);
  Synchronisation_AddRefHandle(uVar8);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0451bd4c);
  __s = malloc(0x94);
  if (__s == (undefined4 *)0x0) {
    FUN_0400a810("threadInfo",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/winthreads.cpp"
                 ,0x4a1,"void thread_MakeSureThreadHasTEB()");
  }
  bzero(__s,0x94);
  ppVar4 = DAT_0451bd2c;
  *__s = 0xdeadbab0;
  __s[2] = uVar3;
  __s[6] = pVar6;
  if (ppVar4 == DAT_0451bd30) {
    eON_Int_ThreadPthreadVec_Insert();
  }
  else {
    if (ppVar4 != (pthread_t *)0x0) {
      *ppVar4 = pVar6;
    }
    DAT_0451bd2c = ppVar4 + 1;
  }
  lVar9 = syscall(0xe0,0);
  __s[4] = 0;
  __s[0x22] = lVar9;
  __s[0x16] = 0xdeadbabe;
  __s[0x13] = 0;
  __s[0x14] = 0;
  __s[3] = uVar8;
  pthread_cond_init((pthread_cond_t *)(__s + 7),(pthread_condattr_t *)0x0);
  thread_PrepareTEB(__s[2],__s);
  InitializeImplicitTLSForThread();
  eON_LocalFileTimeFromTimeval(__s + 0x17);
  puVar5 = DAT_0451bd3c;
  puVar11 = &DAT_0451bd38;
  if (DAT_0451bd3c != (undefined *)0x0) {
    do {
      while (puVar12 = puVar5, *(uint *)(puVar12 + 0x10) < uVar3) {
        puVar1 = (undefined4 *)(puVar12 + 0xc);
        puVar5 = (undefined *)*puVar1;
        puVar12 = puVar11;
        if ((undefined *)*puVar1 == (undefined *)0x0) goto LAB_0415bef5;
      }
      puVar5 = *(undefined **)(puVar12 + 8);
      puVar11 = puVar12;
    } while (*(undefined **)(puVar12 + 8) != (undefined *)0x0);
LAB_0415bef5:
    if ((puVar12 != &DAT_0451bd38) && (*(uint *)(puVar12 + 0x10) <= uVar3)) goto LAB_0415bf1a;
  }
  local_20 = 0;
  local_24 = uVar3;
  eON_Int_ThreadMap_InsertNode();
  puVar12 = local_50;
LAB_0415bf1a:
  *(undefined4 **)(puVar12 + 0x14) = __s;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0451bd4c);
  uVar8 = synchronisationPrimitives_0414aaf0(0,0,0);
  __s[5] = uVar8;
  snprintf(local_44,0x20,"G.%u",__s[2]);
  eON_SetThreadName(local_44);
  FUN_04150330(2);
  FUN_0402cd10(5,
               "Prepared Windows Thread Environment Block for outside thread that needs to call back on game code"
              );
  return;
}

// --- thread_SuspendPoint @0x0415b240 ---
/* source: winthreads */

void thread_SuspendPoint(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    FUN_0400a810("threadInfo",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/kernel32/winthreads.cpp"
                 ,0x1e9,"void thread_SuspendPoint(eON_ThreadInfo*)");
  }
  if ((*(int *)(param_1 + 0x50) != 0) && (*(int *)(param_1 + 0x54) != 0)) {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0451bd4c);
    if (*(int *)(param_1 + 0x50) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x4c);
      *(undefined4 *)(param_1 + 0x4c) = 2;
      if (*(int *)(param_1 + 0x50) != 0) {
        do {
          pthread_cond_wait((pthread_cond_t *)(param_1 + 0x1c),(pthread_mutex_t *)&DAT_0451bd4c);
        } while (*(int *)(param_1 + 0x50) != 0);
      }
      *(undefined4 *)(param_1 + 0x4c) = uVar1;
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0451bd4c);
    return;
  }
  return;
}

// --- attached helper FUN_00182110 @0x04182110 (call-graph exclusive to this TU) ---
bool FUN_04182110(int param_1,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int in_FS_OFFSET;
  
  bVar2 = true;
  if (param_1 != 0x271a) {
    cVar1 = FUN_0404ecd0(param_1);
    if (cVar1 != '\0') {
      if (param_1 == 0xffff) {
        FUN_0402cd10(0xf,"HWND_BROADCAST not supported in SendMessageW(). Add it.");
      }
      thread_SuspendPoint(*(undefined4 *)(*(int *)(in_FS_OFFSET + 0x18) + 0x130));
      cVar1 = FUN_0404ecd0(param_1);
      if (cVar1 != '\0') {
        iVar3 = eON_SendMessageW(param_2);
        return 0 < iVar3;
      }
    }
    eON_SetLastError(0x578);
    bVar2 = false;
  }
  return bVar2;
}

// --- attached helper FUN_00183140 @0x04183140 (call-graph exclusive to this TU) ---
undefined4 FUN_04183140(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int in_FS_OFFSET;
  
  if (param_1 == 0x271a) {
    FUN_0402cd10(10,"Desktop HWND supplied in SendMessageW()");
    uVar2 = 0;
  }
  else {
    if (param_1 == 0xffff) {
      FUN_0402cd10(0xf,"HWND_BROADCAST not supported in SendMessageW(). Add it.");
    }
    thread_SuspendPoint(*(undefined4 *)(*(int *)(in_FS_OFFSET + 0x18) + 0x130));
    cVar1 = FUN_0404ecd0(param_1);
    if (cVar1 == '\0') {
      eON_SetLastError(0x578);
      uVar2 = 0;
    }
    else {
      uVar2 = eON_SendMessageW(param_4);
    }
  }
  return uVar2;
}

// --- attached helper FUN_00186c60 @0x04186c60 (call-graph exclusive to this TU) ---
int FUN_04186c60(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                int param_6)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  char cVar5;
  int **ppiVar6;
  int **ppiVar7;
  int iVar8;
  int in_FS_OFFSET;
  undefined4 uStack_54;
  int *local_50;
  char *local_4c;
  undefined4 uStack_44;
  int *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int *local_28;
  undefined4 local_24;
  undefined4 *local_18;
  
  uVar4 = param_4;
  piVar3 = param_1;
  local_18 = &param_1;
  ppiVar7 = &local_40;
  iVar8 = 0;
  local_24 = param_2;
  local_28 = param_3;
  local_2c = param_6;
  if (param_1 == (int *)0x271a) {
    return 0;
  }
  local_30 = param_5;
  local_40 = param_1;
  uStack_44 = 0x4186cab;
  cVar5 = FUN_0404ecd0();
  if (cVar5 != '\0') {
    local_38 = local_30;
    local_34 = 0x14;
    local_3c = uVar4;
    local_40 = local_28;
    uStack_44 = 0x4186cd4;
    iVar8 = eON_SetWindowPos();
    ppiVar6 = &local_50;
    ppiVar7 = &local_50;
    if (iVar8 == 0) {
      return 0;
    }
    if (local_2c == 0) {
      return iVar8;
    }
    local_50 = piVar3;
    uStack_54 = 0x4186cec;
    cVar5 = FUN_0404ecd0();
    if (cVar5 != '\0') {
      if (piVar3[0x16] != 0) {
        if (piVar3 == (int *)0xffff) {
          local_4c = "HWND_BROADCAST not supported in SendMessageA(). Add it.";
          local_50 = (int *)0xf;
          uStack_54 = 0x4186da8;
          FUN_0402cd10();
        }
        local_50 = *(int **)(*(int *)(in_FS_OFFSET + 0x18) + 0x130);
        uStack_54 = 0x4186d54;
        thread_SuspendPoint();
        local_50 = piVar3;
        uStack_54 = 0x4186d5c;
        cVar5 = FUN_0404ecd0();
        if (cVar5 == '\0') {
          local_50 = (int *)0x578;
          uStack_54 = 0x4186d8c;
          eON_SetLastError();
          ppiVar6 = (int **)&uStack_54;
        }
        else {
          local_50 = (int *)0x0;
          uStack_54 = 0x4186d75;
          eON_SendMessageA();
          ppiVar6 = (int **)&uStack_54;
        }
      }
      iVar1 = *piVar3;
      *ppiVar6 = piVar3;
      pcVar2 = *(code **)(iVar1 + 0x78);
      ppiVar6[-1] = (int *)0x4186cff;
      (*pcVar2)();
      return iVar8;
    }
  }
  *ppiVar7 = (int *)0x578;
  ppiVar7[-1] = (int *)0x4186d2c;
  eON_SetLastError();
  return iVar8;
}

