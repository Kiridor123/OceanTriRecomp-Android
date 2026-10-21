#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80334A98(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x80334A98u);
    goto loc_80334A98;

loc_80334A98:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r6));
    ctx->gpr[0] = r0;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY void func_80334A98_statefree_v0(uint32_t native_r3, uint32_t native_r4, uint32_t native_r5, uint32_t native_r6)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = native_r5;
    uint32_t cached_r6 = native_r6;

    MKW_GUEST_ENTER(0x80334A98u);
    goto loc_80334A98;

loc_80334A98:
{
    cached_r0 = 0;
    MemoryInline::FlatWrite8(cached_r3, static_cast<uint8_t>(cached_r0));
    MemoryInline::FlatWrite8((cached_r3 + 1), static_cast<uint8_t>(cached_r4));
    MemoryInline::FlatWrite8((cached_r3 + 2), static_cast<uint8_t>(cached_r5));
    MemoryInline::FlatWrite8((cached_r3 + 3), static_cast<uint8_t>(cached_r6));
return;
}

}
// RECOMP_STATE_FREE_ABI address=0x80334A98 symbol=func_80334A98_statefree_v0 gpr_in=0x00000078 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE uint64_t func_80334A98_statefree(uint32_t native_r3, uint32_t native_r4, uint32_t native_r5, uint32_t native_r6)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = native_r5;
    uint32_t cached_r6 = native_r6;

    MKW_GUEST_ENTER(0x80334A98u);
    goto loc_80334A98;

loc_80334A98:
{
    cached_r0 = 0;
    MemoryInline::FlatWrite8(cached_r3, static_cast<uint8_t>(cached_r0));
    MemoryInline::FlatWrite8((cached_r3 + 1), static_cast<uint8_t>(cached_r4));
    MemoryInline::FlatWrite8((cached_r3 + 2), static_cast<uint8_t>(cached_r5));
    MemoryInline::FlatWrite8((cached_r3 + 3), static_cast<uint8_t>(cached_r6));
return static_cast<uint64_t>(cached_r0);
}


    return static_cast<uint64_t>(cached_r0);
}
// RECOMP_STATE_FREE_ABI address=0x80334A98 symbol=func_80334A98_statefree gpr_in=0x00000078 gpr_out=0x00000001 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80334A98 func_80334A98 preserves=true fpr_mask=0x00000000


extern "C" void func_80334A98_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    ctx->gpr[5] = arg_r5;
    [[clang::noinline]] func_80334A98(ctx);
}
