#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8055214C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r12 = ctx->gpr[12];
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8055214C;

loc_8055214C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
}

loc_80552158:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r4;
    r30 = r3;
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80552188;
    }
}

loc_80552170:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 4;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x80552184u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805522D4;
}

loc_80552188:
{
}

loc_8055218C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(5))) {
        goto loc_805521A8;
    }
}

loc_80552190:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x805521A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805522D4;
}

loc_805521A8:
{
    r0 = MemoryInline::FlatRead32((r3 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_805521B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80552258;
    }
}

loc_805521B4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805521C8;
    }
}

loc_805521B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805521BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805521D8;
    }
}

loc_805521C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805521F8;
    }
}

loc_805521C4:
{
    goto loc_805522D4;
}

loc_805521C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_805521CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80552298;
    }
}

loc_805521D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805522D4;
    }
}

loc_805521D4:
{
    goto loc_80552238;
}

loc_805521D8:
{
}

loc_805521DC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_805522D4;
    }
}

loc_805521E0:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 1;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x805521F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805522D4;
}

loc_805521F8:
{
}

loc_805521FC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(4))) {
        goto loc_80552214;
    }
}

loc_80552200:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 3;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x80552214u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80552214:
{
}

loc_80552218:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(2))) {
        goto loc_805522D4;
    }
}

loc_8055221C:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r4 = 2;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x80552234u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805522D4;
}

loc_80552238:
{
}

loc_8055223C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_805522D4;
    }
}

loc_80552240:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 2;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x80552254u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805522D4;
}

loc_80552258:
{
}

loc_8055225C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(4))) {
        goto loc_80552274;
    }
}

loc_80552260:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x80552274u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80552274:
{
}

loc_80552278:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(1))) {
        goto loc_805522D4;
    }
}

loc_8055227C:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r4 = 1;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x80552294u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805522D4;
}

loc_80552298:
{
}

loc_8055229C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(4))) {
        goto loc_805522B4;
    }
}

loc_805522A0:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 3;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x805522B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805522B4:
{
}

loc_805522B8:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(2))) {
        goto loc_805522D4;
    }
}

loc_805522BC:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r4 = 2;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x805522D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805522D4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8055214C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8055214C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8055214C func_8055214C preserves=true fpr_mask=0x00000000
