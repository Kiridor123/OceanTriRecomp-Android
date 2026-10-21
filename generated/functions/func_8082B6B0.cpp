#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082B6B0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];

    MKW_GUEST_ENTER(0x8082B6B0u);
    goto loc_8082B6B0;

loc_8082B6B0:
{
    r4 = 0x80840000u;
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 18576));
    r4 = 0x80840000u;
    r5 = (r3 + 8);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 33u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r0);
    r4 = (r4 + 25768);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r5);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 24), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 28), f0.d);
    }
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r3 + 32), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8082B6B0 func_8082B6B0 preserves=true fpr_mask=0x00000000
