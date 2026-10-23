#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803B74B0_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_803B74B0;

loc_803B74B0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 12u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r4);
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 49), 0, 11u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r3 + 49), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r3 + 50), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r3 + 51), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r3 + 52), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 4));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r3 + 53), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r4 + 6));
    MemoryInline::WriteResolved16(guest_range_1, 5u, (r3 + 54), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r4 + 8));
    MemoryInline::WriteResolved16(guest_range_1, 7u, (r3 + 56), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r4 + 10));
    MemoryInline::WriteResolved16(guest_range_1, 9u, (r3 + 58), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_803B74B0(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_803B74B0_ra18_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803B74B0 func_803B74B0 preserves=true fpr_mask=0x00000000
