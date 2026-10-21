#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80085FA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x80085FA0u);
    goto loc_80085FA0;

loc_80085FA0:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r3 + r0);
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r4 + 6), static_cast<uint16_t>(r6));
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 | 2);
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80085FA0_statefree(uint32_t native_r3, uint32_t native_r4, uint32_t native_r5, uint32_t native_r6)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = native_r5;
    uint32_t cached_r6 = native_r6;

    uint32_t r0_rot_0 = 0;

    MKW_GUEST_ENTER(0x80085FA0u);
    goto loc_80085FA0;

loc_80085FA0:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r4), static_cast<uint32_t>(2));
    cached_r0 = (r0_rot_0 & -4);
    cached_r4 = (cached_r3 + cached_r0);
    MemoryInline::FlatWrite16((cached_r4 + 4), static_cast<uint16_t>(cached_r5));
    MemoryInline::FlatWrite16((cached_r4 + 6), static_cast<uint16_t>(cached_r6));
    cached_r0 = MemoryInline::FlatRead32(cached_r3);
    cached_r0 = (cached_r0 | 2);
    cached_r0 = (cached_r0 & -2);
    MemoryInline::FlatWrite32(cached_r3, cached_r0);

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r4) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80085FA0 symbol=func_80085FA0_statefree gpr_in=0x00000078 gpr_out=0x00000011 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80085FA0 func_80085FA0 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_80085FA0_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    ctx->gpr[5] = arg_r5;
    [[clang::noinline]] func_80085FA0(ctx);
    return ctx->gpr[4];
}
