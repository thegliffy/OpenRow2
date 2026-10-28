// Recovered source: eon2/src/dlls/directx/dsound/backendOpenALSoft.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- DSoundBackend_BufferUnlock @0x040f99b0 ---
/* source: backendOpenALSoft */

void DSoundBackend_BufferUnlock(int *param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_58 [8];
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  uint local_24;
  uint local_20;
  
  puVar4 = &local_4c;
  local_24 = param_1[3];
  if (local_24 == 0) {
    iVar2 = param_1[5];
    uStack_50 = 0x40f9d48;
    local_4c = eON_GetProcessHeap();
    local_48 = 8;
    local_44 = iVar2 + 8;
    uStack_50 = 0x40f9d5f;
    iVar2 = HeapAlloc();
    puVar4 = (undefined4 *)auStack_58;
    param_1[4] = iVar2;
    local_24 = iVar2 + 0xfU & 0xfffffff0;
    param_1[3] = local_24;
  }
  local_20 = param_2 - local_24;
  if (param_4 == 0) {
    uVar6 = 0;
    iVar2 = *param_1;
    if (param_1[1] - iVar2 >> 2 != 0) {
      do {
        iVar2 = *(int *)(iVar2 + uVar6 * 4);
        if (*(char *)(iVar2 + 0x1c) == '\0') {
          puVar4[4] = param_3;
          puVar4[2] = param_2;
          puVar4[3] = local_20;
          puVar4[1] = *(undefined4 *)(iVar2 + 8);
          *puVar4 = *(undefined4 *)(iVar2 + 0x70);
          puVar4[-1] = 0x40f9cdc;
          alBufferSubDataSOFT();
        }
        else {
          uVar3 = *(uint *)(iVar2 + 0xc);
          if (local_20 % uVar3 != 0) {
            puVar4[3] = 
            "void DSoundBackend_BufferUnlock(DSoundBackend_Buffer*, LPVOID, ULONG, LPVOID, ULONG)";
            puVar4[2] = 0x235;
            puVar4[1] = 
            "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/dsound/backendOpenALSoft.cpp"
            ;
            *puVar4 = "offset1 % s->BytesPerSample == 0";
            puVar4[-1] = 0x40f9d34;
            FUN_0400a810();
            uVar3 = *(uint *)(iVar2 + 0xc);
          }
          if (param_3 % uVar3 != 0) {
            puVar4[3] = 
            "void DSoundBackend_BufferUnlock(DSoundBackend_Buffer*, LPVOID, ULONG, LPVOID, ULONG)";
            puVar4[2] = 0x236;
            puVar4[1] = 
            "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/dsound/backendOpenALSoft.cpp"
            ;
            *puVar4 = "size1 % s->BytesPerSample == 0";
            puVar4[-1] = 0x40f9d04;
            FUN_0400a810();
            uVar3 = *(uint *)(iVar2 + 0xc);
          }
          iVar5 = *(int *)(iVar2 + 0x14);
          puVar4[4] = 0x1404;
          puVar4[5] = param_2;
          puVar4[3] = (iVar5 == 2) + 0x1500;
          puVar4[2] = param_3 / uVar3;
          puVar4[1] = local_20 / uVar3;
          *puVar4 = *(undefined4 *)(iVar2 + 0x70);
          puVar4[-1] = 0x40f9c93;
          alBufferSubSamplesSOFT();
        }
        iVar2 = *param_1;
        uVar6 = uVar6 + 1;
      } while (uVar6 < (uint)(param_1[1] - iVar2 >> 2));
    }
  }
  else {
    if (local_24 == 0) {
      iVar2 = param_1[5];
      puVar4[-1] = 0x40f9d81;
      uVar1 = eON_GetProcessHeap();
      puVar4[1] = 8;
      *puVar4 = uVar1;
      puVar4[2] = iVar2 + 8;
      puVar4[-1] = 0x40f9d98;
      iVar2 = HeapAlloc();
      puVar4 = puVar4 + -3;
      param_1[4] = iVar2;
      local_24 = iVar2 + 0xfU & 0xfffffff0;
      param_1[3] = local_24;
    }
    local_24 = param_4 - local_24;
    iVar2 = *param_1;
    if (param_1[1] - iVar2 >> 2 != 0) {
      uVar6 = 0;
      do {
        iVar2 = *(int *)(iVar2 + uVar6 * 4);
        if (*(char *)(iVar2 + 0x1c) == '\0') {
          puVar4[4] = param_3;
          puVar4[2] = param_2;
          puVar4[3] = local_20;
          puVar4[1] = *(undefined4 *)(iVar2 + 8);
          *puVar4 = *(undefined4 *)(iVar2 + 0x70);
          puVar4[-1] = 0x40f9b17;
          alBufferSubDataSOFT();
          puVar4[4] = param_5;
          puVar4[2] = param_4;
          puVar4[3] = local_24;
          puVar4[1] = *(undefined4 *)(iVar2 + 8);
          *puVar4 = *(undefined4 *)(iVar2 + 0x70);
          puVar4[-1] = 0x40f9b3e;
          alBufferSubDataSOFT();
        }
        else {
          uVar3 = *(uint *)(iVar2 + 0xc);
          iVar5 = (*(int *)(iVar2 + 0x14) == 2) + 0x1500;
          if (local_20 % uVar3 != 0) {
            puVar4[3] = 
            "void DSoundBackend_BufferUnlock(DSoundBackend_Buffer*, LPVOID, ULONG, LPVOID, ULONG)";
            puVar4[2] = 0x21b;
            puVar4[1] = 
            "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/dsound/backendOpenALSoft.cpp"
            ;
            *puVar4 = "offset1 % s->BytesPerSample == 0";
            puVar4[-1] = 0x40f9bf4;
            FUN_0400a810();
            uVar3 = *(uint *)(iVar2 + 0xc);
          }
          if (param_3 % uVar3 != 0) {
            puVar4[3] = 
            "void DSoundBackend_BufferUnlock(DSoundBackend_Buffer*, LPVOID, ULONG, LPVOID, ULONG)";
            puVar4[2] = 0x21c;
            puVar4[1] = 
            "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/dsound/backendOpenALSoft.cpp"
            ;
            *puVar4 = "size1 % s->BytesPerSample == 0";
            puVar4[-1] = 0x40f9bc4;
            FUN_0400a810();
            uVar3 = *(uint *)(iVar2 + 0xc);
          }
          puVar4[4] = 0x1404;
          puVar4[3] = iVar5;
          puVar4[5] = param_2;
          puVar4[2] = param_3 / uVar3;
          puVar4[1] = local_20 / uVar3;
          *puVar4 = *(undefined4 *)(iVar2 + 0x70);
          puVar4[-1] = 0x40f9a76;
          alBufferSubSamplesSOFT();
          uVar3 = *(uint *)(iVar2 + 0xc);
          if (local_24 % uVar3 != 0) {
            puVar4[3] = 
            "void DSoundBackend_BufferUnlock(DSoundBackend_Buffer*, LPVOID, ULONG, LPVOID, ULONG)";
            puVar4[2] = 0x21f;
            puVar4[1] = 
            "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/dsound/backendOpenALSoft.cpp"
            ;
            *puVar4 = "offset2 % s->BytesPerSample == 0";
            puVar4[-1] = 0x40f9b94;
            FUN_0400a810();
            uVar3 = *(uint *)(iVar2 + 0xc);
          }
          if (param_5 % uVar3 != 0) {
            puVar4[3] = 
            "void DSoundBackend_BufferUnlock(DSoundBackend_Buffer*, LPVOID, ULONG, LPVOID, ULONG)";
            puVar4[2] = 0x220;
            puVar4[1] = 
            "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/dsound/backendOpenALSoft.cpp"
            ;
            *puVar4 = "size2 % s->BytesPerSample == 0";
            puVar4[-1] = 0x40f9b64;
            FUN_0400a810();
            uVar3 = *(uint *)(iVar2 + 0xc);
          }
          puVar4[4] = 0x1404;
          puVar4[3] = iVar5;
          puVar4[5] = param_4;
          puVar4[2] = param_5 / uVar3;
          puVar4[1] = local_24 / uVar3;
          *puVar4 = *(undefined4 *)(iVar2 + 0x70);
          puVar4[-1] = 0x40f9acb;
          alBufferSubSamplesSOFT();
        }
        uVar6 = uVar6 + 1;
        iVar2 = *param_1;
      } while (uVar6 < (uint)(param_1[1] - iVar2 >> 2));
    }
  }
  return;
}

// --- DSoundBackend_CaptureInit @0x040fabf0 ---
/* source: backendOpenALSoft */

undefined4 DSoundBackend_CaptureInit(undefined4 param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 local_24 [7];
  char local_1d [13];
  
  uVar3 = 0;
  if (DAT_044fa4cc == 0) {
    cVar2 = backendOpenALSoft_040f8d80(&DAT_044fa4d8,local_24,local_1d);
    if (local_1d[0] != '\0') {
      FUN_0400a810("!specialFormat",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/dsound/backendOpenALSoft.cpp"
                   ,0x3c0,"bool DSoundBackend_CaptureInit(const WAVEFORMATEXTENSIBLE*, DWORD)");
    }
    iVar1 = DAT_044fa4d0;
    uVar3 = 0;
    if (((cVar2 != '\0') && (DAT_044fa4d0 != 0x1302)) && (DAT_044fa4d0 != 0x1303)) {
      DAT_044fa4dc = param_2;
      DAT_044fa4e0 = malloc(param_2);
      if (DAT_044fa4e0 != (void *)0x0) {
        DAT_044fa4cc = alcCaptureOpenDevice(0,DAT_044fa4d4,iVar1,param_2 / DAT_044fa4d8);
        if (DAT_044fa4cc == 0) {
          free(DAT_044fa4e0);
          DAT_044fa4e0 = (void *)0x0;
        }
        else {
          DAT_044fa4e4 = 0;
          uVar3 = 1;
        }
      }
    }
  }
  return uVar3;
}

// --- DSoundBackend_SourceSet3DProperties @0x040fa3b0 ---
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* source: backendOpenALSoft */

void DSoundBackend_SourceSet3DProperties(int *param_1,void *param_2)

{
  float *pfVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  double dVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  
  if ((char)param_1[6] == '\0') {
    FUN_0400a810("source->Is3D",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/dsound/backendOpenALSoft.cpp"
                 ,0x314);
  }
  iVar8 = memcmp(param_1 + 0xb,param_2,0x40);
  if (iVar8 == 0) {
    return;
  }
  alDeferUpdatesSOFT();
  iVar8 = param_1[0x1a];
  iVar3 = *(int *)((int)param_2 + 0x3c);
  if (iVar8 == iVar3) {
LAB_040fa428:
    if (iVar8 == 2) goto LAB_040fa705;
  }
  else {
    param_1[0x1a] = iVar3;
    if (iVar3 == 0) {
      alSourcei(param_1[0x1b],0x202,0);
      iVar8 = param_1[0x1a];
      goto LAB_040fa428;
    }
    alSourcei(param_1[0x1b],0x202,1);
    if (param_1[0x1a] == 2) {
      alSource3f(param_1[0x1b],0x1004,0,0,0);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      alSource3f(param_1[0x1b],0x1006,0,0,0);
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      alSourcef(param_1[0x1b],0x1023,0x4e6e6b28);
      param_1[0x19] = 0x4e6e6b28;
      param_1[0x12] = 0x168;
      alSourcei(param_1[0x1b],0x1001,0x168);
      alSourcef(param_1[0x1b],0x1022,0x3f800000);
      cVar2 = *(char *)((int)param_1 + 0x1a);
      param_1[0x17] = param_1[8];
      if ((*(char *)((int)param_1 + 0x19) == '\0') && (param_1[0x1a] == 2)) {
        *(undefined1 *)((int)param_1 + 0x1a) = 0;
LAB_040faa87:
        dVar7 = _DAT_0430dbe8;
        dVar13 = DAT_0430dbe0;
        if (cVar2 != '\0') {
          dVar12 = pow(_DAT_0430dbe8,(double)param_1[8] / DAT_0430dbe0);
          alSourcef(param_1[0x1b],0x100a,(float)dVar12);
          if ((char)param_1[6] != '\0') {
            if (param_1[0x1a] == 2) {
              param_1[0x17] = param_1[8];
              goto LAB_040fa705;
            }
            dVar13 = pow(dVar7,(double)param_1[0x17] / dVar13);
            alSourcef(param_1[0x1b],0x1022,(float)dVar13 / (float)dVar12);
          }
        }
      }
      else {
        fVar9 = (float)param_1[0xc];
        fVar10 = (float)param_1[0xd];
        fVar11 = (float)param_1[0xe];
        if (param_1[0x1a] == 0) {
          iVar8 = *param_1;
          fVar9 = fVar9 - *(float *)(iVar8 + 4);
          fVar10 = fVar10 - *(float *)(iVar8 + 8);
          fVar11 = fVar11 - *(float *)(iVar8 + 0xc);
        }
        fVar9 = fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11;
        fVar10 = SQRT(fVar9);
        if (NAN(fVar10)) {
          fVar10 = sqrtf(fVar9);
        }
        pfVar1 = (float *)(param_1 + 0x19);
        *(bool *)((int)param_1 + 0x1a) = *pfVar1 <= fVar10 && fVar10 != *pfVar1;
        if ((NAN(fVar10) || NAN(*pfVar1)) || (*pfVar1 > fVar10 || fVar10 == *pfVar1))
        goto LAB_040faa87;
        if (cVar2 == '\0') {
          alSourcef(param_1[0x1b],0x1022,0x3f800000);
          alSourcef(param_1[0x1b],0x100a,0);
          iVar8 = param_1[0x1a];
          goto LAB_040fa428;
        }
      }
      iVar8 = param_1[0x1a];
      goto LAB_040fa428;
    }
  }
  uVar6 = DAT_042f73b0;
  if ((((float)param_1[0xc] != *(float *)((int)param_2 + 4)) ||
      ((float)param_1[0xd] != *(float *)((int)param_2 + 8))) ||
     ((float)param_1[0xe] != *(float *)((int)param_2 + 0xc))) {
    param_1[0xc] = *(int *)((int)param_2 + 4);
    param_1[0xd] = *(int *)((int)param_2 + 8);
    param_1[0xe] = *(int *)((int)param_2 + 0xc);
    param_1[0xe] = param_1[0xe] ^ uVar6;
    alSourcefv(param_1[0x1b],0x1004,param_1 + 0xc);
    cVar2 = *(char *)((int)param_1 + 0x1a);
    fVar9 = (float)(param_1[0xe] ^ uVar6);
    param_1[0xe] = (int)fVar9;
    if ((*(char *)((int)param_1 + 0x19) == '\0') && (param_1[0x1a] == 2)) {
      *(undefined1 *)((int)param_1 + 0x1a) = 0;
    }
    else {
      fVar10 = (float)param_1[0xc];
      fVar11 = (float)param_1[0xd];
      if (param_1[0x1a] == 0) {
        iVar8 = *param_1;
        fVar10 = fVar10 - *(float *)(iVar8 + 4);
        fVar11 = fVar11 - *(float *)(iVar8 + 8);
        fVar9 = fVar9 - *(float *)(iVar8 + 0xc);
      }
      fVar10 = fVar10 * fVar10 + fVar11 * fVar11 + fVar9 * fVar9;
      fVar9 = SQRT(fVar10);
      if (NAN(fVar9)) {
        fVar9 = sqrtf(fVar10);
      }
      bVar4 = fVar9 != (float)param_1[0x19];
      bVar5 = (float)param_1[0x19] <= fVar9;
      *(bool *)((int)param_1 + 0x1a) = bVar5 && bVar4;
      if (bVar5 && bVar4) {
        if (cVar2 == '\0') {
          alSourcef(param_1[0x1b],0x1022,0x3f800000);
          alSourcef(param_1[0x1b],0x100a,0);
        }
        goto LAB_040fa511;
      }
    }
    dVar7 = _DAT_0430dbe8;
    dVar13 = DAT_0430dbe0;
    if (cVar2 != '\0') {
      dVar12 = pow(_DAT_0430dbe8,(double)param_1[8] / DAT_0430dbe0);
      alSourcef(param_1[0x1b],0x100a,(float)dVar12);
      if ((char)param_1[6] != '\0') {
        if (param_1[0x1a] == 2) {
          param_1[0x17] = param_1[8];
        }
        else {
          dVar13 = pow(dVar7,(double)param_1[0x17] / dVar13);
          alSourcef(param_1[0x1b],0x1022,(float)dVar13 / (float)dVar12);
        }
      }
    }
  }
LAB_040fa511:
  uVar6 = DAT_042f73b0;
  if ((((float)param_1[0xf] != *(float *)((int)param_2 + 0x10)) ||
      ((float)param_1[0x10] != *(float *)((int)param_2 + 0x14))) ||
     ((float)param_1[0x11] != *(float *)((int)param_2 + 0x18))) {
    param_1[0xf] = *(int *)((int)param_2 + 0x10);
    param_1[0x10] = *(int *)((int)param_2 + 0x14);
    param_1[0x11] = *(int *)((int)param_2 + 0x18);
    param_1[0x11] = param_1[0x11] ^ uVar6;
    alSourcefv(param_1[0x1b],0x1006,param_1 + 0xf);
    param_1[0x11] = param_1[0x11] ^ uVar6;
  }
  uVar6 = DAT_042f73b0;
  if ((((float)param_1[0x14] != *(float *)((int)param_2 + 0x24)) ||
      ((float)param_1[0x15] != *(float *)((int)param_2 + 0x28))) ||
     ((float)param_1[0x16] != *(float *)((int)param_2 + 0x2c))) {
    param_1[0x14] = *(int *)((int)param_2 + 0x24);
    param_1[0x15] = *(int *)((int)param_2 + 0x28);
    param_1[0x16] = *(int *)((int)param_2 + 0x2c);
    param_1[0x16] = param_1[0x16] ^ uVar6;
    alSourcefv(param_1[0x1b],0x1005,param_1 + 0x14);
    param_1[0x16] = param_1[0x16] ^ uVar6;
  }
  fVar9 = *(float *)((int)param_2 + 0x38);
  param_1[0x18] = *(int *)((int)param_2 + 0x34);
  if (fVar9 != (float)param_1[0x19]) {
    param_1[0x19] = (int)fVar9;
    alSourcef(param_1[0x1b],0x1023,*(undefined4 *)((int)param_2 + 0x38));
  }
  if (param_1[0x12] != *(int *)((int)param_2 + 0x1c)) {
    param_1[0x12] = *(int *)((int)param_2 + 0x1c);
    alSourcei(param_1[0x1b],0x1001,*(undefined4 *)((int)param_2 + 0x1c));
  }
  if (param_1[0x13] != *(int *)((int)param_2 + 0x20)) {
    param_1[0x13] = *(int *)((int)param_2 + 0x20);
    alSourcei(param_1[0x1b],0x1002,*(undefined4 *)((int)param_2 + 0x20));
  }
  if (param_1[0x17] != *(int *)((int)param_2 + 0x30)) {
    param_1[0x17] = *(int *)((int)param_2 + 0x30);
    dVar7 = _DAT_0430dbe8;
    dVar13 = DAT_0430dbe0;
    dVar12 = pow(_DAT_0430dbe8,(double)param_1[8] / DAT_0430dbe0);
    dVar13 = pow(dVar7,(double)param_1[0x17] / dVar13);
    alSourcef(param_1[0x1b],0x1022,(float)dVar13 / (float)dVar12);
  }
LAB_040fa705:
  alProcessUpdatesSOFT();
  return;
}

// --- UpdateBuffer @0x040f8c60 ---
/* source: backendOpenALSoft */

void UpdateBuffer(void)

{
  uint uVar1;
  int local_10 [2];
  
  alcGetIntegerv(DAT_044fa4cc,0x312,1,local_10);
  uVar1 = (DAT_044fa4dc - DAT_044fa4e4) / DAT_044fa4d8;
  if ((int)uVar1 < local_10[0]) {
    alcCaptureSamples(DAT_044fa4cc,DAT_044fa4e4 + DAT_044fa4e0,uVar1);
    local_10[0] = local_10[0] - uVar1;
    if (DAT_044fa4dc <= DAT_044fa4d8 * local_10[0] && DAT_044fa4d8 * local_10[0] - DAT_044fa4dc != 0
       ) {
      FUN_0400a810("capturedSamples * sAudioCaptureSampleSize <= sAudioCaptureBufferSize",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/dsound/backendOpenALSoft.cpp"
                   ,0x416,"void UpdateBuffer()");
    }
    alcCaptureSamples(DAT_044fa4cc,DAT_044fa4e0,local_10[0]);
    DAT_044fa4e4 = local_10[0] * DAT_044fa4d8;
    return;
  }
  alcCaptureSamples(DAT_044fa4cc,DAT_044fa4e4 + DAT_044fa4e0,local_10[0]);
  DAT_044fa4e4 = DAT_044fa4e4 + local_10[0] * DAT_044fa4d8;
  return;
}

// --- backendOpenALSoft_040f8d80 @0x040f8d80 ---
/* source: backendOpenALSoft */

undefined4 __regparm3
backendOpenALSoft_040f8d80
          (short *param_1,int *param_2,undefined4 *param_3,int *param_4,int *param_5,
          undefined1 *param_6)

{
  short *__s1;
  short sVar1;
  bool bVar2;
  int iVar3;
  byte bVar4;
  undefined1 uVar5;
  
  sVar1 = *param_1;
  if (sVar1 == -2) {
    if ((ushort)param_1[8] < 0x16) {
      FUN_0400a810("format->Format.cbSize >= 22",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/dsound/backendOpenALSoft.cpp"
                   ,0x108,"AudioFormatType DetermineAudioFormatType(const WAVEFORMATEXTENSIBLE*)");
    }
    __s1 = param_1 + 0xc;
    iVar3 = memcmp(__s1,&DAT_042db6d8,0x10);
    bVar4 = 1;
    if (iVar3 != 0) {
      iVar3 = memcmp(__s1,&DAT_042db6c8,0x10);
      bVar4 = 2;
      if (iVar3 != 0) {
        iVar3 = memcmp(__s1,&DAT_042db6b8,0x10);
        bVar4 = -(iVar3 == 0) & 3;
      }
    }
  }
  else {
    bVar4 = 1;
    if ((sVar1 != 1) && (bVar4 = 2, sVar1 != 2)) {
      bVar4 = (sVar1 == 3) * '\x03';
    }
  }
  if (param_1[1] == 1) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    if (param_1[1] != 2) {
      FUN_0402cd10(0xf,"Unsupported amount of channels per sample!");
      return 0;
    }
  }
  if (bVar4 == 1) {
    sVar1 = param_1[7];
    if (sVar1 == 8) {
      *param_2 = (-(uint)!bVar2 & 0xfffffffe) + 0x1102;
      *param_4 = 2 - (uint)!bVar2;
      uVar5 = 0;
    }
    else if (sVar1 == 0x10) {
      *param_2 = (-(uint)!bVar2 & 0xfffffffe) + 0x1103;
      *param_4 = (-(uint)!bVar2 & 0xfffffffe) + 4;
      uVar5 = 0;
    }
    else {
      if (sVar1 != 0x20) {
        FUN_0402cd10(0xf,"Unsupported amount of bits per sample!");
        return 0;
      }
      *param_2 = (int)&DAT_00010011 - (uint)!bVar2;
      *param_4 = (-(uint)!bVar2 & 0xfffffffc) + 8;
      uVar5 = 1;
    }
  }
  else if (bVar4 == 3) {
    *param_2 = (int)&DAT_00010011 - (uint)!bVar2;
    *param_4 = (-(uint)!bVar2 & 0xfffffffc) + 8;
    uVar5 = 0;
  }
  else {
    if (bVar4 != 2) {
      FUN_0402cd10(0xf,"OpenAL Source creation: unsupported sound format!");
      return 0;
    }
    *param_2 = 0x1303 - (uint)!bVar2;
    *param_4 = 0;
    uVar5 = 0;
  }
  *param_3 = *(undefined4 *)(param_1 + 2);
  *param_5 = 2 - (uint)!bVar2;
  *param_6 = uVar5;
  return 1;
}

// --- backendOpenALSoft_040f9890 @0x040f9890 ---
/* source: backendOpenALSoft */

void backendOpenALSoft_040f9890(int *param_1)

{
  int iVar1;
  char **ppcVar2;
  undefined1 local_28 [8];
  undefined4 uStack_20;
  char *local_1c;
  char *local_18;
  int local_14;
  char *local_10;
  
  ppcVar2 = &local_1c;
  iVar1 = param_1[6];
  param_1[6] = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    if (param_1[1] != *param_1) {
      local_10 = "DSoundBackend_Buffer::~DSoundBackend_Buffer()";
      local_14 = 0x4c;
      local_18 = 
      "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/dsound/backendOpenALSoft.cpp"
      ;
      local_1c = "Sources.empty()";
                    /* try { // try from 040f98d2 to 040f98f9 has its CatchHandler @ 040f992a */
      uStack_20 = 0x40f98d7;
      FUN_0400a810();
    }
    if (param_1[3] != 0) {
      iVar1 = param_1[4];
      uStack_20 = 0x40f98e6;
      local_1c = (char *)eON_GetProcessHeap();
      local_18 = (char *)0x0;
      uStack_20 = 0x40f98fa;
      local_14 = iVar1;
      eON_HeapFree();
      ppcVar2 = (char **)local_28;
    }
    if (*param_1 != 0) {
      *ppcVar2 = (char *)*param_1;
      ppcVar2[-1] = (char *)0x40f990b;
      operator_delete(*ppcVar2);
    }
    operator_delete(param_1);
    return;
  }
  return;
}

// --- backendOpenALSoft_040f9dc0 @0x040f9dc0 ---
/* source: backendOpenALSoft */

void backendOpenALSoft_040f9dc0(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char **ppcVar8;
  undefined1 local_48 [8];
  undefined4 uStack_40;
  char *local_3c;
  char *local_38;
  int local_34;
  char *local_30;
  int local_20;
  
  ppcVar8 = &local_3c;
  if (param_1 == (int *)0x0) {
    return;
  }
  local_3c = (char *)param_1[0x1b];
  uStack_40 = 0x40f9ddf;
  alSourceStop();
  iVar7 = *param_1;
  if (iVar7 != 0) {
    puVar4 = *(undefined4 **)(iVar7 + 0x44);
    iVar6 = *(int *)(iVar7 + 0x48) - (int)puVar4 >> 2;
    if (iVar6 != 0) {
      iVar5 = 0;
      piVar2 = (int *)*puVar4;
      puVar1 = puVar4;
      while (param_1 != piVar2) {
        iVar5 = iVar5 + 1;
        if (iVar6 == iVar5) goto LAB_040f9e1a;
        puVar1 = puVar4 + iVar5;
        piVar2 = (int *)*puVar1;
      }
      *puVar1 = *(undefined4 *)(*(int *)(iVar7 + 0x48) + -4);
      *(int *)(*param_1 + 0x48) = *(int *)(*param_1 + 0x48) + -4;
    }
LAB_040f9e1a:
    *param_1 = 0;
  }
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    local_20 = piVar2[1];
    puVar4 = (undefined4 *)*piVar2;
    iVar7 = local_20 - (int)puVar4 >> 2;
    if (iVar7 == 0) {
LAB_040f9e62:
      iVar7 = piVar2[6] + -1;
      piVar2[6] = iVar7;
    }
    else {
      iVar6 = 0;
      piVar3 = (int *)*puVar4;
      puVar1 = puVar4;
      while (param_1 != piVar3) {
        iVar6 = iVar6 + 1;
        if (iVar6 == iVar7) goto LAB_040f9e62;
        puVar1 = puVar4 + iVar6;
        piVar3 = (int *)*puVar1;
      }
      *puVar1 = *(undefined4 *)(local_20 + -4);
      *(int *)(param_1[1] + 4) = *(int *)(param_1[1] + 4) + -4;
      piVar2 = (int *)param_1[1];
      iVar7 = piVar2[6] + -1;
      piVar2[6] = iVar7;
    }
    ppcVar8 = &local_3c;
    if (iVar7 == 0) {
      if (piVar2[1] != *piVar2) {
        local_30 = "DSoundBackend_Buffer::~DSoundBackend_Buffer()";
        local_34 = 0x4c;
        local_38 = 
        "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/dsound/backendOpenALSoft.cpp"
        ;
        local_3c = "Sources.empty()";
                    /* try { // try from 040f9e95 to 040f9ebc has its CatchHandler @ 040f9f98 */
        uStack_40 = 0x40f9e9a;
        FUN_0400a810();
      }
      ppcVar8 = &local_3c;
      if (piVar2[3] != 0) {
        iVar7 = piVar2[4];
        uStack_40 = 0x40f9ea9;
        local_3c = (char *)eON_GetProcessHeap();
        local_38 = (char *)0x0;
        uStack_40 = 0x40f9ebd;
        local_34 = iVar7;
        eON_HeapFree();
        ppcVar8 = (char **)local_48;
      }
      if (*piVar2 != 0) {
        *ppcVar8 = (char *)*piVar2;
        ppcVar8[-1] = (char *)0x40f9ece;
        operator_delete(*ppcVar8);
      }
      *ppcVar8 = (char *)piVar2;
      ppcVar8[-1] = (char *)0x40f9ed6;
      operator_delete(*ppcVar8);
    }
    param_1[1] = 0;
  }
  if (param_1[0x1b] != 0) {
    *ppcVar8 = (char *)0x1;
    ppcVar8[1] = (char *)(param_1 + 0x1b);
    ppcVar8[-1] = (char *)0x40f9f83;
    alDeleteSources();
    param_1[0x1b] = 0;
  }
  if (param_1[0x1c] == 0) {
    operator_delete(param_1);
    return;
  }
  *ppcVar8 = (char *)0x1;
  ppcVar8[1] = (char *)(param_1 + 0x1c);
  ppcVar8[-1] = (char *)0x40f9f13;
  alDeleteBuffers();
  param_1[0x1c] = 0;
  operator_delete(param_1);
  return;
}

// --- backendOpenALSoft_040faf00 @0x040faf00 ---
/* source: backendOpenALSoft */

int * backendOpenALSoft_040faf00
                (int param_1,undefined4 param_2,int param_3,byte param_4,undefined1 param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  int *piVar13;
  int *piVar14;
  undefined1 local_68 [8];
  undefined4 uStackY_60;
  int *local_20 [4];
  
  piVar13 = (int *)&stack0xffffffa4;
  piVar10 = (int *)&stack0xffffffa4;
  puVar12 = (undefined4 *)&stack0xffffffa4;
  piVar11 = (int *)&stack0xffffffa4;
  uStackY_60 = 0x40faf21;
  piVar5 = operator_new(0x74);
  *piVar5 = 0;
  *(byte *)(piVar5 + 6) = param_4;
  piVar5[1] = 0;
  *(undefined1 *)((int)piVar5 + 0x19) = param_5;
  piVar5[4] = 0;
  *(undefined1 *)((int)piVar5 + 0x1a) = 0;
  *(undefined1 *)((int)piVar5 + 0x1b) = 0;
  piVar5[8] = 0;
  piVar5[9] = 0x3f800000;
  piVar5[10] = 0;
  piVar5[0x1b] = 0;
  piVar5[0x1c] = 0;
  uStackY_60 = 0x40faf84;
  local_20[0] = piVar5;
  bzero(piVar5 + 0xb,0x40);
  piVar5[0xb] = 0x40;
  piVar5[0x12] = 0x168;
  piVar5[0x13] = 0x168;
  piVar5[0x17] = 0;
  piVar5[0x18] = 0x3f800000;
  piVar5[0x19] = 0x4e6e6b28;
  piVar5[0x1a] = 0;
  uStackY_60 = 0x40fafda;
  cVar4 = backendOpenALSoft_040f8d80();
  piVar5 = local_20[0];
  if (cVar4 == '\0') {
    if (local_20[0] == (int *)0x0) {
      return (int *)0x0;
    }
    uStackY_60 = 0x40faff8;
    alSourceStop();
    iVar8 = *piVar5;
    if (iVar8 != 0) {
      puVar12 = *(undefined4 **)(iVar8 + 0x44);
      iVar7 = *(int *)(iVar8 + 0x48) - (int)puVar12 >> 2;
      if (iVar7 != 0) {
        iVar6 = 0;
        piVar10 = (int *)*puVar12;
        puVar3 = puVar12;
        while (piVar5 != piVar10) {
          iVar6 = iVar6 + 1;
          if (iVar6 == iVar7) goto LAB_040fb032;
          puVar3 = puVar12 + iVar6;
          piVar10 = (int *)*puVar3;
        }
        *puVar3 = *(undefined4 *)(*(int *)(iVar8 + 0x48) + -4);
        *(int *)(*piVar5 + 0x48) = *(int *)(*piVar5 + 0x48) + -4;
      }
LAB_040fb032:
      *piVar5 = 0;
    }
    piVar14 = (int *)piVar5[1];
    puVar12 = (undefined4 *)&stack0xffffffa4;
    if (piVar14 == (int *)0x0) goto LAB_040fb0f5;
    puVar12 = (undefined4 *)*piVar14;
    iVar8 = piVar14[1] - (int)puVar12 >> 2;
    if (iVar8 != 0) {
      iVar7 = 0;
      piVar10 = (int *)*puVar12;
      puVar3 = puVar12;
      while (piVar5 != piVar10) {
        iVar7 = iVar7 + 1;
        if (iVar8 == iVar7) goto LAB_040fb07a;
        puVar3 = puVar12 + iVar7;
        piVar10 = (int *)*puVar3;
      }
      *puVar3 = *(undefined4 *)(piVar14[1] + -4);
      *(int *)(piVar5[1] + 4) = *(int *)(piVar5[1] + 4) + -4;
      piVar14 = (int *)piVar5[1];
    }
LAB_040fb07a:
    iVar8 = piVar14[6];
    piVar14[6] = iVar8 + -1;
    piVar11 = (int *)&stack0xffffffa4;
    if (iVar8 + -1 == 0) {
      if (piVar14[1] != *piVar14) {
                    /* try { // try from 040fb0ad to 040fb0d4 has its CatchHandler @ 040fb474 */
        uStackY_60 = 0x40fb0b2;
        FUN_0400a810();
      }
      piVar10 = (int *)&stack0xffffffa4;
      if (piVar14[3] != 0) {
        uStackY_60 = 0x40fb0c1;
        eON_GetProcessHeap();
        uStackY_60 = 0x40fb0d5;
        eON_HeapFree();
LAB_040fb0d5:
        piVar10 = (int *)local_68;
      }
LAB_040fb0d8:
      if (*piVar14 != 0) {
        *piVar10 = *piVar14;
        piVar10[-1] = 0x40fb0e6;
        operator_delete((void *)*piVar10);
      }
      *piVar10 = (int)piVar14;
      piVar10[-1] = 0x40fb0ee;
      operator_delete((void *)*piVar10);
      piVar11 = piVar10;
    }
  }
  else {
    uStackY_60 = 0x40fb15e;
    alGenBuffers();
    piVar5 = local_20[0];
    iVar8 = local_20[0][0x1c];
    if (iVar8 != 0) {
      iVar7 = local_20[0][4];
      iVar6 = *(int *)(param_3 + 0x14);
      uVar9 = *(uint *)(param_3 + 0xc);
      if (uVar9 == 0) {
        uStackY_60 = 0x40fb404;
        eON_GetProcessHeap();
        uStackY_60 = 0x40fb41e;
        iVar8 = HeapAlloc();
        *(int *)(param_3 + 0x10) = iVar8;
        piVar13 = (int *)local_68;
        uVar9 = iVar8 + 0xfU & 0xfffffff0;
        *(uint *)(param_3 + 0xc) = uVar9;
        iVar8 = local_20[0][0x1c];
      }
      piVar13[2] = uVar9;
      piVar13[4] = iVar7;
      piVar13[3] = iVar6;
      iVar7 = local_20[0][2];
      *piVar13 = iVar8;
      piVar13[1] = iVar7;
      piVar13[-1] = 0x40fb2f8;
      alBufferData();
      puVar3 = *(undefined4 **)(param_3 + 4);
      puVar12 = *(undefined4 **)(param_3 + 8);
      local_20[0][1] = param_3;
      if (puVar3 == puVar12) {
        piVar13[1] = (int)puVar3;
        piVar13[2] = (int)local_20;
        *piVar13 = param_3;
        piVar13[-1] = 0x40fb46c;
        FUN_040fb490();
      }
      else {
        iVar8 = 0;
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = local_20[0];
          iVar8 = *(int *)(param_3 + 4);
        }
        *(int *)(param_3 + 4) = iVar8 + 4;
      }
      *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
      *piVar13 = 1;
      piVar13[1] = (int)(local_20[0] + 0x1b);
      piVar13[-1] = 0x40fb33e;
      alGenSources();
      piVar13[1] = 1;
      piVar13[2] = (int)(local_20[0] + 0x1c);
      *piVar13 = local_20[0][0x1b];
      piVar13[-1] = 0x40fb35b;
      alSourceQueueBuffers();
      piVar13[2] = (uint)(param_4 ^ 1);
      piVar13[1] = 0x202;
      *piVar13 = local_20[0][0x1b];
      piVar13[-1] = 0x40fb375;
      alSourcei();
      piVar13[2] = 0x3f800000;
      piVar13[1] = 0x1022;
      *piVar13 = local_20[0][0x1b];
      piVar13[-1] = 0x40fb393;
      alSourcef();
      *local_20[0] = param_1;
      puVar12 = *(undefined4 **)(param_1 + 0x48);
      if (puVar12 != *(undefined4 **)(param_1 + 0x4c)) {
        iVar8 = 0;
        if (puVar12 != (undefined4 *)0x0) {
          *puVar12 = local_20[0];
          iVar8 = *(int *)(param_1 + 0x48);
        }
        *(int *)(param_1 + 0x48) = iVar8 + 4;
        return local_20[0];
      }
      piVar13[1] = (int)puVar12;
      piVar13[2] = (int)local_20;
      *piVar13 = param_1 + 0x44;
      piVar13[-1] = 0x40fb451;
      FUN_040fb490();
      return local_20[0];
    }
    uStackY_60 = 0x40fb177;
    alSourceStop();
    iVar8 = *piVar5;
    if (iVar8 != 0) {
      puVar3 = *(undefined4 **)(iVar8 + 0x44);
      iVar7 = *(int *)(iVar8 + 0x48) - (int)puVar3 >> 2;
      if (iVar7 != 0) {
        iVar6 = 0;
        piVar14 = (int *)*puVar3;
        puVar1 = puVar3;
        while (piVar5 != piVar14) {
          iVar6 = iVar6 + 1;
          if (iVar6 == iVar7) goto LAB_040fb1b2;
          puVar1 = puVar3 + iVar6;
          piVar14 = (int *)*puVar1;
        }
        *puVar1 = *(undefined4 *)(*(int *)(iVar8 + 0x48) + -4);
        *(int *)(*piVar5 + 0x48) = *(int *)(*piVar5 + 0x48) + -4;
      }
LAB_040fb1b2:
      *piVar5 = 0;
    }
    piVar14 = (int *)piVar5[1];
    if (piVar14 == (int *)0x0) goto LAB_040fb0f5;
    puVar12 = (undefined4 *)*piVar14;
    iVar8 = piVar14[1] - (int)puVar12 >> 2;
    if (iVar8 != 0) {
      iVar7 = 0;
      piVar2 = (int *)*puVar12;
      puVar3 = puVar12;
      while (piVar5 != piVar2) {
        iVar7 = iVar7 + 1;
        if (iVar7 == iVar8) goto LAB_040fb1fa;
        puVar3 = puVar12 + iVar7;
        piVar2 = (int *)*puVar3;
      }
      *puVar3 = *(undefined4 *)(piVar14[1] + -4);
      *(int *)(piVar5[1] + 4) = *(int *)(piVar5[1] + 4) + -4;
      piVar14 = (int *)piVar5[1];
    }
LAB_040fb1fa:
    iVar8 = piVar14[6];
    piVar14[6] = iVar8 + -1;
    if (iVar8 + -1 == 0) {
      if (piVar14[1] != *piVar14) {
                    /* try { // try from 040fb231 to 040fb25c has its CatchHandler @ 040fb48c */
        uStackY_60 = 0x40fb236;
        FUN_0400a810();
      }
      if (piVar14[3] != 0) {
        uStackY_60 = 0x40fb249;
        eON_GetProcessHeap();
        uStackY_60 = 0x40fb25d;
        eON_HeapFree();
        goto LAB_040fb0d5;
      }
      goto LAB_040fb0d8;
    }
  }
  piVar5[1] = 0;
  puVar12 = piVar11;
LAB_040fb0f5:
  if (piVar5[0x1b] != 0) {
    *puVar12 = 1;
    puVar12[1] = piVar5 + 0x1b;
    puVar12[-1] = 0x40fb2b3;
    alDeleteSources();
    piVar5[0x1b] = 0;
  }
  if (piVar5[0x1c] != 0) {
    *puVar12 = 1;
    puVar12[1] = piVar5 + 0x1c;
    puVar12[-1] = 0x40fb11a;
    alDeleteBuffers();
    piVar5[0x1c] = 0;
  }
  *puVar12 = piVar5;
  puVar12[-1] = 0x40fb129;
  operator_delete((void *)*puVar12);
  return (int *)0x0;
}

// --- attached helper FUN_000f9020 @0x040f9020 (call-graph exclusive to this TU) ---
void FUN_040f9020(int param_1)

{
  bzero((void *)(param_1 + 0x2c),0x40);
  *(undefined4 *)(param_1 + 0x2c) = 0x40;
  *(undefined4 *)(param_1 + 0x48) = 0x168;
  *(undefined4 *)(param_1 + 0x4c) = 0x168;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
  *(undefined4 *)(param_1 + 100) = 0x4e6e6b28;
  *(undefined4 *)(param_1 + 0x68) = 0;
  backendOpenALSoft_040f8d80(param_1 + 0xc,param_1 + 0x14,param_1 + 0x1c);
  return;
}

// --- attached helper FUN_000fae10 @0x040fae10 (call-graph exclusive to this TU) ---
void FUN_040fae10(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  UpdateBuffer();
  uVar1 = DAT_044fa4e4;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = DAT_044fa4e4;
  }
  *param_1 = uVar1;
  return;
}

// --- attached helper FUN_000fae40 @0x040fae40 (call-graph exclusive to this TU) ---
void FUN_040fae40(uint param_1,int param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  UpdateBuffer();
  iVar2 = DAT_044fa4e0;
  uVar1 = DAT_044fa4dc;
  param_1 = param_1 % DAT_044fa4dc;
  iVar3 = (param_2 + param_1) - DAT_044fa4dc;
  *param_3 = DAT_044fa4e0 + param_1;
  if (iVar3 < 1) {
    *param_4 = param_2;
    if (param_5 != (int *)0x0) {
      *param_5 = 0;
    }
    if (param_6 != (int *)0x0) {
      *param_6 = 0;
      return;
    }
  }
  else {
    *param_4 = uVar1 - param_1;
    if (param_5 != (int *)0x0) {
      *param_5 = iVar2;
    }
    if (param_6 != (int *)0x0) {
      *param_6 = iVar3;
    }
  }
  return;
}

// --- attached helper FUN_000fe730 @0x040fe730 (call-graph exclusive to this TU) ---
void FUN_040fe730(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int **ppiVar4;
  int aiStack_38 [3];
  int *local_2c [9];
  
  ppiVar4 = local_2c;
  *param_1 = &PTR_FUN_0430e568;
  param_1[6] = 0;
  if ((int *)param_1[5] != (int *)0x0) {
                    /* try { // try from 040fe751 to 040fe784 has its CatchHandler @ 040fe7b1 */
    aiStack_38[2] = 0x40fe756;
    local_2c[0] = (int *)param_1[5];
    backendOpenALSoft_040f9dc0();
    param_1[5] = 0;
  }
  piVar1 = (int *)param_1[0xd];
  if (piVar1 != (int *)0x0) {
    aiStack_38[2] = 0x40fe76c;
    local_2c[0] = piVar1;
    (**(code **)(*piVar1 + 8))();
    ppiVar4 = (int **)(aiStack_38 + 2);
    param_1[0xd] = 0;
  }
  piVar1 = (int *)param_1[0xe];
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *ppiVar4 = piVar1;
    pcVar3 = *(code **)(iVar2 + 8);
    ppiVar4[-1] = (int *)0x40fe785;
    (*pcVar3)();
    ppiVar4 = ppiVar4 + -1;
    param_1[0xe] = 0;
  }
  if (param_1[7] != 0) {
    *ppiVar4 = (int *)param_1[7];
    ppiVar4[-1] = (int *)0x40fe79e;
    free(*ppiVar4);
    param_1[7] = 0;
  }
  FUN_04030320();
  return;
}

// --- attached helper FUN_000feea0 @0x040feea0 (call-graph exclusive to this TU) ---
void FUN_040feea0(void)

{
  DSoundBackend_SourceSet3DProperties();
  return;
}

