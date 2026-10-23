#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081EBC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];

    goto loc_8081EBC0;

loc_8081EBC0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // inline leaf 0x8081F450 (3 guest instruction(s))
    r3 = 0x80870000u;
    r3 = MemoryInline::FlatRead32((r3 + -32304));
    // end of inlined leaf 0x8081F450
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r3 = MemoryInline::FlatRead8((r3 + 144));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_8081EBC0_statefree(uint32_t native_r1, uint32_t native_lr)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r1 = native_r1;
    uint32_t cached_r3 = 0;

    goto loc_8081EBC0;

loc_8081EBC0:
{
    MemoryInline::FlatWriteRam32((cached_r1 + -16), cached_r1);
    cached_r1 = (cached_r1 + -16);
    cached_r0 = native_lr;
    MemoryInline::FlatWriteRam32((cached_r1 + 20), cached_r0);
    // inline leaf 0x8081F450 (3 guest instruction(s))
    cached_r3 = 0x80870000u;
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + -32304));
    // end of inlined leaf 0x8081F450
    cached_r0 = MemoryInline::FlatRead32((cached_r1 + 20));
    cached_r3 = MemoryInline::FlatRead8((cached_r3 + 144));
    native_lr = cached_r0;
    cached_r1 = (cached_r1 + 16);

return { static_cast<uint64_t>(cached_r1), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x8081EBC0 symbol=func_8081EBC0_statefree gpr_in=0x00000002 gpr_out=0x0000000A fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=1


// RECOMP_GUEST_ABI gpr_read=0x00000002 gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8081EBC0 func_8081EBC0 preserves=true fpr_mask=0x00000000

