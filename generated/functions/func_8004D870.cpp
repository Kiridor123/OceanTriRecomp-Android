#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8004D870_ra18_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x8004D870u);
    goto loc_8004D870;

loc_8004D870:
{
    r0 = (r4 & 255);
    r0 = (r0 * 42);
    r4 = (r3 + r0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 140), 0, 18u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 140));
    guest_range_1 = MemoryInline::ResolveRangeHost((r4 + 13184), 0, 19u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r4 + 13184), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r3 + 142));
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r4 + 13186), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r3 + 144));
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r4 + 13188), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r3 + 152));
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r4 + 13196), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r3 + 154));
    MemoryInline::WriteResolved16(guest_range_1, 14u, (r4 + 13198), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r3 + 146));
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r4 + 13190), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r3 + 148));
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r4 + 13192), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r3 + 150));
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r4 + 13194), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r3 + 156));
    MemoryInline::WriteResolved16(guest_range_1, 16u, (r4 + 13200), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r4 + 13202), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return r4;
}

}

extern "C" void func_8004D870(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8004D870_ra18_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004D870 func_8004D870 preserves=true fpr_mask=0x00000000
