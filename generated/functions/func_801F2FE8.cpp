#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F2FE8_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];

    MKW_GUEST_ENTER(0x801F2FE8u);
    goto loc_801F2FE8;

loc_801F2FE8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 29u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, r4);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 29u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 2u, (r4 + 2));
    MemoryInline::WriteResolved32(guest_range_1, 2u, (r3 + 2), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 6u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 6u, (r4 + 6));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 10u, (r4 + 10));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 6u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 6u, (r3 + 6), r5);
        MemoryInline::WriteResolved32(guest_range_1, 10u, (r3 + 10), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 14u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 14u, (r4 + 14));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 18u, (r4 + 18));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 14u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 14u, (r3 + 14), r5);
        MemoryInline::WriteResolved32(guest_range_1, 18u, (r3 + 18), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 22u, (r4 + 22));
    MemoryInline::WriteResolved32(guest_range_1, 22u, (r3 + 22), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 26u, (r4 + 26));
    MemoryInline::WriteResolved16(guest_range_1, 26u, (r3 + 26), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 28u, (r4 + 28));
    MemoryInline::WriteResolved8(guest_range_1, 28u, (r3 + 28), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return;
}

}

extern "C" void func_801F2FE8(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_801F2FE8_ra18_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000021 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801F2FE8 func_801F2FE8 preserves=true fpr_mask=0x00000000
