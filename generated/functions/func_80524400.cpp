#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CBE80(CpuContext* ctx);
extern "C" uint64_t func_804CBE80_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80524400_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    goto loc_80524400;

loc_80524400:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead32((r13 + -13544));
}

loc_80524414:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-3))) {
        goto loc_80524428;
    }
}

loc_80524418:
{
    r3 = 3;
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -13544), r3);
    MemoryInline::FlatWrite32((r13 + -13540), r0);
}

loc_80524428:
{
    r3 = 0x80790000u;
    r3 = (r3 + 8968);
    ctx->lr = 0x80524434u;
    if constexpr (KnownRegArgsCpuCall<0x804CBE80u>(&func_804CBE80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804CBE80_6E3 = func_804CBE80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804CBE80_6E3);
        r4 = static_cast<uint32_t>(regargs_result_804CBE80_6E3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804CBE80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead32((r13 + -13544));
}

loc_8052443C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_80524460;
    }
}

loc_80524440:
{
    r12 = MemoryInline::FlatRead32((r13 + -13436));
}

loc_80524448:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80524484;
    }
}

loc_8052444C:
{
    r4 = MemoryInline::FlatRead32((r13 + -13440));
    r3 = -2;
    ctr = r12;
    ctx->lr = 0x8052445Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_80524484;
}

loc_80524460:
{
    r12 = MemoryInline::FlatRead32((r13 + -13436));
}

loc_80524468:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_8052447C;
    }
}

loc_8052446C:
{
    r4 = MemoryInline::FlatRead32((r13 + -13440));
    r3 = -100;
    ctr = r12;
    ctx->lr = 0x8052447Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8052447C:
{
    r0 = -3;
    MemoryInline::FlatWrite32((r13 + -13544), r0);
}

loc_80524484:
{
    r0 = 0;
    r3 = 0x80790000u;
    MemoryInline::FlatWrite32((r13 + -13436), r0);
    r3 = (r3 + 9016);
    MemoryInline::FlatWrite32((r13 + -13440), r0);
    ctx->lr = 0x8052449Cu;
    if constexpr (KnownRegArgsCpuCall<0x804CBE80u>(&func_804CBE80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804CBE80_1117 = func_804CBE80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804CBE80_1117);
        r4 = static_cast<uint32_t>(regargs_result_804CBE80_1117 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804CBE80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead32((r13 + -13520));
}

loc_805244A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_805244EC;
    }
}

loc_805244A8:
{
    r3 = MemoryInline::FlatRead32((r13 + -13544));
}

loc_805244B0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_805244C0;
    }
}

loc_805244B4:
{
    r0 = (r3 + -5);
}

loc_805244BC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_805244D4;
    }
}

loc_805244C0:
{
    r3 = -1;
    r0 = -2;
    MemoryInline::FlatWrite32((r13 + -13520), r3);
    MemoryInline::FlatWrite32((r13 + -13524), r0);
    goto loc_805244EC;
}

loc_805244D4:
{
    r4 = -1;
    r3 = -100;
    r0 = -3;
    MemoryInline::FlatWrite32((r13 + -13520), r4);
    MemoryInline::FlatWrite32((r13 + -13524), r3);
    MemoryInline::FlatWrite32((r13 + -13544), r0);
}

loc_805244EC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80524400(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80524400_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80524400 func_80524400 preserves=true fpr_mask=0x00000000
