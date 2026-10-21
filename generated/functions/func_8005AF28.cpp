#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005AF28(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    MKW_GUEST_ENTER(0x8005AF28u);
    goto loc_8005AF28;

loc_8005AF28:
{
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE void func_8005AF28_statefree(PPC_FPR native_f1, PPC_FPR native_f2)
{

    uint32_t cached_r3 = 0;
    PPC_FPR cached_f1 = native_f1;
    PPC_FPR cached_f2 = native_f2;

    MKW_GUEST_ENTER(0x8005AF28u);
    goto loc_8005AF28;

loc_8005AF28:
{
    cached_r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(cached_f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(cached_f2.d));
return;
}

}
// RECOMP_STATE_FREE_ABI address=0x8005AF28 symbol=func_8005AF28_statefree gpr_in=0x00000000 gpr_out=0x00000000 fpr_in=0x00000006 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000006 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8005AF28 func_8005AF28 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_8005AF28_ra0_6_8_0(CpuContext* MKW_RESTRICT ctx, double arg_f1, double arg_f2)
{
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    [[clang::noinline]] func_8005AF28(ctx);
    return ctx->gpr[3];
}
