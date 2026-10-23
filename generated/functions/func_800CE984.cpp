#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CE984_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t ctr = ctx->ctr;

    goto loc_800CE984;

loc_800CE984:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 340u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 340u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r0);
    r7 = (r3 + 4);
    r6 = (r4 + 4);
    r0 = 32;
    ctr = r0;
}

loc_800CE9A4:
{
    r5 = MemoryInline::FlatRead32((r6 + 4));
    r6 = (r6 + 8);
    r0 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWrite32((r7 + 4), r5);
    MemoryInline::FlatWrite32((r7 + 8), r0);
    r7 = (r7 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800CE9A4;
    }
}

loc_800CE9B8:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 264u, (r4 + 264));
    MemoryInline::WriteResolved32(guest_range_1, 264u, (r3 + 264), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 268u, (r4 + 268));
    MemoryInline::WriteResolved32(guest_range_1, 268u, (r3 + 268), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 272u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 272u, (r4 + 272));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 276u, (r4 + 276));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 272u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 272u, (r3 + 272), r5);
        MemoryInline::WriteResolved32(guest_range_1, 276u, (r3 + 276), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 280u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 280u, (r4 + 280));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 284u, (r4 + 284));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 280u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 280u, (r3 + 280), r5);
        MemoryInline::WriteResolved32(guest_range_1, 284u, (r3 + 284), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 288u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 288u, (r4 + 288));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 292u, (r4 + 292));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 288u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 288u, (r3 + 288), r5);
        MemoryInline::WriteResolved32(guest_range_1, 292u, (r3 + 292), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 296u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 296u, (r4 + 296));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 300u, (r4 + 300));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 296u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 296u, (r3 + 296), r5);
        MemoryInline::WriteResolved32(guest_range_1, 300u, (r3 + 300), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 304u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 304u, (r4 + 304));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 308u, (r4 + 308));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 304u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 304u, (r3 + 304), r5);
        MemoryInline::WriteResolved32(guest_range_1, 308u, (r3 + 308), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 312u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 312u, (r4 + 312));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 316u, (r4 + 316));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 312u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 312u, (r3 + 312), r5);
        MemoryInline::WriteResolved32(guest_range_1, 316u, (r3 + 316), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 320u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 320u, (r4 + 320));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 324u, (r4 + 324));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 320u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 320u, (r3 + 320), r5);
        MemoryInline::WriteResolved32(guest_range_1, 324u, (r3 + 324), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 328u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 328u, (r4 + 328));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 332u, (r4 + 332));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 328u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 328u, (r3 + 328), r5);
        MemoryInline::WriteResolved32(guest_range_1, 332u, (r3 + 332), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 336u, (r4 + 336));
    MemoryInline::WriteResolved32(guest_range_1, 336u, (r3 + 336), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return;
}

}

extern "C" void func_800CE984(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_800CE984_ra18_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x000000E1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800CE984 func_800CE984 preserves=true fpr_mask=0x00000000
