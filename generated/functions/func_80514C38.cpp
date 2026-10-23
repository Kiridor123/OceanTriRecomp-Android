#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80514C38_ra8_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];

    goto loc_80514C38;

loc_80514C38:
{
    r4 = 0;
    r0 = -1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 1988), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 2004), r4);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 2008), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 1988), r4);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 1992), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 1996), r4);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 2000), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 2012), r4);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 2016), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 2020), r4);
    ctx->gpr[0] = r0;
    return r4;
}

}

extern "C" void func_80514C38(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80514C38_ra8_0_10_0(ctx, ctx->gpr[3]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80514C38 func_80514C38 preserves=true fpr_mask=0x00000000
