#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045A8C8(CpuContext* ctx);
extern "C" uint64_t func_8045A8C8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80462418(CpuContext* ctx);
extern "C" uint64_t func_80462418_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804641BC(CpuContext* ctx);
extern "C" uint32_t func_804641BC_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80462918_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_sthu_ea_0 = 0;
    uint32_t r3_sthu_ea_1 = 0;
    uint32_t r3_sthu_ea_10 = 0;
    uint32_t r3_sthu_ea_11 = 0;
    uint32_t r3_sthu_ea_12 = 0;
    uint32_t r3_sthu_ea_13 = 0;
    uint32_t r3_sthu_ea_14 = 0;
    uint32_t r3_sthu_ea_15 = 0;
    uint32_t r3_sthu_ea_16 = 0;
    uint32_t r3_sthu_ea_17 = 0;
    uint32_t r3_sthu_ea_18 = 0;
    uint32_t r3_sthu_ea_19 = 0;
    uint32_t r3_sthu_ea_2 = 0;
    uint32_t r3_sthu_ea_3 = 0;
    uint32_t r3_sthu_ea_4 = 0;
    uint32_t r3_sthu_ea_5 = 0;
    uint32_t r3_sthu_ea_6 = 0;
    uint32_t r3_sthu_ea_7 = 0;
    uint32_t r3_sthu_ea_8 = 0;
    uint32_t r3_sthu_ea_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r6_subfic_ra_0 = 0;
    uint32_t r6_subfic_ra_1 = 0;
    uint32_t r6_subfic_ra_2 = 0;
    uint32_t r6_subfic_ra_3 = 0;
    uint32_t r6_subfic_ra_4 = 0;
    uint32_t r6_subfic_ra_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80462918u);
    goto loc_80462918;

loc_80462918:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    r5 = 0x80610000u;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    f31.d = f1.d;
    r30 = r4;
    r29 = r3;
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r5 = MemoryInline::FlatRead32((r5 + -2880));
}

loc_80462958:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r31 = MemoryInline::FlatRead8(r5);
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(509))) {
        goto loc_8046296C;
    }
}

loc_80462964:
{
    r3 = 0;
    goto loc_80462D44;
}

loc_8046296C:
{
    r28 = 0;
    r0 = 32;
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r28));
    r3 = (r1 + 16);
    r4 = (r1 + 56);
    MemoryInline::FlatWriteRam16((r1 + 18), static_cast<uint16_t>(r0));
    ctx->lr = 0x80462988u;
    if constexpr (KnownRegArgsCpuCall<0x8045A8C8u>(&func_8045A8C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045A8C8_11E5 = func_8045A8C8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045A8C8_11E5);
        r4 = static_cast<uint32_t>(regargs_result_8045A8C8_11E5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045A8C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead8((r1 + 61));
}

loc_80462990:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(48))) {
        goto loc_804629A8;
    }
}

loc_80462994:
{
}

loc_80462998:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(73))) {
        goto loc_80462A38;
    }
}

loc_8046299C:
{
}

loc_804629A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(78))) {
        goto loc_80462AC8;
    }
}

loc_804629A4:
{
    goto loc_80462B58;
}

loc_804629A8:
{
    r0 = MemoryInline::FlatRead8((r1 + 56));
    MemoryInline::FlatWriteRam16((r1 + 58), static_cast<uint16_t>(r28));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804629F4;
    }
}

loc_804629B8:
{
    r0 = MemoryInline::FlatRead16((r30 + 6));
    r28 = (r29 + -10);
}

loc_804629C4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65))) {
        goto loc_804629DC;
    }
}

loc_804629C8:
{
    r4 = 0x80610000u;
    r3 = r28;
    r4 = (r4 + -632);
    if constexpr (KnownRegArgsCpuCall<0x804641BCu>(&func_804641BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804641BC_1D0C = func_804641BC_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804641BC_1D0C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804641BCu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_80462A30;
}

loc_804629DC:
{
    r4 = 0x80610000u;
    r3 = r28;
    r4 = (r4 + -632);
    r4 = (r4 + 10);
    if constexpr (KnownRegArgsCpuCall<0x804641BCu>(&func_804641BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804641BC_2021 = func_804641BC_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804641BC_2021;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804641BCu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_80462A30;
}

loc_804629F4:
{
    r0 = MemoryInline::FlatRead16((r30 + 6));
    r28 = (r29 + -8);
}

loc_80462A00:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65))) {
        goto loc_80462A1C;
    }
}

loc_80462A04:
{
    r4 = 0x80610000u;
    r3 = r28;
    r4 = (r4 + -632);
    r4 = (r4 + 20);
    if constexpr (KnownRegArgsCpuCall<0x804641BCu>(&func_804641BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804641BC_2405 = func_804641BC_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804641BC_2405;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804641BCu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_80462A30;
}

loc_80462A1C:
{
    r4 = 0x80610000u;
    r3 = r28;
    r4 = (r4 + -632);
    r4 = (r4 + 28);
    if constexpr (KnownRegArgsCpuCall<0x804641BCu>(&func_804641BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804641BC_271A = func_804641BC_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804641BC_271A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804641BCu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_80462A30:
{
    r3 = r28;
    goto loc_80462D44;
}

loc_80462A38:
{
    r0 = MemoryInline::FlatRead8((r1 + 56));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80462A84;
    }
}

loc_80462A44:
{
    r0 = MemoryInline::FlatRead16((r30 + 6));
    r28 = (r29 + -10);
}

loc_80462A50:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65))) {
        goto loc_80462A6C;
    }
}

loc_80462A54:
{
    r4 = 0x80610000u;
    r3 = r28;
    r4 = (r4 + -632);
    r4 = (r4 + 36);
    if constexpr (KnownRegArgsCpuCall<0x804641BCu>(&func_804641BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804641BC_2BFC = func_804641BC_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804641BC_2BFC;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804641BCu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_80462AC0;
}

loc_80462A6C:
{
    r4 = 0x80610000u;
    r3 = r28;
    r4 = (r4 + -632);
    r4 = (r4 + 46);
    if constexpr (KnownRegArgsCpuCall<0x804641BCu>(&func_804641BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804641BC_2F11 = func_804641BC_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804641BC_2F11;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804641BCu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_80462AC0;
}

loc_80462A84:
{
    r0 = MemoryInline::FlatRead16((r30 + 6));
    r28 = (r29 + -8);
}

loc_80462A90:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65))) {
        goto loc_80462AAC;
    }
}

loc_80462A94:
{
    r4 = 0x80610000u;
    r3 = r28;
    r4 = (r4 + -632);
    r4 = (r4 + 56);
    if constexpr (KnownRegArgsCpuCall<0x804641BCu>(&func_804641BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804641BC_32F5 = func_804641BC_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804641BC_32F5;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804641BCu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_80462AC0;
}

loc_80462AAC:
{
    r4 = 0x80610000u;
    r3 = r28;
    r4 = (r4 + -632);
    r4 = (r4 + 64);
    if constexpr (KnownRegArgsCpuCall<0x804641BCu>(&func_804641BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804641BC_360A = func_804641BC_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804641BC_360A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804641BCu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_80462AC0:
{
    r3 = r28;
    goto loc_80462D44;
}

loc_80462AC8:
{
    r0 = MemoryInline::FlatRead8((r1 + 56));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80462B14;
    }
}

loc_80462AD4:
{
    r0 = MemoryInline::FlatRead16((r30 + 6));
    r28 = (r29 + -10);
}

loc_80462AE0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65))) {
        goto loc_80462AFC;
    }
}

loc_80462AE4:
{
    r4 = 0x80610000u;
    r3 = r28;
    r4 = (r4 + -632);
    r4 = (r4 + 72);
    if constexpr (KnownRegArgsCpuCall<0x804641BCu>(&func_804641BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804641BC_3AEC = func_804641BC_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804641BC_3AEC;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804641BCu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_80462B50;
}

loc_80462AFC:
{
    r4 = 0x80610000u;
    r3 = r28;
    r4 = (r4 + -632);
    r4 = (r4 + 82);
    if constexpr (KnownRegArgsCpuCall<0x804641BCu>(&func_804641BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804641BC_3E01 = func_804641BC_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804641BC_3E01;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804641BCu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_80462B50;
}

loc_80462B14:
{
    r0 = MemoryInline::FlatRead16((r30 + 6));
    r28 = (r29 + -8);
}

loc_80462B20:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65))) {
        goto loc_80462B3C;
    }
}

loc_80462B24:
{
    r4 = 0x80610000u;
    r3 = r28;
    r4 = (r4 + -632);
    r4 = (r4 + 92);
    if constexpr (KnownRegArgsCpuCall<0x804641BCu>(&func_804641BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804641BC_41E5 = func_804641BC_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804641BC_41E5;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804641BCu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_80462B50;
}

loc_80462B3C:
{
    r4 = 0x80610000u;
    r3 = r28;
    r4 = (r4 + -632);
    r4 = (r4 + 100);
    if constexpr (KnownRegArgsCpuCall<0x804641BCu>(&func_804641BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804641BC_44FB = func_804641BC_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804641BC_44FB;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804641BCu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_80462B50:
{
    r3 = r28;
    goto loc_80462D44;
}

loc_80462B58:
{
    r0 = MemoryInline::FlatRead8((r1 + 9));
    r8 = 1;
    r3 = MemoryInline::FlatRead8((r1 + 8));
    r7 = 100;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r0 = (r0_rot_1 & -131072);
    MemoryInline::FlatWriteRam8((r1 + 40), static_cast<uint8_t>(r8));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(25));
    r0_mrot_1 = (r0_rot_2 & -33554432);
    r0_mdest_1 = (r0 & 33554431);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r4 = r29;
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
    r5 = (r5_rot_1 & 2047);
    MemoryInline::FlatWriteRam8((r1 + 41), static_cast<uint8_t>(r8));
    r0 = (0 - r5);
    r0 = (r0 | r5);
    MemoryInline::FlatWriteRam8((r1 + 42), static_cast<uint8_t>(r28));
    r3 = (static_cast<int32_t>(r0) >> 31);
    r0 = (r5 + -1023);
    MemoryInline::FlatWriteRam8((r1 + 43), static_cast<uint8_t>(r28));
    r3 = (r0 & r3);
    r5 = (r1 + 24);
    r6 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r28));
    MemoryInline::FlatWriteRam16((r1 + 46), static_cast<uint16_t>(r7));
    r0 = MemoryInline::FlatRead32((r1 + 44));
    MemoryInline::FlatWriteRam32((r1 + 48), r28);
    MemoryInline::FlatWriteRam32((r1 + 52), r8);
    MemoryInline::FlatWriteRam32((r1 + 24), r6);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    MemoryInline::FlatWriteRam32((r1 + 36), r8);
    if constexpr (KnownRegArgsCpuCall<0x80462418u>(&func_80462418)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        const auto regargs_result_80462418_4E33 = func_80462418_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80462418_4E33);
        r4 = static_cast<uint32_t>(regargs_result_80462418_4E33 >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        InvokeDirectCpu<0x80462418u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead16((r30 + 6));
}

loc_80462BD4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(97))) {
        goto loc_80462BE4;
    }
}

loc_80462BD8:
{
    r0 = 112;
    r3_sthu_ea_1 = (r3 + -2);
    MemoryInline::FlatWrite16(r3_sthu_ea_1, static_cast<uint16_t>(r0));
    r3 = r3_sthu_ea_1;
    goto loc_80462BEC;
}

loc_80462BE4:
{
    r0 = 80;
    r3_sthu_ea_2 = (r3 + -2);
    MemoryInline::FlatWrite16(r3_sthu_ea_2, static_cast<uint16_t>(r0));
    r3 = r3_sthu_ea_2;
}

loc_80462BEC:
{
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r8 = (r1 + 8);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r9 = (r4 + 11);
    ctr = r0;
}

loc_80462C04:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(1))) {
        goto loc_80462C9C;
    }
}

loc_80462C08:
{
}

loc_80462C0C:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(64))) {
        goto loc_80462C88;
    }
}

loc_80462C10:
{
    r4 = (static_cast<int32_t>(r9) >> 3);
    r0 = (r9 + -4);
    r7 = (r8 + r4);
    r6 = (r9 & 7);
    r4 = (r9 & -8);
    r0 = (r0 & -8);
    r5 = MemoryInline::FlatRead8(r7);
    r6_subfic_ra_2 = r6;
    r6 = (7 - r6_subfic_ra_2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80462C34:
{
    r0 = PPC_Sraw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
    r4 = (r0 & 255);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80462C58;
    }
}

loc_80462C40:
{
    r0 = MemoryInline::FlatRead8((r7 + -1));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_4 & -256);
    r0 = PPC_Sraw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    r0 = (r0 & 255);
    r0 = (r4 | r0);
    r4 = (r0 & 255);
}

loc_80462C58:
{
    r4 = (r4 & 15);
}

loc_80462C60:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(10))) {
        goto loc_80462C6C;
    }
}

loc_80462C64:
{
    r4 = (r4 + 48);
    goto loc_80462C8C;
}

loc_80462C6C:
{
    r0 = MemoryInline::FlatRead16((r30 + 6));
}

loc_80462C74:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(97))) {
        goto loc_80462C80;
    }
}

loc_80462C78:
{
    r4 = (r4 + 87);
    goto loc_80462C8C;
}

loc_80462C80:
{
    r4 = (r4 + 55);
    goto loc_80462C8C;
}

loc_80462C88:
{
    r4 = 48;
}

loc_80462C8C:
{
    r0 = (r4 & 255);
    r3_sthu_ea_5 = (r3 + -2);
    MemoryInline::FlatWrite16(r3_sthu_ea_5, static_cast<uint16_t>(r0));
    r3 = r3_sthu_ea_5;
    r9 = (r9 + -4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80462C08;
    }
}

loc_80462C9C:
{
    r0 = MemoryInline::FlatRead32((r30 + 12));
}

loc_80462CA4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80462CB4;
    }
}

loc_80462CA8:
{
    r0 = MemoryInline::FlatRead8((r30 + 3));
}

loc_80462CB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80462CB8;
    }
}

loc_80462CB4:
{
    r3_sthu_ea_7 = (r3 + -2);
    MemoryInline::FlatWrite16(r3_sthu_ea_7, static_cast<uint16_t>(r31));
    r3 = r3_sthu_ea_7;
}

loc_80462CB8:
{
    f1.d = std::fabs(f31.d);
    f0.d = MemoryInline::FlatReadFloat64((r2 + -4216));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80462CC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80462CD4;
    }
}

loc_80462CC8:
{
    r0 = 49;
    r3_sthu_ea_9 = (r3 + -2);
    MemoryInline::FlatWrite16(r3_sthu_ea_9, static_cast<uint16_t>(r0));
    r3 = r3_sthu_ea_9;
    goto loc_80462CDC;
}

loc_80462CD4:
{
    r0 = 48;
    r3_sthu_ea_10 = (r3 + -2);
    MemoryInline::FlatWrite16(r3_sthu_ea_10, static_cast<uint16_t>(r0));
    r3 = r3_sthu_ea_10;
}

loc_80462CDC:
{
    r0 = MemoryInline::FlatRead16((r30 + 6));
}

loc_80462CE4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(97))) {
        goto loc_80462CF4;
    }
}

loc_80462CE8:
{
    r0 = 120;
    r3_sthu_ea_12 = (r3 + -2);
    MemoryInline::FlatWrite16(r3_sthu_ea_12, static_cast<uint16_t>(r0));
    r3 = r3_sthu_ea_12;
    goto loc_80462CFC;
}

loc_80462CF4:
{
    r0 = 88;
    r3_sthu_ea_13 = (r3 + -2);
    MemoryInline::FlatWrite16(r3_sthu_ea_13, static_cast<uint16_t>(r0));
    r3 = r3_sthu_ea_13;
}

loc_80462CFC:
{
    r0 = 48;
    r3_sthu_ea_15 = (r3 + -2);
    MemoryInline::FlatWrite16(r3_sthu_ea_15, static_cast<uint16_t>(r0));
    r3 = r3_sthu_ea_15;
    r0 = MemoryInline::FlatRead8((r1 + 56));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80462D1C;
    }
}

loc_80462D10:
{
    r0 = 45;
    r3_sthu_ea_16 = (r3 + -2);
    MemoryInline::FlatWrite16(r3_sthu_ea_16, static_cast<uint16_t>(r0));
    r3 = r3_sthu_ea_16;
    goto loc_80462D44;
}

loc_80462D1C:
{
    r0 = MemoryInline::FlatRead8((r30 + 1));
}

loc_80462D24:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80462D34;
    }
}

loc_80462D28:
{
    r0 = 43;
    r3_sthu_ea_17 = (r3 + -2);
    MemoryInline::FlatWrite16(r3_sthu_ea_17, static_cast<uint16_t>(r0));
    r3 = r3_sthu_ea_17;
    goto loc_80462D44;
}

loc_80462D34:
{
}

loc_80462D38:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80462D44;
    }
}

loc_80462D3C:
{
    r0 = 32;
    r3_sthu_ea_18 = (r3 + -2);
    MemoryInline::FlatWrite16(r3_sthu_ea_18, static_cast<uint16_t>(r0));
    r3 = r3_sthu_ea_18;
}

loc_80462D44:
{
    r0 = MemoryInline::FlatRead32((r1 + 148));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 128));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80462918(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80462918_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80462918 func_80462918 preserves=true fpr_mask=0x00000000
