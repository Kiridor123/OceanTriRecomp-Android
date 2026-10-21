#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800B28E8(CpuContext* ctx);
extern "C" uint64_t func_800B28E8_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_800B4B20_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x800B4B20u);
    goto loc_800B4B20;

loc_800B4B20:
{
    r3 = 0x80690000u;
    r3 = (r3 + 27160);
    if constexpr (KnownRegArgsCpuCall<0x800B28E8u>(&func_800B28E8)) {
        const auto regargs_result_800B28E8_237 = func_800B28E8_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800B28E8_237);
        r4 = static_cast<uint32_t>(regargs_result_800B28E8_237 >> 32);
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800B28E8u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800B4B20(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800B4B20_ra0_0_18_0(ctx);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000002 gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800B4B20 func_800B4B20 preserves=true fpr_mask=0x00000000
