#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803FE7D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_803FE7D0;

loc_803FE7D0:
{
    r4 = 1;
    // inline leaf 0x803FE534 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 24888), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x803FE534
    ctx->gpr[4] = r4;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE void func_803FE7D0_statefree(uint32_t native_r3)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;

    goto loc_803FE7D0;

loc_803FE7D0:
{
    cached_r4 = 1;
    // inline leaf 0x803FE534 (2 guest instruction(s))
    MemoryInline::FlatWrite8((cached_r3 + 24888), static_cast<uint8_t>(cached_r4));
    // end of inlined leaf 0x803FE534
return;
}

}
// RECOMP_STATE_FREE_ABI address=0x803FE7D0 symbol=func_803FE7D0_statefree gpr_in=0x00000008 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000010 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803FE7D0 func_803FE7D0 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_803FE7D0_ra8_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_803FE7D0(ctx);
    return ctx->gpr[4];
}
