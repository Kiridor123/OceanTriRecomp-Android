#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800E3320_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    MKW_GUEST_ENTER(0x800E3320u);
    goto loc_800E3320;

loc_800E3320:
{
}

loc_800E3324:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E334C;
    }
}

loc_800E3328:
{
}

loc_800E332C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_800E3364;
    }
}

loc_800E3330:
{
}

loc_800E3334:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4))) {
        goto loc_800E3364;
    }
}

loc_800E3338:
{
}

loc_800E333C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_800E3384;
    }
}

loc_800E3340:
{
}

loc_800E3344:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_800E33A4;
    }
}

loc_800E3348:
{
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800E334C:
{
    r0 = (r5 & 65535);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = 0x80690000u;
    r3 = (r3 + 32176);
    r3_addr_3 = (r3 + r0);
    MemoryInline::FlatWrite16(r3_addr_3, static_cast<uint16_t>(r6));
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800E3364:
{
    r7 = (r4 * 10);
    r3 = 0x806A0000u;
    r4 = (r3 + -30936);
    r0 = (r5 & 65535);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & -2);
    r0 = (r4 + r7);
    r3_addr_2 = (r3 + r0);
    MemoryInline::FlatWrite16(r3_addr_2, static_cast<uint16_t>(r6));
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800E3384:
{
    r7 = (r4 * 10);
    r3 = 0x806A0000u;
    r4 = (r3 + -29096);
    r0 = (r5 & 65535);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & -2);
    r0 = (r4 + r7);
    r3_addr_1 = (r3 + r0);
    MemoryInline::FlatWrite16(r3_addr_1, static_cast<uint16_t>(r6));
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800E33A4:
{
    r0 = (r5 & 65535);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r3 = 0x806A0000u;
    r3 = (r3 + -28712);
    r3_addr_0 = (r3 + r0);
    MemoryInline::FlatWrite16(r3_addr_0, static_cast<uint16_t>(r6));
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800E3320(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800E3320_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000099 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E3320 func_800E3320 preserves=true fpr_mask=0x00000000
