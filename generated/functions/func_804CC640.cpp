#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804CC640_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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

    MKW_GUEST_ENTER(0x804CC640u);
    goto loc_804CC640;

loc_804CC640:
{
    r6 = MemoryInline::FlatRead32((r13 + -15104));
    r0 = (r3 + 31);
    r7 = (r0 & -32);
    r4 = (r4 & -32);
    r5 = MemoryInline::FlatRead32((r13 + -15100));
    r3 = 0;
    ctr = r6;
}

loc_804CC660:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(0))) {
        goto loc_804CC6A8;
    }
}

loc_804CC664:
{
    // nop
}

loc_804CC668:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_804CC670:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_804CC69C;
    }
}

loc_804CC674:
{
    r0 = (r4 - r7);
    MemoryInline::FlatWrite32(r5, r0);
    r4 = 0;
    MemoryInline::FlatWrite32(r7, r4);
    MemoryInline::FlatWrite32((r7 + 4), r4);
    r0 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWrite32((r7 + 8), r0);
    MemoryInline::FlatWrite32((r5 + 4), r7);
    MemoryInline::FlatWrite32((r5 + 8), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804CC69C:
{
    r5 = (r5 + 12);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804CC668;
    }
}

loc_804CC6A8:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804CC640(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804CC640_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020B9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804CC640 func_804CC640 preserves=true fpr_mask=0x00000000
