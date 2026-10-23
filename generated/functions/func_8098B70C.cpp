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
extern "C" void func_8005B8D8(CpuContext* ctx);
extern "C" uint64_t func_8005B8D8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8005BA04(CpuContext* ctx);
extern "C" uint64_t func_8005BA04_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8005BAB4(CpuContext* ctx);
extern "C" uint64_t func_8005BAB4_ra38_3e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double);
extern "C" void func_800D2E98(CpuContext* ctx);
extern "C" uint32_t func_800D2E98_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802E0FC0(CpuContext* ctx);
extern "C" uint64_t func_802E0FC0_ra38_1fa_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_80456C40(CpuContext* ctx);
extern "C" uint64_t func_80456C40_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80457360(CpuContext* ctx);
extern "C" uint32_t func_80457360_ra8_1e_8_0(CpuContext*, uint32_t, double, double, double, double);
extern "C" void func_8045E54C(CpuContext* ctx);
extern "C" uint64_t func_8045E54C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8098B70C(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_32 = 0;
    uint32_t r0_rot_33 = 0;
    uint32_t r0_rot_34 = 0;
    uint32_t r0_rot_35 = 0;
    uint32_t r0_rot_36 = 0;
    uint32_t r0_rot_37 = 0;
    uint32_t r0_rot_38 = 0;
    uint32_t r0_rot_39 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r0_subfic_ra_4 = 0;
    uint32_t r14_addr_0 = 0;
    uint32_t r14_addr_1 = 0;
    uint32_t r14_addr_2 = 0;
    uint32_t r14_addr_3 = 0;
    uint32_t r15_addr_0 = 0;
    uint32_t r15_addr_1 = 0;
    uint32_t r15_addr_2 = 0;
    uint32_t r15_addr_3 = 0;
    uint32_t r15_addr_4 = 0;
    uint32_t r15_addr_5 = 0;
    uint32_t r15_addr_6 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r28_addr_4 = 0;
    uint32_t r28_addr_5 = 0;
    uint32_t r28_addr_6 = 0;
    uint32_t r28_addr_7 = 0;
    uint32_t r28_addr_8 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t stackword20 = 0;
    uint32_t stackword21 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

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
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
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

    goto loc_8098B70C;

loc_8098B70C:
{
    MemoryAlias::FlatWriteRam32((r1 + -432), r1);
    r1 = (r1 + -432);
    r0 = ctx->lr;
    MemoryAlias::FlatWriteRam32((r1 + 436), r0);
    r11 = (r1 + 432);
    // inline leaf 0x80457454 (19 guest instruction(s))
    guest_range_0 = MemoryAlias::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    // end of inlined leaf 0x80457454
    r3 = 20;
    ctx->lr = 0x8098B728u;
    if constexpr (KnownRegArgsCpuCall<0x800D2E98u>(&func_800D2E98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D2E98_1BC3 = func_800D2E98_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D2E98_1BC3;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800D2E98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r14 = 0x809D0000u;
    r3 = MemoryAlias::FlatRead32((r14 + 13672));
    r3 = (r3 + 4124);
    // inline leaf 0x80040354 (7 guest instruction(s))
    r4 = 0x80660000u;
    r4 = (r4 + -19268);
    f0.d = MemoryAlias::FlatReadFloat32((r4 + 4));
    MemoryAlias::FlatWriteFloat32(r3, f0.d);
    f0.d = MemoryAlias::FlatReadFloat32((r4 + 8));
    MemoryAlias::FlatWriteFloat32((r3 + 4), f0.d);
    // end of inlined leaf 0x80040354
    r3 = MemoryAlias::FlatRead32((r14 + 13672));
    f1.d = MemoryAlias::FlatReadFloat32((r3 + 4124));
    r3 = 0x80990000u;
    f0.d = MemoryAlias::FlatReadFloat32((r3 + 14704));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r3 = 0x80990000u;
    f0.d = MemoryAlias::FlatReadFloat32((r3 + 14652));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryAlias::FlatWriteRamFloat64((r1 + 344), f0.d);
    r20 = fctiwzword0;
    ctx->lr = 0x8098B768u;
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
    r3 = MemoryAlias::FlatRead32((r14 + 13672));
    r0 = MemoryAlias::FlatRead8((r3 + 1));
}

loc_8098B774:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_8098BA30;
    }
}

loc_8098B778:
{
    r5 = 0x809A0000u;
    r0 = MemoryAlias::FlatRead8((r5 + -9756));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = 0x809A0000u;
    r3 = (r3 + -1296);
    r3_addr_0 = (r3 + r0);
    r4 = MemoryAlias::FlatRead32(r3_addr_0);
    r3 = (r5 + -9756);
    r0 = MemoryAlias::FlatRead16((r3 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r4 = (r4 + r0);
    r5 = MemoryAlias::FlatRead32((r3 + 4));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r20)));
    r7 = 0;
    ctx->lr = 0x8098B7B4u;
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
    r3 = MemoryAlias::FlatRead32((r14 + 13672));
    r0 = MemoryAlias::FlatRead32((r3 + 4424));
}

loc_8098B7C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8098C0CC;
    }
}

loc_8098B7C4:
{
    r0 = MemoryAlias::FlatRead8((r3 + 2));
}

loc_8098B7CC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_8098B7D8;
    }
}

loc_8098B7D0:
{
}

loc_8098B7D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_8098B850;
    }
}

loc_8098B7D8:
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
    r0 = (r20 + 480);
    r14 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
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
    r3_addr_1 = (r3 + r0);
    r0 = MemoryAlias::FlatRead8(r3_addr_1);
    r3 = (r0 ^ 1);
    goto loc_inl2_cont_803BECD4;
}

loc_inl2_0x803BECF4:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryAlias::FlatRead8(r3_addr_2);
}

loc_inl2_cont_803BECD4:
{
    // end of inlined leaf 0x803BECD4
    r0 = (r3 & 255);
}

loc_8098B810:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8098B834;
    }
}

loc_8098B814:
{
    r3 = r14;
    r4 = 280;
    r5 = 32;
    r6 = -1;
    r7 = 2;
    r8 = 0;
    ctx->lr = 0x8098B830u;
    if constexpr (KnownRegArgsCpuCall<0x802E0FC0u>(&func_802E0FC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802E0FC0_3434 = func_802E0FC0_ra38_1fa_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E0FC0_3434);
        r4 = static_cast<uint32_t>(regargs_result_802E0FC0_3434 >> 32);
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
    goto loc_8098B850;
}

loc_8098B834:
{
    r3 = r14;
    r4 = 280;
    r5 = 32;
    r6 = -1;
    r7 = 0;
    r8 = 0;
    ctx->lr = 0x8098B850u;
    if constexpr (KnownRegArgsCpuCall<0x802E0FC0u>(&func_802E0FC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802E0FC0_3C52 = func_802E0FC0_ra38_1fa_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E0FC0_3C52);
        r4 = static_cast<uint32_t>(regargs_result_802E0FC0_3C52 >> 32);
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

loc_8098B850:
{
    r3 = 0x809D0000u;
    r4 = MemoryAlias::FlatRead32((r3 + 13672));
    r0 = MemoryAlias::FlatRead8((r4 + 2));
}

loc_8098B860:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_8098B878;
    }
}

loc_8098B864:
{
}

loc_8098B868:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8098B878;
    }
}

loc_8098B86C:
{
}

loc_8098B870:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8098B8CC;
    }
}

loc_8098B874:
{
    goto loc_8098B8D8;
}

loc_8098B878:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryAlias::FlatRead8((r3 + 9));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = 0x809A0000u;
    r3 = (r3 + 30912);
    r3_addr_5 = (r3 + r0);
    r5 = MemoryAlias::FlatRead32(r3_addr_5);
    r15 = MemoryAlias::FlatRead32((r4 + 4424));
}

loc_8098B89C:
{
    if ((static_cast<int32_t>(r15) != static_cast<int32_t>(-100))) {
        goto loc_8098B8B0;
    }
}

loc_8098B8A0:
{
    r3 = (r1 + 88);
    r4 = MemoryAlias::FlatRead32((r5 + 4));
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_8045FBD4_4864 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_4864;
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
    goto loc_8098B8E8;
}

loc_8098B8B0:
{
}

loc_8098B8B4:
{
    if ((static_cast<int32_t>(r15) != static_cast<int32_t>(200))) {
        goto loc_8098B8D8;
    }
}

loc_8098B8B8:
{
    r3 = (r1 + 88);
    r4 = MemoryAlias::FlatRead32(r5);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_8045FBD4_4D5D = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_4D5D;
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
    goto loc_8098B8E8;
}

loc_8098B8CC:
{
    r15 = MemoryAlias::FlatRead32((r4 + 4424));
}

loc_8098B8D4:
{
    if ((static_cast<int32_t>(r15) <= static_cast<int32_t>(0))) {
        goto loc_8098C0CC;
    }
}

loc_8098B8D8:
{
    r3 = r15;
    r4 = (r1 + 88);
    r5 = 0;
    ctx->lr = 0x8098B8E8u;
    if constexpr (KnownRegArgsCpuCall<0x8004FEECu>(&func_8004FEEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8004FEEC_52CE = func_8004FEEC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8004FEEC_52CE);
        r4 = static_cast<uint32_t>(regargs_result_8004FEEC_52CE >> 32);
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
}

loc_8098B8E8:
{
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
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r20)));
    r3 = (r3 + 130);
    r4 = 174;
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
    r3 = (r1 + 88);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098B918u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8005BA04_62A4 = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_62A4);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_62A4 >> 32);
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
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryAlias::FlatRead8((r3 + 9));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = 0x809A0000u;
    r3 = (r3 + 30912);
    r3_addr_8 = (r3 + r0);
    r14 = MemoryAlias::FlatRead32(r3_addr_8);
    r3 = 0x809D0000u;
    r3 = MemoryAlias::FlatRead32((r3 + 13672));
    r0 = MemoryAlias::FlatRead8((r3 + 2));
}

loc_8098B944:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_8098B950;
    }
}

loc_8098B948:
{
}

loc_8098B94C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_8098C0CC;
    }
}

loc_8098B950:
{
    r0 = MemoryAlias::FlatRead32((r3 + 4424));
}

loc_8098B958:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(11))) {
        goto loc_8098B964;
    }
}

loc_8098B95C:
{
}

loc_8098B960:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(9))) {
        goto loc_8098C0CC;
    }
}

loc_8098B964:
{
    r3 = 0x80790000u;
    r0 = MemoryAlias::FlatRead8((r3 + 27989));
}

loc_8098B970:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8098B984;
    }
}

loc_8098B974:
{
    r3 = -1073741824;
    r3 = (r3 + 255);
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl6_0x8005B7EC:
{
    r4 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl6_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryAlias::FlatWrite32((r4 + 20600), r3);
    goto loc_inl6_cont_8005B7EC;
}

loc_inl6_return:
{
}

loc_inl6_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    goto loc_8098B98C;
}

loc_8098B984:
{
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
}

loc_8098B98C:
{
    r3 = MemoryAlias::FlatRead32((r14 + 8));
    ctx->lr = 0x8098B994u;
    if constexpr (KnownRegArgsCpuCall<0x8005B8D8u>(&func_8005B8D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8005B8D8_73B5 = func_8005B8D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005B8D8_73B5);
        r4 = static_cast<uint32_t>(regargs_result_8005B8D8_73B5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005B8D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r0 = (r3 * 10);
    r3 = (40 - r0);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & 1);
    r0 = (r0 + r3);
    r3 = (static_cast<int32_t>(r0) >> 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r20)));
    r3 = (r0 + r3);
    r3 = (r3 + 260);
    r4 = 280;
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
    r3 = MemoryAlias::FlatRead32((r14 + 8));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098B9C8u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8005BA04_7CE6 = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_7CE6);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_7CE6 >> 32);
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
    r3 = 0x80790000u;
    r0 = MemoryAlias::FlatRead8((r3 + 27989));
}

loc_8098B9D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8098B9E8;
    }
}

loc_8098B9D8:
{
    r3 = -1073741824;
    r3 = (r3 + 255);
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
    goto loc_8098B9F0;
}

loc_8098B9E8:
{
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
}

loc_8098B9F0:
{
    r3 = MemoryAlias::FlatRead32((r14 + 12));
    ctx->lr = 0x8098B9F8u;
    if constexpr (KnownRegArgsCpuCall<0x8005B8D8u>(&func_8005B8D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8005B8D8_89C2 = func_8005B8D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005B8D8_89C2);
        r4 = static_cast<uint32_t>(regargs_result_8005B8D8_89C2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005B8D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r0 = (r3 * 10);
    r3 = (40 - r0);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & 1);
    r0 = (r0 + r3);
    r3 = (static_cast<int32_t>(r0) >> 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r20)));
    r3 = (r0 + r3);
    r3 = (r3 + 350);
    r4 = 280;
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl11_0x8005B780:
{
    r5 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl11_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl11_return;
    }
}

loc_inl11_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryAlias::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryAlias::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryAlias::FlatWrite32((r3 + 20588), r4);
    goto loc_inl11_cont_8005B780;
}

loc_inl11_return:
{
}

loc_inl11_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    r3 = MemoryAlias::FlatRead32((r14 + 12));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098BA2Cu;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8005BA04_92FB = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_92FB);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_92FB >> 32);
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
    goto loc_8098C0CC;
}

loc_8098BA30:
{
    r3 = 0x809A0000u;
    r15 = (r3 + -5008);
    r15 = (r15 + 20);
    r16 = 1;
    r3 = 0x809A0000u;
    r14 = (r3 + -1248);
}

loc_8098BA48:
{
    r0 = MemoryAlias::FlatRead8(r15);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r14_addr_2 = (r14 + r0);
    r4 = MemoryAlias::FlatRead32(r14_addr_2);
    r0 = MemoryAlias::FlatRead16((r15 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_13 & -2);
    r4 = (r4 + r0);
    r3 = r15;
    r5 = MemoryAlias::FlatRead32((r15 + 4));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r20)));
    r7 = 0;
    ctx->lr = 0x8098BA78u;
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
    InvokeDirectCpu<0x80984FE4u>(ctx);
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
    r16 = (r16 + 1);
    r15 = (r15 + 20);
}

loc_8098BA84:
{
    if ((static_cast<int32_t>(r16) < static_cast<int32_t>(4))) {
        goto loc_8098BA48;
    }
}

loc_8098BA88:
{
    r27 = 0x809D0000u;
    r5 = MemoryAlias::FlatRead32((r27 + 13672));
    r0 = MemoryAlias::FlatRead8((r5 + 4311));
    r4 = (r0 * 20);
    r3 = 0x809A0000u;
    r0 = (r3 + -4876);
    r24 = (r0 + r4);
    r0 = MemoryAlias::FlatRead8(r24);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_14 & -4);
    r3 = 0x809A0000u;
    r28 = (r3 + -1248);
    r28_addr_1 = (r28 + r0);
    r14 = MemoryAlias::FlatRead32(r28_addr_1);
    r0 = MemoryAlias::FlatRead16((r24 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_15 & -4);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_16 & -2);
    r14 = (r14 + r0);
    r3 = -90177536;
    r15 = (r3 + 5120);
    r0 = MemoryAlias::FlatRead32((r5 + 4172));
    r3 = 0x80990000u;
    f1.d = MemoryAlias::FlatReadFloat64((r3 + 14688));
    stackword20 = r0;
    MemoryAlias::FlatWriteRam32((r1 + 348), r0);
    r0 = 1127219200;
    stackword21 = r0;
    MemoryAlias::FlatWriteRam32((r1 + 344), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword21), static_cast<uint32_t>(stackword20));
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
        const auto regargs_result_80457360_AA1F = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_AA1F;
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
    r15 = (r15 | r0);
    r3 = r24;
    r4 = r14;
    r5 = r15;
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r20)));
    r7 = 0;
    ctx->lr = 0x8098BB40u;
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
    InvokeDirectCpu<0x80984FE4u>(ctx);
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
    r21 = 0;
    r3 = 0x809A0000u;
    r26 = (r3 + -4888);
    r25 = 0;
    r29 = 0x809A0000u;
    r3 = 0x809A0000u;
    r30 = (r3 + -4736);
    r3 = 0x80660000u;
    r14 = (r3 + -21920);
    r31 = 0x809A0000u;
}

loc_8098BB68:
{
    r0 = MemoryAlias::FlatRead32((r27 + 13672));
    r3 = (r0 + r21);
    r0 = MemoryAlias::FlatRead8((r3 + 4308));
}

loc_8098BB78:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8098BB90;
    }
}

loc_8098BB7C:
{
    r3 = (r1 + 24);
    r4 = 0x809A0000u;
    r4 = (r4 + -4928);
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
    goto loc_8098BBA0;
}

loc_8098BB90:
{
    r3 = (r1 + 24);
    r4 = (r31 + -4928);
    r4 = (r4 + 20);
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
}

loc_8098BBA0:
{
    r0 = MemoryAlias::FlatRead8((r1 + 24));
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_18 & -4);
    r28_addr_3 = (r28 + r0);
    r4 = MemoryAlias::FlatRead32(r28_addr_3);
    r0 = MemoryAlias::FlatRead16((r1 + 32));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_19 & -4);
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_20 & -2);
    r4 = (r4 + r0);
    r3 = MemoryAlias::FlatRead16((r1 + 34));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryAlias::FlatRead16(r26);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 + r0);
    MemoryAlias::FlatWriteRam16((r1 + 34), static_cast<uint16_t>(r0));
    r3 = MemoryAlias::FlatRead16((r1 + 36));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryAlias::FlatRead16((r26 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 + r0);
    MemoryAlias::FlatWriteRam16((r1 + 36), static_cast<uint16_t>(r0));
    r3 = (r1 + 24);
    r5 = MemoryAlias::FlatRead32((r24 + 4));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r20)));
    r7 = 0;
    ctx->lr = 0x8098BBF0u;
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
    InvokeDirectCpu<0x80984FE4u>(ctx);
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
    r18 = MemoryAlias::FlatRead16(r26);
    r18 = (r18 << 16);
    r18 = (static_cast<int32_t>(r18) >> 16);
    r17 = MemoryAlias::FlatRead16((r26 + 2));
    r17 = (r17 << 16);
    r17 = (static_cast<int32_t>(r17) >> 16);
    r4 = MemoryAlias::FlatRead32((r27 + 13672));
    r3 = (r4 + r21);
    r0 = MemoryAlias::FlatRead8((r3 + 4308));
}

loc_8098BC08:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8098BF70;
    }
}

loc_8098BC0C:
{
    r3 = (r4 + r25);
    r16 = MemoryAlias::FlatRead32((r3 + 4296));
    r19 = 0;
    r3 = 0x809A0000u;
    r15 = (r3 + -4816);
}

loc_8098BC20:
{
}

loc_8098BC24:
{
    if ((static_cast<int32_t>(r19) != static_cast<int32_t>(3))) {
        goto loc_8098BC34;
    }
}

loc_8098BC28:
{
    r0 = MemoryAlias::FlatRead16((r16 + 15844));
}

loc_8098BC30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8098BC88;
    }
}

loc_8098BC34:
{
    r3 = (r1 + 24);
    r4 = r15;
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
    r0 = MemoryAlias::FlatRead16((r1 + 34));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r18);
    MemoryAlias::FlatWriteRam16((r1 + 34), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead16((r1 + 36));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r17);
    MemoryAlias::FlatWriteRam16((r1 + 36), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead8((r1 + 24));
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_22 & -4);
    r28_addr_5 = (r28 + r0);
    r4 = MemoryAlias::FlatRead32(r28_addr_5);
    r0 = MemoryAlias::FlatRead16((r1 + 32));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_23 & -4);
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_24 & -2);
    r4 = (r4 + r0);
    r3 = (r1 + 24);
    r5 = MemoryAlias::FlatRead32((r1 + 28));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r20)));
    r7 = 0;
    ctx->lr = 0x8098BC88u;
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
    InvokeDirectCpu<0x80984FE4u>(ctx);
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

loc_8098BC88:
{
    r15 = (r15 + 20);
    r19 = (r19 + 1);
}

loc_8098BC94:
{
    if ((static_cast<int32_t>(r19) < static_cast<int32_t>(4))) {
        goto loc_8098BC20;
    }
}

loc_8098BC98:
{
    r18 = (r18 + r20);
    r0 = (r18 + 82);
    r15 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r17 + 11);
    r19 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = (r16 + 3);
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80456C40_E23A = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_E23A);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_E23A >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 * 10);
    r0_subfic_ra_2 = r0;
    r0 = (134 - r0_subfic_ra_2);
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_26 & 2147483647);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r15 = (r15 + r0);
    r3 = 20;
    r4 = 20;
    // inline leaf 0x8005B714 (9 guest instruction(s))
}

loc_inl15_0x8005B714:
{
    r5 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl15_0x8005B71C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl15_return;
    }
}

loc_inl15_0x8005B720:
{
    r5 = (r5 + 65536);
    MemoryAlias::FlatWrite32((r5 + 20576), r3);
    r3 = MemoryAlias::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryAlias::FlatWrite32((r3 + 20580), r4);
    goto loc_inl15_cont_8005B714;
}

loc_inl15_return:
{
}

loc_inl15_cont_8005B714:
{
    // end of inlined leaf 0x8005B714
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r15)));
    r3 = (r3 + 2);
    r4 = (r19 + 2);
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl16_0x8005B780:
{
    r5 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl16_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl16_return;
    }
}

loc_inl16_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryAlias::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryAlias::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryAlias::FlatWrite32((r3 + 20588), r4);
    goto loc_inl16_cont_8005B780;
}

loc_inl16_return:
{
}

loc_inl16_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    r3 = 255;
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl17_0x8005B7EC:
{
    r4 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl17_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl17_return;
    }
}

loc_inl17_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryAlias::FlatWrite32((r4 + 20600), r3);
    goto loc_inl17_cont_8005B7EC;
}

loc_inl17_return:
{
}

loc_inl17_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    r3 = (r16 + 3);
    ctx->lr = 0x8098BCF4u;
    if constexpr (KnownRegArgsCpuCall<0x8005BAB4u>(&func_8005BAB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8005BAB4_EE68 = func_8005BAB4_ra38_3e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BAB4_EE68);
        r4 = static_cast<uint32_t>(regargs_result_8005BAB4_EE68 >> 32);
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
        InvokeDirectCpu<0x8005BAB4u>(ctx);
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
        cr = ctx->cr;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r15)));
    r4 = r19;
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl18_0x8005B780:
{
    r5 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl18_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl18_return;
    }
}

loc_inl18_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryAlias::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryAlias::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryAlias::FlatWrite32((r3 + 20588), r4);
    goto loc_inl18_cont_8005B780;
}

loc_inl18_return:
{
}

loc_inl18_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    r3 = MemoryAlias::FlatRead32((r29 + -4704));
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl19_0x8005B7EC:
{
    r4 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl19_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl19_return;
    }
}

loc_inl19_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryAlias::FlatWrite32((r4 + 20600), r3);
    goto loc_inl19_cont_8005B7EC;
}

loc_inl19_return:
{
}

loc_inl19_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    r3 = (r16 + 3);
    ctx->lr = 0x8098BD10u;
    if constexpr (KnownRegArgsCpuCall<0x8005BAB4u>(&func_8005BAB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8005BAB4_FA00 = func_8005BAB4_ra38_3e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BAB4_FA00);
        r4 = static_cast<uint32_t>(regargs_result_8005BAB4_FA00 >> 32);
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
        InvokeDirectCpu<0x8005BAB4u>(ctx);
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
        cr = ctx->cr;
    }
    r3 = 18;
    r4 = 18;
    // inline leaf 0x8005B714 (9 guest instruction(s))
}

loc_inl20_0x8005B714:
{
    r5 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl20_0x8005B71C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl20_return;
    }
}

loc_inl20_0x8005B720:
{
    r5 = (r5 + 65536);
    MemoryAlias::FlatWrite32((r5 + 20576), r3);
    r3 = MemoryAlias::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryAlias::FlatWrite32((r3 + 20580), r4);
    goto loc_inl20_cont_8005B714;
}

loc_inl20_return:
{
}

loc_inl20_cont_8005B714:
{
    // end of inlined leaf 0x8005B714
    r23 = MemoryAlias::FlatRead16((r30 + 6));
    r23 = (r23 << 16);
    r23 = (static_cast<int32_t>(r23) >> 16);
    r22 = MemoryAlias::FlatRead16((r30 + 8));
    r22 = (r22 << 16);
    r22 = (static_cast<int32_t>(r22) >> 16);
    r19 = MemoryAlias::FlatRead16((r30 + 10));
    r19 = (r19 << 16);
    r19 = (static_cast<int32_t>(r19) >> 16);
    r0 = MemoryAlias::FlatRead8((r14 + 9));
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_27 & -4);
    r3 = 0x809A0000u;
    r3 = (r3 + 31488);
    r3_addr_11 = (r3 + r0);
    r15 = MemoryAlias::FlatRead32(r3_addr_11);
    r0 = MemoryAlias::FlatRead8(r16);
    r0_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_28 & -4);
    r15_addr_2 = (r15 + r0);
    r3 = MemoryAlias::FlatRead32(r15_addr_2);
    ctx->lr = 0x8098BD4Cu;
    if constexpr (KnownRegArgsCpuCall<0x8005B8D8u>(&func_8005B8D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8005B8D8_1064F = func_8005B8D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005B8D8_1064F);
        r4 = static_cast<uint32_t>(regargs_result_8005B8D8_1064F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005B8D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_29 & -8);
    r0 = (r0 + r3);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = (r19 - r0);
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_30 & 1);
    r0 = (r0 + r3);
    r0 = (static_cast<int32_t>(r0) >> 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r23 = (r23 + r0);
    r23 = (r23 + r18);
    r22 = (r22 + r17);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r23)));
    r3 = (r3 + 2);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r22)));
    r4 = (r4 + 2);
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl21_0x8005B780:
{
    r5 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl21_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl21_return;
    }
}

loc_inl21_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryAlias::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryAlias::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryAlias::FlatWrite32((r3 + 20588), r4);
    goto loc_inl21_cont_8005B780;
}

loc_inl21_return:
{
}

loc_inl21_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    r3 = 255;
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl22_0x8005B7EC:
{
    r4 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl22_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl22_return;
    }
}

loc_inl22_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryAlias::FlatWrite32((r4 + 20600), r3);
    goto loc_inl22_cont_8005B7EC;
}

loc_inl22_return:
{
}

loc_inl22_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    r0 = MemoryAlias::FlatRead8(r16);
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_31 & -4);
    r15_addr_3 = (r15 + r0);
    r3 = MemoryAlias::FlatRead32(r15_addr_3);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098BDA8u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8005BA04_113B6 = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_113B6);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_113B6 >> 32);
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
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r23)));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r22)));
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl23_0x8005B780:
{
    r5 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl23_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl23_return;
    }
}

loc_inl23_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryAlias::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryAlias::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryAlias::FlatWrite32((r3 + 20588), r4);
    goto loc_inl23_cont_8005B780;
}

loc_inl23_return:
{
}

loc_inl23_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    r0 = MemoryAlias::FlatRead8(r16);
    r0_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_32 & -4);
    r3 = (r29 + -4704);
    r3 = (r3 + r0);
    r3 = MemoryAlias::FlatRead32((r3 + 4));
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl24_0x8005B7EC:
{
    r4 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl24_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl24_return;
    }
}

loc_inl24_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryAlias::FlatWrite32((r4 + 20600), r3);
    goto loc_inl24_cont_8005B7EC;
}

loc_inl24_return:
{
}

loc_inl24_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    r0 = MemoryAlias::FlatRead8(r16);
    r0_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_33 & -4);
    r15_addr_4 = (r15 + r0);
    r3 = MemoryAlias::FlatRead32(r15_addr_4);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098BDE0u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8005BA04_122C4 = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_122C4);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_122C4 >> 32);
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
    r7 = MemoryAlias::FlatRead32((r16 + 28));
    r3 = 0x91A30000u;
    r0 = (r3 + -19515);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r7)) >> 32));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r5 = (r5_rot_2 & 2097151);
    r0 = (r5 * 3600);
    r7 = (r7 - r0);
    r3 = (r1 + 8);
    r4 = 0x809A0000u;
    r4 = (r4 + -4656);
    r4 = MemoryAlias::FlatRead32((r4 + 8));
    r6 = 0x88890000u;
    r0 = (r6 + -30583);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r7)) >> 32));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r6 = (r6_rot_2 & 134217727);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098BE24u;
    if constexpr (KnownRegArgsCpuCall<0x8045E54Cu>(&func_8045E54C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8045E54C_12DD5 = func_8045E54C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045E54C_12DD5);
        r4 = static_cast<uint32_t>(regargs_result_8045E54C_12DD5 >> 32);
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
        InvokeDirectCpu<0x8045E54Cu>(ctx);
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
    r15 = MemoryAlias::FlatRead16((r30 + 12));
    r15 = (r15 << 16);
    r15 = (static_cast<int32_t>(r15) >> 16);
    r19 = MemoryAlias::FlatRead16((r30 + 14));
    r19 = (r19 << 16);
    r19 = (static_cast<int32_t>(r19) >> 16);
    r15 = (r15 + r18);
    r19 = (r19 + r17);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r15)));
    r3 = (r3 + 2);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r19)));
    r4 = (r4 + 2);
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl25_0x8005B780:
{
    r5 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl25_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl25_return;
    }
}

loc_inl25_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryAlias::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryAlias::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryAlias::FlatWrite32((r3 + 20588), r4);
    goto loc_inl25_cont_8005B780;
}

loc_inl25_return:
{
}

loc_inl25_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    r3 = 255;
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl26_0x8005B7EC:
{
    r4 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl26_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl26_return;
    }
}

loc_inl26_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryAlias::FlatWrite32((r4 + 20600), r3);
    goto loc_inl26_cont_8005B7EC;
}

loc_inl26_return:
{
}

loc_inl26_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    r3 = (r1 + 8);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098BE5Cu;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8005BA04_13C6C = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_13C6C);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_13C6C >> 32);
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
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r15)));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r19)));
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl27_0x8005B780:
{
    r5 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl27_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl27_return;
    }
}

loc_inl27_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryAlias::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryAlias::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryAlias::FlatWrite32((r3 + 20588), r4);
    goto loc_inl27_cont_8005B780;
}

loc_inl27_return:
{
}

loc_inl27_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    r3 = MemoryAlias::FlatRead32((r29 + -4704));
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl28_0x8005B7EC:
{
    r4 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl28_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl28_return;
    }
}

loc_inl28_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryAlias::FlatWrite32((r4 + 20600), r3);
    goto loc_inl28_cont_8005B7EC;
}

loc_inl28_return:
{
}

loc_inl28_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    r3 = (r1 + 8);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098BE7Cu;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8005BA04_149E1 = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_149E1);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_149E1 >> 32);
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
    r3 = (r1 + 8);
    r4 = 0x809A0000u;
    r4 = (r4 + -4656);
    r4 = MemoryAlias::FlatRead32((r4 + 12));
    r5 = MemoryAlias::FlatRead32((r16 + 24));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098BE98u;
    if constexpr (KnownRegArgsCpuCall<0x8045E54Cu>(&func_8045E54C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8045E54C_152B3 = func_8045E54C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045E54C_152B3);
        r4 = static_cast<uint32_t>(regargs_result_8045E54C_152B3 >> 32);
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
        InvokeDirectCpu<0x8045E54Cu>(ctx);
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
    r15 = MemoryAlias::FlatRead16((r30 + 18));
    r15 = (r15 << 16);
    r15 = (static_cast<int32_t>(r15) >> 16);
    r19 = MemoryAlias::FlatRead16((r30 + 20));
    r19 = (r19 << 16);
    r19 = (static_cast<int32_t>(r19) >> 16);
    r15 = (r15 + r18);
    r19 = (r19 + r17);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r15)));
    r3 = (r3 + 2);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r19)));
    r4 = (r4 + 2);
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl29_0x8005B780:
{
    r5 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl29_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl29_return;
    }
}

loc_inl29_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryAlias::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryAlias::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryAlias::FlatWrite32((r3 + 20588), r4);
    goto loc_inl29_cont_8005B780;
}

loc_inl29_return:
{
}

loc_inl29_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    r3 = 255;
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl30_0x8005B7EC:
{
    r4 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl30_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl30_return;
    }
}

loc_inl30_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryAlias::FlatWrite32((r4 + 20600), r3);
    goto loc_inl30_cont_8005B7EC;
}

loc_inl30_return:
{
}

loc_inl30_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    r3 = (r1 + 8);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098BED0u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8005BA04_1614A = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_1614A);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_1614A >> 32);
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
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r15)));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r19)));
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl31_0x8005B780:
{
    r5 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl31_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl31_return;
    }
}

loc_inl31_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryAlias::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryAlias::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryAlias::FlatWrite32((r3 + 20588), r4);
    goto loc_inl31_cont_8005B780;
}

loc_inl31_return:
{
}

loc_inl31_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    r3 = MemoryAlias::FlatRead32((r29 + -4704));
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl32_0x8005B7EC:
{
    r4 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl32_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl32_return;
    }
}

loc_inl32_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryAlias::FlatWrite32((r4 + 20600), r3);
    goto loc_inl32_cont_8005B7EC;
}

loc_inl32_return:
{
}

loc_inl32_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    r3 = (r1 + 8);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098BEF0u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8005BA04_16EBF = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_16EBF);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_16EBF >> 32);
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
    r5 = MemoryAlias::FlatRead16((r16 + 15844));
}

loc_8098BEF8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8098C040;
    }
}

loc_8098BEFC:
{
    r3 = (r1 + 8);
    r4 = 0x809A0000u;
    r4 = (r4 + -368);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098BF10u;
    if constexpr (KnownRegArgsCpuCall<0x8045E54Cu>(&func_8045E54C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8045E54C_177F7 = func_8045E54C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045E54C_177F7);
        r4 = static_cast<uint32_t>(regargs_result_8045E54C_177F7 >> 32);
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
        InvokeDirectCpu<0x8045E54Cu>(ctx);
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
    r15 = MemoryAlias::FlatRead16((r30 + 24));
    r15 = (r15 << 16);
    r15 = (static_cast<int32_t>(r15) >> 16);
    r16 = MemoryAlias::FlatRead16((r30 + 26));
    r16 = (r16 << 16);
    r16 = (static_cast<int32_t>(r16) >> 16);
    r15 = (r15 + r18);
    r16 = (r16 + r17);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r15)));
    r3 = (r3 + 2);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r16)));
    r4 = (r4 + 2);
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl33_0x8005B780:
{
    r5 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl33_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl33_return;
    }
}

loc_inl33_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryAlias::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryAlias::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryAlias::FlatWrite32((r3 + 20588), r4);
    goto loc_inl33_cont_8005B780;
}

loc_inl33_return:
{
}

loc_inl33_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    r3 = 255;
    if constexpr (KnownRegArgsCpuCall<0x8005B7ECu>(&func_8005B7EC)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8005B7EC_1832B = func_8005B7EC_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8005B7EC_1832B;
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
    r3 = (r1 + 8);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098BF48u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8005BA04_1867F = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_1867F);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_1867F >> 32);
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
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r15)));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r16)));
    if constexpr (KnownRegArgsCpuCall<0x8005B780u>(&func_8005B780)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8005B780_18DDD = func_8005B780_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8005B780_18DDD;
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
    r3 = (r29 + -4704);
    r3 = MemoryAlias::FlatRead32((r3 + 12));
    if constexpr (KnownRegArgsCpuCall<0x8005B7ECu>(&func_8005B7EC)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8005B7EC_1906D = func_8005B7EC_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8005B7EC_1906D;
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
    r3 = (r1 + 8);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098BF6Cu;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8005BA04_193C1 = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_193C1);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_193C1 >> 32);
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
    goto loc_8098C040;
}

loc_8098BF70:
{
    r0 = MemoryAlias::FlatRead8((r14 + 9));
    r0_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_34 & -4);
    r3 = 0x809A0000u;
    r3 = (r3 + 31464);
    r3_addr_12 = (r3 + r0);
    r15 = MemoryAlias::FlatRead32(r3_addr_12);
    r3 = 22;
    r4 = 22;
    if constexpr (KnownRegArgsCpuCall<0x8005B714u>(&func_8005B714)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8005B714_19C0E = func_8005B714_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8005B714_19C0E;
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
    r0 = MemoryAlias::FlatRead32((r27 + 13672));
    r3 = (r0 + r21);
    r0 = MemoryAlias::FlatRead8((r3 + 4308));
}

loc_8098BFA0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_8098BFF4;
    }
}

loc_8098BFA4:
{
    r3 = MemoryAlias::FlatRead32(r15);
    ctx->lr = 0x8098BFACu;
    if constexpr (KnownRegArgsCpuCall<0x8005B8D8u>(&func_8005B8D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8005B8D8_19FFC = func_8005B8D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005B8D8_19FFC);
        r4 = static_cast<uint32_t>(regargs_result_8005B8D8_19FFC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005B8D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r0 = (r3 * 11);
    r3 = (154 - r0);
    r0_rot_35 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_35 & 1);
    r0 = (r0 + r3);
    r3 = (static_cast<int32_t>(r0) >> 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r20)));
    r0 = (r18 + r0);
    r3 = (r0 + r3);
    r3 = (r3 + 72);
    r4 = (r17 + 40);
    if constexpr (KnownRegArgsCpuCall<0x8005B780u>(&func_8005B780)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8005B780_1A55A = func_8005B780_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8005B780_1A55A;
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
    r3 = 1511260160;
    r3 = (r3 + 255);
    if constexpr (KnownRegArgsCpuCall<0x8005B7ECu>(&func_8005B7EC)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8005B7EC_1A7CE = func_8005B7EC_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8005B7EC_1A7CE;
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
    r3 = MemoryAlias::FlatRead32(r15);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098BFF0u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8005BA04_1AB37 = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_1AB37);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_1AB37 >> 32);
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
    goto loc_8098C040;
}

loc_8098BFF4:
{
    r3 = MemoryAlias::FlatRead32((r15 + 4));
    ctx->lr = 0x8098BFFCu;
    if constexpr (KnownRegArgsCpuCall<0x8005B8D8u>(&func_8005B8D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8005B8D8_1B2E6 = func_8005B8D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005B8D8_1B2E6);
        r4 = static_cast<uint32_t>(regargs_result_8005B8D8_1B2E6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005B8D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r0 = (r3 * 11);
    r3 = (154 - r0);
    r0_rot_36 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_36 & 1);
    r0 = (r0 + r3);
    r3 = (static_cast<int32_t>(r0) >> 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r20)));
    r0 = (r18 + r0);
    r3 = (r0 + r3);
    r3 = (r3 + 72);
    r4 = (r17 + 40);
    if constexpr (KnownRegArgsCpuCall<0x8005B780u>(&func_8005B780)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8005B780_1B844 = func_8005B780_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8005B780_1B844;
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
    r3 = 168427520;
    r3 = (r3 + 2815);
    if constexpr (KnownRegArgsCpuCall<0x8005B7ECu>(&func_8005B7EC)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8005B7EC_1BAB8 = func_8005B7EC_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8005B7EC_1BAB8;
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
    r3 = MemoryAlias::FlatRead32((r15 + 4));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098C040u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8005BA04_1BE27 = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_1BE27);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_1BE27 >> 32);
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

loc_8098C040:
{
    r26 = (r26 + 4);
    r25 = (r25 + 4);
    r21 = (r21 + 1);
}

loc_8098C050:
{
    if ((static_cast<int32_t>(r21) < static_cast<int32_t>(3))) {
        goto loc_8098BB68;
    }
}

loc_8098C054:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryAlias::FlatRead8((r3 + 9));
    r0_rot_38 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_38 & -4);
    r3 = 0x809A0000u;
    r3 = (r3 + 31440);
    r3_addr_14 = (r3 + r0);
    r15 = MemoryAlias::FlatRead32(r3_addr_14);
    r3 = 20;
    r4 = 20;
    if constexpr (KnownRegArgsCpuCall<0x8005B714u>(&func_8005B714)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8005B714_1C760 = func_8005B714_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8005B714_1C760;
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
    r14 = (r20 + 94);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r14)));
    r3 = (r3 + 2);
    r4 = 390;
    if constexpr (KnownRegArgsCpuCall<0x8005B780u>(&func_8005B780)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8005B780_1CA1F = func_8005B780_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8005B780_1CA1F;
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
        const auto regargs_result_8005B7EC_1CC93 = func_8005B7EC_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8005B7EC_1CC93;
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
    r3 = MemoryAlias::FlatRead32(r15);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098C0A8u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8005BA04_1CFFC = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_1CFFC);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_1CFFC >> 32);
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
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r14)));
    r4 = 388;
    if constexpr (KnownRegArgsCpuCall<0x8005B780u>(&func_8005B780)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8005B780_1D72C = func_8005B780_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8005B780_1D72C;
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
        const auto regargs_result_8005B7EC_1D9A4 = func_8005B7EC_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8005B7EC_1D9A4;
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
    r3 = MemoryAlias::FlatRead32(r15);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098C0CCu;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8005BA04_1DD0D = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_1DD0D);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_1DD0D >> 32);
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

loc_8098C0CC:
{
    r11 = (r1 + 432);
    r0 = MemoryAlias::FlatRead32((r1 + 436));
    ctx->lr = r0;
    r1 = (r1 + 432);
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
// RECOMP_REGISTRATION base 0x8098B70C func_8098B70C preserves=true fpr_mask=0x00000000
