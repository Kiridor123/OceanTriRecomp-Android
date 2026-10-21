#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802E5284(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x802E5284u);
    goto loc_802E5284;

loc_802E5284:
{
    r4 = MemoryInline::FlatRead32((r3 + 72));
    r0 = MemoryInline::FlatRead8((r4 + 964));
}

loc_802E5290:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802E52A8;
    }
}

loc_802E5294:
{
}

loc_802E5298:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802E52B8;
    }
}

loc_802E529C:
{
}

loc_802E52A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802E52D0;
    }
}

loc_802E52A4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

loc_802E52A8:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 76), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r3 + 80), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

loc_802E52B8:
{
    r0 = 34;
    MemoryInline::FlatWrite16((r3 + 76), static_cast<uint16_t>(r0));
    r4 = 16711680;
    r0 = (r4 + 255);
    MemoryInline::FlatWrite32((r3 + 80), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

loc_802E52D0:
{
    r0 = 2;
    MemoryInline::FlatWrite16((r3 + 76), static_cast<uint16_t>(r0));
    r4 = -16777216;
    r0 = (r4 + 255);
    MemoryInline::FlatWrite32((r3 + 80), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_802E5284_statefree_v0(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;

    uint32_t cr0_0 = 0;

    MKW_GUEST_ENTER(0x802E5284u);
    goto loc_802E5284;

loc_802E5284:
{
    cached_r4 = MemoryInline::FlatRead32((cached_r3 + 72));
    cached_r0 = MemoryInline::FlatRead8((cached_r4 + 964));
}

loc_802E5290:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_802E52A8;
    }
}

loc_802E5294:
{
}

loc_802E5298:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(1))) {
        goto loc_802E52B8;
    }
}

loc_802E529C:
{
}

loc_802E52A0:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(2))) {
        goto loc_802E52D0;
    }
}

loc_802E52A4:
{

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(native_cr) };
}

loc_802E52A8:
{
    cached_r0 = 0;
    MemoryInline::FlatWrite16((cached_r3 + 76), static_cast<uint16_t>(cached_r0));
    MemoryInline::FlatWrite32((cached_r3 + 80), cached_r0);

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(native_cr) };
}

loc_802E52B8:
{
    cached_r0 = 34;
    MemoryInline::FlatWrite16((cached_r3 + 76), static_cast<uint16_t>(cached_r0));
    cached_r4 = 16711680;
    cached_r0 = (cached_r4 + 255);
    MemoryInline::FlatWrite32((cached_r3 + 80), cached_r0);

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(native_cr) };
}

loc_802E52D0:
{
    cached_r0 = 2;
    MemoryInline::FlatWrite16((cached_r3 + 76), static_cast<uint16_t>(cached_r0));
    cached_r4 = -16777216;
    cached_r0 = (cached_r4 + 255);
    MemoryInline::FlatWrite32((cached_r3 + 80), cached_r0);

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(native_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x802E5284 symbol=func_802E5284_statefree_v0 gpr_in=0x00000008 gpr_out=0x00000001 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_802E5284_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;

    uint32_t cr0_0 = 0;

    MKW_GUEST_ENTER(0x802E5284u);
    goto loc_802E5284;

loc_802E5284:
{
    cached_r4 = MemoryInline::FlatRead32((cached_r3 + 72));
    cached_r0 = MemoryInline::FlatRead8((cached_r4 + 964));
}

loc_802E5290:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_802E52A8;
    }
}

loc_802E5294:
{
}

loc_802E5298:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(1))) {
        goto loc_802E52B8;
    }
}

loc_802E529C:
{
}

loc_802E52A0:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(2))) {
        goto loc_802E52D0;
    }
}

loc_802E52A4:
{

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(native_cr) };
}

loc_802E52A8:
{
    cached_r0 = 0;
    MemoryInline::FlatWrite16((cached_r3 + 76), static_cast<uint16_t>(cached_r0));
    MemoryInline::FlatWrite32((cached_r3 + 80), cached_r0);

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(native_cr) };
}

loc_802E52B8:
{
    cached_r0 = 34;
    MemoryInline::FlatWrite16((cached_r3 + 76), static_cast<uint16_t>(cached_r0));
    cached_r4 = 16711680;
    cached_r0 = (cached_r4 + 255);
    MemoryInline::FlatWrite32((cached_r3 + 80), cached_r0);

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(native_cr) };
}

loc_802E52D0:
{
    cached_r0 = 2;
    MemoryInline::FlatWrite16((cached_r3 + 76), static_cast<uint16_t>(cached_r0));
    cached_r4 = -16777216;
    cached_r0 = (cached_r4 + 255);
    MemoryInline::FlatWrite32((cached_r3 + 80), cached_r0);

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(native_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x802E5284 symbol=func_802E5284_statefree gpr_in=0x00000008 gpr_out=0x00000001 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802E5284 func_802E5284 preserves=true fpr_mask=0x00000000


extern "C" void func_802E5284_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_802E5284(ctx);
}
