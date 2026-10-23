#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80141750(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_80141750;

loc_80141750:
{
    r3 = 0x806A0000u;
    r3 = (r3 + 27152);
    r3 = (r3 + 144);
    r0 = MemoryInline::FlatRead8((r3 + 19));
}

loc_80141764:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_return;
    }
}

loc_80141768:
{
    r3 = (r3 + 20);
    r0 = MemoryInline::FlatRead8((r3 + 19));
}

loc_80141774:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_return;
    }
}

loc_80141778:
{
    r3 = (r3 + 20);
    r0 = MemoryInline::FlatRead8((r3 + 19));
}

loc_80141784:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_return;
    }
}

loc_80141788:
{
    r3 = (r3 + 20);
    r0 = MemoryInline::FlatRead8((r3 + 19));
}

loc_80141794:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_return;
    }
}

loc_80141798:
{
    r3 = (r3 + 20);
    r0 = MemoryInline::FlatRead8((r3 + 19));
}

loc_801417A4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_return;
    }
}

loc_801417A8:
{
    r3 = (r3 + 20);
    r0 = MemoryInline::FlatRead8((r3 + 19));
}

loc_801417B4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_return;
    }
}

loc_801417B8:
{
    r3 = (r3 + 20);
    r0 = MemoryInline::FlatRead8((r3 + 19));
}

loc_801417C4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_return;
    }
}

loc_801417C8:
{
    r3 = (r3 + 20);
    r0 = MemoryInline::FlatRead8((r3 + 19));
}

loc_801417D4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_return;
    }
}

loc_801417D8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_80141750_statefree_v0(uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;

    uint32_t cr0_0 = 0;

    goto loc_80141750;

loc_80141750:
{
    cached_r3 = 0x806A0000u;
    cached_r3 = (cached_r3 + 27152);
    cached_r3 = (cached_r3 + 144);
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 19));
}

loc_80141764:
{
    if ((static_cast<uint32_t>(cached_r0) == static_cast<uint32_t>(2))) {
        goto loc_return;
    }
}

loc_80141768:
{
    cached_r3 = (cached_r3 + 20);
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 19));
}

loc_80141774:
{
    if ((static_cast<uint32_t>(cached_r0) == static_cast<uint32_t>(2))) {
        goto loc_return;
    }
}

loc_80141778:
{
    cached_r3 = (cached_r3 + 20);
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 19));
}

loc_80141784:
{
    if ((static_cast<uint32_t>(cached_r0) == static_cast<uint32_t>(2))) {
        goto loc_return;
    }
}

loc_80141788:
{
    cached_r3 = (cached_r3 + 20);
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 19));
}

loc_80141794:
{
    if ((static_cast<uint32_t>(cached_r0) == static_cast<uint32_t>(2))) {
        goto loc_return;
    }
}

loc_80141798:
{
    cached_r3 = (cached_r3 + 20);
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 19));
}

loc_801417A4:
{
    if ((static_cast<uint32_t>(cached_r0) == static_cast<uint32_t>(2))) {
        goto loc_return;
    }
}

loc_801417A8:
{
    cached_r3 = (cached_r3 + 20);
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 19));
}

loc_801417B4:
{
    if ((static_cast<uint32_t>(cached_r0) == static_cast<uint32_t>(2))) {
        goto loc_return;
    }
}

loc_801417B8:
{
    cached_r3 = (cached_r3 + 20);
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 19));
}

loc_801417C4:
{
    if ((static_cast<uint32_t>(cached_r0) == static_cast<uint32_t>(2))) {
        goto loc_return;
    }
}

loc_801417C8:
{
    cached_r3 = (cached_r3 + 20);
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 19));
}

loc_801417D4:
{
    if ((static_cast<uint32_t>(cached_r0) == static_cast<uint32_t>(2))) {
        goto loc_return;
    }
}

loc_801417D8:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_return:
{

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80141750 symbol=func_80141750_statefree_v0 gpr_in=0x00000000 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80141750_statefree(uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;

    uint32_t cr0_0 = 0;

    goto loc_80141750;

loc_80141750:
{
    cached_r3 = 0x806A0000u;
    cached_r3 = (cached_r3 + 27152);
    cached_r3 = (cached_r3 + 144);
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 19));
}

loc_80141764:
{
    if ((static_cast<uint32_t>(cached_r0) == static_cast<uint32_t>(2))) {
        goto loc_return;
    }
}

loc_80141768:
{
    cached_r3 = (cached_r3 + 20);
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 19));
}

loc_80141774:
{
    if ((static_cast<uint32_t>(cached_r0) == static_cast<uint32_t>(2))) {
        goto loc_return;
    }
}

loc_80141778:
{
    cached_r3 = (cached_r3 + 20);
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 19));
}

loc_80141784:
{
    if ((static_cast<uint32_t>(cached_r0) == static_cast<uint32_t>(2))) {
        goto loc_return;
    }
}

loc_80141788:
{
    cached_r3 = (cached_r3 + 20);
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 19));
}

loc_80141794:
{
    if ((static_cast<uint32_t>(cached_r0) == static_cast<uint32_t>(2))) {
        goto loc_return;
    }
}

loc_80141798:
{
    cached_r3 = (cached_r3 + 20);
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 19));
}

loc_801417A4:
{
    if ((static_cast<uint32_t>(cached_r0) == static_cast<uint32_t>(2))) {
        goto loc_return;
    }
}

loc_801417A8:
{
    cached_r3 = (cached_r3 + 20);
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 19));
}

loc_801417B4:
{
    if ((static_cast<uint32_t>(cached_r0) == static_cast<uint32_t>(2))) {
        goto loc_return;
    }
}

loc_801417B8:
{
    cached_r3 = (cached_r3 + 20);
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 19));
}

loc_801417C4:
{
    if ((static_cast<uint32_t>(cached_r0) == static_cast<uint32_t>(2))) {
        goto loc_return;
    }
}

loc_801417C8:
{
    cached_r3 = (cached_r3 + 20);
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 19));
}

loc_801417D4:
{
    if ((static_cast<uint32_t>(cached_r0) == static_cast<uint32_t>(2))) {
        goto loc_return;
    }
}

loc_801417D8:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_return:
{

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80141750 symbol=func_80141750_statefree gpr_in=0x00000000 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80141750 func_80141750 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_80141750_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_80141750(ctx);
    return ctx->gpr[3];
}
