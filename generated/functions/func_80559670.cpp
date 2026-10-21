#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80558E30(CpuContext* ctx);
extern "C" uint32_t func_80558E30_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint32_t func_80559670_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r3 = arg_r3;

    MKW_GUEST_ENTER(0x80559670u);
    goto loc_80559670;

loc_80559670:
{
    r3 = (r3 + -36);
    if constexpr (KnownRegArgsCpuCall<0x80558E30u>(&func_80558E30)) {
        const auto regargs_result_80558E30_20A = func_80558E30_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80558E30_20A;
    } else {
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80558E30u>(ctx);
        r3 = ctx->gpr[3];
    }
    return r3;
}

}

extern "C" void func_80559670(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80559670_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80559670 func_80559670 preserves=true fpr_mask=0x00000000
