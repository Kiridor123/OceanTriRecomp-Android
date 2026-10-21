#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050000(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r1 = ctx->gpr[1];

    MKW_GUEST_ENTER(0x80050000u);
    goto loc_80050000;

loc_80050000:
{
    r1 = (r1 + 1072);
    ctx->gpr[1] = r1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000002 gpr_write=0x00000002 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80050000 func_80050000 preserves=true fpr_mask=0x00000000
