#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80145684_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x80145684u);
    goto loc_80145684;

loc_80145684:
{
    r0 = -1;
    r3 = 0x806B0000u;
    MemoryInline::FlatWriteRam8((r3 + -25700), static_cast<uint8_t>(r0));
    r4 = 0;
    r3 = (r3 + -25700);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 2), 0, 20u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 2), static_cast<uint8_t>(r4));
    r0 = 255;
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r3 + 4), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 6), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved16(guest_range_0, 6u, (r3 + 8), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r3 + 10), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 12), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r3 + 14), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved16(guest_range_0, 14u, (r3 + 16), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r3 + 18), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved16(guest_range_0, 18u, (r3 + 20), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80145684(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80145684_ra0_0_18_0(ctx);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80145684 func_80145684 preserves=true fpr_mask=0x00000000
