#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004E908(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_8004E908;

loc_8004E908:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead32((r3 + 2184));
    r0 = (r0 | 1073741824);
    MemoryInline::FlatWriteRam32((r3 + 2184), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE void func_8004E908_statefree()
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;

    goto loc_8004E908;

loc_8004E908:
{
    cached_r3 = 0x80660000u;
    cached_r3 = (cached_r3 + -21920);
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 2184));
    cached_r0 = (cached_r0 | 1073741824);
    MemoryInline::FlatWriteRam32((cached_r3 + 2184), cached_r0);

    return;
}

}
// RECOMP_STATE_FREE_ABI address=0x8004E908 symbol=func_8004E908_statefree gpr_in=0x00000000 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004E908 func_8004E908 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_8004E908_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8004E908(ctx);
    return ctx->gpr[3];
}
