#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80499230_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];

    MKW_GUEST_ENTER(0x80499230u);
    goto loc_80499230;

loc_80499230:
{
    r0 = MemoryInline::FlatRead8((r4 + 6));
}

loc_80499238:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8049923C:
{
    r5 = MemoryInline::FlatRead32((r4 + 8));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWrite32((r3 + 64), r5);
    MemoryInline::FlatWrite32((r3 + 68), r0);
    r5 = MemoryInline::FlatRead32((r4 + 16));
    r0 = MemoryInline::FlatRead32((r4 + 20));
    MemoryInline::FlatWrite32((r3 + 72), r5);
    MemoryInline::FlatWrite32((r3 + 76), r0);
    r5 = MemoryInline::FlatRead32((r4 + 24));
    r0 = MemoryInline::FlatRead32((r4 + 28));
    MemoryInline::FlatWrite32((r3 + 80), r5);
    MemoryInline::FlatWrite32((r3 + 84), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return;
}

}

extern "C" void func_80499230(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80499230_ra18_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000021 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80499230 func_80499230 preserves=true fpr_mask=0x00000000
