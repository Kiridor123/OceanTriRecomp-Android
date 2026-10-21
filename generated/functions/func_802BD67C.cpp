#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802BD67C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x802BD67Cu);
    goto loc_802BD67C;

loc_802BD67C:
{
    r3 = MemoryInline::FlatRead32((r3 + 140));
}

loc_802BD684:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802BD6B4;
    }
}

loc_802BD688:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_802BD690:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802BD6B4;
    }
}

loc_802BD694:
{
    r0 = MemoryInline::FlatRead8((r3 + 482));
}

loc_802BD69C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802BD6B4;
    }
}

loc_802BD6A0:
{
    r0 = MemoryInline::FlatRead8((r3 + 483));
}

loc_802BD6A8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802BD6B4;
    }
}

loc_802BD6AC:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_802BD6B4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_802BD67C_statefree_v0(uint32_t native_r0, uint32_t native_r3, uint32_t native_xer)
{

    uint32_t cached_r0 = native_r0;
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;

    MKW_GUEST_ENTER(0x802BD67Cu);
    goto loc_802BD67C;

loc_802BD67C:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 140));
}

loc_802BD684:
{
    if ((static_cast<int32_t>(cached_r3) == static_cast<int32_t>(0))) {
        goto loc_802BD6B4;
    }
}

loc_802BD688:
{
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_802BD690:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_802BD6B4;
    }
}

loc_802BD694:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 482));
}

loc_802BD69C:
{
    if ((static_cast<uint32_t>(cached_r0) != static_cast<uint32_t>(1))) {
        goto loc_802BD6B4;
    }
}

loc_802BD6A0:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 483));
}

loc_802BD6A8:
{
    if ((static_cast<uint32_t>(cached_r0) != static_cast<uint32_t>(2))) {
        goto loc_802BD6B4;
    }
}

loc_802BD6AC:
{
    cached_r3 = 1;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_802BD6B4:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x802BD67C symbol=func_802BD67C_statefree_v0 gpr_in=0x00000009 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_802BD67C_statefree(uint32_t native_r0, uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = native_r0;
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;

    MKW_GUEST_ENTER(0x802BD67Cu);
    goto loc_802BD67C;

loc_802BD67C:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 140));
}

loc_802BD684:
{
    if ((static_cast<int32_t>(cached_r3) == static_cast<int32_t>(0))) {
        goto loc_802BD6B4;
    }
}

loc_802BD688:
{
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_802BD690:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_802BD6B4;
    }
}

loc_802BD694:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 482));
}

loc_802BD69C:
{
    if ((static_cast<uint32_t>(cached_r0) != static_cast<uint32_t>(1))) {
        goto loc_802BD6B4;
    }
}

loc_802BD6A0:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 483));
}

loc_802BD6A8:
{
    if ((static_cast<uint32_t>(cached_r0) != static_cast<uint32_t>(2))) {
        goto loc_802BD6B4;
    }
}

loc_802BD6AC:
{
    cached_r3 = 1;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_802BD6B4:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x802BD67C symbol=func_802BD67C_statefree gpr_in=0x00000009 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802BD67C func_802BD67C preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_802BD67C_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_802BD67C(ctx);
    return ctx->gpr[3];
}
