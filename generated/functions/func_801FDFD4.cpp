#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801FDFD4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    MKW_GUEST_ENTER(0x801FDFD4u);
    goto loc_801FDFD4;

loc_801FDFD4:
{
    r5 = MemoryInline::FlatRead32((r3 + 44));
    r0 = MemoryInline::FlatRead32((r3 + 536));
    r0 = (r0 - r5);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r3 + 468), r0);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0 = PPC_Divw(static_cast<int32_t>(r5), static_cast<int32_t>(r0));
    MemoryInline::FlatWrite32((r3 + 488), r0);
    MemoryInline::FlatWrite16((r3 + 484), static_cast<uint16_t>(r4));
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 553), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_801FDFD4_statefree(uint32_t native_r3, uint32_t native_r4)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = 0;

    MKW_GUEST_ENTER(0x801FDFD4u);
    goto loc_801FDFD4;

loc_801FDFD4:
{
    cached_r5 = MemoryInline::FlatRead32((cached_r3 + 44));
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 536));
    cached_r0 = (cached_r0 - cached_r5);
    cached_r0 = (cached_r0 & 65535);
    MemoryInline::FlatWrite32((cached_r3 + 468), cached_r0);
    cached_r5 = (static_cast<int32_t>(static_cast<int16_t>(cached_r0)));
    cached_r0 = (static_cast<int32_t>(static_cast<int16_t>(cached_r4)));
    cached_r0 = PPC_Divw(static_cast<int32_t>(cached_r5), static_cast<int32_t>(cached_r0));
    MemoryInline::FlatWrite32((cached_r3 + 488), cached_r0);
    MemoryInline::FlatWrite16((cached_r3 + 484), static_cast<uint16_t>(cached_r4));
    cached_r0 = 1;
    MemoryInline::FlatWrite8((cached_r3 + 553), static_cast<uint8_t>(cached_r0));

    return static_cast<uint64_t>(cached_r5);
}


    return static_cast<uint64_t>(cached_r5);
}
// RECOMP_STATE_FREE_ABI address=0x801FDFD4 symbol=func_801FDFD4_statefree gpr_in=0x00000018 gpr_out=0x00000020 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000021 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801FDFD4 func_801FDFD4 preserves=true fpr_mask=0x00000000


extern "C" void func_801FDFD4_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    [[clang::noinline]] func_801FDFD4(ctx);
}
