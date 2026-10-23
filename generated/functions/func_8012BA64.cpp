#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050F58(CpuContext* ctx);
extern "C" uint64_t func_80050F58_ra18_8_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_8012D118(CpuContext* ctx);
extern "C" uint64_t func_8012D118_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_8012D860(CpuContext* ctx);
extern "C" uint32_t func_8012D860_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8012F368(CpuContext* ctx);
extern "C" uint64_t func_8012F368_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8012BA64_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r28_rot_3 = 0;
    uint32_t r28_rot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
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
    uint32_t cr = ctx->cr;

    goto loc_8012BA64;

loc_8012BA64:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r23 = r3;
    r22 = r4;
    r24 = r5;
    r25 = r6;
    r26 = r7;
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r31 = 0;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r27 = 0;
    r30 = MemoryInline::FlatRead32(r22);
    r29 = MemoryInline::FlatRead32((r22 + 4));
    r0 = (r25 & 255);
}

loc_8012BABC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8012BAD4;
    }
}

loc_8012BAC0:
{
}

loc_8012BAC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8012BB5C;
    }
}

loc_8012BAC8:
{
}

loc_8012BACC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8012BBD8;
    }
}

loc_8012BAD0:
{
    goto loc_8012BC08;
}

loc_8012BAD4:
{
    r3 = r23;
    r4 = r24;
    ctx->lr = 0x8012BAE0u;
    if constexpr (KnownRegArgsCpuCall<0x8012D118u>(&func_8012D118)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8012D118_EB6 = func_8012D118_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8012D118_EB6);
        r4 = static_cast<uint32_t>(regargs_result_8012D118_EB6 >> 32);
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
        InvokeDirectCpu<0x8012D118u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r28_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r28 = (r28_rot_3 & 134217727);
    r22 = MemoryInline::FlatRead32((r22 + 8));
}

loc_8012BAF4:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_8012BB48;
    }
}

loc_8012BAF8:
{
    r3 = r24;
    r4 = 512;
    // inline leaf 0x8026FEFC (10 guest instruction(s))
}

loc_inl2_0x8026FEFC:
{
    r0 = (r4 & -2147483648);
}

loc_inl2_0x8026FF04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x8026FF14;
    }
}

loc_inl2_0x8026FF08:
{
    r0 = MemoryInline::FlatRead32((r3 + 860));
    r3 = (r0 & r4);
    goto loc_inl2_cont_8026FEFC;
}

loc_inl2_0x8026FF14:
{
    r3 = MemoryInline::FlatRead32((r3 + 864));
    r0 = (r4 & 2147483647);
    r3 = (r3 & r0);
}

loc_inl2_cont_8026FEFC:
{
    // end of inlined leaf 0x8026FEFC
}

loc_8012BB08:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012BB10;
    }
}

loc_8012BB0C:
{
    r31 = MemoryInline::FlatRead32(r22);
}

loc_8012BB10:
{
    r0 = MemoryInline::FlatRead8((r24 + 1476));
    r0 = (r0 & 15);
}

loc_8012BB1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012BB28;
    }
}

loc_8012BB20:
{
    r0 = MemoryInline::FlatRead32((r22 + 4));
    r31 = (r31 + r0);
}

loc_8012BB28:
{
}

loc_8012BB2C:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(1))) {
        goto loc_8012BB48;
    }
}

loc_8012BB30:
{
    r3 = r24;
    ctx->lr = 0x8012BB38u;
    if constexpr (KnownRegArgsCpuCall<0x8012D860u>(&func_8012D860)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_8012D860_1946 = func_8012D860_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8012D860_1946;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012D860u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8012BB3C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012BB48;
    }
}

loc_8012BB40:
{
    r0 = MemoryInline::FlatRead32((r22 + 8));
    r31 = (r31 + r0);
}

loc_8012BB48:
{
    r0 = MemoryInline::FlatRead8((r24 + 9));
}

loc_8012BB50:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8012BC08;
    }
}

loc_8012BB54:
{
    r27 = 1;
    goto loc_8012BC08;
}

loc_8012BB5C:
{
    r3 = r23;
    r4 = r24;
    // inline leaf 0x8012D1EC (6 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 481));
    r0 = MemoryInline::FlatRead8((r4 + 420));
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x8012D1EC
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r28_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r28 = (r28_rot_2 & 134217727);
    r3 = (r1 + 8);
    r4 = (r24 + 376);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r22 = MemoryInline::FlatRead32((r22 + 8));
}

loc_8012BB88:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_8012BBC4;
    }
}

loc_8012BB8C:
{
    r3 = r24;
    r4 = 1;
    // inline leaf 0x802D2BDC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 492));
    r0 = (r4 & 65535);
    r3 = (r3 & r0);
    // end of inlined leaf 0x802D2BDC
}

loc_8012BB9C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012BBA4;
    }
}

loc_8012BBA0:
{
    r31 = MemoryInline::FlatRead32(r22);
}

loc_8012BBA4:
{
    r0 = MemoryInline::FlatRead8((r24 + 1056));
}

loc_8012BBAC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8012BBC4;
    }
}

loc_8012BBB0:
{
    r0 = MemoryInline::FlatRead16((r24 + 1058));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8012BBB8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8012BBC4;
    }
}

loc_8012BBBC:
{
    r0 = MemoryInline::FlatRead32((r22 + 4));
    r31 = (r31 + r0);
}

loc_8012BBC4:
{
    r0 = MemoryInline::FlatRead8((r24 + 368));
}

loc_8012BBCC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8012BC08;
    }
}

loc_8012BBD0:
{
    r27 = 1;
    goto loc_8012BC08;
}

loc_8012BBD8:
{
    r3 = MemoryInline::FlatRead8((r23 + 481));
    r0 = MemoryInline::FlatRead8((r24 + 481));
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r28_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r28 = (r28_rot_1 & 134217727);
    r3 = (r1 + 8);
    r4 = (r24 + 392);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead8((r24 + 482));
}

loc_8012BC00:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8012BC08;
    }
}

loc_8012BC04:
{
    r27 = 1;
}

loc_8012BC08:
{
    r0 = MemoryInline::FlatRead8((r23 + 1085));
}

loc_8012BC10:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8012BC20;
    }
}

loc_8012BC14:
{
    r0 = MemoryInline::FlatRead32((r29 + 16));
    r31 = (r31 + r0);
    goto loc_8012BE3C;
}

loc_8012BC20:
{
}

loc_8012BC24:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8012BC3C;
    }
}

loc_8012BC28:
{
    r3 = r23;
    r4 = 0;
    ctx->lr = 0x8012BC34u;
    if constexpr (KnownRegArgsCpuCall<0x8012F368u>(&func_8012F368)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8012F368_2B4A = func_8012F368_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8012F368_2B4A);
        r4 = static_cast<uint32_t>(regargs_result_8012F368_2B4A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012F368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8012BC38:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012BC48;
    }
}

loc_8012BC3C:
{
    r0 = MemoryInline::FlatRead32((r29 + 20));
    r31 = (r31 + r0);
    goto loc_8012BE3C;
}

loc_8012BC48:
{
    r0 = (r25 & 255);
}

loc_8012BC50:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8012BC68;
    }
}

loc_8012BC54:
{
    r0 = (r26 & 65535);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r23 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1108));
    goto loc_8012BC74;
}

loc_8012BC68:
{
    r3 = (r23 + 392);
    r4 = (r1 + 8);
    ctx->lr = 0x8012BC74u;
    if constexpr (KnownRegArgsCpuCall<0x80050F58u>(&func_80050F58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_80050F58_31CA = func_80050F58_ra18_8_18_0(ctx, r3, r4, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80050F58_31CA);
        r4 = static_cast<uint32_t>(regargs_result_80050F58_31CA >> 32);
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
        InvokeDirectCpu<0x80050F58u>(ctx);
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
}

loc_8012BC74:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -28232), 0, 56u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28232));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8012BC7C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012BC8C;
    }
}

loc_8012BC80:
{
    r0 = MemoryInline::FlatRead32((r29 + 20));
    r31 = (r31 + r0);
    goto loc_8012BD04;
}

loc_8012BC8C:
{
    f0.d = MemoryInline::FlatReadFloat32(r30);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8012BC94:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8012BCA8;
    }
}

loc_8012BC9C:
{
    r0 = MemoryInline::FlatRead32(r29);
    r31 = (r31 + r0);
    goto loc_8012BD04;
}

loc_8012BCA8:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8012BCB0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8012BCC4;
    }
}

loc_8012BCB8:
{
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r31 = (r31 + r0);
    goto loc_8012BD04;
}

loc_8012BCC4:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8012BCCC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8012BCE0;
    }
}

loc_8012BCD4:
{
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r31 = (r31 + r0);
    goto loc_8012BD04;
}

loc_8012BCE0:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8012BCE8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8012BCFC;
    }
}

loc_8012BCF0:
{
    r0 = MemoryInline::FlatRead32((r29 + 12));
    r31 = (r31 + r0);
    goto loc_8012BD04;
}

loc_8012BCFC:
{
    r0 = MemoryInline::FlatRead32((r29 + 16));
    r31 = (r31 + r0);
}

loc_8012BD04:
{
    r0 = MemoryInline::FlatRead8((r23 + 485));
}

loc_8012BD0C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_8012BD8C;
    }
}

loc_8012BD10:
{
    r3 = MemoryInline::FlatRead8((r23 + 896));
    r0 = (r25 & 255);
}

loc_8012BD1C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8012BE3C;
    }
}

loc_8012BD20:
{
    r3 = MemoryInline::FlatRead8((r23 + 898));
    r0 = (r26 & 65535);
}

loc_8012BD2C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_8012BE3C;
    }
}

loc_8012BD30:
{
    r0 = MemoryInline::FlatRead8((r23 + 482));
}

loc_8012BD38:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8012BD80;
    }
}

loc_8012BD3C:
{
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 16u, (r2 + -28216));
    r0 = (r31 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryInline::FlatRead32((r29 + 24));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 52u, (r2 + -28180));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r31 = fctiwzword0;
    goto loc_8012BE3C;
}

loc_8012BD80:
{
    r0 = MemoryInline::FlatRead32((r29 + 24));
    r31 = (r31 + r0);
    goto loc_8012BE3C;
}

loc_8012BD8C:
{
    r0 = MemoryInline::FlatRead8((r23 + 482));
}

loc_8012BD94:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8012BDEC;
    }
}

loc_8012BD98:
{
}

loc_8012BD9C:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_8012BDEC;
    }
}

loc_8012BDA0:
{
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 16u, (r2 + -28216));
    r0 = (r31 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryInline::FlatRead32((r29 + 24));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 52u, (r2 + -28180));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -28208));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r31 = fctiwzword1;
    goto loc_8012BE3C;
}

loc_8012BDEC:
{
}

loc_8012BDF0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_8012BE3C;
    }
}

loc_8012BDF4:
{
}

loc_8012BDF8:
{
    if ((static_cast<uint32_t>(r27) != static_cast<uint32_t>(1))) {
        goto loc_8012BE3C;
    }
}

loc_8012BDFC:
{
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 16u, (r2 + -28216));
    r0 = (r31 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryInline::FlatRead32((r29 + 24));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -28208));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r31 = fctiwzword2;
}

loc_8012BE3C:
{
    r3 = r31;
    r11 = (r1 + 96);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 100));
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
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8012BA64(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8012BA64_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FF gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012BA64 func_8012BA64 preserves=true fpr_mask=0x00000000
