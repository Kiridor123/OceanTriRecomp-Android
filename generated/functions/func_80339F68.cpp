#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8043CB78(CpuContext* ctx);
extern "C" uint32_t func_8043CB78_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80339F68_ra10_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x80339F68u);
    goto loc_80339F68;

loc_80339F68:
{
    r3 = MemoryInline::FlatRead8((r4 + 4));
    r4 = MemoryInline::FlatRead8((r4 + 5));
    if constexpr (KnownRegArgsCpuCall<0x8043CB78u>(&func_8043CB78)) {
        const auto regargs_result_8043CB78_279 = func_8043CB78_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8043CB78_279;
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8043CB78u>(ctx);
        r3 = ctx->gpr[3];
    }
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80339F68(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80339F68_ra10_0_18_0(ctx, ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000013 gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80339F68 func_80339F68 preserves=true fpr_mask=0x00000000
