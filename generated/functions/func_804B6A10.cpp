#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B6A10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_804B6A10;

loc_804B6A10:
{
    r6 = -939524096;
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r6_mrot_0 = (r6_rot_0 & 4092);
    r6_mdest_0 = (r6 & -4093);
    r6 = (r6_mdest_0 | r6_mrot_0);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(12));
    r6_mrot_1 = (r6_rot_1 & 4190208);
    r6_mdest_1 = (r6 & -4190209);
    r6 = (r6_mdest_1 | r6_mrot_1);
    r0 = MemoryHw::FlatRead32(r6);
    MemoryHw::FlatWrite32(r5, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000041 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B6A10 func_804B6A10 preserves=true fpr_mask=0x00000000
