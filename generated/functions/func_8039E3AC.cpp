#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800470D8(CpuContext* ctx);
extern "C" uint64_t func_800470D8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80049240(CpuContext* ctx);
extern "C" uint64_t func_80049240_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800CEA98(CpuContext* ctx);
extern "C" uint64_t func_800CEA98_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80396F38(CpuContext* ctx);
extern "C" uint32_t func_80396F38_ra0_0_8_0(CpuContext*);
extern "C" void func_80396F68(CpuContext* ctx);
extern "C" uint32_t func_80396F68_ra0_0_8_0(CpuContext*);
extern "C" void func_80398154(CpuContext* ctx);
extern "C" uint64_t func_80398154_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_8039D2DC(CpuContext* ctx);
extern "C" uint64_t func_8039D2DC_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_8039DB60(CpuContext* ctx);
extern "C" uint64_t func_8039DB60_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8039DC2C(CpuContext* ctx);
extern "C" uint64_t func_8039DC2C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803A880C(CpuContext* ctx);
extern "C" uint32_t func_803A880C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8039E3AC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
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

    goto loc_8039E3AC;

loc_8039E3AC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r31 = MemoryInline::FlatRead32((r3 + 336));
    // inline leaf 0x8004D1A4 (3 guest instruction(s))
    r3 = 0x80670000u;
    r3 = (r3 + -14744);
    // end of inlined leaf 0x8004D1A4
    r29 = r3;
    ctx->lr = 0x8039E3D0u;
    if constexpr (KnownRegArgsCpuCall<0x803A880Cu>(&func_803A880C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803A880C_D39 = func_803A880C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803A880C_D39;
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
    r30 = r3;
    r3 = r31;
    // inline leaf 0x8039CD7C (1 guest instruction(s))
    // end of inlined leaf 0x8039CD7C
    r0 = MemoryInline::FlatRead8(r31);
}

loc_8039E3E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8039E3F4;
    }
}

loc_8039E3E8:
{
}

loc_8039E3EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8039E4FC;
    }
}

loc_8039E3F0:
{
    goto loc_8039E614;
}

loc_8039E3F4:
{
    r3 = 0;
    r4 = 0;
    ctx->lr = 0x8039E400u;
    if constexpr (KnownRegArgsCpuCall<0x800CEA98u>(&func_800CEA98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800CEA98_11CF = func_800CEA98_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800CEA98_11CF);
        r4 = static_cast<uint32_t>(regargs_result_800CEA98_11CF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800CEA98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8039E404:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8039E614;
    }
}

loc_8039E408:
{
    r3 = 0;
    ctx->lr = 0x8039E410u;
    if constexpr (KnownRegArgsCpuCall<0x800470D8u>(&func_800470D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_800470D8_15B2 = func_800470D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800470D8_15B2);
        r4 = static_cast<uint32_t>(regargs_result_800470D8_15B2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x800470D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    MemoryInline::FlatWrite32((r31 + 13296), r31);
    MemoryInline::FlatWrite32((r31 + 13320), r31);
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 2223));
}

loc_8039E428:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8039E438;
    }
}

loc_8039E42C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 7), static_cast<uint8_t>(r0));
    goto loc_8039E440;
}

loc_8039E438:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 7), static_cast<uint8_t>(r0));
}

loc_8039E440:
{
    r3 = MemoryInline::FlatRead8(r31);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r31 + 16), r0);
    MemoryInline::FlatWrite32((r31 + 20), r0);
    MemoryInline::FlatWrite32((r31 + 24), r0);
    MemoryInline::FlatWrite32((r31 + 28), r0);
    MemoryInline::FlatWrite32((r31 + 32), r0);
    MemoryInline::FlatWrite32((r31 + 36), r0);
    MemoryInline::FlatWrite32((r31 + 40), r0);
    MemoryInline::FlatWriteRam32((r29 + 488), r0);
    r3 = r31;
    ctx->lr = 0x8039E47Cu;
    if constexpr (KnownRegArgsCpuCall<0x80396F68u>(&func_80396F68)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80396F68_1DCE = func_80396F68_ra0_0_8_0(ctx);
        r3 = regargs_result_80396F68_1DCE;
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

loc_8039E480:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8039E4DC;
    }
}

loc_8039E484:
{
    r3 = r31;
    ctx->lr = 0x8039E48Cu;
    if constexpr (KnownRegArgsCpuCall<0x80396F38u>(&func_80396F38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80396F38_209F = func_80396F38_ra0_0_8_0(ctx);
        r3 = regargs_result_80396F38_209F;
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

loc_8039E490:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8039E4DC;
    }
}

loc_8039E494:
{
    r0 = MemoryInline::FlatRead32((r30 + 744));
    MemoryInline::FlatWriteRam32((r29 + 484), r0);
    r26 = 0;
    r30 = (r29 + 1012);
    r28 = (r31 + 12592);
    r27 = (r31 + 12400);
}

loc_8039E4AC:
{
    r3 = r28;
    r4 = r30;
    // inline leaf 0x8004A25C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A25C
    r4 = r3;
    r3 = r27;
    // inline leaf 0x8004A25C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A25C
    r30 = (r30 + 4);
    r28 = (r28 + 4);
    r27 = (r27 + 4);
    r26 = (r26 + 1);
}

loc_8039E4D8:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(16))) {
        goto loc_8039E4AC;
    }
}

loc_8039E4DC:
{
    r0 = MemoryInline::FlatRead32((r29 + 484));
    MemoryInline::FlatWrite32((r31 + 72), r0);
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 12398), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x8039E4F8u;
    if constexpr (KnownRegArgsCpuCall<0x8039DB60u>(&func_8039DB60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8039DB60_2927 = func_8039DB60_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8039DB60_2927);
        r4 = static_cast<uint32_t>(regargs_result_8039DB60_2927 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8039DB60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8039E614;
}

loc_8039E4FC:
{
    r3 = MemoryInline::FlatRead16((r31 + 12396));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8039E504:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8039E510;
    }
}

loc_8039E508:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 12396), static_cast<uint16_t>(r0));
}

loc_8039E510:
{
    r0 = MemoryInline::FlatRead8((r31 + 1));
}

loc_8039E518:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8039E538;
    }
}

loc_8039E51C:
{
}

loc_8039E520:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8039E548;
    }
}

loc_8039E524:
{
}

loc_8039E528:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8039E568;
    }
}

loc_8039E52C:
{
}

loc_8039E530:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8039E5E0;
    }
}

loc_8039E534:
{
    goto loc_8039E600;
}

loc_8039E538:
{
    // inline leaf 0x80058F4C (8 guest instruction(s))
}

loc_inl5_0x80058F4C:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 2152));
}

loc_inl5_0x80058F5C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x80058F60:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r3 + 2153), static_cast<uint8_t>(r0));
    goto loc_inl5_cont_80058F4C;
}

loc_inl5_return:
{
}

loc_inl5_cont_80058F4C:
{
    // end of inlined leaf 0x80058F4C
    r3 = r31;
    ctx->lr = 0x8039E544u;
    if constexpr (KnownRegArgsCpuCall<0x8039D2DCu>(&func_8039D2DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_8039D2DC_3339 = func_8039D2DC_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8039D2DC_3339);
        r4 = static_cast<uint32_t>(regargs_result_8039D2DC_3339 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8039D2DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
    goto loc_8039E600;
}

loc_8039E548:
{
    r3 = r31;
    ctx->lr = 0x8039E550u;
    if constexpr (KnownRegArgsCpuCall<0x8039DC2Cu>(&func_8039DC2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_8039DC2C_39BD = func_8039DC2C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8039DC2C_39BD);
        r4 = static_cast<uint32_t>(regargs_result_8039DC2C_39BD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8039DC2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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

loc_8039E554:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_8039E600;
    }
}

loc_8039E558:
{
    r3 = MemoryInline::FlatRead8((r31 + 1));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    goto loc_8039E600;
}

loc_8039E568:
{
    r3 = MemoryInline::FlatRead32((r31 + 12276));
    r3 = MH3_TickLoad(r3, 2151277928);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 12276), r0);
    r0 = MemoryInline::FlatRead32((r31 + 12276));
}

loc_8039E57C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(20))) {
        goto loc_8039E600;
    }
}

loc_8039E580:
{
    r30 = 0;
    MemoryInline::FlatWrite32((r31 + 12276), r30);
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r31 + 12272));
    r4 = (r0 & 255);
    ctx->lr = 0x8039E598u;
    if constexpr (KnownRegArgsCpuCall<0x8039DB60u>(&func_8039DB60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8039DB60_433D = func_8039DB60_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8039DB60_433D);
        r4 = static_cast<uint32_t>(regargs_result_8039DB60_433D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8039DB60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8039E59C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8039E5D0;
    }
}

loc_8039E5A0:
{
    r3 = MemoryInline::FlatRead8((r31 + 1));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    // inline leaf 0x80058F6C (6 guest instruction(s))
    r0 = 0;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2152), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 2153), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80058F6C
    r0 = 16;
    MemoryInline::FlatWrite32((r31 + 12276), r0);
    r3 = MemoryInline::FlatRead16((r31 + 12396));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead32((r31 + 12276));
}

loc_8039E5C4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_8039E600;
    }
}

loc_8039E5C8:
{
    MemoryInline::FlatWrite32((r31 + 12276), r3);
    goto loc_8039E600;
}

loc_8039E5D0:
{
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r30));
    r3 = r31;
    ctx->lr = 0x8039E5DCu;
    if constexpr (KnownRegArgsCpuCall<0x80398154u>(&func_80398154)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_80398154_4B2E = func_80398154_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80398154_4B2E);
        r4 = static_cast<uint32_t>(regargs_result_80398154_4B2E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80398154u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
    goto loc_8039E600;
}

loc_8039E5E0:
{
    r3 = MemoryInline::FlatRead32((r31 + 12276));
    r3 = MH3_TickLoad(r3, 2151278048);
}

loc_8039E5E8:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8039E5F8;
    }
}

loc_8039E5EC:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r31 + 12276), r0);
    goto loc_8039E600;
}

loc_8039E5F8:
{
    r3 = MemoryInline::FlatRead32((r31 + 13264));
    goto loc_8039E618;
}

loc_8039E600:
{
    r3 = 0x803A0000u;
    r3 = (r3 + -32560);
    r4 = 0;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80049240u>(&func_80049240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80049240_537B = func_80049240_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80049240_537B);
        r4 = static_cast<uint32_t>(regargs_result_80049240_537B >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80049240u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8039E614:
{
    r3 = 0;
}

loc_8039E618:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
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

extern "C" void func_8039E3AC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8039E3AC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8039E3AC func_8039E3AC preserves=true fpr_mask=0x00000000
