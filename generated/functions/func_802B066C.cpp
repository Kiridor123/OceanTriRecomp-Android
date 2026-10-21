#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802B066C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x802B066Cu);
    goto loc_802B066C;

loc_802B066C:
{
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r0 = MemoryInline::FlatRead8((r3 + 3013));
}

loc_802B067C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802B06B4;
    }
}

loc_802B0680:
{
}

loc_802B0684:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_802B06B4;
    }
}

loc_802B0688:
{
}

loc_802B068C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(16))) {
        goto loc_802B06B4;
    }
}

loc_802B0690:
{
}

loc_802B0694:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_802B06B4;
    }
}

loc_802B0698:
{
}

loc_802B069C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(13))) {
        goto loc_802B06BC;
    }
}

loc_802B06A0:
{
}

loc_802B06A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_802B06BC;
    }
}

loc_802B06A8:
{
}

loc_802B06AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(15))) {
        goto loc_802B06BC;
    }
}

loc_802B06B0:
{
    goto loc_802B06C4;
}

loc_802B06B4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_802B06BC:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_802B06C4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY uint64_t func_802B066C_statefree_v0(uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;

    uint32_t cr0_0 = 0;

    MKW_GUEST_ENTER(0x802B066Cu);
    goto loc_802B066C;

loc_802B066C:
{
    cached_r3 = 0x806C0000u;
    cached_r3 = (cached_r3 + -21440);
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 3013));
}

loc_802B067C:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(2))) {
        goto loc_802B06B4;
    }
}

loc_802B0680:
{
}

loc_802B0684:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(5))) {
        goto loc_802B06B4;
    }
}

loc_802B0688:
{
}

loc_802B068C:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(16))) {
        goto loc_802B06B4;
    }
}

loc_802B0690:
{
}

loc_802B0694:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(10))) {
        goto loc_802B06B4;
    }
}

loc_802B0698:
{
}

loc_802B069C:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(13))) {
        goto loc_802B06BC;
    }
}

loc_802B06A0:
{
}

loc_802B06A4:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(4))) {
        goto loc_802B06BC;
    }
}

loc_802B06A8:
{
}

loc_802B06AC:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(15))) {
        goto loc_802B06BC;
    }
}

loc_802B06B0:
{
    goto loc_802B06C4;
}

loc_802B06B4:
{
    cached_r3 = 1;

    return static_cast<uint64_t>(cached_r3);
}

loc_802B06BC:
{
    cached_r3 = 2;

    return static_cast<uint64_t>(cached_r3);
}

loc_802B06C4:
{
    cached_r3 = 0;

    return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x802B066C symbol=func_802B066C_statefree_v0 gpr_in=0x00000000 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE uint64_t func_802B066C_statefree(uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;

    uint32_t cr0_0 = 0;

    MKW_GUEST_ENTER(0x802B066Cu);
    goto loc_802B066C;

loc_802B066C:
{
    cached_r3 = 0x806C0000u;
    cached_r3 = (cached_r3 + -21440);
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 3013));
}

loc_802B067C:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(2))) {
        goto loc_802B06B4;
    }
}

loc_802B0680:
{
}

loc_802B0684:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(5))) {
        goto loc_802B06B4;
    }
}

loc_802B0688:
{
}

loc_802B068C:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(16))) {
        goto loc_802B06B4;
    }
}

loc_802B0690:
{
}

loc_802B0694:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(10))) {
        goto loc_802B06B4;
    }
}

loc_802B0698:
{
}

loc_802B069C:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(13))) {
        goto loc_802B06BC;
    }
}

loc_802B06A0:
{
}

loc_802B06A4:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(4))) {
        goto loc_802B06BC;
    }
}

loc_802B06A8:
{
}

loc_802B06AC:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(15))) {
        goto loc_802B06BC;
    }
}

loc_802B06B0:
{
    goto loc_802B06C4;
}

loc_802B06B4:
{
    cached_r3 = 1;

    return static_cast<uint64_t>(cached_r3);
}

loc_802B06BC:
{
    cached_r3 = 2;

    return static_cast<uint64_t>(cached_r3);
}

loc_802B06C4:
{
    cached_r3 = 0;

    return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x802B066C symbol=func_802B066C_statefree gpr_in=0x00000000 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000001 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802B066C func_802B066C preserves=true fpr_mask=0x00000000

