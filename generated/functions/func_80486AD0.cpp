#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80486AD0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80486AD0u);
    goto loc_80486AD0;

loc_80486AD0:
{
    r0 = (r3 & 4);
}

loc_80486AD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80486B0C;
    }
}

loc_80486AD8:
{
    r0 = MemoryInline::FlatRead8(r4);
}

loc_80486AE0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_80486AEC;
    }
}

loc_80486AE4:
{
    r3 = 5;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80486AEC:
{
    r3 = 0x80740000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & 2040);
    r3 = (r3 + -17608);
    r5 = 0;
    r4 = (r3 + r0);
    MemoryInline::FlatWrite8((r4 + 1368), static_cast<uint8_t>(r5));
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80486B0C:
{
    r6 = 0x80740000u;
    r0 = 2;
    r6 = (r6 + -17608);
    r7 = 0;
    ctr = r0;
}

loc_80486B20:
{
    r0 = MemoryInline::FlatRead8((r6 + 1368));
}

loc_80486B28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80486B78;
    }
}

loc_80486B2C:
{
    r0 = (r3 & 2);
}

loc_80486B30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80486B58;
    }
}

loc_80486B34:
{
}

loc_80486B38:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80486B44;
    }
}

loc_80486B3C:
{
    r3 = 5;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80486B44:
{
    r6 = 0x80740000u;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r6 = (r6 + -17608);
    r6 = (r6 + r0);
    MemoryInline::FlatWrite32((r6 + 1364), r5);
}

loc_80486B58:
{
    r5 = 0x80740000u;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r0 = (r0_rot_4 & -8);
    r5 = (r5 + -17608);
    r5 = (r5 + r0);
    MemoryInline::FlatWrite8((r5 + 1368), static_cast<uint8_t>(r3));
    r3 = 0;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r7));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80486B78:
{
    r6 = (r6 + 8);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80486B20;
    }
}

loc_80486B84:
{
    r3 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80486AD0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80486AD0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80486AD0 func_80486AD0 preserves=true fpr_mask=0x00000000
