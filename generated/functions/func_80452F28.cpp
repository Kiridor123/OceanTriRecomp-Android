#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80452F28_ra18_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t ctr = ctx->ctr;

    goto loc_80452F28;

loc_80452F28:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 30u, true, false);
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
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 30u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r5);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r0);
    }
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r4 + 8));
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 10u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 10u, (r4 + 10));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 14u, (r4 + 14));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 10u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 10u, (r3 + 10), r5);
        MemoryInline::WriteResolved32(guest_range_1, 14u, (r3 + 14), r0);
    }
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
    r0 = MemoryInline::ReadResolved32(guest_range_0, 26u, (r4 + 26));
    MemoryInline::WriteResolved32(guest_range_1, 26u, (r3 + 26), r0);
    r6 = (r3 + 28);
    r5 = (r4 + 28);
    r0 = 32;
    ctr = r0;
}

loc_80452F78:
{
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r5 = (r5 + 8);
    r0 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWrite32((r6 + 4), r4);
    MemoryInline::FlatWrite32((r6 + 8), r0);
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80452F78;
    }
}

loc_80452F8C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r4;
}

}

extern "C" void func_80452F28(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80452F28_ra18_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80452F28 func_80452F28 preserves=true fpr_mask=0x00000000
