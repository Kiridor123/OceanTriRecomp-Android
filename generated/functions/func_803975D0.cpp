#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80049240(CpuContext* ctx);
extern "C" uint64_t func_80049240_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8004E94C(CpuContext* ctx);
extern "C" uint64_t func_8004E94C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800CEA98(CpuContext* ctx);
extern "C" uint64_t func_800CEA98_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80272B14(CpuContext* ctx);
extern "C" uint64_t func_80272B14_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80396AF4(CpuContext* ctx);
extern "C" uint64_t func_80396AF4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80396C08(CpuContext* ctx);
extern "C" uint64_t func_80396C08_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80396C7C(CpuContext* ctx);
extern "C" uint32_t func_80396C7C_ra0_0_8_0(CpuContext*);
extern "C" void func_80396F38(CpuContext* ctx);
extern "C" uint32_t func_80396F38_ra0_0_8_0(CpuContext*);
extern "C" void func_80396F68(CpuContext* ctx);
extern "C" uint32_t func_80396F68_ra0_0_8_0(CpuContext*);
extern "C" void func_80397160(CpuContext* ctx);
extern "C" uint64_t func_80397160_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80398154(CpuContext* ctx);
extern "C" uint64_t func_80398154_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_803982B8(CpuContext* ctx);
extern "C" uint32_t func_803982B8_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80398FE0(CpuContext* ctx);
extern "C" uint64_t func_80398FE0_ra38_1fa_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_803A880C(CpuContext* ctx);
extern "C" uint32_t func_803A880C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803AB420(CpuContext* ctx);
extern "C" uint64_t func_803AB420_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_803B421C(CpuContext* ctx);
extern "C" uint32_t func_803B421C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B4CC8(CpuContext* ctx);
extern "C" uint32_t func_803B4CC8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B4D4C(CpuContext* ctx);
extern "C" uint32_t func_803B4D4C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B4DC4(CpuContext* ctx);
extern "C" uint32_t func_803B4DC4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B4E3C(CpuContext* ctx);
extern "C" uint32_t func_803B4E3C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B5E90(CpuContext* ctx);
extern "C" uint64_t func_803B5E90_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_803975D0(CpuContext* MKW_RESTRICT ctx)
{
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
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r29_rot_3 = 0;
    uint32_t r29_rot_4 = 0;
    uint32_t r29_rot_5 = 0;
    uint32_t r29_rot_6 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t ctr = ctx->ctr;

    goto loc_803975D0;

loc_803975D0:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r22 = r3;
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = 0x80660000u;
    r24 = (r3 + -21920);
    // inline leaf 0x8004D184 (5 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead32((r3 + 2396));
    MemoryInline::FlatWrite32((r13 + -17824), r3);
    // end of inlined leaf 0x8004D184
    r23 = r3;
    r28 = MemoryInline::FlatRead32((r22 + 336));
    // inline leaf 0x8004D1A4 (3 guest instruction(s))
    r3 = 0x80670000u;
    r3 = (r3 + -14744);
    // end of inlined leaf 0x8004D1A4
    r26 = r3;
    ctx->lr = 0x80397618u;
    if constexpr (KnownRegArgsCpuCall<0x803A880Cu>(&func_803A880C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803A880C_1A7F = func_803A880C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803A880C_1A7F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803A880Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r27 = r3;
    r3 = r28;
    // inline leaf 0x8039CD7C (1 guest instruction(s))
    // end of inlined leaf 0x8039CD7C
    r0 = MemoryInline::FlatRead8(r28);
}

loc_8039762C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8039763C;
    }
}

loc_80397630:
{
}

loc_80397634:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80397F9C;
    }
}

loc_80397638:
{
    goto loc_803980B4;
}

loc_8039763C:
{
    r3 = 0;
    r4 = 0;
    ctx->lr = 0x80397648u;
    if constexpr (KnownRegArgsCpuCall<0x800CEA98u>(&func_800CEA98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_800CEA98_1F81 = func_800CEA98_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800CEA98_1F81);
        r4 = static_cast<uint32_t>(regargs_result_800CEA98_1F81 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800CEA98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
}

loc_8039764C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_803980B4;
    }
}

loc_80397650:
{
    r3 = MemoryInline::FlatRead8(r28);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r0));
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r0 = (r3 & 255);
    MemoryInline::FlatWrite8((r28 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r26 + 480));
}

loc_80397678:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(10000))) {
        goto loc_8039769C;
    }
}

loc_8039767C:
{
    r0 = MemoryInline::FlatRead8((r22 + 8930));
}

loc_80397684:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80397690;
    }
}

loc_80397688:
{
    MemoryInline::FlatWrite8((r28 + 7), static_cast<uint8_t>(r0));
    goto loc_803976A4;
}

loc_80397690:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 7), static_cast<uint8_t>(r0));
    goto loc_803976A4;
}

loc_8039769C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 7), static_cast<uint8_t>(r0));
}

loc_803976A4:
{
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl5_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl5_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl5_0x800CFB10;
    }
}

loc_inl5_0x800CFB08:
{
    r3 = 0;
    goto loc_inl5_cont_800CFAF4;
}

loc_inl5_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl5_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl5_0x800CFB24;
    }
}

loc_inl5_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl5_cont_800CFAF4;
}

loc_inl5_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl5_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r0 = MemoryInline::FlatRead8((r28 + 6));
    r0 = (r0 * 2848);
    r25 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r26 + 480));
}

loc_803976C0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(10000))) {
        goto loc_803976FC;
    }
}

loc_803976C4:
{
    r0 = MemoryInline::FlatRead16((r23 + 15844));
}

loc_803976CC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(31))) {
        goto loc_803976FC;
    }
}

loc_803976D0:
{
    r3 = 0;
    ctx->lr = 0x803976D8u;
    if constexpr (KnownRegArgsCpuCall<0x803B421Cu>(&func_803B421C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B421C_2F18 = func_803B421C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B421C_2F18;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B421Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_803976E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803976F0;
    }
}

loc_803976E4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 94), static_cast<uint8_t>(r0));
    goto loc_80397704;
}

loc_803976F0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 94), static_cast<uint8_t>(r0));
    goto loc_80397704;
}

loc_803976FC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 94), static_cast<uint8_t>(r0));
}

loc_80397704:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r28 + 12396), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r28 + 16), r0);
    MemoryInline::FlatWrite32((r28 + 20), r0);
    MemoryInline::FlatWrite32((r28 + 24), r0);
    MemoryInline::FlatWrite32((r28 + 28), r0);
    MemoryInline::FlatWriteRam32((r26 + 484), r0);
    MemoryInline::FlatWrite32((r28 + 32), r0);
    MemoryInline::FlatWrite32((r28 + 36), r0);
    MemoryInline::FlatWrite32((r28 + 40), r0);
    MemoryInline::FlatWriteRam32((r26 + 488), r0);
    MemoryInline::FlatWrite32((r28 + 44), r0);
    MemoryInline::FlatWrite32((r28 + 48), r0);
    r3 = r28;
    ctx->lr = 0x80397740u;
    if constexpr (KnownRegArgsCpuCall<0x80396F68u>(&func_80396F68)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80396F68_362E = func_80396F68_ra0_0_8_0(ctx);
        r3 = regargs_result_80396F68_362E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80396F68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_80397744:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80397E30;
    }
}

loc_80397748:
{
    r3 = r25;
    r4 = 27;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80272B14_38F1 = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_38F1);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_38F1 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80272B14u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWrite8((r28 + 92), static_cast<uint8_t>(r3));
    r3 = r25;
    r4 = 41;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80272B14_3BD0 = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_3BD0);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_3BD0 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80272B14u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWrite8((r28 + 93), static_cast<uint8_t>(r3));
    r31 = MemoryInline::FlatRead32((r27 + 60));
    r0 = MemoryInline::FlatRead32((r31 + 844));
}

loc_80397774:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_803977E4;
    }
}

loc_80397778:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 9), static_cast<uint8_t>(r0));
    r3 = 0;
    ctx->lr = 0x80397788u;
    if constexpr (KnownRegArgsCpuCall<0x803B4DC4u>(&func_803B4DC4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B4DC4_401C = func_803B4DC4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4DC4_401C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B4DC4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r4 = (r3 + -1);
    r0 = (1 - r3);
    r0 = ~(r4 | r0);
    r0 = (static_cast<int32_t>(r0) >> 31);
    r4 = (r0 & 2);
    r3 = r27;
    r5 = 1;
    ctx->lr = 0x803977A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x803AA0C4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    ctr = ctx->ctr;
}

loc_803977AC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_803977DC;
    }
}

loc_803977B0:
{
    r0 = MemoryInline::FlatRead8((r22 + 250));
}

loc_803977B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_803977E4;
    }
}

loc_803977BC:
{
    r3 = MemoryInline::FlatRead32((r27 + 60));
    r0 = MemoryInline::FlatRead32((r3 + 784));
    r0 = (r0 & 8388608);
}

loc_803977CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803977DC;
    }
}

loc_803977D0:
{
    ctx->lr = 0x803977D4u;
    if constexpr (KnownRegArgsCpuCall<0x803B5E90u>(&func_803B5E90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B5E90_48DD = func_803B5E90_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803B5E90_48DD);
        r4 = static_cast<uint32_t>(regargs_result_803B5E90_48DD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B5E90u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803977D8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803977E4;
    }
}

loc_803977DC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 12), static_cast<uint8_t>(r0));
}

loc_803977E4:
{
    r3 = 0;
    ctx->lr = 0x803977ECu;
    if constexpr (KnownRegArgsCpuCall<0x803B4E3Cu>(&func_803B4E3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B4E3C_4CD2 = func_803B4E3C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4E3C_4CD2;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B4E3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803977F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80397870;
    }
}

loc_803977F4:
{
    r0 = MemoryInline::FlatRead32((r31 + 848));
}

loc_803977FC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80397824;
    }
}

loc_80397800:
{
    r25 = 1;
    MemoryInline::FlatWrite8((r28 + 10), static_cast<uint8_t>(r25));
    r3 = r27;
    r4 = 1;
    r5 = 1;
    ctx->lr = 0x80397818u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x803AA0C4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    ctr = ctx->ctr;
}

loc_8039781C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80397824;
    }
}

loc_80397820:
{
    MemoryInline::FlatWrite8((r28 + 13), static_cast<uint8_t>(r25));
}

loc_80397824:
{
    r0 = MemoryInline::FlatRead32((r31 + 852));
}

loc_8039782C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80397870;
    }
}

loc_80397830:
{
    r25 = 1;
    MemoryInline::FlatWrite8((r28 + 11), static_cast<uint8_t>(r25));
    r3 = 0;
    ctx->lr = 0x80397840u;
    if constexpr (KnownRegArgsCpuCall<0x803B4DC4u>(&func_803B4DC4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B4DC4_5697 = func_803B4DC4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4DC4_5697;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B4DC4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r4 = (r3 + -1);
    r0 = (1 - r3);
    r0 = ~(r4 | r0);
    r3 = (static_cast<int32_t>(r0) >> 31);
    r0 = 2;
    r4 = (r0 & ~r3);
    r3 = r27;
    r5 = 1;
    ctx->lr = 0x80397864u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x803AA0C4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    ctr = ctx->ctr;
}

loc_80397868:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80397870;
    }
}

loc_8039786C:
{
    MemoryInline::FlatWrite8((r28 + 14), static_cast<uint8_t>(r25));
}

loc_80397870:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 80), r0);
    MemoryInline::FlatWrite32((r28 + 84), r0);
    r3 = r28;
    ctx->lr = 0x80397884u;
    if constexpr (KnownRegArgsCpuCall<0x80396F38u>(&func_80396F38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80396F38_5E6E = func_80396F38_ra0_0_8_0(ctx);
        r3 = regargs_result_80396F38_5E6E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80396F38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_80397888:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80397B94;
    }
}

loc_8039788C:
{
    r25 = 0;
    r30 = r28;
    r31 = r22;
    r29 = r27;
}

loc_8039789C:
{
    r3 = (r27 + r25);
    r0 = MemoryInline::FlatRead8((r3 + 27008));
    MemoryInline::FlatWrite32((r30 + 44), r0);
    r0 = MemoryInline::FlatRead16((r31 + 8874));
    r0 = (r0 & 255);
    r3 = (r28 + r25);
    MemoryInline::FlatWrite8((r3 + 68), static_cast<uint8_t>(r0));
    r3 = 0;
    ctx->lr = 0x803978C0u;
    if constexpr (KnownRegArgsCpuCall<0x803B4E3Cu>(&func_803B4E3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B4E3C_62C8 = func_803B4E3C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4E3C_62C8;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B4E3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803978C4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803978DC;
    }
}

loc_803978C8:
{
    r0 = MemoryInline::FlatRead32((r27 + 752));
    MemoryInline::FlatWrite32((r30 + 52), r0);
    r0 = MemoryInline::FlatRead32((r27 + 772));
    MemoryInline::FlatWrite32((r30 + 60), r0);
    goto loc_803978EC;
}

loc_803978DC:
{
    r0 = MemoryInline::FlatRead32((r29 + 27020));
    MemoryInline::FlatWrite32((r30 + 52), r0);
    r0 = MemoryInline::FlatRead32((r29 + 27032));
    MemoryInline::FlatWrite32((r30 + 60), r0);
}

loc_803978EC:
{
    r30 = (r30 + 4);
    r31 = (r31 + 16);
    r29 = (r29 + 4);
    r25 = (r25 + 1);
}

loc_80397900:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(2))) {
        goto loc_8039789C;
    }
}

loc_80397904:
{
    r0 = MemoryInline::FlatRead8((r28 + 12));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80397910:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8039793C;
    }
}

loc_80397914:
{
    r3 = MemoryInline::FlatRead32((r27 + 744));
    r0 = MemoryInline::FlatRead8((r28 + 7));
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r0));
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r0 = MemoryInline::FlatRead8((r28 + 6));
}

loc_8039792C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8039793C;
    }
}

loc_80397930:
{
    r0 = MemoryInline::FlatRead32((r27 + 740));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    MemoryInline::FlatWrite32((r28 + 16), r0);
}

loc_8039793C:
{
    r0 = MemoryInline::FlatRead8((r28 + 13));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80397948:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8039795C;
    }
}

loc_8039794C:
{
    r3 = MemoryInline::FlatRead32((r27 + 748));
    r0 = MemoryInline::FlatRead8((r28 + 7));
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r0));
    MemoryInline::FlatWrite32((r28 + 24), r0);
}

loc_8039795C:
{
    r0 = MemoryInline::FlatRead8((r28 + 14));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80397968:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8039797C;
    }
}

loc_8039796C:
{
    r3 = MemoryInline::FlatRead32((r27 + 752));
    r0 = MemoryInline::FlatRead8((r28 + 7));
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r0));
    MemoryInline::FlatWrite32((r28 + 28), r0);
}

loc_8039797C:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -6044));
    r0 = MemoryInline::FlatRead8((r28 + 94));
}

loc_80397988:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80397994;
    }
}

loc_8039798C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -6040));
    f2.d = PpcFmulsInline(f2.d, f0.d);
}

loc_80397994:
{
    r0 = MemoryInline::FlatRead8((r28 + 93));
}

loc_8039799C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803979A8;
    }
}

loc_803979A0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -6036));
    f2.d = PpcFmulsInline(f2.d, f0.d);
}

loc_803979A8:
{
    r0 = MemoryInline::FlatRead32((r28 + 20));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -6024));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r0 = MemoryInline::FlatRead32((r28 + 24));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWrite32((r28 + 24), r0);
    r0 = MemoryInline::FlatRead32((r28 + 28));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f0.d);
    r0 = fctiwzword2;
    MemoryInline::FlatWrite32((r28 + 28), r0);
    r0 = MemoryInline::FlatRead32((r28 + 44));
}

loc_80397A2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80397A58;
    }
}

loc_80397A30:
{
    r3 = MemoryInline::FlatRead32((r28 + 52));
    r0 = MemoryInline::FlatRead8((r28 + 7));
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r0));
    MemoryInline::FlatWrite32((r28 + 52), r0);
    r4 = MemoryInline::FlatRead32((r28 + 80));
    r3 = MemoryInline::FlatRead32((r28 + 52));
    r0 = MemoryInline::FlatRead32((r28 + 44));
    r0 = (r3 * r0);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r28 + 80), r0);
}

loc_80397A58:
{
    r0 = MemoryInline::FlatRead32((r28 + 48));
}

loc_80397A60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80397A8C;
    }
}

loc_80397A64:
{
    r3 = MemoryInline::FlatRead32((r28 + 56));
    r0 = MemoryInline::FlatRead8((r28 + 7));
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r0));
    MemoryInline::FlatWrite32((r28 + 56), r0);
    r4 = MemoryInline::FlatRead32((r28 + 80));
    r3 = MemoryInline::FlatRead32((r28 + 56));
    r0 = MemoryInline::FlatRead32((r28 + 48));
    r0 = (r3 * r0);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r28 + 80), r0);
}

loc_80397A8C:
{
    r3 = r28;
    ctx->lr = 0x80397A94u;
    if constexpr (KnownRegArgsCpuCall<0x80396C7Cu>(&func_80396C7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_80396C7C_7E0F = func_80396C7C_ra0_0_8_0(ctx);
        r3 = regargs_result_80396C7C_7E0F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80396C7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80397A98:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80397B6C;
    }
}

loc_80397A9C:
{
    r3 = MemoryInline::FlatRead16((r26 + 480));
    r3 = (r3 + -65536);
    r0 = (r3 + 5536);
    r25 = (r0 & 255);
}

loc_80397AB0:
{
    if ((static_cast<uint32_t>(r25) >= static_cast<uint32_t>(12))) {
        goto loc_80397B6C;
    }
}

loc_80397AB4:
{
    r29_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r29 = (r29_rot_1 & -4);
    r3 = (r23 + r29);
    r4 = MemoryInline::FlatRead32((r3 + 21300));
}

loc_80397AC4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80397AD4;
    }
}

loc_80397AC8:
{
    r0 = MemoryInline::FlatRead32((r26 + 328));
}

loc_80397AD0:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_80397B40;
    }
}

loc_80397AD4:
{
    r0 = MemoryInline::FlatRead32((r26 + 328));
    MemoryInline::FlatWrite32((r3 + 21300), r0);
    r0 = MemoryInline::FlatRead8((r28 + 7));
}

loc_80397AE4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80397B2C;
    }
}

loc_80397AE8:
{
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl6_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl6_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl6_0x800CFB10;
    }
}

loc_inl6_0x800CFB08:
{
    r3 = 0;
    goto loc_inl6_cont_800CFAF4;
}

loc_inl6_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl6_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl6_0x800CFB24;
    }
}

loc_inl6_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl6_cont_800CFAF4;
}

loc_inl6_0x800CFB24:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl6_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r30 = r3;
    r0 = MemoryInline::FlatRead8((r28 + 6));
}

loc_80397AFC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80397B04;
    }
}

loc_80397B00:
{
    r30 = (r3 + 2848);
}

loc_80397B04:
{
    r25 = (r25 * 52);
    r3 = (r23 + r25);
    r3 = (r3 + 17104);
    r4 = (r30 + 1482);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_8ADE = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_8ADE;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r3 = (r23 + r25);
    r3 = (r3 + 17124);
    r4 = (r30 + 1499);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_8F24 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_8F24;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    goto loc_80397B40;
}

loc_80397B2C:
{
    r3 = (r25 * 52);
    r0 = 0;
    r3 = (r23 + r3);
    MemoryInline::FlatWrite8((r3 + 17104), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 17124), static_cast<uint8_t>(r0));
}

loc_80397B40:
{
    r4 = MemoryInline::FlatRead32((r26 + 328));
    r3 = 0x80600000u;
    r3 = (r3 + -32072);
    r3_addr_1 = (r3 + r29);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 * 30);
}

loc_80397B5C:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r0))) {
        goto loc_80397B6C;
    }
}

loc_80397B60:
{
    r3 = r23;
    r4 = 15;
    // inline leaf 0x8021AD30 (18 guest instruction(s))
}

loc_inl7_0x8021AD30:
{
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl7_0x8021AD38:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(12))) {
        goto loc_inl7_0x8021AD58;
    }
}

loc_inl7_0x8021AD3C:
{
    r4 = MemoryInline::FlatRead16((r3 + 16632));
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    r0 = (r0 & 65535);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite16((r3 + 16632), static_cast<uint16_t>(r0));
    goto loc_inl7_cont_8021AD30;
}

loc_inl7_0x8021AD58:
{
    r5 = MemoryInline::FlatRead16((r3 + 16634));
    r4 = 1;
    r0 = (r6 + -12);
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r0 & 65535);
    r0 = (r5 | r0);
    MemoryInline::FlatWrite16((r3 + 16634), static_cast<uint16_t>(r0));
}

loc_inl7_cont_8021AD30:
{
    // end of inlined leaf 0x8021AD30
}

loc_80397B6C:
{
    r0 = MemoryInline::FlatRead16((r26 + 480));
}

loc_80397B74:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(14002))) {
        goto loc_80397BC0;
    }
}

loc_80397B78:
{
    r3 = 14002;
    ctx->lr = 0x80397B80u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8004D770u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    ctr = ctx->ctr;
}

loc_80397B84:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80397BC0;
    }
}

loc_80397B88:
{
    r3 = 6;
    ctx->lr = 0x80397B90u;
    if constexpr (KnownRegArgsCpuCall<0x8004E94Cu>(&func_8004E94C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8004E94C_9E5F = func_8004E94C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004E94C_9E5F);
        r4 = static_cast<uint32_t>(regargs_result_8004E94C_9E5F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x8004E94Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_80397BC0;
}

loc_80397B94:
{
    r3 = 0;
    ctx->lr = 0x80397B9Cu;
    if constexpr (KnownRegArgsCpuCall<0x803B4CC8u>(&func_803B4CC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B4CC8_A27C = func_803B4CC8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4CC8_A27C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B4CC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80397BA0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80397BB4;
    }
}

loc_80397BA4:
{
    r3 = 0;
    ctx->lr = 0x80397BACu;
    if constexpr (KnownRegArgsCpuCall<0x803B4D4Cu>(&func_803B4D4C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B4D4C_A5BD = func_803B4D4C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4D4C_A5BD;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B4D4Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80397BB0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80397BC0;
    }
}

loc_80397BB4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 12), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 13), static_cast<uint8_t>(r0));
}

loc_80397BC0:
{
    r5 = MemoryInline::FlatRead32((r28 + 28));
    r3 = MemoryInline::FlatRead32((r28 + 24));
    r4 = MemoryInline::FlatRead32((r28 + 16));
    r0 = MemoryInline::FlatRead32((r28 + 20));
    r3 = (r5 + r3);
    r0 = (r4 + r0);
    r0 = (r3 + r0);
    MemoryInline::FlatWriteRam32((r26 + 484), r0);
    r0 = MemoryInline::FlatRead8((r28 + 12));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80397BEC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80397BF8;
    }
}

loc_80397BF0:
{
    r0 = MemoryInline::FlatRead32((r27 + 760));
    MemoryInline::FlatWrite32((r28 + 32), r0);
}

loc_80397BF8:
{
    r0 = MemoryInline::FlatRead8((r28 + 13));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80397C04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80397C10;
    }
}

loc_80397C08:
{
    r0 = MemoryInline::FlatRead32((r27 + 768));
    MemoryInline::FlatWrite32((r28 + 36), r0);
}

loc_80397C10:
{
    r0 = MemoryInline::FlatRead8((r28 + 14));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80397C1C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80397C28;
    }
}

loc_80397C20:
{
    r0 = MemoryInline::FlatRead32((r27 + 772));
    MemoryInline::FlatWrite32((r28 + 40), r0);
}

loc_80397C28:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -6044));
    r0 = MemoryInline::FlatRead8((r28 + 94));
}

loc_80397C34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80397C40;
    }
}

loc_80397C38:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -6040));
    f2.d = PpcFmulsInline(f2.d, f0.d);
}

loc_80397C40:
{
    r0 = MemoryInline::FlatRead8((r28 + 92));
}

loc_80397C48:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80397C54;
    }
}

loc_80397C4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -6032));
    f2.d = PpcFmulsInline(f2.d, f0.d);
}

loc_80397C54:
{
    r0 = MemoryInline::FlatRead32((r28 + 32));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -6024));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f0.d);
    r0 = fctiwzword3;
    MemoryInline::FlatWrite32((r28 + 32), r0);
    r0 = MemoryInline::FlatRead32((r28 + 36));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r0 = fctiwzword4;
    MemoryInline::FlatWrite32((r28 + 36), r0);
    r0 = MemoryInline::FlatRead32((r28 + 40));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword5 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword5;
    MemoryInline::FlatWrite32((r28 + 40), r0);
    r4 = MemoryInline::FlatRead32((r28 + 44));
}

loc_80397CD8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80397CF0;
    }
}

loc_80397CDC:
{
    r3 = MemoryInline::FlatRead32((r28 + 84));
    r0 = MemoryInline::FlatRead32((r28 + 60));
    r0 = (r0 * r4);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r28 + 84), r0);
}

loc_80397CF0:
{
    r4 = MemoryInline::FlatRead32((r28 + 48));
}

loc_80397CF8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80397D10;
    }
}

loc_80397CFC:
{
    r3 = MemoryInline::FlatRead32((r28 + 84));
    r0 = MemoryInline::FlatRead32((r28 + 64));
    r0 = (r0 * r4);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r28 + 84), r0);
}

loc_80397D10:
{
    r0 = MemoryInline::FlatRead8((r27 + 146));
    MemoryInline::FlatWrite8((r28 + 8), static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r28 + 84));
    r4 = MemoryInline::FlatRead32((r28 + 40));
    r3 = MemoryInline::FlatRead32((r28 + 32));
    r0 = MemoryInline::FlatRead32((r28 + 36));
    r5 = (r5 + r4);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r28 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (r0 * -20);
    r0 = (r5 + r4);
    r0 = (r3 + r0);
    MemoryInline::FlatWriteRam32((r26 + 488), r0);
    r3 = (r28 + 12400);
    r4 = (r28 + 12592);
    ctx->lr = 0x80397D54u;
    if constexpr (KnownRegArgsCpuCall<0x803AB420u>(&func_803AB420)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_803AB420_BD8B = func_803AB420_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803AB420_BD8B);
        r4 = static_cast<uint32_t>(regargs_result_803AB420_BD8B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x803AB420u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r11 = ctx->gpr[11];
    }
    r3 = r28;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x803982B8u>(&func_803982B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_803982B8_C0E5 = func_803982B8_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_803982B8_C0E5;
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x803982B8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
}

loc_80397D64:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80397D74;
    }
}

loc_80397D68:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 12384), static_cast<uint8_t>(r0));
    goto loc_80397D7C;
}

loc_80397D74:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 12384), static_cast<uint8_t>(r0));
}

loc_80397D7C:
{
    r3 = r28;
    r4 = r26;
    ctx->lr = 0x80397D88u;
    if constexpr (KnownRegArgsCpuCall<0x80396AF4u>(&func_80396AF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_80396AF4_C5CE = func_80396AF4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80396AF4_C5CE);
        r4 = static_cast<uint32_t>(regargs_result_80396AF4_C5CE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80396AF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 12316), r0);
    r29 = 0;
    r31 = r26;
    r30 = (r26 + 492);
}

loc_80397D9C:
{
    r0 = MemoryInline::FlatRead16((r31 + 492));
}

loc_80397DA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80397E04;
    }
}

loc_80397DA8:
{
    r0 = MemoryInline::FlatRead32((r28 + 12316));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3 = (r28 + r0);
    r3 = (r3 + 12282);
    r4 = r30;
    // inline leaf 0x8004A25C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A25C
    r0 = MemoryInline::FlatRead32((r28 + 12316));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 12282));
    // inline leaf 0x8029F740 (10 guest instruction(s))
}

loc_inl9_0x8029F740:
{
    r4 = 0x806B0000u;
    r4 = MemoryInline::FlatRead32((r4 + -4808));
    r0 = (r3 & 65535);
}

loc_inl9_0x8029F750:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_inl9_0x8029F758;
    }
}

loc_inl9_0x8029F754:
{
    r3 = 0;
}

loc_inl9_0x8029F758:
{
    r0 = (r3 & 65535);
    r0 = (r0 * 20);
    r3 = (r4 + r0);
}

loc_inl9_cont_8029F740:
{
    // end of inlined leaf 0x8029F740
    r5 = MemoryInline::FlatRead32((r28 + 88));
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r0 = MemoryInline::FlatRead32((r28 + 12316));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r3 = (r28 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 12284));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r4 * r0);
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r28 + 88), r0);
    r3 = MemoryInline::FlatRead32((r28 + 12316));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r28 + 12316), r0);
}

loc_80397E04:
{
    r31 = (r31 + 4);
    r30 = (r30 + 4);
    r29 = (r29 + 1);
}

loc_80397E14:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(35))) {
        goto loc_80397D9C;
    }
}

loc_80397E18:
{
    r0 = MemoryInline::FlatRead32((r26 + 484));
    MemoryInline::FlatWrite32((r28 + 72), r0);
    r0 = MemoryInline::FlatRead32((r26 + 488));
    MemoryInline::FlatWrite32((r28 + 76), r0);
    r3 = r26;
    ctx->lr = 0x80397E30u;
    if constexpr (KnownRegArgsCpuCall<0x80396C08u>(&func_80396C08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80396C08_D4A6 = func_80396C08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80396C08_D4A6);
        r4 = static_cast<uint32_t>(regargs_result_80396C08_D4A6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80396C08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_80397E30:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 12398), static_cast<uint8_t>(r0));
    r8 = 0;
    r6 = r22;
    r7 = r28;
    r5 = 1;
    r0 = 8;
}

loc_80397E4C:
{
    r4 = MemoryInline::FlatRead32((r6 + 328));
    r3 = MemoryInline::FlatRead32((r24 + 2184));
    r3 = (r4 & ~r3);
    MemoryInline::FlatWrite32((r7 + 12260), r3);
    r9 = 0;
    ctr = r0;
}

loc_80397E64:
{
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r9));
    r3 = MemoryInline::FlatRead32((r7 + 12260));
    r3 = (r4 & r3);
}

loc_80397E74:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80397E84;
    }
}

loc_80397E78:
{
    r3 = MemoryInline::FlatRead8((r28 + 12398));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite8((r28 + 12398), static_cast<uint8_t>(r3));
}

loc_80397E84:
{
    r9 = (r9 + 1);
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r9));
    r3 = MemoryInline::FlatRead32((r7 + 12260));
    r3 = (r4 & r3);
}

loc_80397E98:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80397EA8;
    }
}

loc_80397E9C:
{
    r3 = MemoryInline::FlatRead8((r28 + 12398));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite8((r28 + 12398), static_cast<uint8_t>(r3));
}

loc_80397EA8:
{
    r9 = (r9 + 1);
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r9));
    r3 = MemoryInline::FlatRead32((r7 + 12260));
    r3 = (r4 & r3);
}

loc_80397EBC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80397ECC;
    }
}

loc_80397EC0:
{
    r3 = MemoryInline::FlatRead8((r28 + 12398));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite8((r28 + 12398), static_cast<uint8_t>(r3));
}

loc_80397ECC:
{
    r9 = (r9 + 1);
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r9));
    r3 = MemoryInline::FlatRead32((r7 + 12260));
    r3 = (r4 & r3);
}

loc_80397EE0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80397EF0;
    }
}

loc_80397EE4:
{
    r3 = MemoryInline::FlatRead8((r28 + 12398));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite8((r28 + 12398), static_cast<uint8_t>(r3));
}

loc_80397EF0:
{
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80397E64;
    }
}

loc_80397EF8:
{
    r24 = (r24 + 4);
    r6 = (r6 + 4);
    r7 = (r7 + 4);
    r8 = (r8 + 1);
}

loc_80397F0C:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(2))) {
        goto loc_80397E4C;
    }
}

loc_80397F10:
{
    r3 = (r22 + 328);
    // inline leaf 0x8004E920 (11 guest instruction(s))
    r4 = 0x80660000u;
    r5 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r5 + 2184));
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r4 | r0);
    MemoryInline::FlatWriteRam32((r5 + 2184), r0);
    r4 = MemoryInline::FlatRead32((r5 + 2188));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r4 | r0);
    MemoryInline::FlatWriteRam32((r5 + 2188), r0);
    // end of inlined leaf 0x8004E920
    r24 = MemoryInline::FlatRead16((r23 + 21218));
    r3 = 0x805F0000u;
    r22 = (r3 + 7444);
    goto loc_80397F5C;
}

loc_80397F28:
{
    ctx->lr = 0x80397F2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8004D770u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    ctr = ctx->ctr;
}

loc_80397F30:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80397F58;
    }
}

loc_80397F34:
{
    r3 = MemoryInline::FlatRead16((r22 + 2));
    // inline leaf 0x8004D800 (11 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r5 = MemoryInline::FlatRead16((r4 + 21218));
    r4 = 1;
    r0 = (r3 + -9000);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x8004D800
}

loc_80397F40:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80397F58;
    }
}

loc_80397F44:
{
    r3 = MemoryInline::FlatRead16((r22 + 2));
    // inline leaf 0x8004D7D8 (10 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r13 + -17824));
    r5 = MemoryInline::FlatRead16((r6 + 21218));
    r4 = 1;
    r0 = (r3 + -9000);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r0 & 65535);
    r0 = (r5 | r0);
    MemoryInline::FlatWrite16((r6 + 21218), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004D7D8
    r3 = MemoryInline::FlatRead8((r28 + 12398));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r28 + 12398), static_cast<uint8_t>(r0));
}

loc_80397F58:
{
    r22 = (r22 + 6);
}

loc_80397F5C:
{
    r3 = MemoryInline::FlatRead16(r22);
}

loc_80397F64:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80397F28;
    }
}

loc_80397F68:
{
    r0 = MemoryInline::FlatRead16((r23 + 21218));
    r0 = (r0 & ~r24);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r28 + 12268), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 12327), static_cast<uint8_t>(r0));
    r3 = r28;
    r4 = 0;
    ctx->lr = 0x80397F8Cu;
    if constexpr (KnownRegArgsCpuCall<0x80397160u>(&func_80397160)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_80397160_F0F2 = func_80397160_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80397160_F0F2);
        r4 = static_cast<uint32_t>(regargs_result_80397160_F0F2 >> 32);
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
        InvokeDirectCpu<0x80397160u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
}

loc_80397F90:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803980B4;
    }
}

loc_80397F94:
{
    r3 = 1;
    goto loc_803980B8;
}

loc_80397F9C:
{
    r3 = MemoryInline::FlatRead16((r28 + 12396));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80397FA4:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80397FB0;
    }
}

loc_80397FA8:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r28 + 12396), static_cast<uint16_t>(r0));
}

loc_80397FB0:
{
    r0 = MemoryInline::FlatRead8((r28 + 1));
}

loc_80397FB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80397FD8;
    }
}

loc_80397FBC:
{
}

loc_80397FC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80397FE8;
    }
}

loc_80397FC4:
{
}

loc_80397FC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80398008;
    }
}

loc_80397FCC:
{
}

loc_80397FD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80398080;
    }
}

loc_80397FD4:
{
    goto loc_803980A0;
}

loc_80397FD8:
{
    // inline leaf 0x80058F4C (8 guest instruction(s))
}

loc_inl13_0x80058F4C:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 2152));
}

loc_inl13_0x80058F5C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_inl13_return;
    }
}

loc_inl13_0x80058F60:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r3 + 2153), static_cast<uint8_t>(r0));
    goto loc_inl13_cont_80058F4C;
}

loc_inl13_return:
{
}

loc_inl13_cont_80058F4C:
{
    // end of inlined leaf 0x80058F4C
    r3 = r28;
    ctx->lr = 0x80397FE4u;
    if constexpr (KnownRegArgsCpuCall<0x80398154u>(&func_80398154)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_80398154_FCE7 = func_80398154_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80398154_FCE7);
        r4 = static_cast<uint32_t>(regargs_result_80398154_FCE7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80398154u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctr = ctx->ctr;
    }
    goto loc_803980A0;
}

loc_80397FE8:
{
    r3 = r28;
    ctx->lr = 0x80397FF0u;
    if constexpr (KnownRegArgsCpuCall<0x80398FE0u>(&func_80398FE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_80398FE0_10564 = func_80398FE0_ra38_1fa_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80398FE0_10564);
        r4 = static_cast<uint32_t>(regargs_result_80398FE0_10564 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80398FE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctr = ctx->ctr;
    }
}

loc_80397FF4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_803980A0;
    }
}

loc_80397FF8:
{
    r3 = MemoryInline::FlatRead8((r28 + 1));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r0));
    goto loc_803980A0;
}

loc_80398008:
{
    r3 = MemoryInline::FlatRead32((r28 + 12276));
    r3 = MH3_TickLoad(r3, 2151251976);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r28 + 12276), r0);
    r0 = MemoryInline::FlatRead32((r28 + 12276));
}

loc_8039801C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(20))) {
        goto loc_803980A0;
    }
}

loc_80398020:
{
    r22 = 0;
    MemoryInline::FlatWrite32((r28 + 12276), r22);
    r3 = r28;
    r0 = MemoryInline::FlatRead32((r28 + 12272));
    r4 = (r0 & 255);
    ctx->lr = 0x80398038u;
    if constexpr (KnownRegArgsCpuCall<0x80397160u>(&func_80397160)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_80397160_11053 = func_80397160_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80397160_11053);
        r4 = static_cast<uint32_t>(regargs_result_80397160_11053 >> 32);
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
        InvokeDirectCpu<0x80397160u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
}

loc_8039803C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80398070;
    }
}

loc_80398040:
{
    r3 = MemoryInline::FlatRead8((r28 + 1));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r0));
    // inline leaf 0x80058F6C (6 guest instruction(s))
    r0 = 0;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2152), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 2153), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80058F6C
    r0 = 16;
    MemoryInline::FlatWrite32((r28 + 12276), r0);
    r3 = MemoryInline::FlatRead16((r28 + 12396));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead32((r28 + 12276));
}

loc_80398064:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_803980A0;
    }
}

loc_80398068:
{
    MemoryInline::FlatWrite32((r28 + 12276), r3);
    goto loc_803980A0;
}

loc_80398070:
{
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r22));
    r3 = r28;
    ctx->lr = 0x8039807Cu;
    if constexpr (KnownRegArgsCpuCall<0x80398154u>(&func_80398154)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_80398154_11983 = func_80398154_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80398154_11983);
        r4 = static_cast<uint32_t>(regargs_result_80398154_11983 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80398154u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctr = ctx->ctr;
    }
    goto loc_803980A0;
}

loc_80398080:
{
    r3 = MemoryInline::FlatRead32((r28 + 12276));
    r3 = MH3_TickLoad(r3, 2151252096);
}

loc_80398088:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80398098;
    }
}

loc_8039808C:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r28 + 12276), r0);
    goto loc_803980A0;
}

loc_80398098:
{
    r3 = 1;
    goto loc_803980B8;
}

loc_803980A0:
{
    r3 = 0x803A0000u;
    r3 = (r3 + -32560);
    r4 = 0;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80049240u>(&func_80049240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->ctr = ctr;
        const auto regargs_result_80049240_12370 = func_80049240_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80049240_12370);
        r4 = static_cast<uint32_t>(regargs_result_80049240_12370 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80049240u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        ctr = ctx->ctr;
    }
}

loc_803980B4:
{
    r3 = 0;
}

loc_803980B8:
{
    r11 = (r1 + 96);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803975D0 func_803975D0 preserves=true fpr_mask=0x00000000
