#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005001C(CpuContext* ctx);
extern "C" double func_8005001C_ra18_0_0_2(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80050AF4(CpuContext* ctx);
extern "C" uint64_t func_80050AF4_ra38_1e0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_80050F10(CpuContext* ctx);
extern "C" uint64_t func_80050F10_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_803692F0_ra38_1ee_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_26 = 0;
    uint32_t r0_rot_27 = 0;
    uint32_t r0_rot_28 = 0;
    uint32_t r0_rot_29 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_30 = 0;
    uint32_t r0_rot_31 = 0;
    uint32_t r0_rot_32 = 0;
    uint32_t r0_rot_33 = 0;
    uint32_t r0_rot_34 = 0;
    uint32_t r0_rot_35 = 0;
    uint32_t r0_rot_36 = 0;
    uint32_t r0_rot_37 = 0;
    uint32_t r0_rot_38 = 0;
    uint32_t r0_rot_39 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_40 = 0;
    uint32_t r0_rot_41 = 0;
    uint32_t r0_rot_42 = 0;
    uint32_t r0_rot_43 = 0;
    uint32_t r0_rot_44 = 0;
    uint32_t r0_rot_45 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r28_rot_3 = 0;
    uint32_t r28_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
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
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x803692F0u);
    goto loc_803692F0;

loc_803692F0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -128), 0, 136u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 132u, (r1 + 132), r0);
    r11 = (r1 + 128);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r28 = r4;
    r25 = r5;
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 72u, (r1 + 72), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 80u, (r1 + 80), r0);
    r27 = MemoryInline::FlatRead32((r3 + 56));
    r3 = (r1 + 56);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 44);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r26 = 0;
    r29 = (r27 + r28);
    r0 = MemoryInline::FlatRead8((r29 + 96));
}

loc_80369340:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80369358;
    }
}

loc_80369344:
{
}

loc_80369348:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80369798;
    }
}

loc_8036934C:
{
}

loc_80369350:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80369BA0;
    }
}

loc_80369354:
{
    goto loc_80369D98;
}

loc_80369358:
{
    r28_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r28 = (r28_rot_3 & -4);
    r30 = (r27 + r28);
    r3 = MemoryInline::FlatRead32((r30 + 64));
    r3 = MH3_TickLoad(r3, 2151060320);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r30 + 64), r0);
    r3 = (r1 + 44);
    r4 = (r25 & 255);
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0 = (r4 + r0);
    r5 = (r0 * 12);
    r4 = 0x805F0000u;
    r0 = (r4 + -6544);
    r4 = (r0 + r5);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_8005001C_13FC = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_13FC;
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
    r31 = r30;
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r3 = (r3 + 4);
    r4 = (r1 + 44);
    ctx->lr = 0x803693A4u;
    if constexpr (KnownRegArgsCpuCall<0x80050AF4u>(&func_80050AF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_80050AF4_1755 = func_80050AF4_ra38_1e0_18_0(ctx, r3, r4, r5, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80050AF4_1755);
        r4 = static_cast<uint32_t>(regargs_result_80050AF4_1755 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80050AF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r25 = r3;
    r3 = (r1 + 56);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -9056));
    f2.d = f1.d;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -8976));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 56);
    r4 = r25;
    ctx->lr = 0x803693C8u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    r3 = (r1 + 32);
    r4 = (r1 + 56);
    r0 = MemoryInline::FlatRead32((r30 + 64));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -9008));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9052));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r3 = (r3 + 4);
    r4 = (r1 + 32);
    ctx->lr = 0x80369404u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r0 = MemoryInline::FlatRead32((r30 + 64));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -9008));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 80));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9052));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -8876));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8036942C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80369448;
    }
}

loc_80369434:
{
    r3 = MemoryInline::FlatRead8((r29 + 96));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 96), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 64), r0);
}

loc_80369448:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -8864));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80369454:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803695DC;
    }
}

loc_80369458:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 44));
}

loc_80369464:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(1820))) {
        goto loc_803694AC;
    }
}

loc_80369468:
{
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_23 & -2);
    r4 = (r27 + r0);
    r3 = MemoryInline::FlatRead16((r4 + 106));
    r0 = (r3 + 9);
    MemoryInline::FlatWrite16((r4 + 106), static_cast<uint16_t>(r0));
    r3 = (r27 + r28);
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r4 = MemoryInline::FlatRead32((r5 + 44));
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_24 & -2);
    r3 = (r27 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 106));
    r0 = (r4 + r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r5 + 44), r0);
    goto loc_80369518;
}

loc_803694AC:
{
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_25 & -2);
    r3 = (r27 + r0);
    r4 = MemoryInline::FlatRead16((r3 + 106));
}

loc_803694C0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80369518;
    }
}

loc_803694C4:
{
    r0 = (r4 + -9);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r3 + 106), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_26 & -2);
    r3 = (r27 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 106));
}

loc_803694E4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(32768))) {
        goto loc_803694F0;
    }
}

loc_803694E8:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 106), static_cast<uint16_t>(r0));
}

loc_803694F0:
{
    r3 = (r27 + r28);
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r4 = MemoryInline::FlatRead32((r5 + 44));
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_27 & -2);
    r3 = (r27 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 106));
    r0 = (r4 + r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r5 + 44), r0);
}

loc_80369518:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 48));
}

loc_80369524:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(1820))) {
        goto loc_8036956C;
    }
}

loc_80369528:
{
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_29 & -2);
    r4 = (r27 + r0);
    r3 = MemoryInline::FlatRead16((r4 + 110));
    r0 = (r3 + 9);
    MemoryInline::FlatWrite16((r4 + 110), static_cast<uint16_t>(r0));
    r3 = (r27 + r28);
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r4 = MemoryInline::FlatRead32((r5 + 48));
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_30 & -2);
    r3 = (r27 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 110));
    r0 = (r4 + r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r5 + 48), r0);
    goto loc_80369D98;
}

loc_8036956C:
{
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_31 & -2);
    r3 = (r27 + r0);
    r4 = MemoryInline::FlatRead16((r3 + 110));
}

loc_80369580:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80369D98;
    }
}

loc_80369584:
{
    r0 = (r4 + -9);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r3 + 110), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_32 & -2);
    r3 = (r27 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 110));
}

loc_803695A4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(32768))) {
        goto loc_803695B0;
    }
}

loc_803695A8:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 110), static_cast<uint16_t>(r0));
}

loc_803695B0:
{
    r3 = (r27 + r28);
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r4 = MemoryInline::FlatRead32((r5 + 48));
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_33 & -2);
    r3 = (r27 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 110));
    r0 = (r4 + r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r5 + 48), r0);
    goto loc_80369D98;
}

loc_803695DC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -8860));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803695E4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8036977C;
    }
}

loc_803695E8:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 44));
}

loc_803695F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80369600;
    }
}

loc_803695F8:
{
}

loc_803695FC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(63716))) {
        goto loc_80369644;
    }
}

loc_80369600:
{
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_37 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_37 & -2);
    r4 = (r27 + r0);
    r3 = MemoryInline::FlatRead16((r4 + 106));
    r0 = (r3 + 9);
    MemoryInline::FlatWrite16((r4 + 106), static_cast<uint16_t>(r0));
    r3 = (r27 + r28);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_38 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_38 & -2);
    r3 = (r27 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 106));
    r0 = MemoryInline::FlatRead32((r4 + 44));
    r0 = (r0 - r3);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r4 + 44), r0);
    goto loc_803696B0;
}

loc_80369644:
{
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_34 & -2);
    r3 = (r27 + r0);
    r4 = MemoryInline::FlatRead16((r3 + 106));
}

loc_80369658:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_803696B0;
    }
}

loc_8036965C:
{
    r0 = (r4 + -9);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r3 + 106), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_35 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_35 & -2);
    r3 = (r27 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 106));
}

loc_8036967C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(32768))) {
        goto loc_80369688;
    }
}

loc_80369680:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 106), static_cast<uint16_t>(r0));
}

loc_80369688:
{
    r3 = (r27 + r28);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_36 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_36 & -2);
    r3 = (r27 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 106));
    r0 = MemoryInline::FlatRead32((r4 + 44));
    r0 = (r0 - r3);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r4 + 44), r0);
}

loc_803696B0:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 48));
}

loc_803696BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803696C8;
    }
}

loc_803696C0:
{
}

loc_803696C4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(63716))) {
        goto loc_8036970C;
    }
}

loc_803696C8:
{
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_43 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_43 & -2);
    r4 = (r27 + r0);
    r3 = MemoryInline::FlatRead16((r4 + 110));
    r0 = (r3 + 9);
    MemoryInline::FlatWrite16((r4 + 110), static_cast<uint16_t>(r0));
    r3 = (r27 + r28);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_44 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_44 & -2);
    r3 = (r27 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 110));
    r0 = MemoryInline::FlatRead32((r4 + 48));
    r0 = (r0 - r3);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r4 + 48), r0);
    goto loc_80369D98;
}

loc_8036970C:
{
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_40 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_40 & -2);
    r3 = (r27 + r0);
    r4 = MemoryInline::FlatRead16((r3 + 110));
}

loc_80369720:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80369D98;
    }
}

loc_80369724:
{
    r0 = (r4 + -9);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r3 + 110), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_41 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_41 & -2);
    r3 = (r27 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 110));
}

loc_80369744:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(32768))) {
        goto loc_80369750;
    }
}

loc_80369748:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 110), static_cast<uint16_t>(r0));
}

loc_80369750:
{
    r3 = (r27 + r28);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_42 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_42 & -2);
    r3 = (r27 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 110));
    r0 = MemoryInline::FlatRead32((r4 + 48));
    r0 = (r0 - r3);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r4 + 48), r0);
    goto loc_80369D98;
}

loc_8036977C:
{
    r4 = (r27 + r28);
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 44), r0);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 48), r0);
    goto loc_80369D98;
}

loc_80369798:
{
    r3 = (r1 + 44);
    r4 = (r25 & 255);
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0 = (r4 + r0);
    r5 = (r0 * 12);
    r4 = 0x805F0000u;
    r0 = (r4 + -6544);
    r4 = (r0 + r5);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_8005001C_5307 = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_5307;
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
    r28_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r28 = (r28_rot_2 & -4);
    r31 = (r27 + r28);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r3 = (r3 + 4);
    r4 = (r1 + 44);
    ctx->lr = 0x803697D4u;
    if constexpr (KnownRegArgsCpuCall<0x80050AF4u>(&func_80050AF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_80050AF4_56DB = func_80050AF4_ra38_1e0_18_0(ctx, r3, r4, r5, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80050AF4_56DB);
        r4 = static_cast<uint32_t>(regargs_result_80050AF4_56DB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80050AF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r25 = r3;
    r3 = (r1 + 56);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -9056));
    f2.d = f1.d;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -8976));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 56);
    r4 = r25;
    ctx->lr = 0x803697F8u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    r3 = (r1 + 20);
    r4 = (r1 + 56);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -8876));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r3 = (r3 + 4);
    r4 = (r1 + 20);
    ctx->lr = 0x80369818u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r3 = (r3 + 4);
    r4 = (r1 + 44);
    ctx->lr = 0x80369828u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050F10u>(ctx);
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -8856));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80369830:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80369850;
    }
}

loc_80369838:
{
    r3 = MemoryInline::FlatRead8((r29 + 96));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 96), static_cast<uint8_t>(r0));
    r0 = 0;
    r3 = r31;
    MemoryInline::FlatWrite32((r3 + 64), r0);
}

loc_80369850:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -8864));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8036985C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803699E4;
    }
}

loc_80369860:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 44));
}

loc_8036986C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(1820))) {
        goto loc_803698B4;
    }
}

loc_80369870:
{
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r4 = (r27 + r0);
    r3 = MemoryInline::FlatRead16((r4 + 106));
    r0 = (r3 + 9);
    MemoryInline::FlatWrite16((r4 + 106), static_cast<uint16_t>(r0));
    r3 = (r27 + r28);
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r4 = MemoryInline::FlatRead32((r5 + 44));
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = (r27 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 106));
    r0 = (r4 + r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r5 + 44), r0);
    goto loc_80369920;
}

loc_803698B4:
{
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r3 = (r27 + r0);
    r4 = MemoryInline::FlatRead16((r3 + 106));
}

loc_803698C8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80369920;
    }
}

loc_803698CC:
{
    r0 = (r4 + -9);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r3 + 106), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r3 = (r27 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 106));
}

loc_803698EC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(32768))) {
        goto loc_803698F8;
    }
}

loc_803698F0:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 106), static_cast<uint16_t>(r0));
}

loc_803698F8:
{
    r3 = (r27 + r28);
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r4 = MemoryInline::FlatRead32((r5 + 44));
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r3 = (r27 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 106));
    r0 = (r4 + r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r5 + 44), r0);
}

loc_80369920:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 48));
}

loc_8036992C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(1820))) {
        goto loc_80369974;
    }
}

loc_80369930:
{
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r4 = (r27 + r0);
    r3 = MemoryInline::FlatRead16((r4 + 110));
    r0 = (r3 + 9);
    MemoryInline::FlatWrite16((r4 + 110), static_cast<uint16_t>(r0));
    r3 = (r27 + r28);
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r4 = MemoryInline::FlatRead32((r5 + 48));
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & -2);
    r3 = (r27 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 110));
    r0 = (r4 + r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r5 + 48), r0);
    goto loc_80369D98;
}

loc_80369974:
{
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_9 & -2);
    r3 = (r27 + r0);
    r4 = MemoryInline::FlatRead16((r3 + 110));
}

loc_80369988:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80369D98;
    }
}

loc_8036998C:
{
    r0 = (r4 + -9);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r3 + 110), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & -2);
    r3 = (r27 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 110));
}

loc_803699AC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(32768))) {
        goto loc_803699B8;
    }
}

loc_803699B0:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 110), static_cast<uint16_t>(r0));
}

loc_803699B8:
{
    r3 = (r27 + r28);
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r4 = MemoryInline::FlatRead32((r5 + 48));
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_11 & -2);
    r3 = (r27 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 110));
    r0 = (r4 + r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r5 + 48), r0);
    goto loc_80369D98;
}

loc_803699E4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -8860));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803699EC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80369B84;
    }
}

loc_803699F0:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 44));
}

loc_803699FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80369A08;
    }
}

loc_80369A00:
{
}

loc_80369A04:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(63716))) {
        goto loc_80369A4C;
    }
}

loc_80369A08:
{
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_15 & -2);
    r4 = (r27 + r0);
    r3 = MemoryInline::FlatRead16((r4 + 106));
    r0 = (r3 + 9);
    MemoryInline::FlatWrite16((r4 + 106), static_cast<uint16_t>(r0));
    r3 = (r27 + r28);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_16 & -2);
    r3 = (r27 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 106));
    r0 = MemoryInline::FlatRead32((r4 + 44));
    r0 = (r0 - r3);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r4 + 44), r0);
    goto loc_80369AB8;
}

loc_80369A4C:
{
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_12 & -2);
    r3 = (r27 + r0);
    r4 = MemoryInline::FlatRead16((r3 + 106));
}

loc_80369A60:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80369AB8;
    }
}

loc_80369A64:
{
    r0 = (r4 + -9);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r3 + 106), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_13 & -2);
    r3 = (r27 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 106));
}

loc_80369A84:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(32768))) {
        goto loc_80369A90;
    }
}

loc_80369A88:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 106), static_cast<uint16_t>(r0));
}

loc_80369A90:
{
    r3 = (r27 + r28);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_14 & -2);
    r3 = (r27 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 106));
    r0 = MemoryInline::FlatRead32((r4 + 44));
    r0 = (r0 - r3);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r4 + 44), r0);
}

loc_80369AB8:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 48));
}

loc_80369AC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80369AD0;
    }
}

loc_80369AC8:
{
}

loc_80369ACC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(63716))) {
        goto loc_80369B14;
    }
}

loc_80369AD0:
{
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_21 & -2);
    r4 = (r27 + r0);
    r3 = MemoryInline::FlatRead16((r4 + 110));
    r0 = (r3 + 9);
    MemoryInline::FlatWrite16((r4 + 110), static_cast<uint16_t>(r0));
    r3 = (r27 + r28);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_22 & -2);
    r3 = (r27 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 110));
    r0 = MemoryInline::FlatRead32((r4 + 48));
    r0 = (r0 - r3);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r4 + 48), r0);
    goto loc_80369D98;
}

loc_80369B14:
{
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_18 & -2);
    r3 = (r27 + r0);
    r4 = MemoryInline::FlatRead16((r3 + 110));
}

loc_80369B28:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80369D98;
    }
}

loc_80369B2C:
{
    r0 = (r4 + -9);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r3 + 110), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_19 & -2);
    r3 = (r27 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 110));
}

loc_80369B4C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(32768))) {
        goto loc_80369B58;
    }
}

loc_80369B50:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 110), static_cast<uint16_t>(r0));
}

loc_80369B58:
{
    r3 = (r27 + r28);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_20 & -2);
    r3 = (r27 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 110));
    r0 = MemoryInline::FlatRead32((r4 + 48));
    r0 = (r0 - r3);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r4 + 48), r0);
    goto loc_80369D98;
}

loc_80369B84:
{
    r4 = (r27 + r28);
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 44), r0);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 48), r0);
    goto loc_80369D98;
}

loc_80369BA0:
{
    r28_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r28 = (r28_rot_1 & -4);
    r31 = (r27 + r28);
    r3 = MemoryInline::FlatRead32((r31 + 64));
    r3 = MH3_TickLoad(r3, 2151062440);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 64), r0);
    r3 = (r1 + 44);
    r4 = (r25 & 255);
    r0 = MemoryInline::FlatRead8((r29 + 53));
    r0 = (r4 + r0);
    r5 = (r0 * 12);
    r4 = 0x805F0000u;
    r0 = (r4 + -6544);
    r4 = (r0 + r5);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_8005001C_92C6 = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_92C6;
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
    r30 = r31;
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r3 = (r3 + 4);
    r4 = (r1 + 44);
    ctx->lr = 0x80369BECu;
    if constexpr (KnownRegArgsCpuCall<0x80050AF4u>(&func_80050AF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_80050AF4_961F = func_80050AF4_ra38_1e0_18_0(ctx, r3, r4, r5, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80050AF4_961F);
        r4 = static_cast<uint32_t>(regargs_result_80050AF4_961F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80050AF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r25 = r3;
    r3 = (r1 + 56);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -9056));
    f2.d = f1.d;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -8976));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 56);
    r4 = r25;
    ctx->lr = 0x80369C10u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    r3 = (r1 + 8);
    r4 = (r1 + 56);
    r0 = MemoryInline::FlatRead32((r31 + 64));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -9008));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 72));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9052));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -8876));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r3 = (r3 + 4);
    r4 = (r1 + 8);
    ctx->lr = 0x80369C54u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r0 = MemoryInline::FlatRead32((r31 + 64));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -9008));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 80));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9052));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -8876));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9056));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80369C84:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80369CA4;
    }
}

loc_80369C8C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 96), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 4));
    MemoryInline::FlatWrite32((r3 + 48), r0);
    MemoryInline::FlatWrite32((r31 + 64), r0);
    r26 = 1;
}

loc_80369CA4:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -8864));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80369CB0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80369D14;
    }
}

loc_80369CB4:
{
    r5 = (r27 + r28);
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r3 = MemoryInline::FlatRead32((r4 + 44));
    r0 = (r3 + -91);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r4 + 44), r0);
    r3 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 44));
}

loc_80369CD8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(32768))) {
        goto loc_80369CE4;
    }
}

loc_80369CDC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 44), r0);
}

loc_80369CE4:
{
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r3 = MemoryInline::FlatRead32((r4 + 48));
    r0 = (r3 + -91);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r4 + 48), r0);
    r3 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 48));
}

loc_80369D04:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(32768))) {
        goto loc_80369D98;
    }
}

loc_80369D08:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 48), r0);
    goto loc_80369D98;
}

loc_80369D14:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -8860));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80369D1C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80369D80;
    }
}

loc_80369D20:
{
    r5 = (r27 + r28);
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r3 = MemoryInline::FlatRead32((r4 + 44));
    r0 = (r3 + 91);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r4 + 44), r0);
    r3 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 44));
}

loc_80369D44:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(32768))) {
        goto loc_80369D50;
    }
}

loc_80369D48:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 44), r0);
}

loc_80369D50:
{
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r3 = MemoryInline::FlatRead32((r4 + 48));
    r0 = (r3 + 91);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r4 + 48), r0);
    r3 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 48));
}

loc_80369D70:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(32768))) {
        goto loc_80369D98;
    }
}

loc_80369D74:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 48), r0);
    goto loc_80369D98;
}

loc_80369D80:
{
    r4 = (r27 + r28);
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 44), r0);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 48), r0);
}

loc_80369D98:
{
    r3 = r26;
    r11 = (r1 + 128);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803692F0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803692F0_ra38_1ee_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FEF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803692F0 func_803692F0 preserves=true fpr_mask=0x00000000
