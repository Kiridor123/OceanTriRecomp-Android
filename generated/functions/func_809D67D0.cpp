#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809D67D0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    MKW_GUEST_ENTER(0x809D67D0u);
    goto loc_809D67D0;

loc_809D67D0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = 0;
    r3 = 0x80A80000u;
    MemoryInline::FlatWriteRam8((r3 + -31488), static_cast<uint8_t>(r4));
    r31 = (r3 + -31488);
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 1), 0, 103u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r31 + 1), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r31 + 2), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r31 + 3), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_0, 11u, (r31 + 12), r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 15u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 19u, (r31 + 20), r4);
        MemoryInline::WriteResolved32(guest_range_0, 15u, (r31 + 16), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 23u, (r31 + 24), r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 3u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 3u, (r31 + 4), r4);
        MemoryInline::WriteResolved32(guest_range_0, 7u, (r31 + 8), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 79u, (r31 + 80), r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 43u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 43u, (r31 + 44), r4);
        MemoryInline::WriteResolved32(guest_range_0, 47u, (r31 + 48), r4);
    }
    MemoryInline::WriteResolved8(guest_range_0, 51u, (r31 + 52), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 52u, (r31 + 53), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 53u, (r31 + 54), static_cast<uint8_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 59u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 59u, (r31 + 60), r4);
        MemoryInline::WriteResolved32(guest_range_0, 63u, (r31 + 64), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 67u, (r31 + 68), r4);
    MemoryInline::WriteResolved32(guest_range_0, 75u, (r31 + 76), r4);
    MemoryInline::WriteResolved8(guest_range_0, 83u, (r31 + 84), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved16(guest_range_0, 85u, (r31 + 86), static_cast<uint16_t>(r4));
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -7476));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 27u, (r31 + 28), f0.d);
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -7472));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 31u, (r31 + 32), f0.d);
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -7468));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 35u, (r31 + 36), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 54u, (r31 + 55), static_cast<uint8_t>(r4));
    r0 = 2;
    MemoryInline::WriteResolved32(guest_range_0, 71u, (r31 + 72), r0);
    r3 = 0x80A80000u;
    MemoryInline::FlatWriteRam32((r3 + -31140), r4);
    r0 = -1;
    MemoryInline::WriteResolved32(guest_range_0, 99u, (r31 + 100), r0);
    r3 = r31;
    ctx->lr = 0x809D688Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809D7E4Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809D6BC0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000021E2 gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809D67D0 func_809D67D0 preserves=true fpr_mask=0x00000000
