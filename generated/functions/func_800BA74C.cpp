#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800BA74C(CpuContext* MKW_RESTRICT ctx)
{
    MKW_GUEST_ENTER(0x800BA74Cu);
    goto loc_800BA74C;

loc_800BA74C:
{
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800BA74C func_800BA74C preserves=true fpr_mask=0x00000000
