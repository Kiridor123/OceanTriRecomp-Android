#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005B28C(CpuContext* ctx);
extern "C" uint64_t func_8005B28C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80064898(CpuContext* ctx);
extern "C" uint64_t func_80064898_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80089F00(CpuContext* ctx);
extern "C" uint32_t func_80089F00_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802BF494(CpuContext* ctx);
extern "C" uint32_t func_802BF494_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802BF698(CpuContext* ctx);
extern "C" uint64_t func_802BF698_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802C1E0C(CpuContext* ctx);
extern "C" uint64_t func_802C1E0C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802C1F04(CpuContext* ctx);
extern "C" uint64_t func_802C1F04_ra38_180_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);

extern "C" uint64_t func_802BF2E8_rae0_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r5, uint32_t arg_r6, uint32_t arg_r7, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r6 = arg_r6;
    uint32_t r7 = arg_r7;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;

    goto loc_802BF2E8;

loc_802BF2E8:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r30 = 0x806C0000u;
    r28 = (r30 + -6272);
    r3 = (r1 + 20);
    ctx->lr = 0x802BF30Cu;
    if constexpr (KnownRegArgsCpuCall<0x80064898u>(&func_80064898)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80064898_C02 = func_80064898_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80064898_C02);
        r4 = static_cast<uint32_t>(regargs_result_80064898_C02 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80064898u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = (r1 + 24);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = MemoryInline::FlatRead32((r13 + -17580));
    // inline leaf 0x802BF4C4 (2 guest instruction(s))
    r3 = (r3 + 10360);
    // end of inlined leaf 0x802BF4C4
    r31 = MemoryInline::FlatRead32((r2 + -13472));
    r3 = r28;
    r4 = 0;
    r5 = 4132;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r13 + -17580));
    // inline leaf 0x802BF4C4 (2 guest instruction(s))
    r3 = (r3 + 10360);
    // end of inlined leaf 0x802BF4C4
    r27 = r3;
    // inline leaf 0x80065218 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80065218
    r26 = r3;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r28 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r30 + -6272), static_cast<uint8_t>(r0));
    r3 = r27;
    // inline leaf 0x80065244 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16(r3);
    // end of inlined leaf 0x80065244
    r30 = r3;
    r27 = 0;
    r29 = r26;
    goto loc_802BF378;
}

loc_802BF368:
{
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8007A5C8u>(ctx);
    r29 = (r29 + 68);
    r27 = (r27 + 1);
}

loc_802BF378:
{
}

loc_802BF37C:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(r30))) {
        goto loc_802BF368;
    }
}

loc_802BF380:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r31);
    r3 = 0;
    r4 = (r1 + 16);
    ctx->lr = 0x802BF390u;
    if constexpr (KnownRegArgsCpuCall<0x802C1E0Cu>(&func_802C1E0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802C1E0C_155F = func_802C1E0C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802C1E0C_155F);
        r4 = static_cast<uint32_t>(regargs_result_802C1E0C_155F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802C1E0Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = 255;
    guest_range_0 = MemoryInline::ResolveRangeHost((r28 + 4096), 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r28 + 4096), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r28 + 4097), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r28 + 4098), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r28 + 4099), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r28 + 4100), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r28 + 4101), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r28 + 4102), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r28 + 4103), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r28 + 4104), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r28 + 4105), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r28 + 4106), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r28 + 4107), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r28 + 4108), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r28 + 4109), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r28 + 4110), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r28 + 4111), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r28 + 4112), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r28 + 4113), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r28 + 4114), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r28 + 4115), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r28 + 4116), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r28 + 4117), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r28 + 4118), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 23u, (r28 + 4119), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r28 + 4120), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 25u, (r28 + 4121), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 26u, (r28 + 4122), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 27u, (r28 + 4123), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r28 + 4124), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 29u, (r28 + 4125), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 30u, (r28 + 4126), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 31u, (r28 + 4127), static_cast<uint8_t>(r0));
    r3 = (r1 + 12);
    r4 = 96;
    r5 = 96;
    r6 = 96;
    r7 = 255;
    ctx->lr = 0x802BF42Cu;
    if constexpr (KnownRegArgsCpuCall<0x80089F00u>(&func_80089F00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80089F00_24EF = func_80089F00_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80089F00_24EF;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80089F00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 20);
    r4 = (r1 + 12);
    ctx->lr = 0x802BF438u;
    if constexpr (KnownRegArgsCpuCall<0x802BF494u>(&func_802BF494)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802BF494_27C1 = func_802BF494_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_802BF494_27C1;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802BF494u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 12);
    r4 = -1;
    ctx->lr = 0x802BF444u;
    if constexpr (KnownRegArgsCpuCall<0x8005B28Cu>(&func_8005B28C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        const auto regargs_result_8005B28C_2AFC = func_8005B28C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005B28C_2AFC);
        r4 = static_cast<uint32_t>(regargs_result_8005B28C_2AFC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r26 = ctx->gpr[26];
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
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8005B28Cu>(ctx);
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
        r26 = ctx->gpr[26];
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
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13468));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    r5 = (r1 + 8);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = r26;
    r4 = (r1 + 24);
    r6 = 0;
    ctx->lr = 0x802BF470u;
    if constexpr (KnownRegArgsCpuCall<0x802C1F04u>(&func_802C1F04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        const auto regargs_result_802C1F04_3633 = func_802C1F04_ra38_180_18_0(ctx, r3, r4, r5, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802C1F04_3633);
        r4 = static_cast<uint32_t>(regargs_result_802C1F04_3633 >> 32);
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
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802C1F04u>(ctx);
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
    r3 = r28;
    ctx->lr = 0x802BF478u;
    if constexpr (KnownRegArgsCpuCall<0x802BF698u>(&func_802BF698)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        const auto regargs_result_802BF698_3D99 = func_802BF698_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802BF698_3D99);
        r4 = static_cast<uint32_t>(regargs_result_802BF698_3D99 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x802BF698u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    }
    // inline leaf 0x802BF2DC (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite16((r13 + -17080), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x802BF2DC
    r11 = (r1 + 64);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802BF2E8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802BF2E8_rae0_1fe_18_0(ctx, ctx->gpr[5], ctx->gpr[6], ctx->gpr[7], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003F06 gpr_write=0x03FFFFFF gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802BF2E8 func_802BF2E8 preserves=true fpr_mask=0x00000000
