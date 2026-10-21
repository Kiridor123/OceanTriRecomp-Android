#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8042F4D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x8042F4D0u);
    goto loc_8042F4D0;

loc_8042F4D0:
{
    // inline leaf 0x8045339C (6 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -16440));
    r4 = (r4 + 65536);
    r0 = (r3 * 36);
    r3 = (r4 + r0);
    r3 = (r3 + -29596);
    // end of inlined leaf 0x8045339C
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY uint64_t func_8042F4D0_statefree_v0(uint32_t native_r3, uint32_t native_r13)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;
    uint32_t cached_r13 = native_r13;

    MKW_GUEST_ENTER(0x8042F4D0u);
    goto loc_8042F4D0;

loc_8042F4D0:
{
    // inline leaf 0x8045339C (6 guest instruction(s))
    cached_r4 = MemoryInline::FlatRead32((cached_r13 + -16440));
    cached_r4 = (cached_r4 + 65536);
    cached_r0 = (cached_r3 * 36);
    cached_r3 = (cached_r4 + cached_r0);
    cached_r3 = (cached_r3 + -29596);
    // end of inlined leaf 0x8045339C

return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x8042F4D0 symbol=func_8042F4D0_statefree_v0 gpr_in=0x00002008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_8042F4D0_statefree(uint32_t native_r3, uint32_t native_r13)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;
    uint32_t cached_r13 = native_r13;

    MKW_GUEST_ENTER(0x8042F4D0u);
    goto loc_8042F4D0;

loc_8042F4D0:
{
    // inline leaf 0x8045339C (6 guest instruction(s))
    cached_r4 = MemoryInline::FlatRead32((cached_r13 + -16440));
    cached_r4 = (cached_r4 + 65536);
    cached_r0 = (cached_r3 * 36);
    cached_r3 = (cached_r4 + cached_r0);
    cached_r3 = (cached_r3 + -29596);
    // end of inlined leaf 0x8045339C

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x8042F4D0 symbol=func_8042F4D0_statefree gpr_in=0x00002008 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8042F4D0 func_8042F4D0 preserves=true fpr_mask=0x00000000


extern "C" uint64_t func_8042F4D0_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_8042F4D0(ctx);
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
}
