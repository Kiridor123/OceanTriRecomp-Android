#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80839E30(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80839E30;

loc_80839E30:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    // inline leaf 0x8083A140 (17 guest instruction(s))
    r4 = 0x80840000u;
    r7 = 0x80840000u;
    r4 = (r4 + 31776);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 24u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r4);
    r4 = 0x80840000u;
    r0 = 0;
    r7 = (r7 + 31624);
    r6 = MemoryInline::FlatRead32(r7);
    r4 = (r4 + 31640);
    r5 = MemoryInline::FlatRead32((r7 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r5);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r6);
    }
    r5 = MemoryInline::FlatRead32((r7 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r5);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r0);
    }
    // end of inlined leaf 0x8083A140
    r4 = 0x80840000u;
    r3 = r31;
    r4 = (r4 + 31400);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r31, r4);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80839E30 func_80839E30 preserves=true fpr_mask=0x00000000
