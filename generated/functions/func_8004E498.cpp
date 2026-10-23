#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8004E498_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    goto loc_8004E498;

loc_8004E498:
{
    r7 = 0;
    r4 = 9999;
    r0 = 41;
    ctr = r0;
}

loc_8004E4A8:
{
    r0 = MemoryInline::FlatRead32((r13 + -17824));
    r6 = (r0 + r7);
    r5 = MemoryInline::FlatRead16((r6 + 14784));
    r0 = MemoryInline::FlatRead16(r3);
    r3 = (r3 + 2);
    r0 = (r5 + r0);
    MemoryInline::FlatWrite16((r6 + 14784), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r13 + -17824));
    r5 = (r0 + r7);
    r0 = MemoryInline::FlatRead16((r5 + 14784));
}

loc_8004E4D4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(9999))) {
        goto loc_8004E4DC;
    }
}

loc_8004E4D8:
{
    MemoryInline::FlatWrite16((r5 + 14784), static_cast<uint16_t>(r4));
}

loc_8004E4DC:
{
    r7 = (r7 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8004E4A8;
    }
}

loc_8004E4E4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8004E498(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004E498_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004E498 func_8004E498 preserves=true fpr_mask=0x00000000
