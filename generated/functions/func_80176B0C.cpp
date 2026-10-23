#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80176B0C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_80176B0C;

loc_80176B0C:
{
}

loc_80176B10:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80176B1C;
    }
}

loc_80176B14:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_80176B1C:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_80176B24:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80176B30;
    }
}

loc_80176B28:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_80176B30:
{
    r0 = MemoryInline::FlatRead8((r3 + 3));
}

loc_80176B38:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_80176B44;
    }
}

loc_80176B3C:
{
}

loc_80176B40:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(14))) {
        goto loc_80176B58;
    }
}

loc_80176B44:
{
    r0 = MemoryInline::FlatRead8((r3 + 484));
}

loc_80176B4C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80176B58;
    }
}

loc_80176B50:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_80176B58:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_80176B0C_statefree_v1(uint32_t native_r0, uint32_t native_r3, uint32_t native_xer)
{

    uint32_t cached_r0 = native_r0;
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;

    goto loc_80176B0C;

loc_80176B0C:
{
}

loc_80176B10:
{
    if ((static_cast<int32_t>(cached_r3) != static_cast<int32_t>(0))) {
        goto loc_80176B1C;
    }
}

loc_80176B14:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80176B1C:
{
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_80176B24:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_80176B30;
    }
}

loc_80176B28:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80176B30:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 3));
}

loc_80176B38:
{
    if ((static_cast<uint32_t>(cached_r0) == static_cast<uint32_t>(12))) {
        goto loc_80176B44;
    }
}

loc_80176B3C:
{
}

loc_80176B40:
{
    if ((static_cast<uint32_t>(cached_r0) != static_cast<uint32_t>(14))) {
        goto loc_80176B58;
    }
}

loc_80176B44:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 484));
}

loc_80176B4C:
{
    if ((static_cast<uint32_t>(cached_r0) != static_cast<uint32_t>(1))) {
        goto loc_80176B58;
    }
}

loc_80176B50:
{
    cached_r3 = 1;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80176B58:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80176B0C symbol=func_80176B0C_statefree_v1 gpr_in=0x00000009 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_ALWAYS_INLINE_BODY uint64_t func_80176B0C_statefree_v0(uint32_t native_r3, uint32_t native_xer)
{

    uint32_t cached_r0{};
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;

    goto loc_80176B0C;

loc_80176B0C:
{
}

loc_80176B10:
{
    if ((static_cast<int32_t>(cached_r3) != static_cast<int32_t>(0))) {
        goto loc_80176B1C;
    }
}

loc_80176B14:
{
    cached_r3 = 0;

    return static_cast<uint64_t>(cached_r3);
}

loc_80176B1C:
{
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_80176B24:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_80176B30;
    }
}

loc_80176B28:
{
    cached_r3 = 0;

    return static_cast<uint64_t>(cached_r3);
}

loc_80176B30:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 3));
}

loc_80176B38:
{
    if ((static_cast<uint32_t>(cached_r0) == static_cast<uint32_t>(12))) {
        goto loc_80176B44;
    }
}

loc_80176B3C:
{
}

loc_80176B40:
{
    if ((static_cast<uint32_t>(cached_r0) != static_cast<uint32_t>(14))) {
        goto loc_80176B58;
    }
}

loc_80176B44:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 484));
}

loc_80176B4C:
{
    if ((static_cast<uint32_t>(cached_r0) != static_cast<uint32_t>(1))) {
        goto loc_80176B58;
    }
}

loc_80176B50:
{
    cached_r3 = 1;

    return static_cast<uint64_t>(cached_r3);
}

loc_80176B58:
{
    cached_r3 = 0;

    return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x80176B0C symbol=func_80176B0C_statefree_v0 gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80176B0C_statefree(uint32_t native_r0, uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = native_r0;
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;

    goto loc_80176B0C;

loc_80176B0C:
{
}

loc_80176B10:
{
    if ((static_cast<int32_t>(cached_r3) != static_cast<int32_t>(0))) {
        goto loc_80176B1C;
    }
}

loc_80176B14:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80176B1C:
{
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_80176B24:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_80176B30;
    }
}

loc_80176B28:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80176B30:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 3));
}

loc_80176B38:
{
    if ((static_cast<uint32_t>(cached_r0) == static_cast<uint32_t>(12))) {
        goto loc_80176B44;
    }
}

loc_80176B3C:
{
}

loc_80176B40:
{
    if ((static_cast<uint32_t>(cached_r0) != static_cast<uint32_t>(14))) {
        goto loc_80176B58;
    }
}

loc_80176B44:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 484));
}

loc_80176B4C:
{
    if ((static_cast<uint32_t>(cached_r0) != static_cast<uint32_t>(1))) {
        goto loc_80176B58;
    }
}

loc_80176B50:
{
    cached_r3 = 1;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80176B58:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80176B0C symbol=func_80176B0C_statefree gpr_in=0x00000009 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80176B0C func_80176B0C preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_80176B0C_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_80176B0C(ctx);
    return ctx->gpr[3];
}
