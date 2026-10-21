#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045E620(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x8045E620u);
    goto loc_8045E620;

loc_8045E620:
{
    r3 = 1103495168;
    r4 = MemoryInline::FlatRead32((r13 + -20792));
    r0 = (r3 + 20077);
    r3 = (r4 * r0);
    r0 = (r3 + 12345);
    MemoryInline::FlatWrite32((r13 + -20792), r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r3 = (r3_rot_0 & 32767);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_8045E620_statefree(uint32_t native_r13)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;
    uint32_t cached_r4 = 0;
    uint32_t cached_r13 = native_r13;

    uint32_t r3_rot_0 = 0;

    MKW_GUEST_ENTER(0x8045E620u);
    goto loc_8045E620;

loc_8045E620:
{
    cached_r3 = 1103495168;
    cached_r4 = MemoryInline::FlatRead32((cached_r13 + -20792));
    cached_r0 = (cached_r3 + 20077);
    cached_r3 = (cached_r4 * cached_r0);
    cached_r0 = (cached_r3 + 12345);
    MemoryInline::FlatWrite32((cached_r13 + -20792), cached_r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(16));
    cached_r3 = (r3_rot_0 & 32767);

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x8045E620 symbol=func_8045E620_statefree gpr_in=0x00002000 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00002000 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8045E620 func_8045E620 preserves=true fpr_mask=0x00000000


extern "C" uint64_t func_8045E620_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8045E620(ctx);
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
}
