#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801460BC(CpuContext* ctx);
extern "C" uint64_t func_801460BC_ra8_e_18_0(CpuContext*, uint32_t, double, double, double);

extern "C" uint64_t func_801461D0_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_801461D0;

loc_801461D0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
}

loc_801461DC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801461F0;
    }
}

loc_801461E0:
{
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f3.d = f1.d;
    if constexpr (KnownRegArgsCpuCall<0x801460BCu>(&func_801460BC)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_801460BC_458 = func_801460BC_ra8_e_18_0(ctx, r3, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_801460BC_458);
        r4 = static_cast<uint32_t>(regargs_result_801460BC_458 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x801460BCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    ctx->gpr[0] = r0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_801461F0:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -27808));
    f2.d = f1.d;
    f3.d = f1.d;
    if constexpr (KnownRegArgsCpuCall<0x801460BCu>(&func_801460BC)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_801460BC_7FF = func_801460BC_ra8_e_18_0(ctx, r3, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_801460BC_7FF);
        r4 = static_cast<uint32_t>(regargs_result_801460BC_7FF >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x801460BCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    ctx->gpr[0] = r0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801461D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801461D0_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001E gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801461D0 func_801461D0 preserves=true fpr_mask=0x00000000
