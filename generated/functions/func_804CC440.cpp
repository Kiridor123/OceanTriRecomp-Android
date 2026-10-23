#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804CC440_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];

    goto loc_804CC440;

loc_804CC440:
{
    r3 = (r3 * 12);
    r5 = MemoryInline::FlatRead32((r13 + -15100));
    r0 = (r4 + 63);
    r5 = (r5 + r3);
    r4 = (r0 & -32);
    r3 = MemoryInline::FlatRead32((r5 + 4));
    r6 = r3;
    goto loc_804CC470;
}

loc_804CC460:
{
    r0 = MemoryInline::FlatRead32((r6 + 8));
}

loc_804CC468:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_804CC478;
    }
}

loc_804CC46C:
{
    r6 = MemoryInline::FlatRead32((r6 + 4));
}

loc_804CC470:
{
}

loc_804CC474:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_804CC460;
    }
}

loc_804CC478:
{
}

loc_804CC47C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_804CC488;
    }
}

loc_804CC480:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804CC488:
{
    r0 = MemoryInline::FlatRead32((r6 + 8));
    r0 = (r0 - r4);
}

loc_804CC494:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(64))) {
        goto loc_804CC4D0;
    }
}

loc_804CC498:
{
    r4 = MemoryInline::FlatRead32((r6 + 4));
}

loc_804CC4A0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804CC4AC;
    }
}

loc_804CC4A4:
{
    r0 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_804CC4AC:
{
    r4 = MemoryInline::FlatRead32(r6);
}

loc_804CC4B4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_804CC4C0;
    }
}

loc_804CC4B8:
{
    r3 = MemoryInline::FlatRead32((r6 + 4));
    goto loc_804CC4C8;
}

loc_804CC4C0:
{
    r0 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWrite32((r4 + 4), r0);
}

loc_804CC4C8:
{
    MemoryInline::FlatWrite32((r5 + 4), r3);
    goto loc_804CC510;
}

loc_804CC4D0:
{
    MemoryInline::FlatWrite32((r6 + 8), r4);
    r4 = (r6 + r4);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r0 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWrite32(r4, r0);
    r3 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWrite32((r4 + 4), r3);
}

loc_804CC4F0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804CC4F8;
    }
}

loc_804CC4F4:
{
    MemoryInline::FlatWrite32(r3, r4);
}

loc_804CC4F8:
{
    r3 = MemoryInline::FlatRead32(r4);
}

loc_804CC500:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804CC50C;
    }
}

loc_804CC504:
{
    MemoryInline::FlatWrite32((r3 + 4), r4);
    goto loc_804CC510;
}

loc_804CC50C:
{
    MemoryInline::FlatWrite32((r5 + 4), r4);
}

loc_804CC510:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r0 = 0;
    MemoryInline::FlatWrite32((r6 + 4), r3);
}

loc_804CC520:
{
    MemoryInline::FlatWrite32(r6, r0);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804CC52C;
    }
}

loc_804CC528:
{
    MemoryInline::FlatWrite32(r3, r6);
}

loc_804CC52C:
{
    MemoryInline::FlatWrite32((r5 + 8), r6);
    r3 = (r6 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804CC440(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804CC440_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804CC440 func_804CC440 preserves=true fpr_mask=0x00000000
