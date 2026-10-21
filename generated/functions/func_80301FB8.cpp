#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802E05B4(CpuContext* ctx);
extern "C" uint64_t func_802E05B4_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_802E0E0C(CpuContext* ctx);
extern "C" uint64_t func_802E0E0C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802E0E70(CpuContext* ctx);
extern "C" uint64_t func_802E0E70_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803000E4(CpuContext* ctx);
extern "C" uint64_t func_803000E4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80301FB8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t stackword14 = 0;
    uint32_t stackword15 = 0;
    uint32_t stackword16 = 0;
    uint32_t stackword17 = 0;
    uint32_t stackword18 = 0;
    uint32_t stackword19 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
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

    MKW_GUEST_ENTER(0x80301FB8u);
    goto loc_80301FB8;

loc_80301FB8:
{
    MemoryAlias::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryAlias::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r5;
    r28 = r6;
    r30 = r7;
    if constexpr (KnownRegArgsCpuCall<0x803000E4u>(&func_803000E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803000E4_AD0 = func_803000E4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803000E4_AD0);
        r4 = static_cast<uint32_t>(regargs_result_803000E4_AD0 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803000E4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r29 = r3;
    r3 = 0x805E0000u;
    r3 = (r3 + -18264);
    r4 = (r28 & 65535);
    r5 = r30;
    ctx->lr = 0x80301FF4u;
    if constexpr (KnownRegArgsCpuCall<0x802E0E70u>(&func_802E0E70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_802E0E70_EA6 = func_802E0E70_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E0E70_EA6);
        r4 = static_cast<uint32_t>(regargs_result_802E0E70_EA6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        InvokeDirectCpu<0x802E0E70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    }
    r3 = 9057;
    r4 = 0;
    ctx->lr = 0x80302000u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_802E05B4_1591 = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_1591);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_1591 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r4 = r3;
    r3 = (r1 + 8);
    // inline leaf 0x801E68B4 (25 guest instruction(s))
    guest_range_0 = MemoryAlias::ResolveRangeHost(r4, 0, 36u, true, false);
    r0 = MemoryAlias::ReadResolved32(guest_range_0, 0u, r4);
    guest_range_1 = MemoryAlias::ResolveRangeHost(r3, 0, 36u, false, true);
    MemoryAlias::WriteResolved32(guest_range_1, 0u, r3, r0);
    r0 = MemoryAlias::ReadResolved32(guest_range_0, 4u, (r4 + 4));
    MemoryAlias::WriteResolved32(guest_range_1, 4u, (r3 + 4), r0);
    r0 = MemoryAlias::ReadResolved16(guest_range_0, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::WriteResolved16(guest_range_1, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::ReadResolved16(guest_range_0, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::WriteResolved16(guest_range_1, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::ReadResolved32(guest_range_0, 12u, (r4 + 12));
    MemoryAlias::WriteResolved32(guest_range_1, 12u, (r3 + 12), r0);
    r0 = MemoryAlias::ReadResolved16(guest_range_0, 16u, (r4 + 16));
    MemoryAlias::WriteResolved16(guest_range_1, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_0, 18u, (r4 + 18));
    MemoryAlias::WriteResolved8(guest_range_1, 18u, (r3 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_0, 19u, (r4 + 19));
    MemoryAlias::WriteResolved8(guest_range_1, 19u, (r3 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved32(guest_range_0, 20u, (r4 + 20));
    MemoryAlias::WriteResolved32(guest_range_1, 20u, (r3 + 20), r0);
    r0 = MemoryAlias::ReadResolved32(guest_range_0, 24u, (r4 + 24));
    MemoryAlias::WriteResolved32(guest_range_1, 24u, (r3 + 24), r0);
    r0 = MemoryAlias::ReadResolved32(guest_range_0, 28u, (r4 + 28));
    MemoryAlias::WriteResolved32(guest_range_1, 28u, (r3 + 28), r0);
    r0 = MemoryAlias::ReadResolved32(guest_range_0, 32u, (r4 + 32));
    MemoryAlias::WriteResolved32(guest_range_1, 32u, (r3 + 32), r0);
    // end of inlined leaf 0x801E68B4
    r31 = MemoryAlias::FlatRead16((r1 + 16));
    r31 = (r31 << 16);
    r31 = (static_cast<int32_t>(r31) >> 16);
    r0 = (r29 & 65535);
    r0 = (r0 * r31);
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -11520));
    r0 = (r0 ^ -2147483648);
    stackword14 = r0;
    MemoryAlias::FlatWriteRam32((r1 + 52), r0);
    r0 = 1127219200;
    stackword15 = r0;
    MemoryAlias::FlatWriteRam32((r1 + 48), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword15), static_cast<uint32_t>(stackword14));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryAlias::FlatReadFloat32((r2 + -11528));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryAlias::FlatWriteRamFloat64((r1 + 56), f0.d);
    r3 = fctiwzword0;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_80302050:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r0))) {
        goto loc_80302058;
    }
}

loc_80302054:
{
    MemoryAlias::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r3));
}

loc_80302058:
{
    r3 = (r1 + 8);
    r4 = (r28 & 65535);
    r5 = r30;
    ctx->lr = 0x80302068u;
    if constexpr (KnownRegArgsCpuCall<0x802E0E0Cu>(&func_802E0E0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_802E0E0C_2692 = func_802E0E0C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E0E0C_2692);
        r4 = static_cast<uint32_t>(regargs_result_802E0E0C_2692 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        InvokeDirectCpu<0x802E0E0Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    }
}

loc_8030206C:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_8030213C;
    }
}

loc_80302070:
{
    r3 = MemoryAlias::FlatRead16((r27 + 4));
    r0 = (r29 & 65535);
}

loc_8030207C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1000))) {
        goto loc_803020C8;
    }
}

loc_80302080:
{
    r0 = (r29 - r3);
    r0 = (r0 & 65535);
    r0_subfic_ra_1 = r0;
    r0 = (1000 - r0_subfic_ra_1);
    r0 = (r0 & 65535);
    r0 = (r0 * r31);
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -11520));
    r0 = (r0 ^ -2147483648);
    stackword16 = r0;
    MemoryAlias::FlatWriteRam32((r1 + 60), r0);
    r0 = 1127219200;
    stackword17 = r0;
    MemoryAlias::FlatWriteRam32((r1 + 56), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword17), static_cast<uint32_t>(stackword16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryAlias::FlatReadFloat32((r2 + -11528));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryAlias::FlatWriteRamFloat64((r1 + 48), f0.d);
    r4 = fctiwzword1;
    goto loc_803020FC;
}

loc_803020C8:
{
    r0 = (r3 * r31);
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -11520));
    r0 = (r0 ^ -2147483648);
    stackword18 = r0;
    MemoryAlias::FlatWriteRam32((r1 + 60), r0);
    r0 = 1127219200;
    stackword19 = r0;
    MemoryAlias::FlatWriteRam32((r1 + 56), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword19), static_cast<uint32_t>(stackword18));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryAlias::FlatReadFloat32((r2 + -11528));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryAlias::FlatWriteRamFloat64((r1 + 48), f0.d);
    r4 = fctiwzword2;
}

loc_803020FC:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_80302104:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r0))) {
        goto loc_80302130;
    }
}

loc_80302108:
{
    r3 = MemoryAlias::FlatRead16((r1 + 8));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryAlias::FlatRead16((r1 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 - r4);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r3 + r0);
    MemoryAlias::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    MemoryAlias::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r4));
    r3 = -1070596096;
    r0 = (r3 + 12543);
    MemoryAlias::FlatWriteRam32((r1 + 36), r0);
}

loc_80302130:
{
    r3 = (r1 + 8);
    r4 = r30;
    ctx->lr = 0x8030213Cu;
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
    InvokeDirectCpu<0x802E07A4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
}

loc_8030213C:
{
    r11 = (r1 + 96);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryAlias::FlatRead32((r1 + 100));
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80301FB8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80301FB8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF80FFFF fpr_write=0xFF80FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80301FB8 func_80301FB8 preserves=true fpr_mask=0x00000000
