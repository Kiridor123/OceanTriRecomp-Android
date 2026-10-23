#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802A0338(CpuContext* ctx);
extern "C" uint32_t func_802A0338_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint32_t func_802A0330_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];

    goto loc_802A0330;

loc_802A0330:
{
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x802A0338u>(&func_802A0338)) {
        const auto regargs_result_802A0338_1E6 = func_802A0338_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802A0338_1E6;
    } else {
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802A0338u>(ctx);
        r3 = ctx->gpr[3];
    }
    return r3;
}

}

extern "C" void func_802A0330(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802A0330_ra0_0_8_0(ctx);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802A0330 func_802A0330 preserves=true fpr_mask=0x00000000
