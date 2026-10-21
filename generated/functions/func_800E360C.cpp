#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80092C6C(CpuContext* ctx);
extern "C" uint64_t func_80092C6C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800E2674(CpuContext* ctx);
extern "C" uint32_t func_800E2674_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_800E360C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_10 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r4_addr_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_10 = 0;
    uint32_t r4_rot_11 = 0;
    uint32_t r4_rot_12 = 0;
    uint32_t r4_rot_13 = 0;
    uint32_t r4_rot_14 = 0;
    uint32_t r4_rot_15 = 0;
    uint32_t r4_rot_16 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x800E360Cu);
    goto loc_800E360C;

loc_800E360C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
}

loc_800E3624:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(1))) {
        goto loc_800E3644;
    }
}

loc_800E3628:
{
}

loc_800E362C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(4))) {
        goto loc_800E3644;
    }
}

loc_800E3630:
{
}

loc_800E3634:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_800E3768;
    }
}

loc_800E3638:
{
}

loc_800E363C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(3))) {
        goto loc_800E37F4;
    }
}

loc_800E3640:
{
    goto loc_800E3864;
}

loc_800E3644:
{
    r4 = (r6 & 65535);
    r3 = 274857984;
    r0 = (r3 + 19923);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 6);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 1000);
    r0 = (r4 - r0);
    r7 = (r0 & 65535);
}

loc_800E3670:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(1000))) {
        goto loc_800E36E0;
    }
}

loc_800E3674:
{
    r3 = (r13 + -17564);
    r4 = 1374420992;
    r0 = (r4 + -31457);
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r7))) >> 32));
    r0 = (static_cast<int32_t>(r6) >> 5);
    r4_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_8 & 1);
    r0 = (r0 + r4);
    r0 = (r0 * 100);
    r5 = (r7 - r0);
    r0 = (static_cast<int32_t>(r6) >> 5);
    r4_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_9 & 1);
    r0 = (r0 + r4);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r4 = 0x80690000u;
    r4 = (r4 + 32176);
    r4_addr_5 = (r4 + r0);
    r0 = MemoryInline::FlatRead16(r4_addr_5);
    r0 = (r5 + r0);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r4 = 0x80690000u;
    r4 = (r4 + 31376);
    r4_addr_6 = (r4 + r0);
    r4 = MemoryInline::FlatRead16(r4_addr_6);
    ctx->lr = 0x800E36CCu;
    if constexpr (KnownRegArgsCpuCall<0x80092C6Cu>(&func_80092C6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_80092C6C_123E = func_80092C6C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80092C6C_123E);
        r4 = static_cast<uint32_t>(regargs_result_80092C6C_123E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        InvokeDirectCpu<0x80092C6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r3 = r31;
    r4 = (r1 + 20);
    ctx->lr = 0x800E36DCu;
    if constexpr (KnownRegArgsCpuCall<0x800E2674u>(&func_800E2674)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E2674_1688 = func_800E2674_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800E2674_1688;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E2674u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    goto loc_800E386C;
}

loc_800E36E0:
{
    r4_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r4 = (r4_rot_10 & -4);
    r3 = 0x806A0000u;
    r0 = (r3 + -28696);
    r3 = (r0 + r4);
    r10 = (r5 * 600);
    r4 = 0x80690000u;
    r9 = (r4 + 32200);
    r4 = 1374420992;
    r0 = (r4 + -31457);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r7))) >> 32));
    r0 = (static_cast<int32_t>(r8) >> 5);
    r4_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_11 & 1);
    r0 = (r0 + r4);
    r0 = (r0 * 100);
    r7 = (r7 - r0);
    r6 = (r5 * 10);
    r4 = 0x806A0000u;
    r5 = (r4 + -30936);
    r0 = (static_cast<int32_t>(r8) >> 5);
    r4_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_12 & 1);
    r0 = (r0 + r4);
    r4_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_13 & -2);
    r0 = (r5 + r6);
    r4_addr_7 = (r4 + r0);
    r0 = MemoryInline::FlatRead16(r4_addr_7);
    r0 = (r7 + r0);
    r4_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_14 & -2);
    r0 = (r9 + r10);
    r4_addr_8 = (r4 + r0);
    r4 = MemoryInline::FlatRead16(r4_addr_8);
    ctx->lr = 0x800E3754u;
    if constexpr (KnownRegArgsCpuCall<0x80092C6Cu>(&func_80092C6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_80092C6C_1E66 = func_80092C6C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80092C6C_1E66);
        r4 = static_cast<uint32_t>(regargs_result_80092C6C_1E66 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        InvokeDirectCpu<0x80092C6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    r3 = r31;
    r4 = (r1 + 16);
    ctx->lr = 0x800E3764u;
    if constexpr (KnownRegArgsCpuCall<0x800E2674u>(&func_800E2674)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E2674_22B0 = func_800E2674_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800E2674_22B0;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E2674u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    goto loc_800E386C;
}

loc_800E3768:
{
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r4 = (r4_rot_3 & -4);
    r3 = 0x806A0000u;
    r0 = (r3 + -28680);
    r3 = (r0 + r4);
    r10 = (r5 * 300);
    r4 = 0x806A0000u;
    r9 = (r4 + -30896);
    r6 = (r6 & 65535);
    r4 = 1374420992;
    r0 = (r4 + -31457);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r6))) >> 32));
    r0 = (static_cast<int32_t>(r8) >> 5);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_4 & 1);
    r0 = (r0 + r4);
    r0 = (r0 * 100);
    r7 = (r6 - r0);
    r6 = (r5 * 10);
    r4 = 0x806A0000u;
    r5 = (r4 + -29096);
    r0 = (static_cast<int32_t>(r8) >> 5);
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_5 & 1);
    r0 = (r0 + r4);
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_6 & -2);
    r0 = (r5 + r6);
    r4_addr_3 = (r4 + r0);
    r0 = MemoryInline::FlatRead16(r4_addr_3);
    r0 = (r7 + r0);
    r4_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_7 & -2);
    r0 = (r9 + r10);
    r4_addr_4 = (r4 + r0);
    r4 = MemoryInline::FlatRead16(r4_addr_4);
    ctx->lr = 0x800E37E0u;
    if constexpr (KnownRegArgsCpuCall<0x80092C6Cu>(&func_80092C6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_80092C6C_2A9C = func_80092C6C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80092C6C_2A9C);
        r4 = static_cast<uint32_t>(regargs_result_80092C6C_2A9C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        InvokeDirectCpu<0x80092C6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = r31;
    r4 = (r1 + 12);
    ctx->lr = 0x800E37F0u;
    if constexpr (KnownRegArgsCpuCall<0x800E2674u>(&func_800E2674)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E2674_2EE6 = func_800E2674_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800E2674_2EE6;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E2674u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    goto loc_800E386C;
}

loc_800E37F4:
{
    r3 = (r13 + -17560);
    r5 = (r6 & 65535);
    r4 = 1374420992;
    r0 = (r4 + -31457);
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    r0 = (static_cast<int32_t>(r6) >> 5);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r0 = (r0 + r4);
    r0 = (r0 * 100);
    r5 = (r5 - r0);
    r0 = (static_cast<int32_t>(r6) >> 5);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
    r0 = (r0 + r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r4 = 0x806A0000u;
    r4 = (r4 + -28712);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead16(r4_addr_1);
    r0 = (r5 + r0);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r4 = 0x806A0000u;
    r4 = (r4 + -29032);
    r4_addr_2 = (r4 + r0);
    r4 = MemoryInline::FlatRead16(r4_addr_2);
    ctx->lr = 0x800E3850u;
    if constexpr (KnownRegArgsCpuCall<0x80092C6Cu>(&func_80092C6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_80092C6C_35E7 = func_80092C6C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80092C6C_35E7);
        r4 = static_cast<uint32_t>(regargs_result_80092C6C_35E7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        InvokeDirectCpu<0x80092C6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = r31;
    r4 = (r1 + 8);
    ctx->lr = 0x800E3860u;
    if constexpr (KnownRegArgsCpuCall<0x800E2674u>(&func_800E2674)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E2674_3A2F = func_800E2674_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800E2674_3A2F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E2674u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    goto loc_800E386C;
}

loc_800E3864:
{
    r3 = 0;
    goto loc_800E3870;
}

loc_800E386C:
{
    r3 = 1;
}

loc_800E3870:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800E360C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800E360C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FB gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800E360C func_800E360C preserves=true fpr_mask=0x00000000
