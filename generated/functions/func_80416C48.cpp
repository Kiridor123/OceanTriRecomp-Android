#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80416C48_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x80416C48u);
    goto loc_80416C48;

loc_80416C48:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 11548), 0, 36u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 11548));
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r4, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 11552));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r4 + 4), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 11556));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r4 + 8), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 11560));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r4 + 12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r3 + 11564));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r4 + 16), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 11568));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r4 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 11572));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r4 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r3 + 11576));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r4 + 28), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 11580));
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r4 + 32), r0);
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_80416C48(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80416C48_ra18_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80416C48 func_80416C48 preserves=true fpr_mask=0x00000000
