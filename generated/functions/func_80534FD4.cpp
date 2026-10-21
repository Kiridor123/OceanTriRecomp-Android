#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80534FD4_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;

    MKW_GUEST_ENTER(0x80534FD4u);
    goto loc_80534FD4;

loc_80534FD4:
{
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 16), 0, 23u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 2u, (r3 + 18), r0);
        MemoryInline::WriteResolved16(guest_range_0, 0u, (r3 + 16), r0);
    }
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r3 + 38), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 4u, (r3 + 20), r0);
        MemoryInline::WriteResolved16(guest_range_0, 6u, (r3 + 22), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 24), r0);
        MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 26), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 12u, (r3 + 28), r0);
        MemoryInline::WriteResolved16(guest_range_0, 14u, (r3 + 30), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 16u, (r3 + 32), r0);
        MemoryInline::WriteResolved16(guest_range_0, 18u, (r3 + 34), r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 20u, (r3 + 36), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_80534FD4(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80534FD4_ra8_0_0_0(ctx, ctx->gpr[3]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80534FD4 func_80534FD4 preserves=true fpr_mask=0x00000000
