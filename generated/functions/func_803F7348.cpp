#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803F7348_ra108_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r8)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r8 = arg_r8;

    goto loc_803F7348;

loc_803F7348:
{
    r0 = MemoryInline::FlatRead32(r8);
    MemoryInline::FlatWrite32((r3 + 48), r0);
    r0 = MemoryInline::FlatRead32((r8 + 4));
    MemoryInline::FlatWrite32((r3 + 44), r0);
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x803F740Cu>(ctx);
    r0 = ctx->gpr[0];
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_803F7348(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_803F7348_ra108_0_0_0(ctx, ctx->gpr[3], ctx->gpr[8]);
}

// RECOMP_GUEST_ABI gpr_read=0x0000010A gpr_write=0xC0000003 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803F7348 func_803F7348 preserves=true fpr_mask=0x00000000
