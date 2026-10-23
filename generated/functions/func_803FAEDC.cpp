#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803FAEDC(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_803FAEDC;

loc_803FAEDC:
{
    // inline leaf 0x803C9944 (1 guest instruction(s))
    // end of inlined leaf 0x803C9944
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803FAEDC func_803FAEDC preserves=true fpr_mask=0x00000000
