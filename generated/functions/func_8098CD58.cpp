#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045FE60(CpuContext* ctx);
extern "C" uint64_t func_8045FE60_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_8098CD58(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_8098CD58;

loc_8098CD58:
{
    if constexpr (KnownRegArgsCpuCall<0x8045FE60u>(&func_8045FE60)) {
        const auto regargs_result_8045FE60_1F7 = func_8045FE60_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8045FE60_1F7);
        r4 = static_cast<uint32_t>(regargs_result_8045FE60_1F7 >> 32);
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8045FE60u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8098CD58 func_8098CD58 preserves=true fpr_mask=0x00000000
