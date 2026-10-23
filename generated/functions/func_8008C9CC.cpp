#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80082F7C(CpuContext* ctx);
extern "C" uint64_t func_80082F7C_ra0_2_18_0(CpuContext*, double);
extern "C" void func_8008CBBC(CpuContext* ctx);
extern "C" uint32_t func_8008CBBC_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8008C9CC_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t addr_psqx_8008CB8C_loc_0 = 0;
    uint32_t addr_psqx_8008CB98_loc_0 = 0;
    uint32_t cr0_0 = 0;
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
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8008C9CC;

loc_8008C9CC:
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
    r30 = r3;
    r31 = r4;
    f30.d = f1.d;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_8008CA24:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008CA3C;
    }
}

loc_8008CA28:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_8008CA34:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008CA3C;
    }
}

loc_8008CA38:
{
    r10 = 0;
}

loc_8008CA3C:
{
}

loc_8008CA40:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8008CA58;
    }
}

loc_8008CA44:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_8008CA50:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008CA58;
    }
}

loc_8008CA54:
{
    r9 = 0;
}

loc_8008CA58:
{
}

loc_8008CA5C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8008CA70;
    }
}

loc_8008CA60:
{
    r0 = (r11 + 1073741824);
}

loc_8008CA68:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008CA70;
    }
}

loc_8008CA6C:
{
    r8 = 0;
}

loc_8008CA70:
{
}

loc_8008CA74:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8008CA8C;
    }
}

loc_8008CA78:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_8008CA84:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008CA8C;
    }
}

loc_8008CA88:
{
    r7 = 0;
}

loc_8008CA8C:
{
}

loc_8008CA90:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8008CAA8;
    }
}

loc_8008CA94:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_8008CAA0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008CAA8;
    }
}

loc_8008CAA4:
{
    r6 = 0;
}

loc_8008CAA8:
{
}

loc_8008CAAC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8008CAC4;
    }
}

loc_8008CAB0:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_8008CABC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008CAC4;
    }
}

loc_8008CAC0:
{
    r5 = 0;
}

loc_8008CAC4:
{
}

loc_8008CAC8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8008CAEC;
    }
}

loc_8008CACC:
{
    r3 = 0x80590000u;
    r3 = (r3 + 2000);
    r4 = 364;
    r5 = 0x80590000u;
    r5 = (r5 + 2120);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8008CAECu;
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

loc_8008CAEC:
{
    f1.d = f30.d;
    ctx->lr = 0x8008CAF4u;
    if constexpr (KnownRegArgsCpuCall<0x80082F7Cu>(&func_80082F7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80082F7C_163E = func_80082F7C_ra0_2_18_0(ctx, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80082F7C_163E);
        r4 = static_cast<uint32_t>(regargs_result_80082F7C_163E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80082F7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    r29 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31696));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_8008CB00:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008CB18;
    }
}

loc_8008CB08:
{
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8008CBBCu>(&func_8008CBBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_8008CBBC_1B0A = func_8008CBBC_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8008CBBC_1B0A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8008CBBCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    goto loc_8008CB88;
}

loc_8008CB18:
{
    r4 = (r31 & 65535);
    r5 = (r3 & 65535);
}

loc_8008CB24:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r5))) {
        goto loc_8008CB34;
    }
}

loc_8008CB28:
{
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x8008CBBCu>(&func_8008CBBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_8008CBBC_1F1E = func_8008CBBC_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8008CBBC_1F1E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8008CBBCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    goto loc_8008CB88;
}

loc_8008CB34:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31688));
    stackword5 = r5;
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    r0 = 1127219200;
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword5));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f0.d));
    r3 = r30;
    r4 = r5;
    if constexpr (KnownRegArgsCpuCall<0x8008CBBCu>(&func_8008CBBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_8008CBBC_2459 = func_8008CBBC_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8008CBBC_2459;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8008CBBCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    f31.d = f1.d;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31696));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_8008CB68:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008CB70;
    }
}

loc_8008CB6C:
{
    goto loc_8008CB88;
}

loc_8008CB70:
{
    r3 = r30;
    r0 = (r29 + 1);
    r4 = (r0 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x8008CBBCu>(&func_8008CBBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_8008CBBC_28C5 = func_8008CBBC_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8008CBBC_28C5;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8008CBBCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f31.d));
    f1.d = PPC_Fmadds(f30.d, f0.d, f31.d);
}

loc_8008CB88:
{
    r0 = 56;
    addr_psqx_8008CB8C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8008CB8C_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r0 = 40;
    addr_psqx_8008CB98_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8008CB98_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 32));
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8008C9CC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8008C9CC_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FFF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0xC0000003 fpr_write=0xC0000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008C9CC func_8008C9CC preserves=true fpr_mask=0x00000000
