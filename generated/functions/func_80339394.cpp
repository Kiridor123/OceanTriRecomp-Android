#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80339394(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_80339394;

loc_80339394:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r4);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 4));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r3 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r4 + 5));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r4 + 6));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r3 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r4 + 7));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r3 + 7), static_cast<uint8_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r4 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 8), r5);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 12), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r4 + 16));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 16), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 20u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r4 + 20));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r4 + 24));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 20), r5);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 24), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r4 + 28));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + 28), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80339394_statefree(uint32_t native_r3, uint32_t native_r4)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = 0;

    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    goto loc_80339394;

loc_80339394:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(cached_r4, 0, 32u, true, false);
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, cached_r4);
    guest_range_1 = MemoryInline::ResolveRangeHost(cached_r3, 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, cached_r3, static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (cached_r4 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (cached_r3 + 1), static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (cached_r4 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (cached_r3 + 2), static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (cached_r4 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (cached_r3 + 3), static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (cached_r4 + 4));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (cached_r3 + 4), static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (cached_r4 + 5));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (cached_r3 + 5), static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (cached_r4 + 6));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (cached_r3 + 6), static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (cached_r4 + 7));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (cached_r3 + 7), static_cast<uint8_t>(cached_r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            cached_r5 = resolved_pair.first;
            cached_r0 = resolved_pair.second;
        } else {
            cached_r5 = MemoryInline::ReadResolved32(guest_range_0, 8u, (cached_r4 + 8));
            cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (cached_r4 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r5)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (cached_r3 + 8), cached_r5);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (cached_r3 + 12), cached_r0);
    }
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (cached_r4 + 16));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (cached_r3 + 16), cached_r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 20u);
        if (resolved_pair.valid) {
            cached_r5 = resolved_pair.first;
            cached_r0 = resolved_pair.second;
        } else {
            cached_r5 = MemoryInline::ReadResolved32(guest_range_0, 20u, (cached_r4 + 20));
            cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (cached_r4 + 24));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r5)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (cached_r3 + 20), cached_r5);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (cached_r3 + 24), cached_r0);
    }
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (cached_r4 + 28));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (cached_r3 + 28), cached_r0);

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r5) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80339394 symbol=func_80339394_statefree gpr_in=0x00000018 gpr_out=0x00000021 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000021 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80339394 func_80339394 preserves=true fpr_mask=0x00000000


extern "C" void func_80339394_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    [[clang::noinline]] func_80339394(ctx);
}
