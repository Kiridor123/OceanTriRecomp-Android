#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80130D40(CpuContext* ctx);
extern "C" uint64_t func_80130D40_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);

extern "C" uint32_t func_80154CD8_ra8_2_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f1; f1.d = arg_f1;

    goto loc_80154CD8;

loc_80154CD8:
{
    r0 = MemoryInline::FlatRead8((r3 + 3));
}

loc_80154CE0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80154D00;
    }
}

loc_80154CE4:
{
    r0 = MemoryInline::FlatRead8((r3 + 482));
}

loc_80154CEC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80154CF8;
    }
}

loc_80154CF0:
{
    r4 = -7;
    if constexpr (KnownRegArgsCpuCall<0x80130D40u>(&func_80130D40)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_80130D40_432 = func_80130D40_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80130D40_432);
        r4 = static_cast<uint32_t>(regargs_result_80130D40_432 >> 32);
        r0 = ctx->gpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80130D40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    return r3;
}

loc_80154CF8:
{
    r4 = -14;
    if constexpr (KnownRegArgsCpuCall<0x80130D40u>(&func_80130D40)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_80130D40_748 = func_80130D40_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80130D40_748);
        r4 = static_cast<uint32_t>(regargs_result_80130D40_748 >> 32);
        r0 = ctx->gpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80130D40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    return r3;
}

loc_80154D00:
{
    r4 = -14;
    if constexpr (KnownRegArgsCpuCall<0x80130D40u>(&func_80130D40)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_80130D40_A5E = func_80130D40_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80130D40_A5E);
        r4 = static_cast<uint32_t>(regargs_result_80130D40_A5E >> 32);
        r0 = ctx->gpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80130D40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    return r3;
}

}

extern "C" void func_80154CD8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80154CD8_ra8_2_8_0(ctx, ctx->gpr[3], ctx->fpr[1].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80154CD8 func_80154CD8 preserves=true fpr_mask=0x00000000
