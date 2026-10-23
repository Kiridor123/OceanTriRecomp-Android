#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80470C00(CpuContext* ctx);
extern "C" uint32_t func_80470C00_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80470C70(CpuContext* ctx);
extern "C" uint32_t func_80470C70_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804CCCC0(CpuContext* ctx);
extern "C" uint64_t func_804CCCC0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80470CE0_ra80_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r7)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[7] = arg_r7;

    goto loc_80470CE0;

loc_80470CE0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = (r13 + -15948);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = 0x80700000u;
    r4 = (r31 + -9472);
    r5 = (r4 + 4);
    if constexpr (KnownRegArgsCpuCall<0x80470C00u>(&func_80470C00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80470C00_512 = func_80470C00_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80470C00_512;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80470C00u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r31 = (r31 + -9472);
    r3 = (r13 + -15952);
    r4 = (r31 + 6);
    r5 = (r31 + 10);
    if constexpr (KnownRegArgsCpuCall<0x80470C00u>(&func_80470C00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80470C00_790 = func_80470C00_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80470C00_790;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80470C00u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r4 = (r31 + 12);
    r5 = (r31 + 16);
    r3 = (r13 + -15956);
    if constexpr (KnownRegArgsCpuCall<0x80470C00u>(&func_80470C00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80470C00_9F5 = func_80470C00_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80470C00_9F5;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80470C00u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r4 = (r31 + 18);
    r5 = (r31 + 22);
    r3 = (r13 + -15960);
    if constexpr (KnownRegArgsCpuCall<0x80470C00u>(&func_80470C00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80470C00_C5A = func_80470C00_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80470C00_C5A;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80470C00u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r4 = (r31 + 24);
    r5 = (r31 + 28);
    r3 = (r13 + -15964);
    if constexpr (KnownRegArgsCpuCall<0x80470C00u>(&func_80470C00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80470C00_EBF = func_80470C00_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80470C00_EBF;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80470C00u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r4 = (r31 + 30);
    r5 = (r31 + 34);
    r3 = (r13 + -15968);
    if constexpr (KnownRegArgsCpuCall<0x80470C00u>(&func_80470C00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80470C00_1124 = func_80470C00_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80470C00_1124;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80470C00u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r4 = (r31 + 36);
    r5 = (r31 + 40);
    r3 = (r13 + -15972);
    if constexpr (KnownRegArgsCpuCall<0x80470C00u>(&func_80470C00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80470C00_138B = func_80470C00_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80470C00_138B;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80470C00u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r4 = (r31 + 42);
    r5 = (r31 + 46);
    r3 = (r13 + -15976);
    if constexpr (KnownRegArgsCpuCall<0x80470C00u>(&func_80470C00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80470C00_15F2 = func_80470C00_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80470C00_15F2;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80470C00u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r4 = (r31 + 48);
    r5 = (r31 + 52);
    r3 = (r13 + -15980);
    if constexpr (KnownRegArgsCpuCall<0x80470C00u>(&func_80470C00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80470C00_1859 = func_80470C00_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80470C00_1859;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80470C00u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r4 = (r31 + 54);
    r5 = (r31 + 58);
    r3 = (r13 + -15984);
    if constexpr (KnownRegArgsCpuCall<0x80470C00u>(&func_80470C00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80470C00_1AC0 = func_80470C00_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80470C00_1AC0;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80470C00u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r4 = (r31 + 60);
    r5 = (r31 + 64);
    r3 = (r13 + -15988);
    if constexpr (KnownRegArgsCpuCall<0x80470C00u>(&func_80470C00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80470C00_1D27 = func_80470C00_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80470C00_1D27;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80470C00u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r4 = (r31 + 66);
    r5 = (r31 + 70);
    r3 = (r13 + -15992);
    if constexpr (KnownRegArgsCpuCall<0x80470C00u>(&func_80470C00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80470C00_1F8E = func_80470C00_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80470C00_1F8E;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80470C00u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r4 = (r31 + 72);
    r5 = (r31 + 76);
    r3 = (r13 + -15996);
    if constexpr (KnownRegArgsCpuCall<0x80470C70u>(&func_80470C70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80470C70_21F5 = func_80470C70_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80470C70_21F5;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80470C70u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r4 = (r31 + 84);
    r5 = (r31 + 88);
    r3 = (r13 + -16000);
    if constexpr (KnownRegArgsCpuCall<0x80470C70u>(&func_80470C70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80470C70_245C = func_80470C70_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80470C70_245C;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80470C70u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r4 = (r31 + 96);
    r5 = (r31 + 100);
    r3 = (r13 + -16004);
    if constexpr (KnownRegArgsCpuCall<0x80470C70u>(&func_80470C70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80470C70_26C4 = func_80470C70_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80470C70_26C4;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80470C70u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r4 = (r31 + 108);
    r5 = (r31 + 112);
    r3 = (r13 + -16008);
    if constexpr (KnownRegArgsCpuCall<0x80470C70u>(&func_80470C70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80470C70_292D = func_80470C70_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80470C70_292D;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80470C70u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r4 = (r31 + 78);
    r5 = (r31 + 82);
    r3 = (r13 + -16012);
    if constexpr (KnownRegArgsCpuCall<0x80470C70u>(&func_80470C70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80470C70_2B94 = func_80470C70_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80470C70_2B94;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80470C70u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r4 = (r31 + 90);
    r5 = (r31 + 94);
    r3 = (r13 + -16016);
    if constexpr (KnownRegArgsCpuCall<0x80470C70u>(&func_80470C70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80470C70_2DFB = func_80470C70_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80470C70_2DFB;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80470C70u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r4 = (r31 + 102);
    r5 = (r31 + 106);
    r3 = (r13 + -16020);
    if constexpr (KnownRegArgsCpuCall<0x80470C70u>(&func_80470C70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80470C70_3064 = func_80470C70_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80470C70_3064;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80470C70u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r4 = (r31 + 114);
    r5 = (r31 + 118);
    r3 = (r13 + -16024);
    if constexpr (KnownRegArgsCpuCall<0x80470C70u>(&func_80470C70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80470C70_32CD = func_80470C70_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80470C70_32CD;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80470C70u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r3 = r31;
    r4 = 120;
    if constexpr (KnownRegArgsCpuCall<0x804CCCC0u>(&func_804CCCC0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804CCCC0_350C = func_804CCCC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCCC0_350C);
        r4 = static_cast<uint32_t>(regargs_result_804CCCC0_350C >> 32);
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804CCCC0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80470CE0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80470CE0_ra80_0_18_0(ctx, ctx->gpr[7]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002082 gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80470CE0 func_80470CE0 preserves=true fpr_mask=0x00000000
