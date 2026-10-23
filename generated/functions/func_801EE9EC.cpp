#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004AED4(CpuContext* ctx);
extern "C" uint32_t func_8004AED4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8004B814(CpuContext* ctx);
extern "C" uint64_t func_8004B814_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8004BF08(CpuContext* ctx);
extern "C" uint64_t func_8004BF08_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800DBC94(CpuContext* ctx);
extern "C" uint64_t func_800DBC94_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_801ECE38(CpuContext* ctx);
extern "C" uint64_t func_801ECE38_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_801ECF54(CpuContext* ctx);
extern "C" uint32_t func_801ECF54_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_801ED0AC(CpuContext* ctx);
extern "C" uint64_t func_801ED0AC_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_801EE964(CpuContext* ctx);
extern "C" uint64_t func_801EE964_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802121A0(CpuContext* ctx);
extern "C" uint64_t func_802121A0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80212310(CpuContext* ctx);
extern "C" uint64_t func_80212310_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8031C08C(CpuContext* ctx);
extern "C" uint64_t func_8031C08C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8031C11C(CpuContext* ctx);
extern "C" uint64_t func_8031C11C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8031C46C(CpuContext* ctx);
extern "C" uint64_t func_8031C46C_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_8031C578(CpuContext* ctx);
extern "C" uint64_t func_8031C578_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8031C660(CpuContext* ctx);
extern "C" uint64_t func_8031C660_ra38_1fa_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_8031C998(CpuContext* ctx);
extern "C" uint64_t func_8031C998_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_8031CAA0(CpuContext* ctx);
extern "C" uint32_t func_8031CAA0_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8035B764(CpuContext* ctx);
extern "C" uint64_t func_8035B764_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_801EE9EC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_801EE9EC;

loc_801EE9EC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r29 = r3;
    r30 = r4;
    r24 = r5;
    r31 = 0;
    // inline leaf 0x802DE4E4 (11 guest instruction(s))
}

loc_inl1_0x802DE4E4:
{
    r3 = 0;
    r4 = 0x806C0000u;
    r0 = MemoryInline::FlatRead8((r4 + -376));
}

loc_inl1_0x802DE4F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x802DE4F8:
{
    r4 = (r4 + -376);
    r0 = MemoryInline::FlatRead8((r4 + 1));
}

loc_inl1_0x802DE504:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x802DE508:
{
    r3 = 1;
    goto loc_inl1_cont_802DE4E4;
}

loc_inl1_return:
{
}

loc_inl1_cont_802DE4E4:
{
    // end of inlined leaf 0x802DE4E4
}

loc_801EEA18:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801EEA2C;
    }
}

loc_801EEA1C:
{
    r28 = 0;
    r26 = 0;
    r25 = 0;
    goto loc_801EEA44;
}

loc_801EEA2C:
{
    r3 = 0x806B0000u;
    r27 = (r3 + -12348);
    r28 = MemoryInline::FlatRead16((r27 + 134));
    ctx->lr = 0x801EEA3Cu;
    if constexpr (KnownRegArgsCpuCall<0x80212310u>(&func_80212310)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80212310_1786 = func_80212310_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80212310_1786);
        r4 = static_cast<uint32_t>(regargs_result_80212310_1786 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80212310u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r26 = r3;
    r25 = MemoryInline::FlatRead16((r27 + 132));
}

loc_801EEA44:
{
    r27 = 0;
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r27));
    r3 = (r29 + 14);
    // inline leaf 0x801EC868 (9 guest instruction(s))
}

loc_inl2_0x801EC868:
{
    r4 = MemoryInline::FlatRead16(r3);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_inl2_0x801EC87C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(40))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x801EC880:
{
    r0 = 0;
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    goto loc_inl2_cont_801EC868;
}

loc_inl2_return:
{
}

loc_inl2_cont_801EC868:
{
    // end of inlined leaf 0x801EC868
    r3 = r29;
    if constexpr (KnownRegArgsCpuCall<0x801ECF54u>(&func_801ECF54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801ECF54_1DCE = func_801ECF54_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_801ECF54_1DCE;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x801ECF54u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x8031CAA0u>(&func_8031CAA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8031CAA0_1FDF = func_8031CAA0_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8031CAA0_1FDF;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8031CAA0u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r0 = MemoryInline::FlatRead8(r29);
}

loc_801EEA6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801EEA94;
    }
}

loc_801EEA70:
{
}

loc_801EEA74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801EEAE0;
    }
}

loc_801EEA78:
{
}

loc_801EEA7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801EEC40;
    }
}

loc_801EEA80:
{
}

loc_801EEA84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801EED00;
    }
}

loc_801EEA88:
{
}

loc_801EEA8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_801EEDB0;
    }
}

loc_801EEA90:
{
    goto loc_801EEE0C;
}

loc_801EEA94:
{
    // inline leaf 0x802DE4E4 (11 guest instruction(s))
}

loc_inl3_0x802DE4E4:
{
    r3 = 0;
    r4 = 0x806C0000u;
    r0 = MemoryInline::FlatRead8((r4 + -376));
}

loc_inl3_0x802DE4F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x802DE4F8:
{
    r4 = (r4 + -376);
    r0 = MemoryInline::FlatRead8((r4 + 1));
}

loc_inl3_0x802DE504:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x802DE508:
{
    r3 = 1;
    goto loc_inl3_cont_802DE4E4;
}

loc_inl3_return:
{
}

loc_inl3_cont_802DE4E4:
{
    // end of inlined leaf 0x802DE4E4
}

loc_801EEA9C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801EEE0C;
    }
}

loc_801EEAA0:
{
    r3 = MemoryInline::FlatRead8((r29 + 1));
}

loc_801EEAA8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801EEAC4;
    }
}

loc_801EEAAC:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 1), static_cast<uint8_t>(r0));
    r3 = r30;
    r4 = 2;
    r5 = 0;
    // inline leaf 0x8031C050 (12 guest instruction(s))
    r7 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r7)) << 16) | static_cast<uint16_t>(r7)))) {
        MemoryInline::WriteResolved16(guest_range_1, 6u, (r3 + 6), r7);
        MemoryInline::WriteResolved16(guest_range_1, 4u, (r3 + 4), r7);
    }
    r6 = 65536;
    r0 = (r6 + -1);
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 10u, (r3 + 10), r0);
        MemoryInline::WriteResolved16(guest_range_1, 8u, (r3 + 8), r0);
    }
    MemoryInline::WriteResolved8(guest_range_1, 22u, (r3 + 22), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r7);
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r3 + 14), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + 28), r5);
    // end of inlined leaf 0x8031C050
}

loc_801EEAC4:
{
    r3 = r29;
    r4 = r24;
    ctx->lr = 0x801EEAD0u;
    if constexpr (KnownRegArgsCpuCall<0x801ED0ACu>(&func_801ED0AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_801ED0AC_2F17 = func_801ED0AC_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801ED0AC_2F17);
        r4 = static_cast<uint32_t>(regargs_result_801ED0AC_2F17 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x801ED0ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_801EEAD4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801EEAE0;
    }
}

loc_801EEAD8:
{
    r3 = 0;
    goto loc_801EEE10;
}

loc_801EEAE0:
{
    // inline leaf 0x802DE4E4 (11 guest instruction(s))
}

loc_inl5_0x802DE4E4:
{
    r3 = 0;
    r4 = 0x806C0000u;
    r0 = MemoryInline::FlatRead8((r4 + -376));
}

loc_inl5_0x802DE4F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x802DE4F8:
{
    r4 = (r4 + -376);
    r0 = MemoryInline::FlatRead8((r4 + 1));
}

loc_inl5_0x802DE504:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x802DE508:
{
    r3 = 1;
    goto loc_inl5_cont_802DE4E4;
}

loc_inl5_return:
{
}

loc_inl5_cont_802DE4E4:
{
    // end of inlined leaf 0x802DE4E4
}

loc_801EEAE8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801EEE0C;
    }
}

loc_801EEAEC:
{
    r3 = 16;
    ctx->lr = 0x801EEAF4u;
    if constexpr (KnownRegArgsCpuCall<0x802121A0u>(&func_802121A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802121A0_3A1E = func_802121A0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802121A0_3A1E);
        r4 = static_cast<uint32_t>(regargs_result_802121A0_3A1E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802121A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801EEAF8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801EEBE0;
    }
}

loc_801EEAFC:
{
    r3 = r29;
    // inline leaf 0x801ED1C4 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead16((r3 + 10));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r4 = (r0 * 100);
    r0 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r0 * 10);
    r0 = (r5 + r4);
    r0 = (r3 + r0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    // end of inlined leaf 0x801ED1C4
    r27 = r3;
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r28 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r29);
}

loc_801EEB20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801EEB30;
    }
}

loc_801EEB24:
{
}

loc_801EEB28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801EEB78;
    }
}

loc_801EEB2C:
{
    goto loc_801EEE0C;
}

loc_801EEB30:
{
    r3 = MemoryInline::FlatRead16((r28 + 384));
    ctx->lr = 0x801EEB38u;
    if constexpr (KnownRegArgsCpuCall<0x801EE964u>(&func_801EE964)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_801EE964_4261 = func_801EE964_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_801EE964_4261);
        r4 = static_cast<uint32_t>(regargs_result_801EE964_4261 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x801EE964u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r11 = ctx->gpr[11];
    }
}

loc_801EEB3C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801EEB6C;
    }
}

loc_801EEB40:
{
    r3 = MemoryInline::FlatRead8(r29);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    r3 = r30;
    r4 = (r27 & 65535);
    r5 = MemoryInline::FlatRead16((r28 + 384));
    // inline leaf 0x8031C080 (3 guest instruction(s))
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r5));
    // end of inlined leaf 0x8031C080
    MemoryInline::FlatWrite16((r29 + 26), static_cast<uint16_t>(r27));
    r3 = 0;
    ctx->lr = 0x801EEB68u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_800DBC94_48B6 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_48B6);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_48B6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_801EEE0C;
}

loc_801EEB6C:
{
    r3 = 2;
    ctx->lr = 0x801EEB74u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_800DBC94_5046 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_5046);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_5046 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_801EEE0C;
}

loc_801EEB78:
{
    r5 = MemoryInline::FlatRead16((r28 + 384));
}

loc_801EEB80:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801EEBD4;
    }
}

loc_801EEB84:
{
    r3 = r30;
    r4 = (r27 & 65535);
    ctx->lr = 0x801EEB90u;
    if constexpr (KnownRegArgsCpuCall<0x8031C08Cu>(&func_8031C08C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8031C08C_582C = func_8031C08C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8031C08C_582C);
        r4 = static_cast<uint32_t>(regargs_result_8031C08C_582C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8031C08Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_801EEB94:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801EEBD4;
    }
}

loc_801EEB98:
{
    r3 = MemoryInline::FlatRead8(r29);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    r3 = r30;
    ctx->lr = 0x801EEBACu;
    if constexpr (KnownRegArgsCpuCall<0x8031C11Cu>(&func_8031C11C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        const auto regargs_result_8031C11C_5CC1 = func_8031C11C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8031C11C_5CC1);
        r4 = static_cast<uint32_t>(regargs_result_8031C11C_5CC1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8031C11Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    }
}

loc_801EEBB0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801EEBC0;
    }
}

loc_801EEBB4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 4), r0);
    goto loc_801EEBC8;
}

loc_801EEBC0:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_801EEBC8:
{
    r3 = 0;
    ctx->lr = 0x801EEBD0u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_800DBC94_62C7 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_62C7);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_62C7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_801EEE0C;
}

loc_801EEBD4:
{
    r3 = 2;
    ctx->lr = 0x801EEBDCu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_800DBC94_6A57 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_6A57);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_6A57 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_801EEE0C;
}

loc_801EEBE0:
{
    r3 = 32;
    ctx->lr = 0x801EEBE8u;
    if constexpr (KnownRegArgsCpuCall<0x802121A0u>(&func_802121A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802121A0_715F = func_802121A0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802121A0_715F);
        r4 = static_cast<uint32_t>(regargs_result_802121A0_715F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802121A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801EEBEC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801EEC34;
    }
}

loc_801EEBF0:
{
    r3 = MemoryInline::FlatRead8(r29);
}

loc_801EEBF8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801EEC08;
    }
}

loc_801EEBFC:
{
}

loc_801EEC00:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_801EEC18;
    }
}

loc_801EEC04:
{
    goto loc_801EEE0C;
}

loc_801EEC08:
{
    r3 = 1;
    ctx->lr = 0x801EEC10u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_800DBC94_76D6 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_76D6);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_76D6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r31 = 2;
    goto loc_801EEE0C;
}

loc_801EEC18:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 1), static_cast<uint8_t>(r0));
    r3 = 1;
    ctx->lr = 0x801EEC30u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_800DBC94_7F18 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_7F18);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_7F18 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_801EEE0C;
}

loc_801EEC34:
{
    r3 = r29;
    ctx->lr = 0x801EEC3Cu;
    if constexpr (KnownRegArgsCpuCall<0x801ECE38u>(&func_801ECE38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_801ECE38_86AA = func_801ECE38_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801ECE38_86AA);
        r4 = static_cast<uint32_t>(regargs_result_801ECE38_86AA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x801ECE38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_801EEE0C;
}

loc_801EEC40:
{
    MemoryInline::FlatWrite8((r30 + 22), static_cast<uint8_t>(r27));
    r3 = r30;
    ctx->lr = 0x801EEC4Cu;
    if constexpr (KnownRegArgsCpuCall<0x8031C11Cu>(&func_8031C11C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        const auto regargs_result_8031C11C_8E4C = func_8031C11C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8031C11C_8E4C);
        r4 = static_cast<uint32_t>(regargs_result_8031C11C_8E4C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8031C11Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    }
}

loc_801EEC50:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801EEC5C;
    }
}

loc_801EEC54:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_801EEC5C:
{
    r3 = r30;
    r4 = (r29 + 4);
    r5 = r28;
    r6 = (r26 & 65535);
    r7 = r25;
    ctx->lr = 0x801EEC74u;
    if constexpr (KnownRegArgsCpuCall<0x8031C46Cu>(&func_8031C46C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_8031C46C_9433 = func_8031C46C_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8031C46C_9433);
        r4 = static_cast<uint32_t>(regargs_result_8031C46C_9433 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8031C46Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_801EEC78:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_801EEC88;
    }
}

loc_801EEC7C:
{
}

loc_801EEC80:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_801EECA4;
    }
}

loc_801EEC84:
{
    goto loc_801EEE0C;
}

loc_801EEC88:
{
    r3 = MemoryInline::FlatRead8(r29);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x801EECA0u;
    if constexpr (KnownRegArgsCpuCall<0x8031C578u>(&func_8031C578)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        const auto regargs_result_8031C578_9D3C = func_8031C578_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8031C578_9D3C);
        r4 = static_cast<uint32_t>(regargs_result_8031C578_9D3C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8031C578u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_801EEE0C;
}

loc_801EECA4:
{
    r0 = MemoryInline::FlatRead16((r30 + 8));
}

loc_801EECAC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_801EECBC;
    }
}

loc_801EECB0:
{
    r0 = MemoryInline::FlatRead16((r30 + 10));
}

loc_801EECB8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_801EECDC;
    }
}

loc_801EECBC:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 1), static_cast<uint8_t>(r0));
    r3 = r30;
    r4 = 2;
    r5 = 0;
    // inline leaf 0x8031C050 (12 guest instruction(s))
    r7 = 0;
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r7)) << 16) | static_cast<uint16_t>(r7)))) {
        MemoryInline::WriteResolved16(guest_range_2, 6u, (r3 + 6), r7);
        MemoryInline::WriteResolved16(guest_range_2, 4u, (r3 + 4), r7);
    }
    r6 = 65536;
    r0 = (r6 + -1);
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 10u, (r3 + 10), r0);
        MemoryInline::WriteResolved16(guest_range_2, 8u, (r3 + 8), r0);
    }
    MemoryInline::WriteResolved8(guest_range_2, 22u, (r3 + 22), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved32(guest_range_2, 0u, r3, r7);
    MemoryInline::WriteResolved8(guest_range_2, 14u, (r3 + 14), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_2, 28u, (r3 + 28), r5);
    // end of inlined leaf 0x8031C050
    goto loc_801EEE0C;
}

loc_801EECDC:
{
    r3 = r30;
    r4 = 65536;
    r4 = (r4 + -1);
    r4 = (r4 & 65535);
    r5 = 0;
    ctx->lr = 0x801EECF4u;
    if constexpr (KnownRegArgsCpuCall<0x8031C08Cu>(&func_8031C08C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8031C08C_AB9B = func_8031C08C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8031C08C_AB9B);
        r4 = static_cast<uint32_t>(regargs_result_8031C08C_AB9B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8031C08Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = 1;
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    goto loc_801EEE0C;
}

loc_801EED00:
{
    r3 = r30;
    r4 = r25;
    r5 = r28;
    ctx->lr = 0x801EED10u;
    if constexpr (KnownRegArgsCpuCall<0x8031C660u>(&func_8031C660)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[2] = f2;
        const auto regargs_result_8031C660_AFD4 = func_8031C660_ra38_1fa_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8031C660_AFD4);
        r4 = static_cast<uint32_t>(regargs_result_8031C660_AFD4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8031C660u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_801EED14:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801EEE0C;
    }
}

loc_801EED18:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x801EED20u;
    if constexpr (KnownRegArgsCpuCall<0x8004AED4u>(&func_8004AED4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_8004AED4_B7A4 = func_8004AED4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8004AED4_B7A4;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004AED4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r5 = (r3 & 65535);
    r3 = MemoryInline::FlatRead16((r30 + 12));
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = (r4 + 384);
    ctx->lr = 0x801EED34u;
    if constexpr (KnownRegArgsCpuCall<0x8004B814u>(&func_8004B814)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004B814_BB0B = func_8004B814_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004B814_BB0B);
        r4 = static_cast<uint32_t>(regargs_result_8004B814_BB0B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004B814u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801EED38:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(0))) {
        goto loc_801EED50;
    }
}

loc_801EED3C:
{
    r3 = 2;
    r4 = 17;
    r5 = MemoryInline::FlatRead16((r30 + 12));
    ctx->lr = 0x801EED4Cu;
    if constexpr (KnownRegArgsCpuCall<0x8035B764u>(&func_8035B764)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        const auto regargs_result_8035B764_BF29 = func_8035B764_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8035B764_BF29);
        r4 = static_cast<uint32_t>(regargs_result_8035B764_BF29 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8035B764u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_801EED78;
}

loc_801EED50:
{
    r3 = MemoryInline::FlatRead16((r30 + 12));
    r4 = MemoryInline::FlatRead8((r30 + 21));
    r5 = (r1 + 8);
    ctx->lr = 0x801EED60u;
    if constexpr (KnownRegArgsCpuCall<0x8004BF08u>(&func_8004BF08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        const auto regargs_result_8004BF08_C6F5 = func_8004BF08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004BF08_C6F5);
        r4 = static_cast<uint32_t>(regargs_result_8004BF08_C6F5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8004BF08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    }
}

loc_801EED64:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801EED78;
    }
}

loc_801EED68:
{
    r3 = 2;
    r4 = 17;
    r5 = MemoryInline::FlatRead16((r30 + 12));
    ctx->lr = 0x801EED78u;
    if constexpr (KnownRegArgsCpuCall<0x8035B764u>(&func_8035B764)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        const auto regargs_result_8035B764_CC43 = func_8035B764_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8035B764_CC43);
        r4 = static_cast<uint32_t>(regargs_result_8035B764_CC43 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8035B764u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_801EED78:
{
    r3 = r30;
    // inline leaf 0x8031C950 (18 guest instruction(s))
}

loc_inl9_0x8031C950:
{
    r4 = 0;
    MemoryInline::FlatWrite8((r3 + 35), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead8((r3 + 18));
}

loc_inl9_0x8031C960:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl9_0x8031C970;
    }
}

loc_inl9_0x8031C964:
{
    r0 = 30;
    MemoryInline::FlatWrite8((r3 + 15), static_cast<uint8_t>(r0));
    goto loc_inl9_0x8031C98C;
}

loc_inl9_0x8031C970:
{
    MemoryInline::FlatWrite8((r3 + 15), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead8((r3 + 24));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_inl9_0x8031C980:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl9_0x8031C98C;
    }
}

loc_inl9_0x8031C984:
{
    r0 = 17;
    MemoryInline::FlatWrite8((r3 + 35), static_cast<uint8_t>(r0));
}

loc_inl9_0x8031C98C:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r0));
}

loc_inl9_cont_8031C950:
{
    // end of inlined leaf 0x8031C950
    r3 = MemoryInline::FlatRead8(r29);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 8));
}

loc_801EED94:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_801EEDA4;
    }
}

loc_801EED98:
{
    r0 = MemoryInline::FlatRead16((r30 + 10));
}

loc_801EEDA0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_801EEE0C;
    }
}

loc_801EEDA4:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 4), r0);
    goto loc_801EEE0C;
}

loc_801EEDB0:
{
    r3 = r30;
    r4 = r25;
    r5 = r28;
    ctx->lr = 0x801EEDC0u;
    if constexpr (KnownRegArgsCpuCall<0x8031C998u>(&func_8031C998)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_8031C998_DAD7 = func_8031C998_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8031C998_DAD7);
        r4 = static_cast<uint32_t>(regargs_result_8031C998_DAD7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8031C998u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_801EEDC4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_801EEDD4;
    }
}

loc_801EEDC8:
{
}

loc_801EEDCC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_801EEDEC;
    }
}

loc_801EEDD0:
{
    goto loc_801EEE0C;
}

loc_801EEDD4:
{
    r3 = r30;
    r4 = 1;
    ctx->lr = 0x801EEDE0u;
    if constexpr (KnownRegArgsCpuCall<0x8031C578u>(&func_8031C578)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        const auto regargs_result_8031C578_E366 = func_8031C578_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8031C578_E366);
        r4 = static_cast<uint32_t>(regargs_result_8031C578_E366 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8031C578u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = 3;
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    goto loc_801EEE0C;
}

loc_801EEDEC:
{
    r0 = MemoryInline::FlatRead8((r30 + 16));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801EEDF8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_801EEE04;
    }
}

loc_801EEDFC:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_801EEE04:
{
    r0 = 2;
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
}

loc_801EEE0C:
{
    r3 = r31;
}

loc_801EEE10:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801EE9EC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801EE9EC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801EE9EC func_801EE9EC preserves=true fpr_mask=0x00000000
