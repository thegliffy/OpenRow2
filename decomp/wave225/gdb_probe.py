import gdb, time

TARGETS = ('.vpp_pc', '.tbl', 'engine.var', 'objects.dfo', 'df.dat',
           'EonRegistry', '.bbsave', 'dfts.dat', 'dftm.dat', 'profile.dat')

def setup():
    gdb.execute('set pagination off')
    gdb.execute('set breakpoint pending on')
    for s in ('SIGSEGV', 'SIGPIPE', 'SIGUSR1', 'SIGUSR2', 'SIGWINCH'):
        try:
            gdb.execute('handle %s nostop noprint pass' % s)
        except Exception:
            pass

class BP(gdb.Breakpoint):
    def __init__(self, spec, reg):
        gdb.Breakpoint.__init__(self, spec, internal=True)
        self.silent = True
        self.reg = reg
        self.spec = spec
    def stop(self):
        try:
            addr = int(gdb.selected_frame().read_register(self.reg)) & 0xffffffff
            s = gdb.Value(addr).cast(gdb.lookup_type('char').pointer()).string()
        except Exception:
            return False
        if s and any(t in s for t in TARGETS):
            print('\n[HIT %s] %s -> %s' % (self.spec, time.strftime('%H:%M:%S'), s), flush=True)
            gdb.execute('bt 12')
        return False

setup()
BP('openat', 'ecx')
BP('open', 'ebx')
BP('open64', 'ebx')
BP('fopen', 'ebx')
BP('fopen64', 'ebx')
gdb.execute('run')
