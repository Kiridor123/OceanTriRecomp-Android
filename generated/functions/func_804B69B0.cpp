#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B69B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];

    goto loc_804B69B0;

loc_804B69B0:
{
    r5 = MemoryHw::FlatRead32((r13 + -15440));
    r0 = 0;
    r0_mrot_0 = (r4 & 255);
    r0_mdest_0 = (r0 & -256);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_1 = (r0_rot_0 & 256);
    r0_mdest_1 = (r0 & -257);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryHw::FlatWrite16((r5 + 4), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002018 gpr_write=0x00000021 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B69B0 func_804B69B0 preserves=true fpr_mask=0x00000000
