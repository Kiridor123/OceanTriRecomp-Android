#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8041D9C4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
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

    goto loc_8041D9C4;

loc_8041D9C4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r29 = r4;
}

loc_8041D9E8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8041DAA0;
    }
}

loc_8041D9EC:
{
}

loc_8041D9F0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8041DAA0;
    }
}

loc_8041D9F4:
{
    r0 = MemoryInline::FlatRead8((r3 + 17516));
}

loc_8041D9FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8041DAA0;
    }
}

loc_8041DA00:
{
    r7 = 0;
    MemoryInline::FlatWrite8((r3 + 17517), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 17518), static_cast<uint8_t>(r7));
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r3 + 17520), r0);
    r0 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWrite32((r3 + 17524), r0);
    r6 = 0x806D0000u;
    r30 = (r6 + 23264);
    MemoryInline::FlatWriteRam32((r30 + 4), r7);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8041DA34:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8041DA68;
    }
}

loc_8041DA38:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r30 + 4), r0);
    MemoryInline::FlatWriteRam32((r6 + 23264), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r30 + 12), r0);
    // inline leaf 0x803C99D8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16736));
    // end of inlined leaf 0x803C99D8
    r4 = MemoryInline::FlatRead16((r29 + 12));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 76));
    ctr = r12;
    ctx->lr = 0x8041DA64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    MemoryInline::FlatWriteRam16((r30 + 10), static_cast<uint16_t>(r3));
}

loc_8041DA68:
{
    r0 = MemoryInline::FlatRead32((r31 + 17524));
    MemoryInline::FlatWrite32((r31 + 17541), r0);
    r0 = MemoryInline::FlatRead32((r31 + 124));
    MemoryInline::FlatWrite32((r31 + 17545), r0);
    r0 = MemoryInline::FlatRead32((r31 + 128));
    MemoryInline::FlatWrite32((r31 + 17549), r0);
    r0 = MemoryInline::FlatRead32((r31 + 132));
    MemoryInline::FlatWrite32((r31 + 17553), r0);
    r0 = MemoryInline::FlatRead32((r31 + 136));
    MemoryInline::FlatWrite32((r31 + 17557), r0);
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 17536), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 17516), static_cast<uint8_t>(r0));
}

loc_8041DAA0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8041D9C4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8041D9C4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8041D9C4 func_8041D9C4 preserves=true fpr_mask=0x00000000
