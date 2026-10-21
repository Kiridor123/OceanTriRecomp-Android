#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804E0AA0_ra8_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x804E0AA0u);
    goto loc_804E0AA0;

loc_804E0AA0:
{
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 56), 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 64), r0);
    r4 = MemoryInline::FlatRead32((r3 + 24));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 60), r0);
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 56), r0);
    }
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 68), r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 72), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 76), r0);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 80), r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 84), r0);
    r0 = MemoryInline::FlatRead32((r4 + 20));
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 88), r0);
    ctx->gpr[0] = r0;
    return r4;
}

}

extern "C" void func_804E0AA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804E0AA0_ra8_0_10_0(ctx, ctx->gpr[3]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804E0AA0 func_804E0AA0 preserves=true fpr_mask=0x00000000
