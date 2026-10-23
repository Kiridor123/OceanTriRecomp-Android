#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80517328(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_80517328;

loc_80517328:
{
    InvokeDirectCpu<0x8045FD04u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80517328 func_80517328 preserves=true fpr_mask=0x00000000

extern "C" uint64_t func_80517328_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    ctx->gpr[5] = arg_r5;
    [[clang::noinline]] func_80517328(ctx);
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
}
