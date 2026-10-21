#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A9770(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x800A9770u);
    goto loc_800A9770;

loc_800A9770:
{
    r3 = (r3 + 192);
    // inline leaf 0x800A4B54 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 8));
    // end of inlined leaf 0x800A4B54
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_800A9770_statefree(uint32_t native_r3)
{

    uint32_t cached_r3 = native_r3;

    MKW_GUEST_ENTER(0x800A9770u);
    goto loc_800A9770;

loc_800A9770:
{
    cached_r3 = (cached_r3 + 192);
    // inline leaf 0x800A4B54 (2 guest instruction(s))
    cached_r3 = MemoryInline::FlatRead16((cached_r3 + 8));
    // end of inlined leaf 0x800A4B54
return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x800A9770 symbol=func_800A9770_statefree gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800A9770 func_800A9770 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_800A9770_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_800A9770(ctx);
    return ctx->gpr[3];
}
