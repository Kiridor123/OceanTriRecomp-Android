#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8021C79C(CpuContext* ctx);
extern "C" uint64_t func_8021C79C_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_802BBAA0(CpuContext* ctx);
extern "C" uint32_t func_802BBAA0_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8021791C_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;

    goto loc_8021791C;

loc_8021791C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
}

loc_80217934:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80217950;
    }
}

loc_80217938:
{
    r0 = 0;
    r3 = 0x806B0000u;
    MemoryInline::FlatWriteRam8((r3 + -12348), static_cast<uint8_t>(r0));
    r3 = (r3 + -12348);
    MemoryInline::FlatWriteRam8((r3 + 8), static_cast<uint8_t>(r0));
    ctx->lr = 0x80217950u;
    if constexpr (KnownRegArgsCpuCall<0x802BBAA0u>(&func_802BBAA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802BBAA0_689 = func_802BBAA0_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802BBAA0_689;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802BBAA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_80217950:
{
    r30 = 0;
    r3 = 0x806B0000u;
    r31 = (r3 + -24544);
}

loc_8021795C:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_80217964:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80217970;
    }
}

loc_80217968:
{
    r3 = r31;
    ctx->lr = 0x80217970u;
    if constexpr (KnownRegArgsCpuCall<0x8021C79Cu>(&func_8021C79C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8021C79C_9F1 = func_8021C79C_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8021C79C_9F1);
        r4 = static_cast<uint32_t>(regargs_result_8021C79C_9F1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        InvokeDirectCpu<0x8021C79Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
}

loc_80217970:
{
    r31 = (r31 + 616);
    r30 = (r30 + 1);
}

loc_8021797C:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(18))) {
        goto loc_8021795C;
    }
}

loc_80217980:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8021791C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8021791C_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x0000001E fpr_write=0x0000001E fpr_return=0x00000002 cr_read=0x23 cr_write=0x23 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8021791C func_8021791C preserves=true fpr_mask=0x00000000
