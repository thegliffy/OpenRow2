// Recovered source: eon2/src/dlls/directx/xaudio2_full/xaudio2voiceimpl.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- XAudio2VoiceImp::GetAudioGraphMutex @0x0410cf50 ---
/* source: xaudio2voiceimpl */

int xaudio2voiceimpl_0410cf50(int param_1)

{
  if (*(int *)(param_1 + 0xdc) != 0) {
    return *(int *)(param_1 + 0xdc) + 100;
  }
  FUN_0400a810("mEngine",
               "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2voiceimpl.cpp"
               ,0x1fa,"std::mutex& XAudio2VoiceImp::GetAudioGraphMutex()");
  return *(int *)(param_1 + 0xdc) + 100;
}

// --- XAudio2VoiceImp::GetChannelVolumes @0x0410b8e0 ---
/* source: xaudio2voiceimpl */

void XAudio2VoiceImp__GetChannelVolumes(int param_1,int param_2,void *param_3)

{
  int iVar1;
  void *__src;
  
  if (param_3 != (void *)0x0) {
    iVar1 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xac));
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar1);
    }
    __src = *(void **)(param_1 + 0x6c);
    if (param_2 != *(int *)(param_1 + 0x70) - (int)__src >> 2) {
                    /* try { // try from 0410b946 to 0410b94a has its CatchHandler @ 0410b988 */
      FUN_0400a810("Channels == mNextParameters.channelVolumesAfterEffects.size()",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2voiceimpl.cpp"
                   ,0x169,"virtual void XAudio2VoiceImp::GetChannelVolumes(UINT32, float*)");
      __src = *(void **)(param_1 + 0x6c);
    }
    memcpy(param_3,__src,param_2 << 2);
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xac));
  }
  return;
}

// --- XAudio2VoiceImp::GetEffectState @0x0410b0e0 ---
/* source: xaudio2voiceimpl */

void XAudio2VoiceImp__GetEffectState(int param_1,uint param_2,uint *param_3)

{
  if ((uint)((*(int *)(param_1 + 0x11c) - *(int *)(param_1 + 0x114) >> 2) * 0x20 +
            (*(int *)(param_1 + 0x120) - *(int *)(param_1 + 0x118))) <= param_2) {
    FUN_0400a810("EffectIndex < mEnabledEffects.size()",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2voiceimpl.cpp"
                 ,0x91,"virtual void XAudio2VoiceImp::GetEffectState(UINT32, WINBOOL*)");
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = (uint)((*(uint *)(*(int *)(param_1 + 0x114) + (param_2 >> 5) * 4) &
                      1 << ((byte)param_2 & 0x1f)) != 0);
  }
  return;
}

// --- XAudio2VoiceImp::GetOutputMatrix @0x0410e1e0 ---
/* source: xaudio2voiceimpl */

void XAudio2VoiceImp__GetOutputMatrix(int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  int aiStackY_78 [2];
  int local_50 [4];
  uint local_40;
  void *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  pthread_mutex_t *local_20;
  
  piVar5 = (int *)&stack0xffffff94;
  if (param_5 == 0) {
    return;
  }
  local_20 = (pthread_mutex_t *)(param_1 + 0xac);
  iVar1 = pthread_mutex_lock(local_20);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar1);
  }
  iVar1 = param_1 + 0x7c;
  iVar2 = iVar1;
  iVar4 = *(int *)(param_1 + 0x80);
  if (*(int *)(param_1 + 0x80) == 0) {
LAB_0410e350:
    local_40 = param_2;
    local_3c = (void *)0x0;
    local_38 = 0;
    local_34 = 0;
                    /* try { // try from 0410e380 to 0410e384 has its CatchHandler @ 0410e3d6 */
    FUN_04110440();
    iVar3 = local_50[0];
    piVar5 = (int *)&stack0xffffff90;
    if (local_3c != (void *)0x0) {
      operator_delete(local_3c);
      piVar5 = (int *)&stack0xffffff90;
    }
  }
  else {
    do {
      while (iVar3 = iVar4, param_2 <= *(uint *)(iVar3 + 0x10)) {
        iVar2 = iVar3;
        iVar4 = *(int *)(iVar3 + 8);
        if (*(int *)(iVar3 + 8) == 0) goto LAB_0410e245;
      }
      piVar6 = (int *)(iVar3 + 0xc);
      iVar3 = iVar2;
      iVar4 = *piVar6;
    } while (*piVar6 != 0);
LAB_0410e245:
    if ((iVar1 == iVar3) || (param_2 < *(uint *)(iVar3 + 0x10))) goto LAB_0410e350;
  }
  if (param_3 * param_4 != *(int *)(iVar3 + 0x18) - *(int *)(iVar3 + 0x14) >> 2) {
    piVar5[3] = (int)
                "virtual void XAudio2VoiceImp::GetOutputMatrix(IXAudio2Voice*, UINT32, UINT32, float*)"
    ;
    piVar5[2] = 0x1a9;
    piVar5[1] = (int)
                "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2voiceimpl.cpp"
    ;
    *piVar5 = (int)
              "SourceChannels * DestinationChannels == mNextParameters.outputMatrices[(XAudio2Voice*) pDestinationVoice].size()"
    ;
                    /* try { // try from 0410e28d to 0410e291 has its CatchHandler @ 0410e3ca */
    piVar5[-1] = 0x410e292;
    FUN_0400a810();
  }
  iVar2 = *(int *)(param_1 + 0x80);
  iVar4 = iVar1;
  if (*(int *)(param_1 + 0x80) != 0) {
    do {
      while (iVar3 = iVar2, param_2 <= *(uint *)(iVar3 + 0x10)) {
        iVar2 = *(int *)(iVar3 + 8);
        iVar4 = iVar3;
        if (*(int *)(iVar3 + 8) == 0) goto LAB_0410e2b5;
      }
      piVar6 = (int *)(iVar3 + 0xc);
      iVar2 = *piVar6;
      iVar3 = iVar4;
    } while (*piVar6 != 0);
LAB_0410e2b5:
    bVar7 = iVar1 != iVar3;
    iVar1 = iVar3;
    if ((bVar7) && (piVar6 = piVar5, *(uint *)(iVar3 + 0x10) <= param_2)) goto LAB_0410e30e;
  }
  local_30 = param_2;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  piVar5[3] = (int)&local_30;
  piVar5[2] = iVar1;
  piVar5[1] = param_1 + 0x78;
  *piVar5 = (int)local_50;
                    /* try { // try from 0410e2ee to 0410e2f2 has its CatchHandler @ 0410e3a9 */
  piVar5[-1] = 0x410e2f3;
  FUN_04110440();
  iVar3 = local_50[0];
  piVar6 = piVar5 + -1;
  if (local_2c != 0) {
    piVar5[-1] = local_2c;
    piVar5[-2] = 0x410e30b;
    operator_delete((void *)piVar5[-1]);
    piVar6 = piVar5 + -1;
  }
LAB_0410e30e:
  piVar6[1] = *(int *)(iVar3 + 0x14);
  piVar6[2] = param_3 * param_4 * 4;
  *piVar6 = param_5;
  piVar6[-1] = 0x410e32a;
  memcpy((void *)*piVar6,(void *)piVar6[1],piVar6[2]);
  *piVar6 = (int)local_20;
  piVar6[-1] = 0x410e33e;
  pthread_mutex_unlock((pthread_mutex_t *)*piVar6);
  return;
}

// --- XAudio2VoiceImp::GetSamplesNeeded @0x0410b180 ---
/* source: xaudio2voiceimpl */

int XAudio2VoiceImp__GetSamplesNeeded(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  double dVar6;
  
  piVar4 = *(int **)(param_1 + 0xe4);
  if (*(int **)(param_1 + 0xe8) == piVar4) {
    FUN_0400a810("!mOutputs.empty()",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2voiceimpl.cpp"
                 ,0x230,"virtual int XAudio2VoiceImp::GetSamplesNeeded()");
    piVar4 = *(int **)(param_1 + 0xe4);
  }
  iVar2 = *(int *)(param_1 + 0x128);
  iVar3 = *(int *)(param_1 + 0xc4);
  fVar1 = *(float *)(param_1 + 4);
  iVar5 = (**(code **)(*(int *)(*piVar4 + 4) + 0x54))(*piVar4 + 4);
  dVar6 = round((double)((float)iVar5 * (((float)iVar3 / fVar1) / (float)iVar2)));
  return (int)dVar6;
}

// --- XAudio2VoiceImp::GetVoiceDetails @0x0410b070 ---
/* source: xaudio2voiceimpl */

void XAudio2VoiceImp__GetVoiceDetails(int param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    FUN_0400a810("pVoiceDetails",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2voiceimpl.cpp"
                 ,0x2d,"virtual void XAudio2VoiceImp::GetVoiceDetails(XAUDIO2_VOICE_DETAILS*)");
  }
  *param_2 = *(undefined4 *)(param_1 + 0xe0);
  param_2[1] = *(undefined4 *)(param_1 + 200);
  param_2[2] = *(undefined4 *)(param_1 + 0xc4);
  return;
}

// --- XAudio2VoiceImp::Process @0x0410e3f0 ---
/* source: audioallocator, xaudio2helpers, xaudio2voiceimpl */

void XAudio2VoiceImp__Process(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  undefined4 *puVar13;
  int *piVar14;
  uint *__src;
  undefined4 *puVar15;
  int iVar16;
  uint uVar17;
  undefined4 *puVar18;
  size_t __n;
  int *local_8c;
  uint *local_88;
  int *local_84;
  int local_80;
  int *local_7c;
  int *local_78;
  int *local_74;
  int *local_70;
  uint local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint local_54;
  void *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  void *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int *local_34;
  int *local_30;
  int local_2c;
  uint local_28;
  undefined4 local_24;
  uint local_20 [4];
  
  if (param_1[0x34] != param_1[0x33]) {
    cVar4 = (**(code **)(*param_1 + 0x50))(param_1);
    if ((cVar4 != '\0') && ((float)param_1[2] != DAT_042dbf3c)) {
      FUN_0410e150(param_1,param_1 + 0x33,param_1[2]);
    }
    iVar16 = param_1[0x43];
    local_80 = param_1[0x42];
    if ((iVar16 != local_80) && ((iVar16 - local_80 >> 2) * -0x55555555 != 0)) {
      uVar17 = 0;
      local_7c = (int *)0x0;
      do {
        if ((*(uint *)(param_1[0x45] + (uVar17 >> 5) * 4) & 1 << ((byte)uVar17 & 0x1f)) != 0) {
          Dsp__ProcessEffect(local_80 + (int)local_7c,param_1 + 0x31,param_1 + 0x33);
          local_80 = param_1[0x42];
          iVar16 = param_1[0x43];
        }
        local_7c = (int *)((int)local_7c + 0xc);
        uVar17 = uVar17 + 1;
      } while (uVar17 < (uint)((iVar16 - local_80 >> 2) * -0x55555555));
    }
    if ((char)param_1[0x15] != '\0') {
      FUN_04103110(param_1 + 0x33,param_1 + 3);
    }
    cVar4 = (**(code **)(*param_1 + 0x50))(param_1);
    if ((cVar4 == '\0') && ((float)param_1[2] != DAT_042dbf3c)) {
      FUN_0410e150(param_1,param_1 + 0x33,param_1[2]);
    }
    if (param_1[7] != param_1[6]) {
      Dsp__ChangeVolume(param_1 + 0x33,param_1 + 6);
    }
    if ((float)param_1[0x4a] != (float)param_1[0x31] / (float)param_1[1]) {
      uVar8 = (**(code **)(*(int *)(*(int *)param_1[0x39] + 4) + 0x54))(*(int *)param_1[0x39] + 4);
      Dsp__ChangeSampleRate
                (param_1 + 0x33,((float)param_1[0x31] / (float)param_1[1]) / (float)param_1[0x4a],
                 uVar8);
    }
    local_88 = (uint *)param_1[0x39];
    while ((uint *)param_1[0x3a] != local_88) {
      local_20[0] = *local_88;
      cVar4 = FUN_04106ee0(param_1[0x37] + 4,local_20[0]);
      if (cVar4 == '\0') {
        puVar7 = (uint *)param_1[0x3a];
        __src = local_88 + 1;
        if ((puVar7 != __src) && (iVar16 = (int)puVar7 - (int)__src >> 2, iVar16 != 0)) {
          memmove(local_88,__src,iVar16 << 2);
          puVar7 = (uint *)param_1[0x3a];
        }
        param_1[0x3a] = (int)(puVar7 + -1);
        FUN_0410fd50(param_1 + 0x3c,local_20);
        FUN_0410fea0(param_1 + 0xf,local_20);
        FUN_04110660(param_1 + 9,local_20);
      }
      else {
        local_34 = (int *)0x0;
        local_30 = (int *)0x0;
        local_2c = 0;
        local_84 = (int *)param_1[0x34];
        local_7c = (int *)param_1[0x33];
        iVar16 = (int)local_84 - (int)local_7c >> 2;
        uVar17 = iVar16 * -0x55555555;
        if (uVar17 == 0) {
          local_8c = (int *)0x0;
          uVar17 = 0;
        }
        else {
          if (0x15555555 < uVar17) {
                    /* WARNING: Subroutine does not return */
            std::__throw_bad_alloc();
          }
          uVar17 = iVar16 << 2;
          local_8c = operator_new(uVar17);
          local_84 = (int *)param_1[0x34];
          local_7c = (int *)param_1[0x33];
        }
        local_2c = uVar17 + (int)local_8c;
        local_34 = local_8c;
        local_30 = local_8c;
        for (; local_84 != local_7c; local_7c = local_7c + 3) {
          if (local_8c != (int *)0x0) {
            __n = 0;
            puVar18 = (undefined4 *)0x0;
            iVar16 = local_7c[1];
            iVar2 = *local_7c;
            *local_8c = 0;
            local_8c[1] = 0;
            local_8c[2] = 0;
            iVar16 = iVar16 - iVar2 >> 2;
            if (iVar16 != 0) {
              __n = iVar16 * 4;
              puVar18 = (undefined4 *)memalign(0x10,__n);
              if (puVar18 == (undefined4 *)0x0) {
                    /* try { // try from 0410ebdc to 0410ebe0 has its CatchHandler @ 0410ece8 */
                FUN_0400a810("memory",
                             "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/audioallocator.h"
                             ,0x4b,
                             "T* AudioAllocator<T>::allocate(AudioAllocator<T>::size_type, const void*) [with T = float, AudioAllocator<T>::pointer = float*, AudioAllocator<T>::size_type = unsigned int]"
                            );
              }
              bzero(puVar18,__n);
            }
            *local_8c = (int)puVar18;
            local_8c[1] = (int)puVar18;
            local_8c[2] = __n + (int)puVar18;
            puVar3 = (undefined4 *)*local_7c;
            puVar15 = (undefined4 *)local_7c[1];
            puVar5 = puVar18;
            puVar13 = puVar3;
            if (puVar15 != puVar3) {
              do {
                if (puVar5 != (undefined4 *)0x0) {
                  *puVar5 = *puVar13;
                }
                puVar13 = puVar13 + 1;
                puVar5 = puVar5 + 1;
              } while (puVar15 != puVar13);
              puVar18 = (undefined4 *)
                        ((int)puVar18 + ((int)puVar15 - (int)(puVar3 + 1) & 0xfffffffcU) + 4);
            }
            local_8c[1] = (int)puVar18;
          }
          local_8c = local_8c + 3;
        }
        piVar14 = (int *)param_1[0x11];
        local_30 = local_8c;
        if (piVar14 != (int *)0x0) {
          piVar9 = param_1 + 0x10;
          piVar11 = piVar9;
          piVar12 = piVar14;
          do {
            while (piVar10 = piVar12, local_20[0] <= (uint)piVar10[4]) {
              piVar11 = piVar10;
              piVar12 = (int *)piVar10[2];
              if ((int *)piVar10[2] == (int *)0x0) goto LAB_0410e7b5;
            }
            piVar1 = piVar10 + 3;
            piVar10 = piVar11;
            piVar12 = (int *)*piVar1;
          } while ((int *)*piVar1 != (int *)0x0);
LAB_0410e7b5:
          if ((piVar9 != piVar10) && (piVar11 = piVar9, (uint)piVar10[4] <= local_20[0])) {
            do {
              while (piVar12 = piVar14, local_20[0] <= (uint)piVar12[4]) {
                piVar14 = (int *)piVar12[2];
                piVar11 = piVar12;
                if ((int *)piVar12[2] == (int *)0x0) goto LAB_0410e7da;
              }
              piVar10 = piVar12 + 3;
              piVar14 = (int *)*piVar10;
              piVar12 = piVar11;
            } while ((int *)*piVar10 != (int *)0x0);
LAB_0410e7da:
            if ((piVar9 == piVar12) || (local_20[0] < (uint)piVar12[4])) {
              local_60 = 0;
              local_5c = 0;
              local_58 = 0;
              local_64 = local_20[0];
                    /* try { // try from 0410e811 to 0410e82a has its CatchHandler @ 0410ed18 */
              FUN_0410c230(&local_64);
              piVar12 = local_70;
            }
            FUN_04103110(&local_34,piVar12 + 5);
          }
        }
        piVar14 = (int *)param_1[0xb];
        if (piVar14 == (int *)0x0) {
          local_84 = (int *)0x0;
        }
        else {
          piVar9 = param_1 + 10;
          piVar11 = piVar14;
          piVar12 = piVar9;
          do {
            while (piVar10 = piVar11, local_20[0] <= (uint)piVar10[4]) {
              piVar11 = (int *)piVar10[2];
              piVar12 = piVar10;
              if ((int *)piVar10[2] == (int *)0x0) goto LAB_0410e865;
            }
            piVar1 = piVar10 + 3;
            piVar11 = (int *)*piVar1;
            piVar10 = piVar12;
          } while ((int *)*piVar1 != (int *)0x0);
LAB_0410e865:
          local_84 = (int *)0x0;
          if ((piVar9 != piVar10) &&
             (piVar11 = piVar14, piVar12 = piVar9, (uint)piVar10[4] <= local_20[0])) {
            do {
              while (piVar10 = piVar11, local_20[0] <= (uint)piVar10[4]) {
                piVar11 = (int *)piVar10[2];
                piVar12 = piVar10;
                if ((int *)piVar10[2] == (int *)0x0) goto LAB_0410e89a;
              }
              piVar1 = piVar10 + 3;
              piVar11 = (int *)*piVar1;
              piVar10 = piVar12;
            } while ((int *)*piVar1 != (int *)0x0);
LAB_0410e89a:
            piVar11 = piVar9;
            if ((piVar9 == piVar10) || (local_20[0] < (uint)piVar10[4])) {
              local_50 = (void *)0x0;
              local_4c = 0;
              local_48 = 0;
              local_54 = local_20[0];
                    /* try { // try from 0410e8de to 0410e8e2 has its CatchHandler @ 0410ecd5 */
              FUN_0410b560(&local_54);
              if (local_50 == (void *)0x0) {
                piVar14 = (int *)param_1[0xb];
              }
              else {
                operator_delete(local_50);
                piVar14 = (int *)param_1[0xb];
              }
              local_84 = (int *)local_74[5];
              if (piVar14 != (int *)0x0) goto LAB_0410e91e;
LAB_0410e946:
              local_40 = (void *)0x0;
              local_3c = 0;
              local_38 = 0;
              local_44 = local_20[0];
                    /* try { // try from 0410e96c to 0410e970 has its CatchHandler @ 0410ecb4 */
              FUN_0410b560(&local_44);
              piVar12 = local_74;
              if (local_40 != (void *)0x0) {
                operator_delete(local_40);
              }
            }
            else {
              local_84 = (int *)piVar10[5];
LAB_0410e91e:
              do {
                while (piVar12 = piVar14, local_20[0] <= (uint)piVar12[4]) {
                  piVar14 = (int *)piVar12[2];
                  piVar11 = piVar12;
                  if ((int *)piVar12[2] == (int *)0x0) goto LAB_0410e92a;
                }
                piVar10 = piVar12 + 3;
                piVar14 = (int *)*piVar10;
                piVar12 = piVar11;
              } while ((int *)*piVar10 != (int *)0x0);
LAB_0410e92a:
              if ((piVar9 == piVar12) || (local_20[0] < (uint)piVar12[4])) goto LAB_0410e946;
            }
            iVar16 = piVar12[5];
            iVar2 = piVar12[6];
            iVar6 = param_1[0x32];
            piVar14 = (int *)param_1[0x3e];
            piVar11 = param_1 + 0x3d;
            if ((int *)param_1[0x3e] == (int *)0x0) {
LAB_0410e9d6:
              local_24 = 0;
              local_28 = local_20[0];
                    /* try { // try from 0410e9ef to 0410eab0 has its CatchHandler @ 0410ed18 */
              FUN_0410bf10(&local_28);
              piVar12 = local_78;
            }
            else {
              do {
                while (piVar12 = piVar14, local_20[0] <= (uint)piVar12[4]) {
                  piVar14 = (int *)piVar12[2];
                  piVar11 = piVar12;
                  if ((int *)piVar12[2] == (int *)0x0) goto LAB_0410e9cd;
                }
                piVar9 = piVar12 + 3;
                piVar14 = (int *)*piVar9;
                piVar12 = piVar11;
              } while ((int *)*piVar9 != (int *)0x0);
LAB_0410e9cd:
              if ((param_1 + 0x3d == piVar12) || (local_20[0] < (uint)piVar12[4]))
              goto LAB_0410e9d6;
            }
            if (iVar6 * piVar12[5] - (iVar2 - iVar16 >> 2) != 0) {
              FUN_0400a810("(signed) mCurrentParameters.outputMatrices[output].size() == mFormat.numOfChannels * mOutputChannels[output]"
                           ,
                           "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2voiceimpl.cpp"
                           ,0x1e5,"void XAudio2VoiceImp::Process()");
            }
          }
        }
        uVar17 = local_20[0];
        if (((int)local_30 - (int)local_34 >> 2) * -0x55555555 == 0) {
                    /* try { // try from 0410ec19 to 0410ec1d has its CatchHandler @ 0410ed18 */
          FUN_0400a810("pcm.channels.size() > 0",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2helpers.h"
                       ,0x13,"int GetNumOfSamples(const PcmData&)");
        }
        iVar16 = *local_34;
        iVar2 = local_34[1];
        iVar6 = (**(code **)(*(int *)(uVar17 + 4) + 0x54))(uVar17 + 4);
        if ((iVar2 - iVar16 >> 2) + -8 != iVar6) {
          FUN_0400a810("GetNumOfSamples( pcmData ) - kNumOfPaddingSamples == GetSamplesNeeded()",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2voiceimpl.cpp"
                       ,0x204,"void XAudio2VoiceImp::AddToMix(const PcmData&, float*)");
        }
        Dsp__Mix(uVar17 + 0xd0,&local_34,*(undefined4 *)(uVar17 + 0xcc),local_84);
        piVar11 = local_30;
        local_88 = local_88 + 1;
        for (piVar14 = local_34; piVar11 != piVar14; piVar14 = piVar14 + 3) {
          if ((void *)*piVar14 != (void *)0x0) {
            free((void *)*piVar14);
          }
        }
        if (local_34 != (int *)0x0) {
          operator_delete(local_34);
        }
      }
    }
    puVar3 = (undefined4 *)param_1[0x34];
    puVar18 = (undefined4 *)param_1[0x33];
    for (puVar15 = puVar18; puVar15 != puVar3; puVar15 = puVar15 + 3) {
      if ((void *)*puVar15 != (void *)0x0) {
        free((void *)*puVar15);
      }
    }
    param_1[0x34] = (int)puVar18;
  }
  return;
}

// --- XAudio2VoiceImp::Real_EnableEffect @0x0410cca0 ---
/* source: xaudio2voiceimpl */

void XAudio2VoiceImp__Real_EnableEffect(int param_1,uint param_2,char param_3)

{
  uint *puVar1;
  uint uVar2;
  
  if ((int)param_2 < 0) {
    FUN_0400a810("EffectIndex >= 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2voiceimpl.cpp"
                 ,0xc6,"void XAudio2VoiceImp::Real_EnableEffect(int, bool)");
  }
  if ((*(int *)(param_1 + 0x10c) - *(int *)(param_1 + 0x108) >> 2) * -0x55555555 <= (int)param_2) {
    return;
  }
  puVar1 = (uint *)(*(int *)(param_1 + 0x114) + (param_2 >> 5) * 4);
  uVar2 = 1 << ((byte)param_2 & 0x1f);
  if (param_3 == '\0') {
    *puVar1 = *puVar1 & ~uVar2;
    return;
  }
  *puVar1 = *puVar1 | uVar2;
  return;
}

// --- XAudio2VoiceImp::Real_SetEffectParameters @0x0410cb30 ---
/* source: xaudio2voiceimpl */

void XAudio2VoiceImp__Real_SetEffectParameters
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *local_14;
  int *local_10;
  
  if (param_2 < 0) {
    FUN_0400a810("EffectIndex >= 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2voiceimpl.cpp"
                 ,0xad,
                 "void XAudio2VoiceImp::Real_SetEffectParameters(int, long unsigned int, void*)");
  }
  if ((*(int *)(param_1 + 0x10c) - *(int *)(param_1 + 0x108) >> 2) * -0x55555555 <= param_2) {
    return;
  }
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x108) + param_2 * 0xc);
  local_14 = (int *)0x0;
  iVar2 = (**(code **)*puVar1)(puVar1,&DAT_042dafc8,&local_14);
  if ((iVar2 < 0) || (local_14 == (int *)0x0)) {
    FUN_0400a810("((HRESULT)(result) >= 0) && xapoEffect",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2voiceimpl.cpp"
                 ,0xb8,
                 "void XAudio2VoiceImp::Real_SetEffectParameters(int, long unsigned int, void*)");
  }
  local_10 = (int *)0x0;
  iVar2 = (**(code **)*puVar1)(puVar1,&DAT_042dafb8,&local_10);
  if ((iVar2 < 0) || (local_10 == (int *)0x0)) {
    FUN_0400a810("((HRESULT)(result) >= 0) && xapoParameters",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2voiceimpl.cpp"
                 ,0xbc,
                 "void XAudio2VoiceImp::Real_SetEffectParameters(int, long unsigned int, void*)");
  }
  (**(code **)(*local_10 + 0xc))(local_10,param_4,param_3);
  (**(code **)(*local_10 + 8))(local_10);
  (**(code **)(*local_14 + 8))(local_14);
  return;
}

// --- XAudio2VoiceImp::SetEffectChain @0x0410d930 ---
/* WARNING: Type propagation algorithm not settling */
/* source: xaudio2voiceimpl */

undefined4 XAudio2VoiceImp__SetEffectChain(int param_1,uint *param_2)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int local_40 [5];
  int *local_2c;
  int local_28;
  int local_24;
  undefined1 local_1d;
  
  piVar4 = local_40 + 1;
  piVar7 = local_40 + 1;
  piVar8 = *(int **)(param_1 + 0x108);
  piVar5 = *(int **)(param_1 + 0x10c);
  if (piVar8 != piVar5) {
    do {
      piVar4 = (int *)*piVar8;
      if (piVar4 == (int *)0x0) {
        piVar7[3] = (int)"void XAudio2VoiceImp::DeleteEffectChain()";
        piVar7[2] = 0x219;
        piVar7[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2voiceimpl.cpp"
        ;
        *piVar7 = (int)"effect.pEffect";
        piVar7[-1] = 0x410dae4;
        FUN_0400a810();
        piVar4 = (int *)*piVar8;
      }
      iVar9 = *piVar4;
      *piVar7 = (int)piVar4;
      piVar8 = piVar8 + 3;
      pcVar1 = *(code **)(iVar9 + 8);
      piVar7[-1] = 0x410d965;
      (*pcVar1)();
      piVar4 = piVar7 + -1;
      piVar7 = piVar7 + -1;
    } while (piVar5 != piVar8);
    piVar8 = *(int **)(param_1 + 0x108);
  }
  *(int **)(param_1 + 0x10c) = piVar8;
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x114);
  if ((param_2 != (uint *)0x0) && (*param_2 != 0)) {
    local_28 = param_1 + 0x108;
    iVar9 = 0;
    uVar10 = 0;
    local_24 = param_1 + 0x114;
    piVar8 = piVar4;
    do {
      while( true ) {
        local_2c = (int *)(param_2[1] + iVar9);
        piVar5 = (int *)*local_2c;
        if (piVar5 == (int *)0x0) {
          piVar8[3] = (int)
                      "virtual HRESULT XAudio2VoiceImp::SetEffectChain(const XAUDIO2_EFFECT_CHAIN*)"
          ;
          piVar8[2] = 0x6e;
          piVar8[1] = (int)
                      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2voiceimpl.cpp"
          ;
          *piVar8 = (int)"descriptor.pEffect";
          piVar8[-1] = 0x410db37;
          FUN_0400a810();
          piVar5 = (int *)*local_2c;
        }
        iVar2 = *piVar5;
        *piVar8 = (int)piVar5;
        pcVar1 = *(code **)(iVar2 + 4);
        piVar8[-1] = 0x410d9f7;
        (*pcVar1)();
        piVar5 = *(int **)(param_1 + 0x10c);
        if (piVar5 == *(int **)(param_1 + 0x110)) {
          *piVar8 = (int)piVar5;
          piVar8[1] = (int)local_2c;
          piVar8[-1] = local_28;
          piVar8[-2] = 0x410db06;
          FUN_0410f670();
        }
        else {
          if (piVar5 != (int *)0x0) {
            *piVar5 = *local_2c;
            piVar5[1] = local_2c[1];
            piVar5[2] = local_2c[2];
          }
          *(int **)(param_1 + 0x10c) = piVar5 + 3;
        }
        local_1d = local_2c[1] != 0;
        puVar3 = *(uint **)(param_1 + 0x11c);
        iVar2 = *(int *)(param_1 + 0x120);
        if (puVar3 != *(uint **)(param_1 + 0x124)) break;
        *piVar8 = (int)puVar3;
        piVar8[1] = iVar2;
        piVar8[2] = (uint)(byte)local_1d;
        piVar8[-1] = local_24;
        piVar8[-2] = 0x410dabb;
        vector<bool>___M_insert_aux();
LAB_0410d9cc:
        uVar10 = uVar10 + 1;
        iVar9 = iVar9 + 0xc;
        piVar8 = piVar8 + -1;
        if (*param_2 <= uVar10) {
          return 0;
        }
      }
      *(int *)(param_1 + 0x120) = iVar2 + 1;
      if (iVar2 == 0x1f) {
        *(undefined4 *)(param_1 + 0x120) = 0;
        *(uint **)(param_1 + 0x11c) = puVar3 + 1;
      }
      uVar6 = 1 << ((byte)iVar2 & 0x1f);
      if (!(bool)local_1d) {
        *puVar3 = *puVar3 & ~uVar6;
        goto LAB_0410d9cc;
      }
      *puVar3 = *puVar3 | uVar6;
      uVar10 = uVar10 + 1;
      iVar9 = iVar9 + 0xc;
      piVar8 = piVar8 + -1;
    } while (uVar10 < *param_2);
  }
  return 0;
}

// --- XAudio2VoiceImp::SetOutputVoices @0x0410d640 ---
/* source: xaudio2voiceimpl */

undefined4 XAudio2VoiceImp__SetOutputVoices(int param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int local_40;
  uint local_34 [3];
  undefined4 local_28;
  pthread_mutex_t *local_24;
  uint local_20 [4];
  
  iVar4 = *(int *)(param_1 + 0xdc);
  if (iVar4 == 0) {
    FUN_0400a810("mEngine",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2voiceimpl.cpp"
                 ,0x1fa,"std::mutex& XAudio2VoiceImp::GetAudioGraphMutex()");
    iVar4 = *(int *)(param_1 + 0xdc);
  }
  local_24 = (pthread_mutex_t *)(iVar4 + 100);
  iVar4 = pthread_mutex_lock(local_24);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar4);
  }
  iVar4 = param_1 + 0xf0;
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0xe4);
  FUN_0410f360(iVar4,*(undefined4 *)(param_1 + 0xf8));
  iVar2 = param_1 + 0xf4;
  *(int *)(param_1 + 0xfc) = iVar2;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(int *)(param_1 + 0x100) = iVar2;
  *(undefined4 *)(param_1 + 0x104) = 0;
  if (param_2 != (uint *)0x0) {
    if (*param_2 != 0) {
      iVar9 = param_1 + 0xe4;
      uVar8 = 0;
      do {
        local_20[0] = *(uint *)(param_2[1] + uVar8 * 4);
        puVar3 = *(uint **)(param_1 + 0xe8);
        if (puVar3 == *(uint **)(param_1 + 0xec)) {
          FUN_0410f4f0(iVar9,puVar3,local_20);
        }
        else {
          iVar5 = 0;
          if (puVar3 != (uint *)0x0) {
            *puVar3 = local_20[0];
            iVar5 = *(int *)(param_1 + 0xe8);
          }
          *(int *)(param_1 + 0xe8) = iVar5 + 4;
        }
        iVar5 = *(int *)(param_1 + 0xf8);
        iVar6 = iVar2;
        if (*(int *)(param_1 + 0xf8) == 0) {
LAB_0410d757:
          local_34[1] = 0;
          local_34[0] = local_20[0];
                    /* try { // try from 0410d76d to 0410d809 has its CatchHandler @ 0410d90f */
          FUN_0410bf10(local_34);
          iVar7 = local_40;
        }
        else {
          do {
            while (iVar7 = iVar5, *(uint *)(iVar7 + 0x10) < local_20[0]) {
              piVar1 = (int *)(iVar7 + 0xc);
              iVar5 = *piVar1;
              iVar7 = iVar6;
              if (*piVar1 == 0) goto LAB_0410d74d;
            }
            iVar5 = *(int *)(iVar7 + 8);
            iVar6 = iVar7;
          } while (*(int *)(iVar7 + 8) != 0);
LAB_0410d74d:
          if ((iVar2 == iVar7) || (local_20[0] < *(uint *)(iVar7 + 0x10))) goto LAB_0410d757;
        }
        *(undefined4 *)(iVar7 + 0x14) = *(undefined4 *)(local_20[0] + 0xcc);
        if (uVar8 == 0) {
          *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(local_20[0] + 200);
        }
        else if (*(int *)(local_20[0] + 200) != *(int *)(param_1 + 0x128)) {
          FUN_0400a810("output->GetImplementation().mFormat.sampleRate == mOutputSampleRate",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2voiceimpl.cpp"
                       ,0x52,
                       "virtual HRESULT XAudio2VoiceImp::SetOutputVoices(const XAUDIO2_VOICE_SENDS*)"
                       ,iVar9,iVar4);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *param_2);
    }
    goto LAB_0410d79c;
  }
  puVar3 = *(uint **)(param_1 + 0xe8);
  local_20[0] = *(uint *)(*(int *)(param_1 + 0xdc) + 0x60);
  if (puVar3 == *(uint **)(param_1 + 0xec)) {
    FUN_0410f4f0(param_1 + 0xe4,puVar3,local_20);
    iVar4 = *(int *)(param_1 + 0xf8);
  }
  else {
    iVar4 = 0;
    iVar9 = 0;
    if (puVar3 != (uint *)0x0) {
      *puVar3 = local_20[0];
      iVar9 = *(int *)(param_1 + 0xe8);
      iVar4 = *(int *)(param_1 + 0xf8);
    }
    *(int *)(param_1 + 0xe8) = iVar9 + 4;
  }
  iVar9 = iVar2;
  if (iVar4 == 0) {
LAB_0410d8ad:
    local_28 = 0;
    local_34[2] = local_20[0];
                    /* try { // try from 0410d8c3 to 0410d900 has its CatchHandler @ 0410d90f */
    FUN_0410bf10(local_34 + 2);
    iVar5 = local_40;
  }
  else {
    do {
      iVar5 = iVar4;
      if (*(uint *)(iVar5 + 0x10) < local_20[0]) {
        iVar4 = *(int *)(iVar5 + 0xc);
        iVar5 = iVar9;
      }
      else {
        iVar4 = *(int *)(iVar5 + 8);
      }
      iVar9 = iVar5;
    } while (iVar4 != 0);
    if ((iVar2 == iVar5) || (local_20[0] < *(uint *)(iVar5 + 0x10))) goto LAB_0410d8ad;
  }
  *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(local_20[0] + 0xcc);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(local_20[0] + 200);
LAB_0410d79c:
  pthread_mutex_unlock(local_24);
  return 0;
}

// --- xaudio2helpers_0410cfb0 @0x0410cfb0 ---
/* source: xaudio2helpers, xaudio2voiceimpl */

void xaudio2helpers_0410cfb0(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_2;
  if ((param_2[1] - (int)piVar4 >> 2) * -0x55555555 == 0) {
    FUN_0400a810("pcm.channels.size() > 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2helpers.h"
                 ,0x13,"int GetNumOfSamples(const PcmData&)");
    piVar4 = (int *)*param_2;
  }
  iVar1 = piVar4[1];
  iVar2 = *piVar4;
  iVar3 = (**(code **)(*param_1 + 0x54))(param_1);
  if ((iVar1 - iVar2 >> 2) + -8 != iVar3) {
    FUN_0400a810("GetNumOfSamples( pcmData ) - kNumOfPaddingSamples == GetSamplesNeeded()",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2voiceimpl.cpp"
                 ,0x204,"void XAudio2VoiceImp::AddToMix(const PcmData&, float*)");
  }
  Dsp__Mix(param_1 + 0x33,param_2,param_1[0x32],param_3);
  return;
}

// --- xaudio2voiceimpl_0410d140 @0x0410d140 ---
/* WARNING: Type propagation algorithm not settling */
/* source: xaudio2voiceimpl */

void xaudio2voiceimpl_0410d140(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int local_30 [8];
  
  piVar6 = local_30 + 1;
  piVar5 = *(int **)(param_1 + 0x108);
  piVar1 = *(int **)(param_1 + 0x10c);
  if (piVar5 != piVar1) {
    do {
      piVar4 = (int *)*piVar5;
      if (piVar4 == (int *)0x0) {
        piVar6[3] = (int)"void XAudio2VoiceImp::DeleteEffectChain()";
        piVar6[2] = 0x219;
        piVar6[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2voiceimpl.cpp"
        ;
        *piVar6 = (int)"effect.pEffect";
        piVar6[-1] = 0x410d1cc;
        FUN_0400a810();
        piVar4 = (int *)*piVar5;
      }
      iVar2 = *piVar4;
      *piVar6 = (int)piVar4;
      piVar5 = piVar5 + 3;
      pcVar3 = *(code **)(iVar2 + 8);
      piVar6[-1] = 0x410d171;
      (*pcVar3)();
      piVar6 = piVar6 + -1;
    } while (piVar1 != piVar5);
    piVar5 = *(int **)(param_1 + 0x108);
  }
  *(int **)(param_1 + 0x10c) = piVar5;
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x114);
  return;
}

// --- xaudio2voiceimpl_0410d400 @0x0410d400 ---
/* WARNING: Type propagation algorithm not settling */
/* source: xaudio2voiceimpl */

void xaudio2voiceimpl_0410d400(undefined4 *param_1)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int local_30 [8];
  
  piVar3 = local_30 + 1;
  piVar6 = local_30 + 1;
  piVar4 = (int *)param_1[0x42];
  *param_1 = &PTR_xaudio2voiceimpl_0410d400_04311628;
  piVar5 = (int *)param_1[0x43];
  if (piVar4 != piVar5) {
    do {
      piVar3 = (int *)*piVar4;
      if (piVar3 == (int *)0x0) {
        piVar6[3] = (int)"void XAudio2VoiceImp::DeleteEffectChain()";
        piVar6[2] = 0x219;
        piVar6[1] = (int)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2voiceimpl.cpp"
        ;
        *piVar6 = (int)"effect.pEffect";
        piVar6[-1] = 0x410d584;
        FUN_0400a810();
        piVar3 = (int *)*piVar4;
      }
      iVar1 = *piVar3;
      *piVar6 = (int)piVar3;
                    /* try { // try from 0410d437 to 0410d583 has its CatchHandler @ 0410d598 */
      pcVar2 = *(code **)(iVar1 + 8);
      piVar6[-1] = 0x410d43a;
      (*pcVar2)();
      piVar4 = piVar4 + 3;
      piVar3 = piVar6 + -1;
      piVar6 = piVar6 + -1;
    } while (piVar5 != piVar4);
    piVar4 = (int *)param_1[0x42];
  }
  iVar1 = param_1[0x45];
  param_1[0x43] = piVar4;
  param_1[0x47] = iVar1;
  param_1[0x48] = param_1[0x46];
  if (iVar1 != 0) {
    *piVar3 = iVar1;
    piVar3[-1] = 0x410d474;
    operator_delete((void *)*piVar3);
    piVar4 = (int *)param_1[0x42];
  }
  if (piVar4 != (int *)0x0) {
    *piVar3 = (int)piVar4;
    piVar3[-1] = 0x410d486;
    operator_delete((void *)*piVar3);
  }
  piVar3[1] = param_1[0x3e];
  *piVar3 = (int)(param_1 + 0x3c);
  piVar3[-1] = 0x410d49e;
  FUN_0410f360();
  if (param_1[0x39] != 0) {
    *piVar3 = param_1[0x39];
    piVar3[-1] = 0x410d4b0;
    operator_delete((void *)*piVar3);
  }
  piVar4 = (int *)param_1[0x34];
  piVar5 = (int *)param_1[0x33];
  if (piVar4 != piVar5) {
    do {
      if (*piVar5 != 0) {
        *piVar3 = *piVar5;
        piVar3[-1] = 0x410d4ce;
        free((void *)*piVar3);
      }
      piVar5 = piVar5 + 3;
    } while (piVar4 != piVar5);
    piVar5 = (int *)param_1[0x33];
  }
  if (piVar5 != (int *)0x0) {
    *piVar3 = (int)piVar5;
    piVar3[-1] = 0x410d4e7;
    operator_delete((void *)*piVar3);
  }
  piVar3[1] = param_1[0x26];
  *piVar3 = (int)(param_1 + 0x24);
  piVar3[-1] = 0x410d4ff;
  FUN_0410f180();
  piVar3[1] = param_1[0x20];
  *piVar3 = (int)(param_1 + 0x1e);
  piVar3[-1] = 0x410d514;
  FUN_0410ef40();
  if (param_1[0x1b] != 0) {
    *piVar3 = param_1[0x1b];
    piVar3[-1] = 0x410d523;
    operator_delete((void *)*piVar3);
  }
  piVar3[1] = param_1[0x11];
  *piVar3 = (int)(param_1 + 0xf);
  piVar3[-1] = 0x410d535;
  FUN_0410f180();
  piVar3[1] = param_1[0xb];
  *piVar3 = (int)(param_1 + 9);
  piVar3[-1] = 0x410d547;
  FUN_0410ef40();
  if ((void *)param_1[6] == (void *)0x0) {
    return;
  }
  operator_delete((void *)param_1[6]);
  return;
}

// --- attached helper FUN_00108d50 @0x04108d50 (call-graph exclusive to this TU) ---
void FUN_04108d50(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_04310aa8;
  xaudio2voiceimpl_0410d400();
  return;
}

// --- attached helper FUN_00108d70 @0x04108d70 (call-graph exclusive to this TU) ---
void FUN_04108d70(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_04310aa8;
  xaudio2voiceimpl_0410d400(param_1);
  operator_delete(param_1);
  return;
}

// --- attached helper FUN_001093f0 @0x041093f0 (call-graph exclusive to this TU) ---
void FUN_041093f0(undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1[0x57];
  *param_1 = &PTR_FUN_04310ee8;
  puVar3 = (undefined4 *)param_1[0x56];
  if (puVar4 != puVar3) {
    do {
      if ((void *)*puVar3 != (void *)0x0) {
        free((void *)*puVar3);
      }
      puVar3 = puVar3 + 3;
    } while (puVar4 != puVar3);
    puVar3 = (undefined4 *)param_1[0x56];
  }
  if (puVar3 != (undefined4 *)0x0) {
    operator_delete(puVar3);
  }
  pvVar2 = (void *)param_1[0x4c];
  if (pvVar2 != (void *)0x0) {
    iVar1 = param_1[0x55];
    puVar4 = (undefined4 *)param_1[0x51];
    if (puVar4 < (undefined4 *)(iVar1 + 4)) {
      do {
        pvVar2 = (void *)*puVar4;
        puVar4 = puVar4 + 1;
        operator_delete(pvVar2);
      } while (puVar4 < (undefined4 *)(iVar1 + 4));
      pvVar2 = (void *)param_1[0x4c];
    }
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x4b];
  param_1[0x4b] = 0;
  if (pvVar2 != (void *)0x0) {
                    /* try { // try from 04109496 to 0410949a has its CatchHandler @ 041094b2 */
    FUN_041016f0(pvVar2);
    operator_delete(pvVar2);
  }
  xaudio2voiceimpl_0410d400();
  return;
}

// --- attached helper FUN_0010af70 @0x0410af70 (call-graph exclusive to this TU) ---
void FUN_0410af70(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_04311228;
  xaudio2voiceimpl_0410d400();
  return;
}

// --- attached helper FUN_0010af90 @0x0410af90 (call-graph exclusive to this TU) ---
void FUN_0410af90(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_04311228;
  xaudio2voiceimpl_0410d400(param_1);
  operator_delete(param_1);
  return;
}

// --- attached helper FUN_0010d620 @0x0410d620 (call-graph exclusive to this TU) ---
void FUN_0410d620(void *param_1)

{
  xaudio2voiceimpl_0410d400(param_1);
  operator_delete(param_1);
  return;
}

