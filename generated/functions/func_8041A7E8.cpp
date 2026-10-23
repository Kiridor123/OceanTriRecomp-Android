#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8041A7E8_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;

    goto loc_8041A7E8;

loc_8041A7E8:
{
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 20u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 4), r0);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 8), r0);
    }
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r3 + 21), static_cast<uint8_t>(r0));
    // inline leaf 0x8041A7FC (7 guest instruction(s))
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 16), r0);
    }
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r3 + 20), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r3 + 22), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r3 + 23), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8041A7FC
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_8041A7E8(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8041A7E8_ra8_0_0_0(ctx, ctx->gpr[3]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8041A7E8 func_8041A7E8 preserves=true fpr_mask=0x00000000
