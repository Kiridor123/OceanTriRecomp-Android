#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F0474(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x800F0474u);
    goto loc_800F0474;

loc_800F0474:
{
    r5 = 0;
    r4 = MemoryInline::FlatRead32((r13 + -17396));
    r0 = (r4 + 65536);
    r4 = (r0 + r3);
    MemoryInline::FlatWrite8((r4 + -26764), static_cast<uint8_t>(r5));
    r4 = MemoryInline::FlatRead32((r13 + -17396));
    r0 = (r4 + 65536);
    r4 = (r0 + r3);
    MemoryInline::FlatWrite8((r4 + -26957), static_cast<uint8_t>(r5));
    r4 = MemoryInline::FlatRead32((r13 + -17396));
    r0 = (r4 + 65536);
    r3 = (r0 + r3);
    MemoryInline::FlatWrite8((r3 + -27006), static_cast<uint8_t>(r5));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE void func_800F0474_statefree(uint32_t native_r3, uint32_t native_r13)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;
    uint32_t cached_r5 = 0;
    uint32_t cached_r13 = native_r13;

    MKW_GUEST_ENTER(0x800F0474u);
    goto loc_800F0474;

loc_800F0474:
{
    cached_r5 = 0;
    cached_r4 = MemoryInline::FlatRead32((cached_r13 + -17396));
    cached_r0 = (cached_r4 + 65536);
    cached_r4 = (cached_r0 + cached_r3);
    MemoryInline::FlatWrite8((cached_r4 + -26764), static_cast<uint8_t>(cached_r5));
    cached_r4 = MemoryInline::FlatRead32((cached_r13 + -17396));
    cached_r0 = (cached_r4 + 65536);
    cached_r4 = (cached_r0 + cached_r3);
    MemoryInline::FlatWrite8((cached_r4 + -26957), static_cast<uint8_t>(cached_r5));
    cached_r4 = MemoryInline::FlatRead32((cached_r13 + -17396));
    cached_r0 = (cached_r4 + 65536);
    cached_r3 = (cached_r0 + cached_r3);
    MemoryInline::FlatWrite8((cached_r3 + -27006), static_cast<uint8_t>(cached_r5));


    return;
}

}
// RECOMP_STATE_FREE_ABI address=0x800F0474 symbol=func_800F0474_statefree gpr_in=0x00002008 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800F0474 func_800F0474 preserves=true fpr_mask=0x00000000


extern "C" uint64_t func_800F0474_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_800F0474(ctx);
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
}
