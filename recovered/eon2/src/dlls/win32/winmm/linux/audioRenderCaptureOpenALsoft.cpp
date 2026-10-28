// Recovered source: eon2/src/dlls/win32/winmm/linux/audioRenderCaptureOpenALsoft.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- AudioUnit_Create @0x0418b0f0 ---
/* source: audioRenderCaptureOpenALsoft */

void * AudioUnit_Create(int param_1,char param_2)

{
  char cVar1;
  void *pvVar2;
  
  if ((param_1 != 0) && (param_2 == '\0')) {
    if (*(int *)(param_1 + 4) != 0) {
      FUN_0400a810("forAudioCapture == captureDevice",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/winmm/linux/audioRenderCaptureOpenALsoft.cpp"
                   ,0xd8,
                   "void* AudioUnit_Create(eON_AudioDevice, bool, void*, void*, const WAVEFORMATEXTENSIBLE*, int32_t)"
                  );
    }
    pvVar2 = operator_new(0x14);
    cVar1 = audioRenderCaptureOpenALsoft_0418ad90((int)pvVar2 + 8);
    if ((cVar1 != '\0') && (cVar1 = FUN_0400dd30(), cVar1 != '\0')) {
      alGenSources(1,(int)pvVar2 + 0x10);
      if (*(int *)((int)pvVar2 + 0x10) != 0) {
        alSourcei(*(int *)((int)pvVar2 + 0x10),0x202,1);
        alSourcef(*(undefined4 *)((int)pvVar2 + 0x10),0x100a,0x3f800000);
        alSourcei(*(undefined4 *)((int)pvVar2 + 0x10),0x1007,0);
        *(undefined1 *)((int)pvVar2 + 0xc) = 0;
        return pvVar2;
      }
    }
    operator_delete(pvVar2);
    return (void *)0x0;
  }
  return (void *)0x0;
}

// --- AudioUnit_DetermineDefaultMixFormat @0x0418b010 ---
/* source: audioRenderCaptureOpenALsoft */

undefined4 AudioUnit_DetermineDefaultMixFormat(int param_1,char param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (param_2 == '\0')) {
    if (*(int *)(param_1 + 4) != 0) {
      FUN_0400a810("forAudioCapture == captureDevice",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/winmm/linux/audioRenderCaptureOpenALsoft.cpp"
                   ,0x93,
                   "bool AudioUnit_DetermineDefaultMixFormat(eON_AudioDevice, bool, WAVEFORMATEXTENSIBLE*)"
                  );
    }
    *(undefined2 *)(param_3 + 2) = 2;
    uVar1 = 1;
    *(undefined4 *)(param_3 + 4) = 0xac44;
    *(undefined2 *)(param_3 + 0xe) = 0x10;
    *(undefined2 *)(param_3 + 0xc) = 4;
    *(undefined **)(param_3 + 8) = &DAT_0002b110;
    *(undefined2 *)(param_3 + 0x12) = 0x10;
    *(undefined4 *)(param_3 + 0x14) = 3;
  }
  return uVar1;
}

// --- AudioUnit_IsFormatSupported @0x0418b090 ---
/* source: audioRenderCaptureOpenALsoft */

byte AudioUnit_IsFormatSupported(int param_1,char param_2)

{
  byte bVar1;
  undefined1 local_10 [12];
  
  bVar1 = 0;
  if ((param_1 != 0) && (param_2 == '\0')) {
    if (*(int *)(param_1 + 4) != 0) {
      FUN_0400a810("forAudioCapture == captureDevice",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/winmm/linux/audioRenderCaptureOpenALsoft.cpp"
                   ,0xb3,
                   "int32_t AudioUnit_IsFormatSupported(eON_AudioDevice, bool, const WAVEFORMATEXTENSIBLE*)"
                  );
    }
    bVar1 = audioRenderCaptureOpenALsoft_0418ad90(local_10);
    bVar1 = bVar1 ^ 1;
  }
  return bVar1;
}

// --- AudioUnit_SubmitData @0x0418b3b0 ---
/* source: audioRenderCaptureOpenALsoft */

undefined4 AudioUnit_SubmitData(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_a4 [128];
  undefined4 local_24;
  int local_20 [4];
  
  uVar3 = 0;
  if (param_1 != (undefined4 *)0x0) {
    local_24 = 0;
    alGenBuffers(1,&local_24);
    cVar2 = alIsBuffer(local_24);
    if (cVar2 == '\0') {
      FUN_0400a810("alIsBuffer( alBuf )",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/winmm/linux/audioRenderCaptureOpenALsoft.cpp"
                   ,0x187,"bool AudioUnit_SubmitData(eON_AudioUnit, LPVOID, ULONG, bool)");
    }
    alBufferData(local_24,*param_1,param_2,param_3 * param_1[2],param_1[1]);
    alSourceQueueBuffers(param_1[4],1,&local_24);
    if (*(char *)(param_1 + 3) != '\0') {
      alGetSourcei(param_1[4],0x1010,local_20);
      if (local_20[0] != 0x1012) {
        alSourcePlay(param_1[4]);
      }
    }
    uVar1 = param_1[4];
    alGetSourcei(uVar1,0x1016,local_20);
    uVar3 = 1;
    if (local_20[0] != 0) {
      do {
        iVar4 = 0x20;
        if (local_20[0] < 0x21) {
          iVar4 = local_20[0];
        }
        alSourceUnqueueBuffers(uVar1,iVar4,local_a4);
        alDeleteBuffers(iVar4,local_a4);
        local_20[0] = local_20[0] - iVar4;
      } while (local_20[0] != 0);
      uVar3 = 1;
    }
  }
  return uVar3;
}

// --- audioRenderCaptureOpenALsoft_0418ad90 @0x0418ad90 ---
/* source: audioRenderCaptureOpenALsoft */

undefined4 __regparm3
audioRenderCaptureOpenALsoft_0418ad90(short *param_1,int *param_2,undefined4 *param_3,int *param_4)

{
  short *__s1;
  short sVar1;
  bool bVar2;
  int iVar3;
  byte bVar4;
  
  sVar1 = *param_1;
  if (sVar1 == -2) {
    if ((ushort)param_1[8] < 0x16) {
      FUN_0400a810("format->Format.cbSize >= 22",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/winmm/linux/audioRenderCaptureOpenALsoft.cpp"
                   ,0x37,"AudioFormatType DetermineAudioFormatType(const WAVEFORMATEXTENSIBLE*)");
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
    if (param_1[7] == 8) {
      *param_2 = (-(uint)!bVar2 & 0xfffffffe) + 0x1102;
      *param_4 = 2 - (uint)!bVar2;
    }
    else {
      if (param_1[7] != 0x10) {
        FUN_0402cd10(0xf,"unsupported amount of bits per sample!");
        return 0;
      }
      *param_2 = (-(uint)!bVar2 & 0xfffffffe) + 0x1103;
      *param_4 = (-(uint)!bVar2 & 0xfffffffe) + 4;
    }
  }
  else if (bVar4 == 3) {
    *param_2 = (int)&DAT_00010011 - (uint)!bVar2;
    *param_4 = (-(uint)!bVar2 & 0xfffffffc) + 8;
  }
  else {
    if (bVar4 != 2) {
      FUN_0402cd10(0xf,"OpenAL Source creation: unsupported sound format!");
      return 0;
    }
    *param_2 = 0x1303 - (uint)!bVar2;
    *param_4 = 0;
  }
  *param_3 = *(undefined4 *)(param_1 + 2);
  return 1;
}

