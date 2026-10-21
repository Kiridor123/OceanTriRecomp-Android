#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8029F1D4(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x8029F1D4u);
    goto loc_8029F1D4;

loc_8029F1D4:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r4 = 65536;
    r0 = (r4 + -1);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 0u, r3, r0);
        MemoryInline::WriteResolved16(guest_range_0, 2u, (r3 + 2), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 4u, (r3 + 4), r0);
        MemoryInline::WriteResolved16(guest_range_0, 6u, (r3 + 6), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 8), r0);
        MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 10), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 12u, (r3 + 12), r0);
        MemoryInline::WriteResolved16(guest_range_0, 14u, (r3 + 14), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 16u, (r3 + 16), r0);
        MemoryInline::WriteResolved16(guest_range_0, 18u, (r3 + 18), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 20u, (r3 + 20), r0);
        MemoryInline::WriteResolved16(guest_range_0, 22u, (r3 + 22), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 24u, (r3 + 24), r0);
        MemoryInline::WriteResolved16(guest_range_0, 26u, (r3 + 26), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 28u, (r3 + 28), r0);
        MemoryInline::WriteResolved16(guest_range_0, 30u, (r3 + 30), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 32u, (r3 + 32), r0);
        MemoryInline::WriteResolved16(guest_range_0, 34u, (r3 + 34), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 36u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 36u, (r3 + 36), r0);
        MemoryInline::WriteResolved16(guest_range_0, 38u, (r3 + 38), r0);
    }
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_8029F1D4_statefree(uint32_t native_r3, uint32_t native_r4)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    uint8_t* guest_range_0 = nullptr;

    MKW_GUEST_ENTER(0x8029F1D4u);
    goto loc_8029F1D4;

loc_8029F1D4:
{
    cached_r0 = 0;
    MemoryInline::FlatWrite8(cached_r4, static_cast<uint8_t>(cached_r0));
    cached_r4 = 65536;
    cached_r0 = (cached_r4 + -1);
    guest_range_0 = MemoryInline::ResolveRangeHost(cached_r3, 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(cached_r0)) << 16) | static_cast<uint16_t>(cached_r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 0u, cached_r3, cached_r0);
        MemoryInline::WriteResolved16(guest_range_0, 2u, (cached_r3 + 2), cached_r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(cached_r0)) << 16) | static_cast<uint16_t>(cached_r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 4u, (cached_r3 + 4), cached_r0);
        MemoryInline::WriteResolved16(guest_range_0, 6u, (cached_r3 + 6), cached_r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(cached_r0)) << 16) | static_cast<uint16_t>(cached_r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 8u, (cached_r3 + 8), cached_r0);
        MemoryInline::WriteResolved16(guest_range_0, 10u, (cached_r3 + 10), cached_r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(cached_r0)) << 16) | static_cast<uint16_t>(cached_r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 12u, (cached_r3 + 12), cached_r0);
        MemoryInline::WriteResolved16(guest_range_0, 14u, (cached_r3 + 14), cached_r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(cached_r0)) << 16) | static_cast<uint16_t>(cached_r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 16u, (cached_r3 + 16), cached_r0);
        MemoryInline::WriteResolved16(guest_range_0, 18u, (cached_r3 + 18), cached_r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(cached_r0)) << 16) | static_cast<uint16_t>(cached_r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 20u, (cached_r3 + 20), cached_r0);
        MemoryInline::WriteResolved16(guest_range_0, 22u, (cached_r3 + 22), cached_r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(cached_r0)) << 16) | static_cast<uint16_t>(cached_r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 24u, (cached_r3 + 24), cached_r0);
        MemoryInline::WriteResolved16(guest_range_0, 26u, (cached_r3 + 26), cached_r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(cached_r0)) << 16) | static_cast<uint16_t>(cached_r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 28u, (cached_r3 + 28), cached_r0);
        MemoryInline::WriteResolved16(guest_range_0, 30u, (cached_r3 + 30), cached_r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(cached_r0)) << 16) | static_cast<uint16_t>(cached_r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 32u, (cached_r3 + 32), cached_r0);
        MemoryInline::WriteResolved16(guest_range_0, 34u, (cached_r3 + 34), cached_r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 36u, ((static_cast<uint32_t>(static_cast<uint16_t>(cached_r0)) << 16) | static_cast<uint16_t>(cached_r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 36u, (cached_r3 + 36), cached_r0);
        MemoryInline::WriteResolved16(guest_range_0, 38u, (cached_r3 + 38), cached_r0);
    }

    return static_cast<uint64_t>(cached_r4);
}


    return static_cast<uint64_t>(cached_r4);
}
// RECOMP_STATE_FREE_ABI address=0x8029F1D4 symbol=func_8029F1D4_statefree gpr_in=0x00000018 gpr_out=0x00000010 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8029F1D4 func_8029F1D4 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_8029F1D4_ra18_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    [[clang::noinline]] func_8029F1D4(ctx);
    return ctx->gpr[4];
}
