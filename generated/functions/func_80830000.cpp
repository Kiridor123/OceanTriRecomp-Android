#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80830000(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r1 = ctx->gpr[1];

    goto loc_80830000;

loc_80830000:
{
    r1 = (r1 + 32);
    ctx->gpr[1] = r1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000002 gpr_write=0x00000002 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80830000 func_80830000 preserves=true fpr_mask=0x00000000
