#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804FD7E0(CpuContext* ctx);
extern "C" uint64_t func_804FD7E0_ra0_0_18_0(CpuContext*);

extern "C" uint64_t func_804EDCA0_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_804EDCA0;

loc_804EDCA0:
{
    if constexpr (KnownRegArgsCpuCall<0x804FD7E0u>(&func_804FD7E0)) {
        const auto regargs_result_804FD7E0_1F1 = func_804FD7E0_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804FD7E0_1F1);
        r4 = static_cast<uint32_t>(regargs_result_804FD7E0_1F1 >> 32);
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804FD7E0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804EDCA0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804EDCA0_ra0_0_18_0(ctx);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000002 gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804EDCA0 func_804EDCA0 preserves=true fpr_mask=0x00000000
