#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004A270(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x8004A270u);
    goto loc_8004A270;

loc_8004A270:
{
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::FlatWrite32((r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY void func_8004A270_statefree_v0(uint32_t native_r3, uint32_t native_r4)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    MKW_GUEST_ENTER(0x8004A270u);
    goto loc_8004A270;

loc_8004A270:
{
    cached_r0 = MemoryInline::FlatRead8(cached_r4);
    MemoryInline::FlatWrite8(cached_r3, static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::FlatRead8((cached_r4 + 1));
    MemoryInline::FlatWrite8((cached_r3 + 1), static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::FlatRead16((cached_r4 + 2));
    MemoryInline::FlatWrite16((cached_r3 + 2), static_cast<uint16_t>(cached_r0));
    cached_r0 = MemoryInline::FlatRead16((cached_r4 + 4));
    MemoryInline::FlatWrite16((cached_r3 + 4), static_cast<uint16_t>(cached_r0));
    cached_r0 = MemoryInline::FlatRead32((cached_r4 + 6));
    MemoryInline::FlatWrite32((cached_r3 + 6), cached_r0);
    cached_r0 = MemoryInline::FlatRead16((cached_r4 + 10));
    MemoryInline::FlatWrite16((cached_r3 + 10), static_cast<uint16_t>(cached_r0));
return;
}

}
// RECOMP_STATE_FREE_ABI address=0x8004A270 symbol=func_8004A270_statefree_v0 gpr_in=0x00000018 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE uint64_t func_8004A270_statefree(uint32_t native_r3, uint32_t native_r4)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    MKW_GUEST_ENTER(0x8004A270u);
    goto loc_8004A270;

loc_8004A270:
{
    cached_r0 = MemoryInline::FlatRead8(cached_r4);
    MemoryInline::FlatWrite8(cached_r3, static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::FlatRead8((cached_r4 + 1));
    MemoryInline::FlatWrite8((cached_r3 + 1), static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::FlatRead16((cached_r4 + 2));
    MemoryInline::FlatWrite16((cached_r3 + 2), static_cast<uint16_t>(cached_r0));
    cached_r0 = MemoryInline::FlatRead16((cached_r4 + 4));
    MemoryInline::FlatWrite16((cached_r3 + 4), static_cast<uint16_t>(cached_r0));
    cached_r0 = MemoryInline::FlatRead32((cached_r4 + 6));
    MemoryInline::FlatWrite32((cached_r3 + 6), cached_r0);
    cached_r0 = MemoryInline::FlatRead16((cached_r4 + 10));
    MemoryInline::FlatWrite16((cached_r3 + 10), static_cast<uint16_t>(cached_r0));
return static_cast<uint64_t>(cached_r0);
}


    return static_cast<uint64_t>(cached_r0);
}
// RECOMP_STATE_FREE_ABI address=0x8004A270 symbol=func_8004A270_statefree gpr_in=0x00000018 gpr_out=0x00000001 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004A270 func_8004A270 preserves=true fpr_mask=0x00000000


extern "C" void func_8004A270_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    [[clang::noinline]] func_8004A270(ctx);
}
