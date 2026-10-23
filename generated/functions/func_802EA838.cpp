#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802EA840(CpuContext* ctx);
extern "C" uint64_t func_802EA840_ra38_4_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_802EA838_ra18_4_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f2)
{
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f2; f2.d = arg_f2;

    goto loc_802EA838;

loc_802EA838:
{
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x802EA840u>(&func_802EA840)) {
        const auto regargs_result_802EA840_28D = func_802EA840_ra38_4_18_0(ctx, r3, r4, r5, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_802EA840_28D);
        r4 = static_cast<uint32_t>(regargs_result_802EA840_28D >> 32);
        r5 = ctx->gpr[5];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x802EA840u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f2 = ctx->fpr[2];
    }
    ctx->gpr[5] = r5;
    ctx->fpr[2] = f2;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802EA838(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802EA838_ra18_4_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000005 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802EA838 func_802EA838 preserves=true fpr_mask=0x00000000
