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
BP(0x041a5dd0)   # the 390-call-site mystery
BP(0x0419cb30)   # _glewInit_GL_EXT_direct_state_access (named; control)
gdb.execute('run')
print('=== EXITED ===', flush=True)
print('STATS:', {hex(k): v for k, v in STATS.items()}, flush=True)
