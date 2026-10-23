#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B69F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];

    goto loc_804B69F0;

loc_804B69F0:
{
    r6 = MemoryHw::FlatRead32((r13 + -15440));
    r0 = 0;
    r0_mrot_0 = (r3 & 1);
    r0_mdest_0 = (r0 & -2);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0_mrot_1 = (r0_rot_0 & 14);
    r0_mdest_1 = (r0 & -15);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r0_mrot_2 = (r0_rot_1 & 16);
    r0_mdest_2 = (r0 & -17);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryHw::FlatWrite16(r6, static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002038 gpr_write=0x00000041 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B69F0 func_804B69F0 preserves=true fpr_mask=0x00000000
