#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803F7304_ra28_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x803F7304u);
    goto loc_803F7304;

loc_803F7304:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_803F730C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_803F740C;
    }
}

loc_803F7310:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r3 + 16), r0);
}

loc_803F740C:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return;
}

}

extern "C" void func_803F7304(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_803F7304_ra28_0_0_0(ctx, ctx->gpr[3], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x0000002B gpr_write=0xC0000003 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803F7304 func_803F7304 preserves=true fpr_mask=0x00000000
