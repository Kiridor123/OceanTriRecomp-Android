#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004D1F4(CpuContext* ctx);
extern "C" uint64_t func_8004D1F4_rac0_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800CECC8(CpuContext* ctx);
extern "C" uint64_t func_800CECC8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800CF80C(CpuContext* ctx);
extern "C" uint64_t func_800CF80C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800D1030(CpuContext* ctx);
extern "C" uint64_t func_800D1030_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802BED1C(CpuContext* ctx);
extern "C" uint64_t func_802BED1C_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803A9194(CpuContext* ctx);
extern "C" uint32_t func_803A9194_ra8_2_8_0(CpuContext*, uint32_t, double);
extern "C" void func_803AAF24(CpuContext* ctx);
extern "C" uint64_t func_803AAF24_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_803ADCA8(CpuContext* ctx);
extern "C" uint64_t func_803ADCA8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803ADFA4(CpuContext* ctx);
extern "C" uint64_t func_803ADFA4_ra70_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803B4414(CpuContext* ctx);
extern "C" uint64_t func_803B4414_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803B633C(CpuContext* ctx);
extern "C" uint64_t func_803B633C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_803AF518(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r28_rot_3 = 0;
    uint32_t r28_rot_4 = 0;
    uint32_t r28_rot_5 = 0;
    uint32_t r28_rot_6 = 0;
    uint32_t r28_rot_7 = 0;
    uint32_t r28_rot_8 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r29_addr_4 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r29_rot_3 = 0;
    uint32_t r29_rot_4 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r30_addr_5 = 0;
    uint32_t r30_addr_6 = 0;
    uint32_t r30_addr_7 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r30_rot_3 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_10 = 0;
    uint32_t r31_addr_11 = 0;
    uint32_t r31_addr_12 = 0;
    uint32_t r31_addr_13 = 0;
    uint32_t r31_addr_14 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r31_addr_5 = 0;
    uint32_t r31_addr_6 = 0;
    uint32_t r31_addr_7 = 0;
    uint32_t r31_addr_8 = 0;
    uint32_t r31_addr_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;

    goto loc_803AF518;

loc_803AF518:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    ctx->lr = 0x803AF530u;
    if constexpr (KnownRegArgsCpuCall<0x8004D1F4u>(&func_8004D1F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8004D1F4_14A9 = func_8004D1F4_rac0_0_18_0(ctx, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_8004D1F4_14A9);
        r4 = static_cast<uint32_t>(regargs_result_8004D1F4_14A9 >> 32);
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
        InvokeDirectCpu<0x8004D1F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r3 = 0;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl1_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB10;
    }
}

loc_inl1_0x800CFB08:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB24;
    }
}

loc_inl1_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl1_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r31 = r3;
}

loc_803AF540:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803AF9D8;
    }
}

loc_803AF544:
{
    r3 = 18432;
    ctx->lr = 0x803AF54Cu;
    if constexpr (KnownRegArgsCpuCall<0x800CF80Cu>(&func_800CF80C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        const auto regargs_result_800CF80C_1D52 = func_800CF80C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CF80C_1D52);
        r4 = static_cast<uint32_t>(regargs_result_800CF80C_1D52 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
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
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x800CF80Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
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
    MemoryInline::FlatWrite32((r31 + 336), r3);
    r4 = 2;
    MemoryInline::FlatWrite8((r31 + 250), static_cast<uint8_t>(r4));
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 272), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    MemoryInline::FlatWrite8((r3 + 27196), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = MemoryInline::FlatRead32((r3 + 60));
    r4 = 0;
    ctx->lr = 0x803AF578u;
    if constexpr (KnownRegArgsCpuCall<0x803B4414u>(&func_803B4414)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_803B4414_26F0 = func_803B4414_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803B4414_26F0);
        r4 = static_cast<uint32_t>(regargs_result_803B4414_26F0 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x803B4414u>(ctx);
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
    ctx->lr = 0x803AF57Cu;
    if constexpr (KnownRegArgsCpuCall<0x800D1030u>(&func_800D1030)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_800D1030_2D76 = func_800D1030_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800D1030_2D76);
        r4 = static_cast<uint32_t>(regargs_result_800D1030_2D76 >> 32);
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
        InvokeDirectCpu<0x800D1030u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    ctx->lr = 0x803AF580u;
    if constexpr (KnownRegArgsCpuCall<0x803ADCA8u>(&func_803ADCA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_803ADCA8_313C = func_803ADCA8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803ADCA8_313C);
        r4 = static_cast<uint32_t>(regargs_result_803ADCA8_313C >> 32);
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
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x803ADCA8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = 0;
    ctx->lr = 0x803AF588u;
    if constexpr (KnownRegArgsCpuCall<0x803ADFA4u>(&func_803ADFA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_803ADFA4_34F6 = func_803ADFA4_ra70_1fe_18_0(ctx, r4, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803ADFA4_34F6);
        r4 = static_cast<uint32_t>(regargs_result_803ADFA4_34F6 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x803ADFA4u>(ctx);
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
    r5 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = MemoryInline::FlatRead32((r5 + 60));
    r0 = MemoryInline::FlatRead8((r3 + 139));
}

loc_803AF598:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_803AF69C;
    }
}

loc_803AF59C:
{
    r3 = (r5 + 27300);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_803AF5A8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803AF5CC;
    }
}

loc_803AF5AC:
{
    r4 = 0x80660000u;
    r4 = MemoryInline::FlatRead16((r4 + -19148));
    r0 = MemoryInline::FlatRead32((r5 + 27312));
}

loc_803AF5BC:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_803AF5CC;
    }
}

loc_803AF5C0:
{
    r4 = 0;
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
}

loc_803AF5CC:
{
    r4 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = (r4 + 27300);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_803AF5DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AF690;
    }
}

loc_803AF5E0:
{
    r0 = MemoryInline::FlatRead8((r4 + 27301));
    r0 = (r0 & 1);
}

loc_803AF5EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AF608;
    }
}

loc_803AF5F0:
{
    r3 = MemoryInline::FlatRead8((r4 + 26790));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r4 + 26790), static_cast<uint8_t>(r0));
    r3 = 20;
    r4 = 3;
    ctx->lr = 0x803AF608u;
    if constexpr (KnownRegArgsCpuCall<0x803B633Cu>(&func_803B633C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_803B633C_4213 = func_803B633C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803B633C_4213);
        r4 = static_cast<uint32_t>(regargs_result_803B633C_4213 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
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
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x803B633Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
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

loc_803AF608:
{
    r4 = MemoryInline::FlatRead32((r13 + -16864));
    r0 = MemoryInline::FlatRead8((r4 + 27301));
    r0 = (r0 & 2);
}

loc_803AF618:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AF634;
    }
}

loc_803AF61C:
{
    r3 = MemoryInline::FlatRead8((r4 + 26788));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r4 + 26788), static_cast<uint8_t>(r0));
    r3 = 20;
    r4 = 1;
    ctx->lr = 0x803AF634u;
    if constexpr (KnownRegArgsCpuCall<0x803B633Cu>(&func_803B633C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_803B633C_4B0B = func_803B633C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803B633C_4B0B);
        r4 = static_cast<uint32_t>(regargs_result_803B633C_4B0B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
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
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x803B633Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
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

loc_803AF634:
{
    r4 = MemoryInline::FlatRead32((r13 + -16864));
    r0 = MemoryInline::FlatRead8((r4 + 27301));
    r0 = (r0 & 4);
}

loc_803AF644:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AF660;
    }
}

loc_803AF648:
{
    r3 = MemoryInline::FlatRead8((r4 + 26791));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r4 + 26791), static_cast<uint8_t>(r0));
    r3 = 20;
    r4 = 4;
    ctx->lr = 0x803AF660u;
    if constexpr (KnownRegArgsCpuCall<0x803B633Cu>(&func_803B633C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_803B633C_5403 = func_803B633C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803B633C_5403);
        r4 = static_cast<uint32_t>(regargs_result_803B633C_5403 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
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
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x803B633Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
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

loc_803AF660:
{
    r4 = MemoryInline::FlatRead32((r13 + -16864));
    r0 = MemoryInline::FlatRead8((r4 + 27301));
    r0 = (r0 & 8);
}

loc_803AF670:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AF69C;
    }
}

loc_803AF674:
{
    r3 = MemoryInline::FlatRead8((r4 + 26789));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r4 + 26789), static_cast<uint8_t>(r0));
    r3 = 20;
    r4 = 2;
    ctx->lr = 0x803AF68Cu;
    if constexpr (KnownRegArgsCpuCall<0x803B633Cu>(&func_803B633C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_803B633C_5CFB = func_803B633C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803B633C_5CFB);
        r4 = static_cast<uint32_t>(regargs_result_803B633C_5CFB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
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
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x803B633Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
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
    goto loc_803AF69C;
}

loc_803AF690:
{
    r4 = 0;
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
}

loc_803AF69C:
{
    ctx->lr = 0x803AF6A0u;
    if constexpr (KnownRegArgsCpuCall<0x803AAF24u>(&func_803AAF24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803AAF24_64D2 = func_803AAF24_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803AAF24_64D2);
        r4 = static_cast<uint32_t>(regargs_result_803AAF24_64D2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803AAF24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803AF6A4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803AF6DC;
    }
}

loc_803AF6A8:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -5500));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5504));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f0.d);
    r0 = fctiwzword0;
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    MemoryInline::FlatWrite32((r3 + 28), r0);
    goto loc_803AF72C;
}

loc_803AF6DC:
{
    r4 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = MemoryInline::FlatRead32((r4 + 60));
    r0 = MemoryInline::FlatRead16((r3 + 314));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -5496));
    r0 = (r0 ^ -2147483648);
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    r0 = 1127219200;
    stackword8 = r0;
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword8), static_cast<uint32_t>(stackword7));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -5500));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWrite32((r4 + 28), r0);
}

loc_803AF72C:
{
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = MemoryInline::FlatRead32((r3 + 28));
    ctx->lr = 0x803AF738u;
    if constexpr (KnownRegArgsCpuCall<0x803A9194u>(&func_803A9194)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        const auto regargs_result_803A9194_6F7F = func_803A9194_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_803A9194_6F7F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x803A9194u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r0 = MemoryInline::FlatRead8((r31 + 234));
    MemoryInline::FlatWrite8((r31 + 238), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 237));
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    MemoryInline::FlatWriteRam8((r3 + 3013), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 234));
    MemoryInline::FlatWriteRam8((r3 + 3014), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16864));
    r0 = MemoryInline::FlatRead32((r4 + 28));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -5496));
    r0 = (r0 ^ -2147483648);
    stackword9 = r0;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = 1127219200;
    stackword10 = r0;
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword10), static_cast<uint32_t>(stackword9));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -5500));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f0.d);
    r6 = fctiwzword2;
    r5 = 2;
    r3 = 0x80600000u;
    r3 = (r3 + -32636);
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_803AF7B4:
{
    if ((static_cast<int32_t>(r6) > static_cast<int32_t>(r0))) {
        goto loc_803AF7DC;
    }
}

loc_803AF7B8:
{
    r5 = 1;
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_803AF7C4:
{
    if ((static_cast<int32_t>(r6) > static_cast<int32_t>(r0))) {
        goto loc_803AF7DC;
    }
}

loc_803AF7C8:
{
    r5 = 0;
    r0 = MemoryInline::FlatRead32(r3);
}

loc_803AF7D4:
{
    if ((static_cast<int32_t>(r6) > static_cast<int32_t>(r0))) {
        goto loc_803AF7DC;
    }
}

loc_803AF7D8:
{
    r5 = -1;
}

loc_803AF7DC:
{
    MemoryInline::FlatWrite8((r4 + 27192), static_cast<uint8_t>(r5));
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = MemoryInline::FlatRead32((r3 + 60));
    r29 = MemoryInline::FlatRead8((r3 + 879));
}

loc_803AF7F0:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_803AF840;
    }
}

loc_803AF7F4:
{
    r28_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(3));
    r28 = (r28_rot_1 & -8);
    r3 = 0x80590000u;
    r31 = (r3 + -18520);
    r31_addr_1 = (r31 + r28);
    r0 = MemoryInline::FlatRead32(r31_addr_1);
}

loc_803AF808:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AF840;
    }
}

loc_803AF80C:
{
    r3 = (r1 + 8);
    r4 = r29;
    ctx->lr = 0x803AF818u;
    if constexpr (KnownRegArgsCpuCall<0x802BED1Cu>(&func_802BED1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_802BED1C_7E2C = func_802BED1C_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802BED1C_7E2C);
        r4 = static_cast<uint32_t>(regargs_result_802BED1C_7E2C >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x802BED1Cu>(ctx);
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
    r30_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r30 = (r30_rot_1 & -4);
    r3 = 0x806C0000u;
    r29 = (r3 + -6576);
    r31_addr_2 = (r31 + r28);
    r3 = MemoryInline::FlatRead32(r31_addr_2);
    ctx->lr = 0x803AF82Cu;
    if constexpr (KnownRegArgsCpuCall<0x800CF80Cu>(&func_800CF80C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        const auto regargs_result_800CF80C_8618 = func_800CF80C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CF80C_8618);
        r4 = static_cast<uint32_t>(regargs_result_800CF80C_8618 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
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
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x800CF80Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
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
    r29_addr_1 = (r29 + r30);
    MemoryInline::FlatWrite32(r29_addr_1, r3);
    r3 = (r1 + 8);
    r29_addr_2 = (r29 + r30);
    r4 = MemoryInline::FlatRead32(r29_addr_2);
    r31_addr_3 = (r31 + r28);
    r5 = MemoryInline::FlatRead32(r31_addr_3);
    ctx->lr = 0x803AF840u;
    if constexpr (KnownRegArgsCpuCall<0x800CECC8u>(&func_800CECC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        const auto regargs_result_800CECC8_8F2F = func_800CECC8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CECC8_8F2F);
        r4 = static_cast<uint32_t>(regargs_result_800CECC8_8F2F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
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
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x800CECC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
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

loc_803AF840:
{
    r27 = 0;
    r5 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = MemoryInline::FlatRead32((r5 + 60));
    r4 = MemoryInline::FlatRead8((r3 + 139));
}

loc_803AF854:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(6))) {
        goto loc_803AF85C;
    }
}

loc_803AF858:
{
    r27 = (r13 + -22588);
}

loc_803AF85C:
{
}

loc_803AF860:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(7))) {
        goto loc_803AF87C;
    }
}

loc_803AF864:
{
    r0 = MemoryInline::FlatRead8((r5 + 27300));
}

loc_803AF86C:
{
    r3 = (r13 + -22600);
    r27 = (r3 + 1);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803AF87C;
    }
}

loc_803AF878:
{
    r27 = r3;
}

loc_803AF87C:
{
}

loc_803AF880:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(11))) {
        goto loc_803AF888;
    }
}

loc_803AF884:
{
    r27 = (r13 + -22592);
}

loc_803AF888:
{
}

loc_803AF88C:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_803AF8F8;
    }
}

loc_803AF890:
{
    r3 = 0x806C0000u;
    r31 = (r3 + -6576);
    r3 = 0x80590000u;
    r30 = (r3 + -18520);
    goto loc_803AF8EC;
}

loc_803AF8A4:
{
    r29_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r29 = (r29_rot_2 & -8);
    r30_addr_2 = (r30 + r29);
    r0 = MemoryInline::FlatRead32(r30_addr_2);
}

loc_803AF8B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AF8E8;
    }
}

loc_803AF8B4:
{
    r28_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r28 = (r28_rot_4 & -4);
    r31_addr_6 = (r31 + r28);
    r0 = MemoryInline::FlatRead32(r31_addr_6);
}

loc_803AF8C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803AF8E8;
    }
}

loc_803AF8C4:
{
    r3 = (r1 + 8);
    ctx->lr = 0x803AF8CCu;
    if constexpr (KnownRegArgsCpuCall<0x802BED1Cu>(&func_802BED1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_802BED1C_9EE3 = func_802BED1C_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802BED1C_9EE3);
        r4 = static_cast<uint32_t>(regargs_result_802BED1C_9EE3 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x802BED1Cu>(ctx);
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
    r30_addr_3 = (r30 + r29);
    r3 = MemoryInline::FlatRead32(r30_addr_3);
    ctx->lr = 0x803AF8D4u;
    if constexpr (KnownRegArgsCpuCall<0x800CF80Cu>(&func_800CF80C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        const auto regargs_result_800CF80C_A62A = func_800CF80C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CF80C_A62A);
        r4 = static_cast<uint32_t>(regargs_result_800CF80C_A62A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
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
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x800CF80Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
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
    r31_addr_7 = (r31 + r28);
    MemoryInline::FlatWrite32(r31_addr_7, r3);
    r3 = (r1 + 8);
    r31_addr_8 = (r31 + r28);
    r4 = MemoryInline::FlatRead32(r31_addr_8);
    r30_addr_4 = (r30 + r29);
    r5 = MemoryInline::FlatRead32(r30_addr_4);
    ctx->lr = 0x803AF8E8u;
    if constexpr (KnownRegArgsCpuCall<0x800CECC8u>(&func_800CECC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        const auto regargs_result_800CECC8_AF41 = func_800CECC8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CECC8_AF41);
        r4 = static_cast<uint32_t>(regargs_result_800CECC8_AF41 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
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
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x800CECC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
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

loc_803AF8E8:
{
    r27 = (r27 + 1);
}

loc_803AF8EC:
{
    r4 = MemoryInline::FlatRead8(r27);
}

loc_803AF8F4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_803AF8A4;
    }
}

loc_803AF8F8:
{
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = MemoryInline::FlatRead32((r3 + 60));
    r0 = MemoryInline::FlatRead16((r3 + 44));
}

loc_803AF908:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(10000))) {
        goto loc_803AF9D8;
    }
}

loc_803AF90C:
{
    r0 = MemoryInline::FlatRead8((r3 + 139));
}

loc_803AF914:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803AF93C;
    }
}

loc_803AF918:
{
}

loc_803AF91C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803AF944;
    }
}

loc_803AF920:
{
}

loc_803AF924:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_803AF94C;
    }
}

loc_803AF928:
{
}

loc_803AF92C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_803AF954;
    }
}

loc_803AF930:
{
}

loc_803AF934:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_803AF95C;
    }
}

loc_803AF938:
{
    goto loc_803AF964;
}

loc_803AF93C:
{
    r0 = 1;
    goto loc_803AF968;
}

loc_803AF944:
{
    r0 = 2;
    goto loc_803AF968;
}

loc_803AF94C:
{
    r0 = 3;
    goto loc_803AF968;
}

loc_803AF954:
{
    r0 = 4;
    goto loc_803AF968;
}

loc_803AF95C:
{
    r0 = 5;
    goto loc_803AF968;
}

loc_803AF964:
{
    r0 = 0;
}

loc_803AF968:
{
}

loc_803AF96C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AF9D8;
    }
}

loc_803AF970:
{
    r3 = (r13 + -22584);
    r3_addr_1 = (r3 + r0);
    r4 = MemoryInline::FlatRead8(r3_addr_1);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r5 = (r5_rot_1 & -8);
    r3 = 0x80590000u;
    r0 = (r3 + -18520);
    r29 = (r0 + r5);
}

loc_803AF98C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_803AF9D8;
    }
}

loc_803AF990:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_803AF998:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AF9D8;
    }
}

loc_803AF99C:
{
    r28_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r28 = (r28_rot_7 & -4);
    r3 = 0x806C0000u;
    r31 = (r3 + -6576);
    r31_addr_11 = (r31 + r28);
    r0 = MemoryInline::FlatRead32(r31_addr_11);
}

loc_803AF9B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803AF9D8;
    }
}

loc_803AF9B4:
{
    r3 = (r1 + 8);
    ctx->lr = 0x803AF9BCu;
    if constexpr (KnownRegArgsCpuCall<0x802BED1Cu>(&func_802BED1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_802BED1C_C26E = func_802BED1C_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802BED1C_C26E);
        r4 = static_cast<uint32_t>(regargs_result_802BED1C_C26E >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x802BED1Cu>(ctx);
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
    r3 = MemoryInline::FlatRead32(r29);
    ctx->lr = 0x803AF9C4u;
    if constexpr (KnownRegArgsCpuCall<0x800CF80Cu>(&func_800CF80C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        const auto regargs_result_800CF80C_C98F = func_800CF80C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CF80C_C98F);
        r4 = static_cast<uint32_t>(regargs_result_800CF80C_C98F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
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
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x800CF80Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
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
    r31_addr_12 = (r31 + r28);
    MemoryInline::FlatWrite32(r31_addr_12, r3);
    r3 = (r1 + 8);
    r31_addr_13 = (r31 + r28);
    r4 = MemoryInline::FlatRead32(r31_addr_13);
    r5 = MemoryInline::FlatRead32(r29);
    ctx->lr = 0x803AF9D8u;
    if constexpr (KnownRegArgsCpuCall<0x800CECC8u>(&func_800CECC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        const auto regargs_result_800CECC8_D284 = func_800CECC8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CECC8_D284);
        r4 = static_cast<uint32_t>(regargs_result_800CECC8_D284 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
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
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x800CECC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
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

loc_803AF9D8:
{
    r11 = (r1 + 80);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x07FFFFFF gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803AF518 func_803AF518 preserves=true fpr_mask=0x00000000
