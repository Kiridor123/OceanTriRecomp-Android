#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8046EC40(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    goto loc_8046EC40;

loc_8046EC40:
{
    r4 = 0x80700000u;
    r5 = 0x80700000u;
    r3 = 0;
    r0 = 2;
    MemoryInline::FlatWrite32((r13 + -16208), r3);
    r4 = (r4 + -26128);
    r5 = (r5 + -26256);
    ctr = r0;
}

loc_8046EC60:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 64u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r4, r3);
    guest_range_1 = MemoryInline::ResolveRangeHost(r5, 0, 64u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r5, r3);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r4 + 4), r3);
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r5 + 4), r3);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r4 + 8), r3);
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r5 + 8), r3);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r4 + 12), r3);
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r5 + 12), r3);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r4 + 16), r3);
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r5 + 16), r3);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r4 + 20), r3);
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r5 + 20), r3);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r4 + 24), r3);
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r5 + 24), r3);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r4 + 28), r3);
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r5 + 28), r3);
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r4 + 32), r3);
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r5 + 32), r3);
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r4 + 36), r3);
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r5 + 36), r3);
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r4 + 40), r3);
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r5 + 40), r3);
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r4 + 44), r3);
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r5 + 44), r3);
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r4 + 48), r3);
    MemoryInline::WriteResolved32(guest_range_1, 48u, (r5 + 48), r3);
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r4 + 52), r3);
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r5 + 52), r3);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r4 + 56), r3);
    MemoryInline::WriteResolved32(guest_range_1, 56u, (r5 + 56), r3);
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r4 + 60), r3);
    r4 = (r4 + 64);
    MemoryInline::WriteResolved32(guest_range_1, 60u, (r5 + 60), r3);
    r5 = (r5 + 64);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8046EC60;
    }
}

loc_8046ECEC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_8046EC40_statefree(uint32_t native_r13, uint32_t native_ctr)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;
    uint32_t cached_r4 = 0;
    uint32_t cached_r5 = 0;
    uint32_t cached_r13 = native_r13;

    uint32_t cached_ctr = native_ctr;

    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    goto loc_8046EC40;

loc_8046EC40:
{
    cached_r4 = 0x80700000u;
    cached_r5 = 0x80700000u;
    cached_r3 = 0;
    cached_r0 = 2;
    MemoryInline::FlatWrite32((cached_r13 + -16208), cached_r3);
    cached_r4 = (cached_r4 + -26128);
    cached_r5 = (cached_r5 + -26256);
    cached_ctr = cached_r0;
}

loc_8046EC60:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(cached_r4, 0, 64u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, cached_r4, cached_r3);
    guest_range_1 = MemoryInline::ResolveRangeHost(cached_r5, 0, 64u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, cached_r5, cached_r3);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (cached_r4 + 4), cached_r3);
    MemoryInline::WriteResolved32(guest_range_1, 4u, (cached_r5 + 4), cached_r3);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (cached_r4 + 8), cached_r3);
    MemoryInline::WriteResolved32(guest_range_1, 8u, (cached_r5 + 8), cached_r3);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (cached_r4 + 12), cached_r3);
    MemoryInline::WriteResolved32(guest_range_1, 12u, (cached_r5 + 12), cached_r3);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (cached_r4 + 16), cached_r3);
    MemoryInline::WriteResolved32(guest_range_1, 16u, (cached_r5 + 16), cached_r3);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (cached_r4 + 20), cached_r3);
    MemoryInline::WriteResolved32(guest_range_1, 20u, (cached_r5 + 20), cached_r3);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (cached_r4 + 24), cached_r3);
    MemoryInline::WriteResolved32(guest_range_1, 24u, (cached_r5 + 24), cached_r3);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (cached_r4 + 28), cached_r3);
    MemoryInline::WriteResolved32(guest_range_1, 28u, (cached_r5 + 28), cached_r3);
    MemoryInline::WriteResolved32(guest_range_0, 32u, (cached_r4 + 32), cached_r3);
    MemoryInline::WriteResolved32(guest_range_1, 32u, (cached_r5 + 32), cached_r3);
    MemoryInline::WriteResolved32(guest_range_0, 36u, (cached_r4 + 36), cached_r3);
    MemoryInline::WriteResolved32(guest_range_1, 36u, (cached_r5 + 36), cached_r3);
    MemoryInline::WriteResolved32(guest_range_0, 40u, (cached_r4 + 40), cached_r3);
    MemoryInline::WriteResolved32(guest_range_1, 40u, (cached_r5 + 40), cached_r3);
    MemoryInline::WriteResolved32(guest_range_0, 44u, (cached_r4 + 44), cached_r3);
    MemoryInline::WriteResolved32(guest_range_1, 44u, (cached_r5 + 44), cached_r3);
    MemoryInline::WriteResolved32(guest_range_0, 48u, (cached_r4 + 48), cached_r3);
    MemoryInline::WriteResolved32(guest_range_1, 48u, (cached_r5 + 48), cached_r3);
    MemoryInline::WriteResolved32(guest_range_0, 52u, (cached_r4 + 52), cached_r3);
    MemoryInline::WriteResolved32(guest_range_1, 52u, (cached_r5 + 52), cached_r3);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (cached_r4 + 56), cached_r3);
    MemoryInline::WriteResolved32(guest_range_1, 56u, (cached_r5 + 56), cached_r3);
    MemoryInline::WriteResolved32(guest_range_0, 60u, (cached_r4 + 60), cached_r3);
    cached_r4 = (cached_r4 + 64);
    MemoryInline::WriteResolved32(guest_range_1, 60u, (cached_r5 + 60), cached_r3);
    cached_r5 = (cached_r5 + 64);
    cached_ctr = (cached_ctr + -1);
    if ((cached_ctr != 0)) {
        goto loc_8046EC60;
    }
}

loc_8046ECEC:
{


return static_cast<uint64_t>(cached_ctr);
}


    return static_cast<uint64_t>(cached_ctr);
}
// RECOMP_STATE_FREE_ABI address=0x8046EC40 symbol=func_8046EC40_statefree gpr_in=0x00002000 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8046EC40 func_8046EC40 preserves=true fpr_mask=0x00000000


extern "C" uint64_t func_8046EC40_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_8046EC40(ctx);
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
}
