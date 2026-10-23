#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800472A0(CpuContext* ctx);
extern "C" uint32_t func_800472A0_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802D9FD4(CpuContext* ctx);
extern "C" uint64_t func_802D9FD4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802E0438(CpuContext* ctx);
extern "C" uint64_t func_802E0438_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802EE9E0(CpuContext* ctx);
extern "C" uint64_t func_802EE9E0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_802F0188_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_802F0324_loc_0 = 0;
    uint32_t addr_psqx_802F0330_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_802F0188;

loc_802F0188:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r31 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead8((r31 + 996));
}

loc_802F01B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802F0320;
    }
}

loc_802F01BC:
{
    r30 = (r3 + 44);
    r0 = MemoryInline::FlatRead8((r30 + 21));
}

loc_802F01C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802F0320;
    }
}

loc_802F01CC:
{
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    f31.d = MemoryInline::FlatReadFloat32((r2 + -12532));
    f30.d = MemoryInline::FlatReadFloat32((r2 + -12716));
    r3 = MemoryInline::FlatRead32((r13 + -17580));
    r4 = 0x80660000u;
    r4 = (r4 + -19268);
    r0 = MemoryInline::FlatRead8((r31 + 8));
    r4 = (r4 + r0);
    r4 = MemoryInline::FlatRead8((r4 + 80));
    ctx->lr = 0x802F01F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80082BD4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = (r1 + 16);
    r4 = (r1 + 8);
    ctx->lr = 0x802F0208u;
    if constexpr (KnownRegArgsCpuCall<0x800472A0u>(&func_800472A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800472A0_11E8 = func_800472A0_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800472A0_11E8;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800472A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = r31;
    r4 = 1;
    r5 = r30;
    ctx->lr = 0x802F0218u;
    if constexpr (KnownRegArgsCpuCall<0x802E0438u>(&func_802E0438)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_802E0438_14CE = func_802E0438_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802E0438_14CE);
        r4 = static_cast<uint32_t>(regargs_result_802E0438_14CE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802E0438u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 16);
    r4 = (r1 + 20);
    r5 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800752BCu>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12712));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802F0234:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_802F0320;
    }
}

loc_802F0238:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12708));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802F0240:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802F0248;
    }
}

loc_802F0244:
{
    goto loc_802F0320;
}

loc_802F0248:
{
    r0 = MemoryInline::FlatRead8((r31 + 8));
}

loc_802F0250:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802F026C;
    }
}

loc_802F0254:
{
    // inline leaf 0x80047118 (10 guest instruction(s))
}

loc_inl1_0x80047118:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    r0 = MemoryInline::FlatRead8((r3 + 26));
}

loc_inl1_0x80047128:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x80047138;
    }
}

loc_inl1_0x8004712C:
{
    r0 = MemoryInline::FlatRead8((r3 + 27));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    goto loc_inl1_cont_80047118;
}

loc_inl1_0x80047138:
{
    r3 = -1;
}

loc_inl1_cont_80047118:
{
    // end of inlined leaf 0x80047118
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_802F0260:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802F0280;
    }
}

loc_802F0264:
{
    f30.d = MemoryInline::FlatReadFloat32((r2 + -12704));
    goto loc_802F0280;
}

loc_802F026C:
{
    // inline leaf 0x80047118 (10 guest instruction(s))
}

loc_inl2_0x80047118:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    r0 = MemoryInline::FlatRead8((r3 + 26));
}

loc_inl2_0x80047128:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x80047138;
    }
}

loc_inl2_0x8004712C:
{
    r0 = MemoryInline::FlatRead8((r3 + 27));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    goto loc_inl2_cont_80047118;
}

loc_inl2_0x80047138:
{
    r3 = -1;
}

loc_inl2_cont_80047118:
{
    // end of inlined leaf 0x80047118
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_802F0278:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802F0280;
    }
}

loc_802F027C:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -12528));
}

loc_802F0280:
{
    ctx->lr = 0x802F0284u;
    if constexpr (KnownRegArgsCpuCall<0x802D9FD4u>(&func_802D9FD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_802D9FD4_245E = func_802D9FD4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D9FD4_245E);
        r4 = static_cast<uint32_t>(regargs_result_802D9FD4_245E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        InvokeDirectCpu<0x802D9FD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12696));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_802F02A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802F02AC;
    }
}

loc_802F02A8:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f31.d);
}

loc_802F02AC:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_802F02B4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802F02BC;
    }
}

loc_802F02B8:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f30.d);
}

loc_802F02BC:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 15));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -12728));
    r0 = (r0 ^ -2147483648);
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    r0 = 1127219200;
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword5));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    r3 = r31;
    r4 = r30;
    r5 = (r1 + 12);
    r6 = MemoryInline::FlatRead8((r31 + 8));
    ctx->lr = 0x802F0320u;
    if constexpr (KnownRegArgsCpuCall<0x802EE9E0u>(&func_802EE9E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802EE9E0_3122 = func_802EE9E0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802EE9E0_3122);
        r4 = static_cast<uint32_t>(regargs_result_802EE9E0_3122 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->gpr[6] = r6;
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
        InvokeDirectCpu<0x802EE9E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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

loc_802F0320:
{
    r0 = 88;
    addr_psqx_802F0324_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802F0324_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r0 = 72;
    addr_psqx_802F0330_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802F0330_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

extern "C" void func_802F0188(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802F0188_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF80FFFF fpr_write=0xFF80FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802F0188 func_802F0188 preserves=true fpr_mask=0x00000000
