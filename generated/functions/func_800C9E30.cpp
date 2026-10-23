#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800C9E30(CpuContext* MKW_RESTRICT ctx)
{
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_800C9E30;

loc_800C9E30:
{
    // inline leaf 0x80464584 (3 guest instruction(s))
    f0.d = std::fabs(f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    // end of inlined leaf 0x80464584
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY uint64_t func_800C9E30_statefree_v0(PPC_FPR native_f1)
{

    PPC_FPR cached_f0 = PPC_FPR{};
    PPC_FPR cached_f1 = native_f1;

    goto loc_800C9E30;

loc_800C9E30:
{
    // inline leaf 0x80464584 (3 guest instruction(s))
    cached_f0.d = std::fabs(cached_f1.d);
    cached_f1.d = static_cast<double>(PpcForceSingleValueInline(cached_f0.d));
    // end of inlined leaf 0x80464584

    return cached_f1.raw;
}


    return cached_f1.raw;
}
// RECOMP_STATE_FREE_ABI address=0x800C9E30 symbol=func_800C9E30_statefree_v0 gpr_in=0x00000000 gpr_out=0x00000000 fpr_in=0x00000002 fpr_out=0x00000002 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_800C9E30_statefree(PPC_FPR native_f0, PPC_FPR native_f1)
{

    PPC_FPR cached_f0 = PPC_FPR{};
    PPC_FPR cached_f1 = native_f1;

    goto loc_800C9E30;

loc_800C9E30:
{
    // inline leaf 0x80464584 (3 guest instruction(s))
    cached_f0.d = std::fabs(cached_f1.d);
    cached_f1.d = static_cast<double>(PpcForceSingleValueInline(cached_f0.d));
    // end of inlined leaf 0x80464584

    return { cached_f0.raw, cached_f1.raw };
}

}
// RECOMP_STATE_FREE_ABI address=0x800C9E30 symbol=func_800C9E30_statefree gpr_in=0x00000000 gpr_out=0x00000000 fpr_in=0x00000002 fpr_out=0x00000003 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000002 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800C9E30 func_800C9E30 preserves=true fpr_mask=0x00000000


extern "C" double func_800C9E30_ra0_2_0_2(CpuContext* MKW_RESTRICT ctx, double arg_f1)
{
    ctx->fpr[1].d = arg_f1;
    [[clang::noinline]] func_800C9E30(ctx);
    return ctx->fpr[1].d;
}
