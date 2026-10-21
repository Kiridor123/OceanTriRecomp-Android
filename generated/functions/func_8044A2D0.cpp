#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80538A44(CpuContext* ctx);
extern "C" uint32_t func_80538A44_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint32_t func_8044A2D0_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r3 = arg_r3;

    MKW_GUEST_ENTER(0x8044A2D0u);
    goto loc_8044A2D0;

loc_8044A2D0:
{
    r3 = (r3 + 40);
    if constexpr (KnownRegArgsCpuCall<0x80538A44u>(&func_80538A44)) {
        const auto regargs_result_80538A44_209 = func_80538A44_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80538A44_209;
    } else {
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80538A44u>(ctx);
        r3 = ctx->gpr[3];
    }
    return r3;
}

}

extern "C" void func_8044A2D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8044A2D0_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8044A2D0 func_8044A2D0 preserves=true fpr_mask=0x00000000
