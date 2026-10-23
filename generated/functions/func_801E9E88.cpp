#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E9E88(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_801E9E88;

loc_801E9E88:
{
    r0 = (r3 & 255);
}

loc_801E9E90:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_801E9EAC;
    }
}

loc_801E9E94:
{
    r3 = 0x805C0000u;
    r3 = (r3 + -30056);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 2));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_801E9EAC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_801E9E88_statefree_v0(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    goto loc_801E9E88;

loc_801E9E88:
{
    cached_r0 = (cached_r3 & 255);
}

loc_801E9E90:
{
    if ((static_cast<uint32_t>(cached_r0) == static_cast<uint32_t>(255))) {
        goto loc_801E9EAC;
    }
}

loc_801E9E94:
{
    cached_r3 = 0x805C0000u;
    cached_r3 = (cached_r3 + -30056);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(2));
    cached_r0 = (r0_rot_0 & -4);
    cached_r3 = (cached_r3 + cached_r0);
    cached_r3 = MemoryInline::FlatRead16((cached_r3 + 2));

    return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(native_cr) };
}

loc_801E9EAC:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(native_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x801E9E88 symbol=func_801E9E88_statefree_v0 gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_801E9E88_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    goto loc_801E9E88;

loc_801E9E88:
{
    cached_r0 = (cached_r3 & 255);
}

loc_801E9E90:
{
    if ((static_cast<uint32_t>(cached_r0) == static_cast<uint32_t>(255))) {
        goto loc_801E9EAC;
    }
}

loc_801E9E94:
{
    cached_r3 = 0x805C0000u;
    cached_r3 = (cached_r3 + -30056);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(2));
    cached_r0 = (r0_rot_0 & -4);
    cached_r3 = (cached_r3 + cached_r0);
    cached_r3 = MemoryInline::FlatRead16((cached_r3 + 2));

    return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(native_cr) };
}

loc_801E9EAC:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(native_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x801E9E88 symbol=func_801E9E88_statefree gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801E9E88 func_801E9E88 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_801E9E88_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_801E9E88(ctx);
    return ctx->gpr[3];
}
