#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80842600(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_80842600;

loc_80842600:
{
    r5 = MemoryInline::FlatRead32((r3 + 1020));
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r3 + 1020));
    r5 = (r5 + 1);
    MemoryInline::FlatWrite32((r3 + 1020), r5);
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r3 + 1020));
    r5 = (r5 + 1);
    MemoryInline::FlatWrite32((r3 + 1020), r5);
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r3 + 1020));
    r4 = MemoryInline::FlatRead32((r3 + 1024));
    r0 = (r5 + 1);
    MemoryInline::FlatWrite32((r3 + 1020), r0);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 1024), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_80842600_statefree(uint32_t native_r3, uint32_t native_r4)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = 0;

    goto loc_80842600;

loc_80842600:
{
    cached_r5 = MemoryInline::FlatRead32((cached_r3 + 1020));
    cached_r0 = MemoryInline::FlatRead8(cached_r4);
    MemoryInline::FlatWrite8(cached_r5, static_cast<uint8_t>(cached_r0));
    cached_r5 = MemoryInline::FlatRead32((cached_r3 + 1020));
    cached_r5 = (cached_r5 + 1);
    MemoryInline::FlatWrite32((cached_r3 + 1020), cached_r5);
    cached_r0 = MemoryInline::FlatRead8((cached_r4 + 1));
    MemoryInline::FlatWrite8(cached_r5, static_cast<uint8_t>(cached_r0));
    cached_r5 = MemoryInline::FlatRead32((cached_r3 + 1020));
    cached_r5 = (cached_r5 + 1);
    MemoryInline::FlatWrite32((cached_r3 + 1020), cached_r5);
    cached_r0 = MemoryInline::FlatRead8((cached_r4 + 2));
    MemoryInline::FlatWrite8(cached_r5, static_cast<uint8_t>(cached_r0));
    cached_r5 = MemoryInline::FlatRead32((cached_r3 + 1020));
    cached_r4 = MemoryInline::FlatRead32((cached_r3 + 1024));
    cached_r0 = (cached_r5 + 1);
    MemoryInline::FlatWrite32((cached_r3 + 1020), cached_r0);
    cached_r0 = (cached_r4 + 1);
    MemoryInline::FlatWrite32((cached_r3 + 1024), cached_r0);

return static_cast<uint64_t>(cached_r0);
}


    return static_cast<uint64_t>(cached_r0);
}
// RECOMP_STATE_FREE_ABI address=0x80842600 symbol=func_80842600_statefree gpr_in=0x00000018 gpr_out=0x00000001 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80842600 func_80842600 preserves=true fpr_mask=0x00000000

