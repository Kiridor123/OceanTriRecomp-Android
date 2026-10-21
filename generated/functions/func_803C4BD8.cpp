#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803C4BD8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    MKW_GUEST_ENTER(0x803C4BD8u);
    goto loc_803C4BD8;

loc_803C4BD8:
{
    r5 = 0x806D0000u;
    r4 = (r5 + 20384);
    r3 = 0;
    MemoryInline::FlatWriteRam8((r4 + 13), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r4 + 12), static_cast<uint8_t>(r3));
    r0 = 1;
    MemoryInline::FlatWriteRam8((r5 + 20384), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r4 + 4), r3);
    r0 = 255;
    MemoryInline::FlatWriteRam8((r4 + 2), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_803C4BD8_statefree()
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;
    uint32_t cached_r4 = 0;
    uint32_t cached_r5 = 0;

    MKW_GUEST_ENTER(0x803C4BD8u);
    goto loc_803C4BD8;

loc_803C4BD8:
{
    cached_r5 = 0x806D0000u;
    cached_r4 = (cached_r5 + 20384);
    cached_r3 = 0;
    MemoryInline::FlatWriteRam8((cached_r4 + 13), static_cast<uint8_t>(cached_r3));
    MemoryInline::FlatWriteRam8((cached_r4 + 12), static_cast<uint8_t>(cached_r3));
    cached_r0 = 1;
    MemoryInline::FlatWriteRam8((cached_r5 + 20384), static_cast<uint8_t>(cached_r0));
    MemoryInline::FlatWriteRam32((cached_r4 + 4), cached_r3);
    cached_r0 = 255;
    MemoryInline::FlatWriteRam8((cached_r4 + 2), static_cast<uint8_t>(cached_r0));


    return { static_cast<uint64_t>(cached_r4), static_cast<uint64_t>(cached_r5) };
}

}
// RECOMP_STATE_FREE_ABI address=0x803C4BD8 symbol=func_803C4BD8_statefree gpr_in=0x00000000 gpr_out=0x00000030 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803C4BD8 func_803C4BD8 preserves=true fpr_mask=0x00000000


extern "C" uint64_t func_803C4BD8_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_803C4BD8(ctx);
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
}
