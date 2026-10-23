#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802AFCD8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];

    goto loc_802AFCD8;

loc_802AFCD8:
{
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY void func_802AFCD8_statefree_v0()
{

    uint32_t cached_r3 = 0;

    goto loc_802AFCD8;

loc_802AFCD8:
{
    cached_r3 = 0x806C0000u;
    cached_r3 = (cached_r3 + -21440);
    cached_r3 = MemoryInline::FlatRead8((cached_r3 + 3013));
return;
}

}
// RECOMP_STATE_FREE_ABI address=0x802AFCD8 symbol=func_802AFCD8_statefree_v0 gpr_in=0x00000000 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE uint64_t func_802AFCD8_statefree()
{

    uint32_t cached_r3 = 0;

    goto loc_802AFCD8;

loc_802AFCD8:
{
    cached_r3 = 0x806C0000u;
    cached_r3 = (cached_r3 + -21440);
    cached_r3 = MemoryInline::FlatRead8((cached_r3 + 3013));
return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x802AFCD8 symbol=func_802AFCD8_statefree gpr_in=0x00000000 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802AFCD8 func_802AFCD8 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_802AFCD8_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_802AFCD8(ctx);
    return ctx->gpr[3];
}
