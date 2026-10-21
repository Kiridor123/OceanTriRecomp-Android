#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027FEB4(CpuContext* ctx);
extern "C" uint64_t func_8027FEB4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8027FF84_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x8027FF84u);
    goto loc_8027FF84;

loc_8027FF84:
{
    r4 = r3;
    r3 = MemoryInline::FlatRead8(r3);
    r4 = MemoryInline::FlatRead16((r4 + 2));
    if constexpr (KnownRegArgsCpuCall<0x8027FEB4u>(&func_8027FEB4)) {
        const auto regargs_result_8027FEB4_281 = func_8027FEB4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027FEB4_281);
        r4 = static_cast<uint32_t>(regargs_result_8027FEB4_281 >> 32);
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027FEB4u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8027FF84(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8027FF84_ra8_0_18_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000200B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8027FF84 func_8027FF84 preserves=true fpr_mask=0x00000000
