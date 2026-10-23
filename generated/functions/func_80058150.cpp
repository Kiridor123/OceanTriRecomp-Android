#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80058150(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3_addr_0 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_80058150;

loc_80058150:
{
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & -4);
    r0 = 0;
    r3 = 0x80670000u;
    r3 = (r3 + -12024);
    r3_addr_0 = (r3 + r4);
    MemoryInline::FlatWrite32(r3_addr_0, r0);
    r3 = (r3 + r4);
    MemoryInline::FlatWrite32((r3 + 48), r0);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    MemoryInline::FlatWrite32((r3 + 64), r0);
    MemoryInline::FlatWrite32((r3 + 80), r0);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80058150_statefree(uint32_t native_r3)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;

    uint32_t r3_addr_0 = 0;
    uint32_t r4_rot_0 = 0;

    goto loc_80058150;

loc_80058150:
{
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r3), static_cast<uint32_t>(2));
    cached_r4 = (r4_rot_0 & -4);
    cached_r0 = 0;
    cached_r3 = 0x80670000u;
    cached_r3 = (cached_r3 + -12024);
    r3_addr_0 = (cached_r3 + cached_r4);
    MemoryInline::FlatWrite32(r3_addr_0, cached_r0);
    cached_r3 = (cached_r3 + cached_r4);
    MemoryInline::FlatWrite32((cached_r3 + 48), cached_r0);
    MemoryInline::FlatWrite32((cached_r3 + 16), cached_r0);
    MemoryInline::FlatWrite32((cached_r3 + 64), cached_r0);
    MemoryInline::FlatWrite32((cached_r3 + 80), cached_r0);
    MemoryInline::FlatWrite32((cached_r3 + 96), cached_r0);

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_r4) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80058150 symbol=func_80058150_statefree gpr_in=0x00000008 gpr_out=0x00000018 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80058150 func_80058150 preserves=true fpr_mask=0x00000000


extern "C" uint64_t func_80058150_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_80058150(ctx);
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
}
