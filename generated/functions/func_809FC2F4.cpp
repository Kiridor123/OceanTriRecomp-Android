#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809FC2F4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_809FC2F4;

loc_809FC2F4:
{
    r0 = (r4 & 255);
    r0 = (r3 * r0);
    r3 = (r0 & 65535);
    r0 = (r3 & r5);
    r5 = (r0 & 65535);
    r4 = (r6 & 255);
    r0 = (16 - r4);
    r0 = PPC_Sraw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r5 = (r0 & 65535);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r4));
    r3 = (r0 & 65535);
    r3 = (r3 | r5);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809FC2F4 func_809FC2F4 preserves=true fpr_mask=0x00000000
