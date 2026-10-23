#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004E764(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];

    goto loc_8004E764;

loc_8004E764:
{
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = (r3 + 16168);
    // inline leaf 0x8004E774 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWrite32((r3 + 12), r0);
    // end of inlined leaf 0x8004E774
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_8004E764_statefree(uint32_t native_r3, uint32_t native_r13)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;
    uint32_t cached_r13 = native_r13;

    goto loc_8004E764;

loc_8004E764:
{
    cached_r4 = cached_r3;
    cached_r3 = MemoryInline::FlatRead32((cached_r13 + -17824));
    cached_r3 = (cached_r3 + 16168);
    // inline leaf 0x8004E774 (13 guest instruction(s))
    cached_r0 = MemoryInline::FlatRead8(cached_r4);
    MemoryInline::FlatWrite8(cached_r3, static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::FlatRead8((cached_r4 + 1));
    MemoryInline::FlatWrite8((cached_r3 + 1), static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::FlatRead16((cached_r4 + 2));
    cached_r0 = (cached_r0 << 16);
    cached_r0 = (static_cast<int32_t>(cached_r0) >> 16);
    MemoryInline::FlatWrite16((cached_r3 + 2), static_cast<uint16_t>(cached_r0));
    cached_r0 = MemoryInline::FlatRead32((cached_r4 + 4));
    MemoryInline::FlatWrite32((cached_r3 + 4), cached_r0);
    cached_r0 = MemoryInline::FlatRead32((cached_r4 + 8));
    MemoryInline::FlatWrite32((cached_r3 + 8), cached_r0);
    cached_r0 = MemoryInline::FlatRead32((cached_r4 + 12));
    MemoryInline::FlatWrite32((cached_r3 + 12), cached_r0);
    // end of inlined leaf 0x8004E774

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x8004E764 symbol=func_8004E764_statefree gpr_in=0x00002008 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004E764 func_8004E764 preserves=true fpr_mask=0x00000000


extern "C" uint64_t func_8004E764_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_8004E764(ctx);
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
}
