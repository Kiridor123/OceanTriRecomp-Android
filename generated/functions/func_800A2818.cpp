#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80457360(CpuContext* ctx);
extern "C" uint32_t func_80457360_ra8_1e_8_0(CpuContext*, uint32_t, double, double, double, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800A2818(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_800A2D34_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x800A2818u);
    goto loc_800A2818;

loc_800A2818:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 64);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r6;
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r0);
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800A2878:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A2890;
    }
}

loc_800A287C:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_800A2888:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A2890;
    }
}

loc_800A288C:
{
    r10 = 0;
}

loc_800A2890:
{
}

loc_800A2894:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800A28AC;
    }
}

loc_800A2898:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_800A28A4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A28AC;
    }
}

loc_800A28A8:
{
    r9 = 0;
}

loc_800A28AC:
{
}

loc_800A28B0:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800A28C4;
    }
}

loc_800A28B4:
{
    r0 = (r11 + 1073741824);
}

loc_800A28BC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A28C4;
    }
}

loc_800A28C0:
{
    r8 = 0;
}

loc_800A28C4:
{
}

loc_800A28C8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800A28E0;
    }
}

loc_800A28CC:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_800A28D8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A28E0;
    }
}

loc_800A28DC:
{
    r7 = 0;
}

loc_800A28E0:
{
}

loc_800A28E4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800A28FC;
    }
}

loc_800A28E8:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_800A28F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A28FC;
    }
}

loc_800A28F8:
{
    r6 = 0;
}

loc_800A28FC:
{
}

loc_800A2900:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800A2918;
    }
}

loc_800A2904:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_800A2910:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A2918;
    }
}

loc_800A2914:
{
    r5 = 0;
}

loc_800A2918:
{
}

loc_800A291C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800A2940;
    }
}

loc_800A2920:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 2219;
    r5 = 0x80590000u;
    r5 = (r5 + 9788);
    r6 = r28;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A2940u;
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

loc_800A2940:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r30 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_800A2964:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A297C;
    }
}

loc_800A2968:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800A2974:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A297C;
    }
}

loc_800A2978:
{
    r9 = 0;
}

loc_800A297C:
{
}

loc_800A2980:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800A2998;
    }
}

loc_800A2984:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800A2990:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A2998;
    }
}

loc_800A2994:
{
    r8 = 0;
}

loc_800A2998:
{
}

loc_800A299C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800A29B0;
    }
}

loc_800A29A0:
{
    r0 = (r10 + 1073741824);
}

loc_800A29A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A29B0;
    }
}

loc_800A29AC:
{
    r7 = 0;
}

loc_800A29B0:
{
}

loc_800A29B4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800A29CC;
    }
}

loc_800A29B8:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800A29C4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A29CC;
    }
}

loc_800A29C8:
{
    r6 = 0;
}

loc_800A29CC:
{
}

loc_800A29D0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800A29E8;
    }
}

loc_800A29D4:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800A29E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A29E8;
    }
}

loc_800A29E4:
{
    r5 = 0;
}

loc_800A29E8:
{
}

loc_800A29EC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800A2A04;
    }
}

loc_800A29F0:
{
    r3 = (r30 & -16384);
    r0 = (r3 + 536870912);
}

loc_800A29FC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A2A04;
    }
}

loc_800A2A00:
{
    r4 = 0;
}

loc_800A2A04:
{
}

loc_800A2A08:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800A2A2C;
    }
}

loc_800A2A0C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 2220;
    r5 = 0x80590000u;
    r5 = (r5 + 9844);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A2A2Cu;
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

loc_800A2A2C:
{
    r4 = MemoryInline::FlatRead16((r28 + 8));
}

loc_800A2A34:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(1))) {
        goto loc_800A2A44;
    }
}

loc_800A2A38:
{
    r0 = 0;
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    goto loc_800A2D30;
}

loc_800A2A44:
{
    r27 = MemoryInline::FlatRead8((r28 + 4));
    r3 = (r27 & 32);
}

loc_800A2A50:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800A2B1C;
    }
}

loc_800A2A54:
{
    r0 = MemoryInline::FlatRead8((r28 + 5));
}

loc_800A2A5C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_800A2B1C;
    }
}

loc_800A2A60:
{
    r0 = (r27 & 128);
}

loc_800A2A68:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A2A90;
    }
}

loc_800A2A6C:
{
    r0 = (r4 + -1);
}

loc_800A2A74:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r0))) {
        goto loc_800A2A84;
    }
}

loc_800A2A78:
{
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    goto loc_800A2D30;
}

loc_800A2A84:
{
    r0 = (r29 & 65535);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    goto loc_800A2D30;
}

loc_800A2A90:
{
}

loc_800A2A94:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(1))) {
        goto loc_800A2AA8;
    }
}

loc_800A2A98:
{
    r0 = (r4 + -1);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    goto loc_800A2D30;
}

loc_800A2AA8:
{
    r0 = (r4 + -1);
    f4.d = MemoryInline::FlatReadFloat64((r2 + -31456));
    MemoryInline::FlatWriteRam32((r1 + 12), r29);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31448));
    r3 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    r0 = (r31 + -1);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f1.d = PpcFmulsInline(f3.d, f0.d);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800A2AF8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800A2B08;
    }
}

loc_800A2AFC:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
}

loc_800A2B08:
{
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    goto loc_800A2D30;
}

loc_800A2B1C:
{
    r0 = (r27 & 128);
}

loc_800A2B24:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A2BEC;
    }
}

loc_800A2B28:
{
    r4 = (r4 + -1);
    r5 = PPC_Divwu(static_cast<uint32_t>(r29), static_cast<uint32_t>(r4));
    r0 = (r27 & 64);
}

loc_800A2B38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A2B70;
    }
}

loc_800A2B3C:
{
}

loc_800A2B40:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800A2B5C;
    }
}

loc_800A2B44:
{
    r0 = MemoryInline::FlatRead8((r28 + 5));
}

loc_800A2B4C:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r0))) {
        goto loc_800A2B5C;
    }
}

loc_800A2B50:
{
    r0 = (r4 & 65535);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    goto loc_800A2D30;
}

loc_800A2B5C:
{
    r0 = (r5 * r4);
    r0 = (r29 - r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    goto loc_800A2D30;
}

loc_800A2B70:
{
}

loc_800A2B74:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800A2BB4;
    }
}

loc_800A2B78:
{
    r0 = MemoryInline::FlatRead8((r28 + 5));
}

loc_800A2B80:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r0))) {
        goto loc_800A2BB4;
    }
}

loc_800A2B84:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 & 1);
    r0 = (r0 ^ r3);
    r0 = (r0 - r3);
}

loc_800A2B98:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A2BA8;
    }
}

loc_800A2B9C:
{
    r0 = 0;
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    goto loc_800A2D30;
}

loc_800A2BA8:
{
    r0 = (r4 & 65535);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    goto loc_800A2D30;
}

loc_800A2BB4:
{
    r0 = (r5 & 1);
}

loc_800A2BBC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A2BD4;
    }
}

loc_800A2BC0:
{
    r0 = (r5 * r4);
    r0 = (r29 - r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    goto loc_800A2D30;
}

loc_800A2BD4:
{
    r0 = (r5 + 1);
    r0 = (r4 * r0);
    r0 = (r0 - r29);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    goto loc_800A2D30;
}

loc_800A2BEC:
{
    r3 = (r31 + -1);
}

loc_800A2BF4:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r3))) {
        goto loc_800A2C3C;
    }
}

loc_800A2BF8:
{
    r0 = (r27 & 64);
}

loc_800A2C00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A2C20;
    }
}

loc_800A2C04:
{
    r0 = MemoryInline::FlatRead8((r28 + 5));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r0 = (r0 & 1);
    r0 = (r0 ^ r3);
    r0 = (r0 - r3);
}

loc_800A2C1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A2C30;
    }
}

loc_800A2C20:
{
    r0 = (r4 + -1);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    goto loc_800A2D30;
}

loc_800A2C30:
{
    r0 = 0;
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    goto loc_800A2D30;
}

loc_800A2C3C:
{
    r31 = (r4 + -1);
    r0 = MemoryInline::FlatRead8((r28 + 5));
    f4.d = MemoryInline::FlatReadFloat64((r2 + -31456));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31448));
    r0 = (r31 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f31.d = PpcFmulsInline(f3.d, f0.d);
    MemoryInline::FlatWriteRam32((r1 + 12), r29);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f1.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80457360_40BC = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_40BC;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31456));
    MemoryInline::FlatWriteRam32((r1 + 12), r29);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = PpcFmulsInline(f0.d, f31.d);
    r0 = (r3 * r31);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r0 = (r27 & 64);
}

loc_800A2CD0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A2CE8;
    }
}

loc_800A2CD4:
{
    f0.d = PPC_Fctiwz(f2.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    goto loc_800A2D30;
}

loc_800A2CE8:
{
    r0 = (r3 & 1);
}

loc_800A2CF0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A2D08;
    }
}

loc_800A2CF4:
{
    f0.d = PPC_Fctiwz(f2.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword2;
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    goto loc_800A2D30;
}

loc_800A2D08:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31448));
    r0 = (r31 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword3;
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
}

loc_800A2D30:
{
    r0 = 72;
    addr_psqx_800A2D34_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800A2D34_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r11 = (r1 + 64);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x8000001F fpr_write=0x8000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800A2818 func_800A2818 preserves=true fpr_mask=0x00000000
