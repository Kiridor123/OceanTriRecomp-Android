#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8031545C_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;

    MKW_GUEST_ENTER(0x8031545Cu);
    goto loc_8031545C;

loc_8031545C:
{
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 1562), 0, 24u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r3 + 1562), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r3 + 1578), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r3 + 1564), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r3 + 1579), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r3 + 1566), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r3 + 1580), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 6u, (r3 + 1568), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r3 + 1581), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 1570), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r3 + 1582), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 1572), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r3 + 1583), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r3 + 1574), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r3 + 1584), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 14u, (r3 + 1576), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 23u, (r3 + 1585), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_8031545C(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8031545C_ra8_0_0_0(ctx, ctx->gpr[3]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8031545C func_8031545C preserves=true fpr_mask=0x00000000
