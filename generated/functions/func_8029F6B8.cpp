#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8029F6B8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_8029F6B8;

loc_8029F6B8:
{
    r4 = 0x806B0000u;
    r4 = (r4 + -4808);
    r4 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r3 & 65535);
}

loc_8029F6CC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_8029F6D4;
    }
}

loc_8029F6D0:
{
    r3 = 0;
}

loc_8029F6D4:
{
    r0 = (r3 & 65535);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4_addr_0 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_8029F6B8_statefree_v0(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;

    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_addr_0 = 0;

    goto loc_8029F6B8;

loc_8029F6B8:
{
    cached_r4 = 0x806B0000u;
    cached_r4 = (cached_r4 + -4808);
    cached_r4 = MemoryInline::FlatRead32((cached_r4 + 8));
    cached_r0 = (cached_r3 & 65535);
}

loc_8029F6CC:
{
    if ((static_cast<uint32_t>(cached_r0) < static_cast<uint32_t>(747))) {
        goto loc_8029F6D4;
    }
}

loc_8029F6D0:
{
    cached_r3 = 0;
}

loc_8029F6D4:
{
    cached_r0 = (cached_r3 & 65535);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(2));
    cached_r0 = (r0_rot_0 & -4);
    r4_addr_0 = (cached_r4 + cached_r0);
    cached_r3 = MemoryInline::FlatRead32(r4_addr_0);

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(native_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x8029F6B8 symbol=func_8029F6B8_statefree_v0 gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_8029F6B8_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;

    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_addr_0 = 0;

    goto loc_8029F6B8;

loc_8029F6B8:
{
    cached_r4 = 0x806B0000u;
    cached_r4 = (cached_r4 + -4808);
    cached_r4 = MemoryInline::FlatRead32((cached_r4 + 8));
    cached_r0 = (cached_r3 & 65535);
}

loc_8029F6CC:
{
    if ((static_cast<uint32_t>(cached_r0) < static_cast<uint32_t>(747))) {
        goto loc_8029F6D4;
    }
}

loc_8029F6D0:
{
    cached_r3 = 0;
}

loc_8029F6D4:
{
    cached_r0 = (cached_r3 & 65535);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(2));
    cached_r0 = (r0_rot_0 & -4);
    r4_addr_0 = (cached_r4 + cached_r0);
    cached_r3 = MemoryInline::FlatRead32(r4_addr_0);

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(native_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x8029F6B8 symbol=func_8029F6B8_statefree gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8029F6B8 func_8029F6B8 preserves=true fpr_mask=0x00000000


extern "C" uint64_t func_8029F6B8_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    [[clang::noinline]] func_8029F6B8(ctx);
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
}
