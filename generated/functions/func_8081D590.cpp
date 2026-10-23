#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081D590(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_8081D590;

loc_8081D590:
{
    r4 = 0;
    r0 = -1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 80), 0, 324u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 80), r4);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 88), r0);
    MemoryInline::WriteResolved32(guest_range_0, 104u, (r3 + 184), r4);
    MemoryInline::WriteResolved32(guest_range_0, 112u, (r3 + 192), r0);
    MemoryInline::WriteResolved32(guest_range_0, 208u, (r3 + 288), r4);
    MemoryInline::WriteResolved32(guest_range_0, 216u, (r3 + 296), r0);
    MemoryInline::WriteResolved32(guest_range_0, 312u, (r3 + 392), r4);
    MemoryInline::WriteResolved32(guest_range_0, 320u, (r3 + 400), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8081D590 func_8081D590 preserves=true fpr_mask=0x00000000
