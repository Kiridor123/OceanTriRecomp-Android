#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804E0860_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    goto loc_804E0860;

loc_804E0860:
{
    r0 = MemoryInline::FlatRead32((r3 + 92));
}

loc_804E0868:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E0880;
    }
}

loc_804E086C:
{
}

loc_804E0870:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_804E08D8;
    }
}

loc_804E0874:
{
}

loc_804E0878:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_804E0940;
    }
}

loc_804E087C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804E0880:
{
    r5 = MemoryInline::FlatRead32((r3 + 100));
    r0 = 6488064;
    r4 = MemoryInline::FlatRead32((r3 + 104));
    r4 = (r5 + r4);
    MemoryInline::FlatWrite32((r3 + 100), r4);
}

loc_804E0898:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_804E08A8;
    }
}

loc_804E089C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 96), r0);
    goto loc_804E08C0;
}

loc_804E08A8:
{
    r0 = (static_cast<int32_t>(r4) >> 16);
    r4 = 0x80630000u;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4 = (r4 + -20896);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_1);
    MemoryInline::FlatWrite32((r3 + 96), r0);
}

loc_804E08C0:
{
    r0 = MemoryInline::FlatRead32((r3 + 96));
}

loc_804E08C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_804E08CC:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 92), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804E08D8:
{
    r4 = MemoryInline::FlatRead32((r3 + 96));
    r0 = MemoryInline::FlatRead32((r3 + 108));
    r5 = MemoryInline::FlatRead32((r3 + 112));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r3 + 96), r0);
}

loc_804E08F0:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r5))) {
        goto loc_804E0900;
    }
}

loc_804E08F4:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 96), r5);
    MemoryInline::FlatWrite32((r3 + 92), r0);
}

loc_804E0900:
{
    r4 = MemoryInline::FlatRead32((r3 + 96));
    r0 = -47185920;
}

loc_804E090C:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r0))) {
        goto loc_return;
    }
}

loc_804E0910:
{
    r4 = MemoryInline::FlatRead8((r3 + 12));
    r7 = 4;
    r0 = MemoryInline::FlatRead8((r3 + 13));
    r6 = 0;
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(9));
    r4 = (r4_rot_0 & -512);
    MemoryInline::FlatWrite32((r3 + 92), r7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r5 + r4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 4404), r6);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804E0940:
{
    r4 = MemoryInline::FlatRead32((r3 + 96));
    r0 = -47185920;
}

loc_804E094C:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r0))) {
        goto loc_804E095C;
    }
}

loc_804E0950:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r3 + 92), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804E095C:
{
    r0 = MemoryInline::FlatRead32((r3 + 116));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804E0860(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804E0860_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804E0860 func_804E0860 preserves=true fpr_mask=0x00000000
