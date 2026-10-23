#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8034D2E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_8034D2E8;

loc_8034D2E8:
{
    r0 = 9;
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r4));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 12), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 14), static_cast<uint16_t>(r0));
    r3 = 9;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_8034D2E8_statefree(uint32_t native_r3, uint32_t native_r4)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    goto loc_8034D2E8;

loc_8034D2E8:
{
    cached_r0 = 9;
    MemoryInline::FlatWrite32(cached_r3, cached_r0);
    MemoryInline::FlatWrite16((cached_r3 + 4), static_cast<uint16_t>(cached_r4));
    cached_r0 = 0;
    MemoryInline::FlatWrite16((cached_r3 + 6), static_cast<uint16_t>(cached_r0));
    MemoryInline::FlatWrite16((cached_r3 + 8), static_cast<uint16_t>(cached_r0));
    MemoryInline::FlatWrite16((cached_r3 + 10), static_cast<uint16_t>(cached_r0));
    MemoryInline::FlatWrite16((cached_r3 + 12), static_cast<uint16_t>(cached_r0));
    MemoryInline::FlatWrite16((cached_r3 + 14), static_cast<uint16_t>(cached_r0));
    cached_r3 = 9;

    return static_cast<uint64_t>(cached_r0);
}


    return static_cast<uint64_t>(cached_r0);
}
// RECOMP_STATE_FREE_ABI address=0x8034D2E8 symbol=func_8034D2E8_statefree gpr_in=0x00000018 gpr_out=0x00000001 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8034D2E8 func_8034D2E8 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_8034D2E8_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    [[clang::noinline]] func_8034D2E8(ctx);
    return ctx->gpr[3];
}
