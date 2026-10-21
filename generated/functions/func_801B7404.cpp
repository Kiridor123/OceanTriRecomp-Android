#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801B7404_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    MKW_GUEST_ENTER(0x801B7404u);
    goto loc_801B7404;

loc_801B7404:
{
    r0 = MemoryInline::FlatRead8(r4);
}

loc_801B740C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_return;
    }
}

loc_801B7410:
{
    r0 = MemoryInline::FlatRead16((r3 + 492));
    r0 = (r0 & 7);
}

loc_801B741C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_801B7420:
{
    r0 = MemoryInline::FlatRead8(r5);
}

loc_801B7428:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B7438;
    }
}

loc_801B742C:
{
}

loc_801B7430:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_801B7444;
    }
}

loc_801B7434:
{
    ctx->gpr[0] = r0;
    return;
}

loc_801B7438:
{
    r0 = 29;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

loc_801B7444:
{
    r0 = 30;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_801B7404(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_801B7404_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801B7404 func_801B7404 preserves=true fpr_mask=0x00000000
