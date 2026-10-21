#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803FE204(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x803FE204u);
    goto loc_803FE204;

loc_803FE204:
{
    // inline leaf 0x803FB644 (4 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 24772), r4);
    MemoryInline::FlatWrite32((r3 + 24776), r5);
    MemoryInline::FlatWrite32((r3 + 24780), r6);
    // end of inlined leaf 0x803FB644
    return;
}

}
extern "C" MKW_PPC_NO_INLINE void func_803FE204_statefree(uint32_t native_r3, uint32_t native_r4, uint32_t native_r5, uint32_t native_r6)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = native_r5;
    uint32_t cached_r6 = native_r6;

    MKW_GUEST_ENTER(0x803FE204u);
    goto loc_803FE204;

loc_803FE204:
{
    // inline leaf 0x803FB644 (4 guest instruction(s))
    MemoryInline::FlatWrite32((cached_r3 + 24772), cached_r4);
    MemoryInline::FlatWrite32((cached_r3 + 24776), cached_r5);
    MemoryInline::FlatWrite32((cached_r3 + 24780), cached_r6);
    // end of inlined leaf 0x803FB644
    return;
}

}
// RECOMP_STATE_FREE_ABI address=0x803FE204 symbol=func_803FE204_statefree gpr_in=0x00000078 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803FE204 func_803FE204 preserves=true fpr_mask=0x00000000


extern "C" void func_803FE204_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    ctx->gpr[5] = arg_r5;
    [[clang::noinline]] func_803FE204(ctx);
}
