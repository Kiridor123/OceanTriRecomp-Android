#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F2794(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_801F2794;

loc_801F2794:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 41u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, r4);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 41u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 2u, (r4 + 2));
    MemoryInline::WriteResolved32(guest_range_1, 2u, (r3 + 2), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r4 + 6));
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r3 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r4 + 8));
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r4 + 10));
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r4 + 12));
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r4 + 14));
    MemoryInline::WriteResolved16(guest_range_1, 14u, (r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r4 + 16));
    MemoryInline::WriteResolved16(guest_range_1, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 18u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 18u, (r4 + 18));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 22u, (r4 + 22));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 18u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 18u, (r3 + 18), r5);
        MemoryInline::WriteResolved32(guest_range_1, 22u, (r3 + 22), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 26u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 26u, (r4 + 26));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 30u, (r4 + 30));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 26u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 26u, (r3 + 26), r5);
        MemoryInline::WriteResolved32(guest_range_1, 30u, (r3 + 30), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 34u, (r4 + 34));
    MemoryInline::WriteResolved32(guest_range_1, 34u, (r3 + 34), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 38u, (r4 + 38));
    MemoryInline::WriteResolved16(guest_range_1, 38u, (r3 + 38), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 40u, (r4 + 40));
    MemoryInline::WriteResolved8(guest_range_1, 40u, (r3 + 40), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_801F2794_statefree(uint32_t native_r3, uint32_t native_r4)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = 0;

    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    goto loc_801F2794;

loc_801F2794:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(cached_r4, 0, 41u, true, false);
    cached_r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, cached_r4);
    guest_range_1 = MemoryInline::ResolveRangeHost(cached_r3, 0, 41u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, cached_r3, static_cast<uint16_t>(cached_r0));
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 2u, (cached_r4 + 2));
    MemoryInline::WriteResolved32(guest_range_1, 2u, (cached_r3 + 2), cached_r0);
    cached_r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (cached_r4 + 6));
    MemoryInline::WriteResolved16(guest_range_1, 6u, (cached_r3 + 6), static_cast<uint16_t>(cached_r0));
    cached_r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (cached_r4 + 8));
    MemoryInline::WriteResolved16(guest_range_1, 8u, (cached_r3 + 8), static_cast<uint16_t>(cached_r0));
    cached_r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (cached_r4 + 10));
    MemoryInline::WriteResolved16(guest_range_1, 10u, (cached_r3 + 10), static_cast<uint16_t>(cached_r0));
    cached_r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (cached_r4 + 12));
    MemoryInline::WriteResolved16(guest_range_1, 12u, (cached_r3 + 12), static_cast<uint16_t>(cached_r0));
    cached_r0 = MemoryInline::ReadResolved16(guest_range_0, 14u, (cached_r4 + 14));
    MemoryInline::WriteResolved16(guest_range_1, 14u, (cached_r3 + 14), static_cast<uint16_t>(cached_r0));
    cached_r0 = MemoryInline::ReadResolved16(guest_range_0, 16u, (cached_r4 + 16));
    MemoryInline::WriteResolved16(guest_range_1, 16u, (cached_r3 + 16), static_cast<uint16_t>(cached_r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 18u);
        if (resolved_pair.valid) {
            cached_r5 = resolved_pair.first;
            cached_r0 = resolved_pair.second;
        } else {
            cached_r5 = MemoryInline::ReadResolved32(guest_range_0, 18u, (cached_r4 + 18));
            cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 22u, (cached_r4 + 22));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 18u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r5)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 18u, (cached_r3 + 18), cached_r5);
        MemoryInline::WriteResolved32(guest_range_1, 22u, (cached_r3 + 22), cached_r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 26u);
        if (resolved_pair.valid) {
            cached_r5 = resolved_pair.first;
            cached_r0 = resolved_pair.second;
        } else {
            cached_r5 = MemoryInline::ReadResolved32(guest_range_0, 26u, (cached_r4 + 26));
            cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 30u, (cached_r4 + 30));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 26u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r5)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 26u, (cached_r3 + 26), cached_r5);
        MemoryInline::WriteResolved32(guest_range_1, 30u, (cached_r3 + 30), cached_r0);
    }
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 34u, (cached_r4 + 34));
    MemoryInline::WriteResolved32(guest_range_1, 34u, (cached_r3 + 34), cached_r0);
    cached_r0 = MemoryInline::ReadResolved16(guest_range_0, 38u, (cached_r4 + 38));
    MemoryInline::WriteResolved16(guest_range_1, 38u, (cached_r3 + 38), static_cast<uint16_t>(cached_r0));
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 40u, (cached_r4 + 40));
    MemoryInline::WriteResolved8(guest_range_1, 40u, (cached_r3 + 40), static_cast<uint8_t>(cached_r0));

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r5) };
}

}
// RECOMP_STATE_FREE_ABI address=0x801F2794 symbol=func_801F2794_statefree gpr_in=0x00000018 gpr_out=0x00000021 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000021 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801F2794 func_801F2794 preserves=true fpr_mask=0x00000000


extern "C" void func_801F2794_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    [[clang::noinline]] func_801F2794(ctx);
}
