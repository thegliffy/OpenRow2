import gdb, time

STATS = {}
FIRST = {}

def setup():
    gdb.execute('set pagination off')
    gdb.execute('set breakpoint pending on')
    for s in ('SIGSEGV', 'SIGPIPE', 'SIGUSR1', 'SIGUSR2', 'SIGWINCH'):
        try:
            gdb.execute('handle %s nostop noprint pass' % s)
        except Exception:
            pass

class BP(gdb.Breakpoint):
    def __init__(self, addr):
        gdb.Breakpoint.__init__(self, '*0x%x' % addr, internal=True)
        self.silent = True
        self.addr = addr
    def stop(self):
        try:
            f = gdb.selected_frame()
            sp = int(f.read_register('esp')) & 0xffffffff
            ret = int(gdb.Value(sp).cast(gdb.lookup_type('unsigned int').pointer()).dereference())
            a0 = int(gdb.Value(sp + 4).cast(gdb.lookup_type('unsigned int').pointer()).dereference())
            a1 = int(gdb.Value(sp + 8).cast(gdb.lookup_type('unsigned int').pointer()).dereference())
        except Exception as e:
            print('[ERR]', e, flush=True)
            return False
        n = STATS.get(self.addr, 0) + 1
        STATS[self.addr] = n
        if n <= 3 or n % 100 == 0:
            print('[HIT 0x%x] n=%d t=%s ret=0x%x a0=0x%x a1=0x%x' % (self.addr, n, time.strftime('%H:%M:%S'), ret, a0, a1), flush=True)
        if n == 1 or n == 5:
            print('--- bt at hit %d for 0x%x ---' % (n, self.addr), flush=True)
            gdb.execute('bt 15')
        return False


setup()
BP(0x41303e0)  # ATTACHED->eon2/src/core/vpfs/file_split_handler.cpp
BP(0x4130770)  # ATTACHED->eon2/src/core/vpfs/file_split_handler.cpp
BP(0x4131330)  # ATTACHED->eon2/src/core/vpfs/file_split_handler.cpp
BP(0x4131a90)  # ATTACHED->eon2/src/core/vpfs/file_split_handler.cpp
BP(0x4048720)  # ATTACHED->eon2/src/core/vpfs/vpfs.cpp
BP(0x40491e0)  # ATTACHED->eon2/src/core/vpfs/vpfs.cpp
BP(0x412a830)  # ATTACHED->eon2/src/core/vpfs/vpfs.cpp
BP(0x41322f0)  # ATTACHED->eon2/src/core/vpfs/vpfs.cpp
BP(0x4132670)  # ATTACHED->eon2/src/core/vpfs/vpfs.cpp
BP(0x4132930)  # ATTACHED->eon2/src/core/vpfs/vpfs.cpp
BP(0x41329c0)  # ATTACHED->eon2/src/core/vpfs/vpfs.cpp
BP(0x4132c20)  # ATTACHED->eon2/src/core/vpfs/vpfs.cpp
BP(0x41336d0)  # ATTACHED->eon2/src/core/vpfs/vpfs.cpp
BP(0x4133970)  # ATTACHED->eon2/src/core/vpfs/vpfs.cpp
BP(0x4134010)  # ATTACHED->eon2/src/core/vpfs/vpfs.cpp
BP(0x41340d0)  # ATTACHED->eon2/src/core/vpfs/vpfs.cpp
BP(0x4048720)  # ATTACHED->eon2/src/core/vpfs/vpfsdb.cpp
BP(0x40491e0)  # ATTACHED->eon2/src/core/vpfs/vpfsdb.cpp
BP(0x404c310)  # ATTACHED->eon2/src/core/vpfs/vpfsdb.cpp
BP(0x4065980)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40659c0)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x4068380)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x4068b60)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x4068b90)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x4068c80)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x4068cb0)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x4069140)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x4069170)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x4069320)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x4069350)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x406a680)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x406a6b0)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x406b560)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x406b580)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x406b680)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x406c130)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x406c190)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x406c1f0)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x406c260)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x406c2c0)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x406c370)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x406ecc0)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x406ed40)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x409ca70)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40a3b40)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40a3ba0)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40a3c80)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40a41d0)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40a4260)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40a4e20)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40a4e80)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40a5010)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40a5070)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40a5100)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40a5ea0)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40a5ec0)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40a5f30)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40a61c0)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40a62f0)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40a6410)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40a6470)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40a64c0)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40a6880)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40a68a0)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40abb90)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40ac500)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40ac520)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40ac6d0)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40ac760)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40b0f80)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40b1420)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40b15e0)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40b1640)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40b1720)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40b2e80)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40b2f00)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40b3050)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40b4b70)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40b4c00)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40b5920)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40b5d90)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40b5e00)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40b5f30)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40b6140)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40b61c0)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40b6460)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40b8240)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40b82c0)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40b8330)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40b83c0)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40b8450)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40b84f0)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x40b8e00)  # ATTACHED->eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp
BP(0x413d940)  # ATTACHED->eon2/src/dlls/win32/kernel32/mem_vm.cpp
BP(0x413df00)  # ATTACHED->eon2/src/dlls/win32/kernel32/mem_vm.cpp
BP(0x413e290)  # ATTACHED->eon2/src/dlls/win32/kernel32/mem_vm.cpp
BP(0x4131a90)  # ATTACHED->eon2/src/dlls/win32/kernel32/synchronisationPrimitives.cpp
BP(0x41493c0)  # ATTACHED->eon2/src/dlls/win32/kernel32/synchronisationPrimitives.cpp
BP(0x4149570)  # ATTACHED->eon2/src/dlls/win32/kernel32/synchronisationPrimitives.cpp
BP(0x403c430)  # ANCHOR:eon2/src/core/vpfs/file_split_handler.cpp:SplitFile_Close
BP(0x403c510)  # ANCHOR:eon2/src/core/vpfs/file_split_handler.cpp:SplitFile_GetStat
BP(0x403c5d0)  # ANCHOR:eon2/src/core/vpfs/file_split_handler.cpp:SplitFile_GetStatFromHandle
BP(0x403d290)  # ANCHOR:eon2/src/core/vpfs/vpfs.cpp:TemporaryDirElemList_Add
BP(0x403c760)  # ANCHOR:eon2/src/core/vpfs/vpfs.cpp:TransferBufferSet
BP(0x403d5d0)  # ANCHOR:eon2/src/core/vpfs/vpfs.cpp:VPFS_Config_Prepare
BP(0x403f740)  # ANCHOR:eon2/src/core/vpfs/vpfs.cpp:VPFS_ConvertDiskFileToWriteableLocation
BP(0x4044c70)  # ANCHOR:eon2/src/core/vpfs/vpfs.cpp:VPFS_ConvertToDiskFile
BP(0x4047590)  # ANCHOR:eon2/src/core/vpfs/vpfs.cpp:VPFS_CreateFolder
BP(0x4047a10)  # ANCHOR:eon2/src/core/vpfs/vpfs.cpp:VPFS_Delete
BP(0x4043b00)  # ANCHOR:eon2/src/core/vpfs/vpfs.cpp:VPFS_GetDateTime
BP(0x404c640)  # ANCHOR:eon2/src/core/vpfs/vpfsdb.cpp:VPFSDB_AddAttributes
BP(0x404c740)  # ANCHOR:eon2/src/core/vpfs/vpfsdb.cpp:VPFSDB_AddCreationTime
BP(0x404c870)  # ANCHOR:eon2/src/core/vpfs/vpfsdb.cpp:VPFSDB_AddModificationTime
BP(0x404bc90)  # ANCHOR:eon2/src/core/vpfs/vpfsdb.cpp:VPFSDB_Init
BP(0x404c1f0)  # ANCHOR:eon2/src/core/vpfs/vpfsdb.cpp:VPFSDB_ReleaseObject
BP(0x404c6b0)  # ANCHOR:eon2/src/core/vpfs/vpfsdb.cpp:VPFSDB_RemoveAttributes
BP(0x404c7e0)  # ANCHOR:eon2/src/core/vpfs/vpfsdb.cpp:VPFSDB_RemoveCreationTime
BP(0x404c910)  # ANCHOR:eon2/src/core/vpfs/vpfsdb.cpp:VPFSDB_RemoveModificationTime
BP(0x409aff0)  # ANCHOR:eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp:Direct3DDevice9::Initialize
BP(0x4075ca0)  # ANCHOR:eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp:Direct3DDevice9Imp::ColorFill
BP(0x4077590)  # ANCHOR:eon2/src/dlls/directx/d3d9/direct3ddevice9imp.cpp:Direct3DDevice9Imp::CreateDepthStencilSurface
BP(0x413b450)  # ANCHOR:eon2/src/dlls/win32/kernel32/mem_vm.cpp:GetPagesProtection
BP(0x413b6a0)  # ANCHOR:eon2/src/dlls/win32/kernel32/mem_vm.cpp:Win32ToInternalProtectFlags
BP(0x413ca20)  # ANCHOR:eon2/src/dlls/win32/kernel32/mem_vm.cpp:custom_munmap
BP(0x413e320)  # ANCHOR:eon2/src/dlls/win32/kernel32/mem_vm.cpp:eON_VirtualAllocEx
BP(0x413e790)  # ANCHOR:eon2/src/dlls/win32/kernel32/mem_vm.cpp:eON_VirtualFreeEx
BP(0x413d7d0)  # ANCHOR:eon2/src/dlls/win32/kernel32/mem_vm.cpp:getProcessVMInfo
BP(0x413d0a0)  # ANCHOR:eon2/src/dlls/win32/kernel32/mem_vm.cpp:vmm_CommitRegion
BP(0x413cfa0)  # ANCHOR:eon2/src/dlls/win32/kernel32/mem_vm.cpp:vmm_DeleteReservedRegion
BP(0x4148b80)  # ANCHOR:eon2/src/dlls/win32/kernel32/synchronisationPrimitives.cpp:OpenObjectByName
BP(0x41496e0)  # ANCHOR:eon2/src/dlls/win32/kernel32/synchronisationPrimitives.cpp:OverlappedIOThreadFunction
BP(0x4148280)  # ANCHOR:eon2/src/dlls/win32/kernel32/synchronisationPrimitives.cpp:SignalObject
BP(0x4147e80)  # ANCHOR:eon2/src/dlls/win32/kernel32/synchronisationPrimitives.cpp:SignalledFor
BP(0x4149e90)  # ANCHOR:eon2/src/dlls/win32/kernel32/synchronisationPrimitives.cpp:Synchronisation_AddedMessageToThread
BP(0x414c4a0)  # ANCHOR:eon2/src/dlls/win32/kernel32/synchronisationPrimitives.cpp:Synchronisation_CloseHandle
BP(0x41960a0)  # ANCHOR:eon2/src/dlls/win32/winsock/winsock.cpp:AddEthernetInterface
BP(0x4192bb0)  # ANCHOR:eon2/src/dlls/win32/winsock/winsock.cpp:eON_WSARecvFrom
BP(0x41932d0)  # ANCHOR:eon2/src/dlls/win32/winsock/winsock.cpp:eON_WSASendTo
BP(0x4193c50)  # ANCHOR:eon2/src/dlls/win32/winsock/winsock.cpp:eON_WSAStartup
BP(0x41937b0)  # ANCHOR:eon2/src/dlls/win32/winsock/winsock.cpp:eON_bind
BP(0x4194570)  # ANCHOR:eon2/src/dlls/win32/winsock/winsock.cpp:eON_connect
BP(0x4196c10)  # ANCHOR:eon2/src/dlls/win32/winsock/winsock.cpp:eON_getnameinfo
BP(0x4194db0)  # ANCHOR:eon2/src/dlls/win32/winsock/winsock.cpp:eON_getsockname
BP(0x41c5ba0)  # ANCHOR:eon2/src/thirdParty/tinyxml/tinyxml.cpp:TiXmlAttributeSet::Add
BP(0x41c2150)  # ANCHOR:eon2/src/thirdParty/tinyxml/tinyxml.cpp:TiXmlAttributeSet::FindOrCreate
BP(0x41c5c20)  # ANCHOR:eon2/src/thirdParty/tinyxml/tinyxml.cpp:TiXmlAttributeSet::Remove
BP(0x41c5740)  # ANCHOR:eon2/src/thirdParty/tinyxml/tinyxml.cpp:TiXmlAttributeSet::~TiXmlAttributeSet
BP(0x41c16b0)  # ANCHOR:eon2/src/thirdParty/tinyxml/tinyxml.cpp:TiXmlComment::Print
BP(0x41c4320)  # ANCHOR:eon2/src/thirdParty/tinyxml/tinyxml.cpp:TiXmlDocument::LoadFile
BP(0x41c4a90)  # ANCHOR:eon2/src/thirdParty/tinyxml/tinyxml.cpp:TiXmlDocument::Print
BP(0x41c34b0)  # ANCHOR:eon2/src/thirdParty/tinyxml/tinyxml.cpp:TiXmlElement::RemoveAttribute
BP(0x41c7020)  # ANCHOR:eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp:TiXmlBase::GetEntity
BP(0x41c6f20)  # ANCHOR:eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp:TiXmlBase::ReadName
BP(0x41c73a0)  # ANCHOR:eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp:TiXmlBase::ReadText
BP(0x41c6930)  # ANCHOR:eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp:TiXmlBase::StringEqual
BP(0x41c8ef0)  # ANCHOR:eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp:TiXmlComment::Parse
BP(0x41c9360)  # ANCHOR:eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp:TiXmlDeclaration::Parse
BP(0x41c8330)  # ANCHOR:eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp:TiXmlDocument::Parse
BP(0x41c7dd0)  # ANCHOR:eon2/src/thirdParty/tinyxml/tinyxmlparser.cpp:TiXmlDocument::SetError
gdb.execute('run')
print('=== EXITED ===', flush=True)
print('STATS:', {hex(k): v for k, v in STATS.items()}, flush=True)
