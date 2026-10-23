#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004E488(CpuContext* ctx);
extern "C" uint64_t func_8004E488_ra68_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80396C7C(CpuContext* ctx);
extern "C" uint32_t func_80396C7C_ra0_0_8_0(CpuContext*);
extern "C" void func_80396CC0(CpuContext* ctx);
extern "C" uint32_t func_80396CC0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80396D10(CpuContext* ctx);
extern "C" uint64_t func_80396D10_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8039729C(CpuContext* ctx);
extern "C" uint32_t func_8039729C_ra28_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8039739C(CpuContext* ctx);
extern "C" uint64_t func_8039739C_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);

extern "C" uint64_t func_803973A8_ra38_1f8_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_803973A8;

loc_803973A8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r28 = r4;
    // inline leaf 0x8004D184 (5 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead32((r3 + 2396));
    MemoryInline::FlatWrite32((r13 + -17824), r3);
    // end of inlined leaf 0x8004D184
    r29 = r3;
    // inline leaf 0x8004D1A4 (3 guest instruction(s))
    r3 = 0x80670000u;
    r3 = (r3 + -14744);
    // end of inlined leaf 0x8004D1A4
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 12272), 0, 123u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r31 + 12272), r28);
    r30 = 0;
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r30));
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -6048));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r0 = fctiwzword0;
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r31 + 12276), r0);
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r31 + 12280), static_cast<uint8_t>(r30));
}

loc_80397414:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(1))) {
        goto loc_8039744C;
    }
}

loc_80397418:
{
}

loc_8039741C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(2))) {
        goto loc_803974A0;
    }
}

loc_80397420:
{
}

loc_80397424:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(3))) {
        goto loc_803974BC;
    }
}

loc_80397428:
{
}

loc_8039742C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(5))) {
        goto loc_803974DC;
    }
}

loc_80397430:
{
}

loc_80397434:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(6))) {
        goto loc_80397514;
    }
}

loc_80397438:
{
}

loc_8039743C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(7))) {
        goto loc_80397538;
    }
}

loc_80397440:
{
}

loc_80397444:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(8))) {
        goto loc_8039757C;
    }
}

loc_80397448:
{
    goto loc_803975B0;
}

loc_8039744C:
{
    r3 = r31;
    ctx->lr = 0x80397454u;
    if constexpr (KnownRegArgsCpuCall<0x8039729Cu>(&func_8039729C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8039729C_1226 = func_8039729C_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_8039729C_1226;
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
        InvokeDirectCpu<0x8039729Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = 3;
    MemoryInline::FlatWrite8((r31 + 12323), static_cast<uint8_t>(r0));
    r3 = r31;
    ctx->lr = 0x80397464u;
    if constexpr (KnownRegArgsCpuCall<0x80396C7Cu>(&func_80396C7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_80396C7C_157F = func_80396C7C_ra0_0_8_0(ctx);
        r3 = regargs_result_80396C7C_157F;
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

loc_80397468:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80397478;
    }
}

loc_8039746C:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 12332), static_cast<uint8_t>(r0));
    goto loc_803975B0;
}

loc_80397478:
{
    r3 = r31;
    ctx->lr = 0x80397480u;
    if constexpr (KnownRegArgsCpuCall<0x80396CC0u>(&func_80396CC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_80396CC0_1942 = func_80396CC0_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80396CC0_1942;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80396CC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80397484:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80397494;
    }
}

loc_80397488:
{
    r0 = 6;
    MemoryInline::FlatWrite8((r31 + 12332), static_cast<uint8_t>(r0));
    goto loc_803975B0;
}

loc_80397494:
{
    r0 = 5;
    MemoryInline::FlatWrite8((r31 + 12332), static_cast<uint8_t>(r0));
    goto loc_803975B0;
}

loc_803974A0:
{
    r3 = r31;
    ctx->lr = 0x803974A8u;
    if constexpr (KnownRegArgsCpuCall<0x8039729Cu>(&func_8039729C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8039729C_1D8D = func_8039729C_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_8039729C_1D8D;
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
        InvokeDirectCpu<0x8039729Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = 3;
    MemoryInline::FlatWrite8((r31 + 12323), static_cast<uint8_t>(r0));
    r0 = 6;
    MemoryInline::FlatWrite8((r31 + 12332), static_cast<uint8_t>(r0));
    goto loc_803975B0;
}

loc_803974BC:
{
    r3 = r31;
    ctx->lr = 0x803974C4u;
    if constexpr (KnownRegArgsCpuCall<0x8039729Cu>(&func_8039729C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8039729C_216A = func_8039729C_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_8039729C_216A;
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
        InvokeDirectCpu<0x8039729Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 12323), static_cast<uint8_t>(r0));
    r0 = 6;
    MemoryInline::FlatWrite8((r31 + 12332), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 12337), static_cast<uint8_t>(r30));
    goto loc_803975B0;
}

loc_803974DC:
{
    r3 = r31;
    // inline leaf 0x80397384 (6 guest instruction(s))
}

loc_inl2_0x80397384:
{
    r0 = MemoryInline::FlatRead8((r3 + 12327));
}

loc_inl2_0x8039738C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80397390:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 12327), static_cast<uint8_t>(r0));
    goto loc_inl2_cont_80397384;
}

loc_inl2_return:
{
}

loc_inl2_cont_80397384:
{
    // end of inlined leaf 0x80397384
    r4 = MemoryInline::FlatRead32((r31 + 80));
    r0 = MemoryInline::FlatRead32((r31 + 72));
    r3 = MemoryInline::FlatRead32((r31 + 88));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = (r4 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8004D14Cu>(ctx);
    MemoryInline::FlatWrite8((r31 + 12322), static_cast<uint8_t>(r30));
    r0 = 4;
    MemoryInline::FlatWrite8((r31 + 12323), static_cast<uint8_t>(r0));
    goto loc_803975B0;
}

loc_80397514:
{
    r3 = r31;
    // inline leaf 0x80397384 (6 guest instruction(s))
}

loc_inl3_0x80397384:
{
    r0 = MemoryInline::FlatRead8((r3 + 12327));
}

loc_inl3_0x8039738C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x80397390:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 12327), static_cast<uint8_t>(r0));
    goto loc_inl3_cont_80397384;
}

loc_inl3_return:
{
}

loc_inl3_cont_80397384:
{
    // end of inlined leaf 0x80397384
    r0 = MemoryInline::FlatRead16((r29 + 15844));
    MemoryInline::WriteResolved16(guest_range_0, 108u, (r31 + 12380), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r31 + 76));
    ctx->lr = 0x8039752Cu;
    if constexpr (KnownRegArgsCpuCall<0x8004E488u>(&func_8004E488)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004E488_2C8D = func_8004E488_ra68_0_18_0(ctx, r3, r5, r6);
        r3 = static_cast<uint32_t>(regargs_result_8004E488_2C8D);
        r4 = static_cast<uint32_t>(regargs_result_8004E488_2C8D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004E488u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWrite32((r31 + 12376), r3);
    MemoryInline::FlatWrite16((r31 + 12382), static_cast<uint16_t>(r30));
    goto loc_803975B0;
}

loc_80397538:
{
    r3 = r31;
    // inline leaf 0x80397384 (6 guest instruction(s))
}

loc_inl4_0x80397384:
{
    r0 = MemoryInline::FlatRead8((r3 + 12327));
}

loc_inl4_0x8039738C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x80397390:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 12327), static_cast<uint8_t>(r0));
    goto loc_inl4_cont_80397384;
}

loc_inl4_return:
{
}

loc_inl4_cont_80397384:
{
    // end of inlined leaf 0x80397384
    MemoryInline::WriteResolved8(guest_range_0, 113u, (r31 + 12385), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 114u, (r31 + 12386), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 115u, (r31 + 12387), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 116u, (r31 + 12388), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 117u, (r31 + 12389), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 118u, (r31 + 12390), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 119u, (r31 + 12391), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 120u, (r31 + 12392), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 121u, (r31 + 12393), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 122u, (r31 + 12394), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 50u, (r31 + 12322), static_cast<uint8_t>(r30));
    r0 = MemoryInline::FlatRead32((r31 + 256));
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 51u, (r31 + 12323), static_cast<uint8_t>(r0));
    goto loc_803975B0;
}

loc_8039757C:
{
    r3 = r31;
    // inline leaf 0x80397384 (6 guest instruction(s))
}

loc_inl5_0x80397384:
{
    r0 = MemoryInline::FlatRead8((r3 + 12327));
}

loc_inl5_0x8039738C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x80397390:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 12327), static_cast<uint8_t>(r0));
    goto loc_inl5_cont_80397384;
}

loc_inl5_return:
{
}

loc_inl5_cont_80397384:
{
    // end of inlined leaf 0x80397384
    r3 = r31;
    ctx->lr = 0x8039758Cu;
    if constexpr (KnownRegArgsCpuCall<0x8039739Cu>(&func_8039739C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_8039739C_3A08 = func_8039739C_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8039739C_3A08);
        r4 = static_cast<uint32_t>(regargs_result_8039739C_3A08 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8039739Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = r31;
    // inline leaf 0x80396D08 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 12398));
    // end of inlined leaf 0x80396D08
    MemoryInline::FlatWrite8((r31 + 12323), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r31 + 12322), static_cast<uint8_t>(r30));
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x80396D10u>(&func_80396D10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80396D10_4133 = func_80396D10_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80396D10_4133);
        r4 = static_cast<uint32_t>(regargs_result_80396D10_4133 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80396D10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWrite8((r31 + 12399), static_cast<uint8_t>(r3));
    r0 = 10;
    MemoryInline::FlatWrite16((r31 + 12320), static_cast<uint16_t>(r0));
}

loc_803975B0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803973A8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803973A8_ra38_1f8_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FF8 fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803973A8 func_803973A8 preserves=true fpr_mask=0x00000000
