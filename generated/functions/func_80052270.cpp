#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80052270(CpuContext* MKW_RESTRICT ctx)
{
    PPC_FPR f1 = ctx->fpr[1];

    MKW_GUEST_ENTER(0x80052270u);
    goto loc_80052270;

loc_80052270:
{
    f1.d = std::fabs(f1.d);
    ctx->fpr[1] = f1;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_80052270_statefree(PPC_FPR native_f1)
{

    PPC_FPR cached_f1 = native_f1;

    MKW_GUEST_ENTER(0x80052270u);
    goto loc_80052270;

loc_80052270:
{
    cached_f1.d = std::fabs(cached_f1.d);
return cached_f1.raw;
}


    return cached_f1.raw;
}
// RECOMP_STATE_FREE_ABI address=0x80052270 symbol=func_80052270_statefree gpr_in=0x00000000 gpr_out=0x00000000 fpr_in=0x00000002 fpr_out=0x00000002 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000002 fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80052270 func_80052270 preserves=true fpr_mask=0x00000000


extern "C" double func_80052270_ra0_2_0_2(CpuContext* MKW_RESTRICT ctx, double arg_f1)
{
    ctx->fpr[1].d = arg_f1;
    [[clang::noinline]] func_80052270(ctx);
    return ctx->fpr[1].d;
}
