// Recovered source: eon2/src/dlls/directx/xaudio2_full/audioconverter.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- AudioConverter::AudioConverter @0x041018c0 ---
/* WARNING: Removing unreachable block (ram,0x04101af9) */
/* source: audioconverter */

void AudioConverter__AudioConverter(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 == 0) {
    FUN_0400a810("format",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/audioconverter.cpp"
                 ,0x3c,"AudioConverter::AudioConverter(const WAVEFORMATEX*)");
  }
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_044fa500);
  if (iVar1 == 0) {
    if ((DAT_044fa518 == '\0') && (iVar1 = __cxa_guard_acquire(&DAT_044fa518), iVar1 != 0)) {
                    /* try { // try from 041019d0 to 04101a58 has its CatchHandler @ 04101b09 */
      av_register_all();
      av_log_set_callback(libav_LogCallback);
      av_log_set_level(0x10);
      uVar2 = avformat_configuration();
      FUN_0402cd10(0x14,"libav configuration: %s",uVar2);
      FUN_0402cd10(0x14,"Available libav codecs:");
      for (puVar3 = (undefined4 *)av_codec_next(0); puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)av_codec_next(puVar3)) {
        FUN_0402cd10(0x14,"\t(%s) %s",*puVar3,puVar3[1]);
      }
      __cxa_guard_release(&DAT_044fa518);
    }
                    /* try { // try from 04101921 to 041019a5 has its CatchHandler @ 04101b34 */
    uVar2 = audioconverter_04101780(param_2);
    iVar1 = avcodec_find_decoder(uVar2);
    *param_1 = iVar1;
    if (iVar1 == 0) {
                    /* try { // try from 04101a8f to 04101ac3 has its CatchHandler @ 04101b34 */
      FUN_0400a810("mCodec",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/audioconverter.cpp"
                   ,0x43,"AudioConverter::AudioConverter(const WAVEFORMATEX*)");
      iVar1 = *param_1;
    }
    iVar1 = avcodec_alloc_context3(iVar1);
    param_1[1] = iVar1;
    if (iVar1 == 0) {
      FUN_0400a810("mContext",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/audioconverter.cpp"
                   ,0x46,"AudioConverter::AudioConverter(const WAVEFORMATEX*)");
      iVar1 = param_1[1];
    }
    *(undefined4 *)(iVar1 + 0x19c) = *(undefined4 *)(param_2 + 4);
    *(uint *)(iVar1 + 0x1a0) = (uint)*(ushort *)(param_2 + 2);
    *(uint *)(iVar1 + 0x1b0) = (uint)*(ushort *)(param_2 + 0xc);
    iVar1 = avcodec_open2(iVar1,*param_1,0);
    if (iVar1 != 0) {
      FUN_0400a810("ret == 0",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/audioconverter.cpp"
                   ,0x4d,"AudioConverter::AudioConverter(const WAVEFORMATEX*)");
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_044fa500);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar1);
}

// --- AudioConverter::Convert @0x04101b40 ---
/* source: audioconverter */

undefined4 * AudioConverter__Convert(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iStack_2ee70;
  undefined1 auStack_2ee68 [192000];
  undefined1 local_68 [20];
  int local_54;
  int local_50;
  undefined *local_20 [4];
  
  av_init_packet(local_68);
  *param_1 = 0;
  local_50 = param_4;
  local_54 = param_3;
  param_1[1] = 0;
  param_1[2] = 0;
  if (0 < param_4) {
    iStack_2ee70 = 0;
    do {
      local_20[0] = &DAT_0002ee00;
      iVar1 = avcodec_decode_audio3(*(undefined4 *)(param_2 + 4),auStack_2ee68,local_20,local_68);
      if (iVar1 < 0) {
        FUN_0400a810("!\"Decoding error\"",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/audioconverter.cpp"
                     ,0x8f,"AudioBufferS16 AudioConverter::Convert(const void*, int)");
        return param_1;
      }
      local_54 = local_54 + iVar1;
      local_50 = local_50 - iVar1;
                    /* try { // try from 04101bba to 04101c20 has its CatchHandler @ 04101c30 */
      vector___M_range_insert(param_1,param_1[1],auStack_2ee68,auStack_2ee68 + (int)local_20[0],0);
      iStack_2ee70 = iStack_2ee70 + iVar1;
    } while (iStack_2ee70 < param_4);
  }
  return param_1;
}

// --- AudioConverter::DetermineAudioFormatType @0x04101780 ---
/* source: audioconverter */

undefined * audioconverter_04101780(short *param_1)

{
  short sVar1;
  undefined *puVar2;
  int iVar3;
  
  sVar1 = *param_1;
  if (sVar1 == -2) {
    if ((ushort)param_1[8] < 0x16) {
      FUN_0400a810("format->cbSize >= 22",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/directx/xaudio2_full/audioconverter.cpp"
                   ,0x62,"static int AudioConverter::DetermineAudioFormatType(const WAVEFORMATEX*)")
      ;
    }
    param_1 = param_1 + 0xc;
    iVar3 = memcmp(param_1,&DAT_042db6d8,0x10);
    puVar2 = (undefined *)0x10000;
    if (iVar3 != 0) {
      iVar3 = memcmp(param_1,&DAT_042db6c8,0x10);
      puVar2 = &DAT_00011006;
      if (iVar3 != 0) {
        iVar3 = memcmp(param_1,&DAT_042db6b8,0x10);
        puVar2 = &DAT_00010015;
        if (iVar3 != 0) {
          iVar3 = memcmp(param_1,&DAT_042db6a8,0x10);
          puVar2 = (undefined *)((-(uint)(iVar3 == 0) & 0x15009) - 1);
        }
      }
    }
  }
  else {
    puVar2 = (undefined *)0x10000;
    if (((sVar1 != 1) && (puVar2 = &DAT_00011006, sVar1 != 2)) &&
       (puVar2 = (undefined *)0xffffffff, sVar1 == 3)) {
      puVar2 = &DAT_00010015;
    }
  }
  return puVar2;
}

