#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050AF4(CpuContext* ctx);
extern "C" uint64_t func_80050AF4_ra38_1e0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_80127594(CpuContext* ctx);
extern "C" uint64_t func_80127594_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801275F0(CpuContext* ctx);
extern "C" uint32_t func_801275F0_ra28_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80127748(CpuContext* ctx);
extern "C" uint64_t func_80127748_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801277CC(CpuContext* ctx);
extern "C" uint64_t func_801277CC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80127858_ra38_1e0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_80127858;

loc_80127858:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r30 = r3;
    r25 = r4;
    r24 = 0;
    r26 = 0;
    r3 = (r1 + 24);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 12);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r30;
    r4 = MemoryInline::FlatRead8((r30 + 481));
    r5 = (r1 + 8);
    ctx->lr = 0x8012789Cu;
    if constexpr (KnownRegArgsCpuCall<0x801275F0u>(&func_801275F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_801275F0_B1D = func_801275F0_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_801275F0_B1D;
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
        InvokeDirectCpu<0x801275F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r28 = r3;
    r0 = (r25 & 255);
    r0 = (r0 & 1);
}

loc_801278AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801279B8;
    }
}

loc_801278B0:
{
    r4 = MemoryInline::FlatRead8((r30 + 487));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite8((r30 + 487), static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
}

loc_801278C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801279B8;
    }
}

loc_801278C8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 487), static_cast<uint8_t>(r0));
    r31 = MemoryInline::FlatRead8((r30 + 898));
    r25 = 0;
    r24 = 0;
    r29 = (r3 & 255);
    goto loc_801279A0;
}

loc_801278E4:
{
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r5 = (r24 & 255);
    // inline leaf 0x801275CC (9 guest instruction(s))
}

loc_inl3_0x801275CC:
{
}

loc_inl3_0x801275D0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x801275DC;
    }
}

loc_inl3_0x801275D4:
{
    r3 = 3;
    goto loc_inl3_cont_801275CC;
}

loc_inl3_0x801275DC:
{
    r0 = (r5 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 2));
}

loc_inl3_cont_801275CC:
{
    // end of inlined leaf 0x801275CC
    r0 = (r3 & 65535);
    r0 = (r0 & 2);
}

loc_80127900:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012799C;
    }
}

loc_80127904:
{
    r0 = (r25 & 255);
}

loc_8012790C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80127940;
    }
}

loc_80127910:
{
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r5 = (r24 & 255);
    r6 = (r1 + 24);
    ctx->lr = 0x80127924u;
    if constexpr (KnownRegArgsCpuCall<0x80127594u>(&func_80127594)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80127594_157A = func_80127594_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80127594_157A);
        r4 = static_cast<uint32_t>(regargs_result_80127594_157A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80127594u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r31 = r24;
    r3 = (r30 + 392);
    r4 = (r1 + 24);
    ctx->lr = 0x80127934u;
    if constexpr (KnownRegArgsCpuCall<0x80050AF4u>(&func_80050AF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80050AF4_1910 = func_80050AF4_ra38_1e0_18_0(ctx, r3, r4, r5, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80050AF4_1910);
        r4 = static_cast<uint32_t>(regargs_result_80050AF4_1910 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80050AF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = MemoryInline::FlatRead32((r30 + 448));
    r27 = (r3 - r0);
    goto loc_80127998;
}

loc_80127940:
{
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r5 = (r24 & 255);
    r6 = (r1 + 12);
    ctx->lr = 0x80127954u;
    if constexpr (KnownRegArgsCpuCall<0x80127594u>(&func_80127594)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80127594_1EDD = func_80127594_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80127594_1EDD);
        r4 = static_cast<uint32_t>(regargs_result_80127594_1EDD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80127594u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r30 + 392);
    r4 = (r1 + 12);
    ctx->lr = 0x80127960u;
    if constexpr (KnownRegArgsCpuCall<0x80050AF4u>(&func_80050AF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80050AF4_2263 = func_80050AF4_ra38_1e0_18_0(ctx, r3, r4, r5, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80050AF4_2263);
        r4 = static_cast<uint32_t>(regargs_result_80050AF4_2263 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80050AF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = MemoryInline::FlatRead32((r30 + 448));
    r26 = (r3 - r0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r26)));
    // inline leaf 0x8045B1B8 (4 guest instruction(s))
    r4 = (static_cast<int32_t>(r3) >> 31);
    r0 = (r4 ^ r3);
    r3 = (r0 - r4);
    // end of inlined leaf 0x8045B1B8
    r28 = r3;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r27)));
    // inline leaf 0x8045B1B8 (4 guest instruction(s))
    r4 = (static_cast<int32_t>(r3) >> 31);
    r0 = (r4 ^ r3);
    r3 = (r0 - r4);
    // end of inlined leaf 0x8045B1B8
}

loc_80127980:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r28))) {
        goto loc_80127998;
    }
}

loc_80127984:
{
    r3 = (r1 + 24);
    r4 = (r1 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r31 = r24;
    r27 = r26;
}

loc_80127998:
{
    r25 = (r25 + 1);
}

loc_8012799C:
{
    r24 = (r24 + 1);
}

loc_801279A0:
{
    r0 = (r24 & 255);
}

loc_801279A8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r29))) {
        goto loc_801278E4;
    }
}

loc_801279AC:
{
    MemoryInline::FlatWrite8((r30 + 898), static_cast<uint8_t>(r31));
    r3 = 1;
    goto loc_80127AC8;
}

loc_801279B8:
{
    r0 = MemoryInline::FlatRead8((r30 + 896));
}

loc_801279C0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_801279E4;
    }
}

loc_801279C4:
{
    r0 = MemoryInline::FlatRead8((r30 + 897));
}

loc_801279CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801279D8;
    }
}

loc_801279D0:
{
    r24 = 1;
    goto loc_801279E4;
}

loc_801279D8:
{
}

loc_801279DC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_801279E4;
    }
}

loc_801279E0:
{
    r26 = 1;
}

loc_801279E4:
{
}

loc_801279E8:
{
    if ((static_cast<int32_t>(r24) != static_cast<int32_t>(0))) {
        goto loc_80127A2C;
    }
}

loc_801279EC:
{
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r5 = (r28 & 255);
    r6 = MemoryInline::FlatRead8((r30 + 898));
    ctx->lr = 0x80127A00u;
    if constexpr (KnownRegArgsCpuCall<0x801277CCu>(&func_801277CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_801277CC_3011 = func_801277CC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801277CC_3011);
        r4 = static_cast<uint32_t>(regargs_result_801277CC_3011 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x801277CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r31 = r3;
}

loc_80127A08:
{
    if ((static_cast<uint32_t>(r26) != static_cast<uint32_t>(1))) {
        goto loc_80127A18;
    }
}

loc_80127A0C:
{
    MemoryInline::FlatWrite8((r30 + 898), static_cast<uint8_t>(r3));
    r3 = 0;
    goto loc_80127AC8;
}

loc_80127A18:
{
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r5 = (r31 & 255);
    r6 = (r1 + 24);
    ctx->lr = 0x80127A2Cu;
    if constexpr (KnownRegArgsCpuCall<0x80127594u>(&func_80127594)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80127594_34FB = func_80127594_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80127594_34FB);
        r4 = static_cast<uint32_t>(regargs_result_80127594_34FB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80127594u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80127A2C:
{
}

loc_80127A30:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_80127A74;
    }
}

loc_80127A34:
{
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r5 = (r28 & 255);
    r6 = MemoryInline::FlatRead8((r30 + 898));
    ctx->lr = 0x80127A48u;
    if constexpr (KnownRegArgsCpuCall<0x80127748u>(&func_80127748)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80127748_3984 = func_80127748_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80127748_3984);
        r4 = static_cast<uint32_t>(regargs_result_80127748_3984 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80127748u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r25 = r3;
}

loc_80127A50:
{
    if ((static_cast<uint32_t>(r24) != static_cast<uint32_t>(1))) {
        goto loc_80127A60;
    }
}

loc_80127A54:
{
    MemoryInline::FlatWrite8((r30 + 898), static_cast<uint8_t>(r3));
    r3 = 0;
    goto loc_80127AC8;
}

loc_80127A60:
{
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r5 = (r25 & 255);
    r6 = (r1 + 12);
    ctx->lr = 0x80127A74u;
    if constexpr (KnownRegArgsCpuCall<0x80127594u>(&func_80127594)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80127594_3E6E = func_80127594_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80127594_3E6E);
        r4 = static_cast<uint32_t>(regargs_result_80127594_3E6E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80127594u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80127A74:
{
    r3 = (r30 + 392);
    r4 = (r1 + 24);
    ctx->lr = 0x80127A80u;
    if constexpr (KnownRegArgsCpuCall<0x80050AF4u>(&func_80050AF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80050AF4_420B = func_80050AF4_ra38_1e0_18_0(ctx, r3, r4, r5, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80050AF4_420B);
        r4 = static_cast<uint32_t>(regargs_result_80050AF4_420B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80050AF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = MemoryInline::FlatRead32((r30 + 448));
    r27 = (r3 - r0);
    r3 = (r30 + 392);
    r4 = (r1 + 12);
    ctx->lr = 0x80127A94u;
    if constexpr (KnownRegArgsCpuCall<0x80050AF4u>(&func_80050AF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80050AF4_476C = func_80050AF4_ra38_1e0_18_0(ctx, r3, r4, r5, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80050AF4_476C);
        r4 = static_cast<uint32_t>(regargs_result_80050AF4_476C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80050AF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = MemoryInline::FlatRead32((r30 + 448));
    r0 = (r3 - r0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    // inline leaf 0x8045B1B8 (4 guest instruction(s))
    r4 = (static_cast<int32_t>(r3) >> 31);
    r0 = (r4 ^ r3);
    r3 = (r0 - r4);
    // end of inlined leaf 0x8045B1B8
    r29 = r3;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r27)));
    // inline leaf 0x8045B1B8 (4 guest instruction(s))
    r4 = (static_cast<int32_t>(r3) >> 31);
    r0 = (r4 ^ r3);
    r3 = (r0 - r4);
    // end of inlined leaf 0x8045B1B8
}

loc_80127AB4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r29))) {
        goto loc_80127AC0;
    }
}

loc_80127AB8:
{
    MemoryInline::FlatWrite8((r30 + 898), static_cast<uint8_t>(r31));
    goto loc_80127AC4;
}

loc_80127AC0:
{
    MemoryInline::FlatWrite8((r30 + 898), static_cast<uint8_t>(r25));
}

loc_80127AC4:
{
    r3 = 0;
}

loc_80127AC8:
{
    r11 = (r1 + 80);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80127858(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80127858_ra38_1e0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003FF gpr_write=0x00000BFB gpr_return=0x00000018 fpr_read=0x00003FE1 fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80127858 func_80127858 preserves=true fpr_mask=0x00000000
