#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CF80C(CpuContext* ctx);
extern "C" uint64_t func_800CF80C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8031F7E0(CpuContext* ctx);
extern "C" uint64_t func_8031F7E0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8031F840(CpuContext* ctx);
extern "C" uint64_t func_8031F840_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8031FBE8(CpuContext* ctx);
extern "C" uint64_t func_8031FBE8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8031FC4C(CpuContext* ctx);
extern "C" uint64_t func_8031FC4C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803B1EBC(CpuContext* ctx);
extern "C" uint64_t func_803B1EBC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803B1F10(CpuContext* ctx);
extern "C" uint64_t func_803B1F10_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803B4FA4(CpuContext* ctx);
extern "C" uint32_t func_803B4FA4_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_803204B0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r21_addr_0 = 0;
    uint32_t r21_addr_1 = 0;
    uint32_t r21_addr_10 = 0;
    uint32_t r21_addr_11 = 0;
    uint32_t r21_addr_2 = 0;
    uint32_t r21_addr_3 = 0;
    uint32_t r21_addr_4 = 0;
    uint32_t r21_addr_5 = 0;
    uint32_t r21_addr_6 = 0;
    uint32_t r21_addr_7 = 0;
    uint32_t r21_addr_8 = 0;
    uint32_t r21_addr_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    const uint32_t r21_entry = r21;
    const uint32_t r22_entry = r22;
    const uint32_t r23_entry = r23;
    const uint32_t r24_entry = r24;
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    uint32_t ctr = ctx->ctr;

    goto loc_803204B0;

loc_803204B0:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r11 = (r1 + 128);
    // inline leaf 0x80457470 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    // end of inlined leaf 0x80457470
    r5 = 0;
    r3 = 0x806C0000u;
    r4 = (r3 + 1440);
    r3 = 0;
    r0 = 4;
    ctr = r0;
}

loc_803204DC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 68u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_1, 0u, r4, r3);
        MemoryInline::WriteResolved16(guest_range_1, 2u, (r4 + 2), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_1, 4u, (r4 + 4), r3);
        MemoryInline::WriteResolved16(guest_range_1, 6u, (r4 + 6), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_1, 8u, (r4 + 8), r3);
        MemoryInline::WriteResolved16(guest_range_1, 10u, (r4 + 10), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_1, 12u, (r4 + 12), r3);
        MemoryInline::WriteResolved16(guest_range_1, 14u, (r4 + 14), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_1, 16u, (r4 + 16), r3);
        MemoryInline::WriteResolved16(guest_range_1, 18u, (r4 + 18), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_1, 20u, (r4 + 20), r3);
        MemoryInline::WriteResolved16(guest_range_1, 22u, (r4 + 22), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_1, 24u, (r4 + 24), r3);
        MemoryInline::WriteResolved16(guest_range_1, 26u, (r4 + 26), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_1, 28u, (r4 + 28), r3);
        MemoryInline::WriteResolved16(guest_range_1, 30u, (r4 + 30), r3);
    }
    MemoryInline::WriteResolved16(guest_range_1, 32u, (r4 + 32), static_cast<uint16_t>(r3));
    r5 = (r5 + 1);
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 34u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_1, 34u, (r4 + 34), r3);
        MemoryInline::WriteResolved16(guest_range_1, 36u, (r4 + 36), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 38u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_1, 38u, (r4 + 38), r3);
        MemoryInline::WriteResolved16(guest_range_1, 40u, (r4 + 40), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 42u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_1, 42u, (r4 + 42), r3);
        MemoryInline::WriteResolved16(guest_range_1, 44u, (r4 + 44), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 46u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_1, 46u, (r4 + 46), r3);
        MemoryInline::WriteResolved16(guest_range_1, 48u, (r4 + 48), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 50u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_1, 50u, (r4 + 50), r3);
        MemoryInline::WriteResolved16(guest_range_1, 52u, (r4 + 52), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 54u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_1, 54u, (r4 + 54), r3);
        MemoryInline::WriteResolved16(guest_range_1, 56u, (r4 + 56), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 58u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_1, 58u, (r4 + 58), r3);
        MemoryInline::WriteResolved16(guest_range_1, 60u, (r4 + 60), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 62u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_1, 62u, (r4 + 62), r3);
        MemoryInline::WriteResolved16(guest_range_1, 64u, (r4 + 64), r3);
    }
    MemoryInline::WriteResolved16(guest_range_1, 66u, (r4 + 66), static_cast<uint16_t>(r3));
    r4 = (r4 + 68);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803204DC;
    }
}

loc_80320574:
{
    r27 = 0;
    r29 = 0;
    r3 = 0x806C0000u;
    r28 = (r3 + 1440);
    r21 = (r1 + 12);
    r31 = 1374420992;
    r30 = 0;
    r22 = 30;
}

loc_80320594:
{
    r25 = 0;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r27)));
    r23 = (r3 + 1);
    r3 = (r23 & 255);
    // inline leaf 0x803B1E8C (12 guest instruction(s))
}

loc_inl1_0x803B1E8C:
{
    r4 = MemoryInline::FlatRead32((r13 + -16864));
}

loc_inl1_0x803B1E94:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x803B1EA4;
    }
}

loc_inl1_0x803B1E98:
{
    r0 = (r3 & 255);
}

loc_inl1_0x803B1EA0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(8))) {
        goto loc_inl1_0x803B1EAC;
    }
}

loc_inl1_0x803B1EA4:
{
    r3 = 0;
    goto loc_inl1_cont_803B1E8C;
}

loc_inl1_0x803B1EAC:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 26296));
}

loc_inl1_cont_803B1E8C:
{
    // end of inlined leaf 0x803B1E8C
    r24 = r3;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & -2);
    r3 = (r3 + 1);
    ctx->lr = 0x803205B8u;
    if constexpr (KnownRegArgsCpuCall<0x800CF80Cu>(&func_800CF80C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->ctr = ctr;
        const auto regargs_result_800CF80C_2E51 = func_800CF80C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CF80C_2E51);
        r4 = static_cast<uint32_t>(regargs_result_800CF80C_2E51 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800CF80Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r26 = r3;
    r4 = 0;
    r0 = (r24 + 1);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & -2);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r23 & 255);
    r4 = r26;
    if constexpr (KnownRegArgsCpuCall<0x803B1EBCu>(&func_803B1EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_803B1EBC_39C7 = func_803B1EBC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803B1EBC_39C7);
        r4 = static_cast<uint32_t>(regargs_result_803B1EBC_39C7 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x803B1EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r23 = r26;
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 64u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_3, 4u, (r1 + 12), r30);
        MemoryInline::WriteResolved16(guest_range_3, 6u, (r1 + 14), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_3, 8u, (r1 + 16), r30);
        MemoryInline::WriteResolved16(guest_range_3, 10u, (r1 + 18), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_3, 12u, (r1 + 20), r30);
        MemoryInline::WriteResolved16(guest_range_3, 14u, (r1 + 22), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_3, 16u, (r1 + 24), r30);
        MemoryInline::WriteResolved16(guest_range_3, 18u, (r1 + 26), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_3, 20u, (r1 + 28), r30);
        MemoryInline::WriteResolved16(guest_range_3, 22u, (r1 + 30), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_3, 24u, (r1 + 32), r30);
        MemoryInline::WriteResolved16(guest_range_3, 26u, (r1 + 34), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_3, 28u, (r1 + 36), r30);
        MemoryInline::WriteResolved16(guest_range_3, 30u, (r1 + 38), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_3, 32u, (r1 + 40), r30);
        MemoryInline::WriteResolved16(guest_range_3, 34u, (r1 + 42), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 36u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_3, 36u, (r1 + 44), r30);
        MemoryInline::WriteResolved16(guest_range_3, 38u, (r1 + 46), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 40u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_3, 40u, (r1 + 48), r30);
        MemoryInline::WriteResolved16(guest_range_3, 42u, (r1 + 50), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 44u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_3, 44u, (r1 + 52), r30);
        MemoryInline::WriteResolved16(guest_range_3, 46u, (r1 + 54), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 48u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_3, 48u, (r1 + 56), r30);
        MemoryInline::WriteResolved16(guest_range_3, 50u, (r1 + 58), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 52u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_3, 52u, (r1 + 60), r30);
        MemoryInline::WriteResolved16(guest_range_3, 54u, (r1 + 62), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 56u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_3, 56u, (r1 + 64), r30);
        MemoryInline::WriteResolved16(guest_range_3, 58u, (r1 + 66), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 60u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_3, 60u, (r1 + 68), r30);
        MemoryInline::WriteResolved16(guest_range_3, 62u, (r1 + 70), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_3, 0u, (r1 + 8), r30);
        MemoryInline::WriteResolved16(guest_range_3, 2u, (r1 + 10), r30);
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r27)));
    r0 = (r3 + -2);
}

loc_80320668:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_80320704;
    }
}

loc_8032066C:
{
    r3 = r26;
    ctx->lr = 0x80320674u;
    if constexpr (KnownRegArgsCpuCall<0x8031F7E0u>(&func_8031F7E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8031F7E0_5216 = func_8031F7E0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8031F7E0_5216);
        r4 = static_cast<uint32_t>(regargs_result_8031F7E0_5216 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8031F7E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
    r0 = (r0 + r24);
    r3 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r3 + -2);
}

loc_8032068C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_80320704;
    }
}

loc_80320690:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
    ctx->lr = 0x80320698u;
    if constexpr (KnownRegArgsCpuCall<0x8031FBE8u>(&func_8031FBE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8031FBE8_570E = func_8031FBE8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8031FBE8_570E);
        r4 = static_cast<uint32_t>(regargs_result_8031FBE8_570E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8031FBE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = (r3 & 65535);
    r0 = (r31 + -31457);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 100);
    r0 = (r4 - r0);
}

loc_803206BC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(30))) {
        goto loc_80320704;
    }
}

loc_803206C0:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r27)));
    r4 = r26;
    r5 = (r1 + 8);
    ctx->lr = 0x803206D0u;
    if constexpr (KnownRegArgsCpuCall<0x8031F840u>(&func_8031F840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_8031F840_5D29 = func_8031F840_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8031F840_5D29);
        r4 = static_cast<uint32_t>(regargs_result_8031F840_5D29 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8031F840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    }
    goto loc_80320704;
}

loc_803206D4:
{
}

loc_803206D8:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(50000))) {
        goto loc_80320700;
    }
}

loc_803206DC:
{
    ctx->lr = 0x803206E0u;
    if constexpr (KnownRegArgsCpuCall<0x803B1F10u>(&func_803B1F10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_803B1F10_628D = func_803B1F10_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803B1F10_628D);
        r4 = static_cast<uint32_t>(regargs_result_803B1F10_628D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803B1F10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead32((r3 + 840));
}

loc_803206E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80320700;
    }
}

loc_803206EC:
{
    r3 = MemoryInline::FlatRead16(r26);
    r0 = (r25 & 65535);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r21_addr_3 = (r21 + r0);
    MemoryInline::FlatWrite16(r21_addr_3, static_cast<uint16_t>(r3));
    r25 = (r25 + 1);
}

loc_80320700:
{
    r26 = (r26 + 2);
}

loc_80320704:
{
    r3 = MemoryInline::FlatRead16(r26);
}

loc_8032070C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803206D4;
    }
}

loc_80320710:
{
    r24 = r25;
    r26 = r23;
    goto loc_803207B0;
}

loc_8032071C:
{
}

loc_80320720:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(50000))) {
        goto loc_803207AC;
    }
}

loc_80320724:
{
    r0 = (r3 + -16000);
}

loc_8032072C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_803207AC;
    }
}

loc_80320730:
{
    ctx->lr = 0x80320734u;
    if constexpr (KnownRegArgsCpuCall<0x803B1F10u>(&func_803B1F10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_803B1F10_6B08 = func_803B1F10_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803B1F10_6B08);
        r4 = static_cast<uint32_t>(regargs_result_803B1F10_6B08 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803B1F10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead32((r3 + 840));
}

loc_8032073C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_803207AC;
    }
}

loc_80320740:
{
    ctx->lr = 0x80320744u;
    if constexpr (KnownRegArgsCpuCall<0x803B4FA4u>(&func_803B4FA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B4FA4_6FA6 = func_803B4FA4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4FA4_6FA6;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B4FA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80320748:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803207AC;
    }
}

loc_8032074C:
{
    r3 = MemoryInline::FlatRead16(r26);
    r0 = (r31 + -31457);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r3))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_3 & 1);
    r0 = (r0 + r4);
    r0 = (r0 & 65535);
}

loc_8032076C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(140))) {
        goto loc_80320778;
    }
}

loc_80320770:
{
}

loc_80320774:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(190))) {
        goto loc_8032079C;
    }
}

loc_80320778:
{
    ctx->lr = 0x8032077Cu;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8004D770u>(ctx);
    r0 = ctx->gpr[0];
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
    ctr = ctx->ctr;
}

loc_80320780:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803207AC;
    }
}

loc_80320784:
{
    r3 = MemoryInline::FlatRead16(r26);
    r0 = (r25 & 65535);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & -2);
    r21_addr_7 = (r21 + r0);
    MemoryInline::FlatWrite16(r21_addr_7, static_cast<uint16_t>(r3));
    r25 = (r25 + 1);
    goto loc_803207AC;
}

loc_8032079C:
{
    r0 = (r25 & 65535);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_9 & -2);
    r21_addr_6 = (r21 + r0);
    MemoryInline::FlatWrite16(r21_addr_6, static_cast<uint16_t>(r3));
    r25 = (r25 + 1);
}

loc_803207AC:
{
    r26 = (r26 + 2);
}

loc_803207B0:
{
    r3 = MemoryInline::FlatRead16(r26);
}

loc_803207B8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8032071C;
    }
}

loc_803207BC:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r27)));
}

loc_803207C4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(5))) {
        goto loc_803207E0;
    }
}

loc_803207C8:
{
    r0 = (r24 & 65535);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_12 & -2);
    r4 = (r1 + 12);
    r4 = (r4 + r0);
    r5 = 3;
    ctx->lr = 0x803207E0u;
    if constexpr (KnownRegArgsCpuCall<0x8031FC4Cu>(&func_8031FC4C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_8031FC4C_7EB4 = func_8031FC4C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8031FC4C_7EB4);
        r4 = static_cast<uint32_t>(regargs_result_8031FC4C_7EB4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8031FC4Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    }
}

loc_803207E0:
{
    r6 = 0;
    r3 = (r1 + 8);
}

loc_803207E8:
{
    r5 = MemoryInline::FlatRead16(r3);
}

loc_803207F0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80320828;
    }
}

loc_803207F4:
{
    r7 = 0;
    r4 = (r1 + 12);
    ctr = r22;
}

loc_80320800:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_80320808:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8032081C;
    }
}

loc_8032080C:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_15 & -2);
    r21_addr_10 = (r21 + r0);
    MemoryInline::FlatWrite16(r21_addr_10, static_cast<uint16_t>(r5));
    goto loc_80320828;
}

loc_8032081C:
{
    r4 = (r4 + 2);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80320800;
    }
}

loc_80320828:
{
    r3 = (r3 + 2);
    r6 = (r6 + 1);
}

loc_80320834:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(2))) {
        goto loc_803207E8;
    }
}

loc_80320838:
{
    r5 = 0;
    r3 = (r1 + 12);
    r4 = r28;
    r0 = (r25 & 65535);
    ctr = r0;
}

loc_80320850:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80320878;
    }
}

loc_80320854:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
}

loc_8032085C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(16))) {
        goto loc_80320868;
    }
}

loc_80320860:
{
    r0 = MemoryInline::FlatRead16(r3);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
}

loc_80320868:
{
    r3 = (r3 + 2);
    r4 = (r4 + 2);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80320854;
    }
}

loc_80320878:
{
    r3 = r23;
    ctx->lr = 0x80320880u;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800CF878u>(ctx);
    r0 = ctx->gpr[0];
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
    ctr = ctx->ctr;
    r29 = (r29 + 4);
    r28 = (r28 + 34);
    r27 = (r27 + 1);
}

loc_80320890:
{
    if ((static_cast<int32_t>(r27) <= static_cast<int32_t>(5))) {
        goto loc_80320594;
    }
}

loc_80320894:
{
    r11 = (r1 + 128);
    // inline leaf 0x804574BC (12 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    // end of inlined leaf 0x804574BC
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
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
    ctx->ctr = ctr;
    ctx->gpr[21] = r21_entry;
    ctx->gpr[22] = r22_entry;
    ctx->gpr[23] = r23_entry;
    ctx->gpr[24] = r24_entry;
    ctx->gpr[25] = r25_entry;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803204B0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803204B0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x001FFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803204B0 func_803204B0 preserves=true fpr_mask=0x00000000
