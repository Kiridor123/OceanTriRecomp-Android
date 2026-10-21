#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004FEEC(CpuContext* ctx);
extern "C" uint64_t func_8004FEEC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8005B714(CpuContext* ctx);
extern "C" uint32_t func_8005B714_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8005B780(CpuContext* ctx);
extern "C" uint32_t func_8005B780_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8005B7EC(CpuContext* ctx);
extern "C" uint32_t func_8005B7EC_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8005B994(CpuContext* ctx);
extern "C" uint64_t func_8005B994_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8005BA04(CpuContext* ctx);
extern "C" uint64_t func_8005BA04_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802E0FC0(CpuContext* ctx);
extern "C" uint64_t func_802E0FC0_ra38_1fa_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8098CF70(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r24_addr_0 = 0;
    uint32_t r24_addr_1 = 0;
    uint32_t r24_addr_2 = 0;
    uint32_t r26_addr_0 = 0;
    uint32_t r26_addr_1 = 0;
    uint32_t r26_addr_2 = 0;
    uint32_t r26_addr_3 = 0;
    uint32_t r26_addr_4 = 0;
    uint32_t r26_addr_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
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

    MKW_GUEST_ENTER(0x8098CF70u);
    goto loc_8098CF70;

loc_8098CF70:
{
    MemoryAlias::FlatWriteRam32((r1 + -368), r1);
    r1 = (r1 + -368);
    r0 = ctx->lr;
    MemoryAlias::FlatWriteRam32((r1 + 372), r0);
    r11 = (r1 + 368);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryAlias::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r26 = 0x809D0000u;
    r3 = MemoryAlias::FlatRead32((r26 + 13672));
    r3 = (r3 + 4124);
    // inline leaf 0x80040354 (7 guest instruction(s))
    r4 = 0x80660000u;
    r4 = (r4 + -19268);
    f0.d = MemoryAlias::FlatReadFloat32((r4 + 4));
    MemoryAlias::FlatWriteFloat32(r3, f0.d);
    f0.d = MemoryAlias::FlatReadFloat32((r4 + 8));
    MemoryAlias::FlatWriteFloat32((r3 + 4), f0.d);
    // end of inlined leaf 0x80040354
    r3 = MemoryAlias::FlatRead32((r26 + 13672));
    f1.d = MemoryAlias::FlatReadFloat32((r3 + 4124));
    r3 = 0x80990000u;
    f0.d = MemoryAlias::FlatReadFloat32((r3 + 14704));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r3 = 0x80990000u;
    f0.d = MemoryAlias::FlatReadFloat32((r3 + 14652));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryAlias::FlatWriteRamFloat64((r1 + 328), f0.d);
    r29 = fctiwzword0;
    ctx->lr = 0x8098CFC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    r8 = ctx->gpr[8];
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
    r25 = (r3 + -9616);
    r27 = 0;
    r3 = 0x809A0000u;
    r26 = (r3 + -1296);
}

loc_8098CFD8:
{
    r0 = MemoryAlias::FlatRead8(r25);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r26_addr_2 = (r26 + r0);
    r4 = MemoryAlias::FlatRead32(r26_addr_2);
    r0 = MemoryAlias::FlatRead16((r25 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r4 = (r4 + r0);
    r3 = r25;
    r5 = MemoryAlias::FlatRead32((r25 + 4));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
    r7 = 0;
    ctx->lr = 0x8098D008u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    r8 = ctx->gpr[8];
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
    r27 = (r27 + 1);
    r25 = (r25 + 20);
}

loc_8098D014:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(4))) {
        goto loc_8098CFD8;
    }
}

loc_8098D018:
{
    r27 = 0x809D0000u;
    r3 = MemoryAlias::FlatRead32((r27 + 13672));
    r0 = MemoryAlias::FlatRead8(r3);
}

loc_8098D028:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(26))) {
        goto loc_8098D4B4;
    }
}

loc_8098D02C:
{
    r0 = MemoryAlias::FlatRead8((r3 + 1));
}

loc_8098D034:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8098D044;
    }
}

loc_8098D038:
{
}

loc_8098D03C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_8098D050;
    }
}

loc_8098D040:
{
    goto loc_8098D218;
}

loc_8098D044:
{
    r0 = MemoryAlias::FlatRead32((r3 + 4424));
}

loc_8098D04C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8098D4B4;
    }
}

loc_8098D050:
{
    r5 = 0x809A0000u;
    r0 = MemoryAlias::FlatRead8((r5 + -9756));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_19 & -4);
    r3 = 0x809A0000u;
    r3 = (r3 + -1296);
    r3_addr_3 = (r3 + r0);
    r4 = MemoryAlias::FlatRead32(r3_addr_3);
    r3 = (r5 + -9756);
    r0 = MemoryAlias::FlatRead16((r3 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_20 & -4);
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_21 & -2);
    r4 = (r4 + r0);
    r5 = MemoryAlias::FlatRead32((r3 + 4));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
    r7 = 0;
    ctx->lr = 0x8098D08Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    r8 = ctx->gpr[8];
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
    r3 = 0x809D0000u;
    r3 = MemoryAlias::FlatRead32((r3 + 13672));
    r0 = MemoryAlias::FlatRead8((r3 + 1));
}

loc_8098D09C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_8098D0AC;
    }
}

loc_8098D0A0:
{
    r0 = MemoryAlias::FlatRead8((r3 + 2));
}

loc_8098D0A8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8098D124;
    }
}

loc_8098D0AC:
{
    r3 = 0;
    r4 = 0;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E46ECu>(ctx);
    r3 = 4;
    r4 = 5;
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E45D8u>(ctx);
    r0 = (r29 + 480);
    r25 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = 7;
    // inline leaf 0x803BECD4 (12 guest instruction(s))
}

loc_inl2_0x803BECD4:
{
    r0 = (r3 & 255);
}

loc_inl2_0x803BECDC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20))) {
        goto loc_inl2_0x803BECF4;
    }
}

loc_inl2_0x803BECE0:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3_addr_4 = (r3 + r0);
    r0 = MemoryAlias::FlatRead8(r3_addr_4);
    r3 = (r0 ^ 1);
    goto loc_inl2_cont_803BECD4;
}

loc_inl2_0x803BECF4:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3_addr_5 = (r3 + r0);
    r3 = MemoryAlias::FlatRead8(r3_addr_5);
}

loc_inl2_cont_803BECD4:
{
    // end of inlined leaf 0x803BECD4
    r0 = (r3 & 255);
}

loc_8098D0E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8098D108;
    }
}

loc_8098D0E8:
{
    r3 = r25;
    r4 = 280;
    r5 = 32;
    r6 = -1;
    r7 = 2;
    r8 = 0;
    ctx->lr = 0x8098D104u;
    if constexpr (KnownRegArgsCpuCall<0x802E0FC0u>(&func_802E0FC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802E0FC0_301C = func_802E0FC0_ra38_1fa_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E0FC0_301C);
        r4 = static_cast<uint32_t>(regargs_result_802E0FC0_301C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802E0FC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
    goto loc_8098D124;
}

loc_8098D108:
{
    r3 = r25;
    r4 = 280;
    r5 = 32;
    r6 = -1;
    r7 = 0;
    r8 = 0;
    ctx->lr = 0x8098D124u;
    if constexpr (KnownRegArgsCpuCall<0x802E0FC0u>(&func_802E0FC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802E0FC0_37EF = func_802E0FC0_ra38_1fa_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E0FC0_37EF);
        r4 = static_cast<uint32_t>(regargs_result_802E0FC0_37EF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802E0FC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
}

loc_8098D124:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryAlias::FlatRead8((r3 + 9));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r3 = 0x809A0000u;
    r3 = (r3 + 30960);
    r3_addr_8 = (r3 + r4);
    r24 = MemoryAlias::FlatRead32(r3_addr_8);
    r26 = 0x809D0000u;
    r3 = MemoryAlias::FlatRead32((r26 + 13672));
    r0 = MemoryAlias::FlatRead8((r3 + 1));
}

loc_8098D150:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8098D1D0;
    }
}

loc_8098D154:
{
    r3 = MemoryAlias::FlatRead32((r3 + 4424));
}

loc_8098D15C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(200))) {
        goto loc_8098D4B4;
    }
}

loc_8098D160:
{
    r4 = (r1 + 72);
    r5 = 0;
    ctx->lr = 0x8098D16Cu;
    if constexpr (KnownRegArgsCpuCall<0x8004FEECu>(&func_8004FEEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8004FEEC_4276 = func_8004FEEC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8004FEEC_4276);
        r4 = static_cast<uint32_t>(regargs_result_8004FEEC_4276 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004FEECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
    r3 = 20;
    r4 = 20;
    // inline leaf 0x8005B714 (9 guest instruction(s))
}

loc_inl3_0x8005B714:
{
    r5 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl3_0x8005B71C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x8005B720:
{
    r5 = (r5 + 65536);
    MemoryAlias::FlatWrite32((r5 + 20576), r3);
    r3 = MemoryAlias::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryAlias::FlatWrite32((r3 + 20580), r4);
    goto loc_inl3_cont_8005B714;
}

loc_inl3_return:
{
}

loc_inl3_cont_8005B714:
{
    // end of inlined leaf 0x8005B714
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
    r27 = (r3 + 120);
    r3 = r27;
    r4 = 200;
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl4_0x8005B780:
{
    r5 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl4_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryAlias::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryAlias::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryAlias::FlatWrite32((r3 + 20588), r4);
    goto loc_inl4_cont_8005B780;
}

loc_inl4_return:
{
}

loc_inl4_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    r3 = 255;
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl5_0x8005B7EC:
{
    r4 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl5_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryAlias::FlatWrite32((r4 + 20600), r3);
    goto loc_inl5_cont_8005B7EC;
}

loc_inl5_return:
{
}

loc_inl5_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    r3 = (r1 + 72);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098D1A0u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8005BA04_519F = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_519F);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_519F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
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
        r8 = ctx->gpr[8];
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
    r3 = r27;
    r4 = 178;
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
    r3 = 255;
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
    r3 = MemoryAlias::FlatRead32((r26 + 13672));
    r0 = MemoryAlias::FlatRead8((r3 + 4429));
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_22 & -4);
    r24_addr_1 = (r24 + r0);
    r3 = MemoryAlias::FlatRead32(r24_addr_1);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098D1CCu;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8005BA04_5F0C = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_5F0C);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_5F0C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
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
        r8 = ctx->gpr[8];
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
    goto loc_8098D4B4;
}

loc_8098D1D0:
{
}

loc_8098D1D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8098D4B4;
    }
}

loc_8098D1D8:
{
    r3 = 0x809A0000u;
    r3 = (r3 + 31056);
    r3_addr_9 = (r3 + r4);
    r25 = MemoryAlias::FlatRead32(r3_addr_9);
    r3 = 20;
    r4 = 20;
    // inline leaf 0x8005B714 (9 guest instruction(s))
}

loc_inl8_0x8005B714:
{
    r5 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl8_0x8005B71C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl8_return;
    }
}

loc_inl8_0x8005B720:
{
    r5 = (r5 + 65536);
    MemoryAlias::FlatWrite32((r5 + 20576), r3);
    r3 = MemoryAlias::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryAlias::FlatWrite32((r3 + 20580), r4);
    goto loc_inl8_cont_8005B714;
}

loc_inl8_return:
{
}

loc_inl8_cont_8005B714:
{
    // end of inlined leaf 0x8005B714
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
    r3 = (r3 + 120);
    r4 = 200;
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl9_0x8005B780:
{
    r5 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl9_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl9_return;
    }
}

loc_inl9_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryAlias::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryAlias::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryAlias::FlatWrite32((r3 + 20588), r4);
    goto loc_inl9_cont_8005B780;
}

loc_inl9_return:
{
}

loc_inl9_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    r3 = 255;
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
    r3 = MemoryAlias::FlatRead32(r25);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098D214u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8005BA04_6F6C = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_6F6C);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_6F6C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
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
        r8 = ctx->gpr[8];
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
    goto loc_8098D4B4;
}

loc_8098D218:
{
    r3 = 0x809A0000u;
    r28 = (r3 + -9536);
    r30 = 0;
    r3 = 0x809A0000u;
    r26 = (r3 + -1296);
}

loc_8098D22C:
{
    r3 = (r1 + 8);
    r4 = r28;
    // inline leaf 0x8098545C (21 guest instruction(s))
    guest_range_3 = MemoryAlias::ResolveRangeHost(r4, 0, 18u, true, false);
    r0 = MemoryAlias::ReadResolved8(guest_range_3, 0u, r4);
    MemoryAlias::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_3, 1u, (r4 + 1));
    MemoryAlias::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_3, 2u, (r4 + 2));
    MemoryAlias::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_3, 3u, (r4 + 3));
    MemoryAlias::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved32(guest_range_3, 4u, (r4 + 4));
    MemoryAlias::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryAlias::ReadResolved16(guest_range_3, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::ReadResolved16(guest_range_3, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::ReadResolved16(guest_range_3, 12u, (r4 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWriteRam16((r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::ReadResolved16(guest_range_3, 14u, (r4 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWriteRam16((r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::ReadResolved16(guest_range_3, 16u, (r4 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWriteRam16((r3 + 16), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8098545C
    r0 = MemoryAlias::FlatRead8((r1 + 8));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r26_addr_4 = (r26 + r0);
    r4 = MemoryAlias::FlatRead32(r26_addr_4);
    r0 = MemoryAlias::FlatRead16((r1 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & -2);
    r4 = (r4 + r0);
    r3 = MemoryAlias::FlatRead32((r27 + 13672));
    r0 = MemoryAlias::FlatRead8((r3 + 4429));
}

loc_8098D260:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8098D270;
    }
}

loc_8098D264:
{
    r3 = MemoryAlias::FlatRead16((r1 + 18));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 320);
    MemoryAlias::FlatWriteRam16((r1 + 18), static_cast<uint16_t>(r0));
}

loc_8098D270:
{
    r3 = (r1 + 8);
    r5 = MemoryAlias::FlatRead32((r1 + 12));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
    r7 = 0;
    ctx->lr = 0x8098D284u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    r8 = ctx->gpr[8];
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
    r30 = (r30 + 1);
    r28 = (r28 + 20);
}

loc_8098D290:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(4))) {
        goto loc_8098D22C;
    }
}

loc_8098D294:
{
    r26 = 0x809D0000u;
    r4 = MemoryAlias::FlatRead32((r26 + 13672));
    r3 = (r1 + 8);
    r0 = MemoryAlias::FlatRead8((r4 + 4429));
    r4 = (r4 + r0);
    r0 = MemoryAlias::FlatRead8((r4 + 4430));
    r5 = (r0 * 20);
    r4 = 0x809A0000u;
    r0 = (r4 + -9456);
    r4 = (r0 + r5);
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
    r0 = MemoryAlias::FlatRead8((r1 + 8));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3 = 0x809A0000u;
    r3 = (r3 + -1296);
    r3_addr_1 = (r3 + r0);
    r4 = MemoryAlias::FlatRead32(r3_addr_1);
    r0 = MemoryAlias::FlatRead16((r1 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_11 & -2);
    r4 = (r4 + r0);
    r3 = MemoryAlias::FlatRead32((r26 + 13672));
    r0 = MemoryAlias::FlatRead8((r3 + 4429));
}

loc_8098D2F0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8098D300;
    }
}

loc_8098D2F4:
{
    r3 = MemoryAlias::FlatRead16((r1 + 18));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 320);
    MemoryAlias::FlatWriteRam16((r1 + 18), static_cast<uint16_t>(r0));
}

loc_8098D300:
{
    r3 = (r1 + 8);
    r5 = MemoryAlias::FlatRead32((r1 + 12));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
    r7 = 0;
    ctx->lr = 0x8098D314u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    r8 = ctx->gpr[8];
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
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryAlias::FlatRead8((r3 + 9));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r3 = 0x809A0000u;
    r3 = (r3 + 30936);
    r3_addr_2 = (r3 + r0);
    r28 = MemoryAlias::FlatRead32(r3_addr_2);
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
    r30 = 0;
    r3 = 0x809A0000u;
    r31 = (r3 + -9416);
    r26 = 0x809D0000u;
    r27 = -1061093376;
}

loc_8098D350:
{
    r3 = MemoryAlias::FlatRead32(r28);
    ctx->lr = 0x8098D358u;
    if constexpr (KnownRegArgsCpuCall<0x8005B994u>(&func_8005B994)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_8005B994_9C4A = func_8005B994_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005B994_9C4A);
        r4 = static_cast<uint32_t>(regargs_result_8005B994_9C4A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005B994u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    }
    r0 = (r3 * 10);
    r3 = (160 - r0);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_14 & 1);
    r0 = (r0 + r3);
    r0 = (static_cast<int32_t>(r0) >> 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = MemoryAlias::FlatRead16(r31);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r0 + r29);
    r0 = (r3 + r0);
    r25 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r24 = MemoryAlias::FlatRead16((r31 + 2));
    r24 = (r24 << 16);
    r24 = (static_cast<int32_t>(r24) >> 16);
    r3 = MemoryAlias::FlatRead32((r26 + 13672));
    r0 = MemoryAlias::FlatRead8((r3 + 4429));
}

loc_8098D390:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8098D39C;
    }
}

loc_8098D394:
{
    r0 = (r25 + 320);
    r25 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8098D39C:
{
    r3 = 255;
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl14_0x8005B7EC:
{
    r4 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl14_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl14_return;
    }
}

loc_inl14_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryAlias::FlatWrite32((r4 + 20600), r3);
    goto loc_inl14_cont_8005B7EC;
}

loc_inl14_return:
{
}

loc_inl14_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    r3 = (r25 + 2);
    r4 = (r24 + 2);
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl15_0x8005B780:
{
    r5 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl15_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl15_return;
    }
}

loc_inl15_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryAlias::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryAlias::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryAlias::FlatWrite32((r3 + 20588), r4);
    goto loc_inl15_cont_8005B780;
}

loc_inl15_return:
{
}

loc_inl15_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    r3 = MemoryAlias::FlatRead32(r28);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098D3BCu;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8005BA04_A9EF = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_A9EF);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_A9EF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
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
        r8 = ctx->gpr[8];
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
    r3 = (r27 + -16129);
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl16_0x8005B7EC:
{
    r4 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl16_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl16_return;
    }
}

loc_inl16_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryAlias::FlatWrite32((r4 + 20600), r3);
    goto loc_inl16_cont_8005B7EC;
}

loc_inl16_return:
{
}

loc_inl16_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    r3 = r25;
    r4 = r24;
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl17_0x8005B780:
{
    r5 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl17_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl17_return;
    }
}

loc_inl17_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryAlias::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryAlias::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryAlias::FlatWrite32((r3 + 20588), r4);
    goto loc_inl17_cont_8005B780;
}

loc_inl17_return:
{
}

loc_inl17_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    r3 = MemoryAlias::FlatRead32(r28);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098D3DCu;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8005BA04_B67F = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_B67F);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_B67F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
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
        r8 = ctx->gpr[8];
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
    r28 = (r28 + 4);
    r31 = (r31 + 4);
    r30 = (r30 + 1);
}

loc_8098D3EC:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(2))) {
        goto loc_8098D350;
    }
}

loc_8098D3F0:
{
    r3 = 20;
    r4 = 20;
    if constexpr (KnownRegArgsCpuCall<0x8005B714u>(&func_8005B714)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8005B714_BE08 = func_8005B714_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8005B714_BE08;
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005B714u>(ctx);
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r30 = (r29 + 94);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    r3 = (r3 + 2);
    r4 = 390;
    if constexpr (KnownRegArgsCpuCall<0x8005B780u>(&func_8005B780)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8005B780_C0AF = func_8005B780_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8005B780_C0AF;
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
        const auto regargs_result_8005B7EC_C30D = func_8005B7EC_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8005B7EC_C30D;
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
    r3 = 0x809D0000u;
    r7 = MemoryAlias::FlatRead32((r3 + 13672));
    r6 = MemoryAlias::FlatRead8((r7 + 4429));
    r3 = (r1 + 72);
}

loc_8098D430:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8098D454;
    }
}

loc_8098D434:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0 = MemoryAlias::FlatRead8((r4 + 9));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_15 & -4);
    r4 = 0x809A0000u;
    r4 = (r4 + 31008);
    r4_addr_1 = (r4 + r0);
    r5 = MemoryAlias::FlatRead32(r4_addr_1);
    goto loc_8098D470;
}

loc_8098D454:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0 = MemoryAlias::FlatRead8((r4 + 9));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_16 & -4);
    r4 = 0x809A0000u;
    r4 = (r4 + 31032);
    r4_addr_2 = (r4 + r0);
    r5 = MemoryAlias::FlatRead32(r4_addr_2);
}

loc_8098D470:
{
    r4 = (r7 + r6);
    r0 = MemoryAlias::FlatRead8((r4 + 4430));
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_18 & -4);
    r5_addr_1 = (r5 + r0);
    r4 = MemoryAlias::FlatRead32(r5_addr_1);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_8045FBD4_CA26 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_CA26;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    }
    r3 = (r1 + 72);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098D490u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8005BA04_CEEB = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_CEEB);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_CEEB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
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
        r8 = ctx->gpr[8];
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
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    r4 = 388;
    if constexpr (KnownRegArgsCpuCall<0x8005B780u>(&func_8005B780)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8005B780_D5DD = func_8005B780_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8005B780_D5DD;
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
        const auto regargs_result_8005B7EC_D83F = func_8005B7EC_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8005B7EC_D83F;
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
    r3 = (r1 + 72);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098D4B4u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8005BA04_DB7A = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_DB7A);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_DB7A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
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
        r8 = ctx->gpr[8];
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
}

loc_8098D4B4:
{
    r11 = (r1 + 368);
    r0 = MemoryAlias::FlatRead32((r1 + 372));
    ctx->lr = r0;
    r1 = (r1 + 368);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8098CF70 func_8098CF70 preserves=true fpr_mask=0x00000000
