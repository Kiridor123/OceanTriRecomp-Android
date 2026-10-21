#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80140E10(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    MKW_GUEST_ENTER(0x80140E10u);
    goto loc_80140E10;

loc_80140E10:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 76u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 76u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r0);
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
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r4 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r4 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 16), r5);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 20), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r4 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r4 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 24), r5);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + 28), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r4 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r4 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r3 + 32), r5);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r3 + 36), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r4 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r4 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r3 + 40), r5);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r3 + 44), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 48u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r4 + 48));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r4 + 52));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r3 + 48), r5);
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r3 + 52), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 56u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r4 + 56));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r4 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r3 + 56), r5);
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r3 + 60), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 64u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 64u, (r4 + 64));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 68u, (r4 + 68));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r3 + 64), r5);
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r3 + 68), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 72u, (r4 + 72));
    MemoryInline::WriteResolved32(guest_range_1, 72u, (r3 + 72), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80140E10_statefree(uint32_t native_r3, uint32_t native_r4)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = 0;

    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    MKW_GUEST_ENTER(0x80140E10u);
    goto loc_80140E10;

loc_80140E10:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(cached_r4, 0, 76u, true, false);
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, cached_r4);
    guest_range_1 = MemoryInline::ResolveRangeHost(cached_r3, 0, 76u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, cached_r3, cached_r0);
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (cached_r4 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (cached_r3 + 4), cached_r0);
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
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            cached_r5 = resolved_pair.first;
            cached_r0 = resolved_pair.second;
        } else {
            cached_r5 = MemoryInline::ReadResolved32(guest_range_0, 16u, (cached_r4 + 16));
            cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (cached_r4 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r5)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (cached_r3 + 16), cached_r5);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (cached_r3 + 20), cached_r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            cached_r5 = resolved_pair.first;
            cached_r0 = resolved_pair.second;
        } else {
            cached_r5 = MemoryInline::ReadResolved32(guest_range_0, 24u, (cached_r4 + 24));
            cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (cached_r4 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r5)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (cached_r3 + 24), cached_r5);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (cached_r3 + 28), cached_r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            cached_r5 = resolved_pair.first;
            cached_r0 = resolved_pair.second;
        } else {
            cached_r5 = MemoryInline::ReadResolved32(guest_range_0, 32u, (cached_r4 + 32));
            cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (cached_r4 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r5)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (cached_r3 + 32), cached_r5);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (cached_r3 + 36), cached_r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            cached_r5 = resolved_pair.first;
            cached_r0 = resolved_pair.second;
        } else {
            cached_r5 = MemoryInline::ReadResolved32(guest_range_0, 40u, (cached_r4 + 40));
            cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (cached_r4 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r5)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (cached_r3 + 40), cached_r5);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (cached_r3 + 44), cached_r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 48u);
        if (resolved_pair.valid) {
            cached_r5 = resolved_pair.first;
            cached_r0 = resolved_pair.second;
        } else {
            cached_r5 = MemoryInline::ReadResolved32(guest_range_0, 48u, (cached_r4 + 48));
            cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 52u, (cached_r4 + 52));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r5)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 48u, (cached_r3 + 48), cached_r5);
        MemoryInline::WriteResolved32(guest_range_1, 52u, (cached_r3 + 52), cached_r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 56u);
        if (resolved_pair.valid) {
            cached_r5 = resolved_pair.first;
            cached_r0 = resolved_pair.second;
        } else {
            cached_r5 = MemoryInline::ReadResolved32(guest_range_0, 56u, (cached_r4 + 56));
            cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 60u, (cached_r4 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r5)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 56u, (cached_r3 + 56), cached_r5);
        MemoryInline::WriteResolved32(guest_range_1, 60u, (cached_r3 + 60), cached_r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 64u);
        if (resolved_pair.valid) {
            cached_r5 = resolved_pair.first;
            cached_r0 = resolved_pair.second;
        } else {
            cached_r5 = MemoryInline::ReadResolved32(guest_range_0, 64u, (cached_r4 + 64));
            cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 68u, (cached_r4 + 68));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r5)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 64u, (cached_r3 + 64), cached_r5);
        MemoryInline::WriteResolved32(guest_range_1, 68u, (cached_r3 + 68), cached_r0);
    }
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 72u, (cached_r4 + 72));
    MemoryInline::WriteResolved32(guest_range_1, 72u, (cached_r3 + 72), cached_r0);

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r5) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80140E10 symbol=func_80140E10_statefree gpr_in=0x00000018 gpr_out=0x00000021 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000021 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80140E10 func_80140E10 preserves=true fpr_mask=0x00000000


extern "C" void func_80140E10_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    [[clang::noinline]] func_80140E10(ctx);
}
