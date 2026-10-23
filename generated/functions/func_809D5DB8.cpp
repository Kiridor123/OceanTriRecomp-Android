#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809D5DB8(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_809D5DB8;

loc_809D5DB8:
{
    r3 = 0x80A70000u;
    r5 = (r3 + 29336);
    r3 = 0x80A20000u;
    r4 = (r3 + 8540);
    r3 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 56u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r5, r3);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r5 + 4), r0);
    }
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r5 + 8), r3);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r5 + 12), r0);
    }
    r3 = MemoryInline::FlatRead32((r4 + 16));
    r0 = MemoryInline::FlatRead32((r4 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r5 + 16), r3);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r5 + 20), r0);
    }
    r0 = MemoryInline::FlatRead32((r4 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r5 + 24), r0);
    r3 = 0x80A20000u;
    r4 = (r3 + 8568);
    r3 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r5 + 28), r3);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r5 + 32), r0);
    }
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r5 + 36), r3);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r5 + 40), r0);
    }
    r3 = MemoryInline::FlatRead32((r4 + 16));
    r0 = MemoryInline::FlatRead32((r4 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r5 + 44), r3);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r5 + 48), r0);
    }
    r0 = MemoryInline::FlatRead32((r4 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r5 + 52), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x809D5DB8 func_809D5DB8 preserves=true fpr_mask=0x00000000
