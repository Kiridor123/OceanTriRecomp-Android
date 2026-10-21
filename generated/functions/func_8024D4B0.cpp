#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80114C84(CpuContext* ctx);
extern "C" uint64_t func_80114C84_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8024CDF0(CpuContext* ctx);
extern "C" uint64_t func_8024CDF0_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);

extern "C" uint64_t func_8024D4B0_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;

    MKW_GUEST_ENTER(0x8024D4B0u);
    goto loc_8024D4B0;

loc_8024D4B0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r30 = r5;
    r0 = (r6 & 255);
}

loc_8024D4D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8024D4E4;
    }
}

loc_8024D4D8:
{
    r4 = 9000;
    ctx->lr = 0x8024D4E0u;
    if constexpr (KnownRegArgsCpuCall<0x8024CDF0u>(&func_8024CDF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8024CDF0_572 = func_8024CDF0_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8024CDF0_572);
        r4 = static_cast<uint32_t>(regargs_result_8024CDF0_572 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8024CDF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    goto loc_8024D4F0;
}

loc_8024D4E4:
{
    r3 = r4;
    r4 = 4500;
    ctx->lr = 0x8024D4F0u;
    if constexpr (KnownRegArgsCpuCall<0x8024CDF0u>(&func_8024CDF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8024CDF0_8C4 = func_8024CDF0_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8024CDF0_8C4);
        r4 = static_cast<uint32_t>(regargs_result_8024CDF0_8C4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8024CDF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
}

loc_8024D4F0:
{
    r0 = (r30 & 65535);
}

loc_8024D4F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(391))) {
        goto loc_8024D520;
    }
}

loc_8024D4FC:
{
}

loc_8024D500:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(392))) {
        goto loc_8024D54C;
    }
}

loc_8024D504:
{
}

loc_8024D508:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(393))) {
        goto loc_8024D578;
    }
}

loc_8024D50C:
{
}

loc_8024D510:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(394))) {
        goto loc_8024D5A4;
    }
}

loc_8024D514:
{
}

loc_8024D518:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(368))) {
        goto loc_8024D5D0;
    }
}

loc_8024D51C:
{
    goto loc_8024D5F8;
}

loc_8024D520:
{
    MemoryInline::FlatWrite16((r31 + 1080), static_cast<uint16_t>(r3));
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 1070), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 1028), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 988));
    r0 = (r0 & -4);
    MemoryInline::FlatWrite32((r31 + 988), r0);
    r3 = r31;
    r4 = 9;
    ctx->lr = 0x8024D548u;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        const auto regargs_result_80114C84_1063 = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_1063);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_1063 >> 32);
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
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    }
    goto loc_8024D5F8;
}

loc_8024D54C:
{
    MemoryInline::FlatWrite16((r31 + 1082), static_cast<uint16_t>(r3));
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 1072), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 1030), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 988));
    r0 = (r0 & -13);
    MemoryInline::FlatWrite32((r31 + 988), r0);
    r3 = r31;
    r4 = 9;
    ctx->lr = 0x8024D574u;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        const auto regargs_result_80114C84_15A9 = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_15A9);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_15A9 >> 32);
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
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    }
    goto loc_8024D5F8;
}

loc_8024D578:
{
    MemoryInline::FlatWrite16((r31 + 1086), static_cast<uint16_t>(r3));
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 1076), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 1034), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 988));
    r0 = (r0 & -193);
    MemoryInline::FlatWrite32((r31 + 988), r0);
    r3 = r31;
    r4 = 9;
    ctx->lr = 0x8024D5A0u;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        const auto regargs_result_80114C84_1AF0 = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_1AF0);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_1AF0 >> 32);
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
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    }
    goto loc_8024D5F8;
}

loc_8024D5A4:
{
    MemoryInline::FlatWrite16((r31 + 1084), static_cast<uint16_t>(r3));
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 1074), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 1032), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 988));
    r0 = (r0 & -49);
    MemoryInline::FlatWrite32((r31 + 988), r0);
    r3 = r31;
    r4 = 9;
    ctx->lr = 0x8024D5CCu;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        const auto regargs_result_80114C84_2036 = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_2036);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_2036 >> 32);
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
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    }
    goto loc_8024D5F8;
}

loc_8024D5D0:
{
    MemoryInline::FlatWrite16((r31 + 1088), static_cast<uint16_t>(r3));
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 1078), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 1036), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 988));
    r0 = (r0 & -769);
    MemoryInline::FlatWrite32((r31 + 988), r0);
    r3 = r31;
    r4 = 9;
    ctx->lr = 0x8024D5F8u;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        const auto regargs_result_80114C84_257D = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_257D);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_257D >> 32);
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
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    }
}

loc_8024D5F8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8024D4B0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8024D4B0_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FF gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x80000003 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8024D4B0 func_8024D4B0 preserves=true fpr_mask=0x00000000
