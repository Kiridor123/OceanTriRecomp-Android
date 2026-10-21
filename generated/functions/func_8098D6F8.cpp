#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80456C40(CpuContext* ctx);
extern "C" uint64_t func_80456C40_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8045FC94(CpuContext* ctx);
extern "C" uint32_t func_8045FC94_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804688EC(CpuContext* ctx);
extern "C" uint32_t func_804688EC_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8098D6F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r29_addr_4 = 0;
    uint32_t r29_addr_5 = 0;
    uint32_t r29_addr_6 = 0;
    uint32_t r29_addr_7 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8098D6F8u);
    goto loc_8098D6F8;

loc_8098D6F8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r31 = r3;
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_900 = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_900);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_900 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8098D718:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8098D724;
    }
}

loc_8098D71C:
{
    r3 = 0;
    goto loc_8098DB68;
}

loc_8098D724:
{
    r3 = (r1 + 32);
    r4 = r31;
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8045FBD4_C97 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_C97;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r3 = (r1 + 32);
    if constexpr (KnownRegArgsCpuCall<0x804688ECu>(&func_804688EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_804688EC_FF2 = func_804688EC_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804688EC_FF2;
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
        InvokeDirectCpu<0x804688ECu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = 0x809B0000u;
    r26 = (r3 + 10104);
    goto loc_8098D764;
}

loc_8098D744:
{
    r3 = (r1 + 32);
    r4 = MemoryInline::FlatRead32(r26);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x8098DB80u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
}

loc_8098D754:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8098D760;
    }
}

loc_8098D758:
{
    r3 = 0;
    goto loc_8098DB68;
}

loc_8098D760:
{
    r26 = (r26 + 4);
}

loc_8098D764:
{
    r0 = MemoryInline::FlatRead32(r26);
}

loc_8098D76C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8098D744;
    }
}

loc_8098D770:
{
    r3 = 0x809B0000u;
    r27 = (r3 + 12380);
    r28 = 0;
    r29 = (r1 + 20);
    goto loc_8098D828;
}

loc_8098D784:
{
    r3 = MemoryInline::FlatRead32(r27);
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_16AA = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_16AA);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_16AA >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r26 = r3;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r28));
    r3 = (r1 + 8);
    r4 = (r1 + 32);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8045FBD4_19DF = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_19DF;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r25 = 0;
    r3 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_1D2E = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_1D2E);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_1D2E >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r30 = r3;
}

loc_8098D7B4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r26))) {
        goto loc_8098D824;
    }
}

loc_8098D7B8:
{
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r28));
    r3 = (r1 + 20);
    r4 = (r1 + 8);
    r5 = r26;
    if constexpr (KnownRegArgsCpuCall<0x8045FC94u>(&func_8045FC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8045FC94_20C7 = func_8045FC94_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FC94_20C7;
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
        InvokeDirectCpu<0x8045FC94u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r29_addr_2 = (r29 + r26);
    MemoryInline::FlatWrite8(r29_addr_2, static_cast<uint8_t>(r28));
    r3 = r29;
    r4 = MemoryInline::FlatRead32(r27);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8045FD04u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8098D7E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8098D7E8;
    }
}

loc_8098D7E4:
{
    r25 = 1;
}

loc_8098D7E8:
{
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r28));
    r3 = (r1 + 20);
    r0 = (r30 - r26);
    r4 = (r1 + 8);
    r4 = (r4 + r0);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8045FBD4_2600 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_2600;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r3 = (r1 + 20);
    r4 = MemoryInline::FlatRead32(r27);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8045FD04u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8098D810:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8098D824;
    }
}

loc_8098D814:
{
}

loc_8098D818:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(1))) {
        goto loc_8098D824;
    }
}

loc_8098D81C:
{
    r3 = 0;
    goto loc_8098DB68;
}

loc_8098D824:
{
    r27 = (r27 + 4);
}

loc_8098D828:
{
    r0 = MemoryInline::FlatRead32(r27);
}

loc_8098D830:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8098D784;
    }
}

loc_8098D834:
{
    r3 = 0x809B0000u;
    r28 = (r3 + 13224);
    r29 = 0;
    goto loc_8098D8AC;
}

loc_8098D844:
{
    r3 = MemoryInline::FlatRead32(r28);
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_2C96 = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_2C96);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_2C96 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r30 = r3;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r29));
    r3 = (r1 + 8);
    r4 = (r1 + 32);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8045FBD4_2FCB = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_2FCB;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r3 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_330D = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_330D);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_330D >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = r3;
}

loc_8098D870:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r30))) {
        goto loc_8098D8A8;
    }
}

loc_8098D874:
{
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r29));
    r3 = (r1 + 20);
    r0 = (r0 - r30);
    r4 = (r1 + 8);
    r4 = (r4 + r0);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8045FBD4_36F4 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_36F4;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r3 = (r1 + 20);
    r4 = MemoryInline::FlatRead32(r28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8045FD04u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8098D89C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8098D8A8;
    }
}

loc_8098D8A0:
{
    r3 = 0;
    goto loc_8098DB68;
}

loc_8098D8A8:
{
    r28 = (r28 + 4);
}

loc_8098D8AC:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_8098D8B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8098D844;
    }
}

loc_8098D8B8:
{
    r3 = 0x809B0000u;
    r28 = (r3 + 13352);
    r30 = 0;
    r29 = (r1 + 20);
    goto loc_8098D930;
}

loc_8098D8CC:
{
    r3 = MemoryInline::FlatRead32(r28);
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_3D16 = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_3D16);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_3D16 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r27 = r3;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r30));
    r3 = (r1 + 8);
    r4 = (r1 + 32);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8045FBD4_404B = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_404B;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r3 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_438D = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_438D);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_438D >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8098D8F4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r27))) {
        goto loc_8098D92C;
    }
}

loc_8098D8F8:
{
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r30));
    r3 = (r1 + 20);
    r4 = (r1 + 8);
    r5 = r27;
    if constexpr (KnownRegArgsCpuCall<0x8045FC94u>(&func_8045FC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8045FC94_4718 = func_8045FC94_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FC94_4718;
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
        InvokeDirectCpu<0x8045FC94u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r29_addr_5 = (r29 + r27);
    MemoryInline::FlatWrite8(r29_addr_5, static_cast<uint8_t>(r30));
    r3 = r29;
    r4 = MemoryInline::FlatRead32(r28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8045FD04u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8098D920:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8098D92C;
    }
}

loc_8098D924:
{
    r3 = 0;
    goto loc_8098DB68;
}

loc_8098D92C:
{
    r28 = (r28 + 4);
}

loc_8098D930:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_8098D938:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8098D8CC;
    }
}

loc_8098D93C:
{
    r3 = (r1 + 32);
    r4 = r31;
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8045FBD4_4CC9 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_4CC9;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r3 = (r1 + 32);
    if constexpr (KnownRegArgsCpuCall<0x804688ECu>(&func_804688EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_804688EC_5026 = func_804688EC_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804688EC_5026;
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
        InvokeDirectCpu<0x804688ECu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r10 = (r1 + 32);
    r8 = 65;
    r7 = 83;
    r6 = 67;
    r5 = 73;
    r4 = 90;
    r3 = 79;
    goto loc_8098DA24;
}

loc_8098D970:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
}

loc_8098D978:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(64))) {
        goto loc_8098D980;
    }
}

loc_8098D97C:
{
    MemoryInline::FlatWrite8(r10, static_cast<uint8_t>(r8));
}

loc_8098D980:
{
    r0 = MemoryInline::FlatRead8(r10);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8098D98C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(36))) {
        goto loc_8098D994;
    }
}

loc_8098D990:
{
    MemoryInline::FlatWrite8(r10, static_cast<uint8_t>(r7));
}

loc_8098D994:
{
    r0 = MemoryInline::FlatRead8(r10);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8098D9A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(53))) {
        goto loc_8098D9A8;
    }
}

loc_8098D9A4:
{
    MemoryInline::FlatWrite8(r10, static_cast<uint8_t>(r7));
}

loc_8098D9A8:
{
    r0 = MemoryInline::FlatRead8(r10);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8098D9B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(60))) {
        goto loc_8098D9BC;
    }
}

loc_8098D9B8:
{
    MemoryInline::FlatWrite8(r10, static_cast<uint8_t>(r6));
}

loc_8098D9BC:
{
    r0 = MemoryInline::FlatRead8(r10);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8098D9C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(40))) {
        goto loc_8098D9D0;
    }
}

loc_8098D9CC:
{
    MemoryInline::FlatWrite8(r10, static_cast<uint8_t>(r6));
}

loc_8098D9D0:
{
    r0 = MemoryInline::FlatRead8(r10);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8098D9DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(33))) {
        goto loc_8098D9E4;
    }
}

loc_8098D9E0:
{
    MemoryInline::FlatWrite8(r10, static_cast<uint8_t>(r5));
}

loc_8098D9E4:
{
    r0 = MemoryInline::FlatRead8(r10);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8098D9F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(49))) {
        goto loc_8098D9F8;
    }
}

loc_8098D9F4:
{
    MemoryInline::FlatWrite8(r10, static_cast<uint8_t>(r5));
}

loc_8098D9F8:
{
    r0 = MemoryInline::FlatRead8(r10);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8098DA04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(50))) {
        goto loc_8098DA0C;
    }
}

loc_8098DA08:
{
    MemoryInline::FlatWrite8(r10, static_cast<uint8_t>(r4));
}

loc_8098DA0C:
{
    r0 = MemoryInline::FlatRead8(r10);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8098DA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(48))) {
        goto loc_8098DA20;
    }
}

loc_8098DA1C:
{
    MemoryInline::FlatWrite8(r10, static_cast<uint8_t>(r3));
}

loc_8098DA20:
{
    r10 = (r10 + 1);
}

loc_8098DA24:
{
    r9 = MemoryInline::FlatRead8(r10);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
}

loc_8098DA30:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8098D970;
    }
}

loc_8098DA34:
{
    r3 = 0x809B0000u;
    r28 = (r3 + 5456);
    r30 = 0;
    goto loc_8098DADC;
}

loc_8098DA44:
{
    r3 = MemoryInline::FlatRead32(r28);
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_5FC6 = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_5FC6);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_5FC6 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r29 = r3;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r30));
    r3 = (r1 + 8);
    r4 = (r1 + 32);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8045FBD4_62FB = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_62FB;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r27 = (r1 + 8);
    goto loc_8098DAD0;
}

loc_8098DA68:
{
    r3 = (r1 + 8);
    r4 = 32;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8098CD58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
}

loc_8098DA78:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8098DA88;
    }
}

loc_8098DA7C:
{
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r30));
    r27 = (r3 + 1);
    goto loc_8098DA8C;
}

loc_8098DA88:
{
    r27 = 0;
}

loc_8098DA8C:
{
    r3 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_6882 = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_6882);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_6882 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8098DA98:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r29))) {
        goto loc_8098DAB8;
    }
}

loc_8098DA9C:
{
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32(r28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8045FD04u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8098DAAC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8098DAB8;
    }
}

loc_8098DAB0:
{
    r3 = 0;
    goto loc_8098DB68;
}

loc_8098DAB8:
{
}

loc_8098DABC:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_8098DAD0;
    }
}

loc_8098DAC0:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r30));
    r3 = (r1 + 8);
    r4 = r27;
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8045FBD4_6E2D = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_6E2D;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
}

loc_8098DAD0:
{
}

loc_8098DAD4:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_8098DA68;
    }
}

loc_8098DAD8:
{
    r28 = (r28 + 4);
}

loc_8098DADC:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_8098DAE4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8098DA44;
    }
}

loc_8098DAE8:
{
    r3 = 0x809B0000u;
    r28 = (r3 + 7896);
    goto loc_8098DB14;
}

loc_8098DAF4:
{
    r3 = (r1 + 32);
    r4 = MemoryInline::FlatRead32(r28);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x8098DB80u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
}

loc_8098DB04:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8098DB10;
    }
}

loc_8098DB08:
{
    r3 = 0;
    goto loc_8098DB68;
}

loc_8098DB10:
{
    r28 = (r28 + 4);
}

loc_8098DB14:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_8098DB1C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8098DAF4;
    }
}

loc_8098DB20:
{
    r3 = (r1 + 32);
    r4 = r31;
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8045FBD4_76C4 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_76C4;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r4 = (r1 + 32);
    r5 = 0;
    goto loc_8098DB4C;
}

loc_8098DB38:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_8098DB40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(32))) {
        goto loc_8098DB48;
    }
}

loc_8098DB44:
{
    r5 = (r5 + 1);
}

loc_8098DB48:
{
    r4 = (r4 + 1);
}

loc_8098DB4C:
{
    r3 = MemoryInline::FlatRead8(r4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_8098DB58:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8098DB38;
    }
}

loc_8098DB5C:
{
    r0 = (0 - r5);
    r0 = (r0 | r5);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_8098DB68:
{
    r11 = (r1 + 80);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007FB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8098D6F8 func_8098D6F8 preserves=true fpr_mask=0x00000000
