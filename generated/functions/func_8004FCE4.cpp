#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8004FCE4_ra58_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8004FCE4u);
    goto loc_8004FCE4;

loc_8004FCE4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r6 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead32((r6 + 28));
    MemoryInline::FlatWrite32((r3 + 720), r0);
    r0 = MemoryInline::FlatRead32((r6 + 15840));
    MemoryInline::FlatWrite32((r3 + 724), r0);
    r0 = MemoryInline::FlatRead16((r6 + 15844));
    MemoryInline::FlatWrite16((r3 + 728), static_cast<uint16_t>(r0));
    r3 = r6;
    r5 = r31;
    r0 = 5;
    ctr = r0;
}

loc_8004FD30:
{
    r0 = MemoryInline::FlatRead32((r3 + 19160));
    MemoryInline::FlatWrite32((r5 + 600), r0);
    r0 = MemoryInline::FlatRead32((r3 + 19164));
    MemoryInline::FlatWrite32((r5 + 604), r0);
    r0 = MemoryInline::FlatRead32((r3 + 19168));
    MemoryInline::FlatWrite32((r5 + 608), r0);
    r0 = MemoryInline::FlatRead32((r3 + 19172));
    MemoryInline::FlatWrite32((r5 + 612), r0);
    r0 = MemoryInline::FlatRead32((r3 + 19176));
    MemoryInline::FlatWrite32((r5 + 616), r0);
    r0 = MemoryInline::FlatRead32((r3 + 19180));
    MemoryInline::FlatWrite32((r5 + 620), r0);
    r3 = (r3 + 24);
    r5 = (r5 + 24);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8004FD30;
    }
}

loc_8004FD6C:
{
    r0 = (r4 * 50);
    r28 = 0;
    r0 = (r0 * 12);
    r3 = (r6 + r0);
    r30 = (r3 + 3584);
    r29 = r31;
}

loc_8004FD84:
{
    r3 = r29;
    r4 = r30;
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::FlatWrite32((r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r29 = (r29 + 12);
    r28 = (r28 + 1);
    r30 = (r30 + 12);
}

loc_8004FDA0:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(50))) {
        goto loc_8004FD84;
    }
}

loc_8004FDA4:
{
    r0 = 85;
    MemoryInline::FlatWrite8((r31 + 730), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 731), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8004FCE4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004FCE4_ra58_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000205B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004FCE4 func_8004FCE4 preserves=true fpr_mask=0x00000000
