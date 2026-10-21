#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B5B40(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    MKW_GUEST_ENTER(0x804B5B40u);
    goto loc_804B5B40;

loc_804B5B40:
{
    r0 = MemoryInline::FlatRead32((r8 + 28));
    r0_mrot_0 = (r5 & 1);
    r0_mdest_0 = (r0 & -2);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0_mrot_1 = (r0_rot_0 & 14);
    r0_mdest_1 = (r0 & -15);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(4));
    r0_mrot_2 = (r0_rot_1 & 496);
    r0_mdest_2 = (r0 & -497);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::FlatWrite32((r8 + 28), r0);
}

loc_804B5C80:
{
    r5 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = (r3 & 255);
    r3 = 1;
    r4 = MemoryInline::FlatRead32((r5 + 1532));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r0 & 255);
    r3 = (r4 | 16);
    MemoryInline::FlatWrite32((r5 + 1532), r3);
    r3 = MemoryInline::FlatRead8((r5 + 1531));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite8((r5 + 1531), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001EC gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B5B40 func_804B5B40 preserves=true fpr_mask=0x00000000
