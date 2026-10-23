#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80154EA4_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;

    goto loc_80154EA4;

loc_80154EA4:
{
    r0 = 255;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 808), 0, 22u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 808), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 809), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 810), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 811), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 812), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r3 + 813), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 814), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 815), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r3 + 816), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r3 + 817), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r3 + 818), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 16u, (r3 + 824), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r3 + 819), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r3 + 820), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r3 + 821), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r3 + 822), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 20u, (r3 + 828), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_80154EA4(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80154EA4_ra8_0_0_0(ctx, ctx->gpr[3]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80154EA4 func_80154EA4 preserves=true fpr_mask=0x00000000
