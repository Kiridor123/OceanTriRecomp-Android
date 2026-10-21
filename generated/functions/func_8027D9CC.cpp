#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005001C(CpuContext* ctx);
extern "C" double func_8005001C_ra18_0_0_2(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80050FAC(CpuContext* ctx);
extern "C" uint64_t func_80050FAC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8021E364(CpuContext* ctx);
extern "C" double func_8021E364_ra0_2_0_2(CpuContext*, double);
extern "C" void func_802AE128(CpuContext* ctx);
extern "C" uint32_t func_802AE128_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_8021E364_statefree(PPC_FPR, PPC_FPR);
extern "C" uint64_t func_8021E364_statefree_v0(PPC_FPR);

extern "C" uint64_t func_8027D9CC_ra38_6_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2)
{
    uint32_t addr_psqx_8027DC84_loc_0 = 0;
    uint32_t addr_psqx_8027DC90_loc_0 = 0;
    uint32_t addr_psqx_8027DC9C_loc_0 = 0;
    uint32_t addr_psqx_8027DCA8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r31_addr_5 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x8027D9CCu);
    goto loc_8027D9CC;

loc_8027D9CC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -128), 0, 136u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 132u, (r1 + 132), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 112u, (r1 + 112), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 96u, (r1 + 96), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 80u, (r1 + 80), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    r11 = (r1 + 64);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r25 = r3;
    r26 = r4;
    r29 = r5;
    r30 = r6;
    r3 = (r1 + 12);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r25;
    r4 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x802AE128u>(&func_802AE128)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802AE128_1054 = func_802AE128_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_802AE128_1054;
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
        InvokeDirectCpu<0x802AE128u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r31 = r3;
    r0 = 0;
    MemoryInline::FlatWrite32(r30, r0);
    r0 = MemoryInline::FlatRead8((r25 + 9));
}

loc_8027DA38:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8027DB78;
    }
}

loc_8027DA3C:
{
    r27 = 0;
    r28 = r31;
    f29.d = MemoryInline::FlatReadFloat32((r2 + -14876));
    f30.d = MemoryInline::FlatReadFloat32((r2 + -14728));
    f31.d = MemoryInline::FlatReadFloat32((r2 + -14872));
    goto loc_8027DB64;
}

loc_8027DA54:
{
    r3 = (r1 + 12);
    r4 = (r28 + 8);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        const auto regargs_result_8005001C_14EF = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_14EF;
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    r0 = MemoryInline::FlatRead32(r28);
}

loc_8027DA68:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8027DAE4;
    }
}

loc_8027DA6C:
{
    r3 = (r25 + 60);
    r4 = (r1 + 12);
    ctx->lr = 0x8027DA78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050FACu>(ctx);
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f28.d = f1.d;
    f1.d = MemoryInline::FlatReadFloat32((r25 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8021E364u) && KnownTranslatedCpuCall<0x8021E364u>::kAvailable && !KnownTranslatedCpuCall<0x8021E364u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8021E364u>()) {
        const auto state_free_result_8021E364_1AC6 = func_8021E364_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_8021E364_1AC6);
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
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8021E364u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r28 + 24));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 20));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    SetCRFloatResident(cr, 0, f28.d, f0.d);
}

loc_8027DAA4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8027DB5C;
    }
}

loc_8027DAAC:
{
    SetCRFloatResident(cr, 0, f1.d, f29.d);
}

loc_8027DAB0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8027DB5C;
    }
}

loc_8027DAB8:
{
    r3 = r26;
    r4 = (r1 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(5));
    r4 = (r4_rot_0 & -32);
    r3 = (r31 + r4);
    r0 = MemoryInline::FlatRead16((r3 + 28));
    MemoryInline::FlatWrite32(r29, r0);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32(r30, r0);
    r31_addr_0 = (r31 + r4);
    r3 = MemoryInline::FlatRead32(r31_addr_0);
    goto loc_8027DC80;
}

loc_8027DAE4:
{
    r3 = (r25 + 60);
    r4 = (r1 + 12);
    ctx->lr = 0x8027DAF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050FACu>(ctx);
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f0.d = MemoryInline::FlatReadFloat32((r25 + 64));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 20));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8027DB0C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8027DB5C;
    }
}

loc_8027DB14:
{
    SetCRFloatResident(cr, 0, f2.d, f29.d);
}

loc_8027DB18:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8027DB5C;
    }
}

loc_8027DB20:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 24));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8027DB28:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8027DB5C;
    }
}

loc_8027DB30:
{
    r3 = r26;
    r4 = (r1 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(5));
    r4 = (r4_rot_1 & -32);
    r3 = (r31 + r4);
    r0 = MemoryInline::FlatRead16((r3 + 28));
    MemoryInline::FlatWrite32(r29, r0);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32(r30, r0);
    r31_addr_1 = (r31 + r4);
    r3 = MemoryInline::FlatRead32(r31_addr_1);
    goto loc_8027DC80;
}

loc_8027DB5C:
{
    r28 = (r28 + 32);
    r27 = (r27 + 1);
}

loc_8027DB64:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_8027DB6C:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r0))) {
        goto loc_8027DA54;
    }
}

loc_8027DB70:
{
    r3 = 0;
    goto loc_8027DC80;
}

loc_8027DB78:
{
    r27 = 0;
    r28 = r31;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -14876));
    f30.d = MemoryInline::FlatReadFloat32((r2 + -14872));
    goto loc_8027DC70;
}

loc_8027DB8C:
{
    r3 = (r1 + 12);
    r4 = (r28 + 8);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        const auto regargs_result_8005001C_2FBB = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_2FBB;
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    r0 = MemoryInline::FlatRead32(r28);
}

loc_8027DBA0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8027DC1C;
    }
}

loc_8027DBA4:
{
    r3 = (r25 + 60);
    r4 = (r1 + 12);
    ctx->lr = 0x8027DBB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050FACu>(ctx);
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f29.d = f1.d;
    f1.d = MemoryInline::FlatReadFloat32((r25 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8021E364u) && KnownTranslatedCpuCall<0x8021E364u>::kAvailable && !KnownTranslatedCpuCall<0x8021E364u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8021E364u>()) {
        const auto state_free_result_8021E364_3592 = func_8021E364_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_8021E364_3592);
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
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8021E364u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r28 + 24));
    f0.d = PpcFmulsInline(f0.d, f30.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 20));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    SetCRFloatResident(cr, 0, f29.d, f0.d);
}

loc_8027DBDC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8027DC68;
    }
}

loc_8027DBE4:
{
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_8027DBE8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8027DC68;
    }
}

loc_8027DBF0:
{
    r3 = r26;
    r4 = (r1 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(5));
    r4 = (r4_rot_3 & -32);
    r3 = (r31 + r4);
    r0 = MemoryInline::FlatRead16((r3 + 28));
    MemoryInline::FlatWrite32(r29, r0);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32(r30, r0);
    r31_addr_3 = (r31 + r4);
    r3 = MemoryInline::FlatRead32(r31_addr_3);
    goto loc_8027DC80;
}

loc_8027DC1C:
{
    r3 = (r25 + 60);
    r4 = (r1 + 12);
    ctx->lr = 0x8027DC28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050FACu>(ctx);
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat32((r28 + 20));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8027DC34:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8027DC68;
    }
}

loc_8027DC3C:
{
    r3 = r26;
    r4 = (r1 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(5));
    r4 = (r4_rot_4 & -32);
    r3 = (r31 + r4);
    r0 = MemoryInline::FlatRead16((r3 + 28));
    MemoryInline::FlatWrite32(r29, r0);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32(r30, r0);
    r31_addr_4 = (r31 + r4);
    r3 = MemoryInline::FlatRead32(r31_addr_4);
    goto loc_8027DC80;
}

loc_8027DC68:
{
    r28 = (r28 + 32);
    r27 = (r27 + 1);
}

loc_8027DC70:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_8027DC78:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r0))) {
        goto loc_8027DB8C;
    }
}

loc_8027DC7C:
{
    r3 = 0;
}

loc_8027DC80:
{
    r0 = 120;
    addr_psqx_8027DC84_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8027DC84_loc_0));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 36), 0, 100u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 76u, (r1 + 112));
    r0 = 104;
    addr_psqx_8027DC90_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8027DC90_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 60u, (r1 + 96));
    r0 = 88;
    addr_psqx_8027DC9C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8027DC9C_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 44u, (r1 + 80));
    r0 = 72;
    addr_psqx_8027DCA8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8027DCA8_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 28u, (r1 + 64));
    r11 = (r1 + 64);
    // inline leaf 0x804574CC (8 guest instruction(s))
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 96u, (r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8027D9CC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8027D9CC_ra38_6_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0xF0000007 fpr_write=0xF000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027D9CC func_8027D9CC preserves=true fpr_mask=0x00000000
