#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8041C870(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x8041C870u);
    goto loc_8041C870;

loc_8041C870:
{
    r0 = MemoryInline::FlatRead32((r3 + 104));
}

loc_8041C878:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8041C87C:
{
    r0 = MemoryInline::FlatRead32((r3 + 108));
}

loc_8041C884:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8041C888:
{
    r0 = MemoryInline::FlatRead8((r3 + 288));
}

loc_8041C890:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8041C894:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 290), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 44));
}

loc_8041C8A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_return;
    }
}

loc_8041C8A8:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 44), r0);
    ctx->gpr[0] = r0;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY uint64_t func_8041C870_statefree_v1(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;

    MKW_GUEST_ENTER(0x8041C870u);
    goto loc_8041C870;

loc_8041C870:
{
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 104));
}

loc_8041C878:
{
    if ((static_cast<int32_t>(cached_r0) < static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8041C87C:
{
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 108));
}

loc_8041C884:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8041C888:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 288));
}

loc_8041C890:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8041C894:
{
    cached_r0 = 1;
    MemoryInline::FlatWrite8((cached_r3 + 290), static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 44));
}

loc_8041C8A4:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(1))) {
        goto loc_return;
    }
}

loc_8041C8A8:
{
    cached_r0 = 2;
    MemoryInline::FlatWrite32((cached_r3 + 44), cached_r0);
return static_cast<uint64_t>(native_cr);
}

loc_return:
{
return static_cast<uint64_t>(native_cr);
}


    return static_cast<uint64_t>(native_cr);
}
// RECOMP_STATE_FREE_ABI address=0x8041C870 symbol=func_8041C870_statefree_v1 gpr_in=0x00000008 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_8041C870_statefree_v0(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;

    MKW_GUEST_ENTER(0x8041C870u);
    goto loc_8041C870;

loc_8041C870:
{
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 104));
}

loc_8041C878:
{
    if ((static_cast<int32_t>(cached_r0) < static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8041C87C:
{
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 108));
}

loc_8041C884:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8041C888:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 288));
}

loc_8041C890:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8041C894:
{
    cached_r0 = 1;
    MemoryInline::FlatWrite8((cached_r3 + 290), static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 44));
}

loc_8041C8A4:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(1))) {
        goto loc_return;
    }
}

loc_8041C8A8:
{
    cached_r0 = 2;
    MemoryInline::FlatWrite32((cached_r3 + 44), cached_r0);
return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(native_cr) };
}

loc_return:
{
return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(native_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x8041C870 symbol=func_8041C870_statefree_v0 gpr_in=0x00000008 gpr_out=0x00000001 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_8041C870_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;

    MKW_GUEST_ENTER(0x8041C870u);
    goto loc_8041C870;

loc_8041C870:
{
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 104));
}

loc_8041C878:
{
    if ((static_cast<int32_t>(cached_r0) < static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8041C87C:
{
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 108));
}

loc_8041C884:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8041C888:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 288));
}

loc_8041C890:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8041C894:
{
    cached_r0 = 1;
    MemoryInline::FlatWrite8((cached_r3 + 290), static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 44));
}

loc_8041C8A4:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(1))) {
        goto loc_return;
    }
}

loc_8041C8A8:
{
    cached_r0 = 2;
    MemoryInline::FlatWrite32((cached_r3 + 44), cached_r0);
return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(native_cr) };
}

loc_return:
{
return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(native_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x8041C870 symbol=func_8041C870_statefree gpr_in=0x00000008 gpr_out=0x00000001 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8041C870 func_8041C870 preserves=true fpr_mask=0x00000000


extern "C" void func_8041C870_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_8041C870(ctx);
}
