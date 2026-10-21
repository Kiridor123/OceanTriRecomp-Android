#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802D9F08(CpuContext* MKW_RESTRICT ctx)
{
    MKW_GUEST_ENTER(0x802D9F08u);
    goto loc_802D9F08;

loc_802D9F08:
{
    InvokeDirectCpu<0x802D9F18u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802D9F08 func_802D9F08 preserves=true fpr_mask=0x00000000

extern "C" uint64_t func_802D9F08_ra18_1a_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1, double arg_f3, double arg_f4)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    [[clang::noinline]] func_802D9F08(ctx);
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
}
