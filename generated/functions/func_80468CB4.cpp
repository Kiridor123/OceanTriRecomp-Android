#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80468CB4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_80468CB4;

loc_80468CB4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 8), r4);
    MemoryInline::FlatWrite32((r3 + 12), r5);
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    MemoryInline::FlatWrite32((r3 + 20), r5);
    r3 = (r3 + 24);
    // inline leaf 0x80468C70 (1 guest instruction(s))
    // end of inlined leaf 0x80468C70
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE void func_80468CB4_statefree(uint32_t native_r3, uint32_t native_r4, uint32_t native_r5)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = native_r5;

    goto loc_80468CB4;

loc_80468CB4:
{
    cached_r0 = 0;
    MemoryInline::FlatWrite32((cached_r3 + 8), cached_r4);
    MemoryInline::FlatWrite32((cached_r3 + 12), cached_r5);
    MemoryInline::FlatWrite32(cached_r3, cached_r4);
    MemoryInline::FlatWrite32((cached_r3 + 4), cached_r4);
    MemoryInline::FlatWrite32((cached_r3 + 16), cached_r0);
    MemoryInline::FlatWrite32((cached_r3 + 20), cached_r5);
    cached_r3 = (cached_r3 + 24);
    // inline leaf 0x80468C70 (1 guest instruction(s))
    // end of inlined leaf 0x80468C70

    return;
}

}
// RECOMP_STATE_FREE_ABI address=0x80468CB4 symbol=func_80468CB4_statefree gpr_in=0x00000038 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80468CB4 func_80468CB4 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_80468CB4_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    ctx->gpr[5] = arg_r5;
    [[clang::noinline]] func_80468CB4(ctx);
    return ctx->gpr[3];
}
