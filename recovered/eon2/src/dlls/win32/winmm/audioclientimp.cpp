// Recovered source: eon2/src/dlls/win32/winmm/audioclientimp.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- AudioClientImp::AudioClientImp @0x04189f80 ---
/* source: audioclientimp */

void AudioClientImp__AudioClientImp(undefined4 *param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  pthread_mutexattr_t local_20 [4];
  
  IUnknownImp__IUnknownImp(param_1,param_1 + 4);
  *param_1 = &PTR_AudioClientImp___AudioClientImp_0434c028;
  param_1[4] = &PTR_FUN_04410ae0;
  param_1[5] = param_1;
  param_1[6] = param_2;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = param_3;
  *(undefined1 *)((int)param_1 + 0x21) = 0;
  *(undefined1 *)((int)param_1 + 0x22) = 0;
  *(undefined1 *)((int)param_1 + 0x23) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[1] = "AudioClientImp";
  if (param_2 == 0) {
    FUN_0400a810("deviceId",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/winmm/audioclientimp.cpp"
                 ,0xa0,"AudioClientImp::AudioClientImp(eON_AudioDevice, bool)");
  }
  pthread_mutexattr_init(local_20);
  pthread_mutexattr_setprioceiling(local_20,0);
  pthread_mutexattr_setprotocol(local_20,0);
  pthread_mutexattr_setpshared(local_20,1);
  pthread_mutexattr_settype(local_20,1);
  iVar1 = pthread_mutex_init((pthread_mutex_t *)(param_1 + 0x1d),local_20);
  if (iVar1 != 0) {
                    /* try { // try from 0418a07f to 0418a0bb has its CatchHandler @ 0418a0c1 */
    FUN_0400a810("pthread_mutex_init( &mClientMutex, &attr ) == 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/winmm/audioclientimp.cpp"
                 ,0xad,"AudioClientImp::AudioClientImp(eON_AudioDevice, bool)");
  }
  pthread_mutexattr_destroy(local_20);
  return;
}

// --- AudioClientImp::Initialize @0x04189630 ---
/* source: audioclientimp */

undefined4
audioclientimp_04189630
          (int param_1,undefined4 param_2,int param_3,undefined *param_4,int param_5,
          undefined *param_6,uint param_7,short *param_8)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  undefined *local_24;
  uint local_20;
  
  local_24 = param_6;
  local_20 = param_7;
  if (param_8 == (short *)0x0) {
    uVar3 = 0x80004003;
  }
  else {
    uVar3 = 0x88890002;
    if ((*(char *)(param_1 + 0x21) == '\0') && (uVar3 = 0, param_3 == 0)) {
      if (param_7 == 0 && param_6 == (undefined *)0x0) {
        local_24 = &DAT_000186a0;
        local_20 = 0;
      }
      if ((param_5 < 1) && ((param_5 < 0 || (param_4 <= &DAT_01312d00)))) {
        uVar3 = 0;
        if (*param_8 == -2) {
          iVar4 = memcmp(param_8 + 0xc,&DAT_042db6d8,0x10);
          uVar3 = 0x88890008;
          if (iVar4 == 0) {
            iVar4 = (uint)(ushort)param_8[1] * (uint)(ushort)param_8[7];
            if (iVar4 < 0) {
              iVar4 = iVar4 + 7;
            }
            uVar1 = *(uint *)(param_8 + 2);
            *(int *)(param_1 + 0x54) = iVar4 >> 3;
            lVar2 = (ulonglong)uVar1 * ZEXT48(param_4);
            uVar3 = __divdi3((int)lVar2,(int)((ulonglong)lVar2 >> 0x20) + param_5 * uVar1,
                             &DAT_00989680,0);
            *(undefined4 *)(param_1 + 0x50) = uVar3;
            *(uint *)(param_1 + 0x5c) = local_20;
            *(undefined **)(param_1 + 0x58) = local_24;
            if ((local_20 & 0xfffffff8) != 0) {
              FUN_0400a810("( hnsPeriodicity & ~ 0x7FFFFFFFF ) == 0",
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/winmm/audioclientimp.cpp"
                           ,0x13b,
                           "virtual HRESULT AudioClientImp::Initialize(AUDCLNT_SHAREMODE, DWORD, REFERENCE_TIME, REFERENCE_TIME, const WAVEFORMATEX*, LPCGUID)"
                          );
            }
            pcVar5 = FUN_041892a0;
            if (*(char *)(param_1 + 0x20) == '\0') {
              pcVar5 = AudioClientImp_RequestPackets_Thunk;
            }
            iVar4 = AudioUnit_Create(*(undefined4 *)(param_1 + 0x18),*(char *)(param_1 + 0x20),
                                     pcVar5,*(undefined4 *)(param_1 + 0xc),param_8,local_24);
            *(int *)(param_1 + 0x1c) = iVar4;
            if (iVar4 != 0) {
              *(undefined1 *)(param_1 + 0x21) = 1;
              return 0;
            }
            FUN_0402cd10(0xf,"Failure setting up Audio Client audio device unit!");
            uVar3 = 0x88890004;
          }
        }
      }
      else {
        uVar3 = 0x88890016;
      }
    }
  }
  return uVar3;
}

// --- AudioClientImp::RequestPackets @0x04189d60 ---
/* source: audioclientimp */

int AudioClientImp__RequestPackets(int param_1,uint param_2,int param_3,undefined1 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  void *__s;
  uint uVar8;
  int local_24;
  
  if (*(int *)(param_1 + 0x54) == 0) {
    FUN_0400a810("mFrameSize",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/winmm/audioclientimp.cpp"
                 ,0x47,"uint32_t AudioClientImp::RequestPackets(uint32_t, void*, bool*)");
  }
  *param_4 = 1;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x74));
  uVar4 = 0;
  uVar8 = uVar4;
  if ((param_2 != 0) && (puVar5 = *(undefined4 **)(param_1 + 0x68), puVar5 != (undefined4 *)0x0)) {
    local_24 = *(int *)(param_1 + 0x70);
    iVar3 = *(int *)(param_1 + 0x54);
    while( true ) {
      puVar6 = (undefined4 *)0x0;
      do {
        puVar7 = puVar6;
        puVar6 = puVar5;
        puVar5 = (undefined4 *)*puVar6;
      } while ((undefined4 *)*puVar6 != (undefined4 *)0x0);
      __s = (void *)(uVar4 * iVar3 + param_3);
      uVar8 = param_2 - uVar4;
      uVar1 = puVar6[1] - local_24;
      if (uVar8 < uVar1) break;
      if (*(char *)(puVar6 + 3) == '\0') {
        memcpy(__s,(void *)(iVar3 * local_24 + puVar6[2]),uVar1 * iVar3);
        *param_4 = 0;
        *(undefined4 *)(param_1 + 0x70) = 0;
        if (puVar7 == (undefined4 *)0x0) goto LAB_04189e92;
LAB_04189e2a:
        uVar2 = *(undefined4 *)(param_1 + 0x6c);
        *puVar7 = 0;
        *puVar6 = uVar2;
        *(undefined4 **)(param_1 + 0x6c) = puVar6;
      }
      else {
        bzero(__s,uVar1 * iVar3);
        *(undefined4 *)(param_1 + 0x70) = 0;
        if (puVar7 != (undefined4 *)0x0) goto LAB_04189e2a;
LAB_04189e92:
        *(undefined4 *)(param_1 + 0x68) = 0;
        *puVar6 = *(undefined4 *)(param_1 + 0x6c);
        *(undefined4 **)(param_1 + 0x6c) = puVar6;
      }
      uVar8 = uVar4 + uVar1;
      if (param_2 <= uVar4 + uVar1) goto LAB_04189ea6;
      uVar4 = uVar4 + uVar1;
      puVar5 = *(undefined4 **)(param_1 + 0x68);
      uVar8 = uVar4;
      if (puVar5 == (undefined4 *)0x0) goto LAB_04189ea6;
      iVar3 = *(int *)(param_1 + 0x54);
      local_24 = 0;
    }
    if (*(char *)(puVar6 + 3) == '\0') {
      memcpy(__s,(void *)(iVar3 * local_24 + puVar6[2]),uVar8 * iVar3);
      *param_4 = 0;
    }
    else {
      bzero(__s,uVar8 * iVar3);
    }
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + uVar8;
    uVar8 = param_2;
  }
LAB_04189ea6:
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x74));
  return *(int *)(param_1 + 0x54) * uVar8;
}

