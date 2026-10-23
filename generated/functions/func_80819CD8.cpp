#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80819CD8(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_80819CD8;

loc_80819CD8:
{
    r4 = 0x80840000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 17444));
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 60u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r3 + 4), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 8), f0.d);
    }
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 12), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 20), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 24), f0.d);
    }
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 28), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 36), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 40), f0.d);
    }
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 44), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r3 + 52), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r3 + 56), f0.d);
    }
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 60), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80819CD8 func_80819CD8 preserves=true fpr_mask=0x00000000
