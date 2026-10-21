#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005001C(CpuContext* ctx);
extern "C" double func_8005001C_ra18_0_0_2(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80050FE4(CpuContext* ctx);
extern "C" uint64_t func_80050FE4_ra18_8_18_0(CpuContext*, uint32_t, uint32_t, double);

extern "C" void func_80368DCC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_803692D0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword11 = 0;
    uint32_t stackword12 = 0;
    uint32_t stackword13 = 0;
    uint32_t stackword15 = 0;
    uint32_t stackword16 = 0;
    uint32_t stackword17 = 0;
    uint32_t stackword18 = 0;
    uint32_t stackword19 = 0;
    uint32_t stackword21 = 0;
    uint32_t stackword22 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x80368DCCu);
    goto loc_80368DCC;

loc_80368DCC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 100u, (r1 + 100), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 80u, (r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 80);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r0 = 1127219200;
    stackword8 = r0;
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 24), r0);
    r0 = 1127219200;
    stackword9 = r0;
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 32), r0);
    r31 = MemoryInline::FlatRead32((r3 + 56));
    r29 = 0;
    r30 = (r31 + r4);
    r0 = MemoryInline::FlatRead8((r30 + 53));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 110));
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -9056), 0, 192u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 184u, (r2 + -8872));
    stackword10 = r0;
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 28), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword8), static_cast<uint32_t>(stackword10));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
}

loc_80368E3C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80368E9C;
    }
}

loc_80368E40:
{
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl2_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl2_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CEF40;
    }
}

loc_inl2_0x800CEF3C:
{
    r0 = 1;
}

loc_inl2_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_0 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl2_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r4 = (r3 & 65535);
    r3 = 1717960704;
    r0 = (r3 + 26215);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 1);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 5);
    r28 = (r4 - r0);
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl3_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl3_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x800CEF40;
    }
}

loc_inl3_0x800CEF3C:
{
    r0 = 1;
}

loc_inl3_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_4 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_1 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl3_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r4 = (r3 & 65535);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 176u, (r2 + -8880));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f31.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f0.d);
    r3 = fctiwzword0;
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r4 - r0);
    goto loc_80368EB4;
}

loc_80368E9C:
{
    r28 = 0;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 176u, (r2 + -8880));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f31.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f0.d);
    r0 = fctiwzword1;
}

loc_80368EB4:
{
    r3 = (r31 + r26);
    r4 = MemoryInline::FlatRead8((r3 + 96));
}

loc_80368EC0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80368EF8;
    }
}

loc_80368EC4:
{
}

loc_80368EC8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_80368F3C;
    }
}

loc_80368ECC:
{
}

loc_80368ED0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_8036901C;
    }
}

loc_80368ED4:
{
}

loc_80368ED8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(3))) {
        goto loc_80369060;
    }
}

loc_80368EDC:
{
}

loc_80368EE0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(4))) {
        goto loc_80369120;
    }
}

loc_80368EE4:
{
}

loc_80368EE8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(5))) {
        goto loc_80369200;
    }
}

loc_80368EEC:
{
}

loc_80368EF0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(6))) {
        goto loc_80369244;
    }
}

loc_80368EF4:
{
    goto loc_803692C8;
}

loc_80368EF8:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 96), static_cast<uint8_t>(r0));
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 48u, (r2 + -9008));
    r0 = (r28 ^ -2147483648);
    stackword11 = r0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword9), static_cast<uint32_t>(stackword11));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 180u, (r2 + -8876));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r4 = fctiwzword2;
    r0 = MemoryInline::FlatRead8((r30 + 53));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_11 & -2);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite16((r3 + 110), static_cast<uint16_t>(r4));
    goto loc_803692C8;
}

loc_80368F3C:
{
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r4 = (r4_rot_5 & -4);
    r31 = (r31 + r4);
    r4 = MemoryInline::FlatRead32((r31 + 64));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite32((r31 + 64), r4);
    r5 = MemoryInline::FlatRead32((r31 + 4));
    r4 = MemoryInline::FlatRead32((r31 + 64));
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 48u, (r2 + -9008));
    r4 = (r4 ^ -2147483648);
    stackword12 = r4;
    MemoryInline::FlatWriteRam32((r1 + 28), r4);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword8), static_cast<uint32_t>(stackword12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -9052));
    f1.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r5 + 12), f0.d);
    r4 = MemoryInline::FlatRead32((r31 + 64));
    r4 = (r4 ^ -2147483648);
    stackword13 = r4;
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword9), static_cast<uint32_t>(stackword13));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_80368F9C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_803692C8;
    }
}

loc_80368FA4:
{
    r4 = MemoryInline::FlatRead8((r3 + 96));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 96), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite32((r31 + 64), r0);
    r3 = (r1 + 8);
    r4 = (r27 & 255);
    r0 = MemoryInline::FlatRead8((r30 + 53));
    r0 = (r4 + r0);
    r5 = (r0 * 12);
    r4 = 0x805F0000u;
    r0 = (r4 + -6544);
    r4 = (r0 + r5);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_8005001C_3026 = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_3026;
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r3 = (r3 + 4);
    r4 = (r1 + 8);
    ctx->lr = 0x80368FE8u;
    if constexpr (KnownRegArgsCpuCall<0x80050FE4u>(&func_80050FE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_80050FE4_336F = func_80050FE4_ra18_8_18_0(ctx, r3, r4, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80050FE4_336F);
        r4 = static_cast<uint32_t>(regargs_result_80050FE4_336F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80050FE4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead32((r31 + 64));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -9008));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f31.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword3;
    MemoryInline::FlatWrite32((r31 + 64), r0);
    goto loc_803692C8;
}

loc_8036901C:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r5 = (r31 + r0);
    r4 = MemoryInline::FlatRead32((r5 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
    r4 = MemoryInline::FlatRead32((r5 + 64));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r5 + 64), r0);
}

loc_80369044:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_803692C8;
    }
}

loc_80369048:
{
    r4 = MemoryInline::FlatRead8((r3 + 96));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 96), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r5 + 64), r0);
    goto loc_803692C8;
}

loc_80369060:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r5 = (r31 + r0);
    r4 = MemoryInline::FlatRead32((r5 + 64));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r5 + 64), r0);
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 64));
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 48u, (r2 + -9008));
    r0 = (r0 ^ -2147483648);
    stackword15 = r0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword9), static_cast<uint32_t>(stackword15));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -9052));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
    r0 = MemoryInline::FlatRead32((r5 + 64));
    r0 = (r0 ^ -2147483648);
    stackword16 = r0;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword8), static_cast<uint32_t>(stackword16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -9056));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803690CC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_803692C8;
    }
}

loc_803690D4:
{
    r4 = MemoryInline::FlatRead8((r3 + 96));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 96), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r5 + 64), r0);
    r0 = (r28 ^ -2147483648);
    stackword17 = r0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword9), static_cast<uint32_t>(stackword17));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 180u, (r2 + -8876));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    r4 = fctiwzword4;
    r0 = MemoryInline::FlatRead8((r30 + 53));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_9 & -2);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite16((r3 + 110), static_cast<uint16_t>(r4));
    goto loc_803692C8;
}

loc_80369120:
{
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r4 = (r4_rot_4 & -4);
    r31 = (r31 + r4);
    r4 = MemoryInline::FlatRead32((r31 + 64));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite32((r31 + 64), r4);
    r5 = MemoryInline::FlatRead32((r31 + 4));
    r4 = MemoryInline::FlatRead32((r31 + 64));
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 48u, (r2 + -9008));
    r4 = (r4 ^ -2147483648);
    stackword18 = r4;
    MemoryInline::FlatWriteRam32((r1 + 28), r4);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword8), static_cast<uint32_t>(stackword18));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -9052));
    f1.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r5 + 12), f0.d);
    r4 = MemoryInline::FlatRead32((r31 + 64));
    r4 = (r4 ^ -2147483648);
    stackword19 = r4;
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword9), static_cast<uint32_t>(stackword19));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_80369180:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_803692C8;
    }
}

loc_80369188:
{
    r4 = MemoryInline::FlatRead8((r3 + 96));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 96), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite32((r31 + 64), r0);
    r3 = (r1 + 8);
    r4 = (r27 & 255);
    r0 = MemoryInline::FlatRead8((r30 + 53));
    r0 = (r4 + r0);
    r5 = (r0 * 12);
    r4 = 0x805F0000u;
    r0 = (r4 + -6544);
    r4 = (r0 + r5);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_8005001C_50E1 = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_50E1;
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r3 = (r3 + 4);
    r4 = (r1 + 8);
    ctx->lr = 0x803691CCu;
    if constexpr (KnownRegArgsCpuCall<0x80050FE4u>(&func_80050FE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_80050FE4_542A = func_80050FE4_ra18_8_18_0(ctx, r3, r4, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80050FE4_542A);
        r4 = static_cast<uint32_t>(regargs_result_80050FE4_542A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80050FE4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead32((r31 + 64));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -9008));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f31.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword5 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword5;
    MemoryInline::FlatWrite32((r31 + 64), r0);
    goto loc_803692C8;
}

loc_80369200:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r5 = (r31 + r0);
    r4 = MemoryInline::FlatRead32((r5 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f31.d));
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
    r4 = MemoryInline::FlatRead32((r5 + 64));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r5 + 64), r0);
}

loc_80369228:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_803692C8;
    }
}

loc_8036922C:
{
    r4 = MemoryInline::FlatRead8((r3 + 96));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 96), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r5 + 64), r0);
    goto loc_803692C8;
}

loc_80369244:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r5 = (r31 + r0);
    r4 = MemoryInline::FlatRead32((r5 + 64));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r5 + 64), r0);
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 64));
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 48u, (r2 + -9008));
    r0 = (r0 ^ -2147483648);
    stackword21 = r0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword9), static_cast<uint32_t>(stackword21));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -9052));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
    r0 = MemoryInline::FlatRead32((r5 + 64));
    r0 = (r0 ^ -2147483648);
    stackword22 = r0;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword8), static_cast<uint32_t>(stackword22));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -9056));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803692B0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_803692C8;
    }
}

loc_803692B8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 96), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r5 + 64), r0);
    r29 = 1;
}

loc_803692C8:
{
    r3 = r29;
    r0 = 88;
    addr_psqx_803692D0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803692D0_loc_0));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 56), 0, 48u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 24u, (r1 + 80));
    r11 = (r1 + 80);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x8000000F fpr_write=0x8000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80368DCC func_80368DCC preserves=true fpr_mask=0x00000000
