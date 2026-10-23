#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803EA680_ra70_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4, uint32_t arg_r5, uint32_t arg_r6, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[6] = arg_r6;
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;

    goto loc_803EA680;

loc_803EA680:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r4;
    r30 = r5;
    r0 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWrite32(r4, r0);
    r3 = (r4 + 4);
    r4 = (r5 + 24);
    r5 = 31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r31 = 0;
    MemoryInline::FlatWrite8((r29 + 35), static_cast<uint8_t>(r31));
    r3 = (r29 + 36);
    r4 = (r30 + 56);
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite8((r29 + 36), static_cast<uint8_t>(r31));
    r0 = MemoryInline::FlatRead32((r30 + 16));
    MemoryInline::FlatWrite32((r29 + 40), r0);
    r0 = MemoryInline::FlatRead32((r30 + 20));
    MemoryInline::FlatWrite32((r29 + 44), r0);
    r0 = MemoryInline::FlatRead32((r30 + 60));
    MemoryInline::FlatWrite32((r29 + 48), r0);
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r3 = MemoryInline::FlatRead32((r30 + 12));
    MemoryInline::FlatWrite32((r29 + 60), r3);
    MemoryInline::FlatWrite32((r29 + 56), r0);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803EA680(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803EA680_ra70_1e_18_0(ctx, ctx->gpr[4], ctx->gpr[5], ctx->gpr[6], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000032 gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803EA680 func_803EA680 preserves=true fpr_mask=0x00000000
