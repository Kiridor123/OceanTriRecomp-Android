#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800D0070_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x800D0070u);
    goto loc_800D0070;

loc_800D0070:
{
    r4 = 0x80690000u;
    r4 = (r4 + 28984);
    r8 = 0;
    r6 = r4;
    r7 = MemoryInline::FlatRead8((r4 + 32));
    ctr = r7;
}

loc_800D008C:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(0))) {
        goto loc_800D0148;
    }
}

loc_800D0090:
{
    r5 = (r4 + r8);
    r0 = MemoryInline::FlatRead8((r5 + 33));
}

loc_800D009C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800D013C;
    }
}

loc_800D00A0:
{
    r0 = MemoryInline::FlatRead32((r6 + 100));
}

loc_800D00A8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_800D013C;
    }
}

loc_800D00AC:
{
    r0 = (r7 + -1);
}

loc_800D00B4:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(r0))) {
        goto loc_800D0134;
    }
}

loc_800D00B8:
{
    r3 = MemoryInline::FlatRead8((r4 + 32));
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam8((r4 + 32), static_cast<uint8_t>(r0));
    r6 = (r0 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r5 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r5 + 356));
    r0 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r0 - r3);
    MemoryInline::FlatWriteRam32((r4 + 16), r0);
    r3 = MemoryInline::FlatRead32((r5 + 356));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 - r3);
    MemoryInline::FlatWriteRam32((r4 + 12), r0);
    r5 = 0;
    r3 = (r4 + r6);
    MemoryInline::FlatWrite8((r3 + 33), static_cast<uint8_t>(r5));
    r0 = MemoryInline::FlatRead8((r4 + 32));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    MemoryInline::FlatWrite32((r3 + 100), r5);
    r0 = MemoryInline::FlatRead8((r4 + 32));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r4 + r0);
    MemoryInline::FlatWrite32((r3 + 356), r5);
    r0 = MemoryInline::FlatRead8((r4 + 32));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r3 = (r4 + r0);
    MemoryInline::FlatWrite8((r3 + 612), static_cast<uint8_t>(r5));
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800D0134:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800D013C:
{
    r6 = (r6 + 4);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800D0090;
    }
}

loc_800D0148:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800D0070(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800D0070_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800D0070 func_800D0070 preserves=true fpr_mask=0x00000000
