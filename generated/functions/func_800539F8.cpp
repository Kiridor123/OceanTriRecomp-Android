#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800539F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_800539F8;

loc_800539F8:
{
    r4 = 0x80670000u;
    r0 = MemoryInline::FlatRead32((r4 + -12896));
    r0 = (r0 & -131073);
    r0 = (r0 | 8192);
    MemoryInline::FlatWriteRam32((r4 + -12896), r0);
    r4 = (r4 + -12896);
    MemoryInline::FlatWriteRam32((r4 + 12), r3);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE void func_800539F8_statefree(uint32_t native_r3)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;

    goto loc_800539F8;

loc_800539F8:
{
    cached_r4 = 0x80670000u;
    cached_r0 = MemoryInline::FlatRead32((cached_r4 + -12896));
    cached_r0 = (cached_r0 & -131073);
    cached_r0 = (cached_r0 | 8192);
    MemoryInline::FlatWriteRam32((cached_r4 + -12896), cached_r0);
    cached_r4 = (cached_r4 + -12896);
    MemoryInline::FlatWriteRam32((cached_r4 + 12), cached_r3);

    return;
}

}
// RECOMP_STATE_FREE_ABI address=0x800539F8 symbol=func_800539F8_statefree gpr_in=0x00000008 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800539F8 func_800539F8 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_800539F8_ra8_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_800539F8(ctx);
    return ctx->gpr[4];
}
