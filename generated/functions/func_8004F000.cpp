#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004F000(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    MKW_GUEST_ENTER(0x8004F000u);
    goto loc_8004F000;

loc_8004F000:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 4));
        }
    }
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r5);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r0);
    }
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
    r0 = MemoryInline::ReadResolved16(guest_range_0, 28u, (r4 + 28));
    MemoryInline::WriteResolved16(guest_range_1, 28u, (r3 + 28), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 30u, (r4 + 30));
    MemoryInline::WriteResolved8(guest_range_1, 30u, (r3 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 31u, (r4 + 31));
    MemoryInline::WriteResolved8(guest_range_1, 31u, (r3 + 31), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r4 + 32));
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r3 + 32), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY void func_8004F000_statefree_v0(uint32_t native_r3, uint32_t native_r4)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = 0;

    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    MKW_GUEST_ENTER(0x8004F000u);
    goto loc_8004F000;

loc_8004F000:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(cached_r4, 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            cached_r5 = resolved_pair.first;
            cached_r0 = resolved_pair.second;
        } else {
            cached_r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, cached_r4);
            cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (cached_r4 + 4));
        }
    }
    guest_range_1 = MemoryInline::ResolveRangeHost(cached_r3, 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r5)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, cached_r3, cached_r5);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (cached_r3 + 4), cached_r0);
    }
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
    cached_r0 = MemoryInline::ReadResolved16(guest_range_0, 28u, (cached_r4 + 28));
    MemoryInline::WriteResolved16(guest_range_1, 28u, (cached_r3 + 28), static_cast<uint16_t>(cached_r0));
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 30u, (cached_r4 + 30));
    MemoryInline::WriteResolved8(guest_range_1, 30u, (cached_r3 + 30), static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 31u, (cached_r4 + 31));
    MemoryInline::WriteResolved8(guest_range_1, 31u, (cached_r3 + 31), static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (cached_r4 + 32));
    MemoryInline::WriteResolved32(guest_range_1, 32u, (cached_r3 + 32), cached_r0);

    return;
}

}
// RECOMP_STATE_FREE_ABI address=0x8004F000 symbol=func_8004F000_statefree_v0 gpr_in=0x00000018 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_8004F000_statefree(uint32_t native_r3, uint32_t native_r4)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = 0;

    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    MKW_GUEST_ENTER(0x8004F000u);
    goto loc_8004F000;

loc_8004F000:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(cached_r4, 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            cached_r5 = resolved_pair.first;
            cached_r0 = resolved_pair.second;
        } else {
            cached_r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, cached_r4);
            cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (cached_r4 + 4));
        }
    }
    guest_range_1 = MemoryInline::ResolveRangeHost(cached_r3, 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r5)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, cached_r3, cached_r5);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (cached_r3 + 4), cached_r0);
    }
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
    cached_r0 = MemoryInline::ReadResolved16(guest_range_0, 28u, (cached_r4 + 28));
    MemoryInline::WriteResolved16(guest_range_1, 28u, (cached_r3 + 28), static_cast<uint16_t>(cached_r0));
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 30u, (cached_r4 + 30));
    MemoryInline::WriteResolved8(guest_range_1, 30u, (cached_r3 + 30), static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 31u, (cached_r4 + 31));
    MemoryInline::WriteResolved8(guest_range_1, 31u, (cached_r3 + 31), static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (cached_r4 + 32));
    MemoryInline::WriteResolved32(guest_range_1, 32u, (cached_r3 + 32), cached_r0);

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r5) };
}

}
// RECOMP_STATE_FREE_ABI address=0x8004F000 symbol=func_8004F000_statefree gpr_in=0x00000018 gpr_out=0x00000021 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000021 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004F000 func_8004F000 preserves=true fpr_mask=0x00000000


extern "C" void func_8004F000_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    [[clang::noinline]] func_8004F000(ctx);
}
