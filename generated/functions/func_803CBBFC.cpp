#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803CBBFC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    goto loc_803CBBFC;

loc_803CBBFC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r9 = r4;
    r7 = r5;
    r8 = r6;
    r0 = MemoryInline::FlatRead32((r3 + 4124));
}

loc_803CBC24:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_803CBC30;
    }
}

loc_803CBC28:
{
}

loc_803CBC2C:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_803CBC88;
    }
}

loc_803CBC30:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r4 = (r31 + 3100);
    r5 = r0;
    r6 = r9;
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x803CBC54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 4124), r0);
}

loc_803CBC60:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_803CBC88;
    }
}

loc_803CBC64:
{
    r0 = MemoryInline::FlatRead32((r31 + 8712));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r31 + 8712), r0);
    r0 = MemoryInline::FlatRead32((r31 + 8748));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r31 + 8748), r0);
    r3 = MemoryInline::FlatRead32((r31 + 8736));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 8736), r0);
}

loc_803CBC88:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803CBBFC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803CBBFC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803CBBFC func_803CBBFC preserves=true fpr_mask=0x00000000
