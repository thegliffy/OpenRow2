// Recovered source: eon2/src/dlls/win32/winsock/asyncSelectSystem.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- AsyncSelect_AddEvent @0x041909b0 ---
/* source: asyncSelectSystem */

void AsyncSelect_AddEvent(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (DAT_0451c180 == '\0') {
    pthread_mutex_init((pthread_mutex_t *)&DAT_0451c184,(pthread_mutexattr_t *)0x0);
    DAT_0451c180 = '\x01';
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0451c184);
  iVar3 = DAT_0451c19c;
  iVar5 = DAT_0451c19c;
  if (DAT_0451c19c < 1) {
LAB_04190a1c:
    DAT_0451c19c = iVar3 + 1;
    bVar6 = DAT_0451c19c == 0;
    (&DAT_0451c1a0)[iVar5 * 5] = param_1;
    (&DAT_0451c1a4)[iVar5 * 5] = param_2;
    (&DAT_0451c1a8)[iVar5 * 5] = 0;
    (&DAT_0451c1b0)[iVar5 * 5] = param_4;
    (&DAT_0451c1ac)[iVar5 * 5] = param_3;
    if (bVar6) goto LAB_04190a5a;
  }
  else {
    iVar4 = 0;
    puVar2 = &DAT_0451c1b4;
    uVar1 = DAT_0451c1a0;
    while (uVar1 < param_1) {
      iVar4 = iVar4 + 1;
      if (iVar4 == DAT_0451c19c) goto LAB_04190a0b;
      uVar1 = *puVar2;
      puVar2 = puVar2 + 5;
    }
    iVar5 = iVar4;
    if (param_1 != uVar1) {
LAB_04190a0b:
      if (0xf < DAT_0451c19c) {
        FUN_0400a810("mNumObservedSockets < MAX_OBSERVED_SOCKETS",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/winsock/asyncSelectSystem.cpp"
                     ,0xaf,"void AsyncSelect_AddEvent(SOCKET, LONG, HWND, UINT)");
        iVar3 = DAT_0451c19c;
      }
      if (iVar5 < iVar3) {
        DAT_0451c19c = iVar3;
        memmove(&DAT_0451c1a0 + iVar5 * 5 + 5,&DAT_0451c1a0 + iVar5 * 5,(iVar3 - iVar5) * 0x14);
      }
      goto LAB_04190a1c;
    }
    (&DAT_0451c1a0)[iVar4 * 5] = param_1;
    (&DAT_0451c1a8)[iVar4 * 5] = 0;
    (&DAT_0451c1a4)[iVar4 * 5] = param_2;
    (&DAT_0451c1b0)[iVar4 * 5] = param_4;
    (&DAT_0451c1ac)[iVar4 * 5] = param_3;
  }
  if (DAT_0451c2e0 == '\0') {
    iVar3 = eON_CreateThread(0,0x10000,AsyncSelect_ThreadRoutine,0,0,0);
    if (iVar3 == 0) {
      FUN_0400a810("eON_CreateThread( __null, 65536, AsyncSelect_ThreadRoutine, __null, 0, 0 ) != __null"
                   ,
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/winsock/asyncSelectSystem.cpp"
                   ,0xc1,"void AsyncSelect_AddEvent(SOCKET, LONG, HWND, UINT)");
    }
    DAT_0451c2e0 = '\x01';
  }
LAB_04190a5a:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0451c184);
  return;
}

// --- AsyncSelect_ThreadRoutine @0x04190660 ---
/* source: asyncSelectSystem */

undefined4 AsyncSelect_ThreadRoutine(void)

{
  undefined4 uVar1;
  ushort uVar2;
  uint *puVar3;
  __useconds_t *p_Var4;
  int iVar5;
  __useconds_t _Var6;
  uint uVar7;
  __useconds_t *p_Var8;
  int iVar9;
  __useconds_t _Var10;
  uint local_a0;
  undefined4 local_9c;
  undefined1 *local_18;
  
  local_18 = &stack0x00000004;
  p_Var8 = (__useconds_t *)&stack0xffffff30;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0451c184);
  if (DAT_0451c2e0 == '\0') {
    FUN_0400a810();
  }
  eON_SetThreadName();
  iVar5 = DAT_0451c19c;
joined_r0x041906ab:
  do {
    if (iVar5 == 0) {
      *p_Var8 = (__useconds_t)&DAT_0451c184;
      DAT_0451c2e0 = 0;
      p_Var8[-1] = 0x41908ca;
      pthread_mutex_unlock((pthread_mutex_t *)*p_Var8);
      return 0;
    }
    if (iVar5 < 0) {
      *p_Var8 = (__useconds_t)&DAT_0451c184;
      p_Var8[-1] = 0x419088c;
      pthread_mutex_unlock((pthread_mutex_t *)*p_Var8);
    }
    else {
      iVar9 = 0;
      _Var6 = 0;
      do {
        while( true ) {
          uVar1 = (&DAT_0451c1a0)[iVar9 * 5];
          *(undefined2 *)(&local_9c + _Var6 * 2) = 0;
          *(undefined2 *)((int)&local_9c + _Var6 * 8 + 2) = 0;
          (&local_9c)[_Var6 * 2 + -1] = uVar1;
          uVar7 = ~(&DAT_0451c1a8)[iVar9 * 5] & (&DAT_0451c1a4)[iVar9 * 5];
          uVar2 = 0;
          if ((uVar7 & 0xffffffdc) != 0) {
            p_Var8[1] = (__useconds_t)
                        "WSAAsyncSelect() - game wants to observe events we don\'t have implemented! Handle them."
            ;
            *p_Var8 = 0xf;
            p_Var8[-1] = 0x419084a;
            FUN_0402cd10();
            uVar2 = *(ushort *)(&local_9c + _Var6 * 2);
            iVar5 = DAT_0451c19c;
          }
          if ((uVar7 & 1) != 0) {
            uVar2 = uVar2 | 1;
            *(ushort *)(&local_9c + _Var6 * 2) = uVar2;
          }
          if ((uVar7 & 2) == 0) break;
          *(ushort *)(&local_9c + _Var6 * 2) = uVar2 | 4;
LAB_041906c7:
          iVar9 = iVar9 + 1;
          _Var6 = _Var6 + 1;
          if (iVar5 <= iVar9) goto LAB_0419072a;
        }
        if (uVar2 != 0) goto LAB_041906c7;
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar5);
LAB_0419072a:
      *p_Var8 = (__useconds_t)&DAT_0451c184;
      p_Var8[-1] = 0x4190738;
      pthread_mutex_unlock((pthread_mutex_t *)*p_Var8);
      if (_Var6 != 0) {
        p_Var8[2] = 1;
        p_Var8[1] = _Var6;
        *p_Var8 = (__useconds_t)&local_a0;
        p_Var8[-1] = 0x419075a;
        iVar9 = poll((pollfd *)*p_Var8,p_Var8[1],p_Var8[2]);
        *p_Var8 = (__useconds_t)&DAT_0451c184;
        p_Var8[-1] = 0x4190768;
        pthread_mutex_lock((pthread_mutex_t *)*p_Var8);
        iVar5 = DAT_0451c19c;
        if (iVar9 != 0) {
          if (iVar9 == -1) {
            p_Var8[-1] = 0x419095b;
            p_Var4 = (__useconds_t *)__errno_location();
            _Var6 = *p_Var4;
            p_Var8[1] = (__useconds_t)"Socket error from poll: %d";
            *p_Var8 = 0xf;
            p_Var8[2] = _Var6;
            p_Var8[-1] = 0x4190975;
            FUN_0402cd10();
            iVar5 = DAT_0451c19c;
          }
          else if (0 < (int)_Var6) {
            iVar9 = 0;
            _Var10 = 0;
            do {
              uVar2 = *(ushort *)((int)&local_9c + _Var10 * 8 + 2);
              if (uVar2 != 0) {
                uVar7 = (&local_9c)[_Var10 * 2 + -1];
                if ((iVar9 < iVar5) && ((uint)(&DAT_0451c1a0)[iVar9 * 5] < uVar7)) {
                  iVar9 = iVar9 + 1;
                  puVar3 = &DAT_0451c1a0 + iVar9 * 5;
                  while ((iVar9 < iVar5 && (*puVar3 < uVar7))) {
                    iVar9 = iVar9 + 1;
                    puVar3 = puVar3 + 5;
                  }
                }
                if (iVar9 == iVar5) break;
                if ((&DAT_0451c1a0)[iVar9 * 5] == uVar7) {
                  if ((uVar2 & 1) != 0) {
                    uVar1 = (&DAT_0451c1b0)[iVar9 * 5];
                    p_Var8[3] = 1;
                    p_Var8[2] = uVar7;
                    p_Var8[1] = uVar1;
                    *p_Var8 = (&DAT_0451c1ac)[iVar9 * 5];
                    p_Var8[-1] = 0x419093a;
                    FUN_041724b0();
                    p_Var8 = p_Var8 + -4;
                    (&DAT_0451c1a8)[iVar9 * 5] = (&DAT_0451c1a8)[iVar9 * 5] | 1;
                    uVar2 = *(ushort *)((int)&local_9c + _Var10 * 8 + 2);
                  }
                  iVar5 = DAT_0451c19c;
                  if ((uVar2 & 4) != 0) {
                    p_Var8[2] = uVar7;
                    uVar1 = (&DAT_0451c1b0)[iVar9 * 5];
                    p_Var8[3] = 2;
                    p_Var8[1] = uVar1;
                    *p_Var8 = (&DAT_0451c1ac)[iVar9 * 5];
                    p_Var8[-1] = 0x4190906;
                    FUN_041724b0();
                    (&DAT_0451c1a8)[iVar9 * 5] = (&DAT_0451c1a8)[iVar9 * 5] | 2;
                    p_Var8 = p_Var8 + -4;
                    iVar5 = DAT_0451c19c;
                  }
                }
              }
              _Var10 = _Var10 + 1;
            } while (_Var10 != _Var6);
          }
        }
        goto joined_r0x041906ab;
      }
    }
    *p_Var8 = 1000;
    p_Var8[-1] = 0x419089c;
    usleep(*p_Var8);
    *p_Var8 = (__useconds_t)&DAT_0451c184;
    p_Var8[-1] = 0x41908a8;
    pthread_mutex_lock((pthread_mutex_t *)*p_Var8);
    iVar5 = DAT_0451c19c;
  } while( true );
}

