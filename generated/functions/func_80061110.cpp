#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80061110(CpuContext* MKW_RESTRICT ctx)
{
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    MKW_GUEST_ENTER(0x80061110u);
    goto loc_80061110;

loc_80061110:
{
    PpcSetPairedFprInline(f0, PPC_Fres(PPC_PsFromScalarInline(f1.d)));
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsNmsubInline(PPC_PsFromScalarInline(f1.d), f0.d, f2.d));
    f1.d = f0.d;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_80061110_statefree(PPC_FPR native_f1)
{

    PPC_FPR cached_f0 = PPC_FPR{};
    PPC_FPR cached_f1 = native_f1;
    PPC_FPR cached_f2 = PPC_FPR{};

    MKW_GUEST_ENTER(0x80061110u);
    goto loc_80061110;

loc_80061110:
{
    PpcSetPairedFprInline(cached_f0, PPC_Fres(PPC_PsFromScalarInline(cached_f1.d)));
    PpcSetPairedFprInline(cached_f2, PPC_PsAddInline(cached_f0.d, cached_f0.d));
    PpcSetPairedFprInline(cached_f0, PPC_PsMulInline(cached_f0.d, cached_f0.d));
    PpcSetPairedFprInline(cached_f0, PPC_PsNmsubInline(PPC_PsFromScalarInline(cached_f1.d), cached_f0.d, cached_f2.d));
    cached_f1.d = cached_f0.d;

return cached_f1.raw;
}


    return cached_f1.raw;
}
// RECOMP_STATE_FREE_ABI address=0x80061110 symbol=func_80061110_statefree gpr_in=0x00000000 gpr_out=0x00000000 fpr_in=0x00000002 fpr_out=0x00000002 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000002 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80061110 func_80061110 preserves=true fpr_mask=0x00000000


extern "C" double func_80061110_ra0_2_0_2(CpuContext* MKW_RESTRICT ctx, double arg_f1)
{
    ctx->fpr[1].d = arg_f1;
    [[clang::noinline]] func_80061110(ctx);
    return ctx->fpr[1].d;
}
