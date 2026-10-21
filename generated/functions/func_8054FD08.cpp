#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8054FD08(CpuContext* MKW_RESTRICT ctx)
{
    MKW_GUEST_ENTER(0x8054FD08u);
    goto loc_8054FD08;

loc_8054FD08:
{
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8054FD08 func_8054FD08 preserves=true fpr_mask=0x00000000
