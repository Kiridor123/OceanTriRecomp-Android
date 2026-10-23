#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8043F868_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_8043F868;

loc_8043F868:
{
    r6 = 0;
    r5 = 0x806E0000u;
    MemoryInline::FlatWriteRam32((r5 + -31392), r6);
    r0 = 3;
    r5 = (r5 + -31392);
    MemoryInline::FlatWriteRam32((r5 + 4), r0);
    MemoryInline::FlatWriteRam32((r5 + 8), r6);
    MemoryInline::FlatWriteRam32((r5 + 76), r3);
    MemoryInline::FlatWriteRam32((r5 + 80), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

extern "C" void func_8043F868(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8043F868_ra18_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000061 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8043F868 func_8043F868 preserves=true fpr_mask=0x00000000
