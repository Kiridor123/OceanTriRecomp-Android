#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800AB340(CpuContext* ctx);
extern "C" uint32_t func_800AB340_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800AB3EC(CpuContext* ctx);
extern "C" uint32_t func_800AB3EC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800BAC94(CpuContext* ctx);
extern "C" uint64_t func_800BAC94_ra38_f6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800BA8B8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_800BAC2C_loc_0 = 0;
    uint32_t addr_psqx_800BAC38_loc_0 = 0;
    uint32_t addr_psqx_800BAC44_loc_0 = 0;
    uint32_t addr_psqx_800BAC50_loc_0 = 0;
    uint32_t addr_psqx_800BAC5C_loc_0 = 0;
    uint32_t addr_psqx_800BAC68_loc_0 = 0;
    uint32_t addr_psqx_800BAC74_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword11 = 0;
    uint32_t stackword12 = 0;
    uint32_t stackword13 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
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
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800BA8B8;

loc_800BA8B8:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -272), 0, 280u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -272), r1);
    r1 = (r1 + -272);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 276u, (r1 + 276), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 256u, (r1 + 256), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 240u, (r1 + 240), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 224u, (r1 + 224), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 208u, (r1 + 208), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 192u, (r1 + 192), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 176u, (r1 + 176), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 160u, (r1 + 160), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    r11 = (r1 + 160);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r4 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r5 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800BA934:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BA94C;
    }
}

loc_800BA938:
{
    r3 = (r5 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800BA944:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BA94C;
    }
}

loc_800BA948:
{
    r10 = 0;
}

loc_800BA94C:
{
}

loc_800BA950:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800BA968;
    }
}

loc_800BA954:
{
    r3 = (r5 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800BA960:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BA968;
    }
}

loc_800BA964:
{
    r9 = 0;
}

loc_800BA968:
{
}

loc_800BA96C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800BA980;
    }
}

loc_800BA970:
{
    r0 = (r11 + 1073741824);
}

loc_800BA978:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BA980;
    }
}

loc_800BA97C:
{
    r8 = 0;
}

loc_800BA980:
{
}

loc_800BA984:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800BA99C;
    }
}

loc_800BA988:
{
    r3 = (r5 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800BA994:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BA99C;
    }
}

loc_800BA998:
{
    r7 = 0;
}

loc_800BA99C:
{
}

loc_800BA9A0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800BA9B8;
    }
}

loc_800BA9A4:
{
    r3 = (r5 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800BA9B0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BA9B8;
    }
}

loc_800BA9B4:
{
    r6 = 0;
}

loc_800BA9B8:
{
}

loc_800BA9BC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800BA9D4;
    }
}

loc_800BA9C0:
{
    r3 = (r5 & -16384);
    r0 = (r3 + 536870912);
}

loc_800BA9CC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BA9D4;
    }
}

loc_800BA9D0:
{
    r4 = 0;
}

loc_800BA9D4:
{
}

loc_800BA9D8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800BA9FC;
    }
}

loc_800BA9DC:
{
    r3 = 0x80590000u;
    r3 = (r3 + 17992);
    r4 = 593;
    r5 = 0x80590000u;
    r5 = (r5 + 18024);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800BA9FCu;
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

loc_800BA9FC:
{
    r3 = (r1 + 64);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = r30;
    r4 = (r1 + 64);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800B7E14u>(ctx);
    r3 = ctx->gpr[3];
    mkw_gqr0 = ctx->gqr[0];
    r3 = MemoryInline::FlatRead32((r31 + 36));
    ctx->lr = 0x800BAA18u;
    if constexpr (KnownRegArgsCpuCall<0x800AB3ECu>(&func_800AB3EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800AB3EC_2458 = func_800AB3EC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800AB3EC_2458;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800AB3ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r28 = r3;
    r3 = r29;
    r4 = r30;
    r5 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800BB7ACu>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = MemoryInline::FlatRead8((r29 + 208));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r27_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r27 = (r27_rot_0 & 1);
    r3 = (r1 + 8);
    r0 = MemoryInline::FlatRead8((r28 + 169));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    f3.d = MemoryInline::FlatReadFloat64((r2 + -31040));
    r0 = (r0 ^ -2147483648);
    stackword10 = r0;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    r4 = 1127219200;
    stackword11 = r4;
    MemoryInline::FlatWriteRam32((r1 + 112), r4);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword11), static_cast<uint32_t>(stackword10));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -31056));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    r0 = MemoryInline::FlatRead8((r28 + 170));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 ^ -2147483648);
    stackword12 = r0;
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    stackword13 = r4;
    MemoryInline::FlatWriteRam32((r1 + 120), r4);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword13), static_cast<uint32_t>(stackword12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    // inline leaf 0x800BB014 (3 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x800BB014
    r3 = (r1 + 16);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = r31;
    r4 = (r1 + 16);
    ctx->lr = 0x800BAAA4u;
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
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800AE3C4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 16);
    r4 = (r1 + 64);
    r5 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
    r3 = (r1 + 16);
    r4 = 0;
    // inline leaf 0x8009CDC8 (22 guest instruction(s))
}

loc_inl4_0x8009CDC8:
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

loc_inl4_0x8009CDF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x8009CDF8:
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
    goto loc_inl4_cont_8009CDC8;
}

loc_inl4_return:
{
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_inl4_cont_8009CDC8:
{
    // end of inlined leaf 0x8009CDC8
    f31.d = f1.d;
    r3 = (r1 + 16);
    r4 = 1;
    // inline leaf 0x8009CDC8 (22 guest instruction(s))
}

loc_inl5_0x8009CDC8:
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

loc_inl5_0x8009CDF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x8009CDF8:
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
    goto loc_inl5_cont_8009CDC8;
}

loc_inl5_return:
{
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_inl5_cont_8009CDC8:
{
    // end of inlined leaf 0x8009CDC8
    f30.d = f1.d;
    f29.d = MemoryInline::FlatReadFloat32((r2 + -31052));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 84));
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 100));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050C24u>(ctx);
    f1 = ctx->fpr[1];
    mkw_gqr0 = ctx->gqr[0];
    f28.d = MemoryInline::FlatReadFloat32((r2 + -31052));
    SetCRFloatResident(cr, 0, f28.d, f1.d);
}

loc_800BAAF8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800BAB04;
    }
}

loc_800BAAFC:
{
    f27.d = MemoryInline::FlatReadFloat32((r2 + -31048));
    goto loc_800BAB18;
}

loc_800BAB04:
{
    // inline leaf 0x80061110 (6 guest instruction(s))
    PpcSetPairedFprInline(f0, PPC_Fres(PPC_PsFromScalarInline(f1.d)));
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsNmsubInline(PPC_PsFromScalarInline(f1.d), f0.d, f2.d));
    f1.d = f0.d;
    // end of inlined leaf 0x80061110
    f0.d = MemoryInline::FlatReadFloat32((r1 + 100));
    f27.d = PpcFmulsInline(f0.d, PPC_PsToScalarInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 84));
    f28.d = PpcFmulsInline(f0.d, PPC_PsToScalarInline(f1.d));
    f1.d = PPC_PsToScalarInline(f1.d);
    f2.d = PPC_PsToScalarInline(f2.d);
}

loc_800BAB18:
{
    r3 = r29;
    r0 = MemoryInline::FlatRead16(r28);
    r4 = (r0 & 2048);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x800BAB34u;
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
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r26 = r3;
    r3 = r29;
    r0 = MemoryInline::FlatRead16(r28);
    r4 = (r0 & 2048);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x800BAB54u;
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
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r25 = r3;
    r24 = 1;
    r3 = r31;
    r12 = r26;
    ctr = r12;
    ctx->lr = 0x800BAB6Cu;
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
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r26 = r3;
    goto loc_800BAC20;
}

loc_800BAB74:
{
    r3 = r26;
    // inline leaf 0x800A52AC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 12));
    // end of inlined leaf 0x800A52AC
}

loc_800BAB80:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_800BAC08;
    }
}

loc_800BAB84:
{
    r3 = r26;
    // inline leaf 0x800AB410 (9 guest instruction(s))
}

loc_inl8_0x800AB410:
{
    r4 = r3;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 56));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    r3 = MemoryInline::FlatRead32((r3 + 200));
}

loc_inl8_0x800AB428:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 88));
    f1.d = PpcFmulsInline(f1.d, f0.d);
}

loc_inl8_cont_800AB410:
{
    // end of inlined leaf 0x800AB410
    f26.d = f1.d;
    // inline leaf 0x800B5AAC (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31072));
    // end of inlined leaf 0x800B5AAC
    SetCRFloatResident(cr, 0, f26.d, f1.d);
}

loc_800BAB98:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800BAC08;
    }
}

loc_800BAB9C:
{
    r3 = r26;
    ctx->lr = 0x800BABA4u;
    if constexpr (KnownRegArgsCpuCall<0x800AB340u>(&func_800AB340)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_800AB340_5CCA = func_800AB340_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800AB340_5CCA;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800AB340u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f25.d = f1.d;
    // inline leaf 0x800B5AAC (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31072));
    // end of inlined leaf 0x800B5AAC
    SetCRFloatResident(cr, 0, f25.d, f1.d);
}

loc_800BABB0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800BAC08;
    }
}

loc_800BABB4:
{
    r3 = r29;
    r4 = r26;
    r5 = r28;
    r6 = r30;
    r7 = r24;
    r8 = 0;
    ctx->lr = 0x800BABD0u;
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
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800C694Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r24 = 0;
    r3 = r29;
    r4 = r26;
    r5 = (r1 + 16);
    f1.d = f31.d;
    f2.d = f30.d;
    f3.d = f29.d;
    f4.d = f28.d;
    f5.d = f27.d;
    f6.d = f26.d;
    f7.d = f25.d;
    r6 = (r1 + 8);
    r7 = r27;
    ctx->lr = 0x800BAC08u;
    if constexpr (KnownRegArgsCpuCall<0x800BAC94u>(&func_800BAC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[3] = f3;
        ctx->fpr[25] = f25;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800BAC94_68F8 = func_800BAC94_ra38_f6_18_0(ctx, r3, r4, r5, f1.d, f2.d, f4.d, f5.d, f6.d, f7.d);
        r3 = static_cast<uint32_t>(regargs_result_800BAC94_68F8);
        r4 = static_cast<uint32_t>(regargs_result_800BAC94_68F8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        f25 = ctx->fpr[25];
        f26 = ctx->fpr[26];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[25] = f25;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800BAC94u>(ctx);
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
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f25 = ctx->fpr[25];
        f26 = ctx->fpr[26];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800BAC08:
{
    r3 = r31;
    r4 = r26;
    r12 = r25;
    ctr = r12;
    ctx->lr = 0x800BAC1Cu;
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
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r26 = r3;
}

loc_800BAC20:
{
}

loc_800BAC24:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_800BAB74;
    }
}

loc_800BAC28:
{
    r0 = 264;
    addr_psqx_800BAC2C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BAC2C_loc_0));
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 160), 0, 120u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 96u, (r1 + 256));
    r0 = 248;
    addr_psqx_800BAC38_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BAC38_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 80u, (r1 + 240));
    r0 = 232;
    addr_psqx_800BAC44_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BAC44_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 64u, (r1 + 224));
    r0 = 216;
    addr_psqx_800BAC50_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BAC50_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 48u, (r1 + 208));
    r0 = 200;
    addr_psqx_800BAC5C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BAC5C_loc_0));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 32u, (r1 + 192));
    r0 = 184;
    addr_psqx_800BAC68_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f26, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BAC68_loc_0));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 16u, (r1 + 176));
    r0 = 168;
    addr_psqx_800BAC74_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f25, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BAC74_loc_0));
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 0u, (r1 + 160));
    r11 = (r1 + 160);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::ReadResolved32(guest_range_3, 116u, (r1 + 276));
    ctx->lr = r0;
    r1 = (r1 + 272);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800BA8B8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800BA8B8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFE003FFF fpr_write=0xFE003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800BA8B8 func_800BA8B8 preserves=true fpr_mask=0x00000000
