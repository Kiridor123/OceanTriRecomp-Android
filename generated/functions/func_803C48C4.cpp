#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803C48C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x803C48C4u);
    goto loc_803C48C4;

loc_803C48C4:
{
    r3 = 0x806D0000u;
    r3 = (r3 + 20384);
    r0 = MemoryInline::FlatRead8((r3 + 12));
}

loc_803C48D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803C48E0;
    }
}

loc_803C48D8:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_803C48E0:
{
    r3 = (r3 + 20);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_803C48EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803C48F8;
    }
}

loc_803C48F0:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_803C48F8:
{
    r0 = MemoryInline::FlatRead8((r3 + 8));
}

loc_803C4900:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803C490C;
    }
}

loc_803C4904:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_803C490C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY uint64_t func_803C48C4_statefree_v1(uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;

    uint32_t cr0_0 = 0;

    MKW_GUEST_ENTER(0x803C48C4u);
    goto loc_803C48C4;

loc_803C48C4:
{
    cached_r3 = 0x806D0000u;
    cached_r3 = (cached_r3 + 20384);
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 12));
}

loc_803C48D4:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_803C48E0;
    }
}

loc_803C48D8:
{
    cached_r3 = 1;

    return static_cast<uint64_t>(cached_r3);
}

loc_803C48E0:
{
    cached_r3 = (cached_r3 + 20);
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_803C48EC:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_803C48F8;
    }
}

loc_803C48F0:
{
    cached_r3 = 1;

    return static_cast<uint64_t>(cached_r3);
}

loc_803C48F8:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 8));
}

loc_803C4900:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_803C490C;
    }
}

loc_803C4904:
{
    cached_r3 = 1;

    return static_cast<uint64_t>(cached_r3);
}

loc_803C490C:
{
    cached_r3 = 0;

    return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x803C48C4 symbol=func_803C48C4_statefree_v1 gpr_in=0x00000000 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_803C48C4_statefree_v0(uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;

    uint32_t cr0_0 = 0;

    MKW_GUEST_ENTER(0x803C48C4u);
    goto loc_803C48C4;

loc_803C48C4:
{
    cached_r3 = 0x806D0000u;
    cached_r3 = (cached_r3 + 20384);
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 12));
}

loc_803C48D4:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_803C48E0;
    }
}

loc_803C48D8:
{
    cached_r3 = 1;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_803C48E0:
{
    cached_r3 = (cached_r3 + 20);
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_803C48EC:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_803C48F8;
    }
}

loc_803C48F0:
{
    cached_r3 = 1;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_803C48F8:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 8));
}

loc_803C4900:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_803C490C;
    }
}

loc_803C4904:
{
    cached_r3 = 1;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_803C490C:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x803C48C4 symbol=func_803C48C4_statefree_v0 gpr_in=0x00000000 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_803C48C4_statefree(uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;

    uint32_t cr0_0 = 0;

    MKW_GUEST_ENTER(0x803C48C4u);
    goto loc_803C48C4;

loc_803C48C4:
{
    cached_r3 = 0x806D0000u;
    cached_r3 = (cached_r3 + 20384);
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 12));
}

loc_803C48D4:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_803C48E0;
    }
}

loc_803C48D8:
{
    cached_r3 = 1;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_803C48E0:
{
    cached_r3 = (cached_r3 + 20);
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_803C48EC:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_803C48F8;
    }
}

loc_803C48F0:
{
    cached_r3 = 1;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_803C48F8:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 8));
}

loc_803C4900:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_803C490C;
    }
}

loc_803C4904:
{
    cached_r3 = 1;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_803C490C:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x803C48C4 symbol=func_803C48C4_statefree gpr_in=0x00000000 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803C48C4 func_803C48C4 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_803C48C4_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_803C48C4(ctx);
    return ctx->gpr[3];
}
