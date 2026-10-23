#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045A8C8(CpuContext* ctx);
extern "C" uint64_t func_8045A8C8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8045C718(CpuContext* ctx);
extern "C" uint64_t func_8045C718_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8045CC08_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r3_stbu_ea_0 = 0;
    uint32_t r3_stbu_ea_1 = 0;
    uint32_t r3_stbu_ea_10 = 0;
    uint32_t r3_stbu_ea_11 = 0;
    uint32_t r3_stbu_ea_12 = 0;
    uint32_t r3_stbu_ea_13 = 0;
    uint32_t r3_stbu_ea_14 = 0;
    uint32_t r3_stbu_ea_15 = 0;
    uint32_t r3_stbu_ea_16 = 0;
    uint32_t r3_stbu_ea_17 = 0;
    uint32_t r3_stbu_ea_18 = 0;
    uint32_t r3_stbu_ea_19 = 0;
    uint32_t r3_stbu_ea_2 = 0;
    uint32_t r3_stbu_ea_3 = 0;
    uint32_t r3_stbu_ea_4 = 0;
    uint32_t r3_stbu_ea_5 = 0;
    uint32_t r3_stbu_ea_6 = 0;
    uint32_t r3_stbu_ea_7 = 0;
    uint32_t r3_stbu_ea_8 = 0;
    uint32_t r3_stbu_ea_9 = 0;
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

    goto loc_8045CC08;

loc_8045CC08:
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

loc_8045CC48:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r31 = MemoryInline::FlatRead8(r5);
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(509))) {
        goto loc_8045CC5C;
    }
}

loc_8045CC54:
{
    r3 = 0;
    goto loc_8045CFA8;
}

loc_8045CC5C:
{
    r28 = 0;
    r0 = 32;
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r28));
    r3 = (r1 + 16);
    r4 = (r1 + 56);
    MemoryInline::FlatWriteRam16((r1 + 18), static_cast<uint16_t>(r0));
    ctx->lr = 0x8045CC78u;
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
        const auto regargs_result_8045A8C8_1257 = func_8045A8C8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045A8C8_1257);
        r4 = static_cast<uint32_t>(regargs_result_8045A8C8_1257 >> 32);
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

loc_8045CC80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(48))) {
        goto loc_8045CC98;
    }
}

loc_8045CC84:
{
}

loc_8045CC88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(73))) {
        goto loc_8045CCA0;
    }
}

loc_8045CC8C:
{
}

loc_8045CC90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(78))) {
        goto loc_8045CD2C;
    }
}

loc_8045CC94:
{
    goto loc_8045CDBC;
}

loc_8045CC98:
{
    MemoryInline::FlatWriteRam16((r1 + 58), static_cast<uint16_t>(r28));
    goto loc_8045CDBC;
}

loc_8045CCA0:
{
    r0 = MemoryInline::FlatRead8((r1 + 56));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045CCE8;
    }
}

loc_8045CCAC:
{
    r0 = MemoryInline::FlatRead8((r30 + 5));
    r28 = (r29 + -5);
}

loc_8045CCB8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65))) {
        goto loc_8045CCD0;
    }
}

loc_8045CCBC:
{
    r4 = 0x80570000u;
    r3 = r28;
    r4 = (r4 + 13040);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_1E94 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_1E94;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_8045CD24;
}

loc_8045CCD0:
{
    r4 = 0x80570000u;
    r3 = r28;
    r4 = (r4 + 13040);
    r4 = (r4 + 5);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_23A2 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_23A2;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_8045CD24;
}

loc_8045CCE8:
{
    r0 = MemoryInline::FlatRead8((r30 + 5));
    r28 = (r29 + -4);
}

loc_8045CCF4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65))) {
        goto loc_8045CD10;
    }
}

loc_8045CCF8:
{
    r4 = 0x80570000u;
    r3 = r28;
    r4 = (r4 + 13040);
    r4 = (r4 + 10);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_298C = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_298C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_8045CD24;
}

loc_8045CD10:
{
    r4 = 0x80570000u;
    r3 = r28;
    r4 = (r4 + 13040);
    r4 = (r4 + 14);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_2E9B = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_2E9B;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_8045CD24:
{
    r3 = r28;
    goto loc_8045CFA8;
}

loc_8045CD2C:
{
    r0 = MemoryInline::FlatRead8((r1 + 56));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045CD78;
    }
}

loc_8045CD38:
{
    r0 = MemoryInline::FlatRead8((r30 + 5));
    r28 = (r29 + -5);
}

loc_8045CD44:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65))) {
        goto loc_8045CD60;
    }
}

loc_8045CD48:
{
    r4 = 0x80570000u;
    r3 = r28;
    r4 = (r4 + 13040);
    r4 = (r4 + 18);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_3590 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_3590;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_8045CDB4;
}

loc_8045CD60:
{
    r4 = 0x80570000u;
    r3 = r28;
    r4 = (r4 + 13040);
    r4 = (r4 + 23);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_3A9F = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_3A9F;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_8045CDB4;
}

loc_8045CD78:
{
    r0 = MemoryInline::FlatRead8((r30 + 5));
    r28 = (r29 + -4);
}

loc_8045CD84:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65))) {
        goto loc_8045CDA0;
    }
}

loc_8045CD88:
{
    r4 = 0x80570000u;
    r3 = r28;
    r4 = (r4 + 13040);
    r4 = (r4 + 28);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_4089 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_4089;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_8045CDB4;
}

loc_8045CDA0:
{
    r4 = 0x80570000u;
    r3 = r28;
    r4 = (r4 + 13040);
    r4 = (r4 + 32);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_4598 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_4598;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_8045CDB4:
{
    r3 = r28;
    goto loc_8045CFA8;
}

loc_8045CDBC:
{
    r0 = MemoryInline::FlatRead8((r1 + 9));
    r8 = 0;
    r3 = MemoryInline::FlatRead8((r1 + 8));
    r9 = 1;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r0 = (r0_rot_1 & -131072);
    r7 = 100;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(25));
    r0_mrot_1 = (r0_rot_2 & -33554432);
    r0_mdest_1 = (r0 & 33554431);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWriteRam8((r1 + 40), static_cast<uint8_t>(r9));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
    r5 = (r5_rot_1 & 2047);
    r4 = r29;
    r0 = (0 - r5);
    MemoryInline::FlatWriteRam8((r1 + 41), static_cast<uint8_t>(r9));
    r3 = (r0 | r5);
    r0 = (r5 + -1023);
    MemoryInline::FlatWriteRam8((r1 + 42), static_cast<uint8_t>(r8));
    r3 = (static_cast<int32_t>(r3) >> 31);
    r5 = (r1 + 24);
    MemoryInline::FlatWriteRam8((r1 + 43), static_cast<uint8_t>(r8));
    r3 = (r0 & r3);
    r6 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 45), static_cast<uint8_t>(r7));
    r0 = MemoryInline::FlatRead32((r1 + 44));
    MemoryInline::FlatWriteRam32((r1 + 48), r8);
    MemoryInline::FlatWriteRam32((r1 + 52), r9);
    MemoryInline::FlatWriteRam32((r1 + 24), r6);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    MemoryInline::FlatWriteRam32((r1 + 32), r8);
    MemoryInline::FlatWriteRam32((r1 + 36), r9);
    if constexpr (KnownRegArgsCpuCall<0x8045C718u>(&func_8045C718)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        const auto regargs_result_8045C718_508B = func_8045C718_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045C718_508B);
        r4 = static_cast<uint32_t>(regargs_result_8045C718_508B >> 32);
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
        InvokeDirectCpu<0x8045C718u>(ctx);
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
    r0 = MemoryInline::FlatRead8((r30 + 5));
}

loc_8045CE3C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(97))) {
        goto loc_8045CE4C;
    }
}

loc_8045CE40:
{
    r0 = 112;
    r3_stbu_ea_1 = (r3 + -1);
    MemoryInline::FlatWrite8(r3_stbu_ea_1, static_cast<uint8_t>(r0));
    r3 = r3_stbu_ea_1;
    goto loc_8045CE54;
}

loc_8045CE4C:
{
    r0 = 80;
    r3_stbu_ea_2 = (r3 + -1);
    MemoryInline::FlatWrite8(r3_stbu_ea_2, static_cast<uint8_t>(r0));
    r3 = r3_stbu_ea_2;
}

loc_8045CE54:
{
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r8 = (r1 + 8);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r9 = (r4 + 11);
    ctr = r0;
}

loc_8045CE6C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(1))) {
        goto loc_8045CF00;
    }
}

loc_8045CE70:
{
}

loc_8045CE74:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(64))) {
        goto loc_8045CEF0;
    }
}

loc_8045CE78:
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

loc_8045CE9C:
{
    r0 = PPC_Sraw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
    r4 = (r0 & 255);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8045CEC0;
    }
}

loc_8045CEA8:
{
    r0 = MemoryInline::FlatRead8((r7 + -1));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_4 & -256);
    r0 = PPC_Sraw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    r0 = (r0 & 255);
    r0 = (r4 | r0);
    r4 = (r0 & 255);
}

loc_8045CEC0:
{
    r4 = (r4 & 15);
}

loc_8045CEC8:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(10))) {
        goto loc_8045CED4;
    }
}

loc_8045CECC:
{
    r4 = (r4 + 48);
    goto loc_8045CEF4;
}

loc_8045CED4:
{
    r0 = MemoryInline::FlatRead8((r30 + 5));
}

loc_8045CEDC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(97))) {
        goto loc_8045CEE8;
    }
}

loc_8045CEE0:
{
    r4 = (r4 + 87);
    goto loc_8045CEF4;
}

loc_8045CEE8:
{
    r4 = (r4 + 55);
    goto loc_8045CEF4;
}

loc_8045CEF0:
{
    r4 = 48;
}

loc_8045CEF4:
{
    r3_stbu_ea_5 = (r3 + -1);
    MemoryInline::FlatWrite8(r3_stbu_ea_5, static_cast<uint8_t>(r4));
    r3 = r3_stbu_ea_5;
    r9 = (r9 + -4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8045CE70;
    }
}

loc_8045CF00:
{
    r0 = MemoryInline::FlatRead32((r30 + 12));
}

loc_8045CF08:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045CF18;
    }
}

loc_8045CF0C:
{
    r0 = MemoryInline::FlatRead8((r30 + 3));
}

loc_8045CF14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045CF1C;
    }
}

loc_8045CF18:
{
    r3_stbu_ea_7 = (r3 + -1);
    MemoryInline::FlatWrite8(r3_stbu_ea_7, static_cast<uint8_t>(r31));
    r3 = r3_stbu_ea_7;
}

loc_8045CF1C:
{
    f1.d = std::fabs(f31.d);
    f0.d = MemoryInline::FlatReadFloat64((r2 + -4264));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8045CF28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8045CF38;
    }
}

loc_8045CF2C:
{
    r0 = 49;
    r3_stbu_ea_9 = (r3 + -1);
    MemoryInline::FlatWrite8(r3_stbu_ea_9, static_cast<uint8_t>(r0));
    r3 = r3_stbu_ea_9;
    goto loc_8045CF40;
}

loc_8045CF38:
{
    r0 = 48;
    r3_stbu_ea_10 = (r3 + -1);
    MemoryInline::FlatWrite8(r3_stbu_ea_10, static_cast<uint8_t>(r0));
    r3 = r3_stbu_ea_10;
}

loc_8045CF40:
{
    r0 = MemoryInline::FlatRead8((r30 + 5));
}

loc_8045CF48:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(97))) {
        goto loc_8045CF58;
    }
}

loc_8045CF4C:
{
    r0 = 120;
    r3_stbu_ea_12 = (r3 + -1);
    MemoryInline::FlatWrite8(r3_stbu_ea_12, static_cast<uint8_t>(r0));
    r3 = r3_stbu_ea_12;
    goto loc_8045CF60;
}

loc_8045CF58:
{
    r0 = 88;
    r3_stbu_ea_13 = (r3 + -1);
    MemoryInline::FlatWrite8(r3_stbu_ea_13, static_cast<uint8_t>(r0));
    r3 = r3_stbu_ea_13;
}

loc_8045CF60:
{
    r0 = 48;
    r3_stbu_ea_15 = (r3 + -1);
    MemoryInline::FlatWrite8(r3_stbu_ea_15, static_cast<uint8_t>(r0));
    r3 = r3_stbu_ea_15;
    r0 = MemoryInline::FlatRead8((r1 + 56));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045CF80;
    }
}

loc_8045CF74:
{
    r0 = 45;
    r3_stbu_ea_16 = (r3 + -1);
    MemoryInline::FlatWrite8(r3_stbu_ea_16, static_cast<uint8_t>(r0));
    r3 = r3_stbu_ea_16;
    goto loc_8045CFA8;
}

loc_8045CF80:
{
    r0 = MemoryInline::FlatRead8((r30 + 1));
}

loc_8045CF88:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8045CF98;
    }
}

loc_8045CF8C:
{
    r0 = 43;
    r3_stbu_ea_17 = (r3 + -1);
    MemoryInline::FlatWrite8(r3_stbu_ea_17, static_cast<uint8_t>(r0));
    r3 = r3_stbu_ea_17;
    goto loc_8045CFA8;
}

loc_8045CF98:
{
}

loc_8045CF9C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8045CFA8;
    }
}

loc_8045CFA0:
{
    r0 = 32;
    r3_stbu_ea_18 = (r3 + -1);
    MemoryInline::FlatWrite8(r3_stbu_ea_18, static_cast<uint8_t>(r0));
    r3 = r3_stbu_ea_18;
}

loc_8045CFA8:
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

extern "C" void func_8045CC08(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8045CC08_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8045CC08 func_8045CC08 preserves=true fpr_mask=0x00000000
