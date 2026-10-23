#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D9F0C(CpuContext* ctx);
extern "C" uint64_t func_800D9F0C_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80112240(CpuContext* ctx);
extern "C" uint64_t func_80112240_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_801129F8(CpuContext* ctx);
extern "C" uint64_t func_801129F8_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_801B992C(CpuContext* ctx);
extern "C" uint64_t func_801B992C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80305994(CpuContext* ctx);
extern "C" uint64_t func_80305994_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_801BB310_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t ctr = ctx->ctr;

    goto loc_801BB310;

loc_801BB310:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    r31 = r3;
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 48);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = r31;
    // inline leaf 0x8012F960 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 116));
    // end of inlined leaf 0x8012F960
    r3 = r31;
    r4 = 11;
    r5 = 0;
    // inline leaf 0x8012D270 (12 guest instruction(s))
}

loc_inl4_0x8012D270:
{
    r6 = MemoryInline::FlatRead8((r3 + 485));
    r0 = (r4 & 255);
}

loc_inl4_0x8012D27C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl4_0x8012D298;
    }
}

loc_inl4_0x8012D280:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r5 & 255);
}

loc_inl4_0x8012D28C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl4_0x8012D298;
    }
}

loc_inl4_0x8012D290:
{
    r3 = 1;
    goto loc_inl4_cont_8012D270;
}

loc_inl4_0x8012D298:
{
    r3 = 0;
}

loc_inl4_cont_8012D270:
{
    // end of inlined leaf 0x8012D270
}

loc_801BB358:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801BB38C;
    }
}

loc_801BB35C:
{
    r3 = r31;
    r4 = 11;
    r5 = 5;
    // inline leaf 0x8012D270 (12 guest instruction(s))
}

loc_inl5_0x8012D270:
{
    r6 = MemoryInline::FlatRead8((r3 + 485));
    r0 = (r4 & 255);
}

loc_inl5_0x8012D27C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl5_0x8012D298;
    }
}

loc_inl5_0x8012D280:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r5 & 255);
}

loc_inl5_0x8012D28C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl5_0x8012D298;
    }
}

loc_inl5_0x8012D290:
{
    r3 = 1;
    goto loc_inl5_cont_8012D270;
}

loc_inl5_0x8012D298:
{
    r3 = 0;
}

loc_inl5_cont_8012D270:
{
    // end of inlined leaf 0x8012D270
}

loc_801BB370:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801BB38C;
    }
}

loc_801BB374:
{
    r3 = r31;
    r4 = 11;
    r5 = 56;
    // inline leaf 0x8012D270 (12 guest instruction(s))
}

loc_inl6_0x8012D270:
{
    r6 = MemoryInline::FlatRead8((r3 + 485));
    r0 = (r4 & 255);
}

loc_inl6_0x8012D27C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl6_0x8012D298;
    }
}

loc_inl6_0x8012D280:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r5 & 255);
}

loc_inl6_0x8012D28C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl6_0x8012D298;
    }
}

loc_inl6_0x8012D290:
{
    r3 = 1;
    goto loc_inl6_cont_8012D270;
}

loc_inl6_0x8012D298:
{
    r3 = 0;
}

loc_inl6_cont_8012D270:
{
    // end of inlined leaf 0x8012D270
}

loc_801BB388:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801BB518;
    }
}

loc_801BB38C:
{
    r0 = MemoryInline::FlatRead8((r31 + 809));
}

loc_801BB394:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801BB518;
    }
}

loc_801BB398:
{
    r0 = MemoryInline::FlatRead8((r31 + 10));
}

loc_801BB3A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801BB3C0;
    }
}

loc_801BB3A4:
{
}

loc_801BB3A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801BB3C0;
    }
}

loc_801BB3AC:
{
}

loc_801BB3B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_801BB44C;
    }
}

loc_801BB3B4:
{
}

loc_801BB3B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_801BB4A4;
    }
}

loc_801BB3BC:
{
    goto loc_801BB510;
}

loc_801BB3C0:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19708));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19568));
    f3.d = f1.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = r31;
    r4 = 0;
    r5 = 0;
    r6 = (r1 + 32);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19564));
    r7 = -1;
    r8 = 0;
    ctx->lr = 0x801BB400u;
    if constexpr (KnownRegArgsCpuCall<0x80305994u>(&func_80305994)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_80305994_1C5F = func_80305994_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80305994_1C5F);
        r4 = static_cast<uint32_t>(regargs_result_80305994_1C5F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80305994u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r3 = r31;
    r4 = 0;
    r5 = (r1 + 48);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80135994u>(ctx);
    r3 = (r1 + 48);
    r4 = (r1 + 20);
    // inline leaf 0x80101470 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    MemoryInline::FlatWriteRamFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 28));
    MemoryInline::FlatWriteRamFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 44));
    MemoryInline::FlatWriteRamFloat32((r4 + 8), f0.d);
    // end of inlined leaf 0x80101470
    r3 = (r1 + 32);
    r4 = (r1 + 48);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800514A4u>(ctx);
    r3 = (r1 + 20);
    r4 = (r1 + 32);
    ctx->lr = 0x801BB434u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = MemoryInline::FlatRead32((r31 + 2836));
    r4 = 1;
    r5 = 2;
    r6 = (r1 + 20);
    ctx->lr = 0x801BB448u;
    if constexpr (KnownRegArgsCpuCall<0x800D9F0Cu>(&func_800D9F0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_800D9F0C_289F = func_800D9F0C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800D9F0C_289F);
        r4 = static_cast<uint32_t>(regargs_result_800D9F0C_289F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D9F0Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801BB510;
}

loc_801BB44C:
{
    r3 = 1;
    r4 = 1;
    r5 = (r31 + 392);
    r6 = MemoryInline::FlatRead8((r31 + 481));
    r7 = (r31 + 444);
    r8 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19560));
    ctx->lr = 0x801BB46Cu;
    if constexpr (KnownRegArgsCpuCall<0x801129F8u>(&func_801129F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->ctr = ctr;
        const auto regargs_result_801129F8_2EE6 = func_801129F8_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801129F8_2EE6);
        r4 = static_cast<uint32_t>(regargs_result_801129F8_2EE6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801129F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        ctr = ctx->ctr;
    }
    r3 = (r31 + 392);
    r4 = 1;
    r5 = MemoryInline::FlatRead8((r31 + 481));
    r6 = 0;
    r7 = MemoryInline::FlatRead32((r13 + -17088));
    r12 = MemoryInline::FlatRead32((r7 + 8));
    ctr = r12;
    ctx->lr = 0x801BB48Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    r3 = MemoryInline::FlatRead32((r31 + 2836));
    r4 = 2;
    r5 = 2;
    r6 = (r31 + 392);
    ctx->lr = 0x801BB4A0u;
    if constexpr (KnownRegArgsCpuCall<0x800D9F0Cu>(&func_800D9F0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_800D9F0C_3AA2 = func_800D9F0C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800D9F0C_3AA2);
        r4 = static_cast<uint32_t>(regargs_result_800D9F0C_3AA2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D9F0Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    goto loc_801BB510;
}

loc_801BB4A4:
{
    r3 = (r31 + 392);
    r4 = MemoryInline::FlatRead8((r31 + 481));
    r5 = 2;
    ctx->lr = 0x801BB4B4u;
    if constexpr (KnownRegArgsCpuCall<0x80112240u>(&func_80112240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->ctr = ctr;
        const auto regargs_result_80112240_407E = func_80112240_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80112240_407E);
        r4 = static_cast<uint32_t>(regargs_result_80112240_407E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80112240u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        ctr = ctx->ctr;
    }
    r3 = r31;
    ctx->lr = 0x801BB4BCu;
    if constexpr (KnownRegArgsCpuCall<0x801B992Cu>(&func_801B992C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_801B992C_474B = func_801B992C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_801B992C_474B);
        r4 = static_cast<uint32_t>(regargs_result_801B992C_474B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801B992Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        ctr = ctx->ctr;
    }
}

loc_801BB4C0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801BB4E8;
    }
}

loc_801BB4C4:
{
    r3 = (r31 + 392);
    r4 = 46;
    r5 = MemoryInline::FlatRead8((r31 + 481));
    r6 = 0;
    r7 = MemoryInline::FlatRead32((r13 + -17088));
    r12 = MemoryInline::FlatRead32((r7 + 8));
    ctr = r12;
    ctx->lr = 0x801BB4E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    goto loc_801BB510;
}

loc_801BB4E8:
{
    r4 = (r31 + 392);
    r5 = 46;
    r6 = MemoryInline::FlatRead8((r31 + 481));
    r7 = 65536;
    r7 = (r7 + -1);
    r7 = (r7 & 65535);
    r8 = MemoryInline::FlatRead32((r13 + -17088));
    r12 = MemoryInline::FlatRead32((r8 + 20));
    ctr = r12;
    ctx->lr = 0x801BB510u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
}

loc_801BB510:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 809), static_cast<uint8_t>(r0));
}

loc_801BB518:
{
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801BB310(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801BB310_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801BB310 func_801BB310 preserves=true fpr_mask=0x00000000
