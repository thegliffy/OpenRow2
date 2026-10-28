// Recovered source: eon2/src/dlls/win32/winsock/winsock.cpp
// Bodies: Ghidra decompile (live MCP) for named members; corpus decompile
// for call-graph-attached unnamed helpers. Not compiled — recovery draft.

// --- AddEthernetInterface @0x041960a0 ---
/* source: winsock */

undefined4
AddEthernetInterface
          (undefined4 param_1,int param_2,int *param_3,uint param_4,undefined2 *param_5,uint param_6
          ,uint *param_7)

{
  undefined2 uVar1;
  undefined2 *__dest;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int *__ptr;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  bool bVar14;
  byte bVar15;
  undefined4 local_dc;
  size_t *local_d8;
  undefined4 local_d4;
  undefined1 local_ac [4];
  undefined2 local_a8;
  undefined2 local_a6;
  undefined4 local_a4;
  undefined2 local_90;
  undefined2 local_8e;
  undefined4 local_8c;
  undefined2 local_78;
  undefined2 local_76;
  undefined4 local_74;
  int local_50;
  size_t local_28;
  undefined4 *local_24;
  undefined1 *local_18;
  
  puVar3 = param_7;
  uVar2 = param_6;
  __dest = param_5;
  bVar15 = 0;
  local_18 = (undefined1 *)&param_1;
  if (param_2 != -0x7ffb8b81) {
    if (param_2 == -0x37ffffec) {
      puVar9 = (undefined4 *)&stack0xffffff30;
      if ((((0xf < param_4) && (puVar9 = (undefined4 *)&stack0xffffff30, param_3 != (int *)0x0)) &&
          (puVar9 = (undefined4 *)&stack0xffffff30, 0xf < param_6)) &&
         ((puVar9 = (undefined4 *)&stack0xffffff30, param_5 != (undefined2 *)0x0 &&
          (puVar9 = (undefined4 *)&stack0xffffff30, param_7 != (uint *)0x0)))) {
        if ((short)*param_3 != 2) {
          local_d4 = 0x419650c;
          eON_SetLastError();
          return 0xffffffff;
        }
        local_d4 = 0x41961b8;
        iVar4 = eON_Int_LookupRoute();
        puVar9 = &local_dc;
        if (iVar4 == 0) {
          local_d8 = &local_28;
          local_28 = 0;
          local_d4 = 0;
          local_dc = 0;
          iVar4 = eON_GetIpAddrTable();
          puVar9 = (undefined4 *)&stack0xffffff18;
          if (iVar4 == 0x7a) {
            __ptr = malloc(local_28);
            iVar4 = eON_GetIpAddrTable();
            if ((iVar4 == 0) && (iVar4 = *__ptr, iVar4 != 0)) {
              iVar5 = 0;
              piVar6 = __ptr;
              iVar12 = iVar4;
              do {
                if (piVar6[2] == local_50) {
                  iVar12 = iVar5;
                }
                iVar5 = iVar5 + 1;
                piVar6 = piVar6 + 6;
              } while (iVar5 != iVar4);
              if (iVar5 != iVar12) {
                bzero(__dest,0x10);
                *__dest = 2;
                *(int *)(__dest + 2) = __ptr[iVar12 * 6 + 1];
                free(__ptr);
                *puVar3 = 0x10;
                return 0;
              }
            }
            free(__ptr);
            eON_SetLastError(0x271e);
            return 0xffffffff;
          }
        }
      }
    }
    else {
      if (param_2 != -0x67fffff4) {
        return 0x2726;
      }
      puVar9 = (undefined4 *)&stack0xffffff30;
      if ((3 < param_4) && (puVar9 = (undefined4 *)&stack0xffffff30, param_3 != (int *)0x0)) {
        if (*param_3 == 0) {
          return 0;
        }
        local_d4 = 0x4196297;
        FUN_0402cd10();
        return 0;
      }
    }
    *puVar9 = 0x271e;
    puVar9[-1] = 0x419633c;
    eON_SetLastError();
    return 0xffffffff;
  }
  if (DAT_0451c444 == (void *)0x0) {
    local_24 = (undefined4 *)0x0;
    local_d4 = 0x4196368;
    iVar4 = getifaddrs();
    puVar9 = local_24;
    if (iVar4 == -1) {
      local_d4 = 0x41965e4;
      __errno_location();
      local_d4 = 0x41965fe;
      FUN_0402cd10();
    }
    else {
      for (; puVar9 != (undefined4 *)0x0; puVar9 = (undefined4 *)*puVar9) {
        if (((short *)puVar9[3] != (short *)0x0) && (*(short *)puVar9[3] == 2)) {
          local_d4 = 0x41963c5;
          bzero(local_ac,0x4c);
          uVar10 = puVar9[2];
          if ((uVar10 & 1) != 0) {
            local_ac = (undefined1  [4])((uint)local_ac | 1);
          }
          if ((uVar10 & 2) != 0) {
            local_ac = (undefined1  [4])((uint)local_ac | 2);
          }
          if ((uVar10 & 8) != 0) {
            local_ac = (undefined1  [4])((uint)local_ac | 4);
          }
          if ((uVar10 & 0x10) != 0) {
            local_ac = (undefined1  [4])((uint)local_ac | 8);
          }
          if ((uVar10 & 0x1000) != 0) {
            local_ac = (undefined1  [4])((uint)local_ac | 0x10);
          }
          local_a8 = 2;
          local_a6 = 0;
          local_a4 = *(undefined4 *)(puVar9[3] + 4);
          local_78 = 2;
          local_76 = 0;
          if (puVar9[4] == 0) {
            local_74 = 0xffffffff;
          }
          else {
            local_74 = *(undefined4 *)(puVar9[4] + 4);
          }
          local_90 = 2;
          local_8e = 0;
          if ((puVar9[5] == 0) || ((*(byte *)(puVar9 + 2) & 0x12) == 0)) {
            local_8c = 0xffffffff;
          }
          else {
            local_8c = *(undefined4 *)(puVar9[5] + 4);
          }
          if (DAT_0451c444 == (void *)0x0) {
            local_d4 = 0x4196615;
            DAT_0451c444 = malloc(0x4c);
          }
          else {
            if (DAT_0451c440 == 0) {
              local_d4 = 0x4196593;
              FUN_0400a810();
            }
            local_d4 = 0x4196498;
            DAT_0451c444 = realloc(DAT_0451c444,(DAT_0451c440 + 1) * 0x4c);
          }
          puVar11 = (undefined4 *)local_ac;
          puVar8 = (undefined4 *)(DAT_0451c440 * 0x4c + (int)DAT_0451c444);
          uVar10 = 0x4c;
          bVar14 = ((uint)puVar8 & 1) != 0;
          puVar13 = puVar8;
          if (bVar14) {
            puVar11 = (undefined4 *)(local_ac + 1);
            puVar13 = (undefined4 *)((int)puVar8 + 1);
            *(undefined1 *)puVar8 = local_ac[0];
            uVar10 = 0x4b;
          }
          if (((uint)puVar13 & 2) != 0) {
            uVar1 = *(undefined2 *)puVar11;
            uVar10 = uVar10 - 2;
            puVar11 = (undefined4 *)((int)puVar11 + 2);
            *(undefined2 *)puVar13 = uVar1;
            puVar13 = (undefined4 *)((int)puVar13 + 2);
          }
          iVar4 = 0;
          for (uVar7 = uVar10 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar13 = *puVar11;
            puVar11 = puVar11 + (uint)bVar15 * -2 + 1;
            puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
          }
          if ((uVar10 & 2) != 0) {
            *(undefined2 *)puVar13 = *(undefined2 *)puVar11;
            iVar4 = 2;
          }
          if (bVar14) {
            *(undefined1 *)((int)puVar13 + iVar4) = *(undefined1 *)((int)puVar11 + iVar4);
          }
          DAT_0451c440 = DAT_0451c440 + 1;
        }
      }
      local_d4 = 0x419653d;
      freeifaddrs();
    }
    if (DAT_0451c444 == (void *)0x0) {
      return 0x2726;
    }
  }
  if (__dest == (undefined2 *)0x0) {
    return 0x2726;
  }
  if (puVar3 == (uint *)0x0) {
    return 0x2726;
  }
  uVar10 = DAT_0451c440 * 0x4c;
  if (uVar2 <= uVar10 && uVar10 - uVar2 != 0) {
    return 0x271e;
  }
  local_d4 = 0x4196152;
  memcpy(__dest,DAT_0451c444,uVar10);
  *puVar3 = uVar10;
  return 0;
}

// --- eON_WSARecvFrom @0x04192bb0 ---
/* source: winsock */

int eON_WSARecvFrom(uint param_1,size_t *param_2,uint param_3,ssize_t *param_4,uint *param_5,
                   undefined4 *param_6,uint *param_7,undefined4 *param_8,int param_9)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint __fd;
  size_t *psVar4;
  ssize_t *psVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  uint *puVar14;
  void *pvVar15;
  ssize_t sVar16;
  undefined *puVar17;
  undefined *puVar18;
  size_t *psVar19;
  undefined4 local_fc;
  char *local_f8;
  undefined4 uStackY_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  code *local_dc;
  int *local_d8;
  undefined *local_84;
  sockaddr local_78 [4];
  uint local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined1 local_28 [4];
  socklen_t local_24 [3];
  undefined4 *local_18;
  
  iVar13 = param_9;
  puVar9 = param_8;
  puVar8 = param_7;
  puVar7 = param_6;
  puVar6 = param_5;
  psVar5 = param_4;
  uVar2 = param_3;
  psVar4 = param_2;
  __fd = param_1;
  local_18 = &param_1;
  eON_SetLastError();
  psVar19 = (size_t *)&stack0xffffff2c;
  local_d8 = (int *)0x4192c2a;
  EventSelect_ClearFlags();
  local_24[0] = 4;
  local_d8 = (int *)0x4192c3d;
  iVar11 = eON_MapSocketOptname_WinToPosix();
  local_d8 = (int *)0x4192c5c;
  iVar11 = getsockopt(__fd,1,iVar11,local_28,local_24);
  if (iVar11 == -1) {
    local_d8 = (int *)0x4192f45;
    piVar12 = __errno_location();
    if (*piVar12 == 9) goto LAB_04192f4e;
  }
  if (__fd == 0xffffffff) {
LAB_04192f4e:
    local_d8 = (int *)0x4192f5a;
    eON_SetLastError();
    return -1;
  }
  if (iVar13 != 0) {
    local_d8 = (int *)0x41930fc;
    FUN_0402cd10();
    return -1;
  }
  if (*puVar6 != 0) {
    local_d8 = (int *)0x419322b;
    FUN_0402cd10();
    return -1;
  }
  if (1 < uVar2) {
    local_d8 = (int *)0x41931b6;
    FUN_0402cd10();
    return -1;
  }
  if (puVar9 == (undefined4 *)0x0) {
    if (uVar2 != 1) {
      local_d8 = (int *)0x4192fda;
      FUN_0400a810();
    }
    local_24[0] = 0x40;
    local_d8 = (int *)0x419300f;
    sVar16 = recvfrom(__fd,(void *)psVar4[1],*psVar4,0,local_78,local_24);
    if (sVar16 != -1) {
      if (psVar5 == (ssize_t *)0x0) {
        local_d8 = (int *)0x419325f;
        FUN_0400a810();
      }
      *psVar5 = sVar16;
      if ((puVar8 != (uint *)0x0) && (*puVar8 < local_24[0])) {
        local_d8 = (int *)0x419319d;
        FUN_0400a810();
      }
      if (puVar7 == (undefined4 *)0x0) {
        return 0;
      }
      *puVar7 = local_78[0]._0_4_;
      puVar7[1] = local_78[0].sa_data._2_4_;
      puVar7[2] = local_78[0].sa_data._6_4_;
      puVar7[3] = local_78[0].sa_data._10_4_;
      if (puVar8 == (uint *)0x0) {
        return 0;
      }
      *puVar8 = local_24[0];
      return 0;
    }
    local_d8 = (int *)0x41930a5;
    piVar12 = __errno_location();
    iVar13 = *piVar12;
    if (iVar13 == 0xe) {
      local_d8 = (int *)0x419328f;
      eON_SetLastError();
      return -1;
    }
    if (iVar13 < 0xf) {
      if (iVar13 == 4) {
        local_d8 = (int *)0x41932c1;
        eON_SetLastError();
        return -1;
      }
      if (iVar13 == 0xb) {
        local_d8 = (int *)0x41932a8;
        eON_SetLastError();
        return -1;
      }
    }
    else {
      if (iVar13 == 0x68) {
        local_d8 = (int *)0x4193276;
        eON_SetLastError();
        return -1;
      }
      if (iVar13 == 0x6b) {
        local_d8 = (int *)0x41930d4;
        eON_SetLastError();
        return -1;
      }
    }
    return -1;
  }
  local_d8 = (int *)0x4192caa;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0451c678);
  if (DAT_0451c668 != (undefined *)0x0) {
    puVar10 = DAT_0451c668;
    puVar17 = &DAT_0451c664;
    do {
      while (puVar18 = puVar10, *(uint *)(puVar18 + 0x10) < __fd) {
        puVar1 = (undefined4 *)(puVar18 + 0xc);
        puVar10 = (undefined *)*puVar1;
        puVar18 = puVar17;
        if ((undefined *)*puVar1 == (undefined *)0x0) goto LAB_04192cd5;
      }
      puVar10 = *(undefined **)(puVar18 + 8);
      puVar17 = puVar18;
    } while (*(undefined **)(puVar18 + 8) != (undefined *)0x0);
LAB_04192cd5:
    if ((puVar18 != &DAT_0451c664) && (*(uint *)(puVar18 + 0x10) <= __fd)) {
      puVar10 = DAT_0451c668;
      puVar17 = &DAT_0451c664;
      do {
        while (puVar18 = puVar10, *(uint *)(puVar18 + 0x10) < __fd) {
          puVar1 = (undefined4 *)(puVar18 + 0xc);
          puVar10 = (undefined *)*puVar1;
          puVar18 = puVar17;
          if ((undefined *)*puVar1 == (undefined *)0x0) goto LAB_04192de5;
        }
        puVar10 = *(undefined **)(puVar18 + 8);
        puVar17 = puVar18;
      } while (*(undefined **)(puVar18 + 8) != (undefined *)0x0);
LAB_04192de5:
      if ((puVar18 == &DAT_0451c664) || (__fd < *(uint *)(puVar18 + 0x10))) {
        local_30 = __fd;
        local_2c = 0;
        local_d8 = (int *)0x4193155;
        FUN_041917a0();
        puVar18 = local_84;
      }
      piVar12 = *(int **)(puVar18 + 0x14);
      if (piVar12[3] != 0) {
        local_d8 = (int *)0x41931cc;
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_0451c678);
        local_d8 = (int *)0x41931d8;
        eON_SetLastError();
        return -1;
      }
      goto LAB_04192e08;
    }
  }
  local_d8 = (int *)0x4192cf2;
  piVar12 = malloc(0x10);
  local_d8 = (int *)0x4192d18;
  iVar13 = eON_CreateEventA();
  piVar12[2] = 0;
  piVar12[1] = iVar13;
  piVar12[3] = 0;
  local_dc = eON_WSARecvFrom_WorkerThread;
  local_e0 = 0x10000;
  local_e4 = 0;
  uStackY_e8 = 0x4192d5c;
  local_d8 = piVar12;
  iVar13 = eON_CreateThread();
  psVar19 = &local_fc;
  *piVar12 = iVar13;
  if (iVar13 == 0) {
    local_f8 = "SOCKETS: Creation of asynchronous eON thread in WSARecvFrom failed!.";
    local_fc = 0xf;
    FUN_0402cd10();
  }
  puVar10 = DAT_0451c668;
  puVar17 = &DAT_0451c664;
  if (DAT_0451c668 == (undefined *)0x0) {
LAB_04192da2:
    local_38 = __fd;
    local_34 = 0;
    FUN_041917a0();
    puVar18 = local_84;
  }
  else {
    do {
      while (puVar18 = puVar10, *(uint *)(puVar18 + 0x10) < __fd) {
        puVar1 = (undefined4 *)(puVar18 + 0xc);
        puVar10 = (undefined *)*puVar1;
        puVar18 = puVar17;
        if ((undefined *)*puVar1 == (undefined *)0x0) goto LAB_04192d95;
      }
      puVar10 = *(undefined **)(puVar18 + 8);
      puVar17 = puVar18;
    } while (*(undefined **)(puVar18 + 8) != (undefined *)0x0);
LAB_04192d95:
    if ((puVar18 == &DAT_0451c664) || (__fd < *(uint *)(puVar18 + 0x10))) goto LAB_04192da2;
  }
  *(int **)(puVar18 + 0x14) = piVar12;
LAB_04192e08:
  *psVar19 = 0x1c;
  psVar19[-1] = 0x4192e14;
  puVar14 = malloc(*psVar19);
  puVar9[1] = 0;
  *puVar9 = puVar14;
  piVar12[3] = (int)puVar9;
  if ((puVar8 != (uint *)0x0) && (puVar7 != (undefined4 *)0x0)) {
    uVar3 = *puVar8;
    if ((int)uVar3 < 0x10) {
      psVar19[2] = uVar3;
      psVar19[1] = (size_t)"SOCKETS: too small address length given to WSARecvFrom: %d.";
      *psVar19 = 0xf;
      psVar19[-1] = 0x419312e;
      FUN_0402cd10();
    }
    else if (uVar3 != 0x10) {
      psVar19[2] = uVar3;
      psVar19[1] = (size_t)"SOCKETS: nonstandard address length given to WSARecvFrom: %d.";
      *psVar19 = 10;
      psVar19[-1] = 0x4192fa0;
      FUN_0402cd10();
    }
  }
  *puVar14 = __fd;
  puVar14[1] = uVar2;
  *psVar19 = uVar2 << 3;
  psVar19[-1] = 0x4192e61;
  pvVar15 = malloc(*psVar19);
  puVar14[2] = (uint)pvVar15;
  psVar19[2] = uVar2 << 3;
  *psVar19 = (size_t)pvVar15;
  psVar19[1] = (size_t)psVar4;
  psVar19[-1] = 0x4192e86;
  memcpy((void *)*psVar19,(void *)psVar19[1],psVar19[2]);
  uVar2 = *puVar6;
  puVar14[6] = 0;
  puVar14[3] = uVar2;
  puVar14[5] = (uint)puVar8;
  puVar14[4] = (uint)puVar7;
  *psVar19 = (size_t)&DAT_0451c678;
  psVar19[-1] = 0x4192ebc;
  pthread_mutex_unlock((pthread_mutex_t *)*psVar19);
  *psVar19 = piVar12[1];
  psVar19[-1] = 0x4192ec7;
  eON_SetEvent();
  psVar19[-1] = 100;
  psVar19[-2] = 0x4192ed6;
  usleep(psVar19[-1]);
  psVar19[-1] = (size_t)&DAT_0451c678;
  psVar19[-2] = 0x4192ee2;
  pthread_mutex_lock((pthread_mutex_t *)psVar19[-1]);
  iVar13 = puVar9[1];
  psVar19[-1] = (size_t)&DAT_0451c678;
  psVar19[-2] = 0x4192ef1;
  pthread_mutex_unlock((pthread_mutex_t *)psVar19[-1]);
  if (iVar13 != 0) {
    psVar19[2] = 0;
    *psVar19 = (size_t)puVar9;
    psVar19[-1] = __fd;
    psVar19[3] = (size_t)puVar6;
    psVar19[1] = (size_t)psVar5;
    psVar19[-2] = 0x4192f21;
    iVar13 = eON_WSAGetOverlappedResult();
    return -(uint)(iVar13 == 0);
  }
  psVar19[-1] = 0x3e5;
  psVar19[-2] = 0x41931f1;
  eON_SetLastError();
  return -1;
}

// --- eON_WSASendTo @0x041932d0 ---
/* source: winsock */

undefined4
eON_WSASendTo(int param_1,size_t *param_2,uint param_3,ssize_t *param_4,uint param_5,void *param_6,
             size_t param_7,int param_8,int param_9)

{
  int iVar1;
  uint uVar2;
  ssize_t *psVar3;
  uint uVar4;
  size_t __n;
  int iVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  ssize_t sVar9;
  int *piVar10;
  size_t __size;
  size_t *psVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  void *__dest;
  undefined4 uStackY_b8;
  sockaddr local_60 [4];
  undefined4 *local_18;
  
  iVar6 = param_9;
  iVar5 = param_8;
  __n = param_7;
  pvVar8 = param_6;
  uVar4 = param_5;
  psVar3 = param_4;
  uVar2 = param_3;
  psVar11 = param_2;
  iVar1 = param_1;
  local_18 = &param_1;
  eON_SetLastError();
  puVar13 = (undefined4 *)&stack0xffffff4c;
  uStackY_b8 = 0x4193335;
  EventSelect_ClearFlags();
  if (iVar1 == -1) {
    uVar12 = 0xffffffff;
    uStackY_b8 = 0x419371d;
    eON_SetLastError();
  }
  else if (iVar6 == 0) {
    if ((uVar4 & 0x8000) == 0) {
      if (__n != 0x10) {
        uStackY_b8 = 0x4193375;
        FUN_0402cd10();
        if (0x40 < (int)__n) {
          uStackY_b8 = 0x419339f;
          FUN_0400a810();
        }
      }
      uStackY_b8 = 0x41933b5;
      memcpy(local_60,pvVar8,__n);
      if (uVar2 == 0) {
        uStackY_b8 = 0x4193504;
        FUN_0400a810();
        __size = *psVar11;
        pvVar8 = (void *)psVar11[1];
      }
      else {
        __size = *psVar11;
        pvVar8 = (void *)psVar11[1];
        if (1 < uVar2) {
          uVar7 = 0;
          __size = 0;
          do {
            __size = __size + psVar11[uVar7 * 2];
            uVar7 = uVar7 + 1;
          } while (uVar7 != uVar2);
          uStackY_b8 = 0x41933ef;
          pvVar8 = malloc(__size);
          uVar7 = 0;
          __dest = pvVar8;
          do {
            uVar7 = uVar7 + 1;
            uStackY_b8 = 0x4193418;
            memcpy(__dest,(void *)psVar11[1],*psVar11);
            __dest = (void *)((int)__dest + *psVar11);
            psVar11 = psVar11 + 2;
          } while (uVar7 != uVar2);
        }
      }
      uVar7 = ~-(uint)((uVar4 & 4) == 0) & 4;
      if ((uVar4 & 1) != 0) {
        uVar7 = (-(uint)((uVar4 & 4) == 0) & 0xfffffffc) + 5;
      }
      uStackY_b8 = 0x419346f;
      sVar9 = sendto(iVar1,pvVar8,__size,uVar7,local_60,__n);
      if (sVar9 == -1) {
        uStackY_b8 = 0x4193515;
        piVar10 = __errno_location();
        iVar1 = *piVar10;
        switch(iVar1) {
        default:
          uStackY_b8 = 0x4193534;
          FUN_0402cd10();
          puVar13 = (undefined4 *)&stack0xffffff4c;
          break;
        case 2:
        case 0xc:
        case 0x14:
        case 0x20:
        case 0x5f:
        case 0x6a:
          break;
        case 4:
          uStackY_b8 = 0x41936e6;
          eON_SetLastError();
          puVar13 = &uStackY_b8;
          break;
        case 9:
          uStackY_b8 = 0x41936d2;
          eON_SetLastError();
          puVar13 = &uStackY_b8;
          break;
        case 0xb:
          uStackY_b8 = 0x41936be;
          eON_SetLastError();
          puVar13 = &uStackY_b8;
          break;
        case 0xd:
          uStackY_b8 = 0x41936aa;
          eON_SetLastError();
          puVar13 = &uStackY_b8;
          break;
        case 0xe:
          uStackY_b8 = 0x4193696;
          eON_SetLastError();
          puVar13 = &uStackY_b8;
          break;
        case 0x58:
          uStackY_b8 = 0x4193682;
          eON_SetLastError();
          puVar13 = &uStackY_b8;
          break;
        case 0x59:
          uStackY_b8 = 0x419366e;
          eON_SetLastError();
          puVar13 = &uStackY_b8;
          break;
        case 0x5a:
          uStackY_b8 = 0x419365a;
          eON_SetLastError();
          puVar13 = &uStackY_b8;
          break;
        case 0x61:
          uStackY_b8 = 0x4193646;
          eON_SetLastError();
          puVar13 = &uStackY_b8;
          break;
        case 100:
          uStackY_b8 = 0x4193632;
          eON_SetLastError();
          puVar13 = &uStackY_b8;
          break;
        case 0x65:
          uStackY_b8 = 0x419361e;
          eON_SetLastError();
          puVar13 = &uStackY_b8;
          break;
        case 0x68:
          uStackY_b8 = 0x419360a;
          eON_SetLastError();
          puVar13 = &uStackY_b8;
          break;
        case 0x69:
          uStackY_b8 = 0x41935f6;
          eON_SetLastError();
          puVar13 = &uStackY_b8;
          break;
        case 0x6b:
          uStackY_b8 = 0x41935ce;
          eON_SetLastError();
          puVar13 = &uStackY_b8;
          break;
        case 0x70:
          uStackY_b8 = 0x41935ba;
          eON_SetLastError();
          puVar13 = &uStackY_b8;
          break;
        case 0x71:
          uStackY_b8 = 0x41935e2;
          eON_SetLastError();
          puVar13 = &uStackY_b8;
        }
        if (iVar5 != 0) {
          *(int *)(iVar5 + 0xc) = iVar1;
          *(undefined4 *)(iVar5 + 8) = 0;
          *(undefined4 *)(iVar5 + 4) = 2;
        }
        uVar12 = 0xffffffff;
        if (1 < uVar2) {
          *puVar13 = pvVar8;
          puVar13[-1] = 0x419356a;
          free((void *)*puVar13);
          return 0xffffffff;
        }
      }
      else {
        if (1 < uVar2) {
          uStackY_b8 = 0x4193489;
          free(pvVar8);
        }
        if (psVar3 != (ssize_t *)0x0) {
          *psVar3 = sVar9;
        }
        uVar12 = 0;
        if (iVar5 != 0) {
          *(ssize_t *)(iVar5 + 8) = sVar9;
          *(undefined4 *)(iVar5 + 0xc) = 0;
          *(undefined4 *)(iVar5 + 4) = 2;
          if (*(int *)(iVar5 + 0x10) != 0) {
            uStackY_b8 = 0x41934c4;
            eON_SetEvent();
          }
        }
      }
    }
    else {
      uVar12 = 0xffffffff;
      uStackY_b8 = 0x4193707;
      FUN_0402cd10();
    }
  }
  else {
    uVar12 = 0xffffffff;
    uStackY_b8 = 0x41935a9;
    FUN_0402cd10();
  }
  return uVar12;
}

// --- eON_WSAStartup @0x04193c50 ---
/* source: winsock */

undefined4 eON_WSAStartup(undefined2 param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  pthread_mutexattr_t local_14;
  
  uVar1 = 0x276c;
  cVar3 = (char)param_1;
  if ((cVar3 != '\0') && (uVar1 = 0x271e, param_2 != (undefined2 *)0x0)) {
    if (DAT_0451c690 == '\0') {
      pthread_mutexattr_init(&local_14);
      pthread_mutexattr_settype(&local_14,1);
      iVar2 = pthread_mutex_init((pthread_mutex_t *)&DAT_0451c678,&local_14);
      if (iVar2 != 0) {
        FUN_0400a810("pthread_mutex_init( &gWSARecvFromThreadsRegion, &attr ) == 0",
                     "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/winsock/winsock.cpp"
                     ,0x68d,"INT eON_WSAStartup(WORD, LPWSADATA)");
      }
      pthread_mutexattr_destroy(&local_14);
      DAT_0451c690 = '\x01';
    }
    if (cVar3 == '\x02') {
      cVar3 = (char)((ushort)param_1 >> 8);
      if ((cVar3 == '\x02') || (uVar1 = 0, cVar3 == '\0')) {
        bzero(param_2,400);
        *param_2 = 2;
        uVar1 = 0;
        param_2[1] = 0x202;
        *(undefined4 *)(param_2 + 2) = 0x536e6957;
        *(undefined4 *)(param_2 + 4) = 0x206b636f;
        *(undefined **)(param_2 + 6) = &DAT_00302e32;
        *(undefined4 *)((int)param_2 + 0x105) = 0x6e6e7552;
        *(undefined **)((int)param_2 + 0x109) = &DAT_00676e69;
        param_2[0xc3] = 0;
        param_2[0xc4] = 0;
      }
    }
    else {
      uVar1 = 0;
      if (cVar3 == '\x01') {
        *param_2 = param_1;
        param_2[1] = 0x202;
        *(undefined4 *)(param_2 + 2) = 0x536e6957;
        *(undefined4 *)(param_2 + 4) = 0x206b636f;
        *(undefined **)(param_2 + 6) = &DAT_00302e32;
        *(undefined4 *)((int)param_2 + 0x105) = 0x6e6e7552;
        *(undefined **)((int)param_2 + 0x109) = &DAT_00676e69;
        param_2[0xc3] = 0x7fff;
        param_2[0xc4] = 0xffbb;
      }
    }
  }
  return uVar1;
}

// --- eON_bind @0x041937b0 ---
/* source: winsock */

int eON_bind(int param_1,short *param_2,size_t param_3)

{
  short *psVar1;
  int __fd;
  size_t __n;
  int *piVar2;
  int iVar3;
  undefined1 local_64 [8];
  char local_5c;
  char local_5b;
  char local_5a;
  char local_59;
  char local_58;
  char local_57;
  char local_56;
  char local_55;
  int *local_24 [3];
  undefined4 *local_18;
  
  __n = param_3;
  psVar1 = param_2;
  __fd = param_1;
  local_18 = &param_1;
  iVar3 = -1;
  if (*param_2 == 2) {
    if (0x40 < (int)param_3) {
      FUN_0400a810("namelen <= 64",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/winsock/winsock.cpp"
                   ,0x527,"INT eON_bind(SOCKET, const eON_sockaddr*, INT)");
    }
    memcpy((sockaddr *)local_64,psVar1,__n);
    local_5c = '\0';
    local_5b = '\0';
    local_5a = '\0';
    local_59 = '\0';
    local_58 = '\0';
    local_57 = '\0';
    local_56 = '\0';
    local_55 = '\0';
    iVar3 = getifaddrs(local_24);
    piVar2 = local_24[0];
    if (iVar3 == 0) {
      for (; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
        while ((((psVar1 = (short *)piVar2[3], psVar1 != (short *)0x0 &&
                 ((*(byte *)(piVar2 + 2) & 1) != 0)) && (*psVar1 == 2)) &&
               (*(undefined **)(psVar1 + 2) != &DAT_0100007f))) {
          piVar2 = (int *)*piVar2;
          if (*(undefined **)(psVar1 + 2) == (undefined *)local_64._4_4_) {
            local_64._4_4_ = (undefined *)0x0;
          }
          if (piVar2 == (int *)0x0) goto LAB_0419387b;
        }
      }
    }
LAB_0419387b:
    freeifaddrs(local_24[0]);
    iVar3 = bind(__fd,(sockaddr *)local_64,__n);
    if (iVar3 == -1) {
      piVar2 = __errno_location();
      switch(*piVar2) {
      case 9:
      case 0x58:
        eON_SetLastError(0x2736);
        break;
      default:
        FUN_0402cd10(0xf,"SOCKETS: unhandled error %d in bind()",*piVar2);
        break;
      case 0xd:
        eON_SetLastError(0x271d);
        break;
      case 0xe:
        eON_SetLastError(0x271e);
        break;
      case 0x16:
        eON_SetLastError(0x2726);
        break;
      case 0x59:
      case 0x5f:
      case 0x61:
        break;
      case 0x62:
        eON_SetLastError(0x2740);
        break;
      case 99:
        eON_SetLastError(0x2741);
        break;
      case 100:
        eON_SetLastError(0x2742);
        break;
      case 0x69:
        eON_SetLastError(0x2747);
      }
    }
  }
  return iVar3;
}

// --- eON_connect @0x04194570 ---
/* source: winsock */

int eON_connect(int param_1,short *param_2,size_t param_3)

{
  int iVar1;
  short *__src;
  size_t __n;
  int *piVar2;
  int iVar3;
  sockaddr local_60 [4];
  undefined4 *local_18;
  
  __n = param_3;
  __src = param_2;
  iVar1 = param_1;
  local_18 = &param_1;
  iVar3 = -1;
  if (*param_2 == 2) {
    if (0x3f < (int)param_3) {
      FUN_0400a810("namelen < 64",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/winsock/winsock.cpp"
                   ,0x88a,"INT eON_connect(SOCKET, const eON_sockaddr*, INT)");
    }
    memcpy(local_60,__src,__n);
    iVar3 = connect(iVar1,local_60,__n);
    if (iVar3 == -1) {
      piVar2 = __errno_location();
      iVar1 = *piVar2;
      if (iVar1 == 0x73) {
        eON_SetLastError(0x2733);
      }
      else {
        switch(iVar1) {
        case 4:
          eON_SetLastError(0x2714);
          break;
        default:
          FUN_0402cd10(0xf,"SOCKETS: unhandled error %d in connect()",iVar1);
          break;
        case 9:
        case 0x58:
          eON_SetLastError(0x2736);
          break;
        case 0xd:
          eON_SetLastError(0x271d);
          break;
        case 0xe:
        case 0x5b:
          eON_SetLastError(0x271e);
          break;
        case 0x16:
          eON_SetLastError(0x2726);
          break;
        case 0x5f:
          break;
        case 0x61:
          eON_SetLastError(0x273f);
          break;
        case 0x62:
          eON_SetLastError(0x2740);
          break;
        case 99:
          eON_SetLastError(0x2741);
          break;
        case 100:
          eON_SetLastError(0x2742);
          break;
        case 0x65:
          eON_SetLastError(0x2743);
          break;
        case 0x69:
          eON_SetLastError(0x2747);
          break;
        case 0x6a:
          eON_SetLastError(0x2748);
          break;
        case 0x6e:
          eON_SetLastError(0x274c);
          break;
        case 0x6f:
          eON_SetLastError(0x274d);
          break;
        case 0x71:
          eON_SetLastError(0x2751);
          break;
        case 0x72:
          eON_SetLastError(0x2735);
        }
      }
    }
  }
  return iVar3;
}

// --- eON_getnameinfo @0x04196c10 ---
/* source: winsock */

int eON_getnameinfo(void *param_1,socklen_t param_2,char *param_3,socklen_t param_4,char *param_5,
                   socklen_t param_6,uint param_7)

{
  void *__src;
  socklen_t __n;
  char *__host;
  socklen_t __hostlen;
  char *__serv;
  socklen_t __servlen;
  uint __flags;
  int iVar1;
  sockaddr local_60 [4];
  undefined4 *local_18;
  
  __flags = param_7;
  __servlen = param_6;
  __serv = param_5;
  __hostlen = param_4;
  __host = param_3;
  __n = param_2;
  __src = param_1;
  local_18 = &param_1;
  if (((int)param_2 < 0x10) || (param_1 == (void *)0x0)) {
    iVar1 = 0x271e;
  }
  else {
    if (0x40 < (int)param_2) {
      FUN_0400a810("salen <= 64",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/winsock/winsock.cpp"
                   ,0xe5c,
                   "INT eON_getnameinfo(const eON_sockaddr*, eON_socklen_t, CHAR*, DWORD, CHAR*, DWORD, INT)"
                  );
    }
    memcpy(local_60,__src,__n);
    iVar1 = getnameinfo(local_60,__n,__host,__hostlen,__serv,__servlen,__flags);
    if (iVar1 != 0) {
      switch(iVar1) {
      case -10:
        eON_SetLastError(8);
        break;
      default:
        FUN_0402cd10(10,
                     "EAI error not mentioned in Windows docs encountered from call of getnameinfo()"
                    );
        break;
      case -6:
        eON_SetLastError(0x273f);
        break;
      case -4:
        eON_SetLastError(0x2afb);
        break;
      case -3:
        eON_SetLastError(0x2afa);
        break;
      case -2:
        eON_SetLastError(0x2af9);
        break;
      case -1:
        eON_SetLastError(0x2726);
      }
    }
  }
  return iVar1;
}

// --- eON_getsockname @0x04194db0 ---
/* source: winsock */

undefined4 eON_getsockname(int param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  sockaddr local_34;
  socklen_t local_24 [4];
  undefined4 *local_14;
  
  piVar3 = param_3;
  puVar1 = param_2;
  local_14 = &param_1;
  if (((param_3 == (int *)0x0) || (param_2 == (undefined4 *)0x0)) || (*param_3 < 0x10)) {
    eON_SetLastError(0x271e);
    return 0xffffffff;
  }
  local_24[0] = 0x10;
  iVar2 = getsockname(param_1,&local_34,local_24);
  if (iVar2 != -1) {
    *puVar1 = local_34._0_4_;
    puVar1[1] = local_34.sa_data._2_4_;
    puVar1[2] = local_34.sa_data._6_4_;
    puVar1[3] = local_34.sa_data._10_4_;
    *piVar3 = 0x10;
    return 0;
  }
  piVar3 = __errno_location();
  iVar2 = *piVar3;
  if (iVar2 == 0xe) {
    FUN_0400a810("false",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/winsock/winsock.cpp"
                 ,0x9ec,"INT eON_getsockname(SOCKET, eON_sockaddr*, INT*)");
LAB_04194ebc:
    eON_SetLastError(0x2726);
  }
  else {
    if (iVar2 < 0xf) {
      if (iVar2 != 9) {
LAB_04194e75:
        FUN_0402cd10(0xf,"SOCKETS: Unhandled error %d in select()",iVar2);
        return 0xffffffff;
      }
    }
    else {
      if (iVar2 == 0x16) goto LAB_04194ebc;
      if (iVar2 != 0x58) goto LAB_04194e75;
    }
    eON_SetLastError(0x2736);
  }
  return 0xffffffff;
}

// --- eON_recvfrom @0x04195750 ---
/* source: winsock */

ssize_t eON_recvfrom(int param_1,void *param_2,size_t param_3,uint param_4,undefined4 *param_5,
                    socklen_t *param_6)

{
  int iVar1;
  void *__buf;
  size_t __n;
  uint uVar2;
  undefined4 *puVar3;
  socklen_t *psVar4;
  uint __flags;
  ssize_t sVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  sockaddr local_64 [4];
  socklen_t local_24 [3];
  undefined4 *local_18;
  
  psVar4 = param_6;
  puVar3 = param_5;
  uVar2 = param_4;
  __n = param_3;
  __buf = param_2;
  iVar1 = param_1;
  local_18 = &param_1;
  eON_SetLastError(0);
  EventSelect_ClearFlags(iVar1,1);
  __flags = 0x100;
  uVar8 = 0;
  if (uVar2 != 0) {
    FUN_0402cd10(10,
                 "SOCKETS: recvfrom() wasn\'t tested with flags in eON yet. Please look at flags handling in your case."
                );
    uVar7 = uVar2 & 2;
    __flags = (-(uint)(uVar7 == 0) & 0xfffffffe) + 0x103;
    uVar8 = (-(uint)(uVar7 == 0) & 0xfffffffe) + 3;
    if ((uVar2 & 1) == 0) {
      __flags = (-(uint)(uVar7 == 0) & 0xfffffffe) + 0x102;
      uVar8 = ~-(uint)(uVar7 == 0) & 2;
    }
  }
  if ((uVar2 & 0x8000) != 0) {
    __flags = uVar8;
  }
  if ((psVar4 != (socklen_t *)0x0) && ((int)*psVar4 < 0x10)) {
    FUN_0402cd10(0xf,"SOCKETS: too small address length given to recvfrom: %d.",*psVar4);
  }
  local_24[0] = 0x40;
  sVar5 = recvfrom(iVar1,__buf,__n,__flags,local_64,local_24);
  if (sVar5 == -1) {
    piVar6 = __errno_location();
    iVar1 = *piVar6;
    if (iVar1 == 0xb) {
      eON_SetLastError(0x2733);
    }
    else if (iVar1 == 0x58) {
      eON_SetLastError(0x3e3);
    }
    else {
      if (iVar1 < 0x59) {
        if (iVar1 == 9) {
          eON_SetLastError(0x2736);
          return -1;
        }
        if (iVar1 < 10) {
          if (iVar1 == 4) {
            eON_SetLastError(0x2714);
            return -1;
          }
        }
        else if ((iVar1 == 0xe) || (iVar1 == 0x16)) {
          eON_SetLastError(0x271e);
          return -1;
        }
      }
      else {
        if (iVar1 == 0x68) {
          eON_SetLastError(0x2746);
          return -1;
        }
        if (iVar1 < 0x69) {
          if (iVar1 == 0x5f) {
            return -1;
          }
        }
        else {
          if (iVar1 == 0x69) {
            eON_SetLastError(0x2747);
            return -1;
          }
          if (iVar1 == 0x6b) {
            eON_SetLastError(0x2749);
            return -1;
          }
        }
      }
      FUN_0402cd10(0xf,"SOCKETS: recvfrom() - unknown error - %d.",iVar1);
    }
  }
  else if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = local_64[0]._0_4_;
    puVar3[1] = local_64[0].sa_data._2_4_;
    puVar3[2] = local_64[0].sa_data._6_4_;
    puVar3[3] = local_64[0].sa_data._10_4_;
    if (psVar4 == (socklen_t *)0x0) {
      FUN_0400a810("fromlen",
                   "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/winsock/winsock.cpp"
                   ,0xb4f,"INT eON_recvfrom(SOCKET, CHAR*, INT, INT, eON_sockaddr*, INT*)");
    }
    *psVar4 = local_24[0];
  }
  return sVar5;
}

// --- eON_sendto @0x04193e00 ---
/* source: winsock */

ssize_t eON_sendto(int param_1,void *param_2,size_t param_3,int param_4,void *param_5,size_t param_6
                  )

{
  int __fd;
  void *__buf;
  size_t __n;
  int iVar1;
  void *__src;
  size_t __n_00;
  ssize_t sVar2;
  int *piVar3;
  sockaddr local_60 [4];
  undefined4 *local_18;
  
  __n_00 = param_6;
  __src = param_5;
  iVar1 = param_4;
  __n = param_3;
  __buf = param_2;
  __fd = param_1;
  local_18 = &param_1;
  eON_SetLastError(0);
  EventSelect_ClearFlags(__fd,2);
  if ((__n_00 != 0x10) &&
     (FUN_0402cd10(10,"SOCKETS: nonstandard address length given to sendto ( %d ).",__n_00),
     0x3f < (int)__n_00)) {
    FUN_0400a810("tolen < 64",
                 "/home/peterm/Development/Projects/eon2-sr2/eon2/src/dlls/win32/winsock/winsock.cpp"
                 ,0x6c8,"INT eON_sendto(SOCKET, const CHAR*, INT, INT, const eON_sockaddr*, INT)");
  }
  memcpy(local_60,__src,__n_00);
  if (__fd == -1) {
    sVar2 = -1;
    eON_SetLastError(0x2736);
  }
  else if (iVar1 == 0) {
    sVar2 = sendto(__fd,__buf,__n,0,local_60,__n_00);
    if (sVar2 == -1) {
      piVar3 = __errno_location();
      switch(*piVar3) {
      default:
        FUN_0402cd10(0xf,"SOCKETS: sendto() - unknown error - %d",*piVar3);
        break;
      case 2:
      case 0xc:
      case 0x14:
      case 0x20:
      case 0x5f:
      case 0x6a:
        break;
      case 4:
        eON_SetLastError(0x2714);
        break;
      case 9:
      case 0x58:
        eON_SetLastError(0x2736);
        break;
      case 0xb:
        eON_SetLastError(0x2733);
        break;
      case 0xd:
        eON_SetLastError(0x271d);
        break;
      case 0xe:
        eON_SetLastError(0x271e);
        break;
      case 0x59:
        eON_SetLastError(0x2737);
        break;
      case 0x5a:
        eON_SetLastError(0x2738);
        break;
      case 0x61:
        eON_SetLastError(0x273f);
        break;
      case 100:
        eON_SetLastError(0x2742);
        break;
      case 0x65:
        eON_SetLastError(0x2743);
        break;
      case 0x68:
        eON_SetLastError(0x2746);
        break;
      case 0x69:
        eON_SetLastError(0x2747);
        break;
      case 0x6b:
        eON_SetLastError(0x2749);
        break;
      case 0x71:
        eON_SetLastError(0x2751);
      }
    }
  }
  else {
    sVar2 = -1;
    FUN_0402cd10(0xf,"SOCKETS: sendto doesn\'t support flags in eON yet. Please handle it.");
  }
  return sVar2;
}

