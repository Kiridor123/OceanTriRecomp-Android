#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8030B7F4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8030B7F4u);
    goto loc_8030B7F4;

loc_8030B7F4:
{
    r7 = 0;
    r6 = 0;
    r5 = r3;
    r0 = 2;
    ctr = r0;
}

loc_8030B808:
{
    r0 = MemoryInline::FlatRead16((r5 + 1522));
}

loc_8030B810:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8030B828;
    }
}

loc_8030B814:
{
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead8((r4 + 1538));
}

loc_8030B820:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8030B828;
    }
}

loc_8030B824:
{
    r7 = (r7 + 1);
}

loc_8030B828:
{
    r6 = (r6 + 1);
    r0 = MemoryInline::FlatRead16((r5 + 1524));
}

loc_8030B834:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8030B84C;
    }
}

loc_8030B838:
{
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead8((r4 + 1538));
}

loc_8030B844:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8030B84C;
    }
}

loc_8030B848:
{
    r7 = (r7 + 1);
}

loc_8030B84C:
{
    r6 = (r6 + 1);
    r0 = MemoryInline::FlatRead16((r5 + 1526));
}

loc_8030B858:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8030B870;
    }
}

loc_8030B85C:
{
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead8((r4 + 1538));
}

loc_8030B868:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8030B870;
    }
}

loc_8030B86C:
{
    r7 = (r7 + 1);
}

loc_8030B870:
{
    r6 = (r6 + 1);
    r0 = MemoryInline::FlatRead16((r5 + 1528));
}

loc_8030B87C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8030B894;
    }
}

loc_8030B880:
{
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead8((r4 + 1538));
}

loc_8030B88C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8030B894;
    }
}

loc_8030B890:
{
    r7 = (r7 + 1);
}

loc_8030B894:
{
    r5 = (r5 + 8);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8030B808;
    }
}

loc_8030B8A0:
{
    r0 = (r7 + 5);
    r3 = 715849728;
    r3 = (r3 + -21845);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    r0 = (r3 + r0);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8030B8C0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8030B8C4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8030B7F4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8030B7F4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8030B7F4 func_8030B7F4 preserves=true fpr_mask=0x00000000
