#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8026AF6C(CpuContext* ctx);
extern "C" uint64_t func_8026AF6C_ra38_a_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);

extern "C" uint32_t func_8026F818_ra68_a_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5, uint32_t arg_r6, double arg_f1, double arg_f3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f3; f3.d = arg_f3;
    ctx->gpr[6] = arg_r6;

    goto loc_8026F818;

loc_8026F818:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8026F83C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8026F854;
    }
}

loc_8026F840:
{
    r3 = (r30 + 184);
    r4 = 0;
    r5 = 132;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_8026F874;
}

loc_8026F854:
{
    // inline leaf 0x800CF27C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 37));
    // end of inlined leaf 0x800CF27C
    r0 = (r3 & 255);
}

loc_8026F860:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8026F868;
    }
}

loc_8026F864:
{
    r31 = MemoryInline::FlatRead8((r30 + 8));
}

loc_8026F868:
{
    r3 = r30;
    r4 = r31;
    ctx->lr = 0x8026F874u;
    if constexpr (KnownRegArgsCpuCall<0x8026AF6Cu>(&func_8026AF6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8026AF6C_847 = func_8026AF6C_ra38_a_18_0(ctx, r3, r4, r5, f1.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026AF6C_847);
        r4 = static_cast<uint32_t>(regargs_result_8026AF6C_847 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8026AF6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
    }
}

loc_8026F874:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    return r3;
}

}

extern "C" void func_8026F818(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8026F818_ra68_a_8_0(ctx, ctx->gpr[3], ctx->gpr[5], ctx->gpr[6], ctx->fpr[1].d, ctx->fpr[3].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000000EF gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x0000000B fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8026F818 func_8026F818 preserves=true fpr_mask=0x00000000
