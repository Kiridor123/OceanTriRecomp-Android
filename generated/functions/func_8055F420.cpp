#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8046429C(CpuContext* ctx);
extern "C" uint32_t func_8046429C_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8055F420(CpuContext* ctx);
extern "C" uint64_t func_8055F420_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8055F420_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_10 = 0;
    uint32_t r4_addr_11 = 0;
    uint32_t r4_addr_12 = 0;
    uint32_t r4_addr_13 = 0;
    uint32_t r4_addr_14 = 0;
    uint32_t r4_addr_15 = 0;
    uint32_t r4_addr_16 = 0;
    uint32_t r4_addr_17 = 0;
    uint32_t r4_addr_18 = 0;
    uint32_t r4_addr_19 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_20 = 0;
    uint32_t r4_addr_21 = 0;
    uint32_t r4_addr_22 = 0;
    uint32_t r4_addr_23 = 0;
    uint32_t r4_addr_24 = 0;
    uint32_t r4_addr_25 = 0;
    uint32_t r4_addr_26 = 0;
    uint32_t r4_addr_27 = 0;
    uint32_t r4_addr_28 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r4_addr_9 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_10 = 0;
    uint32_t r5_rot_11 = 0;
    uint32_t r5_rot_12 = 0;
    uint32_t r5_rot_13 = 0;
    uint32_t r5_rot_14 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r5_rot_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_8055F420;

loc_8055F420:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
}

loc_8055F42C:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(12288))) {
        goto loc_8055F44C;
    }
}

loc_8055F448:
{
    goto loc_8055F864;
}

loc_8055F44C:
{
    r3 = (r13 + -13216);
    r4 = r30;
    r3 = MemoryInline::FlatRead32((r3 + 4));
    if constexpr (KnownRegArgsCpuCall<0x8046429Cu>(&func_8046429C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8046429C_F02 = func_8046429C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8046429C_F02;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8046429Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_8055F460:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8055F620;
    }
}

loc_8055F464:
{
}

loc_8055F468:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(12288))) {
        goto loc_8055F474;
    }
}

loc_8055F46C:
{
    r31 = r30;
    goto loc_8055F594;
}

loc_8055F474:
{
    r3 = (r13 + -13224);
    r4 = r30;
    r3 = MemoryInline::FlatRead32((r3 + 4));
    if constexpr (KnownRegArgsCpuCall<0x8046429Cu>(&func_8046429C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8046429C_12C4 = func_8046429C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8046429C_12C4;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8046429Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_8055F488:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8055F524;
    }
}

loc_8055F48C:
{
    r3 = r30;
    ctx->lr = 0x8055F494u;
    if constexpr (KnownRegArgsCpuCall<0x8055F420u>(&func_8055F420)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8055F420_1583 = func_8055F420_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8055F420_1583);
        r4 = static_cast<uint32_t>(regargs_result_8055F420_1583 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8055F420u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r29 = r3;
    r31 = 0;
    r28 = (r13 + -13216);
}

loc_8055F4A0:
{
    r3 = MemoryInline::FlatRead32(r28);
    r4 = (r29 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x8046429Cu>(&func_8046429C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8046429C_1A26 = func_8046429C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8046429C_1A26;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8046429Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_8055F4B0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8055F4F4;
    }
}

loc_8055F4B4:
{
    r4 = (r13 + -13216);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_1);
    r5 = (1 - r31);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & -4);
    r3 = (r3 - r0);
    r4_addr_2 = (r4 + r5);
    r4 = MemoryInline::FlatRead32(r4_addr_2);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r0 = (r0 + r3);
    r0 = (r0 & -2);
    r4_addr_3 = (r4 + r0);
    r31 = MemoryInline::FlatRead16(r4_addr_3);
}

loc_8055F4E4:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(12288))) {
        goto loc_8055F4EC;
    }
}

loc_8055F4E8:
{
    goto loc_8055F508;
}

loc_8055F4EC:
{
    r31 = r29;
    goto loc_8055F508;
}

loc_8055F4F4:
{
    r31 = (r31 + 1);
    r28 = (r28 + 4);
}

loc_8055F500:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(2))) {
        goto loc_8055F4A0;
    }
}

loc_8055F504:
{
    r31 = r29;
}

loc_8055F508:
{
    r3 = (r31 & 65535);
    r0 = (r29 & 65535);
}

loc_8055F514:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8055F51C;
    }
}

loc_8055F518:
{
    goto loc_8055F594;
}

loc_8055F51C:
{
    r31 = r30;
    goto loc_8055F594;
}

loc_8055F524:
{
    r31 = 0;
    r28 = (r13 + -13216);
}

loc_8055F52C:
{
    r3 = MemoryInline::FlatRead32(r28);
    r4 = r30;
    if constexpr (KnownRegArgsCpuCall<0x8046429Cu>(&func_8046429C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8046429C_22F9 = func_8046429C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8046429C_22F9;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8046429Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_8055F53C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8055F580;
    }
}

loc_8055F540:
{
    r4 = (r13 + -13216);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r4_addr_5 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_5);
    r5 = (1 - r31);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r5 = (r5_rot_3 & -4);
    r3 = (r3 - r0);
    r4_addr_6 = (r4 + r5);
    r4 = MemoryInline::FlatRead32(r4_addr_6);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & 1);
    r0 = (r0 + r3);
    r0 = (r0 & -2);
    r4_addr_7 = (r4 + r0);
    r31 = MemoryInline::FlatRead16(r4_addr_7);
}

loc_8055F570:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(12288))) {
        goto loc_8055F578;
    }
}

loc_8055F574:
{
    goto loc_8055F594;
}

loc_8055F578:
{
    r31 = r30;
    goto loc_8055F594;
}

loc_8055F580:
{
    r31 = (r31 + 1);
    r28 = (r28 + 4);
}

loc_8055F58C:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(2))) {
        goto loc_8055F52C;
    }
}

loc_8055F590:
{
    r31 = r30;
}

loc_8055F594:
{
    r29 = 0;
    r28 = (r13 + -13224);
}

loc_8055F59C:
{
    r3 = MemoryInline::FlatRead32(r28);
    r4 = (r31 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x8046429Cu>(&func_8046429C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8046429C_2AA0 = func_8046429C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8046429C_2AA0;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8046429Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_8055F5AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8055F5F0;
    }
}

loc_8055F5B0:
{
    r4 = (r13 + -13224);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r4_addr_9 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_9);
    r5 = (1 - r29);
    r5_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r5 = (r5_rot_5 & -4);
    r3 = (r3 - r0);
    r4_addr_10 = (r4 + r5);
    r4 = MemoryInline::FlatRead32(r4_addr_10);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & 1);
    r0 = (r0 + r3);
    r0 = (r0 & -2);
    r4_addr_11 = (r4 + r0);
    r4 = MemoryInline::FlatRead16(r4_addr_11);
}

loc_8055F5E0:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(12288))) {
        goto loc_8055F5E8;
    }
}

loc_8055F5E4:
{
    goto loc_8055F604;
}

loc_8055F5E8:
{
    r4 = r31;
    goto loc_8055F604;
}

loc_8055F5F0:
{
    r29 = (r29 + 1);
    r28 = (r28 + 4);
}

loc_8055F5FC:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(2))) {
        goto loc_8055F59C;
    }
}

loc_8055F600:
{
    r4 = r31;
}

loc_8055F604:
{
    r3 = (r4 & 65535);
    r0 = (r31 & 65535);
}

loc_8055F610:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8055F618;
    }
}

loc_8055F614:
{
    r30 = r4;
}

loc_8055F618:
{
    r3 = r30;
    goto loc_8055F864;
}

loc_8055F620:
{
    r3 = (r13 + -13208);
    r4 = r30;
    r3 = MemoryInline::FlatRead32((r3 + 4));
    if constexpr (KnownRegArgsCpuCall<0x8046429Cu>(&func_8046429C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8046429C_3347 = func_8046429C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8046429C_3347;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8046429Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_8055F634:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8055F7F4;
    }
}

loc_8055F638:
{
}

loc_8055F63C:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(12288))) {
        goto loc_8055F648;
    }
}

loc_8055F640:
{
    r31 = r30;
    goto loc_8055F768;
}

loc_8055F648:
{
    r3 = (r13 + -13224);
    r4 = r30;
    r3 = MemoryInline::FlatRead32((r3 + 4));
    if constexpr (KnownRegArgsCpuCall<0x8046429Cu>(&func_8046429C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8046429C_370B = func_8046429C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8046429C_370B;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8046429Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_8055F65C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8055F6F8;
    }
}

loc_8055F660:
{
    r3 = r30;
    ctx->lr = 0x8055F668u;
    if constexpr (KnownRegArgsCpuCall<0x8055F420u>(&func_8055F420)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8055F420_39CA = func_8055F420_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8055F420_39CA);
        r4 = static_cast<uint32_t>(regargs_result_8055F420_39CA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8055F420u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r28 = r3;
    r29 = 0;
    r31 = (r13 + -13208);
}

loc_8055F674:
{
    r3 = MemoryInline::FlatRead32(r31);
    r4 = (r28 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x8046429Cu>(&func_8046429C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8046429C_3E6D = func_8046429C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8046429C_3E6D;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8046429Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_8055F684:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8055F6C8;
    }
}

loc_8055F688:
{
    r4 = (r13 + -13208);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r4_addr_13 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_13);
    r5 = (1 - r29);
    r5_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r5 = (r5_rot_7 & -4);
    r3 = (r3 - r0);
    r4_addr_14 = (r4 + r5);
    r4 = MemoryInline::FlatRead32(r4_addr_14);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_11 & 1);
    r0 = (r0 + r3);
    r0 = (r0 & -2);
    r4_addr_15 = (r4 + r0);
    r31 = MemoryInline::FlatRead16(r4_addr_15);
}

loc_8055F6B8:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(12288))) {
        goto loc_8055F6C0;
    }
}

loc_8055F6BC:
{
    goto loc_8055F6DC;
}

loc_8055F6C0:
{
    r31 = r28;
    goto loc_8055F6DC;
}

loc_8055F6C8:
{
    r29 = (r29 + 1);
    r31 = (r31 + 4);
}

loc_8055F6D4:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(2))) {
        goto loc_8055F674;
    }
}

loc_8055F6D8:
{
    r31 = r28;
}

loc_8055F6DC:
{
    r3 = (r31 & 65535);
    r0 = (r28 & 65535);
}

loc_8055F6E8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8055F6F0;
    }
}

loc_8055F6EC:
{
    goto loc_8055F768;
}

loc_8055F6F0:
{
    r31 = r30;
    goto loc_8055F768;
}

loc_8055F6F8:
{
    r29 = 0;
    r28 = (r13 + -13208);
}

loc_8055F700:
{
    r3 = MemoryInline::FlatRead32(r28);
    r4 = r30;
    if constexpr (KnownRegArgsCpuCall<0x8046429Cu>(&func_8046429C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8046429C_474A = func_8046429C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8046429C_474A;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8046429Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_8055F710:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8055F754;
    }
}

loc_8055F714:
{
    r4 = (r13 + -13208);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r4_addr_17 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_17);
    r5 = (1 - r29);
    r5_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r5 = (r5_rot_9 & -4);
    r3 = (r3 - r0);
    r4_addr_18 = (r4 + r5);
    r4 = MemoryInline::FlatRead32(r4_addr_18);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_14 & 1);
    r0 = (r0 + r3);
    r0 = (r0 & -2);
    r4_addr_19 = (r4 + r0);
    r31 = MemoryInline::FlatRead16(r4_addr_19);
}

loc_8055F744:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(12288))) {
        goto loc_8055F74C;
    }
}

loc_8055F748:
{
    goto loc_8055F768;
}

loc_8055F74C:
{
    r31 = r30;
    goto loc_8055F768;
}

loc_8055F754:
{
    r29 = (r29 + 1);
    r28 = (r28 + 4);
}

loc_8055F760:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(2))) {
        goto loc_8055F700;
    }
}

loc_8055F764:
{
    r31 = r30;
}

loc_8055F768:
{
    r28 = 0;
    r29 = (r13 + -13224);
}

loc_8055F770:
{
    r3 = MemoryInline::FlatRead32(r29);
    r4 = (r31 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x8046429Cu>(&func_8046429C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8046429C_4EFB = func_8046429C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8046429C_4EFB;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8046429Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_8055F780:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8055F7C4;
    }
}

loc_8055F784:
{
    r4 = (r13 + -13224);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_16 & -4);
    r4_addr_21 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_21);
    r5 = (1 - r28);
    r5_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r5 = (r5_rot_11 & -4);
    r3 = (r3 - r0);
    r4_addr_22 = (r4 + r5);
    r4 = MemoryInline::FlatRead32(r4_addr_22);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_17 & 1);
    r0 = (r0 + r3);
    r0 = (r0 & -2);
    r4_addr_23 = (r4 + r0);
    r4 = MemoryInline::FlatRead16(r4_addr_23);
}

loc_8055F7B4:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(12288))) {
        goto loc_8055F7BC;
    }
}

loc_8055F7B8:
{
    goto loc_8055F7D8;
}

loc_8055F7BC:
{
    r4 = r31;
    goto loc_8055F7D8;
}

loc_8055F7C4:
{
    r28 = (r28 + 1);
    r29 = (r29 + 4);
}

loc_8055F7D0:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(2))) {
        goto loc_8055F770;
    }
}

loc_8055F7D4:
{
    r4 = r31;
}

loc_8055F7D8:
{
    r3 = (r4 & 65535);
    r0 = (r31 & 65535);
}

loc_8055F7E4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8055F7EC;
    }
}

loc_8055F7E8:
{
    r30 = r4;
}

loc_8055F7EC:
{
    r3 = r30;
    goto loc_8055F864;
}

loc_8055F7F4:
{
    r28 = 0;
    r29 = (r13 + -13224);
}

loc_8055F7FC:
{
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r30;
    if constexpr (KnownRegArgsCpuCall<0x8046429Cu>(&func_8046429C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8046429C_57CB = func_8046429C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8046429C_57CB;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8046429Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_8055F80C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8055F850;
    }
}

loc_8055F810:
{
    r4 = (r13 + -13224);
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_19 & -4);
    r4_addr_25 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_25);
    r5 = (1 - r28);
    r5_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r5 = (r5_rot_13 & -4);
    r3 = (r3 - r0);
    r4_addr_26 = (r4 + r5);
    r4 = MemoryInline::FlatRead32(r4_addr_26);
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_20 & 1);
    r0 = (r0 + r3);
    r0 = (r0 & -2);
    r4_addr_27 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_27);
}

loc_8055F840:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(12288))) {
        goto loc_8055F848;
    }
}

loc_8055F844:
{
    goto loc_8055F864;
}

loc_8055F848:
{
    r3 = r30;
    goto loc_8055F864;
}

loc_8055F850:
{
    r28 = (r28 + 1);
    r29 = (r29 + 4);
}

loc_8055F85C:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(2))) {
        goto loc_8055F7FC;
    }
}

loc_8055F860:
{
    r3 = r30;
}

loc_8055F864:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8055F420(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8055F420_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FB gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00003FFE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8055F420 func_8055F420 preserves=true fpr_mask=0x00000000
