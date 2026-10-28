// Recovered source: eon2/src/dlls/directx/xaudio2_full/audioallocator.h
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- Dsp::ChangeSampleRate @0x04103120 ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* source: audioallocator, xaudio2dsp */

void Dsp__ChangeSampleRate(int *param_1,float param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  void *__ptr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 *puVar25;
  float *pfVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  undefined4 *__n;
  undefined4 *puVar34;
  int iVar35;
  float *pfVar36;
  undefined4 *__s;
  int iVar37;
  uint uVar38;
  uint uVar39;
  int iVar40;
  float fVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  float fVar45;
  float fVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  double dVar53;
  float fVar54;
  int local_114;
  int local_7c;
  int local_74;
  int local_40;
  
  if ((DAT_044fa970 == '\0') && (iVar29 = __cxa_guard_acquire(&DAT_044fa970), iVar29 != 0)) {
    DAT_044fa978 = (float *)0x0;
    DAT_044fa97c = (float *)0x0;
    _DAT_044fa980 = (float *)0x0;
    pfVar26 = (float *)memalign(0x10);
    if (pfVar26 == (float *)0x0) {
                    /* try { // try from 04103b89 to 04103b8d has its CatchHandler @ 04103b93 */
      FUN_0400a810("memory",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/audioallocator.h"
                   ,0x4b,
                   "T* AudioAllocator<T>::allocate(AudioAllocator<T>::size_type, const void*) [with T = float, AudioAllocator<T>::pointer = float*, AudioAllocator<T>::size_type = unsigned int]"
                  );
    }
    bzero(pfVar26,0x64000);
    pfVar36 = pfVar26 + 0x19000;
    DAT_044fa978 = pfVar26;
    _DAT_044fa980 = pfVar36;
    do {
      if (pfVar26 != (float *)0x0) {
        *pfVar26 = 0.0;
      }
      pfVar26 = pfVar26 + 1;
    } while (pfVar26 != pfVar36);
    DAT_044fa97c = pfVar26;
    __cxa_guard_release(&DAT_044fa970);
    __cxa_atexit(FUN_04105460,&DAT_044fa978,&DAT_04408b44);
  }
  dVar53 = round((double)(DAT_04310050 / param_2));
  if ((int)DAT_044fa97c - (int)DAT_044fa978 >> 2 <= param_3) {
    FUN_0400a810("numOfAudioSamplesNeeded < (signed) conversionBuffer.size()",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2dsp.cpp"
                 ,0x15d,"void Dsp::ChangeSampleRate(PcmData&, float, int)");
  }
  iVar29 = *param_1;
  if (0xb < param_1[1] - iVar29) {
    local_74 = 0;
    local_7c = 0;
    uVar30 = (uint)(param_2 * _DAT_04310054);
    iVar31 = (int)dVar53;
    iVar2 = iVar31 + param_3;
    iVar1 = param_3 + 8;
    iVar27 = 4 - iVar31 / 2;
    iVar40 = 0;
    if (-1 < iVar27) {
      iVar40 = iVar27;
    }
    iVar27 = 8;
    if (iVar31 < 9) {
      iVar27 = iVar31;
    }
    iVar31 = iVar31 / 2 + -4;
    if (iVar31 < 0) {
      iVar31 = 0;
    }
    iVar35 = uVar30 * 4;
    uVar32 = uVar30 + (uVar30 & 0xfff);
    uVar33 = uVar32 & 0xfff;
    iVar28 = ((int)uVar32 >> 0xc) + ((int)uVar30 >> 0xc);
    uVar32 = uVar30 + uVar33;
    __n = (undefined4 *)(iVar1 * 4);
    do {
      pfVar26 = DAT_044fa978;
      iVar29 = *(int *)(iVar29 + local_74);
      if (DAT_044fa984 == '\0') {
        pfVar36 = (float *)&DAT_044fa994;
        iVar37 = 0;
        do {
          fVar41 = (float)iVar37 * _DAT_04310058;
          fVar45 = DAT_042dbf3c + fVar41;
          if (fVar45 == 0.0) {
            pfVar36[-1] = DAT_042dbf3c;
          }
          else {
            fVar54 = fabsf(fVar45);
            fVar46 = 0.0;
            if (fVar54 < _DAT_0431005c) {
              fVar46 = DAT_042f73a0 * fVar45;
              fVar54 = sinf(fVar46);
              fVar46 = sinf(fVar46 * DAT_042dbf38);
              fVar46 = ((fVar54 + fVar54) * fVar46) / (DAT_04310060 * fVar45 * fVar45);
            }
            pfVar36[-1] = fVar46;
          }
          if (fVar41 == 0.0) {
            *pfVar36 = 1.0;
            fVar46 = fVar41 - DAT_042dbf3c;
LAB_041035ff:
            fVar54 = fabsf(fVar46);
            fVar45 = 0.0;
            if (fVar54 < _DAT_0431005c) {
              fVar45 = DAT_042f73a0 * fVar46;
              fVar54 = sinf(fVar45);
              fVar45 = sinf(fVar45 * DAT_042dbf38);
              fVar45 = ((fVar54 + fVar54) * fVar45) / (DAT_04310060 * fVar46 * fVar46);
            }
          }
          else {
            fVar46 = fabsf(fVar41);
            fVar45 = 0.0;
            if (fVar46 < _DAT_0431005c) {
              fVar45 = DAT_042f73a0 * fVar41;
              fVar46 = sinf(fVar45);
              fVar45 = sinf(fVar45 * DAT_042dbf38);
              fVar45 = ((fVar46 + fVar46) * fVar45) / (DAT_04310060 * fVar41 * fVar41);
            }
            *pfVar36 = fVar45;
            fVar46 = fVar41 - DAT_042dbf3c;
            fVar45 = DAT_042dbf3c;
            if (fVar46 != 0.0) goto LAB_041035ff;
          }
          fVar41 = fVar41 - _DAT_0431005c;
          pfVar36[1] = fVar45;
          fVar45 = DAT_042dbf3c;
          if (fVar41 != 0.0) {
            fVar46 = fabsf(fVar41);
            fVar45 = 0.0;
            if (fVar46 < _DAT_0431005c) {
              fVar45 = DAT_042f73a0 * fVar41;
              fVar46 = sinf(fVar45);
              fVar45 = sinf(fVar45 * DAT_042dbf38);
              fVar45 = ((fVar46 + fVar46) * fVar45) / (DAT_04310060 * fVar41 * fVar41);
            }
          }
          iVar37 = iVar37 + 1;
          pfVar36[2] = fVar45;
          pfVar36 = pfVar36 + 4;
        } while (iVar37 != 0x1000);
        DAT_044fa984 = '\x01';
      }
      iVar37 = iVar29 + -4;
      uVar39 = 0;
      if (iVar2 < 4) {
        uVar39 = 0;
        local_114 = 0;
        iVar42 = 0;
      }
      else {
        local_114 = 0;
        pfVar36 = pfVar26;
        iVar42 = (int)uVar30 >> 0xc;
        iVar43 = iVar28;
        iVar44 = ((int)uVar32 >> 0xc) + iVar28;
        uVar38 = uVar30 & 0xfff;
        uVar49 = uVar33;
        uVar51 = uVar32 & 0xfff;
        local_40 = iVar2;
        do {
          pfVar3 = (float *)(iVar37 + iVar42 * 4);
          fVar41 = *pfVar3;
          fVar45 = pfVar3[1];
          fVar46 = pfVar3[2];
          fVar54 = pfVar3[3];
          uVar47 = uVar39 + iVar35;
          uVar48 = uVar38 + iVar35;
          uVar50 = uVar49 + iVar35;
          uVar52 = uVar51 + iVar35;
          pfVar3 = (float *)(iVar37 + iVar44 * 4);
          fVar5 = *pfVar3;
          fVar6 = pfVar3[1];
          fVar7 = pfVar3[2];
          fVar8 = pfVar3[3];
          pfVar3 = (float *)(iVar37 + local_114 * 4);
          pfVar4 = (float *)(iVar37 + iVar43 * 4);
          fVar9 = *pfVar4;
          fVar10 = pfVar4[1];
          fVar11 = pfVar4[2];
          fVar12 = pfVar4[3];
          fVar13 = (float)(&DAT_044fa990)[uVar49 * 4];
          fVar14 = (float)(&DAT_044fa994)[uVar49 * 4];
          fVar15 = (float)(&DAT_044fa998)[uVar49 * 4];
          fVar16 = (float)(&DAT_044fa99c)[uVar49 * 4];
          local_40 = local_40 + -4;
          fVar17 = (float)(&DAT_044fa990)[uVar38 * 4];
          fVar18 = (float)(&DAT_044fa994)[uVar38 * 4];
          fVar19 = (float)(&DAT_044fa998)[uVar38 * 4];
          fVar20 = (float)(&DAT_044fa99c)[uVar38 * 4];
          fVar21 = (float)(&DAT_044fa990)[uVar51 * 4];
          fVar22 = (float)(&DAT_044fa994)[uVar51 * 4];
          fVar23 = (float)(&DAT_044fa998)[uVar51 * 4];
          fVar24 = (float)(&DAT_044fa99c)[uVar51 * 4];
          *pfVar36 = *pfVar3 * (float)(&DAT_044fa990)[uVar39 * 4] +
                     pfVar3[1] * (float)(&DAT_044fa994)[uVar39 * 4] +
                     pfVar3[2] * (float)(&DAT_044fa998)[uVar39 * 4] +
                     pfVar3[3] * (float)(&DAT_044fa99c)[uVar39 * 4];
          pfVar36[1] = fVar41 * fVar17 + fVar45 * fVar18 + fVar46 * fVar19 + fVar54 * fVar20;
          pfVar36[2] = fVar9 * fVar13 + fVar10 * fVar14 + fVar11 * fVar15 + fVar12 * fVar16;
          pfVar36[3] = fVar5 * fVar21 + fVar6 * fVar22 + fVar7 * fVar23 + fVar8 * fVar24;
          pfVar36 = pfVar36 + 4;
          uVar39 = uVar47 & _DAT_04310090;
          uVar38 = uVar48 & _UNK_04310094;
          uVar49 = uVar50 & _UNK_04310098;
          uVar51 = uVar52 & _UNK_0431009c;
          local_114 = (uVar47 >> 0xc) + local_114;
          iVar42 = (uVar48 >> 0xc) + iVar42;
          iVar43 = (uVar50 >> 0xc) + iVar43;
          iVar44 = (uVar52 >> 0xc) + iVar44;
        } while (3 < local_40);
        iVar42 = (iVar2 - 4U & 0xfffffffc) + 4;
      }
      for (; iVar42 < iVar2; iVar42 = iVar42 + 1) {
        uVar38 = uVar39 + uVar30;
        pfVar26[iVar42] =
             *(float *)(iVar37 + local_114 * 4) * (float)(&DAT_044fa990)[uVar39 * 4] +
             *(float *)(iVar29 + local_114 * 4) * (float)(&DAT_044fa994)[uVar39 * 4] +
             *(float *)(iVar29 + 4 + local_114 * 4) * (float)(&DAT_044fa998)[uVar39 * 4] +
             *(float *)(iVar29 + 8 + local_114 * 4) * (float)(&DAT_044fa99c)[uVar39 * 4];
        uVar39 = uVar38 & 0xfff;
        local_114 = local_114 + ((int)uVar38 >> 0xc);
      }
      __s = (undefined4 *)0x0;
      puVar25 = __n;
      if (iVar1 != 0) {
        __s = (undefined4 *)memalign(0x10);
        if (__s == (undefined4 *)0x0) {
          FUN_0400a810("memory",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/audioallocator.h"
                       ,0x4b,
                       "T* AudioAllocator<T>::allocate(AudioAllocator<T>::size_type, const void*) [with T = float, AudioAllocator<T>::pointer = float*, AudioAllocator<T>::size_type = unsigned int]"
                      );
        }
        bzero(__s,(size_t)__n);
        puVar25 = (undefined4 *)((int)__n + (int)__s);
        iVar29 = iVar1;
        puVar34 = __s;
        do {
          if (puVar34 != (undefined4 *)0x0) {
            *puVar34 = 0;
          }
          puVar34 = puVar34 + 1;
          iVar29 = iVar29 + -1;
        } while (iVar29 != 0);
      }
      puVar34 = (undefined4 *)(local_74 + *param_1);
      __ptr = (void *)*puVar34;
      puVar34[1] = puVar25;
      *puVar34 = __s;
      puVar34[2] = puVar25;
      if (__ptr != (void *)0x0) {
        free(__ptr);
      }
      if (((int *)(local_74 + *param_1))[1] - *(int *)(local_74 + *param_1) >> 2 <
          param_3 + iVar40 + iVar27) {
        FUN_0400a810("targetOffset + numOfAudioSamplesNeeded + paddingToCopy <= (signed) data.channels[channel].size()"
                     ,
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2dsp.cpp"
                     ,0x16a,"void Dsp::ChangeSampleRate(PcmData&, float, int)");
      }
      if ((int)DAT_044fa97c - (int)DAT_044fa978 >> 2 < iVar31 + 8 + param_3) {
        FUN_0400a810("sourceOffset + numOfAudioSamplesNeeded + kNumOfPaddingSamples <= (signed) conversionBuffer.size()"
                     ,
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2dsp.cpp"
                     ,0x16b,"void Dsp::ChangeSampleRate(PcmData&, float, int)");
      }
      memcpy((void *)(*(int *)(*param_1 + local_74) + iVar40 * 4),DAT_044fa978 + iVar31,
             (iVar27 + param_3) * 4);
      local_7c = local_7c + 1;
      local_74 = local_74 + 0xc;
      iVar29 = *param_1;
    } while (local_7c < (param_1[1] - iVar29 >> 2) * -0x55555555);
  }
  return;
}

// --- Dsp::Mix @0x04104670 ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* source: audioallocator, xaudio2dsp, xaudio2helpers */

void Dsp__Mix(int *param_1,int *param_2,uint param_3,int param_4)

{
  float *pfVar1;
  undefined1 (*pauVar2) [16];
  float fVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  undefined4 *puVar22;
  float fVar23;
  undefined1 auVar24 [16];
  int local_58;
  uint local_4c;
  int local_30;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  
  if (param_2[1] == *param_2) {
    FUN_0400a810("!source.channels.empty()",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2dsp.cpp"
                 ,0x119,"void Dsp::Mix(PcmData&, const PcmData&, int, const float*)");
  }
  piVar16 = (int *)*param_1;
  uVar17 = (param_1[1] - (int)piVar16 >> 2) * -0x55555555;
  if (param_3 != uVar17) {
    if (piVar16 != (int *)param_1[1]) {
      FUN_0400a810("target.channels.empty()",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2dsp.cpp"
                   ,0x11e,"void Dsp::Mix(PcmData&, const PcmData&, int, const float*)");
    }
    piVar16 = (int *)*param_2;
    if ((param_2[1] - (int)piVar16 >> 2) * -0x55555555 == 0) {
      FUN_0400a810("pcm.channels.size() > 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2helpers.h"
                   ,0x13,"int GetNumOfSamples(const PcmData&)");
      piVar16 = (int *)*param_2;
    }
    local_28 = (undefined4 *)0x0;
    local_24 = (undefined4 *)0x0;
    local_20 = (undefined4 *)0x0;
    iVar21 = piVar16[1] - *piVar16 >> 2;
    if (iVar21 == 0) {
      local_20 = (undefined4 *)0x0;
    }
    else {
      puVar10 = (undefined4 *)memalign(0x10,iVar21 * 4);
      if (puVar10 == (undefined4 *)0x0) {
        FUN_0400a810("memory",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/audioallocator.h"
                     ,0x4b,
                     "T* AudioAllocator<T>::allocate(AudioAllocator<T>::size_type, const void*) [with T = float, AudioAllocator<T>::pointer = float*, AudioAllocator<T>::size_type = unsigned int]"
                    );
      }
      bzero(puVar10,iVar21 * 4);
      local_20 = puVar10 + iVar21;
      puVar11 = puVar10;
      do {
        if (puVar11 != (undefined4 *)0x0) {
          *puVar11 = 0;
        }
        puVar11 = puVar11 + 1;
        iVar21 = iVar21 + -1;
        local_28 = puVar10;
      } while (iVar21 != 0);
    }
    puVar10 = (undefined4 *)param_1[1];
    uVar17 = ((int)puVar10 - *param_1 >> 2) * -0x55555555;
    local_24 = local_20;
    if (uVar17 < param_3) {
                    /* try { // try from 04104a92 to 04104a96 has its CatchHandler @ 04104cc1 */
      audioallocator_04103eb0(&local_28);
    }
    else if (param_3 < uVar17) {
      puVar11 = (undefined4 *)(*param_1 + param_3 * 0xc);
      for (puVar22 = puVar11; puVar10 != puVar22; puVar22 = puVar22 + 3) {
        if ((void *)*puVar22 != (void *)0x0) {
          free((void *)*puVar22);
        }
      }
      param_1[1] = (int)puVar11;
    }
    if (local_28 == (undefined4 *)0x0) {
      piVar16 = (int *)*param_1;
      uVar17 = (param_1[1] - (int)piVar16 >> 2) * -0x55555555;
    }
    else {
      free(local_28);
      piVar16 = (int *)*param_1;
      uVar17 = (param_1[1] - (int)piVar16 >> 2) * -0x55555555;
    }
  }
  if (uVar17 == 0) {
    FUN_0400a810("pcm.channels.size() > 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2helpers.h"
                 ,0x13,"int GetNumOfSamples(const PcmData&)");
    piVar16 = (int *)*param_1;
  }
  piVar18 = (int *)*param_2;
  uVar17 = piVar16[1] - *piVar16 >> 2;
  if ((param_2[1] - (int)piVar18 >> 2) * -0x55555555 == 0) {
    FUN_0400a810("pcm.channels.size() > 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2helpers.h"
                 ,0x13,"int GetNumOfSamples(const PcmData&)");
    piVar18 = (int *)*param_2;
  }
  if (uVar17 != piVar18[1] - *piVar18 >> 2) {
    FUN_0400a810("GetNumOfSamples( source ) == numOfSamples",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2dsp.cpp"
                 ,0x123,"void Dsp::Mix(PcmData&, const PcmData&, int, const float*)");
  }
  if (param_4 == 0) {
    iVar21 = param_2[1] - *param_2 >> 2;
    if ((DAT_044fa920 == '\0') && (iVar14 = __cxa_guard_acquire(&DAT_044fa920), iVar14 != 0)) {
      _DAT_044fa940 = powf(10.0,-0.15);
      _DAT_044fa948 = powf(10.0,-0.3);
      _DAT_044fa94c = powf(10.0,-0.45);
      _DAT_044fa950 = powf(10.0,-0.3);
      _DAT_044fa95c = powf(10.0,-0.15);
      _DAT_044fa960 = powf(10.0,-0.3);
      _DAT_044fa964 = powf(10.0,-0.45);
      _DAT_044fa96c = powf(10.0,-0.3);
      __cxa_guard_release(&DAT_044fa920);
    }
    if (6 < iVar21 * -0x55555555) {
      FUN_0400a810("inputChannels <= 6",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2dsp.cpp"
                   ,0x10b,"const float* {anonymous}::GetDefaultMixMatrix(int, int)");
    }
    if (6 < (int)param_3) {
      FUN_0400a810("outputChannels <= 6",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2dsp.cpp"
                   ,0x10c,"const float* {anonymous}::GetDefaultMixMatrix(int, int)");
    }
    param_4 = *(int *)(&DAT_0430fe20 + ((param_3 - 1) + (iVar21 + -3) * 2) * 4);
    if (param_4 == 0) {
      FUN_0400a810("mixMatrix && \"Not supported mixing configuration\"",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2dsp.cpp"
                   ,0x10f,"const float* {anonymous}::GetDefaultMixMatrix(int, int)");
      FUN_0400a810("mixMatrix",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2dsp.cpp"
                   ,0x128,"void Dsp::Mix(PcmData&, const PcmData&, int, const float*)");
    }
  }
  fVar6 = DAT_042dbf3c;
  if (0 < (int)param_3) {
    local_58 = 0;
    iVar21 = *param_2;
    local_4c = 0;
    iVar14 = *param_1;
    iVar12 = (param_2[1] - iVar21 >> 2) * -0x55555555;
    uVar15 = uVar17 & 0xfffffff4;
    do {
      if (0 < iVar12) {
        local_30 = 0;
        iVar20 = 0;
LAB_04104912:
        do {
          auVar9 = _DAT_04310080;
          auVar8 = _DAT_04310070;
          fVar3 = *(float *)(param_4 + (iVar12 * local_4c + iVar20) * 4);
          if (fVar3 != 0.0) {
            piVar16 = (int *)(iVar21 + local_30);
            if (0 < (int)uVar15) {
              iVar4 = *piVar16;
              iVar5 = *(int *)(iVar14 + local_58);
              iVar13 = 0;
              do {
                pfVar1 = (float *)(iVar4 + iVar13 * 4);
                pauVar2 = (undefined1 (*) [16])(iVar5 + iVar13 * 4);
                iVar13 = iVar13 + 4;
                auVar24._4_4_ = pfVar1[1] * fVar3 + *(float *)(*pauVar2 + 4);
                auVar24._0_4_ = *pfVar1 * fVar3 + *(float *)*pauVar2;
                auVar24._8_4_ = pfVar1[2] * fVar3 + *(float *)(*pauVar2 + 8);
                auVar24._12_4_ = pfVar1[3] * fVar3 + *(float *)(*pauVar2 + 0xc);
                auVar24 = maxps(auVar8,auVar24);
                auVar24 = minps(auVar9,auVar24);
                *pauVar2 = auVar24;
              } while (iVar13 < (int)uVar15);
            }
            fVar7 = DAT_042e6f58;
            if ((int)uVar15 < (int)uVar17) {
              iVar4 = *(int *)(iVar14 + local_58);
              iVar5 = *piVar16;
              iVar13 = uVar15 << 2;
              uVar19 = uVar15;
              do {
                while( true ) {
                  pfVar1 = (float *)(iVar4 + iVar13);
                  fVar23 = *(float *)(iVar5 + iVar13) * fVar3 + *pfVar1;
                  if (fVar23 < fVar6) break;
                  uVar19 = uVar19 + 1;
                  iVar13 = iVar13 + 4;
                  *pfVar1 = fVar6;
                  if ((int)uVar17 <= (int)uVar19) goto LAB_041049f0;
                }
                if (fVar23 <= fVar7) {
                  fVar23 = fVar7;
                }
                uVar19 = uVar19 + 1;
                iVar13 = iVar13 + 4;
                *pfVar1 = fVar23;
              } while ((int)uVar19 < (int)uVar17);
LAB_041049f0:
              local_30 = local_30 + 0xc;
              iVar20 = iVar20 + 1;
              if (iVar12 <= iVar20) break;
              goto LAB_04104912;
            }
          }
          local_30 = local_30 + 0xc;
          iVar20 = iVar20 + 1;
        } while (iVar20 < iVar12);
      }
      local_4c = local_4c + 1;
      local_58 = local_58 + 0xc;
    } while (local_4c != param_3);
  }
  return;
}

// --- Dsp::ProcessEffect @0x04104ce0 ---
/* source: audioallocator, xaudio2dsp, xaudio2helpers */

void Dsp__ProcessEffect(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  undefined4 *puVar13;
  bool bVar14;
  int local_9c;
  int local_98;
  int local_90;
  undefined2 local_84;
  undefined2 local_82;
  int local_80;
  int local_7c;
  undefined2 local_78;
  undefined2 local_76;
  undefined2 local_74;
  undefined2 local_72;
  undefined2 local_70;
  int local_6e;
  int local_6a;
  undefined2 local_66;
  undefined2 local_64;
  undefined2 local_62;
  void *local_60;
  void *local_5c;
  undefined4 local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  void *local_48;
  undefined4 local_44;
  int local_40;
  void *local_3c;
  undefined4 local_38;
  int local_34;
  undefined2 *local_30;
  int local_2c;
  undefined2 *local_28;
  int local_24;
  int *local_20 [4];
  
  local_20[0] = (int *)0x0;
  iVar2 = (*(code *)**(undefined4 **)*param_1)((undefined4 *)*param_1,&DAT_042dafc8,local_20);
  if ((iVar2 < 0) || (local_20[0] == (int *)0x0)) {
    FUN_0400a810("((HRESULT)(result) >= 0) && xapoEffect",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2dsp.cpp"
                 ,0x185,
                 "void Dsp::ProcessEffect(const XAUDIO2_EFFECT_DESCRIPTOR&, const PcmFormat&, PcmData&)"
                );
  }
  local_60 = (void *)0x0;
  local_5c = (void *)0x0;
  local_58 = 0;
  local_9c = param_3[1];
  piVar7 = (int *)*param_3;
  uVar11 = 0;
  iVar2 = (local_9c - (int)piVar7 >> 2) * -0x55555555;
  if (iVar2 == 0) {
    FUN_0400a810("pcm.channels.size() > 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2helpers.h"
                 ,0x13,"int GetNumOfSamples(const PcmData&)");
    local_9c = param_3[1];
    piVar7 = (int *)*param_3;
    uVar11 = (int)local_5c - (int)local_60 >> 2;
    uVar3 = (piVar7[1] - *piVar7 >> 2) * (local_9c - (int)piVar7 >> 2) * -0x55555555;
    bVar14 = uVar3 < uVar11;
    uVar9 = uVar3;
    if (!bVar14 && uVar3 - uVar11 != 0) goto LAB_0410526e;
  }
  else {
    uVar3 = (piVar7[1] - *piVar7 >> 2) * iVar2;
    bVar14 = false;
    uVar9 = 0;
    if (uVar3 != 0) {
LAB_0410526e:
      audioallocator_04105480(&local_60,uVar3 - uVar11);
      local_9c = param_3[1];
      piVar7 = (int *)*param_3;
      goto LAB_04104d79;
    }
  }
  if (bVar14) {
    local_5c = (void *)((int)local_60 + uVar9 * 4);
  }
LAB_04104d79:
  local_98 = 0;
  while( true ) {
    iVar2 = local_9c - (int)piVar7;
    local_90 = (iVar2 >> 2) * -0x55555555;
    if (local_90 == 0) {
                    /* try { // try from 04104e2f to 0410536c has its CatchHandler @ 0410545c */
      FUN_0400a810("pcm.channels.size() > 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2helpers.h"
                   ,0x13,"int GetNumOfSamples(const PcmData&)");
      local_9c = param_3[1];
      piVar7 = (int *)*param_3;
      iVar2 = local_9c - (int)piVar7;
      local_90 = (iVar2 >> 2) * -0x55555555;
      local_24 = piVar7[1] - *piVar7;
    }
    else {
      local_24 = piVar7[1] - *piVar7;
    }
    local_24 = local_24 >> 2;
    if (local_24 <= local_98) break;
    if (0xb < iVar2) {
      iVar8 = 0;
      iVar4 = 0;
      iVar2 = local_98 * 4;
      do {
        piVar1 = (int *)((int)piVar7 + iVar8);
        iVar4 = iVar4 + 1;
        iVar8 = iVar8 + 0xc;
        *(undefined4 *)((int)local_60 + iVar2) = *(undefined4 *)(*piVar1 + local_98 * 4);
        iVar2 = iVar2 + 4;
      } while (iVar4 < local_90);
    }
    local_98 = local_98 + 1;
  }
  local_84 = 3;
  local_76 = 0x20;
  local_74 = 0;
  local_72 = 3;
  iVar2 = param_2[1];
  local_64 = 0x20;
  local_80 = *param_2;
  local_62 = 0;
  local_82 = (undefined2)iVar2;
  local_7c = iVar2 * 4 * local_80;
  local_78 = (undefined2)(iVar2 << 2);
  iVar2 = param_1[2];
  local_70 = (undefined2)iVar2;
  local_6a = local_80 * iVar2 * 4;
  local_66 = (undefined2)(iVar2 << 2);
  local_30 = &local_84;
  local_6e = local_80;
  if (local_90 == 0) {
    FUN_0400a810("pcm.channels.size() > 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2helpers.h"
                 ,0x13,"int GetNumOfSamples(const PcmData&)");
    piVar7 = (int *)*param_3;
    local_90 = (param_3[1] - (int)piVar7 >> 2) * -0x55555555;
    local_24 = piVar7[1] - *piVar7 >> 2;
  }
  local_28 = &local_72;
  local_2c = local_24;
  if (local_90 == 0) {
    FUN_0400a810("pcm.channels.size() > 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2helpers.h"
                 ,0x13,"int GetNumOfSamples(const PcmData&)");
    local_24 = ((int *)*param_3)[1] - *(int *)*param_3 >> 2;
  }
  (**(code **)(*local_20[0] + 0x20))(local_20[0],1,&local_30,1,&local_28);
  local_44 = 1;
  local_48 = local_60;
  piVar7 = (int *)*param_3;
  if ((param_3[1] - (int)piVar7 >> 2) * -0x55555555 == 0) {
    FUN_0400a810("pcm.channels.size() > 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2helpers.h"
                 ,0x13,"int GetNumOfSamples(const PcmData&)");
    piVar7 = (int *)*param_3;
  }
  local_40 = piVar7[1] - *piVar7 >> 2;
  if (param_1[2] != param_2[1]) {
    FUN_0400a810("effect.OutputChannels == (UINT32) inputFormat.numOfChannels && \"Effects that change number of channels not supported yet!\""
                 ,
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2dsp.cpp"
                 ,0x1a8,
                 "void Dsp::ProcessEffect(const XAUDIO2_EFFECT_DESCRIPTOR&, const PcmFormat&, PcmData&)"
                );
    piVar7 = (int *)*param_3;
  }
  local_38 = 1;
  local_3c = local_48;
  if ((param_3[1] - (int)piVar7 >> 2) * -0x55555555 == 0) {
    FUN_0400a810("pcm.channels.size() > 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2helpers.h"
                 ,0x13,"int GetNumOfSamples(const PcmData&)");
    piVar7 = (int *)*param_3;
  }
  local_34 = piVar7[1] - *piVar7 >> 2;
  (**(code **)(*local_20[0] + 0x28))(local_20[0],1,&local_48,1,&local_3c,1);
  (**(code **)(*local_20[0] + 0x24))(local_20[0]);
  piVar7 = (int *)*param_3;
  if ((param_3[1] - (int)piVar7 >> 2) * -0x55555555 == 0) {
    FUN_0400a810("pcm.channels.size() > 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2helpers.h"
                 ,0x13,"int GetNumOfSamples(const PcmData&)");
    piVar7 = (int *)*param_3;
  }
  local_54 = (undefined4 *)0x0;
  local_50 = (undefined4 *)0x0;
  local_4c = (undefined4 *)0x0;
  iVar2 = piVar7[1] - *piVar7 >> 2;
  if (iVar2 == 0) {
    local_4c = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)memalign(0x10,iVar2 * 4);
    if (puVar5 == (undefined4 *)0x0) {
                    /* try { // try from 04105438 to 0410543c has its CatchHandler @ 0410545c */
      FUN_0400a810("memory",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/audioallocator.h"
                   ,0x4b,
                   "T* AudioAllocator<T>::allocate(AudioAllocator<T>::size_type, const void*) [with T = float, AudioAllocator<T>::pointer = float*, AudioAllocator<T>::size_type = unsigned int]"
                  );
    }
    puVar13 = puVar5 + iVar2;
    bzero(puVar5,iVar2 * 4);
    puVar6 = puVar5;
    do {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0;
      }
      puVar6 = puVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    piVar7 = (int *)*param_3;
    local_54 = puVar5;
    local_4c = puVar13;
  }
  uVar11 = param_1[2];
  piVar1 = (int *)param_3[1];
  uVar9 = ((int)piVar1 - (int)piVar7 >> 2) * -0x55555555;
  local_50 = local_4c;
  if (uVar9 < uVar11) {
                    /* try { // try from 0410540c to 04105410 has its CatchHandler @ 04105442 */
    audioallocator_04103eb0(&local_54);
  }
  else if (uVar11 < uVar9) {
    for (piVar12 = piVar7 + uVar11 * 3; piVar1 != piVar12; piVar12 = piVar12 + 3) {
      if ((void *)*piVar12 != (void *)0x0) {
        free((void *)*piVar12);
      }
    }
    param_3[1] = (int)(piVar7 + uVar11 * 3);
  }
  if (local_54 != (undefined4 *)0x0) {
    free(local_54);
  }
  local_9c = 0;
  piVar7 = (int *)*param_3;
  if ((param_3[1] - (int)piVar7 >> 2) * -0x55555555 == 0) goto LAB_041051a8;
  while (local_9c < piVar7[1] - *piVar7 >> 2) {
    while( true ) {
      iVar2 = param_3[1];
      iVar4 = iVar2 - (int)piVar7;
      if (0xb < iVar4) {
        iVar10 = 0;
        local_90 = 0;
        iVar8 = local_9c * 4;
        do {
          piVar1 = (int *)((int)piVar7 + iVar10);
          iVar10 = iVar10 + 0xc;
          puVar5 = (undefined4 *)((int)local_60 + iVar8);
          iVar8 = iVar8 + 4;
          local_90 = local_90 + 1;
          *(undefined4 *)(*piVar1 + local_9c * 4) = *puVar5;
        } while (local_90 < (iVar4 >> 2) * -0x55555555);
      }
      local_9c = local_9c + 1;
      if ((iVar2 - (int)piVar7 >> 2) * -0x55555555 != 0) break;
LAB_041051a8:
      FUN_0400a810("pcm.channels.size() > 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2helpers.h"
                   ,0x13,"int GetNumOfSamples(const PcmData&)");
      piVar7 = (int *)*param_3;
      if (piVar7[1] - *piVar7 >> 2 <= local_9c) goto LAB_041051e5;
    }
  }
LAB_041051e5:
  (**(code **)(*local_20[0] + 8))(local_20[0]);
  if (local_60 != (void *)0x0) {
    free(local_60);
  }
  return;
}

// --- XAudio2SourceVoiceImp::CopyPcm @0x04109ad0 ---
/* source: audioallocator, xaudio2helpers, xaudio2sourcevoiceimpl */

void XAudio2SourceVoiceImp__CopyPcm(int *param_1)

{
  uint *puVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int **ppiVar15;
  uint *puVar16;
  undefined4 *puVar17;
  int iVar18;
  undefined1 local_a4 [4];
  undefined4 local_a0;
  int *local_9c;
  undefined4 local_98;
  int *local_8c;
  int *local_88;
  uint local_84;
  int *local_80;
  int *local_7c;
  int *local_78;
  int *local_74;
  uint local_70;
  int *local_6c;
  int local_68;
  int *local_64;
  uint local_60;
  int *local_5c;
  undefined4 **local_58;
  int *local_54;
  int *local_50;
  int local_40;
  int local_3c;
  undefined4 local_38;
  int *local_34;
  int *local_30;
  int local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  int local_20;
  
  ppiVar15 = &local_9c;
  if (param_1[0x52] == param_1[0x4e]) {
    if ((char)param_1[0x5e] == '\0') {
      return;
    }
    local_9c = (int *)param_1[0x5c];
    *(undefined1 *)(param_1 + 0x5e) = 0;
    if (local_9c == (int *)0x0) {
      return;
    }
    local_a0 = 0x410a609;
    (**(code **)(*local_9c + 8))();
    return;
  }
  piVar7 = (int *)param_1[0x5c];
  if (piVar7 != (int *)0x0) {
    local_98 = 0;
    local_a0 = 0x4109b0a;
    local_9c = piVar7;
    (**(code **)*piVar7)();
    ppiVar15 = (int **)local_a4;
  }
  iVar12 = *param_1;
  *ppiVar15 = param_1;
  pcVar2 = *(code **)(iVar12 + 0x54);
  ppiVar15[-1] = (int *)0x4109b15;
  local_60 = (*pcVar2)();
  piVar7 = (int *)param_1[0x57];
  piVar13 = (int *)param_1[0x56];
  local_68 = param_1[0x4e];
  if (piVar7 == piVar13) {
    iVar12 = param_1[0x4b];
    if (iVar12 == 0) {
      local_5c = (int *)0x0;
      uVar9 = *(uint *)(local_68 + 4);
      iVar12 = *(int *)(local_68 + 8);
      piVar7 = (int *)ppiVar15;
    }
    else {
      ppiVar15[3] = (int *)*(int *)(local_68 + 4);
      iVar14 = *(int *)(local_68 + 8);
      ppiVar15[1] = (int *)iVar12;
      *ppiVar15 = &local_40;
      ppiVar15[2] = (int *)iVar14;
      ppiVar15[-1] = (int *)0x410a63c;
      AudioConverter__Convert();
      iVar14 = local_3c;
      iVar12 = local_40;
      local_38 = 0;
      local_40 = 0;
      local_3c = 0;
      local_5c = (int *)iVar12;
      uVar9 = iVar14 - iVar12;
      piVar7 = (int *)(ppiVar15 + -1);
    }
    iVar14 = param_1[0x32];
    piVar7[2] = uVar9 >> 1;
    piVar7[1] = iVar12;
    *piVar7 = (int)&local_34;
    piVar7[3] = iVar14;
                    /* try { // try from 0410a679 to 0410a67d has its CatchHandler @ 0410ac7d */
    piVar7[-1] = 0x410a67e;
    FUN_04103d50();
    piVar13 = (int *)param_1[0x56];
    ppiVar15 = (int **)(piVar7 + -1);
    piVar6 = (int *)param_1[0x57];
    if (piVar13 != piVar6) {
      local_50 = param_1;
      piVar10 = piVar13;
      do {
        if (*piVar10 != 0) {
          piVar7[-1] = *piVar10;
          piVar7[-2] = 0x410a6ae;
          free((void *)piVar7[-1]);
        }
        piVar10 = piVar10 + 3;
        param_1 = local_50;
      } while (piVar6 != piVar10);
    }
    piVar6 = (int *)param_1[0x56];
    param_1[0x56] = (int)local_34;
    param_1[0x57] = (int)local_30;
    iVar12 = param_1[0x58];
    param_1[0x58] = local_2c;
    local_30 = piVar13;
    local_34 = piVar6;
    local_2c = iVar12;
    for (; piVar13 != piVar6; piVar6 = piVar6 + 3) {
      if (*piVar6 != 0) {
        piVar7[-1] = *piVar6;
        piVar7[-2] = 0x410a6fe;
        free((void *)piVar7[-1]);
      }
    }
    if (local_34 != (int *)0x0) {
      piVar7[-1] = (int)local_34;
      piVar7[-2] = 0x410a714;
      operator_delete((void *)piVar7[-1]);
    }
    if (local_5c != (int *)0x0) {
      piVar7[-1] = (int)local_5c;
      piVar7[-2] = 0x410a726;
      operator_delete((void *)piVar7[-1]);
    }
    piVar13 = (int *)param_1[0x56];
    piVar7 = (int *)param_1[0x57];
  }
  iVar12 = *(int *)(local_68 + 0x14);
  if (iVar12 == 0) {
    iVar12 = *(int *)(local_68 + 0xc);
  }
  if (((int)piVar7 - (int)piVar13 >> 2) * -0x55555555 == 0) {
    ppiVar15[3] = (int *)"int GetNumOfSamples(const PcmData&)";
    ppiVar15[2] = (int *)0x13;
    ppiVar15[1] = (int *)
                  "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2helpers.h"
    ;
    *ppiVar15 = (int *)"pcm.channels.size() > 0";
    ppiVar15[-1] = (int *)0x4109b73;
    FUN_0400a810();
    piVar13 = (int *)param_1[0x56];
  }
  local_5c = (int *)(piVar13[1] - *piVar13 >> 2);
  piVar7 = *(int **)(local_68 + 0x18);
  piVar6 = (int *)ppiVar15;
  if (piVar7 == (int *)0x0) {
    piVar7 = *(int **)(local_68 + 0x10);
    if (piVar7 == (int *)0x0) {
      iVar14 = param_1[0x5d];
    }
    else {
      if ((param_1[0x57] - (int)piVar13 >> 2) * -0x55555555 == 0) {
        ppiVar15[3] = (int *)"int GetNumOfSamples(const PcmData&)";
        ppiVar15[2] = (int *)0x13;
        ppiVar15[1] = (int *)
                      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2helpers.h"
        ;
        *ppiVar15 = (int *)"pcm.channels.size() > 0";
        ppiVar15[-1] = (int *)0x410a499;
        FUN_0400a810();
        local_5c = (int *)(((int *)param_1[0x56])[1] - *(int *)param_1[0x56] >> 2);
      }
      if ((int)piVar7 <= (int)local_5c) goto LAB_0410a06a;
      ppiVar15[1] = (int *)"XAUDIO2: PlayLength > BufferSize - playing whole buffer instead";
LAB_0410a4bd:
      *ppiVar15 = (int *)0xa;
      ppiVar15[-1] = (int *)0x410a4c9;
      FUN_0402cd10();
      piVar7 = (int *)param_1[0x56];
      if ((param_1[0x57] - (int)piVar7 >> 2) * -0x55555555 == 0) {
        ppiVar15[3] = (int *)"int GetNumOfSamples(const PcmData&)";
        ppiVar15[2] = (int *)0x13;
        ppiVar15[1] = (int *)
                      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2helpers.h"
        ;
        *ppiVar15 = (int *)"pcm.channels.size() > 0";
        ppiVar15[-1] = (int *)0x410a508;
        FUN_0400a810();
        piVar7 = (int *)param_1[0x56];
      }
      iVar14 = param_1[0x5d];
      local_5c = (int *)(piVar7[1] - *piVar7 >> 2);
    }
    if (iVar14 != 0) goto LAB_04109bad;
LAB_04109fa8:
    piVar7 = (int *)param_1[0x5c];
    if (piVar7 == (int *)0x0) goto LAB_04109bad;
    iVar14 = *piVar7;
    iVar18 = *(int *)(local_68 + 0x20);
    *ppiVar15 = piVar7;
    ppiVar15[1] = (int *)iVar18;
    pcVar2 = *(code **)(iVar14 + 0xc);
    ppiVar15[-1] = (int *)0x4109fc8;
    (*pcVar2)();
    param_1[0x5d] = iVar12;
    puVar16 = (uint *)(ppiVar15 + -2);
    iVar14 = iVar12;
    piVar6 = (int *)(ppiVar15 + -2);
    if (iVar12 < (int)local_5c) goto LAB_04109bad;
    ppiVar15[-1] = (int *)"XAUDIO2: PlayBegin >= PlayEnd (or BufferSize)";
    ppiVar15[-2] = (int *)0xa;
    ppiVar15[-3] = (int *)0x4109ff0;
    FUN_0402cd10();
    local_70 = 0;
    param_1[0x5d] = (int)local_5c;
  }
  else {
    if ((param_1[0x57] - (int)piVar13 >> 2) * -0x55555555 == 0) {
      ppiVar15[3] = (int *)"int GetNumOfSamples(const PcmData&)";
      ppiVar15[2] = (int *)0x13;
      ppiVar15[1] = (int *)
                    "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2helpers.h"
      ;
      *ppiVar15 = (int *)"pcm.channels.size() > 0";
      ppiVar15[-1] = (int *)0x410a5b0;
      FUN_0400a810();
      local_5c = (int *)(((int *)param_1[0x56])[1] - *(int *)param_1[0x56] >> 2);
    }
    if ((int)local_5c < (int)piVar7) {
      ppiVar15[1] = (int *)"XAUDIO2: LoopEnd > BufferSize - looping whole buffer instead";
      goto LAB_0410a4bd;
    }
LAB_0410a06a:
    iVar14 = param_1[0x5d];
    local_5c = piVar7;
    if (iVar14 == 0) goto LAB_04109fa8;
LAB_04109bad:
    puVar16 = (uint *)piVar6;
    if ((int)local_5c < iVar14) {
      puVar16[3] = (uint)"void XAudio2SourceVoiceImp::UpdateBuffers()";
      puVar16[2] = 0x151;
      puVar16[1] = (uint)
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2sourcevoiceimpl.cpp"
      ;
      *puVar16 = (uint)"mBufferPosition <= endSample";
      puVar16[-1] = 0x410a034;
      FUN_0400a810();
      local_70 = (int)local_5c - param_1[0x5d];
    }
    else {
      local_70 = (int)local_5c - iVar14;
    }
  }
  local_6c = (int *)param_1[0x32];
  iVar12 = local_60 + 8;
  if (param_1[0x34] != param_1[0x33]) {
    puVar16[3] = (uint)"void XAudio2SourceVoiceImp::ResizePcm(PcmData&, int, int)";
    puVar16[2] = 0x1b1;
    puVar16[1] = (uint)
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2sourcevoiceimpl.cpp"
    ;
    *puVar16 = (uint)"target.channels.empty()";
    puVar16[-1] = 0x4109bff;
    FUN_0400a810();
  }
  puVar17 = (undefined4 *)0x0;
  local_50 = (undefined4 *)0x0;
  if (iVar12 != 0) {
    *puVar16 = 0x10;
    puVar16[1] = iVar12 * 4;
    puVar16[-1] = 0x4109c23;
    local_50 = (int *)memalign();
    if (local_50 == (undefined4 *)0x0) {
      puVar16[3] = (uint)
                   "T* AudioAllocator<T>::allocate(AudioAllocator<T>::size_type, const void*) [with T = float, AudioAllocator<T>::pointer = float*, AudioAllocator<T>::size_type = unsigned int]"
      ;
      puVar16[2] = 0x4b;
      puVar16[1] = (uint)
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/audioallocator.h"
      ;
      *puVar16 = (uint)"memory";
      puVar16[-1] = 0x410a7a5;
      FUN_0400a810();
    }
    puVar16[1] = iVar12 * 4;
    *puVar16 = (uint)local_50;
    puVar16[-1] = 0x4109c3a;
    bzero((void *)*puVar16,puVar16[1]);
    puVar17 = local_50 + iVar12;
    piVar7 = local_50;
    do {
      if (piVar7 != (undefined4 *)0x0) {
        *piVar7 = 0;
      }
      piVar7 = piVar7 + 1;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  piVar7 = (int *)param_1[0x34];
  iVar12 = (int)piVar7 - param_1[0x33] >> 2;
  piVar13 = (int *)(iVar12 * -0x55555555);
  local_64 = piVar7;
  if (local_6c <= piVar13) {
    if (local_6c < piVar13) {
      piVar13 = (int *)(param_1[0x33] + (int)local_6c * 0xc);
      for (piVar6 = piVar13; piVar7 != piVar6; piVar6 = piVar6 + 3) {
        local_54 = param_1;
        if (*piVar6 != 0) {
          *puVar16 = *piVar6;
          puVar16[-1] = 0x410a55e;
          free((void *)*puVar16);
        }
        param_1 = local_54;
      }
      param_1[0x34] = (int)piVar13;
    }
    goto LAB_04109c7b;
  }
  local_7c = (int *)((int)local_6c + iVar12 * 0x55555555);
  if (local_7c == (int *)0x0) goto LAB_04109c7b;
  if (local_7c <= (int *)((param_1[0x35] - (int)piVar7 >> 2) * -0x55555555)) {
    local_28 = (undefined4 *)0x0;
    local_24 = (undefined4 *)0x0;
    local_20 = 0;
    iVar12 = (int)puVar17 - (int)local_50 >> 2;
    if (iVar12 == 0) {
      local_54 = (int *)0x0;
      local_74 = (int *)0x0;
      puVar4 = (undefined4 *)0x0;
      local_6c = piVar7;
    }
    else {
      local_54 = (int *)(iVar12 << 2);
      *puVar16 = 0x10;
      puVar16[1] = (uint)local_54;
      puVar16[-1] = 0x410a7e8;
      puVar4 = (undefined4 *)memalign();
      if (puVar4 == (undefined4 *)0x0) {
        puVar16[3] = (uint)
                     "T* AudioAllocator<T>::allocate(AudioAllocator<T>::size_type, const void*) [with T = float, AudioAllocator<T>::pointer = float*, AudioAllocator<T>::size_type = unsigned int]"
        ;
        puVar16[2] = 0x4b;
        puVar16[1] = (uint)
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/audioallocator.h"
        ;
        *puVar16 = (uint)"memory";
                    /* try { // try from 0410abbc to 0410abe5 has its CatchHandler @ 0410acb9 */
        puVar16[-1] = 0x410abc1;
        FUN_0400a810();
      }
      *puVar16 = (uint)puVar4;
      puVar16[1] = (uint)local_54;
      puVar16[-1] = 0x410a801;
      bzero((void *)*puVar16,puVar16[1]);
      local_74 = (int *)((param_1[0x34] - (int)local_64 >> 2) * -0x55555555);
      local_6c = (int *)param_1[0x34];
    }
    local_28 = puVar4;
    local_20 = (int)local_54 + (int)puVar4;
    puVar5 = puVar4;
    piVar7 = local_50;
    if (puVar17 != local_50) {
      do {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *piVar7;
        }
        piVar7 = piVar7 + 1;
        puVar5 = puVar5 + 1;
      } while (puVar17 != piVar7);
      puVar4 = (undefined4 *)((int)puVar4 + ((int)puVar17 - (int)(local_50 + 1) & 0xfffffffcU) + 4);
    }
    local_24 = puVar4;
    if (local_7c < local_74) {
      piVar6 = local_6c + (int)local_7c * -3;
      piVar13 = local_6c;
      for (piVar7 = piVar6; piVar7 != local_6c; piVar7 = piVar7 + 3) {
        if (piVar13 != (int *)0x0) {
          *piVar13 = 0;
          piVar13[1] = 0;
          piVar13[2] = 0;
          *piVar13 = *piVar7;
          piVar13[1] = piVar7[1];
          piVar13[2] = piVar7[2];
          *piVar7 = 0;
          piVar7[1] = 0;
          piVar7[2] = 0;
        }
        piVar13 = piVar13 + 3;
      }
      iVar12 = ((int)piVar6 - (int)local_64 >> 2) * -0x55555555;
      param_1[0x34] = (int)(local_6c + (int)local_7c * 3);
      piVar7 = local_6c;
      if (0 < iVar12) {
        do {
          piVar13 = piVar7 + -3;
          piVar10 = piVar6 + -3;
          iVar12 = iVar12 + -1;
          piVar7[-2] = *piVar13;
          iVar14 = *piVar13;
          *piVar13 = *piVar10;
          *piVar10 = iVar14;
          iVar14 = piVar7[-2];
          piVar7[-2] = piVar6[-2];
          piVar6[-2] = iVar14;
          iVar14 = piVar7[-1];
          piVar7[-1] = piVar6[-1];
          piVar6[-1] = iVar14;
          piVar7 = piVar13;
          piVar6 = piVar10;
          local_58 = (undefined4 **)param_1;
        } while (iVar12 != 0);
      }
      local_54 = local_64 + (int)local_7c * 3;
      if (local_64 != local_54) {
        piVar7 = local_64;
        do {
          puVar16[1] = (uint)&local_28;
          *puVar16 = (uint)piVar7;
                    /* try { // try from 0410a957 to 0410aafb has its CatchHandler @ 0410ac22 */
          puVar16[-1] = 0x410a95c;
          audioallocator_04105980();
          piVar7 = piVar7 + 3;
        } while (local_54 != piVar7);
      }
    }
    else {
      local_7c = (int *)((int)local_7c - (int)local_74);
      piVar7 = local_6c;
      piVar13 = param_1;
      piVar6 = local_7c;
      if (local_7c != (int *)0x0) {
        do {
          local_54 = piVar6;
          local_78 = piVar13;
          if (piVar7 != (int *)0x0) {
            local_58 = &local_28;
            *piVar7 = 0;
            piVar7[1] = 0;
            piVar7[2] = 0;
            iVar12 = (int)local_24 - (int)local_28 >> 2;
            if (iVar12 == 0) {
              uVar9 = 0;
              piVar13 = (int *)0x0;
            }
            else {
              uVar9 = iVar12 << 2;
              *puVar16 = 0x10;
              puVar16[1] = uVar9;
              puVar16[-1] = 0x410a9f6;
              piVar13 = (int *)memalign();
              if (piVar13 == (int *)0x0) {
                puVar16[3] = (uint)
                             "T* AudioAllocator<T>::allocate(AudioAllocator<T>::size_type, const void*) [with T = float, AudioAllocator<T>::pointer = float*, AudioAllocator<T>::size_type = unsigned int]"
                ;
                puVar16[2] = 0x4b;
                puVar16[1] = (uint)
                             "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/audioallocator.h"
                ;
                *puVar16 = (uint)"memory";
                    /* try { // try from 0410ab31 to 0410ab35 has its CatchHandler @ 0410abf8 */
                puVar16[-1] = 0x410ab36;
                FUN_0400a810();
              }
              puVar16[1] = uVar9;
              *puVar16 = (uint)piVar13;
              puVar16[-1] = 0x410aa0c;
              bzero((void *)*puVar16,puVar16[1]);
            }
            *piVar7 = (int)piVar13;
            piVar7[1] = (int)piVar13;
            piVar7[2] = uVar9 + (int)piVar13;
            piVar6 = *local_58;
            piVar10 = local_58[1];
            piVar8 = piVar13;
            piVar11 = piVar6;
            if (piVar10 != piVar6) {
              do {
                if (piVar8 != (int *)0x0) {
                  *piVar8 = *piVar11;
                }
                piVar11 = piVar11 + 1;
                piVar8 = piVar8 + 1;
              } while (piVar10 != piVar11);
              piVar13 = (int *)((int)piVar13 + ((int)piVar10 - (int)(piVar6 + 1) & 0xfffffffcU) + 4)
              ;
            }
            piVar7[1] = (int)piVar13;
            local_58 = (undefined4 **)piVar6;
          }
          piVar7 = piVar7 + 3;
          piVar13 = local_78;
          piVar6 = (int *)((int)local_54 + -1);
        } while ((int *)((int)local_54 + -1) != (int *)0x0);
        local_54 = (int *)0x0;
        piVar7 = (int *)local_78[0x34];
        param_1 = local_78;
      }
      piVar7 = piVar7 + (int)local_7c * 3;
      param_1[0x34] = (int)piVar7;
      piVar13 = piVar7;
      piVar6 = local_64;
      if (local_64 == local_6c) {
        param_1[0x34] = (int)(piVar7 + (int)local_74 * 3);
      }
      else {
        do {
          if (piVar13 != (int *)0x0) {
            *piVar13 = 0;
            piVar13[1] = 0;
            piVar13[2] = 0;
            *piVar13 = *piVar6;
            piVar13[1] = piVar6[1];
            piVar13[2] = piVar6[2];
            *piVar6 = 0;
            piVar6[1] = 0;
            piVar6[2] = 0;
          }
          piVar6 = piVar6 + 3;
          piVar13 = piVar13 + 3;
        } while (piVar6 != local_6c);
        param_1[0x34] = (int)(piVar7 + (int)local_74 * 3);
        piVar7 = local_64;
        do {
          puVar16[1] = (uint)&local_28;
          *puVar16 = (uint)piVar7;
          puVar16[-1] = 0x410aafc;
          audioallocator_04105980();
          piVar7 = piVar7 + 3;
        } while (local_6c != piVar7);
      }
    }
    if (local_28 != (undefined4 *)0x0) {
      *puVar16 = (uint)local_28;
      puVar16[-1] = 0x410a977;
      free((void *)*puVar16);
    }
    goto LAB_04109c7b;
  }
  if ((int *)(iVar12 * 0x55555555 + 0x15555555) < local_7c) {
    *puVar16 = (uint)"vector::_M_fill_insert";
                    /* WARNING: Subroutine does not return */
    puVar16[-1] = 0x410abe6;
    std::__throw_length_error((char *)*puVar16);
  }
  iVar14 = -4;
  local_84 = 0x15555555;
  piVar7 = local_7c;
  if (local_7c < piVar13) {
    piVar7 = piVar13;
  }
  uVar9 = (int)piVar7 + (int)piVar13;
  if ((CARRY4((uint)piVar7,(uint)piVar13)) || (0x15555555 < uVar9)) {
LAB_0410a0e0:
    *puVar16 = iVar14;
                    /* try { // try from 0410a0e3 to 0410a0e7 has its CatchHandler @ 0410acb9 */
    puVar16[-1] = 0x410a0e8;
    local_80 = operator_new(*puVar16);
  }
  else {
    if (uVar9 != 0) {
      iVar14 = uVar9 * 0xc;
      local_84 = uVar9;
      goto LAB_0410a0e0;
    }
    local_80 = (int *)0x0;
    local_84 = 0;
  }
  piVar7 = local_80 + iVar12;
  local_74 = (int *)((int)puVar17 - (int)local_50 >> 2);
  local_58 = (undefined4 **)((int)local_74 << 2);
  local_54 = local_7c;
  local_78 = (int *)((int)puVar17 - (int)(local_50 + 1));
  local_8c = param_1;
  local_88 = piVar7;
  do {
    if (piVar7 != (int *)0x0) {
      *piVar7 = 0;
      piVar7[1] = 0;
      piVar7[2] = 0;
      if (local_74 == (int *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        *puVar16 = 0x10;
        puVar16[1] = (uint)local_58;
        puVar16[-1] = 0x410a162;
        puVar4 = (undefined4 *)memalign();
        if (puVar4 == (undefined4 *)0x0) {
          puVar16[3] = (uint)
                       "T* AudioAllocator<T>::allocate(AudioAllocator<T>::size_type, const void*) [with T = float, AudioAllocator<T>::pointer = float*, AudioAllocator<T>::size_type = unsigned int]"
          ;
          puVar16[2] = 0x4b;
          puVar16[1] = (uint)
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/audioallocator.h"
          ;
          *puVar16 = (uint)"memory";
                    /* try { // try from 0410a759 to 0410a75d has its CatchHandler @ 0410ac4d */
          puVar16[-1] = 0x410a75e;
          FUN_0400a810();
        }
        *puVar16 = (uint)puVar4;
        puVar16[1] = (uint)local_58;
        puVar16[-1] = 0x410a17b;
        bzero((void *)*puVar16,puVar16[1]);
      }
      *piVar7 = (int)puVar4;
      piVar7[1] = (int)puVar4;
      piVar7[2] = (int)local_58 + (int)puVar4;
      puVar5 = puVar4;
      piVar13 = local_50;
      if (puVar17 != local_50) {
        do {
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = *piVar13;
          }
          piVar13 = piVar13 + 1;
          puVar5 = puVar5 + 1;
        } while (puVar17 != piVar13);
        puVar4 = (undefined4 *)((int)puVar4 + ((uint)local_78 & 0xfffffffc) + 4);
      }
      piVar7[1] = (int)puVar4;
    }
    param_1 = local_8c;
    piVar7 = piVar7 + 3;
    local_54 = (int *)((int)local_54 + -1);
  } while (local_54 != (int *)0x0);
  piVar7 = (int *)local_8c[0x33];
  piVar13 = local_80;
  local_54 = local_80;
  piVar6 = piVar7;
  if (local_64 != piVar7) {
    do {
      if (piVar13 != (int *)0x0) {
        *piVar13 = 0;
        piVar13[1] = 0;
        piVar13[2] = 0;
        *piVar13 = *piVar6;
        piVar13[1] = piVar6[1];
        piVar13[2] = piVar6[2];
        *piVar6 = 0;
        piVar6[1] = 0;
        piVar6[2] = 0;
      }
      piVar6 = piVar6 + 3;
      piVar13 = piVar13 + 3;
    } while (local_64 != piVar6);
    local_54 = (int *)((int)local_80 + ((int)local_64 - (int)(piVar7 + 3) & 0xfffffffcU) + 0xc);
  }
  piVar13 = (int *)local_8c[0x34];
  local_54 = local_54 + (int)local_7c * 3;
  piVar6 = local_54;
  piVar10 = local_64;
  if (local_64 != piVar13) {
    do {
      if (piVar6 != (int *)0x0) {
        *piVar6 = 0;
        piVar6[1] = 0;
        piVar6[2] = 0;
        *piVar6 = *piVar10;
        piVar6[1] = piVar10[1];
        piVar6[2] = piVar10[2];
        *piVar10 = 0;
        piVar10[1] = 0;
        piVar10[2] = 0;
      }
      piVar10 = piVar10 + 3;
      piVar6 = piVar6 + 3;
    } while (piVar13 != piVar10);
    local_54 = (int *)((int)local_54 + ((int)piVar13 - (int)(local_64 + 3) & 0xfffffffcU) + 0xc);
  }
  if (piVar7 != piVar13) {
    do {
      if (*piVar7 != 0) {
        *puVar16 = *piVar7;
        puVar16[-1] = 0x410a2de;
        free((void *)*puVar16);
      }
      piVar7 = piVar7 + 3;
    } while (piVar13 != piVar7);
    piVar7 = (int *)param_1[0x33];
  }
  if (piVar7 != (int *)0x0) {
    *puVar16 = (uint)piVar7;
    puVar16[-1] = 0x410a2f7;
    operator_delete((void *)*puVar16);
  }
  param_1[0x33] = (int)local_80;
  param_1[0x34] = (int)local_54;
  param_1[0x35] = (int)(local_80 + local_84 * 3);
LAB_04109c7b:
  if (local_50 != (undefined4 *)0x0) {
    *puVar16 = (uint)local_50;
    puVar16[-1] = 0x4109c8d;
    free((void *)*puVar16);
  }
  if ((int)local_70 <= (int)local_60) {
    local_60 = local_70;
  }
  iVar12 = param_1[0x5d];
  iVar14 = iVar12 + -4;
  if (iVar14 < 0) {
    iVar14 = 0;
  }
  local_58 = (undefined4 **)0;
  if (-1 < 4 - iVar12) {
    local_58 = (undefined4 **)(4 - iVar12);
  }
  iVar18 = 4;
  if (iVar12 < 5) {
    iVar18 = iVar12;
  }
  iVar12 = (int)local_5c + (-iVar12 - local_60);
  if (4 < iVar12) {
    iVar12 = 4;
  }
  uVar9 = iVar12 + iVar18 + local_60;
  local_50 = (int *)((int)local_5c - iVar14);
  if ((int)uVar9 <= (int)local_5c - iVar14) {
    local_50 = (int *)uVar9;
  }
  piVar7 = (int *)param_1[0x56];
  local_54 = (int *)((int)local_50 + iVar14);
  if ((param_1[0x57] - (int)piVar7 >> 2) * -0x55555555 == 0) {
    puVar16[3] = (uint)"int GetNumOfSamples(const PcmData&)";
    puVar16[2] = 0x13;
    puVar16[1] = (uint)
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2helpers.h"
    ;
    *puVar16 = (uint)"pcm.channels.size() > 0";
    puVar16[-1] = 0x4109d25;
    FUN_0400a810();
    piVar7 = (int *)param_1[0x56];
  }
  if (piVar7[1] - *piVar7 >> 2 < (int)local_54) {
    puVar16[3] = (uint)"void XAudio2SourceVoiceImp::UpdateBuffers()";
    puVar16[2] = 0x15d;
    puVar16[1] = (uint)
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2sourcevoiceimpl.cpp"
    ;
    *puVar16 = (uint)"sourceOffset + toCopy <= GetNumOfSamples( currentPcm )";
    puVar16[-1] = 0x410a374;
    FUN_0400a810();
  }
  local_64 = (int *)((int)local_58 + (int)local_50);
  piVar7 = (int *)param_1[0x33];
  if ((param_1[0x34] - (int)piVar7 >> 2) * -0x55555555 == 0) {
    puVar16[3] = (uint)"int GetNumOfSamples(const PcmData&)";
    puVar16[2] = 0x13;
    puVar16[1] = (uint)
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2helpers.h"
    ;
    *puVar16 = (uint)"pcm.channels.size() > 0";
    puVar16[-1] = 0x4109d84;
    FUN_0400a810();
    piVar7 = (int *)param_1[0x33];
  }
  if (piVar7[1] - *piVar7 >> 2 < (int)local_64) {
    puVar16[3] = (uint)"void XAudio2SourceVoiceImp::UpdateBuffers()";
    puVar16[2] = 0x15e;
    puVar16[1] = (uint)
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2sourcevoiceimpl.cpp"
    ;
    *puVar16 = (uint)"targetOffset + toCopy <= GetNumOfSamples( mAudioBuffer )";
    puVar16[-1] = 0x410a344;
    FUN_0400a810();
    piVar7 = (int *)param_1[0x33];
  }
  piVar13 = (int *)param_1[0x56];
  iVar12 = param_1[0x57] - (int)piVar13 >> 2;
  if ((param_1[0x34] - (int)piVar7 >> 2) * -0x55555555 + iVar12 * 0x55555555 != 0) {
    puVar16[3] = (uint)
                 "void XAudio2SourceVoiceImp::CopyPcm(PcmData&, int, const PcmData&, int, int)";
    puVar16[2] = 0x1a5;
    puVar16[1] = (uint)
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2sourcevoiceimpl.cpp"
    ;
    *puVar16 = (uint)"GetNumOfChannels( target ) == GetNumOfChannels( source )";
    puVar16[-1] = 0x4109deb;
    FUN_0400a810();
    piVar13 = (int *)param_1[0x56];
    iVar12 = param_1[0x57] - (int)piVar13 >> 2;
  }
  if (iVar12 * -0x55555555 == 0) {
    puVar16[3] = (uint)"int GetNumOfSamples(const PcmData&)";
    puVar16[2] = 0x13;
    puVar16[1] = (uint)
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2helpers.h"
    ;
    *puVar16 = (uint)"pcm.channels.size() > 0";
    puVar16[-1] = 0x4109e2a;
    FUN_0400a810();
    piVar13 = (int *)param_1[0x56];
  }
  if (piVar13[1] - *piVar13 >> 2 < (int)local_54) {
    puVar16[3] = (uint)
                 "void XAudio2SourceVoiceImp::CopyPcm(PcmData&, int, const PcmData&, int, int)";
    puVar16[2] = 0x1a6;
    puVar16[1] = (uint)
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2sourcevoiceimpl.cpp"
    ;
    *puVar16 = (uint)"sourceOffset + numOfSamples <= GetNumOfSamples( source )";
    puVar16[-1] = 0x410a3a4;
    FUN_0400a810();
  }
  piVar7 = (int *)param_1[0x33];
  if ((param_1[0x34] - (int)piVar7 >> 2) * -0x55555555 == 0) {
    puVar16[3] = (uint)"int GetNumOfSamples(const PcmData&)";
    puVar16[2] = 0x13;
    puVar16[1] = (uint)
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2helpers.h"
    ;
    *puVar16 = (uint)"pcm.channels.size() > 0";
    puVar16[-1] = 0x4109e80;
    FUN_0400a810();
    piVar7 = (int *)param_1[0x33];
  }
  if (piVar7[1] - *piVar7 >> 2 < (int)local_64) {
    puVar16[3] = (uint)
                 "void XAudio2SourceVoiceImp::CopyPcm(PcmData&, int, const PcmData&, int, int)";
    puVar16[2] = 0x1a7;
    puVar16[1] = (uint)
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2sourcevoiceimpl.cpp"
    ;
    *puVar16 = (uint)"targetOffset + numOfSamples <= GetNumOfSamples( target )";
    puVar16[-1] = 0x410a3d4;
    FUN_0400a810();
    piVar7 = (int *)param_1[0x33];
  }
  if (0xb < param_1[0x34] - (int)piVar7) {
    local_54 = (int *)(iVar14 << 2);
    iVar14 = 0;
    local_50 = (int *)((int)local_50 << 2);
    local_58 = (undefined4 **)((int)local_58 << 2);
    iVar12 = 0;
    do {
      iVar14 = iVar14 + 1;
      iVar18 = *(int *)((int)piVar7 + iVar12);
      iVar3 = *(int *)(param_1[0x56] + iVar12);
      puVar16[2] = (uint)local_50;
      iVar12 = iVar12 + 0xc;
      *puVar16 = (int)local_58 + iVar18;
      puVar16[1] = iVar3 + (int)local_54;
      puVar16[-1] = 0x4109eeb;
      memcpy((void *)*puVar16,(void *)puVar16[1],puVar16[2]);
      piVar7 = (int *)param_1[0x33];
    } while (iVar14 < (param_1[0x34] - (int)piVar7 >> 2) * -0x55555555);
  }
  puVar1 = (uint *)(param_1 + 0x5a);
  uVar9 = *puVar1;
  *puVar1 = *puVar1 + local_60;
  param_1[0x5b] = param_1[0x5b] + ((int)local_60 >> 0x1f) + (uint)CARRY4(uVar9,local_60);
  iVar12 = param_1[0x5d];
  param_1[0x5d] = local_60 + iVar12;
  if ((int)local_5c <= (int)(local_60 + iVar12)) {
    param_1[0x5d] = 0;
    iVar12 = *(int *)(local_68 + 0x1c);
    if (iVar12 == 0) {
      piVar7 = (int *)param_1[0x5c];
      if (piVar7 != (int *)0x0) {
        iVar12 = *piVar7;
        uVar9 = *(uint *)(local_68 + 0x20);
        *puVar16 = (uint)piVar7;
        puVar16[1] = uVar9;
        pcVar2 = *(code **)(iVar12 + 0x10);
        puVar16[-1] = 0x410a3fc;
        (*pcVar2)();
        puVar16 = puVar16 + -2;
      }
      if (param_1[0x4e] == param_1[0x50] + -0x24) {
        *puVar16 = param_1[0x4f];
        puVar16[-1] = 0x410ab49;
        operator_delete((void *)*puVar16);
        iVar12 = param_1[0x51];
        param_1[0x51] = iVar12 + 4;
        iVar12 = *(int *)(iVar12 + 4);
        param_1[0x4f] = iVar12;
        param_1[0x50] = iVar12 + 0x1f8;
        param_1[0x4e] = iVar12;
      }
      else {
        param_1[0x4e] = param_1[0x4e] + 0x24;
      }
      piVar13 = (int *)param_1[0x57];
      piVar7 = (int *)param_1[0x56];
      local_5c = piVar7;
      for (; piVar7 != piVar13; piVar7 = piVar7 + 3) {
        if (*piVar7 != 0) {
          *puVar16 = *piVar7;
          puVar16[-1] = 0x410a446;
          free((void *)*puVar16);
        }
      }
      param_1[0x57] = (int)local_5c;
    }
    else {
      if (*(char *)((int)param_1 + 0x179) == '\0') {
        if (iVar12 != 0xff) {
          *(int *)(local_68 + 0x1c) = iVar12 + -1;
        }
      }
      else {
        *(undefined4 *)(local_68 + 0x1c) = 0;
        *(undefined1 *)((int)param_1 + 0x179) = 0;
      }
      piVar7 = (int *)param_1[0x5c];
      if (piVar7 == (int *)0x0) {
        return;
      }
      iVar12 = *piVar7;
      uVar9 = *(uint *)(local_68 + 0x20);
      *puVar16 = (uint)piVar7;
      puVar16[1] = uVar9;
      pcVar2 = *(code **)(iVar12 + 0x14);
      puVar16[-1] = 0x4109f9f;
      (*pcVar2)();
      puVar16 = puVar16 + -2;
    }
  }
  piVar7 = (int *)param_1[0x5c];
  if (piVar7 != (int *)0x0) {
    iVar12 = *piVar7;
    *puVar16 = (uint)piVar7;
    pcVar2 = *(code **)(iVar12 + 4);
    puVar16[-1] = 0x4109f40;
    (*pcVar2)();
  }
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

// --- audioallocator_04103eb0 @0x04103eb0 ---
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* source: audioallocator */

void __regparm3 audioallocator_04103eb0(int *param_1,undefined4 *param_2,uint param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  size_t sVar12;
  int iVar13;
  int local_50;
  uint local_4c;
  undefined4 *local_48;
  undefined4 *local_38;
  int local_34;
  uint local_30;
  undefined4 *local_28;
  undefined4 *local_24;
  int local_20;
  
  if (param_3 == 0) {
    return;
  }
  local_38 = (undefined4 *)param_1[1];
  if (param_3 <= (uint)((param_1[2] - (int)local_38 >> 2) * -0x55555555)) {
    sVar12 = 0;
    puVar10 = (undefined4 *)0x0;
    local_28 = (undefined4 *)0x0;
    local_24 = (undefined4 *)0x0;
    local_20 = 0;
    puVar6 = (undefined4 *)*param_4;
    puVar4 = (undefined4 *)param_4[1];
    iVar11 = (int)puVar4 - (int)puVar6 >> 2;
    if (iVar11 != 0) {
      sVar12 = iVar11 * 4;
      puVar10 = (undefined4 *)memalign(0x10,sVar12);
      if (puVar10 == (undefined4 *)0x0) {
        FUN_0400a810("memory",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/audioallocator.h"
                     ,0x4b,
                     "T* AudioAllocator<T>::allocate(AudioAllocator<T>::size_type, const void*) [with T = float, AudioAllocator<T>::pointer = float*, AudioAllocator<T>::size_type = unsigned int]"
                    );
      }
      bzero(puVar10,sVar12);
      local_38 = (undefined4 *)param_1[1];
      puVar4 = (undefined4 *)param_4[1];
      puVar6 = (undefined4 *)*param_4;
    }
    local_20 = sVar12 + (int)puVar10;
    puVar7 = puVar6;
    puVar5 = puVar10;
    local_24 = puVar10;
    if (puVar4 != puVar6) {
      do {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *puVar7;
        }
        puVar7 = puVar7 + 1;
        puVar5 = puVar5 + 1;
      } while (puVar4 != puVar7);
      local_24 = (undefined4 *)((int)puVar10 + ((int)puVar4 - (int)(puVar6 + 1) & 0xfffffffcU) + 4);
    }
    iVar11 = (int)local_38 - (int)param_2 >> 2;
    local_28 = puVar10;
    if (param_3 < (uint)(iVar11 * -0x55555555)) {
      puVar10 = local_38 + param_3 * -3;
      puVar4 = local_38;
      for (puVar6 = puVar10; local_38 != puVar6; puVar6 = puVar6 + 3) {
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          *puVar4 = *puVar6;
          puVar4[1] = puVar6[1];
          puVar4[2] = puVar6[2];
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[2] = 0;
        }
        puVar4 = puVar4 + 3;
      }
      iVar11 = ((int)puVar10 - (int)param_2 >> 2) * -0x55555555;
      param_1[1] = (int)(local_38 + param_3 * 3);
      if (0 < iVar11) {
        do {
          puVar6 = local_38 + -3;
          puVar4 = puVar10 + -3;
          iVar11 = iVar11 + -1;
          local_38[-2] = *puVar6;
          uVar1 = *puVar6;
          *puVar6 = *puVar4;
          *puVar4 = uVar1;
          uVar1 = local_38[-2];
          local_38[-2] = puVar10[-2];
          puVar10[-2] = uVar1;
          uVar1 = local_38[-1];
          local_38[-1] = puVar10[-1];
          puVar10[-1] = uVar1;
          local_38 = puVar6;
          puVar10 = puVar4;
        } while (iVar11 != 0);
      }
      puVar6 = param_2 + param_3 * 3;
      if (param_2 != puVar6) {
        do {
                    /* try { // try from 041044c7 to 041044cb has its CatchHandler @ 041045b1 */
          audioallocator_04105980(param_2,&local_28);
          param_2 = param_2 + 3;
        } while (puVar6 != param_2);
      }
    }
    else {
      iVar2 = param_3 + iVar11 * 0x55555555;
      puVar6 = local_38;
      local_34 = iVar2;
      if (iVar2 != 0) {
        do {
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = 0;
            puVar6[1] = 0;
            puVar6[2] = 0;
            iVar13 = (int)local_24 - (int)local_28 >> 2;
            if (iVar13 == 0) {
              sVar12 = 0;
              puVar4 = (undefined4 *)0x0;
            }
            else {
              sVar12 = iVar13 << 2;
              puVar4 = (undefined4 *)memalign(0x10,sVar12);
              if (puVar4 == (undefined4 *)0x0) {
                    /* try { // try from 04104508 to 0410450c has its CatchHandler @ 041045c3 */
                FUN_0400a810("memory",
                             "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/audioallocator.h"
                             ,0x4b,
                             "T* AudioAllocator<T>::allocate(AudioAllocator<T>::size_type, const void*) [with T = float, AudioAllocator<T>::pointer = float*, AudioAllocator<T>::size_type = unsigned int]"
                            );
              }
              bzero(puVar4,sVar12);
            }
            *puVar6 = puVar4;
            puVar6[1] = puVar4;
            puVar6[2] = sVar12 + (int)puVar4;
            puVar10 = puVar4;
            puVar7 = local_28;
            if (local_24 != local_28) {
              do {
                if (puVar10 != (undefined4 *)0x0) {
                  *puVar10 = *puVar7;
                }
                puVar7 = puVar7 + 1;
                puVar10 = puVar10 + 1;
              } while (local_24 != puVar7);
              puVar4 = (undefined4 *)
                       ((int)puVar4 + ((int)local_24 - (int)(local_28 + 1) & 0xfffffffcU) + 4);
            }
            puVar6[1] = puVar4;
          }
          local_34 = local_34 + -1;
          puVar6 = puVar6 + 3;
        } while (local_34 != 0);
        puVar6 = (undefined4 *)param_1[1];
      }
      puVar6 = puVar6 + iVar2 * 3;
      param_1[1] = (int)puVar6;
      puVar4 = puVar6;
      puVar10 = param_2;
      if (param_2 == local_38) {
        param_1[1] = (int)(puVar6 + iVar11);
      }
      else {
        do {
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = 0;
            puVar4[1] = 0;
            puVar4[2] = 0;
            *puVar4 = *puVar10;
            puVar4[1] = puVar10[1];
            puVar4[2] = puVar10[2];
            *puVar10 = 0;
            puVar10[1] = 0;
            puVar10[2] = 0;
          }
          puVar10 = puVar10 + 3;
          puVar4 = puVar4 + 3;
        } while (local_38 != puVar10);
        param_1[1] = (int)(puVar6 + iVar11);
        do {
                    /* try { // try from 04104387 to 0410438b has its CatchHandler @ 041045b1 */
          audioallocator_04105980(param_2,&local_28);
          param_2 = param_2 + 3;
        } while (local_38 != param_2);
      }
    }
    if (local_28 == (undefined4 *)0x0) {
      return;
    }
    free(local_28);
    return;
  }
  iVar11 = *param_1;
  iVar2 = (int)local_38 - iVar11 >> 2;
  uVar3 = iVar2 * -0x55555555;
  if (iVar2 * 0x55555555 + 0x15555555U < param_3) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_fill_insert");
  }
  uVar8 = param_3;
  if (param_3 <= uVar3) {
    uVar8 = uVar3;
  }
  local_4c = uVar3 + uVar8;
  if ((CARRY4(uVar3,uVar8)) || (0x15555555 < local_4c)) {
    local_4c = 0x15555555;
    uVar3 = 0xfffffffc;
    local_50 = ((int)param_2 - iVar11 >> 2) * -0x55555555;
  }
  else {
    local_50 = ((int)param_2 - iVar11 >> 2) * -0x55555555;
    if (local_4c == 0) {
      local_48 = (undefined4 *)0x0;
      local_4c = 0;
      goto LAB_04103f44;
    }
    uVar3 = local_4c * 0xc;
  }
  local_48 = operator_new(uVar3);
LAB_04103f44:
  puVar6 = local_48 + local_50 * 3;
  local_30 = param_3;
  do {
    if (puVar6 != (undefined4 *)0x0) {
      iVar11 = param_4[1];
      iVar2 = *param_4;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      iVar11 = iVar11 - iVar2 >> 2;
      if (iVar11 == 0) {
        sVar12 = 0;
        puVar4 = (undefined4 *)0x0;
      }
      else {
        sVar12 = iVar11 << 2;
        puVar4 = (undefined4 *)memalign(0x10,sVar12);
        if (puVar4 == (undefined4 *)0x0) {
                    /* try { // try from 041043d8 to 041043dc has its CatchHandler @ 04104595 */
          FUN_0400a810("memory",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/audioallocator.h"
                       ,0x4b,
                       "T* AudioAllocator<T>::allocate(AudioAllocator<T>::size_type, const void*) [with T = float, AudioAllocator<T>::pointer = float*, AudioAllocator<T>::size_type = unsigned int]"
                      );
        }
        bzero(puVar4,sVar12);
      }
      *puVar6 = puVar4;
      puVar6[1] = puVar4;
      puVar6[2] = sVar12 + (int)puVar4;
      puVar10 = (undefined4 *)*param_4;
      puVar7 = (undefined4 *)param_4[1];
      puVar5 = puVar4;
      puVar9 = puVar10;
      if (puVar7 != puVar10) {
        do {
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = *puVar9;
          }
          puVar9 = puVar9 + 1;
          puVar5 = puVar5 + 1;
        } while (puVar7 != puVar9);
        puVar4 = (undefined4 *)((int)puVar4 + ((int)puVar7 - (int)(puVar10 + 1) & 0xfffffffcU) + 4);
      }
      puVar6[1] = puVar4;
    }
    puVar6 = puVar6 + 3;
    local_30 = local_30 - 1;
  } while (local_30 != 0);
  puVar4 = (undefined4 *)*param_1;
  puVar6 = local_48;
  puVar10 = puVar4;
  if (param_2 != puVar4) {
    do {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = *puVar10;
        puVar6[1] = puVar10[1];
        puVar6[2] = puVar10[2];
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
      }
      puVar10 = puVar10 + 3;
      puVar6 = puVar6 + 3;
    } while (param_2 != puVar10);
    puVar6 = (undefined4 *)((int)local_48 + ((int)param_2 - (int)(puVar4 + 3) & 0xfffffffcU) + 0xc);
  }
  puVar6 = puVar6 + param_3 * 3;
  puVar10 = (undefined4 *)param_1[1];
  puVar7 = puVar6;
  puVar5 = param_2;
  if (param_2 != puVar10) {
    do {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = *puVar5;
        puVar7[1] = puVar5[1];
        puVar7[2] = puVar5[2];
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
      }
      puVar5 = puVar5 + 3;
      puVar7 = puVar7 + 3;
    } while (puVar10 != puVar5);
    puVar6 = (undefined4 *)((int)puVar6 + ((int)puVar10 - (int)(param_2 + 3) & 0xfffffffcU) + 0xc);
  }
  if (puVar4 != puVar10) {
    do {
      if ((void *)*puVar4 != (void *)0x0) {
        free((void *)*puVar4);
      }
      puVar4 = puVar4 + 3;
    } while (puVar10 != puVar4);
    puVar4 = (undefined4 *)*param_1;
  }
  if (puVar4 != (undefined4 *)0x0) {
    operator_delete(puVar4);
  }
  *param_1 = (int)local_48;
  param_1[1] = (int)puVar6;
  param_1[2] = (int)(local_48 + local_4c * 3);
  return;
}

// --- audioallocator_04105480 @0x04105480 ---
/* source: audioallocator */

void audioallocator_04105480(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  size_t local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  
  if (param_2 == 0) {
    return;
  }
  puVar3 = (undefined4 *)param_1[1];
  puVar2 = puVar3;
  uVar4 = param_2;
  if (param_2 <= (uint)(param_1[2] - (int)puVar3 >> 2)) {
    do {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
      }
      uVar4 = uVar4 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar4 != 0);
    param_1[1] = puVar3 + param_2;
    return;
  }
  local_24 = (undefined4 *)*param_1;
  uVar4 = (int)puVar3 - (int)local_24 >> 2;
  if (0x3fffffff - uVar4 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_default_append");
  }
  local_28 = 0xfffffffc;
  uVar5 = param_2;
  if (param_2 <= uVar4) {
    uVar5 = uVar4;
  }
  uVar1 = uVar4 + uVar5;
  if ((!CARRY4(uVar4,uVar5)) && (uVar1 < 0x40000000)) {
    local_28 = 0;
    local_20 = (undefined4 *)0x0;
    if (uVar1 == 0) goto LAB_0410553a;
    local_28 = uVar1 * 4;
  }
  local_20 = (undefined4 *)memalign(0x10,local_28);
  if (local_20 == (undefined4 *)0x0) {
    FUN_0400a810("memory",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/audioallocator.h"
                 ,0x4b,
                 "T* AudioAllocator<T>::allocate(AudioAllocator<T>::size_type, const void*) [with T = float, AudioAllocator<T>::pointer = float*, AudioAllocator<T>::size_type = unsigned int]"
                );
  }
  bzero(local_20,local_28);
  local_24 = (undefined4 *)*param_1;
  puVar3 = (undefined4 *)param_1[1];
LAB_0410553a:
  puVar2 = local_20;
  uVar4 = param_2;
  puVar6 = local_24;
  puVar7 = local_20;
  if (puVar3 != local_24) {
    do {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar6;
      }
      puVar6 = puVar6 + 1;
      puVar2 = puVar2 + 1;
    } while (puVar3 != puVar6);
    puVar2 = (undefined4 *)((int)local_20 + ((int)puVar3 - (int)(local_24 + 1) & 0xfffffffcU) + 4);
    puVar7 = puVar2;
  }
  do {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    uVar4 = uVar4 - 1;
    puVar2 = puVar2 + 1;
  } while (uVar4 != 0);
  if (local_24 != (undefined4 *)0x0) {
    free(local_24);
  }
  param_1[1] = puVar7 + param_2;
  *param_1 = local_20;
  param_1[2] = (int)local_20 + local_28;
  return;
}

// --- audioallocator_04105980 @0x04105980 ---
/* source: audioallocator */

int * audioallocator_04105980(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *__src;
  undefined4 *puVar5;
  void *local_28;
  size_t local_24;
  
  if (param_2 == param_1) {
    return param_1;
  }
  local_28 = (void *)*param_1;
  puVar5 = (undefined4 *)param_2[1];
  __src = (undefined4 *)*param_2;
  uVar1 = (int)puVar5 - (int)__src >> 2;
  if ((uint)(param_1[2] - (int)local_28 >> 2) < uVar1) {
    puVar3 = (undefined4 *)0x0;
    local_24 = 0;
    puVar4 = puVar3;
    if (uVar1 != 0) {
      local_24 = uVar1 << 2;
      puVar3 = (undefined4 *)memalign(0x10,local_24);
      if (puVar3 == (undefined4 *)0x0) {
        FUN_0400a810("memory",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/audioallocator.h"
                     ,0x4b,
                     "T* AudioAllocator<T>::allocate(AudioAllocator<T>::size_type, const void*) [with T = float, AudioAllocator<T>::pointer = float*, AudioAllocator<T>::size_type = unsigned int]"
                    );
      }
      bzero(puVar3,local_24);
      local_28 = (void *)*param_1;
      puVar4 = puVar3;
    }
    for (; __src != puVar5; __src = __src + 1) {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *__src;
      }
      puVar3 = puVar3 + 1;
    }
    if (local_28 != (void *)0x0) {
      free(local_28);
    }
    *param_1 = (int)puVar4;
    local_28 = (void *)((int)puVar4 + local_24);
    param_1[2] = (int)local_28;
  }
  else {
    puVar3 = (undefined4 *)param_1[1];
    uVar2 = (int)puVar3 - (int)local_28 >> 2;
    if (uVar2 < uVar1) {
      puVar4 = __src + uVar2;
      if (uVar2 == 0) goto LAB_04105a56;
      memmove(local_28,__src,uVar2 << 2);
      puVar3 = (undefined4 *)param_1[1];
      local_28 = (void *)*param_1;
      puVar5 = (undefined4 *)param_2[1];
      puVar4 = (undefined4 *)(((int)puVar3 - (int)local_28 & 0xfffffffcU) + *param_2);
      if (puVar5 != puVar4) {
        do {
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = *puVar4;
          }
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
LAB_04105a56:
        } while (puVar5 != puVar4);
      }
      local_28 = (void *)((int)local_28 + uVar1 * 4);
    }
    else if (uVar1 != 0) {
      memmove(local_28,__src,uVar1 * 4);
      param_1[1] = *param_1 + uVar1 * 4;
      return param_1;
    }
  }
  param_1[1] = (int)local_28;
  return param_1;
}

// --- audioallocator_04108e80 @0x04108e80 ---
/* source: audioallocator */

undefined4 * audioallocator_04108e80(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *__s;
  undefined4 *puVar10;
  size_t local_28;
  undefined4 *local_24;
  int *local_20;
  
  if (*(int *)(param_2 + 0xd0) != *(int *)(param_2 + 0xcc)) {
    FUN_0410e150(param_2,param_2 + 0xcc,*(undefined4 *)(param_2 + 8));
    uVar1 = *(undefined4 *)(param_2 + 0xd4);
    *(undefined4 *)(param_2 + 0xd4) = 0;
    uVar2 = *(undefined4 *)(param_2 + 0xcc);
    *(undefined4 *)(param_2 + 0xcc) = 0;
    uVar3 = *(undefined4 *)(param_2 + 0xd0);
    *(undefined4 *)(param_2 + 0xd0) = 0;
    param_1[2] = uVar1;
    *param_1 = uVar2;
    param_1[1] = uVar3;
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  piVar4 = *(int **)(param_2 + 0xd0);
  local_20 = *(int **)(param_2 + 0xcc);
  if (piVar4 == local_20) {
    puVar9 = (undefined4 *)0x0;
LAB_04108fcf:
    param_1[1] = puVar9;
    return param_1;
  }
  do {
    puVar9 = (undefined4 *)&DAT_0000000c;
    piVar5 = local_20;
    while( true ) {
      local_20 = piVar5 + 3;
      if (piVar4 == local_20) goto LAB_04108fcf;
      if (puVar9 == (undefined4 *)0x0) break;
      __s = (undefined4 *)0x0;
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      local_28 = 0;
      puVar10 = (undefined4 *)piVar5[4];
      local_24 = (undefined4 *)*local_20;
      iVar6 = (int)puVar10 - (int)local_24 >> 2;
      if (iVar6 != 0) {
        local_28 = iVar6 << 2;
        __s = (undefined4 *)memalign(0x10,local_28);
        if (__s == (undefined4 *)0x0) {
                    /* try { // try from 0410903a to 0410903e has its CatchHandler @ 04109045 */
          FUN_0400a810("memory",
                       "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/audioallocator.h"
                       ,0x4b,
                       "T* AudioAllocator<T>::allocate(AudioAllocator<T>::size_type, const void*) [with T = float, AudioAllocator<T>::pointer = float*, AudioAllocator<T>::size_type = unsigned int]"
                      );
        }
        bzero(__s,local_28);
        local_24 = (undefined4 *)*local_20;
        puVar10 = (undefined4 *)piVar5[4];
      }
      *puVar9 = __s;
      puVar9[1] = __s;
      puVar9[2] = local_28 + (int)__s;
      puVar7 = local_24;
      puVar8 = __s;
      if (local_24 != puVar10) {
        do {
          if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = *puVar7;
          }
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        } while (puVar7 != puVar10);
        __s = (undefined4 *)((int)__s + ((int)puVar7 - (int)(local_24 + 1) & 0xfffffffcU) + 4);
      }
      puVar9[1] = __s;
      puVar9 = puVar9 + 3;
      piVar5 = local_20;
    }
  } while( true );
}

// --- attached helper FUN_00103d50 @0x04103d50 (call-graph exclusive to this TU) ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_04103d50(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint local_24;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_4 != 0) {
    FUN_04105630(param_1,param_4);
  }
  uVar3 = param_3 / param_4;
  if (0 < param_4) {
    iVar7 = 0;
    iVar8 = 0;
    do {
      while( true ) {
        piVar5 = (int *)(iVar7 + *param_1);
        uVar4 = piVar5[1] - *piVar5 >> 2;
        if (uVar3 <= uVar4) break;
                    /* try { // try from 04103dd4 to 04103e74 has its CatchHandler @ 04103e7a */
        audioallocator_04105480(piVar5,uVar3 - uVar4);
        iVar8 = iVar8 + 1;
        iVar7 = iVar7 + 0xc;
        if (iVar8 == param_4) goto LAB_04103de4;
      }
      if (uVar3 < uVar4) {
        piVar5[1] = *piVar5 + uVar3 * 4;
      }
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 0xc;
    } while (iVar8 != param_4);
  }
LAB_04103de4:
  fVar2 = _DAT_042f9f44;
  if (0 < (int)uVar3) {
    local_24 = 0;
    do {
      if (0 < param_4) {
        iVar7 = *param_1;
        iVar8 = 0;
        iVar6 = 0;
        do {
          iVar1 = iVar8 * 2;
          iVar8 = iVar8 + 1;
          piVar5 = (int *)(iVar7 + iVar6);
          iVar6 = iVar6 + 0xc;
          *(float *)(*piVar5 + local_24 * 4) = (float)(int)*(short *)(param_2 + iVar1) / fVar2;
        } while (iVar8 != param_4);
      }
      local_24 = local_24 + 1;
      param_2 = param_2 + param_4 * 2;
    } while (local_24 != uVar3);
  }
  return param_1;
}

