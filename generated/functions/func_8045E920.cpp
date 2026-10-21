#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8045E920_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8045E920u);
    goto loc_8045E920;

loc_8045E920:
{
    r0 = MemoryInline::FlatRead8((r1 + 10));
}

loc_8045E928:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(9))) {
        goto loc_8045EC78;
    }
}

loc_8045E92C:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
}

loc_8045EC78:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 56u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 8));
    r3 = (r3 + 1);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 12));
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r4 + 4), r0);
        MemoryInline::WriteResolved32(guest_range_0, 0u, r4, r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r4 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r4 + 8), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r4 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r4 + 16), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r4 + 28), r0);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r4 + 24), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r4 + 36), r0);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r4 + 32), r5);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r1 + 60));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r1 + 56));
        }
    }
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return r3;
}

}

extern "C" void func_8045E920(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8045E920_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0xC000002B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8045E920 func_8045E920 preserves=true fpr_mask=0x00000000
