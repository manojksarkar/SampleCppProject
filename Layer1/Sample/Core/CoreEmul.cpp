#include "Core.h"

// Emulator/stub translation unit. Excluded from analysis by default via the *emul*
// filename pattern (3.1); only parsed when --include-emulator is passed. Kept minimal
// and valid C++ so an opt-in full-pipeline run still compiles.

PUBLIC int coreEmulRead(int addr) {
    // Fake register read — host emulator build only.
    return addr & 0xFF;
}

PUBLIC int coreEmulWrite(int addr, int val) {
    if (addr < 0) {
        return -1;
    }
    return val;
}
