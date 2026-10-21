#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80063D9C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x80063D9Cu);
    goto loc_80063D9C;

loc_80063D9C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = (r1 + 8);
    r4 = 0x80570000u;
    r4 = (r4 + -796);
    // inline leaf 0x80063CF0 (2 guest instruction(s))
    MemoryInline::FlatWriteRam32(r3, r4);
    // end of inlined leaf 0x80063CF0
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80063D9C_statefree(uint32_t native_r1, uint32_t native_lr)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r1 = native_r1;
    uint32_t cached_r3 = 0;
    uint32_t cached_r4 = 0;

    MKW_GUEST_ENTER(0x80063D9Cu);
    goto loc_80063D9C;

loc_80063D9C:
{
    MemoryInline::FlatWriteRam32((cached_r1 + -16), cached_r1);
    cached_r1 = (cached_r1 + -16);
    cached_r0 = native_lr;
    MemoryInline::FlatWriteRam32((cached_r1 + 20), cached_r0);
    cached_r3 = (cached_r1 + 8);
    cached_r4 = 0x80570000u;
    cached_r4 = (cached_r4 + -796);
    // inline leaf 0x80063CF0 (2 guest instruction(s))
    MemoryInline::FlatWriteRam32(cached_r3, cached_r4);
    // end of inlined leaf 0x80063CF0
    cached_r3 = MemoryInline::FlatRead32(cached_r3);
    cached_r0 = MemoryInline::FlatRead32((cached_r1 + 20));
    native_lr = cached_r0;
    cached_r1 = (cached_r1 + 16);


    return { static_cast<uint64_t>(cached_r1), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80063D9C symbol=func_80063D9C_statefree gpr_in=0x00000002 gpr_out=0x0000000A fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=1


// RECOMP_GUEST_ABI gpr_read=0x00000002 gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80063D9C func_80063D9C preserves=true fpr_mask=0x00000000


extern "C" uint64_t func_80063D9C_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80063D9C(ctx);
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
}
