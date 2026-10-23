#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809D6584(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_809D6584;

loc_809D6584:
{
    r3 = 0x80A80000u;
    r3 = (r3 + -32768);
    r4 = 0x80A20000u;
    r5 = (r4 + 10600);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 252u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r4);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r4);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r4);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r0);
    r4 = 0x80A20000u;
    r5 = (r4 + 10628);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r4);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r4);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 44), r4);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 48), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 52), r0);
    r4 = 0x80A20000u;
    r5 = (r4 + 10656);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 56), r4);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r3 + 60), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r3 + 64), r4);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r3 + 68), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r3 + 72), r4);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r3 + 76), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 80u, (r3 + 80), r0);
    r4 = 0x80A20000u;
    r5 = (r4 + 10684);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r3 + 84), r4);
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r3 + 88), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r3 + 92), r4);
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r3 + 96), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r3 + 100), r4);
        MemoryInline::WriteResolved32(guest_range_0, 104u, (r3 + 104), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 108u, (r3 + 108), r0);
    r4 = 0x80A20000u;
    r5 = (r4 + 10712);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r3 + 112), r4);
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r3 + 116), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r3 + 120), r4);
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r3 + 124), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 128u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 128u, (r3 + 128), r4);
        MemoryInline::WriteResolved32(guest_range_0, 132u, (r3 + 132), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 136u, (r3 + 136), r0);
    r4 = 0x80A20000u;
    r5 = (r4 + 10740);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 140u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 140u, (r3 + 140), r4);
        MemoryInline::WriteResolved32(guest_range_0, 144u, (r3 + 144), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 148u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 148u, (r3 + 148), r4);
        MemoryInline::WriteResolved32(guest_range_0, 152u, (r3 + 152), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 156u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 156u, (r3 + 156), r4);
        MemoryInline::WriteResolved32(guest_range_0, 160u, (r3 + 160), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 164u, (r3 + 164), r0);
    r4 = 0x80A20000u;
    r5 = (r4 + 10768);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 168u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 168u, (r3 + 168), r4);
        MemoryInline::WriteResolved32(guest_range_0, 172u, (r3 + 172), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 176u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 176u, (r3 + 176), r4);
        MemoryInline::WriteResolved32(guest_range_0, 180u, (r3 + 180), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 184u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 184u, (r3 + 184), r4);
        MemoryInline::WriteResolved32(guest_range_0, 188u, (r3 + 188), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 192u, (r3 + 192), r0);
    r4 = 0x80A20000u;
    r5 = (r4 + 10796);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 196u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 196u, (r3 + 196), r4);
        MemoryInline::WriteResolved32(guest_range_0, 200u, (r3 + 200), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 204u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 204u, (r3 + 204), r4);
        MemoryInline::WriteResolved32(guest_range_0, 208u, (r3 + 208), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 212u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 212u, (r3 + 212), r4);
        MemoryInline::WriteResolved32(guest_range_0, 216u, (r3 + 216), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 220u, (r3 + 220), r0);
    r4 = 0x80A20000u;
    r5 = (r4 + 10824);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 224u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 224u, (r3 + 224), r4);
        MemoryInline::WriteResolved32(guest_range_0, 228u, (r3 + 228), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 232u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 232u, (r3 + 232), r4);
        MemoryInline::WriteResolved32(guest_range_0, 236u, (r3 + 236), r0);
    }
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 240u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 240u, (r3 + 240), r4);
        MemoryInline::WriteResolved32(guest_range_0, 244u, (r3 + 244), r0);
    }
    r0 = MemoryInline::FlatRead32((r5 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 248u, (r3 + 248), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x809D6584 func_809D6584 preserves=true fpr_mask=0x00000000
