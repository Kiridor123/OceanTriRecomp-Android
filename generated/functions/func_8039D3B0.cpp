#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8039D3B0_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t ctr = ctx->ctr;

    goto loc_8039D3B0;

loc_8039D3B0:
{
    r4 = MemoryInline::FlatRead32((r3 + 20));
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_8039D3BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8039D3C8;
    }
}

loc_8039D3C0:
{
    r4 = (r4 + 12400);
    goto loc_8039D3CC;
}

loc_8039D3C8:
{
    r4 = (r4 + 12592);
}

loc_8039D3CC:
{
}

loc_8039D3D0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8039D4EC;
    }
}

loc_8039D3D4:
{
    r3 = 0;
    r0 = 2;
    ctr = r0;
}

loc_8039D3E0:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_8039D3E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8039D400;
    }
}

loc_8039D3EC:
{
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8039D3F4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8039D400;
    }
}

loc_8039D3F8:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8039D400:
{
    r0 = MemoryInline::FlatRead16((r4 + 4));
}

loc_8039D408:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8039D420;
    }
}

loc_8039D40C:
{
    r0 = MemoryInline::FlatRead16((r4 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8039D414:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8039D420;
    }
}

loc_8039D418:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8039D420:
{
    r0 = MemoryInline::FlatRead16((r4 + 8));
}

loc_8039D428:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8039D440;
    }
}

loc_8039D42C:
{
    r0 = MemoryInline::FlatRead16((r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8039D434:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8039D440;
    }
}

loc_8039D438:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8039D440:
{
    r0 = MemoryInline::FlatRead16((r4 + 12));
}

loc_8039D448:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8039D460;
    }
}

loc_8039D44C:
{
    r0 = MemoryInline::FlatRead16((r4 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8039D454:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8039D460;
    }
}

loc_8039D458:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8039D460:
{
    r0 = MemoryInline::FlatRead16((r4 + 16));
}

loc_8039D468:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8039D480;
    }
}

loc_8039D46C:
{
    r0 = MemoryInline::FlatRead16((r4 + 18));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8039D474:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8039D480;
    }
}

loc_8039D478:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8039D480:
{
    r0 = MemoryInline::FlatRead16((r4 + 20));
}

loc_8039D488:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8039D4A0;
    }
}

loc_8039D48C:
{
    r0 = MemoryInline::FlatRead16((r4 + 22));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8039D494:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8039D4A0;
    }
}

loc_8039D498:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8039D4A0:
{
    r0 = MemoryInline::FlatRead16((r4 + 24));
}

loc_8039D4A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8039D4C0;
    }
}

loc_8039D4AC:
{
    r0 = MemoryInline::FlatRead16((r4 + 26));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8039D4B4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8039D4C0;
    }
}

loc_8039D4B8:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8039D4C0:
{
    r0 = MemoryInline::FlatRead16((r4 + 28));
}

loc_8039D4C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8039D4E0;
    }
}

loc_8039D4CC:
{
    r0 = MemoryInline::FlatRead16((r4 + 30));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8039D4D4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8039D4E0;
    }
}

loc_8039D4D8:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8039D4E0:
{
    r3 = (r3 + 7);
    r4 = (r4 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8039D3E0;
    }
}

loc_8039D4EC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8039D3B0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8039D3B0_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8039D3B0 func_8039D3B0 preserves=true fpr_mask=0x00000000
