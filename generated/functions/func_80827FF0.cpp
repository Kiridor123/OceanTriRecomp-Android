#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804EF6B0(CpuContext* ctx);
extern "C" uint64_t func_804EF6B0_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" void func_80827FF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x80827FF0u);
    goto loc_80827FF0;

loc_80827FF0:
{
    r3 = r4;
    if constexpr (KnownRegArgsCpuCall<0x804EF6B0u>(&func_804EF6B0)) {
        const auto regargs_result_804EF6B0_208 = func_804EF6B0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804EF6B0_208);
        r4 = static_cast<uint32_t>(regargs_result_804EF6B0_208 >> 32);
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804EF6B0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002012 gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80827FF0 func_80827FF0 preserves=true fpr_mask=0x00000000
