#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808443E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_808443E0;

loc_808443E0:
{
    r3 = (r3 + 20);
    // inline leaf 0x80842650 (3 guest instruction(s))
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r0 = (r0_rot_0 & -65536);
    MemoryInline::FlatWrite32((r3 + 104), r0);
    // end of inlined leaf 0x80842650
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_808443E0_statefree(uint32_t native_r3, uint32_t native_r4)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    uint32_t r0_rot_0 = 0;

    goto loc_808443E0;

loc_808443E0:
{
    cached_r3 = (cached_r3 + 20);
    // inline leaf 0x80842650 (3 guest instruction(s))
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r4), static_cast<uint32_t>(16));
    cached_r0 = (r0_rot_0 & -65536);
    MemoryInline::FlatWrite32((cached_r3 + 104), cached_r0);
    // end of inlined leaf 0x80842650

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x808443E0 symbol=func_808443E0_statefree gpr_in=0x00000018 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x808443E0 func_808443E0 preserves=true fpr_mask=0x00000000

