#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803EB6DC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x803EB6DCu);
    goto loc_803EB6DC;

loc_803EB6DC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r4;
    r31 = r5;
}

loc_803EB6FC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_803EB7A8;
    }
}

loc_803EB700:
{
}

loc_803EB704:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_803EB70C;
    }
}

loc_803EB708:
{
    goto loc_803EB7A8;
}

loc_803EB70C:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r4, r0);
    r3 = (r4 + 4);
    r4 = 0;
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8(r31);
}

loc_803EB72C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(32))) {
        goto loc_803EB738;
    }
}

loc_803EB730:
{
    r0 = 32;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
}

loc_803EB738:
{
    r6 = 0;
    r4 = 1;
    goto loc_803EB798;
}

loc_803EB744:
{
    r0 = (r6 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r5 = (r31 + r0);
    r3 = MemoryInline::FlatRead8((r5 + 4));
    r7 = (r3 + -1);
}

loc_803EB75C:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(4))) {
        goto loc_803EB794;
    }
}

loc_803EB760:
{
    r0 = MemoryInline::FlatRead8((r5 + 5));
}

loc_803EB768:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_803EB794;
    }
}

loc_803EB76C:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & -8);
    r3 = (r30 + r0);
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r0 = MemoryInline::FlatRead32(r30);
}

loc_803EB788:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r7))) {
        goto loc_803EB794;
    }
}

loc_803EB78C:
{
    r0 = (r7 + 1);
    MemoryInline::FlatWrite32(r30, r0);
}

loc_803EB794:
{
    r6 = (r6 + 1);
}

loc_803EB798:
{
    r3 = (r6 & 255);
    r0 = MemoryInline::FlatRead8(r31);
}

loc_803EB7A4:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_803EB744;
    }
}

loc_803EB7A8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803EB6DC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803EB6DC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803EB6DC func_803EB6DC preserves=true fpr_mask=0x00000000
