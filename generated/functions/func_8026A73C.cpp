#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8026A73C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_8026A73C;

loc_8026A73C:
{
    r6 = MemoryInline::FlatRead32((r3 + 220));
    r5 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_8026A73C_statefree(uint32_t native_r3, uint32_t native_r4)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = 0;
    uint32_t cached_r6 = 0;

    goto loc_8026A73C;

loc_8026A73C:
{
    cached_r6 = MemoryInline::FlatRead32((cached_r3 + 220));
    cached_r5 = 1;
    cached_r0 = (cached_r4 & 31);
    cached_r0 = PPC_Slw(static_cast<uint32_t>(cached_r5), static_cast<uint32_t>(cached_r0));
    cached_r0 = (cached_r6 | cached_r0);
    MemoryInline::FlatWrite32((cached_r3 + 220), cached_r0);

return { static_cast<uint64_t>(cached_r5), static_cast<uint64_t>(cached_r6) };
}

}
// RECOMP_STATE_FREE_ABI address=0x8026A73C symbol=func_8026A73C_statefree gpr_in=0x00000018 gpr_out=0x00000060 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000061 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8026A73C func_8026A73C preserves=true fpr_mask=0x00000000


extern "C" void func_8026A73C_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    [[clang::noinline]] func_8026A73C(ctx);
}
