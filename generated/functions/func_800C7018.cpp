#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_800C7018_ra0_2_8_0(CpuContext* MKW_RESTRICT ctx, double arg_f1)
{
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f1; f1.d = arg_f1;

    goto loc_800C7018;

loc_800C7018:
{
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    return r3;
}

}

extern "C" void func_800C7018(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800C7018_ra0_2_8_0(ctx, ctx->fpr[1].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000002 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800C7018 func_800C7018 preserves=true fpr_mask=0x00000000
