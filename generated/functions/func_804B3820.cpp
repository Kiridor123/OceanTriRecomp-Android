#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B3820(CpuContext* MKW_RESTRICT ctx)
{
    MKW_GUEST_ENTER(0x804B3820u);
    goto loc_804B3820;

loc_804B3820:
{
    InvokeDirectCpu<0x804BC810u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B3820 func_804B3820 preserves=true fpr_mask=0x00000000

extern "C" uint32_t func_804B3820_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_804B3820(ctx);
    return ctx->gpr[3];
}
