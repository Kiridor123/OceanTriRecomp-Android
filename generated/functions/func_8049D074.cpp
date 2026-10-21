#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80499DC0(CpuContext* ctx);
extern "C" uint64_t func_80499DC0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80499F10(CpuContext* ctx);
extern "C" uint64_t func_80499F10_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8049ACE0(CpuContext* ctx);
extern "C" uint32_t func_8049ACE0_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8049D6D4(CpuContext* ctx);
extern "C" void func_8049D6D4_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8049E4D0(CpuContext* ctx);
extern "C" uint64_t func_8049E4D0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8049F61C(CpuContext* ctx);
extern "C" uint64_t func_8049F61C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8049F69C(CpuContext* ctx);
extern "C" uint64_t func_8049F69C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8049D074_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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

    MKW_GUEST_ENTER(0x8049D074u);
    goto loc_8049D074;

loc_8049D074:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r31 = r5;
    r30 = r6;
    r29 = r3;
    r28 = r4;
    r4 = MemoryInline::FlatRead8(r6);
    if constexpr (KnownRegArgsCpuCall<0x8049ACE0u>(&func_8049ACE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8049ACE0_B5A = func_8049ACE0_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8049ACE0_B5A;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8049ACE0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_8049D0AC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8049D0EC;
    }
}

loc_8049D0B0:
{
}

loc_8049D0B4:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8049D360;
    }
}

loc_8049D0B8:
{
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 9;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r4 = r30;
    r3 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x8049D6D4u>(&func_8049D6D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_8049D6D4_ra18_0_0_0(ctx, r3, r4);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8049D6D4u>(ctx);
        r0 = ctx->gpr[0];
    }
    r4 = MemoryInline::FlatRead8(r30);
    r3 = r29;
    r6 = MemoryInline::FlatRead16((r30 + 18));
    r5 = (r1 + 8);
    ctx->lr = 0x8049D0E8u;
    if constexpr (KnownRegArgsCpuCall<0x80499DC0u>(&func_80499DC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80499DC0_1185 = func_80499DC0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80499DC0_1185);
        r4 = static_cast<uint32_t>(regargs_result_80499DC0_1185 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80499DC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_8049D360;
}

loc_8049D0EC:
{
}

loc_8049D0F0:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8049D160;
    }
}

loc_8049D0F4:
{
}

loc_8049D0F8:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8049D160;
    }
}

loc_8049D0FC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 81), 0, 9u, true, false);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 81));
    r6 = (r3 + 81);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 82));
    r5 = 0;
    r7 = 0;
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 9u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r1 + 8), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r1 + 9), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 83));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 84));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r1 + 10), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r1 + 11), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 85));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 86));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r1 + 12), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r1 + 13), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 87));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 88));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r1 + 14), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r1 + 15), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r3 + 89));
    r3 = r29;
    MemoryInline::WriteResolved8(guest_range_2, 8u, (r1 + 16), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8(r30);
    ctx->lr = 0x8049D15Cu;
    if constexpr (KnownRegArgsCpuCall<0x8049E4D0u>(&func_8049E4D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8049E4D0_1FD2 = func_8049E4D0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8049E4D0_1FD2);
        r4 = static_cast<uint32_t>(regargs_result_8049E4D0_1FD2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8049E4D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_8049D360;
}

loc_8049D160:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 81), 0, 9u, true, false);
    r5 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r3 + 81));
    r4 = r30;
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r3 + 82));
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 9u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r1 + 8), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r1 + 9), static_cast<uint8_t>(r0));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r3 + 83));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r3 + 84));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r1 + 10), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r1 + 11), static_cast<uint8_t>(r0));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r3 + 85));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r3 + 86));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r1 + 12), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r1 + 13), static_cast<uint8_t>(r0));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r3 + 87));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r3 + 88));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r1 + 14), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r1 + 15), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r3 + 89));
    r3 = (r1 + 8);
    MemoryInline::WriteResolved8(guest_range_3, 8u, (r1 + 16), static_cast<uint8_t>(r0));
    if constexpr (KnownRegArgsCpuCall<0x8049D6D4u>(&func_8049D6D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_8049D6D4_ra18_0_0_0(ctx, r3, r4);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8049D6D4u>(ctx);
        r0 = ctx->gpr[0];
    }
}

loc_8049D1B8:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8049D1D4;
    }
}

loc_8049D1BC:
{
    r4 = MemoryInline::FlatRead8(r30);
    r3 = r29;
    r6 = MemoryInline::FlatRead16((r30 + 18));
    r5 = (r1 + 8);
    ctx->lr = 0x8049D1D0u;
    if constexpr (KnownRegArgsCpuCall<0x80499DC0u>(&func_80499DC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80499DC0_2F50 = func_80499DC0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80499DC0_2F50);
        r4 = static_cast<uint32_t>(regargs_result_80499DC0_2F50 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80499DC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_8049D360;
}

loc_8049D1D4:
{
    r4 = MemoryInline::FlatRead8(r30);
    r3 = r29;
    if constexpr (KnownRegArgsCpuCall<0x8049ACE0u>(&func_8049ACE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8049ACE0_35DF = func_8049ACE0_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8049ACE0_35DF;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8049ACE0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_8049D1E4:
{
    r31 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8049D360;
    }
}

loc_8049D1EC:
{
    r0 = MemoryInline::FlatRead8((r3 + 105));
    r0 = (r0 & 6);
}

loc_8049D1F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8049D1FC;
    }
}

loc_8049D1F8:
{
    goto loc_8049D360;
}

loc_8049D1FC:
{
    ctx->lr = 0x8049D200u;
    if constexpr (KnownRegArgsCpuCall<0x8049F69Cu>(&func_8049F69C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8049F69C_39A9 = func_8049F69C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8049F69C_39A9);
        r4 = static_cast<uint32_t>(regargs_result_8049F69C_39A9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8049F69Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = MemoryInline::FlatRead8((r31 + 105));
    r0 = (r3 & 2);
}

loc_8049D208:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049D2B8;
    }
}

loc_8049D20C:
{
    r0 = (r3 & -3);
    guest_range_4 = MemoryInline::ResolveRangeHost((r31 + 81), 0, 25u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 24u, (r31 + 105), static_cast<uint8_t>(r0));
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 9u, true, false);
    r3 = MemoryInline::ReadResolved8(guest_range_5, 0u, (r1 + 8));
    r0 = MemoryInline::ReadResolved8(guest_range_5, 1u, (r1 + 9));
    MemoryInline::WriteResolved8(guest_range_4, 0u, (r31 + 81), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_4, 1u, (r31 + 82), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_5, 2u, (r1 + 10));
    r0 = MemoryInline::ReadResolved8(guest_range_5, 3u, (r1 + 11));
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r31 + 83), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_4, 3u, (r31 + 84), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_5, 4u, (r1 + 12));
    r0 = MemoryInline::ReadResolved8(guest_range_5, 5u, (r1 + 13));
    MemoryInline::WriteResolved8(guest_range_4, 4u, (r31 + 85), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_4, 5u, (r31 + 86), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_5, 6u, (r1 + 14));
    r0 = MemoryInline::ReadResolved8(guest_range_5, 7u, (r1 + 15));
    MemoryInline::WriteResolved8(guest_range_4, 6u, (r31 + 87), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_4, 7u, (r31 + 88), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_5, 8u, (r1 + 16));
    MemoryInline::WriteResolved8(guest_range_4, 8u, (r31 + 89), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_5, 5u, (r1 + 13));
}

loc_8049D264:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_8049D270;
    }
}

loc_8049D268:
{
}

loc_8049D26C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(48))) {
        goto loc_8049D27C;
    }
}

loc_8049D270:
{
    r0 = 16255;
    MemoryInline::FlatWrite16((r30 + 18), static_cast<uint16_t>(r0));
    goto loc_8049D2C0;
}

loc_8049D27C:
{
    r0 = 12;
    r3 = r29;
    MemoryInline::FlatWrite8((r31 + 86), static_cast<uint8_t>(r0));
    r6 = (r31 + 81);
    r5 = 1;
    r7 = 3072;
    r0 = MemoryInline::FlatRead8((r31 + 105));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite8((r31 + 105), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8(r30);
    ctx->lr = 0x8049D2A8u;
    if constexpr (KnownRegArgsCpuCall<0x8049E4D0u>(&func_8049E4D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8049E4D0_4AB6 = func_8049E4D0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8049E4D0_4AB6);
        r4 = static_cast<uint32_t>(regargs_result_8049E4D0_4AB6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8049E4D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = r31;
    r4 = 60;
    ctx->lr = 0x8049D2B4u;
    if constexpr (KnownRegArgsCpuCall<0x8049F61Cu>(&func_8049F61C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8049F61C_5150 = func_8049F61C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8049F61C_5150);
        r4 = static_cast<uint32_t>(regargs_result_8049F61C_5150 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8049F61Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_8049D360;
}

loc_8049D2B8:
{
    r0 = (r3 & -5);
    MemoryInline::FlatWrite8((r31 + 105), static_cast<uint8_t>(r0));
}

loc_8049D2C0:
{
    r3 = MemoryInline::FlatRead16((r30 + 18));
    r0 = (r3 & 3072);
}

loc_8049D2CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3072))) {
        goto loc_8049D2DC;
    }
}

loc_8049D2D0:
{
    r0 = (r3 & 12288);
}

loc_8049D2D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12288))) {
        goto loc_8049D2F4;
    }
}

loc_8049D2DC:
{
    r4 = MemoryInline::FlatRead8((r31 + 13));
    r3 = r29;
    r5 = (r1 + 8);
    r6 = 0;
    ctx->lr = 0x8049D2F0u;
    if constexpr (KnownRegArgsCpuCall<0x80499F10u>(&func_80499F10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80499F10_5A33 = func_80499F10_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80499F10_5A33);
        r4 = static_cast<uint32_t>(regargs_result_80499F10_5A33 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80499F10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_8049D360;
}

loc_8049D2F4:
{
    r0 = MemoryInline::FlatRead8((r31 + 86));
}

loc_8049D2FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_8049D33C;
    }
}

loc_8049D300:
{
    r0 = 48;
    r3 = r29;
    MemoryInline::FlatWrite8((r31 + 86), static_cast<uint8_t>(r0));
    r6 = (r31 + 81);
    r5 = 1;
    r7 = 12288;
    r0 = MemoryInline::FlatRead8((r31 + 105));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite8((r31 + 105), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8(r30);
    ctx->lr = 0x8049D32Cu;
    if constexpr (KnownRegArgsCpuCall<0x8049E4D0u>(&func_8049E4D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8049E4D0_62D3 = func_8049E4D0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8049E4D0_62D3);
        r4 = static_cast<uint32_t>(regargs_result_8049E4D0_62D3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8049E4D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = r31;
    r4 = 60;
    ctx->lr = 0x8049D338u;
    if constexpr (KnownRegArgsCpuCall<0x8049F61Cu>(&func_8049F61C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8049F61C_696D = func_8049F61C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8049F61C_696D);
        r4 = static_cast<uint32_t>(regargs_result_8049F61C_696D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8049F61Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_8049D360;
}

loc_8049D33C:
{
}

loc_8049D340:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(48))) {
        goto loc_8049D360;
    }
}

loc_8049D344:
{
    r0 = 0;
    r3 = r29;
    MemoryInline::FlatWrite8((r31 + 86), static_cast<uint8_t>(r0));
    r5 = (r1 + 8);
    r6 = 0;
    r4 = MemoryInline::FlatRead8((r31 + 13));
    ctx->lr = 0x8049D360u;
    if constexpr (KnownRegArgsCpuCall<0x80499F10u>(&func_80499F10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80499F10_714C = func_80499F10_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80499F10_714C);
        r4 = static_cast<uint32_t>(regargs_result_80499F10_714C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80499F10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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

loc_8049D360:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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

extern "C" void func_8049D074(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8049D074_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8049D074 func_8049D074 preserves=true fpr_mask=0x00000000
