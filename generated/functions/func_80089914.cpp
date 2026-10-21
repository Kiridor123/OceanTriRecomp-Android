#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80082F7C(CpuContext* ctx);
extern "C" uint64_t func_80082F7C_ra0_2_18_0(CpuContext*, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_80089914(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_80089BC0_loc_0 = 0;
    uint32_t addr_psqx_80089BCC_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x80089914u);
    goto loc_80089914;

loc_80089914:
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
    r31 = r3;
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

loc_80089964:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008997C;
    }
}

loc_80089968:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_80089974:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008997C;
    }
}

loc_80089978:
{
    r10 = 0;
}

loc_8008997C:
{
}

loc_80089980:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_80089998;
    }
}

loc_80089984:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_80089990:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80089998;
    }
}

loc_80089994:
{
    r9 = 0;
}

loc_80089998:
{
}

loc_8008999C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800899B0;
    }
}

loc_800899A0:
{
    r0 = (r11 + 1073741824);
}

loc_800899A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800899B0;
    }
}

loc_800899AC:
{
    r8 = 0;
}

loc_800899B0:
{
}

loc_800899B4:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800899CC;
    }
}

loc_800899B8:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_800899C4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800899CC;
    }
}

loc_800899C8:
{
    r7 = 0;
}

loc_800899CC:
{
}

loc_800899D0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800899E8;
    }
}

loc_800899D4:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_800899E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800899E8;
    }
}

loc_800899E4:
{
    r6 = 0;
}

loc_800899E8:
{
}

loc_800899EC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80089A04;
    }
}

loc_800899F0:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_800899FC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80089A04;
    }
}

loc_80089A00:
{
    r5 = 0;
}

loc_80089A04:
{
}

loc_80089A08:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80089A2C;
    }
}

loc_80089A0C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 1416);
    r4 = 105;
    r5 = 0x80590000u;
    r5 = (r5 + 1432);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80089A2Cu;
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

loc_80089A2C:
{
    r3 = MemoryInline::FlatRead16(r31);
    r0 = (r3 + -1);
    r0 = (r0 * 12);
    r4 = (r31 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 8));
    SetCRFloatResident(cr, 0, f30.d, f1.d);
}

loc_80089A44:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80089A54;
    }
}

loc_80089A4C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 12));
    goto loc_80089BBC;
}

loc_80089A54:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_80089A5C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80089A6C;
    }
}

loc_80089A64:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 12));
    goto loc_80089BBC;
}

loc_80089A6C:
{
    f31.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f1.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050248u>(ctx);
    f1 = ctx->fpr[1];
    f1.d = PpcFmulsInline(f31.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->lr = 0x80089A84u;
    if constexpr (KnownRegArgsCpuCall<0x80082F7Cu>(&func_80082F7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80082F7C_1A2E = func_80082F7C_ra0_2_18_0(ctx, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80082F7C_1A2E);
        r4 = static_cast<uint32_t>(regargs_result_80082F7C_1A2E >> 32);
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
    r30 = r3;
    r4 = MemoryInline::FlatRead16(r31);
    r7 = (r4 + -1);
    r0 = (r3 & 65535);
}

loc_80089A98:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r7))) {
        goto loc_80089AE8;
    }
}

loc_80089A9C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 1416);
    r4 = 135;
    r5 = 0x80590000u;
    r5 = (r5 + 1484);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31752));
    stackword4 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r6 = 1127219200;
    stackword5 = r6;
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword4));
    f1.d = (f0.d - f1.d);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31744));
    r0 = (r7 ^ -2147483648);
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    stackword7 = r6;
    MemoryInline::FlatWriteRam32((r1 + 16), r6);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword6));
    f2.d = (f0.d - f2.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(5), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80089AE8u;
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

loc_80089AE8:
{
    r0 = (r30 & 65535);
    r0 = (r0 * 12);
    r3 = (r31 + r0);
    r30 = (r3 + 8);
    f0.d = MemoryInline::FlatReadFloat32(r30);
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_80089B00:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80089B18;
    }
}

loc_80089B04:
{
    r30 = (r30 + -12);
    f0.d = MemoryInline::FlatReadFloat32(r30);
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_80089B10:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80089B04;
    }
}

loc_80089B14:
{
    goto loc_80089B30;
}

loc_80089B18:
{
    r30 = (r30 + 12);
    f0.d = MemoryInline::FlatReadFloat32(r30);
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_80089B24:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80089B18;
    }
}

loc_80089B2C:
{
    r30 = (r30 + -12);
}

loc_80089B30:
{
    f0.d = MemoryInline::FlatReadFloat32(r30);
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_80089B38:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80089B44;
    }
}

loc_80089B3C:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 4));
    goto loc_80089BBC;
}

loc_80089B44:
{
    r0 = 0;
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_80089B4C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80089B68;
    }
}

loc_80089B54:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 12));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_80089B5C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80089B68;
    }
}

loc_80089B64:
{
    r0 = 1;
}

loc_80089B68:
{
}

loc_80089B6C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80089B98;
    }
}

loc_80089B70:
{
    r3 = 0x80590000u;
    r3 = (r3 + 1416);
    r4 = 176;
    r5 = 0x80590000u;
    r5 = (r5 + 1552);
    f1.d = f30.d;
    f2.d = MemoryInline::FlatReadFloat32(r30);
    f3.d = MemoryInline::FlatReadFloat32((r30 + 12));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(5), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80089B98u;
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

loc_80089B98:
{
    f1.d = MemoryInline::FlatReadFloat32(r30);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f4.d = MemoryInline::FlatReadFloat32((r30 + 20));
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    InvokeDirectCpu<0x80089BECu>(ctx);
    f1 = ctx->fpr[1];
}

loc_80089BBC:
{
    r0 = 56;
    addr_psqx_80089BC0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80089BC0_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r0 = 40;
    addr_psqx_80089BCC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80089BCC_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0xC000007F fpr_write=0xC000007F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80089914 func_80089914 preserves=true fpr_mask=0x00000000
