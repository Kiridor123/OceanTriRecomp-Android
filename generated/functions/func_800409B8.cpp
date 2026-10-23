#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800409B8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[5] = arg_r5;
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    goto loc_800409B8;

loc_800409B8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = 0;
    r30 = 0;
    r29 = 0;
    r28 = 0;
    r0 = MemoryInline::FlatRead32((r13 + -18020));
    MemoryInline::FlatWrite32((r13 + -18016), r0);
    r0 = 0;
    r4 = 0x80660000u;
    MemoryInline::FlatWriteRam32((r4 + -21960), r0);
    r3 = 0x80660000u;
    MemoryInline::FlatWriteRam32((r3 + -21940), r0);
    r4 = (r4 + -21960);
    MemoryInline::FlatWriteRam32((r4 + 4), r0);
    r3 = (r3 + -21940);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    MemoryInline::FlatWriteRam32((r4 + 8), r0);
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    MemoryInline::FlatWriteRam32((r4 + 12), r0);
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    MemoryInline::FlatWriteRam32((r4 + 16), r0);
    MemoryInline::FlatWriteRam32((r3 + 16), r0);
    r3 = MemoryInline::FlatRead32((r13 + -17992));
}

loc_80040A30:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80040A44;
    }
}

loc_80040A34:
{
    r12 = MemoryInline::FlatRead32((r3 + 40));
    ctr = r12;
    ctx->lr = 0x80040A40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r28 = 1;
}

loc_80040A44:
{
    r3 = MemoryInline::FlatRead32((r13 + -17988));
}

loc_80040A4C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80040A60;
    }
}

loc_80040A50:
{
    r12 = MemoryInline::FlatRead32((r3 + 40));
    ctr = r12;
    ctx->lr = 0x80040A5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r29 = 1;
}

loc_80040A60:
{
    r3 = MemoryInline::FlatRead32((r13 + -17984));
}

loc_80040A68:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80040A7C;
    }
}

loc_80040A6C:
{
    r12 = MemoryInline::FlatRead32((r3 + 40));
    ctr = r12;
    ctx->lr = 0x80040A78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r30 = 1;
}

loc_80040A7C:
{
    r3 = MemoryInline::FlatRead32((r13 + -17980));
}

loc_80040A84:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80040A98;
    }
}

loc_80040A88:
{
    r12 = MemoryInline::FlatRead32((r3 + 40));
    ctr = r12;
    ctx->lr = 0x80040A94u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r31 = 1;
}

loc_80040A98:
{
}

loc_80040A9C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80040AB0;
    }
}

loc_80040AA0:
{
    r3 = MemoryInline::FlatRead32((r13 + -17992));
    ctx->lr = 0x80040AA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804DB614u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -17992), r0);
}

loc_80040AB0:
{
}

loc_80040AB4:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80040AC8;
    }
}

loc_80040AB8:
{
    r3 = MemoryInline::FlatRead32((r13 + -17988));
    ctx->lr = 0x80040AC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804DB614u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -17988), r0);
}

loc_80040AC8:
{
}

loc_80040ACC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80040AE0;
    }
}

loc_80040AD0:
{
    r3 = MemoryInline::FlatRead32((r13 + -17984));
    ctx->lr = 0x80040AD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804DB614u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -17984), r0);
}

loc_80040AE0:
{
}

loc_80040AE4:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80040AF8;
    }
}

loc_80040AE8:
{
    r3 = MemoryInline::FlatRead32((r13 + -17980));
    ctx->lr = 0x80040AF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804DB614u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -17980), r0);
}

loc_80040AF8:
{
    r0 = -1;
    MemoryInline::FlatWrite8((r13 + -18008), static_cast<uint8_t>(r0));
    r3 = (r13 + -18008);
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800409B8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800409B8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800409B8 func_800409B8 preserves=true fpr_mask=0x00000000
