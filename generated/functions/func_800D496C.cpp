#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D496C(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_800D496C;

loc_800D496C:
{
    InvokeDirectCpu<0x80053340u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800D496C func_800D496C preserves=true fpr_mask=0x00000000

extern "C" uint32_t func_800D496C_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    [[clang::noinline]] func_800D496C(ctx);
    return ctx->gpr[3];
}
