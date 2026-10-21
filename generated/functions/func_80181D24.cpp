#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80181CEC(CpuContext* ctx);
extern "C" double func_80181CEC_ra0_e_0_2(CpuContext*, double, double, double);
extern "C" void func_8018297C(CpuContext* ctx);
extern "C" uint64_t func_8018297C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80181D24_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t addr_psqx_80181E5C_loc_0 = 0;
    uint32_t addr_psqx_80181E68_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x80181D24u);
    goto loc_80181D24;

loc_80181D24:
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
    r30 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 482));
}

loc_80181D54:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80181D60;
    }
}

loc_80181D58:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -24464));
    goto loc_80181D64;
}

loc_80181D60:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -24324));
}

loc_80181D64:
{
    f3.d = MemoryInline::FlatReadFloat32((r2 + -23604));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 808));
    if constexpr (KnownRegArgsCpuCall<0x80181CECu>(&func_80181CEC)) {
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80181CEC_A48 = func_80181CEC_ra0_e_0_2(ctx, f1.d, f2.d, f3.d);
        f1.d = regargs_result_80181CEC_A48;
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80181CECu>(ctx);
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    MemoryInline::FlatWriteFloat32((r30 + 808), f1.d);
    r3 = r30;
    ctx->lr = 0x80181D7Cu;
    if constexpr (KnownRegArgsCpuCall<0x8018297Cu>(&func_8018297C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8018297C_CBD = func_8018297C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8018297C_CBD);
        r4 = static_cast<uint32_t>(regargs_result_8018297C_CBD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8018297Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_80181D84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80181DA0;
    }
}

loc_80181D88:
{
}

loc_80181D8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80181DB0;
    }
}

loc_80181D90:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -24456));
    f31.d = f2.d;
    f30.d = f2.d;
    goto loc_80181DBC;
}

loc_80181DA0:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -24300));
    f31.d = MemoryInline::FlatReadFloat32((r2 + -24448));
    f30.d = MemoryInline::FlatReadFloat32((r2 + -24188));
    goto loc_80181DBC;
}

loc_80181DB0:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -24324));
    f31.d = MemoryInline::FlatReadFloat32((r2 + -24416));
    f30.d = MemoryInline::FlatReadFloat32((r2 + -24464));
}

loc_80181DBC:
{
    r0 = MemoryInline::FlatRead8((r30 + 812));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -23600));
    stackword4 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r31 = 1127219200;
    stackword5 = r31;
    MemoryInline::FlatWriteRam32((r1 + 8), r31);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -24204));
    if constexpr (KnownRegArgsCpuCall<0x80181CECu>(&func_80181CEC)) {
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80181CEC_1494 = func_80181CEC_ra0_e_0_2(ctx, f1.d, f2.d, f3.d);
        f1.d = regargs_result_80181CEC_1494;
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80181CECu>(ctx);
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite8((r30 + 812), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 813));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -23600));
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    stackword7 = r31;
    MemoryInline::FlatWriteRam32((r1 + 24), r31);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword6));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = f31.d;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -24204));
    if constexpr (KnownRegArgsCpuCall<0x80181CECu>(&func_80181CEC)) {
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80181CEC_197D = func_80181CEC_ra0_e_0_2(ctx, f1.d, f2.d, f3.d);
        f1.d = regargs_result_80181CEC_197D;
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80181CECu>(ctx);
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWrite8((r30 + 813), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 814));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -23600));
    stackword8 = r0;
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    stackword9 = r31;
    MemoryInline::FlatWriteRam32((r1 + 40), r31);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword9), static_cast<uint32_t>(stackword8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = f30.d;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -24204));
    if constexpr (KnownRegArgsCpuCall<0x80181CECu>(&func_80181CEC)) {
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80181CEC_1E66 = func_80181CEC_ra0_e_0_2(ctx, f1.d, f2.d, f3.d);
        f1.d = regargs_result_80181CEC_1E66;
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80181CECu>(ctx);
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword2;
    MemoryInline::FlatWrite8((r30 + 814), static_cast<uint8_t>(r0));
    r0 = 88;
    addr_psqx_80181E5C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80181E5C_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r0 = 72;
    addr_psqx_80181E68_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80181E68_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80181D24(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80181D24_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0xC0000001 fpr_write=0xC000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80181D24 func_80181D24 preserves=true fpr_mask=0x00000000
