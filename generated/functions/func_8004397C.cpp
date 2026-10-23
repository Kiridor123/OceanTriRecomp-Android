#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004397C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_8004397C;

loc_8004397C:
{
    r4 = (r3 * 848);
    r3 = 0x80660000u;
    r0 = (r3 + -18480);
    r3 = (r0 + r4);
    r0 = MemoryInline::FlatRead32((r3 + 52));
}

loc_80043994:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800439AC;
    }
}

loc_80043998:
{
}

loc_8004399C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_800439B4;
    }
}

loc_800439A0:
{
}

loc_800439A4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_800439BC;
    }
}

loc_800439A8:
{
    goto loc_800439C4;
}

loc_800439AC:
{
    r3 = MemoryInline::FlatRead16((r3 + 210));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

loc_800439B4:
{
    r3 = MemoryInline::FlatRead16((r3 + 286));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

loc_800439BC:
{
    r3 = MemoryInline::FlatRead16((r3 + 248));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

loc_800439C4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY uint64_t func_8004397C_statefree_v0(uint32_t native_r3, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;

    uint32_t cr0_0 = 0;

    goto loc_8004397C;

loc_8004397C:
{
    cached_r4 = (cached_r3 * 848);
    cached_r3 = 0x80660000u;
    cached_r0 = (cached_r3 + -18480);
    cached_r3 = (cached_r0 + cached_r4);
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 52));
}

loc_80043994:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_800439AC;
    }
}

loc_80043998:
{
}

loc_8004399C:
{
    if ((static_cast<uint32_t>(cached_r0) == static_cast<uint32_t>(1))) {
        goto loc_800439B4;
    }
}

loc_800439A0:
{
}

loc_800439A4:
{
    if ((static_cast<uint32_t>(cached_r0) == static_cast<uint32_t>(2))) {
        goto loc_800439BC;
    }
}

loc_800439A8:
{
    goto loc_800439C4;
}

loc_800439AC:
{
    cached_r3 = MemoryInline::FlatRead16((cached_r3 + 210));

return static_cast<uint64_t>(cached_r3);
}

loc_800439B4:
{
    cached_r3 = MemoryInline::FlatRead16((cached_r3 + 286));

return static_cast<uint64_t>(cached_r3);
}

loc_800439BC:
{
    cached_r3 = MemoryInline::FlatRead16((cached_r3 + 248));

return static_cast<uint64_t>(cached_r3);
}

loc_800439C4:
{
    cached_r3 = 0;

return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x8004397C symbol=func_8004397C_statefree_v0 gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE uint64_t func_8004397C_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;

    uint32_t cr0_0 = 0;

    goto loc_8004397C;

loc_8004397C:
{
    cached_r4 = (cached_r3 * 848);
    cached_r3 = 0x80660000u;
    cached_r0 = (cached_r3 + -18480);
    cached_r3 = (cached_r0 + cached_r4);
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 52));
}

loc_80043994:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_800439AC;
    }
}

loc_80043998:
{
}

loc_8004399C:
{
    if ((static_cast<uint32_t>(cached_r0) == static_cast<uint32_t>(1))) {
        goto loc_800439B4;
    }
}

loc_800439A0:
{
}

loc_800439A4:
{
    if ((static_cast<uint32_t>(cached_r0) == static_cast<uint32_t>(2))) {
        goto loc_800439BC;
    }
}

loc_800439A8:
{
    goto loc_800439C4;
}

loc_800439AC:
{
    cached_r3 = MemoryInline::FlatRead16((cached_r3 + 210));

return static_cast<uint64_t>(cached_r3);
}

loc_800439B4:
{
    cached_r3 = MemoryInline::FlatRead16((cached_r3 + 286));

return static_cast<uint64_t>(cached_r3);
}

loc_800439BC:
{
    cached_r3 = MemoryInline::FlatRead16((cached_r3 + 248));

return static_cast<uint64_t>(cached_r3);
}

loc_800439C4:
{
    cached_r3 = 0;

return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x8004397C symbol=func_8004397C_statefree gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004397C func_8004397C preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_8004397C_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_8004397C(ctx);
    return ctx->gpr[3];
}
