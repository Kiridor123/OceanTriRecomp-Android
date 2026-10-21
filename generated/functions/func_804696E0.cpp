#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804D31F0(CpuContext* ctx);
extern "C" uint64_t func_804D31F0_ra0_0_18_0(CpuContext*);

extern "C" uint64_t func_804696E0_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    MKW_GUEST_ENTER(0x804696E0u);
    goto loc_804696E0;

loc_804696E0:
{
    r3 = 0;
    r4 = 0;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x804D31F0u>(&func_804D31F0)) {
        ctx->gpr[5] = r5;
        const auto regargs_result_804D31F0_25D = func_804D31F0_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D31F0_25D);
        r4 = static_cast<uint32_t>(regargs_result_804D31F0_25D >> 32);
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804D31F0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804696E0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804696E0_ra0_0_18_0(ctx);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000002 gpr_write=0x00000038 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x02 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804696E0 func_804696E0 preserves=true fpr_mask=0x00000000
