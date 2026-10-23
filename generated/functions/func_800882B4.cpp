#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800882B4_ra68_40_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5, uint32_t arg_r6, double arg_f6)
{
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    ctx->gpr[5] = arg_r5;
    ctx->gpr[6] = arg_r6;
    ctx->fpr[6].d = arg_f6;

    goto loc_800882B4;

loc_800882B4:
{
    r4 = r3;
    r3 = 0x80680000u;
    r3 = (r3 + 25448);
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8008551Cu>(ctx);
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800882B4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800882B4_ra68_40_18_0(ctx, ctx->gpr[3], ctx->gpr[5], ctx->gpr[6], ctx->fpr[6].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000018 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800882B4 func_800882B4 preserves=true fpr_mask=0x00000000
