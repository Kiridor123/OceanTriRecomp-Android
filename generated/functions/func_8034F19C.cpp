#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8034F19C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_8034F19C;

loc_8034F19C:
{
    r0 = MemoryInline::FlatRead8((r3 + 485));
}

loc_8034F1A4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_8034F1B0;
    }
}

loc_8034F1A8:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_8034F1B0:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r3 + -5);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_0 & 134217727);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY uint64_t func_8034F19C_statefree_v0(uint32_t native_r3, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    goto loc_8034F19C;

loc_8034F19C:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 485));
}

loc_8034F1A4:
{
    if ((static_cast<uint32_t>(cached_r0) == static_cast<uint32_t>(11))) {
        goto loc_8034F1B0;
    }
}

loc_8034F1A8:
{
    cached_r3 = -1;

    return static_cast<uint64_t>(cached_r3);
}

loc_8034F1B0:
{
    cached_r3 = MemoryInline::FlatRead8((cached_r3 + 486));
    cached_r0 = (cached_r3 + -5);
    cached_r0 = PPC_CntlzwInline(static_cast<uint32_t>(cached_r0));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(27));
    cached_r0 = (r0_rot_0 & 134217727);
    cached_r3 = (static_cast<int32_t>(static_cast<int8_t>(cached_r0)));

    return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x8034F19C symbol=func_8034F19C_statefree_v0 gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE uint64_t func_8034F19C_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    goto loc_8034F19C;

loc_8034F19C:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 485));
}

loc_8034F1A4:
{
    if ((static_cast<uint32_t>(cached_r0) == static_cast<uint32_t>(11))) {
        goto loc_8034F1B0;
    }
}

loc_8034F1A8:
{
    cached_r3 = -1;

    return static_cast<uint64_t>(cached_r3);
}

loc_8034F1B0:
{
    cached_r3 = MemoryInline::FlatRead8((cached_r3 + 486));
    cached_r0 = (cached_r3 + -5);
    cached_r0 = PPC_CntlzwInline(static_cast<uint32_t>(cached_r0));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(27));
    cached_r0 = (r0_rot_0 & 134217727);
    cached_r3 = (static_cast<int32_t>(static_cast<int8_t>(cached_r0)));

    return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x8034F19C symbol=func_8034F19C_statefree gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8034F19C func_8034F19C preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_8034F19C_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_8034F19C(ctx);
    return ctx->gpr[3];
}
