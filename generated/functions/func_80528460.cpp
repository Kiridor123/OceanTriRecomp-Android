#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80528460_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x80528460u);
    goto loc_80528460;

loc_80528460:
{
    r3 = MemoryInline::FlatRead32((r13 + -13344));
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 9728), 0, 784u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 9728), r0);
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 9780), r0);
    MemoryInline::WriteResolved32(guest_range_0, 104u, (r3 + 9832), r0);
    MemoryInline::WriteResolved32(guest_range_0, 156u, (r3 + 9884), r0);
    MemoryInline::WriteResolved32(guest_range_0, 208u, (r3 + 9936), r0);
    MemoryInline::WriteResolved32(guest_range_0, 260u, (r3 + 9988), r0);
    MemoryInline::WriteResolved32(guest_range_0, 312u, (r3 + 10040), r0);
    MemoryInline::WriteResolved32(guest_range_0, 364u, (r3 + 10092), r0);
    MemoryInline::WriteResolved32(guest_range_0, 416u, (r3 + 10144), r0);
    MemoryInline::WriteResolved32(guest_range_0, 468u, (r3 + 10196), r0);
    MemoryInline::WriteResolved32(guest_range_0, 520u, (r3 + 10248), r0);
    MemoryInline::WriteResolved32(guest_range_0, 572u, (r3 + 10300), r0);
    MemoryInline::WriteResolved32(guest_range_0, 624u, (r3 + 10352), r0);
    MemoryInline::WriteResolved32(guest_range_0, 676u, (r3 + 10404), r0);
    MemoryInline::WriteResolved32(guest_range_0, 728u, (r3 + 10456), r0);
    MemoryInline::WriteResolved32(guest_range_0, 780u, (r3 + 10508), r0);
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_80528460(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80528460_ra0_0_8_0(ctx);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002000 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80528460 func_80528460 preserves=true fpr_mask=0x00000000
