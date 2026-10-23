#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8041D678(CpuContext* ctx);
extern "C" void func_8041D678_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80507A40(CpuContext* ctx);
extern "C" uint32_t func_80507A40_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8050E550(CpuContext* ctx);
extern "C" uint64_t func_8050E550_rac8_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_805132D0(CpuContext* ctx);
extern "C" uint64_t func_805132D0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80513C60(CpuContext* ctx);
extern "C" uint64_t func_80513C60_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8041D388_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    goto loc_8041D388;

loc_8041D388:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x80507A40u>(&func_80507A40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80507A40_960 = func_80507A40_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80507A40_960;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80507A40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_8041D3B4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8041D5F4;
    }
}

loc_8041D3B8:
{
    r30 = MemoryInline::FlatRead32((r1 + 12));
}

loc_8041D3C0:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(0))) {
        goto loc_8041D5F4;
    }
}

loc_8041D3C4:
{
    r29 = MemoryInline::FlatRead32((r1 + 8));
}

loc_8041D3CC:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8041D5F4;
    }
}

loc_8041D3D0:
{
    // inline leaf 0x803C99D8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16736));
    // end of inlined leaf 0x803C99D8
    r4 = 0x80600000u;
    r4 = (r4 + 15712);
    r5 = r30;
    r6 = r29;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8041D3F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_8041D400:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8041D428;
    }
}

loc_8041D404:
{
}

loc_8041D408:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8041D44C;
    }
}

loc_8041D40C:
{
}

loc_8041D410:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8041D470;
    }
}

loc_8041D414:
{
}

loc_8041D418:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_8041D50C;
    }
}

loc_8041D41C:
{
}

loc_8041D420:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_8041D5B0;
    }
}

loc_8041D424:
{
    goto loc_8041D5EC;
}

loc_8041D428:
{
    r3 = r31;
    r4 = 0x80000000u;
    r4 = (r4 + 7);
    r5 = 74;
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r6 = (0 - r0);
    // inline leaf 0x8041D678 (10 guest instruction(s))
}

loc_inl1_0x8041D678:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl1_0x8041D680:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x8041D690;
    }
}

loc_inl1_0x8041D684:
{
    r0 = MemoryInline::FlatRead8((r3 + 16));
}

loc_inl1_0x8041D68C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8041D690:
{
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite32((r3 + 8), r5);
    MemoryInline::FlatWrite32((r3 + 12), r6);
    goto loc_inl1_cont_8041D678;
}

loc_inl1_return:
{
}

loc_inl1_cont_8041D678:
{
    // end of inlined leaf 0x8041D678
    // inline leaf 0x80507AF0 (7 guest instruction(s))
}

loc_inl2_0x80507AF0:
{
    r0 = MemoryInline::FlatRead32((r13 + -13936));
}

loc_inl2_0x80507AF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80507AFC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -13936), r0);
    MemoryInline::FlatWrite32((r13 + -13932), r0);
    goto loc_inl2_cont_80507AF0;
}

loc_inl2_return:
{
}

loc_inl2_cont_80507AF0:
{
    // end of inlined leaf 0x80507AF0
    goto loc_8041D5EC;
}

loc_8041D44C:
{
    r3 = r31;
    r4 = 0x80000000u;
    r4 = (r4 + 7);
    r5 = 73;
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r6 = (0 - r0);
    // inline leaf 0x8041D678 (10 guest instruction(s))
}

loc_inl3_0x8041D678:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl3_0x8041D680:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x8041D690;
    }
}

loc_inl3_0x8041D684:
{
    r0 = MemoryInline::FlatRead8((r3 + 16));
}

loc_inl3_0x8041D68C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x8041D690:
{
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite32((r3 + 8), r5);
    MemoryInline::FlatWrite32((r3 + 12), r6);
    goto loc_inl3_cont_8041D678;
}

loc_inl3_return:
{
}

loc_inl3_cont_8041D678:
{
    // end of inlined leaf 0x8041D678
    // inline leaf 0x80507AF0 (7 guest instruction(s))
}

loc_inl4_0x80507AF0:
{
    r0 = MemoryInline::FlatRead32((r13 + -13936));
}

loc_inl4_0x80507AF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x80507AFC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -13936), r0);
    MemoryInline::FlatWrite32((r13 + -13932), r0);
    goto loc_inl4_cont_80507AF0;
}

loc_inl4_return:
{
}

loc_inl4_cont_80507AF0:
{
    // end of inlined leaf 0x80507AF0
    goto loc_8041D5EC;
}

loc_8041D470:
{
    r3 = r31;
    r4 = 0x80000000u;
    r4 = (r4 + 7);
    r5 = 73;
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r6 = (0 - r0);
    // inline leaf 0x8041D678 (10 guest instruction(s))
}

loc_inl5_0x8041D678:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl5_0x8041D680:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl5_0x8041D690;
    }
}

loc_inl5_0x8041D684:
{
    r0 = MemoryInline::FlatRead8((r3 + 16));
}

loc_inl5_0x8041D68C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x8041D690:
{
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite32((r3 + 8), r5);
    MemoryInline::FlatWrite32((r3 + 12), r6);
    goto loc_inl5_cont_8041D678;
}

loc_inl5_return:
{
}

loc_inl5_cont_8041D678:
{
    // end of inlined leaf 0x8041D678
    r30 = 0;
    MemoryInline::FlatWrite8((r31 + 16), static_cast<uint8_t>(r30));
    r0 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWrite32((r31 + 44), r0);
    r0 = MemoryInline::FlatRead32((r31 + 108));
}

loc_8041D4A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8041D4FC;
    }
}

loc_8041D4A8:
{
    r0 = MemoryInline::FlatRead8((r31 + 17540));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8041D4B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8041D4C8;
    }
}

loc_8041D4B8:
{
    r3 = MemoryInline::FlatRead32((r31 + 17532));
    ctx->lr = 0x8041D4C0u;
    if constexpr (KnownRegArgsCpuCall<0x80513C60u>(&func_80513C60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80513C60_2904 = func_80513C60_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80513C60_2904);
        r4 = static_cast<uint32_t>(regargs_result_80513C60_2904 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80513C60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    ctx->lr = 0x8041D4C4u;
    if constexpr (KnownRegArgsCpuCall<0x805132D0u>(&func_805132D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_805132D0_30B8 = func_805132D0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_805132D0_30B8);
        r4 = static_cast<uint32_t>(regargs_result_805132D0_30B8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805132D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    MemoryInline::FlatWrite8((r31 + 17540), static_cast<uint8_t>(r30));
}

loc_8041D4C8:
{
    r3 = MemoryInline::FlatRead32((r13 + -16704));
}

loc_8041D4D0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8041D4F4;
    }
}

loc_8041D4D4:
{
    ctx->lr = 0x8041D4D8u;
    if constexpr (KnownRegArgsCpuCall<0x8050E550u>(&func_8050E550)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8050E550_3993 = func_8050E550_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8050E550_3993);
        r4 = static_cast<uint32_t>(regargs_result_8050E550_3993 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8050E550u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = 0x806D0000u;
    r3 = (r3 + 23248);
    r4 = 0;
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -16704), r0);
}

loc_8041D4F4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 108), r0);
}

loc_8041D4FC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 116), r0);
    // inline leaf 0x80507AF0 (7 guest instruction(s))
}

loc_inl6_0x80507AF0:
{
    r0 = MemoryInline::FlatRead32((r13 + -13936));
}

loc_inl6_0x80507AF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x80507AFC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -13936), r0);
    MemoryInline::FlatWrite32((r13 + -13932), r0);
    goto loc_inl6_cont_80507AF0;
}

loc_inl6_return:
{
}

loc_inl6_cont_80507AF0:
{
    // end of inlined leaf 0x80507AF0
    goto loc_8041D5EC;
}

loc_8041D50C:
{
    r3 = r31;
    r4 = 0x80000000u;
    r4 = (r4 + 7);
    r5 = 73;
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r6 = (0 - r0);
    // inline leaf 0x8041D678 (10 guest instruction(s))
}

loc_inl7_0x8041D678:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl7_0x8041D680:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl7_0x8041D690;
    }
}

loc_inl7_0x8041D684:
{
    r0 = MemoryInline::FlatRead8((r3 + 16));
}

loc_inl7_0x8041D68C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl7_return;
    }
}

loc_inl7_0x8041D690:
{
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite32((r3 + 8), r5);
    MemoryInline::FlatWrite32((r3 + 12), r6);
    goto loc_inl7_cont_8041D678;
}

loc_inl7_return:
{
}

loc_inl7_cont_8041D678:
{
    // end of inlined leaf 0x8041D678
    r30 = 0;
    MemoryInline::FlatWrite8((r31 + 16), static_cast<uint8_t>(r30));
    r0 = -1;
    MemoryInline::FlatWrite32((r31 + 104), r0);
    r0 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWrite32((r31 + 44), r0);
    r0 = MemoryInline::FlatRead32((r31 + 108));
}

loc_8041D548:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8041D5A0;
    }
}

loc_8041D54C:
{
    r0 = MemoryInline::FlatRead8((r31 + 17540));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8041D558:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8041D56C;
    }
}

loc_8041D55C:
{
    r3 = MemoryInline::FlatRead32((r31 + 17532));
    ctx->lr = 0x8041D564u;
    if constexpr (KnownRegArgsCpuCall<0x80513C60u>(&func_80513C60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80513C60_4BEF = func_80513C60_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80513C60_4BEF);
        r4 = static_cast<uint32_t>(regargs_result_80513C60_4BEF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80513C60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    ctx->lr = 0x8041D568u;
    if constexpr (KnownRegArgsCpuCall<0x805132D0u>(&func_805132D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_805132D0_53A3 = func_805132D0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_805132D0_53A3);
        r4 = static_cast<uint32_t>(regargs_result_805132D0_53A3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805132D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    MemoryInline::FlatWrite8((r31 + 17540), static_cast<uint8_t>(r30));
}

loc_8041D56C:
{
    r3 = MemoryInline::FlatRead32((r13 + -16704));
}

loc_8041D574:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8041D598;
    }
}

loc_8041D578:
{
    ctx->lr = 0x8041D57Cu;
    if constexpr (KnownRegArgsCpuCall<0x8050E550u>(&func_8050E550)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8050E550_5C7E = func_8050E550_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8050E550_5C7E);
        r4 = static_cast<uint32_t>(regargs_result_8050E550_5C7E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8050E550u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = 0x806D0000u;
    r3 = (r3 + 23248);
    r4 = 0;
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -16704), r0);
}

loc_8041D598:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 108), r0);
}

loc_8041D5A0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 116), r0);
    // inline leaf 0x80507AF0 (7 guest instruction(s))
}

loc_inl8_0x80507AF0:
{
    r0 = MemoryInline::FlatRead32((r13 + -13936));
}

loc_inl8_0x80507AF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_inl8_return;
    }
}

loc_inl8_0x80507AFC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -13936), r0);
    MemoryInline::FlatWrite32((r13 + -13932), r0);
    goto loc_inl8_cont_80507AF0;
}

loc_inl8_return:
{
}

loc_inl8_cont_80507AF0:
{
    // end of inlined leaf 0x80507AF0
    goto loc_8041D5EC;
}

loc_8041D5B0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 16), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = 0x80000000u;
    r4 = (r4 + 7);
    r5 = 75;
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r6 = (0 - r0);
    if constexpr (KnownRegArgsCpuCall<0x8041D678u>(&func_8041D678)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        func_8041D678_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8041D678u>(ctx);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    }
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 16), static_cast<uint8_t>(r0));
    r0 = -1;
    MemoryInline::FlatWrite32((r31 + 104), r0);
    r0 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWrite32((r31 + 44), r0);
}

loc_8041D5EC:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    goto loc_8041D5F8;
}

loc_8041D5F4:
{
    r3 = 0;
}

loc_8041D5F8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8041D388(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8041D388_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8041D388 func_8041D388 preserves=true fpr_mask=0x00000000
