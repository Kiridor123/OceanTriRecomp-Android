#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8011E694(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_8011E694;

loc_8011E694:
{
    r0 = MemoryInline::FlatRead32((r3 + 2084));
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite32((r3 + 2084), r0);
    ctx->gpr[0] = r0;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_8011E694_statefree(uint32_t native_r3, uint32_t native_r4)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    goto loc_8011E694;

loc_8011E694:
{
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 2084));
    cached_r0 = (cached_r0 & ~cached_r4);
    MemoryInline::FlatWrite32((cached_r3 + 2084), cached_r0);
return static_cast<uint64_t>(cached_r0);
}


    return static_cast<uint64_t>(cached_r0);
}
// RECOMP_STATE_FREE_ABI address=0x8011E694 symbol=func_8011E694_statefree gpr_in=0x00000018 gpr_out=0x00000001 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8011E694 func_8011E694 preserves=true fpr_mask=0x00000000


extern "C" void func_8011E694_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    [[clang::noinline]] func_8011E694(ctx);
}
