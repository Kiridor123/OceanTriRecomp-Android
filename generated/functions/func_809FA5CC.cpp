#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DB898(CpuContext* ctx);
extern "C" uint64_t func_800DB898_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_800DDA30(CpuContext* ctx);
extern "C" uint64_t func_800DDA30_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_800DDB2C(CpuContext* ctx);
extern "C" uint64_t func_800DDB2C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802AB408(CpuContext* ctx);
extern "C" uint64_t func_802AB408_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_809FA5CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_809FA5CC;

loc_809FA5CC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r29 + 8));
}

loc_809FA5FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_809FA7A4;
    }
}

loc_809FA600:
{
    r31 = MemoryInline::FlatRead32((r29 + 12));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
}

loc_809FA60C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809FA61C;
    }
}

loc_809FA610:
{
}

loc_809FA614:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_809FA664;
    }
}

loc_809FA618:
{
    goto loc_809FA7A4;
}

loc_809FA61C:
{
    r3 = MemoryInline::FlatRead8((r29 + 2));
    r0 = (r3 + -12);
}

loc_809FA628:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_809FA7A4;
    }
}

loc_809FA62C:
{
    r3 = r29;
    ctx->lr = 0x809FA634u;
    if constexpr (KnownRegArgsCpuCall<0x802AB408u>(&func_802AB408)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802AB408_A0C = func_802AB408_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802AB408_A0C);
        r4 = static_cast<uint32_t>(regargs_result_802AB408_A0C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802AB408u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
}

loc_809FA638:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809FA650;
    }
}

loc_809FA63C:
{
    r3 = r31;
    r4 = (r29 + 24);
    r5 = 1;
    ctx->lr = 0x809FA64Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DB898u>(&func_800DB898)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_800DB898_DF0 = func_800DB898_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DB898_DF0);
        r4 = static_cast<uint32_t>(regargs_result_800DB898_DF0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x800DB898u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    }
    goto loc_809FA7A4;
}

loc_809FA650:
{
    r3 = r31;
    r4 = (r29 + 24);
    r5 = 0;
    ctx->lr = 0x809FA660u;
    if constexpr (KnownRegArgsCpuCall<0x800DB898u>(&func_800DB898)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_800DB898_121A = func_800DB898_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DB898_121A);
        r4 = static_cast<uint32_t>(regargs_result_800DB898_121A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x800DB898u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    }
    goto loc_809FA7A4;
}

loc_809FA664:
{
    r3 = MemoryInline::FlatRead8((r29 + 2));
    r0 = (r3 + -44);
}

loc_809FA670:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_809FA7A4;
    }
}

loc_809FA674:
{
}

loc_809FA678:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(30))) {
        goto loc_809FA694;
    }
}

loc_809FA67C:
{
}

loc_809FA680:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(31))) {
        goto loc_809FA6F0;
    }
}

loc_809FA684:
{
}

loc_809FA688:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(32))) {
        goto loc_809FA74C;
    }
}

loc_809FA68C:
{
    goto loc_809FA7A4;
}

loc_809FA694:
{
    r0 = MemoryInline::FlatRead8((r31 + 9));
}

loc_809FA69C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_809FA6C8;
    }
}

loc_809FA6A0:
{
    r3 = r31;
    r4 = (r29 + 24);
    r5 = 1;
    ctx->lr = 0x809FA6B0u;
    if constexpr (KnownRegArgsCpuCall<0x800DDA30u>(&func_800DDA30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_800DDA30_19CE = func_800DDA30_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DDA30_19CE);
        r4 = static_cast<uint32_t>(regargs_result_800DDA30_19CE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x800DDA30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    }
    r3 = r31;
    r4 = (r29 + 24);
    r5 = 1;
    r6 = 0;
    ctx->lr = 0x809FA6C4u;
    if constexpr (KnownRegArgsCpuCall<0x800DDB2Cu>(&func_800DDB2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_800DDB2C_1DD9 = func_800DDB2C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800DDB2C_1DD9);
        r4 = static_cast<uint32_t>(regargs_result_800DDB2C_1DD9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x800DDB2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_809FA7A4;
}

loc_809FA6C8:
{
    r3 = r31;
    r4 = (r29 + 24);
    r5 = 0;
    ctx->lr = 0x809FA6D8u;
    if constexpr (KnownRegArgsCpuCall<0x800DDA30u>(&func_800DDA30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_800DDA30_215E = func_800DDA30_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DDA30_215E);
        r4 = static_cast<uint32_t>(regargs_result_800DDA30_215E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x800DDA30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    }
    r3 = r31;
    r4 = (r29 + 24);
    r5 = 0;
    r6 = 0;
    ctx->lr = 0x809FA6ECu;
    if constexpr (KnownRegArgsCpuCall<0x800DDB2Cu>(&func_800DDB2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_800DDB2C_2569 = func_800DDB2C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800DDB2C_2569);
        r4 = static_cast<uint32_t>(regargs_result_800DDB2C_2569 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x800DDB2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_809FA7A4;
}

loc_809FA6F0:
{
    r0 = MemoryInline::FlatRead8((r31 + 9));
}

loc_809FA6F8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_809FA724;
    }
}

loc_809FA6FC:
{
    r3 = r31;
    r4 = (r29 + 24);
    r5 = 1;
    ctx->lr = 0x809FA70Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DDA30u>(&func_800DDA30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_800DDA30_29B1 = func_800DDA30_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DDA30_29B1);
        r4 = static_cast<uint32_t>(regargs_result_800DDA30_29B1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x800DDA30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    }
    r3 = r31;
    r4 = (r29 + 24);
    r5 = 1;
    r6 = 1;
    ctx->lr = 0x809FA720u;
    if constexpr (KnownRegArgsCpuCall<0x800DDB2Cu>(&func_800DDB2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_800DDB2C_2DBC = func_800DDB2C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800DDB2C_2DBC);
        r4 = static_cast<uint32_t>(regargs_result_800DDB2C_2DBC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x800DDB2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_809FA7A4;
}

loc_809FA724:
{
    r3 = r31;
    r4 = (r29 + 24);
    r5 = 0;
    ctx->lr = 0x809FA734u;
    if constexpr (KnownRegArgsCpuCall<0x800DDA30u>(&func_800DDA30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_800DDA30_3141 = func_800DDA30_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DDA30_3141);
        r4 = static_cast<uint32_t>(regargs_result_800DDA30_3141 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x800DDA30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    }
    r3 = r31;
    r4 = (r29 + 24);
    r5 = 0;
    r6 = 1;
    ctx->lr = 0x809FA748u;
    if constexpr (KnownRegArgsCpuCall<0x800DDB2Cu>(&func_800DDB2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_800DDB2C_354C = func_800DDB2C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800DDB2C_354C);
        r4 = static_cast<uint32_t>(regargs_result_800DDB2C_354C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x800DDB2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_809FA7A4;
}

loc_809FA74C:
{
    r0 = MemoryInline::FlatRead8((r31 + 9));
}

loc_809FA754:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_809FA780;
    }
}

loc_809FA758:
{
    r3 = r31;
    r4 = (r29 + 24);
    r5 = 1;
    ctx->lr = 0x809FA768u;
    if constexpr (KnownRegArgsCpuCall<0x800DDA30u>(&func_800DDA30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_800DDA30_3994 = func_800DDA30_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DDA30_3994);
        r4 = static_cast<uint32_t>(regargs_result_800DDA30_3994 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x800DDA30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    }
    r3 = r31;
    r4 = (r29 + 24);
    r5 = 1;
    r6 = 2;
    ctx->lr = 0x809FA77Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DDB2Cu>(&func_800DDB2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_800DDB2C_3D9F = func_800DDB2C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800DDB2C_3D9F);
        r4 = static_cast<uint32_t>(regargs_result_800DDB2C_3D9F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x800DDB2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_809FA7A4;
}

loc_809FA780:
{
    r3 = r31;
    r4 = (r29 + 24);
    r5 = 0;
    ctx->lr = 0x809FA790u;
    if constexpr (KnownRegArgsCpuCall<0x800DDA30u>(&func_800DDA30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_800DDA30_4124 = func_800DDA30_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DDA30_4124);
        r4 = static_cast<uint32_t>(regargs_result_800DDA30_4124 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x800DDA30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    }
    r3 = r31;
    r4 = (r29 + 24);
    r5 = 0;
    r6 = 2;
    ctx->lr = 0x809FA7A4u;
    if constexpr (KnownRegArgsCpuCall<0x800DDB2Cu>(&func_800DDB2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_800DDB2C_452F = func_800DDB2C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800DDB2C_452F);
        r4 = static_cast<uint32_t>(regargs_result_800DDB2C_452F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x800DDB2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_809FA7A4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000207F gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x809FA5CC func_809FA5CC preserves=true fpr_mask=0x00000000
