#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803CCFE8(CpuContext* MKW_RESTRICT ctx)
{
    MKW_GUEST_ENTER(0x803CCFE8u);
    goto loc_803CCFE8;

loc_803CCFE8:
{
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803CCFE8 func_803CCFE8 preserves=true fpr_mask=0x00000000
