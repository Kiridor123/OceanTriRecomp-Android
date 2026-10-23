#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803AA354_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    goto loc_803AA354;

loc_803AA354:
{
    r4 = MemoryInline::FlatRead32((r3 + 60));
}

loc_803AA35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_803AA368;
    }
}

loc_803AA360:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803AA368:
{
    r0 = MemoryInline::FlatRead32((r4 + 784));
    r0 = (r0 & 5);
}

loc_803AA370:
{
}

loc_803AA374:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803AA380;
    }
}

loc_803AA378:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803AA380:
{
}

loc_803AA384:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_803AA390;
    }
}

loc_803AA388:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803AA390:
{
    r0 = MemoryInline::FlatRead8((r3 + 147));
}

loc_803AA398:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_803AA3B0;
    }
}

loc_803AA39C:
{
}

loc_803AA3A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_803AA3B8;
    }
}

loc_803AA3A4:
{
}

loc_803AA3A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_803AA3C0;
    }
}

loc_803AA3AC:
{
    goto loc_803AA3C8;
}

loc_803AA3B0:
{
    r6 = 3;
    goto loc_803AA3CC;
}

loc_803AA3B8:
{
    r6 = 7;
    goto loc_803AA3CC;
}

loc_803AA3C0:
{
    r6 = 5;
    goto loc_803AA3CC;
}

loc_803AA3C8:
{
    r6 = 1;
}

loc_803AA3CC:
{
    r0 = 0;
    r4 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r6 & r0);
}

loc_803AA3E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AA408;
    }
}

loc_803AA3E4:
{
    r5 = MemoryInline::FlatRead32((r3 + 148));
    r0 = (r5 & 8);
}

loc_803AA3F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AA408;
    }
}

loc_803AA3F4:
{
    r0 = (r5 & 64);
}

loc_803AA3FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(64))) {
        goto loc_803AA408;
    }
}

loc_803AA400:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803AA408:
{
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r6 & r0);
}

loc_803AA418:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AA440;
    }
}

loc_803AA41C:
{
    r5 = MemoryInline::FlatRead32((r3 + 244));
    r0 = (r5 & 8);
}

loc_803AA428:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AA440;
    }
}

loc_803AA42C:
{
    r0 = (r5 & 64);
}

loc_803AA434:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(64))) {
        goto loc_803AA440;
    }
}

loc_803AA438:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803AA440:
{
    r0 = 2;
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r6 & r0);
}

loc_803AA450:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AA478;
    }
}

loc_803AA454:
{
    r5 = MemoryInline::FlatRead32((r3 + 340));
    r0 = (r5 & 8);
}

loc_803AA460:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AA478;
    }
}

loc_803AA464:
{
    r0 = (r5 & 64);
}

loc_803AA46C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(64))) {
        goto loc_803AA478;
    }
}

loc_803AA470:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803AA478:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803AA354(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803AA354_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803AA354 func_803AA354 preserves=true fpr_mask=0x00000000
