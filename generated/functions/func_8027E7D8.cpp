#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027E7D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_8027E7D8;

loc_8027E7D8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    r3 = (r3 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r0 - r3);
    r3 = 0x805C0000u;
    r3 = (r3 + 27192);
    r3_addr_0 = (r3 + r4);
    r0 = MemoryInline::FlatRead8(r3_addr_0);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r3 = (r4 + r3);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 2));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_8027E7D8_statefree(uint32_t native_r1, uint32_t native_r3)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r1 = native_r1;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;

    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;

    goto loc_8027E7D8;

loc_8027E7D8:
{
    MemoryInline::FlatWriteRam32((cached_r1 + -16), cached_r1);
    cached_r1 = (cached_r1 + -16);
    cached_r0 = 255;
    MemoryInline::FlatWriteRam8((cached_r1 + 11), static_cast<uint8_t>(cached_r0));
    cached_r3 = (cached_r3 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r3), static_cast<uint32_t>(2));
    cached_r0 = (r0_rot_0 & -4);
    cached_r4 = (cached_r0 - cached_r3);
    cached_r3 = 0x805C0000u;
    cached_r3 = (cached_r3 + 27192);
    r3_addr_0 = (cached_r3 + cached_r4);
    cached_r0 = MemoryInline::FlatRead8(r3_addr_0);
    MemoryInline::FlatWriteRam8((cached_r1 + 8), static_cast<uint8_t>(cached_r0));
    cached_r3 = (cached_r4 + cached_r3);
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 1));
    MemoryInline::FlatWriteRam8((cached_r1 + 9), static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 2));
    MemoryInline::FlatWriteRam8((cached_r1 + 10), static_cast<uint8_t>(cached_r0));
    cached_r3 = MemoryInline::FlatRead32((cached_r1 + 8));
    cached_r1 = (cached_r1 + 16);


    return { static_cast<uint64_t>(cached_r1), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x8027E7D8 symbol=func_8027E7D8_statefree gpr_in=0x0000000A gpr_out=0x0000000A fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027E7D8 func_8027E7D8 preserves=true fpr_mask=0x00000000


extern "C" uint64_t func_8027E7D8_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_8027E7D8(ctx);
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
}
