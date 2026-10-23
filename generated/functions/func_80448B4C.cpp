#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80448B4C_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mdest_6 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_mrot_6 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mrot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];

    goto loc_80448B4C;

loc_80448B4C:
{
    r0 = 17;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = 250;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r7 = 0;
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r7));
    r6 = 1;
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(7));
    r0_mrot_0 = (r0_rot_0 & 128);
    r0_mdest_0 = (r0 & -129);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r5 = 2;
    r0 = (r0 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0_mrot_1 = (r0_rot_1 & 120);
    r0_mdest_1 = (r0 & -121);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r0 = (r0 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0_mrot_2 = (r0_rot_2 & 4);
    r0_mdest_2 = (r0 & -5);
    r0 = (r0_mdest_2 | r0_mrot_2);
    r5 = (r0 & 255);
    r5_mrot_0 = (r7 & 1);
    r5_mdest_0 = (r5 & -2);
    r5 = (r5_mdest_0 | r5_mrot_0);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r5));
    r0 = MemoryInline::FlatRead8((r3 + 5));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r0_mrot_3 = (r0_rot_3 & 240);
    r0_mdest_3 = (r0 & -241);
    r0 = (r0_mdest_3 | r0_mrot_3);
    r0 = (r0 & 255);
    r0_mrot_4 = (r7 & 15);
    r0_mdest_4 = (r0 & -16);
    r0 = (r0_mdest_4 | r0_mrot_4);
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_80448BB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80448BC4;
    }
}

loc_80448BB4:
{
    r4 = MemoryInline::FlatRead8((r13 + -16593));
    r0 = (r5 & 255);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0_mrot_5 = (r0_rot_4 & 2);
    r0_mdest_5 = (r0 & -3);
    r0 = (r0_mdest_5 | r0_mrot_5);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
}

loc_80448BC4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return r4;
}

}

extern "C" void func_80448B4C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80448B4C_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002039 gpr_write=0x000000F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80448B4C func_80448B4C preserves=true fpr_mask=0x00000000
