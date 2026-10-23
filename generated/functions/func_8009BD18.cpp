#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005A6A0(CpuContext* ctx);
extern "C" double func_8005A6A0_ra0_2_0_2(CpuContext*, double);
extern "C" void func_80464464(CpuContext* ctx);
extern "C" uint64_t func_80464464_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8009BD18_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_8009BF34_loc_0 = 0;
    uint32_t addr_psqx_8009BF40_loc_0 = 0;
    uint32_t addr_psqx_8009BF4C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;

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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8009BD18;

loc_8009BD18:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    r30 = r3;
    r31 = r4;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_8009BD70:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009BD88;
    }
}

loc_8009BD74:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8009BD80:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009BD88;
    }
}

loc_8009BD84:
{
    r10 = 0;
}

loc_8009BD88:
{
}

loc_8009BD8C:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8009BDA4;
    }
}

loc_8009BD90:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8009BD9C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009BDA4;
    }
}

loc_8009BDA0:
{
    r9 = 0;
}

loc_8009BDA4:
{
}

loc_8009BDA8:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8009BDBC;
    }
}

loc_8009BDAC:
{
    r0 = (r11 + 1073741824);
}

loc_8009BDB4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009BDBC;
    }
}

loc_8009BDB8:
{
    r8 = 0;
}

loc_8009BDBC:
{
}

loc_8009BDC0:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8009BDD8;
    }
}

loc_8009BDC4:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8009BDD0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009BDD8;
    }
}

loc_8009BDD4:
{
    r7 = 0;
}

loc_8009BDD8:
{
}

loc_8009BDDC:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8009BDF4;
    }
}

loc_8009BDE0:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8009BDEC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009BDF4;
    }
}

loc_8009BDF0:
{
    r6 = 0;
}

loc_8009BDF4:
{
}

loc_8009BDF8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8009BE10;
    }
}

loc_8009BDFC:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_8009BE08:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009BE10;
    }
}

loc_8009BE0C:
{
    r5 = 0;
}

loc_8009BE10:
{
}

loc_8009BE14:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009BE38;
    }
}

loc_8009BE18:
{
    r3 = 0x80590000u;
    r3 = (r3 + 8456);
    r4 = 539;
    r5 = 0x80590000u;
    r5 = (r5 + 8728);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009BE38u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_8009BE38:
{
    r3 = r30;
    r4 = 0;
    // inline leaf 0x8009CDC8 (22 guest instruction(s))
}

loc_inl0_0x8009CDC8:
{
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & -4);
    r4 = (r3 + r4);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_0 = (r4 + 16);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_0));
    PpcSetPairedFprInline(f0, PPC_PsMerge00Inline(f0.d, f1.d));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 32));
    f2.d = static_cast<double>(PpcForceSingleValueInline(PPC_PsToScalarInline(f0.d) - PPC_PsToScalarInline(f0.d)));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f2.d);
}

loc_inl0_0x8009CDF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8009CDF8:
{
    f0.d = PPC_Frsqrte(PPC_PsToScalarInline(f1.d));
    r6 = 0x80790000u;
    r6 = (r6 + 14232);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsMuls1Inline(PPC_PsFromScalarInline(f0.d), f3.d));
    f2.d = PPC_Fnmsubs(f2.d, PPC_PsToScalarInline(f1.d), PPC_PsToScalarInline(f3.d));
    f0.d = PpcFmulsInline(f2.d, PPC_PsToScalarInline(f0.d));
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f1.d), f0.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    goto loc_inl0_cont_8009CDC8;
}

loc_inl0_return:
{
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_inl0_cont_8009CDC8:
{
    // end of inlined leaf 0x8009CDC8
    f29.d = f1.d;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31504));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8009BE50:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8009BF20;
    }
}

loc_8009BE54:
{
    r3 = r30;
    r4 = 1;
    // inline leaf 0x8009CDC8 (22 guest instruction(s))
}

loc_inl1_0x8009CDC8:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r4 = (r3 + r4);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 16);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1));
    PpcSetPairedFprInline(f0, PPC_PsMerge00Inline(f0.d, f1.d));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 32));
    f2.d = static_cast<double>(PpcForceSingleValueInline(PPC_PsToScalarInline(f0.d) - PPC_PsToScalarInline(f0.d)));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f2.d);
}

loc_inl1_0x8009CDF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8009CDF8:
{
    f0.d = PPC_Frsqrte(PPC_PsToScalarInline(f1.d));
    r6 = 0x80790000u;
    r6 = (r6 + 14232);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsMuls1Inline(PPC_PsFromScalarInline(f0.d), f3.d));
    f2.d = PPC_Fnmsubs(f2.d, PPC_PsToScalarInline(f1.d), PPC_PsToScalarInline(f3.d));
    f0.d = PpcFmulsInline(f2.d, PPC_PsToScalarInline(f0.d));
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f1.d), f0.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    goto loc_inl1_cont_8009CDC8;
}

loc_inl1_return:
{
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_inl1_cont_8009CDC8:
{
    // end of inlined leaf 0x8009CDC8
    f30.d = f1.d;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31504));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8009BE6C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8009BF20;
    }
}

loc_8009BE70:
{
    r3 = r30;
    r4 = 2;
    // inline leaf 0x8009CDC8 (22 guest instruction(s))
}

loc_inl2_0x8009CDC8:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_2 & -4);
    r4 = (r3 + r4);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_2 = (r4 + 16);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_2));
    PpcSetPairedFprInline(f0, PPC_PsMerge00Inline(f0.d, f1.d));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 32));
    f2.d = static_cast<double>(PpcForceSingleValueInline(PPC_PsToScalarInline(f0.d) - PPC_PsToScalarInline(f0.d)));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f2.d);
}

loc_inl2_0x8009CDF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8009CDF8:
{
    f0.d = PPC_Frsqrte(PPC_PsToScalarInline(f1.d));
    r6 = 0x80790000u;
    r6 = (r6 + 14232);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsMuls1Inline(PPC_PsFromScalarInline(f0.d), f3.d));
    f2.d = PPC_Fnmsubs(f2.d, PPC_PsToScalarInline(f1.d), PPC_PsToScalarInline(f3.d));
    f0.d = PpcFmulsInline(f2.d, PPC_PsToScalarInline(f0.d));
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f1.d), f0.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    goto loc_inl2_cont_8009CDC8;
}

loc_inl2_return:
{
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_inl2_cont_8009CDC8:
{
    // end of inlined leaf 0x8009CDC8
    f31.d = f1.d;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31504));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8009BE88:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8009BF20;
    }
}

loc_8009BE8C:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f0.d = (-(f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f29.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31520));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8009BEA0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8009BEA8;
    }
}

loc_8009BEA4:
{
    f1.d = f0.d;
}

loc_8009BEA8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31512));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8009BEB0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009BEB8;
    }
}

loc_8009BEB4:
{
    f1.d = f0.d;
}

loc_8009BEB8:
{
    ctx->lr = 0x8009BEBCu;
    if constexpr (KnownRegArgsCpuCall<0x80464464u>(&func_80464464)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80464464_37C9 = func_80464464_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80464464_37C9);
        r4 = static_cast<uint32_t>(regargs_result_80464464_37C9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
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
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80464464u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteFloat32((r31 + 4), f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    if constexpr (KnownRegArgsCpuCall<0x8005A6A0u>(&func_8005A6A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_8005A6A0_41F8 = func_8005A6A0_ra0_2_0_2(ctx, f1.d);
        f1.d = regargs_result_8005A6A0_41F8;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005A6A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31504));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8009BED0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8009BF04;
    }
}

loc_8009BED8:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 36));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f30.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 40));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f31.d));
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x80464488u>(ctx);
    f1 = ctx->fpr[1];
    MemoryInline::FlatWriteFloat32(r31, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f2.d = MemoryInline::FlatReadFloat32(r30);
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x80464488u>(ctx);
    f1 = ctx->fpr[1];
    MemoryInline::FlatWriteFloat32((r31 + 8), f1.d);
    goto loc_8009BF30;
}

loc_8009BF04:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 20));
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x80464488u>(ctx);
    f1 = ctx->fpr[1];
    MemoryInline::FlatWriteFloat32(r31, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31524));
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
    goto loc_8009BF30;
}

loc_8009BF20:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31524));
    MemoryInline::FlatWriteFloat32(r31, f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
}

loc_8009BF30:
{
    r0 = 56;
    addr_psqx_8009BF34_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8009BF34_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r0 = 40;
    addr_psqx_8009BF40_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8009BF40_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r0 = 24;
    addr_psqx_8009BF4C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8009BF4C_loc_0));
    f29.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8009BD18(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8009BD18_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0000FFF fpr_write=0xE0000FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8009BD18 func_8009BD18 preserves=true fpr_mask=0x00000000
