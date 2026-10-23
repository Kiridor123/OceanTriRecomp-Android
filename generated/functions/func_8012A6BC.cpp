#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80126E10(CpuContext* ctx);
extern "C" uint64_t func_80126E10_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80128C5C(CpuContext* ctx);
extern "C" uint64_t func_80128C5C_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_801297A8(CpuContext* ctx);
extern "C" uint64_t func_801297A8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012A3B8(CpuContext* ctx);
extern "C" uint32_t func_8012A3B8_ra48_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8012A418(CpuContext* ctx);
extern "C" uint32_t func_8012A418_ra8_e_8_0(CpuContext*, uint32_t, double, double, double);
extern "C" void func_8012B3E4(CpuContext* ctx);
extern "C" uint64_t func_8012B3E4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802E8A84(CpuContext* ctx);
extern "C" uint64_t func_802E8A84_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" uint64_t func_8012A6BC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
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
    uint32_t ctr = ctx->ctr;

    goto loc_8012A6BC;

loc_8012A6BC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r30 = r4;
    r3 = (r3 + 404);
    r4 = (r31 + 392);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 2457), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 2458), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 2459), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r31 + 2066), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 481));
    MemoryInline::FlatWrite8((r31 + 2550), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 2551));
    MemoryInline::FlatWrite8((r31 + 481), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = 2;
    // inline leaf 0x80137720 (8 guest instruction(s))
}

loc_inl0_0x80137720:
{
    r5 = MemoryInline::FlatRead8((r3 + 2227));
    r0 = (r4 & 255);
    r0 = (r5 & r0);
}

loc_inl0_0x80137730:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80137734:
{
    r0 = (r5 | r4);
    MemoryInline::FlatWrite8((r3 + 2227), static_cast<uint8_t>(r0));
    goto loc_inl0_cont_80137720;
}

loc_inl0_return:
{
}

loc_inl0_cont_80137720:
{
    // end of inlined leaf 0x80137720
    r3 = r31;
    ctx->lr = 0x8012A71Cu;
    if constexpr (KnownRegArgsCpuCall<0x801297A8u>(&func_801297A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_801297A8_EBC = func_801297A8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801297A8_EBC);
        r4 = static_cast<uint32_t>(regargs_result_801297A8_EBC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x801297A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = (r30 & 255);
}

loc_8012A724:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8012A750;
    }
}

loc_8012A728:
{
    r0 = MemoryInline::FlatRead8((r31 + 896));
}

loc_8012A730:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(8))) {
        goto loc_8012A750;
    }
}

loc_8012A734:
{
    r0 = MemoryInline::FlatRead32((r31 + 456));
    r0 = (r0 & 1);
}

loc_8012A740:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012A750;
    }
}

loc_8012A744:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead8((r31 + 2550));
    ctx->lr = 0x8012A750u;
    if constexpr (KnownRegArgsCpuCall<0x802E8A84u>(&func_802E8A84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802E8A84_14D2 = func_802E8A84_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802E8A84_14D2);
        r4 = static_cast<uint32_t>(regargs_result_802E8A84_14D2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x802E8A84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
}

loc_8012A750:
{
    r3 = r31;
    r4 = 0;
    r5 = 0;
    // inline leaf 0x80130790 (13 guest instruction(s))
}

loc_inl1_0x80130790:
{
    r6 = MemoryInline::FlatRead8((r3 + 1083));
    r0 = (r4 & 255);
}

loc_inl1_0x8013079C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x801307B0;
    }
}

loc_inl1_0x801307A0:
{
    r6 = MemoryInline::FlatRead8((r3 + 1084));
    r0 = (r5 & 255);
}

loc_inl1_0x801307AC:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(r0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x801307B0:
{
    MemoryInline::FlatWrite8((r3 + 1083), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 1084), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1088), static_cast<uint16_t>(r0));
    goto loc_inl1_cont_80130790;
}

loc_inl1_return:
{
}

loc_inl1_cont_80130790:
{
    // end of inlined leaf 0x80130790
    r3 = r31;
    // inline leaf 0x80136E7C (8 guest instruction(s))
    r4 = 0;
    MemoryInline::FlatWrite32((r3 + 1872), r4);
    MemoryInline::FlatWrite32((r3 + 1876), r4);
    MemoryInline::FlatWrite32((r3 + 1880), r4);
    r0 = -1;
    MemoryInline::FlatWrite32((r3 + 1884), r0);
    MemoryInline::FlatWrite8((r3 + 1888), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x80136E7C
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x8012A774u;
    if constexpr (KnownRegArgsCpuCall<0x80128C5Cu>(&func_80128C5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_80128C5C_1F61 = func_80128C5C_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80128C5C_1F61);
        r4 = static_cast<uint32_t>(regargs_result_80128C5C_1F61 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80128C5Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    }
    r5 = MemoryInline::FlatRead8((r31 + 2552));
}

loc_8012A77C:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(255))) {
        goto loc_8012A7C0;
    }
}

loc_8012A780:
{
    r4 = MemoryInline::FlatRead8((r31 + 481));
}

loc_8012A788:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r5))) {
        goto loc_8012A7C0;
    }
}

loc_8012A78C:
{
    r3 = r31;
    ctx->lr = 0x8012A794u;
    if constexpr (KnownRegArgsCpuCall<0x80126E10u>(&func_80126E10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_80126E10_264F = func_80126E10_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80126E10_264F);
        r4 = static_cast<uint32_t>(regargs_result_80126E10_264F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80126E10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
    r5 = r3;
    MemoryInline::FlatWrite8((r31 + 2551), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead8((r31 + 896));
}

loc_8012A7A4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(9))) {
        goto loc_8012A828;
    }
}

loc_8012A7A8:
{
    r3 = r31;
    r4 = 9;
    r5 = (r5 & 255);
    r6 = MemoryInline::FlatRead8((r31 + 898));
    ctx->lr = 0x8012A7BCu;
    if constexpr (KnownRegArgsCpuCall<0x8012B3E4u>(&func_8012B3E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8012B3E4_2BDC = func_8012B3E4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8012B3E4_2BDC);
        r4 = static_cast<uint32_t>(regargs_result_8012B3E4_2BDC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012B3E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    goto loc_8012A828;
}

loc_8012A7C0:
{
    r4 = MemoryInline::FlatRead8((r31 + 2564));
    r0 = (r4 & 1);
}

loc_8012A7CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012A7F8;
    }
}

loc_8012A7D0:
{
    r3 = MemoryInline::FlatRead8((r31 + 481));
    r0 = MemoryInline::FlatRead8((r31 + 2565));
}

loc_8012A7DC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8012A7F8;
    }
}

loc_8012A7E0:
{
    r0 = (r4 & 254);
    MemoryInline::FlatWrite8((r31 + 2564), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWrite8((r31 + 2565), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 2566), static_cast<uint8_t>(r0));
}

loc_8012A7F8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 505), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWrite8((r31 + 2552), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 896));
}

loc_8012A810:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(9))) {
        goto loc_8012A828;
    }
}

loc_8012A814:
{
    r3 = r31;
    r4 = 6;
    r5 = 255;
    r6 = 0;
    ctx->lr = 0x8012A828u;
    if constexpr (KnownRegArgsCpuCall<0x8012B3E4u>(&func_8012B3E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8012B3E4_37C0 = func_8012B3E4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8012B3E4_37C0);
        r4 = static_cast<uint32_t>(regargs_result_8012B3E4_37C0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012B3E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
}

loc_8012A828:
{
    r3 = r31;
    ctx->lr = 0x8012A830u;
    if constexpr (KnownRegArgsCpuCall<0x8012A3B8u>(&func_8012A3B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_8012A3B8_3EED = func_8012A3B8_ra48_0_8_0(ctx, r3, r6);
        r3 = regargs_result_8012A3B8_3EED;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8012A3B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = r31;
    ctx->lr = 0x8012A838u;
    if constexpr (KnownRegArgsCpuCall<0x8012A418u>(&func_8012A418)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_8012A418_4291 = func_8012A418_ra8_e_8_0(ctx, r3, f1.d, f2.d, f3.d);
        r3 = regargs_result_8012A418_4291;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012A418u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    }
    r3 = r31;
    r4 = 13;
    ctx->lr = 0x8012A844u;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80126520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    r12 = r3;
}

loc_8012A84C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012A85C;
    }
}

loc_8012A850:
{
    r3 = r31;
    ctr = r12;
    ctx->lr = 0x8012A85Cu;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
}

loc_8012A85C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
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
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8012A6BC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8012A6BC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8012A6BC func_8012A6BC preserves=true fpr_mask=0x00000000
