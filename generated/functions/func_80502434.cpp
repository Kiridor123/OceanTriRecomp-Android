#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80502434_ra58_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t r7 = ctx->gpr[7];

    goto loc_80502434;

loc_80502434:
{
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r5 = (r3 + 4);
    r0 = 0;
    goto loc_8050246C;
}

loc_80502444:
{
    r7 = MemoryInline::FlatRead32(r6);
    r4 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWrite32((r7 + 4), r4);
    MemoryInline::FlatWrite32(r4, r7);
    r4 = MemoryInline::FlatRead32(r3);
    r4 = (r4 + -1);
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite32(r6, r0);
    MemoryInline::FlatWrite32((r6 + 4), r0);
    r6 = r7;
}

loc_8050246C:
{
}

loc_80502470:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r5))) {
        goto loc_80502444;
    }
}

loc_80502474:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return r4;
}

}

extern "C" void func_80502434(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80502434_ra58_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000000D9 gpr_write=0x000000F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80502434 func_80502434 preserves=true fpr_mask=0x00000000
