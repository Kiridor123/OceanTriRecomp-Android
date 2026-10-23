#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005B780(CpuContext* ctx);
extern "C" uint32_t func_8005B780_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8005B7EC(CpuContext* ctx);
extern "C" uint32_t func_8005B7EC_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8005BA04(CpuContext* ctx);
extern "C" uint64_t func_8005BA04_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80457360(CpuContext* ctx);
extern "C" uint32_t func_80457360_ra8_1e_8_0(CpuContext*, uint32_t, double, double, double, double);

extern "C" void func_8098A800(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
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
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r19_addr_0 = 0;
    uint32_t r19_addr_1 = 0;
    uint32_t r19_addr_2 = 0;
    uint32_t r19_addr_3 = 0;
    uint32_t r19_addr_4 = 0;
    uint32_t r20_addr_0 = 0;
    uint32_t r20_addr_1 = 0;
    uint32_t r24_addr_0 = 0;
    uint32_t r24_addr_1 = 0;
    uint32_t r24_addr_2 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r30_addr_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t stackword15 = 0;
    uint32_t stackword16 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
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
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t cr = ctx->cr;

    goto loc_8098A800;

loc_8098A800:
{
    MemoryAlias::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryAlias::FlatWriteRam32((r1 + 148), r0);
    r11 = (r1 + 144);
    // inline leaf 0x80457468 (14 guest instruction(s))
    guest_range_0 = MemoryAlias::ResolveRangeHost((r11 + -52), 0, 52u, false, true);
    // end of inlined leaf 0x80457468
    r19 = 0x809D0000u;
    r3 = MemoryAlias::FlatRead32((r19 + 13672));
    r3 = (r3 + 4124);
    // inline leaf 0x80040354 (7 guest instruction(s))
    r4 = 0x80660000u;
    r4 = (r4 + -19268);
    f0.d = MemoryAlias::FlatReadFloat32((r4 + 4));
    MemoryAlias::FlatWriteFloat32(r3, f0.d);
    f0.d = MemoryAlias::FlatReadFloat32((r4 + 8));
    MemoryAlias::FlatWriteFloat32((r3 + 4), f0.d);
    // end of inlined leaf 0x80040354
    r3 = MemoryAlias::FlatRead32((r19 + 13672));
    f1.d = MemoryAlias::FlatReadFloat32((r3 + 4124));
    r3 = 0x80990000u;
    f0.d = MemoryAlias::FlatReadFloat32((r3 + 14704));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r3 = 0x80990000u;
    f0.d = MemoryAlias::FlatReadFloat32((r3 + 14652));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryAlias::FlatWriteRamFloat64((r1 + 72), f0.d);
    r31 = fctiwzword0;
    ctx->lr = 0x8098A854u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80984A8Cu>(ctx);
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
    cr = ctx->cr;
    r3 = 0x809A0000u;
    r20 = (r3 + -6888);
    r21 = 0;
    r3 = 0x809A0000u;
    r19 = (r3 + -1296);
}

loc_8098A868:
{
    r0 = MemoryAlias::FlatRead8(r20);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r19_addr_2 = (r19 + r0);
    r4 = MemoryAlias::FlatRead32(r19_addr_2);
    r0 = MemoryAlias::FlatRead16((r20 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r4 = (r4 + r0);
    r3 = r20;
    r5 = MemoryAlias::FlatRead32((r20 + 4));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r7 = 0;
    ctx->lr = 0x8098A898u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80984E10u>(ctx);
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
    cr = ctx->cr;
    r21 = (r21 + 1);
    r20 = (r20 + 20);
}

loc_8098A8A4:
{
    if ((static_cast<int32_t>(r21) < static_cast<int32_t>(4))) {
        goto loc_8098A868;
    }
}

loc_8098A8A8:
{
    r3 = 0x809D0000u;
    r4 = MemoryAlias::FlatRead32((r3 + 13672));
    r0 = MemoryAlias::FlatRead8((r4 + 4145));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_5 & 1);
    r3 = (0 - r0);
    r0 = 100;
    r23 = (r0 & ~r3);
    r3 = -90177536;
    r22 = (r3 + 5120);
    r0 = MemoryAlias::FlatRead32((r4 + 4172));
    r3 = 0x80990000u;
    f1.d = MemoryAlias::FlatReadFloat64((r3 + 14688));
    stackword15 = r0;
    MemoryAlias::FlatWriteRam32((r1 + 76), r0);
    r0 = 1127219200;
    stackword16 = r0;
    MemoryAlias::FlatWriteRam32((r1 + 72), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword16), static_cast<uint32_t>(stackword15));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = 0x80990000u;
    f0.d = MemoryAlias::FlatReadFloat32((r3 + 14712));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    r3 = 0x80990000u;
    f0.d = MemoryAlias::FlatReadFloat32((r3 + 14716));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80985644u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = 0x80990000u;
    f0.d = MemoryAlias::FlatReadFloat32((r3 + 14708));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80457360_2583 = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_2583;
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
    r0 = (r3 + 60);
    r0 = (r0 & 255);
    r22 = (r22 | r0);
    r3 = 0x809A0000u;
    r20 = (r3 + -6808);
    r21 = 0;
    r3 = 0x809A0000u;
    r19 = (r3 + -1296);
}

loc_8098A93C:
{
    r3 = (r1 + 8);
    r4 = r20;
    // inline leaf 0x8098545C (21 guest instruction(s))
    guest_range_1 = MemoryAlias::ResolveRangeHost(r4, 0, 18u, true, false);
    r0 = MemoryAlias::ReadResolved8(guest_range_1, 0u, r4);
    guest_range_2 = MemoryAlias::ResolveRangeHost(r3, 0, 18u, false, true);
    MemoryAlias::WriteResolved8(guest_range_2, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_1, 1u, (r4 + 1));
    MemoryAlias::WriteResolved8(guest_range_2, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_1, 2u, (r4 + 2));
    MemoryAlias::WriteResolved8(guest_range_2, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_1, 3u, (r4 + 3));
    MemoryAlias::WriteResolved8(guest_range_2, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved32(guest_range_1, 4u, (r4 + 4));
    MemoryAlias::WriteResolved32(guest_range_2, 4u, (r3 + 4), r0);
    r0 = MemoryAlias::ReadResolved16(guest_range_1, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::WriteResolved16(guest_range_2, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::ReadResolved16(guest_range_1, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::WriteResolved16(guest_range_2, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::ReadResolved16(guest_range_1, 12u, (r4 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::WriteResolved16(guest_range_2, 12u, (r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::ReadResolved16(guest_range_1, 14u, (r4 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::WriteResolved16(guest_range_2, 14u, (r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::ReadResolved16(guest_range_1, 16u, (r4 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::WriteResolved16(guest_range_2, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8098545C
    r0 = MemoryAlias::FlatRead16((r1 + 20));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r23);
    MemoryAlias::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead8((r1 + 8));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r19_addr_4 = (r19 + r0);
    r4 = MemoryAlias::FlatRead32(r19_addr_4);
    r0 = MemoryAlias::FlatRead16((r1 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_9 & -2);
    r4 = (r4 + r0);
    r3 = (r1 + 8);
    r5 = r22;
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r7 = 0;
    ctx->lr = 0x8098A984u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80984E10u>(ctx);
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
    cr = ctx->cr;
    r21 = (r21 + 1);
    r20 = (r20 + 20);
}

loc_8098A990:
{
    if ((static_cast<int32_t>(r21) < static_cast<int32_t>(3))) {
        goto loc_8098A93C;
    }
}

loc_8098A994:
{
    r24 = 150;
    r25 = 0;
    r21 = 1013710848;
    r3 = 0x809A0000u;
    r30 = (r3 + -1296);
    r19 = 0x809D0000u;
    r20 = 137166848;
    r28 = -1768488960;
    r27 = 0x809A0000u;
    r29 = 0x809A0000u;
}

loc_8098A9BC:
{
    r26 = (r27 + -6748);
    r23 = 0;
}

loc_8098A9C4:
{
    r3 = (r1 + 8);
    r4 = r26;
    // inline leaf 0x8098545C (21 guest instruction(s))
    guest_range_5 = MemoryAlias::ResolveRangeHost(r4, 0, 18u, true, false);
    r0 = MemoryAlias::ReadResolved8(guest_range_5, 0u, r4);
    MemoryAlias::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_5, 1u, (r4 + 1));
    MemoryAlias::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_5, 2u, (r4 + 2));
    MemoryAlias::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_5, 3u, (r4 + 3));
    MemoryAlias::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved32(guest_range_5, 4u, (r4 + 4));
    MemoryAlias::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryAlias::ReadResolved16(guest_range_5, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::ReadResolved16(guest_range_5, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::ReadResolved16(guest_range_5, 12u, (r4 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWriteRam16((r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::ReadResolved16(guest_range_5, 14u, (r4 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWriteRam16((r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::ReadResolved16(guest_range_5, 16u, (r4 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWriteRam16((r3 + 16), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8098545C
    r3 = MemoryAlias::FlatRead16((r1 + 18));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 20);
    MemoryAlias::FlatWriteRam16((r1 + 18), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead16((r1 + 20));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r24);
    MemoryAlias::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead8((r1 + 8));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r30_addr_3 = (r30 + r0);
    r4 = MemoryAlias::FlatRead32(r30_addr_3);
    r0 = MemoryAlias::FlatRead16((r1 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_14 & -2);
    r4 = (r4 + r0);
    r3 = (r1 + 8);
    r5 = MemoryAlias::FlatRead32((r19 + 13672));
    r0 = MemoryAlias::FlatRead8((r5 + 4145));
}

loc_8098AA14:
{
    r5 = (r28 + -26881);
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(r0))) {
        goto loc_8098AA20;
    }
}

loc_8098AA1C:
{
    r5 = -1;
}

loc_8098AA20:
{
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r7 = 0;
    ctx->lr = 0x8098AA2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80984E10u>(ctx);
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
    cr = ctx->cr;
    r23 = (r23 + 1);
    r26 = (r26 + 20);
}

loc_8098AA38:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(7))) {
        goto loc_8098A9C4;
    }
}

loc_8098AA3C:
{
    r26 = (r29 + -6608);
}

loc_8098AA44:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(0))) {
        goto loc_8098AA58;
    }
}

loc_8098AA48:
{
    r3 = MemoryAlias::FlatRead32((r19 + 13672));
    r22 = MemoryAlias::FlatRead8((r3 + 4160));
    r22 = (static_cast<int32_t>(static_cast<int8_t>(r22)));
    goto loc_8098AA64;
}

loc_8098AA58:
{
    r3 = MemoryAlias::FlatRead32((r19 + 13672));
    r22 = MemoryAlias::FlatRead8((r3 + 4162));
    r22 = (static_cast<int32_t>(static_cast<int8_t>(r22)));
}

loc_8098AA64:
{
    r23 = 0;
    goto loc_8098AADC;
}

loc_8098AA6C:
{
    r3 = (r1 + 8);
    r4 = r26;
    // inline leaf 0x8098545C (21 guest instruction(s))
    guest_range_6 = MemoryAlias::ResolveRangeHost(r4, 0, 18u, true, false);
    r0 = MemoryAlias::ReadResolved8(guest_range_6, 0u, r4);
    MemoryAlias::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_6, 1u, (r4 + 1));
    MemoryAlias::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_6, 2u, (r4 + 2));
    MemoryAlias::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_6, 3u, (r4 + 3));
    MemoryAlias::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved32(guest_range_6, 4u, (r4 + 4));
    MemoryAlias::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryAlias::ReadResolved16(guest_range_6, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::ReadResolved16(guest_range_6, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::ReadResolved16(guest_range_6, 12u, (r4 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWriteRam16((r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::ReadResolved16(guest_range_6, 14u, (r4 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWriteRam16((r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::ReadResolved16(guest_range_6, 16u, (r4 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWriteRam16((r3 + 16), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8098545C
    r3 = MemoryAlias::FlatRead16((r1 + 18));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 20);
    MemoryAlias::FlatWriteRam16((r1 + 18), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead16((r1 + 20));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r24);
    MemoryAlias::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead8((r1 + 8));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_16 & -4);
    r30_addr_5 = (r30 + r0);
    r4 = MemoryAlias::FlatRead32(r30_addr_5);
    r0 = MemoryAlias::FlatRead16((r1 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_17 & -4);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_18 & -2);
    r4 = (r4 + r0);
    r3 = (r1 + 8);
    r5 = MemoryAlias::FlatRead32((r19 + 13672));
    r0 = MemoryAlias::FlatRead8((r5 + 4145));
}

loc_8098AABC:
{
    r5 = (r20 + 255);
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(r0))) {
        goto loc_8098AAC8;
    }
}

loc_8098AAC4:
{
    r5 = (r21 + 3583);
}

loc_8098AAC8:
{
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r7 = 0;
    ctx->lr = 0x8098AAD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80984E10u>(ctx);
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
    cr = ctx->cr;
    r23 = (r23 + 1);
    r26 = (r26 + 20);
}

loc_8098AADC:
{
}

loc_8098AAE0:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(r22))) {
        goto loc_8098AA6C;
    }
}

loc_8098AAE4:
{
    r24 = (r24 + 100);
    r25 = (r25 + 1);
}

loc_8098AAF0:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(2))) {
        goto loc_8098A9BC;
    }
}

loc_8098AAF4:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryAlias::FlatRead8((r3 + 9));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_19 & -4);
    r3 = 0x809A0000u;
    r3 = (r3 + 30792);
    r3_addr_0 = (r3 + r0);
    r23 = MemoryAlias::FlatRead32(r3_addr_0);
    r3 = 0x809A0000u;
    r3 = (r3 + -6808);
    r22 = MemoryAlias::FlatRead16((r3 + 10));
    r22 = (r22 << 16);
    r22 = (static_cast<int32_t>(r22) >> 16);
    r29 = MemoryAlias::FlatRead16((r3 + 12));
    r29 = (r29 << 16);
    r29 = (static_cast<int32_t>(r29) >> 16);
    r3 = 20;
    r4 = 20;
    // inline leaf 0x8005B714 (9 guest instruction(s))
}

loc_inl5_0x8005B714:
{
    r5 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl5_0x8005B71C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x8005B720:
{
    r5 = (r5 + 65536);
    MemoryAlias::FlatWrite32((r5 + 20576), r3);
    r3 = MemoryAlias::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryAlias::FlatWrite32((r3 + 20580), r4);
    goto loc_inl5_cont_8005B714;
}

loc_inl5_return:
{
}

loc_inl5_cont_8005B714:
{
    // end of inlined leaf 0x8005B714
    r20 = 0;
    r3 = (r22 + r31);
    r0 = (r3 + 40);
    r28 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r19 = (r28 + 2);
    r25 = -524288;
    r27 = 538968064;
    r26 = 0x809D0000u;
    r24 = -1314914304;
}

loc_8098AB50:
{
    r0 = (r29 + 18);
    r21 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = r19;
    r4 = (r21 + 2);
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl6_0x8005B780:
{
    r5 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl6_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryAlias::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryAlias::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryAlias::FlatWrite32((r3 + 20588), r4);
    goto loc_inl6_cont_8005B780;
}

loc_inl6_return:
{
}

loc_inl6_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    r3 = (r27 + 8447);
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl7_0x8005B7EC:
{
    r4 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl7_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl7_return;
    }
}

loc_inl7_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryAlias::FlatWrite32((r4 + 20600), r3);
    goto loc_inl7_cont_8005B7EC;
}

loc_inl7_return:
{
}

loc_inl7_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    r3 = MemoryAlias::FlatRead32(r23);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098AB78u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8005BA04_6BAD = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_6BAD);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_6BAD >> 32);
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
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005BA04u>(ctx);
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
        cr = ctx->cr;
    }
    r3 = r28;
    r4 = r21;
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl8_0x8005B780:
{
    r5 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl8_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl8_return;
    }
}

loc_inl8_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryAlias::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryAlias::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryAlias::FlatWrite32((r3 + 20588), r4);
    goto loc_inl8_cont_8005B780;
}

loc_inl8_return:
{
}

loc_inl8_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    r3 = MemoryAlias::FlatRead32((r26 + 13672));
    r0 = MemoryAlias::FlatRead8((r3 + 4145));
}

loc_8098AB90:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(r0))) {
        goto loc_8098ABA0;
    }
}

loc_8098AB94:
{
    r3 = (r25 + -11777);
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl9_0x8005B7EC:
{
    r4 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl9_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl9_return;
    }
}

loc_inl9_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryAlias::FlatWrite32((r4 + 20600), r3);
    goto loc_inl9_cont_8005B7EC;
}

loc_inl9_return:
{
}

loc_inl9_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    goto loc_8098ABA8;
}

loc_8098ABA0:
{
    r3 = (r24 + -32513);
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl10_0x8005B7EC:
{
    r4 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl10_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl10_return;
    }
}

loc_inl10_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryAlias::FlatWrite32((r4 + 20600), r3);
    goto loc_inl10_cont_8005B7EC;
}

loc_inl10_return:
{
}

loc_inl10_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
}

loc_8098ABA8:
{
    r3 = MemoryAlias::FlatRead32(r23);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098ABB4u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8005BA04_7BA0 = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_7BA0);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_7BA0 >> 32);
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
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005BA04u>(ctx);
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
        cr = ctx->cr;
    }
    r29 = (r29 + 100);
    r23 = (r23 + 4);
    r20 = (r20 + 1);
}

loc_8098ABC4:
{
    if ((static_cast<int32_t>(r20) < static_cast<int32_t>(2))) {
        goto loc_8098AB50;
    }
}

loc_8098ABC8:
{
    r3 = 0x809A0000u;
    r3 = (r3 + -6808);
    r23 = MemoryAlias::FlatRead16((r3 + 12));
    r23 = (r23 << 16);
    r23 = (static_cast<int32_t>(r23) >> 16);
    r26 = 0;
    r3 = 0x809A0000u;
    r29 = (r3 + -1296);
    r28 = 0x809D0000u;
    r25 = -1768488960;
    r30 = 0x809A0000u;
}

loc_8098ABEC:
{
    r27 = (r30 + -6464);
    r24 = 0;
}

loc_8098ABF4:
{
    r3 = (r1 + 8);
    r4 = r27;
    // inline leaf 0x8098545C (21 guest instruction(s))
    guest_range_7 = MemoryAlias::ResolveRangeHost(r4, 0, 18u, true, false);
    r0 = MemoryAlias::ReadResolved8(guest_range_7, 0u, r4);
    MemoryAlias::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_7, 1u, (r4 + 1));
    MemoryAlias::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_7, 2u, (r4 + 2));
    MemoryAlias::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_7, 3u, (r4 + 3));
    MemoryAlias::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved32(guest_range_7, 4u, (r4 + 4));
    MemoryAlias::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryAlias::ReadResolved16(guest_range_7, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::ReadResolved16(guest_range_7, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::ReadResolved16(guest_range_7, 12u, (r4 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWriteRam16((r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::ReadResolved16(guest_range_7, 14u, (r4 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWriteRam16((r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::ReadResolved16(guest_range_7, 16u, (r4 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWriteRam16((r3 + 16), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8098545C
    r0 = MemoryAlias::FlatRead16((r1 + 18));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r22);
    MemoryAlias::FlatWriteRam16((r1 + 18), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead16((r1 + 20));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r23);
    MemoryAlias::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead8((r1 + 8));
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_22 & -4);
    r29_addr_3 = (r29 + r0);
    r4 = MemoryAlias::FlatRead32(r29_addr_3);
    r0 = MemoryAlias::FlatRead16((r1 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_23 & -4);
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_24 & -2);
    r4 = (r4 + r0);
    r3 = (r1 + 8);
    r5 = MemoryAlias::FlatRead32((r28 + 13672));
    r0 = MemoryAlias::FlatRead8((r5 + 4145));
}

loc_8098AC44:
{
    r5 = (r25 + -26881);
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(r0))) {
        goto loc_8098AC50;
    }
}

loc_8098AC4C:
{
    r5 = -1;
}

loc_8098AC50:
{
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r7 = 0;
    ctx->lr = 0x8098AC5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80984E10u>(ctx);
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
    cr = ctx->cr;
    r24 = (r24 + 1);
    r27 = (r27 + 20);
}

loc_8098AC68:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(2))) {
        goto loc_8098ABF4;
    }
}

loc_8098AC6C:
{
    r23 = (r23 + 100);
    r26 = (r26 + 1);
}

loc_8098AC78:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(2))) {
        goto loc_8098ABEC;
    }
}

loc_8098AC7C:
{
    r3 = 0x809A0000u;
    r3 = (r3 + -6808);
    r23 = MemoryAlias::FlatRead16((r3 + 12));
    r23 = (r23 << 16);
    r23 = (static_cast<int32_t>(r23) >> 16);
    r3 = 0x809D0000u;
    r3 = MemoryAlias::FlatRead32((r3 + 13672));
    r0 = MemoryAlias::FlatRead8((r3 + 4145));
}

loc_8098AC98:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8098ACA4;
    }
}

loc_8098AC9C:
{
    r0 = (r23 + 100);
    r23 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8098ACA4:
{
    r3 = 0x809A0000u;
    r19 = (r3 + -6424);
    r20 = 0;
    r3 = 0x809A0000u;
    r24 = (r3 + -1296);
}

loc_8098ACB8:
{
    r3 = (r1 + 8);
    r4 = r19;
    // inline leaf 0x8098545C (21 guest instruction(s))
    guest_range_3 = MemoryAlias::ResolveRangeHost(r4, 0, 18u, true, false);
    r0 = MemoryAlias::ReadResolved8(guest_range_3, 0u, r4);
    guest_range_4 = MemoryAlias::ResolveRangeHost(r3, 0, 18u, false, true);
    MemoryAlias::WriteResolved8(guest_range_4, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_3, 1u, (r4 + 1));
    MemoryAlias::WriteResolved8(guest_range_4, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_3, 2u, (r4 + 2));
    MemoryAlias::WriteResolved8(guest_range_4, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_3, 3u, (r4 + 3));
    MemoryAlias::WriteResolved8(guest_range_4, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved32(guest_range_3, 4u, (r4 + 4));
    MemoryAlias::WriteResolved32(guest_range_4, 4u, (r3 + 4), r0);
    r0 = MemoryAlias::ReadResolved16(guest_range_3, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::WriteResolved16(guest_range_4, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::ReadResolved16(guest_range_3, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::WriteResolved16(guest_range_4, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::ReadResolved16(guest_range_3, 12u, (r4 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::WriteResolved16(guest_range_4, 12u, (r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::ReadResolved16(guest_range_3, 14u, (r4 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::WriteResolved16(guest_range_4, 14u, (r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::ReadResolved16(guest_range_3, 16u, (r4 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::WriteResolved16(guest_range_4, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8098545C
    r0 = MemoryAlias::FlatRead16((r1 + 18));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r22);
    MemoryAlias::FlatWriteRam16((r1 + 18), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead16((r1 + 20));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r23);
    MemoryAlias::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead8((r1 + 8));
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_26 & -4);
    r24_addr_2 = (r24 + r0);
    r4 = MemoryAlias::FlatRead32(r24_addr_2);
    r0 = MemoryAlias::FlatRead16((r1 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_27 & -4);
    r0_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_28 & -2);
    r4 = (r4 + r0);
    r3 = (r1 + 8);
    r5 = -1;
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r7 = 0;
    ctx->lr = 0x8098AD0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80984E10u>(ctx);
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
    cr = ctx->cr;
    r20 = (r20 + 1);
    r19 = (r19 + 20);
}

loc_8098AD18:
{
    if ((static_cast<int32_t>(r20) < static_cast<int32_t>(2))) {
        goto loc_8098ACB8;
    }
}

loc_8098AD1C:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryAlias::FlatRead8((r3 + 9));
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_29 & -4);
    r3 = 0x809A0000u;
    r3 = (r3 + 30696);
    r3_addr_1 = (r3 + r0);
    r20 = MemoryAlias::FlatRead32(r3_addr_1);
    r3 = 20;
    r4 = 20;
    // inline leaf 0x8005B714 (9 guest instruction(s))
}

loc_inl13_0x8005B714:
{
    r5 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl13_0x8005B71C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl13_return;
    }
}

loc_inl13_0x8005B720:
{
    r5 = (r5 + 65536);
    MemoryAlias::FlatWrite32((r5 + 20576), r3);
    r3 = MemoryAlias::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryAlias::FlatWrite32((r3 + 20580), r4);
    goto loc_inl13_cont_8005B714;
}

loc_inl13_return:
{
}

loc_inl13_cont_8005B714:
{
    // end of inlined leaf 0x8005B714
    r19 = (r31 + 94);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r19)));
    r3 = (r3 + 2);
    r4 = 390;
    if constexpr (KnownRegArgsCpuCall<0x8005B780u>(&func_8005B780)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8005B780_AD84 = func_8005B780_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8005B780_AD84;
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005B780u>(ctx);
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = 538968064;
    r3 = (r3 + 8447);
    if constexpr (KnownRegArgsCpuCall<0x8005B7ECu>(&func_8005B7EC)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8005B7EC_AFF6 = func_8005B7EC_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8005B7EC_AFF6;
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005B7ECu>(ctx);
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r22 = 0x809D0000u;
    r3 = MemoryAlias::FlatRead32((r22 + 13672));
    r0 = MemoryAlias::FlatRead8((r3 + 4145));
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_30 & -4);
    r20_addr_0 = (r20 + r0);
    r3 = MemoryAlias::FlatRead32(r20_addr_0);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098AD80u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8005BA04_B455 = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_B455);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_B455 >> 32);
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
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005BA04u>(ctx);
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
        cr = ctx->cr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r19)));
    r4 = 388;
    if constexpr (KnownRegArgsCpuCall<0x8005B780u>(&func_8005B780)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8005B780_BB31 = func_8005B780_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8005B780_BB31;
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005B780u>(ctx);
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = -1061093376;
    r3 = (r3 + -16129);
    if constexpr (KnownRegArgsCpuCall<0x8005B7ECu>(&func_8005B7EC)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8005B7EC_BDA7 = func_8005B7EC_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8005B7EC_BDA7;
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005B7ECu>(ctx);
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = MemoryAlias::FlatRead32((r22 + 13672));
    r0 = MemoryAlias::FlatRead8((r3 + 4145));
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_31 & -4);
    r20_addr_1 = (r20 + r0);
    r3 = MemoryAlias::FlatRead32(r20_addr_1);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098ADB0u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8005BA04_C1EE = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_C1EE);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_C1EE >> 32);
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
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005BA04u>(ctx);
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
        cr = ctx->cr;
    }
    r3 = 0;
    ctx->lr = 0x8098ADB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8098D4CCu>(ctx);
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
    cr = ctx->cr;
    r11 = (r1 + 144);
    r0 = MemoryAlias::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8098A800 func_8098A800 preserves=true fpr_mask=0x00000000
