// Recovered source: eon2/src/dlls/directx/xaudio2_full/xaudio2dsp.cpp
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

// --- Dsp::ChangeVolume @0x04102f80 ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* source: xaudio2dsp */

void Dsp__ChangeVolume(int *param_1,int *param_2)

{
  undefined1 (*pauVar1) [16];
  float *pfVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  undefined1 auVar16 [16];
  int *local_28;
  int local_24;
  int local_20;
  
  local_28 = (int *)*param_1;
  iVar9 = param_1[1] - (int)local_28;
  if ((iVar9 >> 2) * -0x55555555 - (param_2[1] - *param_2 >> 2) != 0) {
    FUN_0400a810("GetNumOfChannels( pcm ) == (signed) volumes.size()",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2dsp.cpp"
                 ,0x140,"void Dsp::ChangeVolume(PcmData&, const std::vector<float>&)");
    local_28 = (int *)*param_1;
    iVar9 = param_1[1] - (int)local_28;
  }
  fVar5 = DAT_042dbf3c;
  if (0xb < iVar9) {
    iVar4 = *param_2;
    local_24 = 0;
    local_20 = 0;
    uVar14 = local_28[1] - *local_28 >> 2;
    uVar13 = uVar14 & 0xfffffff4;
    do {
      auVar8 = _DAT_04310080;
      auVar7 = _DAT_04310070;
      fVar3 = *(float *)(iVar4 + local_20 * 4);
      if (0 < (int)uVar13) {
        iVar12 = *(int *)((int)local_28 + local_24);
        iVar10 = 0;
        do {
          pauVar1 = (undefined1 (*) [16])(iVar12 + iVar10 * 4);
          iVar10 = iVar10 + 4;
          auVar16._4_4_ = *(float *)(*pauVar1 + 4) * fVar3 + *(float *)(*pauVar1 + 4) * 0.0;
          auVar16._0_4_ = *(float *)*pauVar1 * fVar3 + *(float *)*pauVar1 * 0.0;
          auVar16._8_4_ = *(float *)(*pauVar1 + 8) * fVar3 + *(float *)(*pauVar1 + 8) * 0.0;
          auVar16._12_4_ = *(float *)(*pauVar1 + 0xc) * fVar3 + *(float *)(*pauVar1 + 0xc) * 0.0;
          auVar16 = maxps(auVar7,auVar16);
          auVar16 = minps(auVar8,auVar16);
          *pauVar1 = auVar16;
        } while (iVar10 < (int)uVar13);
      }
      fVar6 = DAT_042e6f58;
      if ((int)uVar13 < (int)uVar14) {
        iVar10 = *(int *)((int)local_28 + local_24);
        iVar12 = uVar13 * 4;
        uVar11 = uVar13;
        do {
          while( true ) {
            pfVar2 = (float *)(iVar10 + iVar12);
            fVar15 = *pfVar2 * 0.0 + *pfVar2 * fVar3;
            if (fVar15 < fVar5) break;
            uVar11 = uVar11 + 1;
            iVar12 = iVar12 + 4;
            *pfVar2 = fVar5;
            if ((int)uVar14 <= (int)uVar11) goto LAB_041030ee;
          }
          if (fVar15 <= fVar6) {
            fVar15 = fVar6;
          }
          uVar11 = uVar11 + 1;
          iVar12 = iVar12 + 4;
          *pfVar2 = fVar15;
        } while ((int)uVar11 < (int)uVar14);
      }
LAB_041030ee:
      local_20 = local_20 + 1;
      local_24 = local_24 + 0xc;
    } while (local_20 < (iVar9 >> 2) * -0x55555555);
  }
  return;
}

// --- Dsp::JoinChannels @0x04103bf0 ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* source: xaudio2dsp, xaudio2helpers */

int * Dsp__JoinChannels(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_24;
  
  piVar6 = (int *)*param_2;
  iVar3 = (param_2[1] - (int)piVar6 >> 2) * -0x55555555;
  if (*(int *)(param_3 + 4) != iVar3) {
    FUN_0400a810("GetNumOfChannels( data ) == format.numOfChannels",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2dsp.cpp"
                 ,0x1db,"AudioBufferS16 Dsp::JoinChannels(const PcmData&, const PcmFormat&)");
    piVar6 = (int *)*param_2;
    iVar3 = (param_2[1] - (int)piVar6 >> 2) * -0x55555555;
  }
  if (iVar3 == 0) {
    FUN_0400a810("pcm.channels.size() > 0",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/xaudio2helpers.h"
                 ,0x13,"int GetNumOfSamples(const PcmData&)");
    piVar6 = (int *)*param_2;
  }
  iVar9 = 0;
  iVar4 = (piVar6[1] - *piVar6 >> 2) + -8;
  iVar3 = *(int *)(param_3 + 4);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar3 = iVar4 * iVar3 * 2;
  if (iVar3 != 0) {
                    /* try { // try from 04103d25 to 04103d29 has its CatchHandler @ 04103d34 */
    FUN_04105820(param_1,iVar3);
    iVar9 = *param_1;
  }
  fVar2 = _DAT_042f9f44;
  if (0 < iVar4) {
    iVar3 = *(int *)(param_3 + 4);
    local_24 = 0;
    iVar8 = 0x10;
    do {
      if (0 < iVar3) {
        iVar7 = 0;
        iVar1 = *param_2;
        iVar5 = 0;
        do {
          piVar6 = (int *)(iVar1 + iVar7);
          iVar7 = iVar7 + 0xc;
          *(short *)(iVar9 + iVar5 * 2) = (short)(int)(*(float *)(*piVar6 + iVar8) * fVar2);
          iVar5 = iVar5 + 1;
        } while (iVar5 != iVar3);
      }
      local_24 = local_24 + 1;
      iVar8 = iVar8 + 4;
      iVar9 = iVar9 + iVar3 * 2;
    } while (local_24 < iVar4);
  }
  return param_1;
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

