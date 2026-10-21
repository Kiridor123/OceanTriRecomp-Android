#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_801FE614_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x801FE614u);
    goto loc_801FE614;

loc_801FE614:
{
    r5 = 0;
    r4 = 0x806B0000u;
    r4 = (r4 + -24544);
    r3 = (r3 & 255);
    r0 = 3;
    ctr = r0;
}

loc_801FE62C:
{
    r0 = MemoryInline::FlatRead8(r4);
}

loc_801FE634:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801FE64C;
    }
}

loc_801FE638:
{
    r0 = MemoryInline::FlatRead8((r4 + 2));
}

loc_801FE640:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_801FE64C;
    }
}

loc_801FE644:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_801FE64C:
{
    r4 = (r4 + 616);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_801FE658:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801FE670;
    }
}

loc_801FE65C:
{
    r0 = MemoryInline::FlatRead8((r4 + 2));
}

loc_801FE664:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_801FE670;
    }
}

loc_801FE668:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_801FE670:
{
    r4 = (r4 + 616);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_801FE67C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801FE694;
    }
}

loc_801FE680:
{
    r0 = MemoryInline::FlatRead8((r4 + 2));
}

loc_801FE688:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_801FE694;
    }
}

loc_801FE68C:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_801FE694:
{
    r4 = (r4 + 616);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_801FE6A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801FE6B8;
    }
}

loc_801FE6A4:
{
    r0 = MemoryInline::FlatRead8((r4 + 2));
}

loc_801FE6AC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_801FE6B8;
    }
}

loc_801FE6B0:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_801FE6B8:
{
    r4 = (r4 + 616);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_801FE6C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801FE6DC;
    }
}

loc_801FE6C8:
{
    r0 = MemoryInline::FlatRead8((r4 + 2));
}

loc_801FE6D0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_801FE6DC;
    }
}

loc_801FE6D4:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_801FE6DC:
{
    r4 = (r4 + 616);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_801FE6E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801FE700;
    }
}

loc_801FE6EC:
{
    r0 = MemoryInline::FlatRead8((r4 + 2));
}

loc_801FE6F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_801FE700;
    }
}

loc_801FE6F8:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_801FE700:
{
    r4 = (r4 + 616);
    r5 = (r5 + 5);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801FE62C;
    }
}

loc_801FE70C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801FE614(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801FE614_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801FE614 func_801FE614 preserves=true fpr_mask=0x00000000
