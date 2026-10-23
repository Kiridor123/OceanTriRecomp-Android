#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081B2C0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_8081B2C0;

loc_8081B2C0:
{
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 21u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r3 + 24), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 6), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 7), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 8), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r3 + 9), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 10), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 11), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8081B2C0 func_8081B2C0 preserves=true fpr_mask=0x00000000
