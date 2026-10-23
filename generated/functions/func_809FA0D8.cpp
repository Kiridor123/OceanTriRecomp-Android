#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809FA0D8(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_809FA0D8;

loc_809FA0D8:
{
    r3 = MemoryInline::FlatRead32((r3 + 256));
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 56), 0, 24u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 56), r0);
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r3 + 76), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 60), r0);
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r3 + 77), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 64), r0);
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r3 + 78), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 68), r0);
    MemoryInline::WriteResolved8(guest_range_0, 23u, (r3 + 79), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 72), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x809FA0D8 func_809FA0D8 preserves=true fpr_mask=0x00000000
