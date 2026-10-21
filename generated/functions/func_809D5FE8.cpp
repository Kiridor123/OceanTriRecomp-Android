#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809D5FE8(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x809D5FE8u);
    goto loc_809D5FE8;

loc_809D5FE8:
{
    r3 = 0x80A30000u;
    r0 = (r3 + 3560);
    r4 = 0x806C0000u;
    MemoryInline::FlatWriteRam32((r4 + 31144), r0);
    r3 = 0x80A30000u;
    r0 = (r3 + 3584);
    r4 = (r4 + 31144);
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 4), 0, 44u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r4 + 4), r0);
    r3 = 0x80A30000u;
    r0 = (r3 + 3608);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r4 + 8), r0);
    r3 = 0x80A30000u;
    r0 = (r3 + 3632);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r4 + 12), r0);
    r3 = 0x80A30000u;
    r0 = (r3 + 3656);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r4 + 16), r0);
    r3 = 0x80A30000u;
    r0 = (r3 + 3680);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r4 + 20), r0);
    r3 = 0x80A30000u;
    r0 = (r3 + 3704);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r4 + 24), r0);
    r3 = 0x80A30000u;
    r0 = (r3 + 3728);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r4 + 28), r0);
    r3 = 0x80A30000u;
    r0 = (r3 + 3752);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r4 + 32), r0);
    r3 = 0x80A30000u;
    r0 = (r3 + 3776);
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r4 + 36), r0);
    r3 = 0x80A30000u;
    r0 = (r3 + 3800);
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r4 + 40), r0);
    r3 = 0x80A30000u;
    r0 = (r3 + 3824);
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r4 + 44), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x809D5FE8 func_809D5FE8 preserves=true fpr_mask=0x00000000
