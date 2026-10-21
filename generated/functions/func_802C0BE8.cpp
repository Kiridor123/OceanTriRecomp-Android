#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802BF74C(CpuContext* ctx);
extern "C" uint64_t func_802BF74C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802C2038(CpuContext* ctx);
extern "C" uint64_t func_802C2038_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_802C0BE8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_802C0D8C_loc_0 = 0;
    uint32_t addr_psqx_802C0D98_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword11 = 0;
    uint32_t stackword12 = 0;
    uint32_t stackword9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x802C0BE8u);
    goto loc_802C0BE8;

loc_802C0BE8:
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
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r28 = r3;
    r29 = r4;
    r30 = 0;
    f30.d = MemoryInline::FlatReadFloat64((r2 + -13416));
    r26 = 1127219200;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -13468));
    r27 = 0;
}

loc_802C0C28:
{
    r0 = (r30 & 255);
    r0 = (r0 * 44);
    r31 = (r28 + r0);
    r0 = MemoryInline::FlatRead8((r31 + 4009));
}

loc_802C0C3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802C0D7C;
    }
}

loc_802C0C40:
{
    r3 = r28;
    r4 = MemoryInline::FlatRead16((r31 + 4014));
    if constexpr (KnownRegArgsCpuCall<0x802BF74Cu>(&func_802BF74C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802BF74C_DF6 = func_802BF74C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802BF74C_DF6);
        r4 = static_cast<uint32_t>(regargs_result_802BF74C_DF6 >> 32);
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
        InvokeDirectCpu<0x802BF74Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r25 = r3;
    r4 = MemoryInline::FlatRead8((r31 + 4008));
}

loc_802C0C58:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_802C0C78;
    }
}

loc_802C0C5C:
{
}

loc_802C0C60:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_802C0C88;
    }
}

loc_802C0C64:
{
}

loc_802C0C68:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_802C0CD4;
    }
}

loc_802C0C6C:
{
}

loc_802C0C70:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(3))) {
        goto loc_802C0CE8;
    }
}

loc_802C0C74:
{
    goto loc_802C0D30;
}

loc_802C0C78:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r31 + 4008), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteFloat32((r31 + 4044), f31.d);
    goto loc_802C0D30;
}

loc_802C0C88:
{
    r0 = MemoryInline::FlatRead8((r13 + -26930));
    stackword9 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    stackword10 = r26;
    MemoryInline::FlatWriteRam32((r1 + 16), r26);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword10), static_cast<uint32_t>(stackword9));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4032));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4048));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 4048), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4048));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4032));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802C0CBC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802C0D30;
    }
}

loc_802C0CC0:
{
    MemoryInline::FlatWriteFloat32((r31 + 4048), f0.d);
    r4 = MemoryInline::FlatRead8((r31 + 4008));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r31 + 4008), static_cast<uint8_t>(r0));
    goto loc_802C0D30;
}

loc_802C0CD4:
{
}

loc_802C0CD8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802C0D30;
    }
}

loc_802C0CDC:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r31 + 4008), static_cast<uint8_t>(r0));
    goto loc_802C0D30;
}

loc_802C0CE8:
{
    r0 = MemoryInline::FlatRead8((r13 + -26929));
    stackword11 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    stackword12 = r26;
    MemoryInline::FlatWriteRam32((r1 + 16), r26);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword12), static_cast<uint32_t>(stackword11));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4032));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4048));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 4048), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4048));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_802C0D18:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802C0D30;
    }
}

loc_802C0D20:
{
    MemoryInline::FlatWriteFloat32((r31 + 4048), f31.d);
    MemoryInline::FlatWrite8((r31 + 4008), static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite8((r31 + 4009), static_cast<uint8_t>(r27));
    goto loc_802C0D7C;
}

loc_802C0D30:
{
}

loc_802C0D34:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802C0D50;
    }
}

loc_802C0D38:
{
    r3 = (r31 + 4016);
    r4 = (r25 + 4);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r31 + 4028);
    r4 = (r25 + 16);
    // inline leaf 0x8004C554 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004C554
}

loc_802C0D50:
{
    r0 = MemoryInline::FlatRead32((r31 + 4028));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r30 & 255);
    r0 = (r3 + 3);
    r0 = (r0 * 68);
    r3 = (r29 + r0);
    r4 = (r31 + 4016);
    r5 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4048));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 4036));
    ctx->lr = 0x802C0D7Cu;
    if constexpr (KnownRegArgsCpuCall<0x802C2038u>(&func_802C2038)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802C2038_242E = func_802C2038_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802C2038_242E);
        r4 = static_cast<uint32_t>(regargs_result_802C2038_242E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802C2038u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_802C0D7C:
{
    r30 = (r30 + 1);
}

loc_802C0D84:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(2))) {
        goto loc_802C0C28;
    }
}

loc_802C0D88:
{
    r0 = 88;
    addr_psqx_802C0D8C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802C0D8C_loc_0));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 36), 0, 68u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 44u, (r1 + 80));
    r0 = 72;
    addr_psqx_802C0D98_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802C0D98_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 28u, (r1 + 64));
    r11 = (r1 + 64);
    // inline leaf 0x804574CC (8 guest instruction(s))
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802C0BE8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802C0BE8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF8003FF fpr_write=0xFF8003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802C0BE8 func_802C0BE8 preserves=true fpr_mask=0x00000000
