#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B54E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_804B54E0;

loc_804B54E0:
{
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0_mrot_0 = (r4 & 1);
    r0_mdest_0 = (r0 & -2);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryInline::FlatWrite32((r3 + 20), r0);
}

loc_804B56D4:
{
    r4 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead8((r4 + 1316));
}

loc_804B56E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804B56F0;
    }
}

loc_804B56E4:
{
    r0 = MemoryInline::FlatRead8((r4 + 1317));
}

loc_804B56EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B5708;
    }
}

loc_804B56F0:
{
    r5 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r5 + 1312));
    r3 = MemoryInline::FlatRead32((r5 + 20));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
    r3_mrot_1 = (r3_rot_1 & 6144);
    r3_mdest_1 = (r3 & -6145);
    r3 = (r3_mdest_1 | r3_mrot_1);
    MemoryInline::FlatWrite32((r5 + 20), r3);
    goto loc_804B5714;
}

loc_804B5708:
{
    r0 = MemoryInline::FlatRead32((r4 + 20));
    r0 = (r0 & -6145);
    MemoryInline::FlatWrite32((r4 + 20), r0);
}

loc_804B5714:
{
    r0 = MemoryInline::FlatRead32((r4 + 1532));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r4 + 1532), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000015 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B54E0 func_804B54E0 preserves=true fpr_mask=0x00000000
