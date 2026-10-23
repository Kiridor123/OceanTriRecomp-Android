#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802D9AB4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_802D9AB4;

loc_802D9AB4:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_802D9ABC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802D9AC8;
    }
}

loc_802D9AC0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_802D9AC8:
{
    r3 = MemoryInline::FlatRead8((r3 + 1132));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_802D9AB4_statefree_v0(uint32_t native_r3, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    goto loc_802D9AB4;

loc_802D9AB4:
{
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_802D9ABC:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_802D9AC8;
    }
}

loc_802D9AC0:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_802D9AC8:
{
    cached_r3 = MemoryInline::FlatRead8((cached_r3 + 1132));
    cached_r0 = (cached_r3 + -1);
    cached_r0 = PPC_CntlzwInline(static_cast<uint32_t>(cached_r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(27));
    cached_r3 = (r3_rot_0 & 134217727);

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x802D9AB4 symbol=func_802D9AB4_statefree_v0 gpr_in=0x00000008 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_802D9AB4_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    goto loc_802D9AB4;

loc_802D9AB4:
{
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_802D9ABC:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_802D9AC8;
    }
}

loc_802D9AC0:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_802D9AC8:
{
    cached_r3 = MemoryInline::FlatRead8((cached_r3 + 1132));
    cached_r0 = (cached_r3 + -1);
    cached_r0 = PPC_CntlzwInline(static_cast<uint32_t>(cached_r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(27));
    cached_r3 = (r3_rot_0 & 134217727);

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x802D9AB4 symbol=func_802D9AB4_statefree gpr_in=0x00000008 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802D9AB4 func_802D9AB4 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_802D9AB4_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_802D9AB4(ctx);
    return ctx->gpr[3];
}
