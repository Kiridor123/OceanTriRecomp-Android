#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8046E860(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x8046E860u);
    goto loc_8046E860;

loc_8046E860:
{
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32(r4);
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_8046E860_statefree(uint32_t native_r3)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;

    MKW_GUEST_ENTER(0x8046E860u);
    goto loc_8046E860;

loc_8046E860:
{
    cached_r4 = MemoryInline::FlatRead32(cached_r3);
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 4));
    cached_r3 = MemoryInline::FlatRead32(cached_r4);
    cached_r3 = (cached_r3 + cached_r0);

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_r4) };
}

}
// RECOMP_STATE_FREE_ABI address=0x8046E860 symbol=func_8046E860_statefree gpr_in=0x00000008 gpr_out=0x00000018 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8046E860 func_8046E860 preserves=true fpr_mask=0x00000000


extern "C" uint64_t func_8046E860_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_8046E860(ctx);
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
}
