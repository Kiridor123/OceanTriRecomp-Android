#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8038440C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_8038440C;

loc_8038440C:
{
    r3 = 0x806C0000u;
    r3 = (r3 + 18584);
    r0 = MemoryInline::FlatRead8((r3 + 9));
}

loc_8038441C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80384434;
    }
}

loc_80384420:
{
    r0 = MemoryInline::FlatRead8((r3 + 7));
}

loc_80384428:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80384434;
    }
}

loc_8038442C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_80384434:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_8038440C_statefree_v0(uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;

    uint32_t cr0_0 = 0;

    goto loc_8038440C;

loc_8038440C:
{
    cached_r3 = 0x806C0000u;
    cached_r3 = (cached_r3 + 18584);
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 9));
}

loc_8038441C:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_80384434;
    }
}

loc_80384420:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 7));
}

loc_80384428:
{
    if ((static_cast<uint32_t>(cached_r0) != static_cast<uint32_t>(1))) {
        goto loc_80384434;
    }
}

loc_8038442C:
{
    cached_r3 = 1;

    return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(native_cr) };
}

loc_80384434:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(native_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x8038440C symbol=func_8038440C_statefree_v0 gpr_in=0x00000000 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_8038440C_statefree(uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;

    uint32_t cr0_0 = 0;

    goto loc_8038440C;

loc_8038440C:
{
    cached_r3 = 0x806C0000u;
    cached_r3 = (cached_r3 + 18584);
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 9));
}

loc_8038441C:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_80384434;
    }
}

loc_80384420:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 7));
}

loc_80384428:
{
    if ((static_cast<uint32_t>(cached_r0) != static_cast<uint32_t>(1))) {
        goto loc_80384434;
    }
}

loc_8038442C:
{
    cached_r3 = 1;

    return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(native_cr) };
}

loc_80384434:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(native_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x8038440C symbol=func_8038440C_statefree gpr_in=0x00000000 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8038440C func_8038440C preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_8038440C_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_8038440C(ctx);
    return ctx->gpr[3];
}
