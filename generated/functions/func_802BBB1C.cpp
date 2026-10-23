#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802BBA90(CpuContext* ctx);
extern "C" uint64_t func_802BBA90_ra8_2_18_0(CpuContext*, uint32_t, double);

extern "C" uint64_t func_802BBB1C_ra0_2_18_0(CpuContext* MKW_RESTRICT ctx, double arg_f1)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f1; f1.d = arg_f1;

    goto loc_802BBB1C;

loc_802BBB1C:
{
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x802BBA90u>(&func_802BBA90)) {
        const auto regargs_result_802BBA90_23F = func_802BBA90_ra8_2_18_0(ctx, r3, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802BBA90_23F);
        r4 = static_cast<uint32_t>(regargs_result_802BBA90_23F >> 32);
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802BBA90u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802BBB1C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802BBB1C_ra0_2_18_0(ctx, ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002007 gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802BBB1C func_802BBB1C preserves=true fpr_mask=0x00000000
