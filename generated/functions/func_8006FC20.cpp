#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80052270(CpuContext* ctx);
extern "C" double func_80052270_ra0_2_0_2(CpuContext*, double);
extern "C" void func_8005D324(CpuContext* ctx);
extern "C" uint32_t func_8005D324_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8006F8FC(CpuContext* ctx);
extern "C" double func_8006F8FC_ra18_e_0_2(CpuContext*, uint32_t, uint32_t, double, double, double);
extern "C" void func_8006F938(CpuContext* ctx);
extern "C" void func_8006F938_ra18_2_0_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_8006F96C(CpuContext* ctx);
extern "C" uint64_t func_8006F96C_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_8006FEA4(CpuContext* ctx);
extern "C" uint64_t func_8006FEA4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8006FF2C(CpuContext* ctx);
extern "C" uint64_t func_8006FF2C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80070084(CpuContext* ctx);
extern "C" uint64_t func_80070084_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_805011C4(CpuContext* ctx);
extern "C" uint64_t func_805011C4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8050199C(CpuContext* ctx);
extern "C" void func_8050199C_ra8_0_0_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80052270_statefree(PPC_FPR);
extern "C" uint64_t func_8050199C_statefree(uint32_t, uint32_t, PPC_FPR, uint32_t, uint32_t);

extern "C" void func_8006FC20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_8006FE04_loc_0 = 0;
    uint32_t addr_psqx_8006FE10_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_3 = 0;
    uint32_t r5_psq_tmp_4 = 0;
    uint32_t r5_psq_tmp_5 = 0;
    uint32_t r5_psq_tmp_6 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8006FC20;

loc_8006FC20:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r1 + 100), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 80u, (r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 64);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r7;
    r31 = r8;
    r3 = (r1 + 28);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r30;
    ctx->lr = 0x8006FC68u;
    if constexpr (KnownRegArgsCpuCall<0x80070084u>(&func_80070084)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80070084_136D = func_80070084_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80070084_136D);
        r4 = static_cast<uint32_t>(regargs_result_80070084_136D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80070084u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    r3 = (r1 + 16);
    r4 = r31;
    ctx->lr = 0x8006FC78u;
    if constexpr (KnownRegArgsCpuCall<0x8006FF2Cu>(&func_8006FF2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8006FF2C_1796 = func_8006FF2C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006FF2C_1796);
        r4 = static_cast<uint32_t>(regargs_result_8006FF2C_1796 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8006FF2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r4 = r3;
}

loc_8006FC80:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_8006FD14;
    }
}

loc_8006FC84:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80097F14u>(ctx);
    r3 = ctx->gpr[3];
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = (r1 + 24);
    r4 = (r1 + 12);
    ctx->lr = 0x8006FC9Cu;
    if constexpr (KnownRegArgsCpuCall<0x8005D324u>(&func_8005D324)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005D324_1CFE = func_8005D324_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8005D324_1CFE;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8005D324u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 24);
    ctx->lr = 0x8006FCA4u;
    if constexpr (KnownRegArgsCpuCall<0x8006FEA4u>(&func_8006FEA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8006FEA4_1F7D = func_8006FEA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006FEA4_1F7D);
        r4 = static_cast<uint32_t>(regargs_result_8006FEA4_1F7D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8006FEA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = (r1 + 20);
    r4 = (r1 + 8);
    ctx->lr = 0x8006FCB4u;
    if constexpr (KnownRegArgsCpuCall<0x8005D324u>(&func_8005D324)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005D324_2393 = func_8005D324_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8005D324_2393;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8005D324u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 20);
    // inline leaf 0x8005AB50 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8005AB50
}

loc_8006FCC0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8006FCF0;
    }
}

loc_8006FCC4:
{
    r3 = (r1 + 20);
    ctx->lr = 0x8006FCCCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->cr = cr;
    InvokeDirectCpu<0x8006FE30u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    r0 = r3;
    r3 = (r31 * 48);
    r31 = (r28 + r3);
    r3 = (r1 + 28);
    r4 = r31;
    r0 = (r0 * 48);
    r5 = (r28 + r0);
    // inline leaf 0x8006F604 (48 guest instruction(s))
}

loc_inl3_0x8006F604:
{
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_0 = (r5 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_0));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_1 = (r5 + 16);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_1));
    PpcSetPairedFprInline(f6, PPC_PsMerge10Inline(f1.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_2 = (r5 + 20);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_3 = (r5 + 32);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_3));
    PpcSetPairedFprInline(f7, PPC_PsMerge10Inline(f3.d, f2.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_4 = (r5 + 36);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_4));
    PpcSetPairedFprInline(f11, PPC_PsMulInline(f3.d, f6.d));
    PpcSetPairedFprInline(f13, PPC_PsMulInline(f5.d, f7.d));
    PpcSetPairedFprInline(f8, PPC_PsMerge10Inline(f5.d, f4.d));
    PpcSetPairedFprInline(f11, PPC_PsMsubInline(f1.d, f7.d, f11.d));
    PpcSetPairedFprInline(f12, PPC_PsMulInline(f1.d, f8.d));
    PpcSetPairedFprInline(f13, PPC_PsMsubInline(f3.d, f8.d, f13.d));
    r12 = 0x807A0000u;
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_0 = (r4 + 24);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_0));
    PpcSetPairedFprInline(f12, PPC_PsMsubInline(f5.d, f6.d, f12.d));
    r12 = (r12 + -32144);
    PpcSetPairedFprInline(f7, PPC_PsMulInline(f0.d, f13.d));
    PpcSetPairedFprInline(f9, PPC_PsMulInline(f0.d, f5.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f6, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r12));
    PpcSetPairedFprInline(f7, PPC_PsMaddInline(f2.d, f12.d, f7.d));
    PpcSetPairedFprInline(f13, PPC_PsSubInline(f13.d, f13.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1));
    PpcSetPairedFprInline(f7, PPC_PsMaddInline(f4.d, f11.d, f7.d));
    PpcSetPairedFprInline(f9, PPC_PsMsubInline(f1.d, f4.d, f9.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_2 = (r4 + 16);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_2));
    PpcSetPairedFprInline(f8, PPC_PsAbsInline(f7.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_0 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_0, f13.d);
    SetCRFloatResident(cr, static_cast<uint32_t>(0) & 7u, PpcGetPs0Inline(f8.d), PpcGetPs0Inline(f6.d));
}

loc_inl3_0x8006F67C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl3_0x8006F688;
    }
}

loc_inl3_0x8006F680:
{
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f13.d);
    goto loc_inl3_cont_8006F604;
}

loc_inl3_0x8006F688:
{
    PpcSetPairedFprInline(f8, PPC_Fres(f7.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f11, PPC_PsAddInline(f8.d, f8.d));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f7.d, f8.d));
    PpcSetPairedFprInline(f4, PPC_PsMerge00Inline(f0.d, f1.d));
    PpcSetPairedFprInline(f8, PPC_PsNmsubInline(f8.d, f10.d, f11.d));
    PpcSetPairedFprInline(f5, PPC_PsMerge11Inline(f0.d, f1.d));
    PpcSetPairedFprInline(f6, PPC_PsMerge00Inline(f2.d, f3.d));
    PpcSetPairedFprInline(f12, PPC_PsMuls0Inline(f12.d, f8.d));
    PpcSetPairedFprInline(f9, PPC_PsMuls0Inline(f9.d, f8.d));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f4.d, f12.d));
    PpcSetPairedFprInline(f0, PPC_PsMadds1Inline(f5.d, f12.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f6.d, f9.d, f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f0.d);
    f10.d = PPC_PsToScalarInline(f10.d);
}

loc_inl3_cont_8006F604:
{
    // end of inlined leaf 0x8006F604
    f2.d = PPC_PsToScalarInline(f2.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
    f6.d = PPC_PsToScalarInline(f6.d);
    f7.d = PPC_PsToScalarInline(f7.d);
    f8.d = PPC_PsToScalarInline(f8.d);
    f9.d = PPC_PsToScalarInline(f9.d);
    f11.d = PPC_PsToScalarInline(f11.d);
    f12.d = PPC_PsToScalarInline(f12.d);
    f13.d = PPC_PsToScalarInline(f13.d);
    goto loc_8006FD34;
}

loc_8006FCF0:
{
    r0 = (r31 * 48);
    r31 = (r28 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 20));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31992));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    goto loc_8006FD34;
}

loc_8006FD14:
{
    r0 = (r31 * 48);
    r31 = (r28 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 20));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31992));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
}

loc_8006FD34:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31988));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8006FD44:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006FD64;
    }
}

loc_8006FD4C:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80052270u) && KnownTranslatedCpuCall<0x80052270u>::kAvailable && !KnownTranslatedCpuCall<0x80052270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80052270u>()) {
        const auto state_free_result_80052270_45D9 = func_80052270_statefree(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_80052270_45D9);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->fpr[12] = f12;
        ctx->fpr[13] = f13;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80052270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        f12 = ctx->fpr[12];
        f13 = ctx->fpr[13];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31988));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8006FD5C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8006FDDC;
    }
}

loc_8006FD64:
{
    r3 = (r1 + 28);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
}

loc_8006FD74:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8006FD94;
    }
}

loc_8006FD78:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x8006FD84u;
    if constexpr (KnownRegArgsCpuCall<0x8006F96Cu>(&func_8006F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->fpr[12] = f12;
        ctx->fpr[13] = f13;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8006F96C_50C0 = func_8006F96C_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8006F96C_50C0);
        r4 = static_cast<uint32_t>(regargs_result_8006F96C_50C0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        f12 = ctx->fpr[12];
        f13 = ctx->fpr[13];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->fpr[12] = f12;
        ctx->fpr[13] = f13;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8006F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        f12 = ctx->fpr[12];
        f13 = ctx->fpr[13];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = r27;
    r4 = (r1 + 28);
    if constexpr (KnownRegArgsCpuCall<0x8006F938u>(&func_8006F938)) {
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        func_8006F938_ra18_2_0_0(ctx, r3, r4, f1.d);
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8006F938u>(ctx);
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    goto loc_8006FE00;
}

loc_8006FD94:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x8006FDA0u;
    if constexpr (KnownRegArgsCpuCall<0x8006F96Cu>(&func_8006F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->fpr[12] = f12;
        ctx->fpr[13] = f13;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8006F96C_5EA9 = func_8006F96C_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8006F96C_5EA9);
        r4 = static_cast<uint32_t>(regargs_result_8006F96C_5EA9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        f12 = ctx->fpr[12];
        f13 = ctx->fpr[13];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->fpr[12] = f12;
        ctx->fpr[13] = f13;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8006F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        f12 = ctx->fpr[12];
        f13 = ctx->fpr[13];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    f31.d = f1.d;
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x8006FDB0u;
    if constexpr (KnownRegArgsCpuCall<0x8006F96Cu>(&func_8006F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->fpr[12] = f12;
        ctx->fpr[13] = f13;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8006F96C_69C9 = func_8006F96C_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8006F96C_69C9);
        r4 = static_cast<uint32_t>(regargs_result_8006F96C_69C9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        f12 = ctx->fpr[12];
        f13 = ctx->fpr[13];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->fpr[12] = f12;
        ctx->fpr[13] = f13;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8006F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        f12 = ctx->fpr[12];
        f13 = ctx->fpr[13];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    f30.d = f1.d;
    r3 = r31;
    r4 = 2;
    ctx->lr = 0x8006FDC0u;
    if constexpr (KnownRegArgsCpuCall<0x8006F96Cu>(&func_8006F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->fpr[12] = f12;
        ctx->fpr[13] = f13;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8006F96C_74E9 = func_8006F96C_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8006F96C_74E9);
        r4 = static_cast<uint32_t>(regargs_result_8006F96C_74E9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        f12 = ctx->fpr[12];
        f13 = ctx->fpr[13];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->fpr[12] = f12;
        ctx->fpr[13] = f13;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8006F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        f12 = ctx->fpr[12];
        f13 = ctx->fpr[13];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    f3.d = f1.d;
    r3 = r27;
    r4 = (r1 + 28);
    f1.d = f31.d;
    f2.d = f30.d;
    if constexpr (KnownRegArgsCpuCall<0x8006F8FCu>(&func_8006F8FC)) {
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[4] = f4;
        const auto regargs_result_8006F8FC_7EE7 = func_8006F8FC_ra18_e_0_2(ctx, r3, r4, f1.d, f2.d, f3.d);
        f1.d = regargs_result_8006F8FC_7EE7;
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x8006F8FCu>(ctx);
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f4 = ctx->fpr[4];
    }
    goto loc_8006FE00;
}

loc_8006FDDC:
{
    r3 = 0x80590000u;
    r3 = (r3 + -7944);
    r4 = 760;
    r5 = 0x80590000u;
    r5 = (r5 + -7804);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8006FDF8u;
    if constexpr (KnownRegArgsCpuCall<0x805011C4u>(&func_805011C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->fpr[12] = f12;
        ctx->fpr[13] = f13;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_805011C4_8430 = func_805011C4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_805011C4_8430);
        r4 = static_cast<uint32_t>(regargs_result_805011C4_8430 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        f12 = ctx->fpr[12];
        f13 = ctx->fpr[13];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->fpr[12] = f12;
        ctx->fpr[13] = f13;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x805011C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        f12 = ctx->fpr[12];
        f13 = ctx->fpr[13];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = r27;
    ctx->gpr[1] = r1;
    if (false) {
        const auto state_free_result_8050199C_8D7E = func_8050199C_statefree(r2, r3, f0, 0x8006FE00u, ctx->gqr[0]);
        f0.raw = static_cast<uint64_t>(state_free_result_8050199C_8D7E);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->fpr[12] = f12;
        ctx->fpr[13] = f13;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8050199Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        f12 = ctx->fpr[12];
        f13 = ctx->fpr[13];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
}

loc_8006FE00:
{
    r0 = 88;
    addr_psqx_8006FE04_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8006FE04_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r0 = 72;
    addr_psqx_8006FE10_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8006FE10_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r11 = (r1 + 64);
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8006FC20 func_8006FC20 preserves=true fpr_mask=0x00000000
