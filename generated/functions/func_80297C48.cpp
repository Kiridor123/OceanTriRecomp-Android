#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80297C48_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];

    goto loc_80297C48;

loc_80297C48:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 20u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, r4);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 20u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r4 + 4));
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r3 + 4), static_cast<uint16_t>(r0));
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
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return;
}

}

extern "C" void func_80297C48(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80297C48_ra18_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000021 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80297C48 func_80297C48 preserves=true fpr_mask=0x00000000
