#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802B02C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    MKW_GUEST_ENTER(0x802B02C0u);
    goto loc_802B02C0;

loc_802B02C0:
{
    r5 = 0x806C0000u;
    r5 = (r5 + -21440);
    r0 = MemoryInline::FlatRead8((r5 + 3014));
    r0 = (r0 * 476);
    r5 = (r5 + r0);
    r0 = (r3 & 255);
    r0 = (r0 * 48);
    r3 = (r5 + r0);
    r0 = (r4 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 3108));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY uint64_t func_802B02C0_statefree_v0(uint32_t native_r3, uint32_t native_r4)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = 0;

    uint32_t r0_rot_0 = 0;

    MKW_GUEST_ENTER(0x802B02C0u);
    goto loc_802B02C0;

loc_802B02C0:
{
    cached_r5 = 0x806C0000u;
    cached_r5 = (cached_r5 + -21440);
    cached_r0 = MemoryInline::FlatRead8((cached_r5 + 3014));
    cached_r0 = (cached_r0 * 476);
    cached_r5 = (cached_r5 + cached_r0);
    cached_r0 = (cached_r3 & 255);
    cached_r0 = (cached_r0 * 48);
    cached_r3 = (cached_r5 + cached_r0);
    cached_r0 = (cached_r4 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(2));
    cached_r0 = (r0_rot_0 & -4);
    cached_r3 = (cached_r3 + cached_r0);
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 3108));

return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x802B02C0 symbol=func_802B02C0_statefree_v0 gpr_in=0x00000018 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_802B02C0_statefree(uint32_t native_r3, uint32_t native_r4)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = 0;

    uint32_t r0_rot_0 = 0;

    MKW_GUEST_ENTER(0x802B02C0u);
    goto loc_802B02C0;

loc_802B02C0:
{
    cached_r5 = 0x806C0000u;
    cached_r5 = (cached_r5 + -21440);
    cached_r0 = MemoryInline::FlatRead8((cached_r5 + 3014));
    cached_r0 = (cached_r0 * 476);
    cached_r5 = (cached_r5 + cached_r0);
    cached_r0 = (cached_r3 & 255);
    cached_r0 = (cached_r0 * 48);
    cached_r3 = (cached_r5 + cached_r0);
    cached_r0 = (cached_r4 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(2));
    cached_r0 = (r0_rot_0 & -4);
    cached_r3 = (cached_r3 + cached_r0);
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 3108));

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_r5) };
}

}
// RECOMP_STATE_FREE_ABI address=0x802B02C0 symbol=func_802B02C0_statefree gpr_in=0x00000018 gpr_out=0x00000028 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802B02C0 func_802B02C0 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_802B02C0_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    [[clang::noinline]] func_802B02C0(ctx);
    return ctx->gpr[3];
}
