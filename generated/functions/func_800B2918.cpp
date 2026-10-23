#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800B2918(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];

    goto loc_800B2918;

loc_800B2918:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r4 = 4;
    // inline leaf 0x805020CC (6 guest instruction(s))
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 32u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 10), static_cast<uint16_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x805020CC
    r3 = (r31 + 16);
    r4 = 4;
    // inline leaf 0x805020CC (6 guest instruction(s))
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 26u, (r3 + 10), static_cast<uint16_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 4), r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 24u, (r3 + 8), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x805020CC
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r31 + 12), r0);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r31 + 28), r0);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800B2918 func_800B2918 preserves=true fpr_mask=0x00000000
