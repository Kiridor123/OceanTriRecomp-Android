#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80512880(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];

    goto loc_80512880;

loc_80512880:
{
    // inline leaf 0x80520CDC (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x80520CDC
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_80512880_statefree(uint32_t native_r3)
{

    uint32_t cached_r3 = native_r3;

    goto loc_80512880;

loc_80512880:
{
    // inline leaf 0x80520CDC (2 guest instruction(s))
    cached_r3 = (cached_r3 & 65535);
    // end of inlined leaf 0x80520CDC
return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x80512880 symbol=func_80512880_statefree gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80512880 func_80512880 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_80512880_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_80512880(ctx);
    return ctx->gpr[3];
}
