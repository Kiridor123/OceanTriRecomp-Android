#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802AAF18(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x802AAF18u);
    goto loc_802AAF18;

loc_802AAF18:
{
    r0 = MemoryInline::FlatRead8((r3 + 9));
}

loc_802AAF20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802AAF38;
    }
}

loc_802AAF24:
{
}

loc_802AAF28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802AAF50;
    }
}

loc_802AAF2C:
{
}

loc_802AAF30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802AAF68;
    }
}

loc_802AAF34:
{
    goto loc_802AAF80;
}

loc_802AAF38:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0 = MemoryInline::FlatRead8(r3);
}

loc_802AAF44:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802AAF80;
    }
}

loc_802AAF48:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_802AAF50:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0 = MemoryInline::FlatRead8(r3);
}

loc_802AAF5C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802AAF80;
    }
}

loc_802AAF60:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_802AAF68:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0 = MemoryInline::FlatRead8(r3);
}

loc_802AAF74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802AAF80;
    }
}

loc_802AAF78:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_802AAF80:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_802AAF18_statefree_v1(uint32_t native_r3, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;

    MKW_GUEST_ENTER(0x802AAF18u);
    goto loc_802AAF18;

loc_802AAF18:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 9));
}

loc_802AAF20:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_802AAF38;
    }
}

loc_802AAF24:
{
}

loc_802AAF28:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(1))) {
        goto loc_802AAF50;
    }
}

loc_802AAF2C:
{
}

loc_802AAF30:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(2))) {
        goto loc_802AAF68;
    }
}

loc_802AAF34:
{
    goto loc_802AAF80;
}

loc_802AAF38:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 12));
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_802AAF44:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_802AAF80;
    }
}

loc_802AAF48:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_802AAF50:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 12));
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_802AAF5C:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_802AAF80;
    }
}

loc_802AAF60:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_802AAF68:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 12));
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_802AAF74:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_802AAF80;
    }
}

loc_802AAF78:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_802AAF80:
{
    cached_r3 = 1;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x802AAF18 symbol=func_802AAF18_statefree_v1 gpr_in=0x00000008 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_ALWAYS_INLINE_BODY uint64_t func_802AAF18_statefree_v0(uint32_t native_r3, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;

    MKW_GUEST_ENTER(0x802AAF18u);
    goto loc_802AAF18;

loc_802AAF18:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 9));
}

loc_802AAF20:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_802AAF38;
    }
}

loc_802AAF24:
{
}

loc_802AAF28:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(1))) {
        goto loc_802AAF50;
    }
}

loc_802AAF2C:
{
}

loc_802AAF30:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(2))) {
        goto loc_802AAF68;
    }
}

loc_802AAF34:
{
    goto loc_802AAF80;
}

loc_802AAF38:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 12));
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_802AAF44:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_802AAF80;
    }
}

loc_802AAF48:
{
    cached_r3 = 0;

    return static_cast<uint64_t>(cached_r3);
}

loc_802AAF50:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 12));
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_802AAF5C:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_802AAF80;
    }
}

loc_802AAF60:
{
    cached_r3 = 0;

    return static_cast<uint64_t>(cached_r3);
}

loc_802AAF68:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 12));
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_802AAF74:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_802AAF80;
    }
}

loc_802AAF78:
{
    cached_r3 = 0;

    return static_cast<uint64_t>(cached_r3);
}

loc_802AAF80:
{
    cached_r3 = 1;

    return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x802AAF18 symbol=func_802AAF18_statefree_v0 gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_802AAF18_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;

    MKW_GUEST_ENTER(0x802AAF18u);
    goto loc_802AAF18;

loc_802AAF18:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 9));
}

loc_802AAF20:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_802AAF38;
    }
}

loc_802AAF24:
{
}

loc_802AAF28:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(1))) {
        goto loc_802AAF50;
    }
}

loc_802AAF2C:
{
}

loc_802AAF30:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(2))) {
        goto loc_802AAF68;
    }
}

loc_802AAF34:
{
    goto loc_802AAF80;
}

loc_802AAF38:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 12));
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_802AAF44:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_802AAF80;
    }
}

loc_802AAF48:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_802AAF50:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 12));
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_802AAF5C:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_802AAF80;
    }
}

loc_802AAF60:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_802AAF68:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 12));
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_802AAF74:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_802AAF80;
    }
}

loc_802AAF78:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_802AAF80:
{
    cached_r3 = 1;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x802AAF18 symbol=func_802AAF18_statefree gpr_in=0x00000008 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802AAF18 func_802AAF18 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_802AAF18_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_802AAF18(ctx);
    return ctx->gpr[3];
}
