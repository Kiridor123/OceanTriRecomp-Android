#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804718B0_ra8_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    MKW_GUEST_ENTER(0x804718B0u);
    goto loc_804718B0;

loc_804718B0:
{
    r4 = 413663232;
    r5 = 0;
    r0 = (r4 + 36);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 28), 0, 290u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 28u, (r3 + 56), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 80u, (r3 + 108), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 28), r0);
    MemoryInline::WriteResolved16(guest_range_0, 198u, (r3 + 226), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 206u, (r3 + 234), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 226u, (r3 + 254), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 288u, (r3 + 316), static_cast<uint16_t>(r5));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 278u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r5)))) {
        MemoryInline::WriteResolved16(guest_range_0, 278u, (r3 + 306), r5);
        MemoryInline::WriteResolved16(guest_range_0, 280u, (r3 + 308), r5);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 282u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r5)))) {
        MemoryInline::WriteResolved16(guest_range_0, 282u, (r3 + 310), r5);
        MemoryInline::WriteResolved16(guest_range_0, 284u, (r3 + 312), r5);
    }
    MemoryInline::WriteResolved16(guest_range_0, 286u, (r3 + 314), static_cast<uint16_t>(r5));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r4;
}

}

extern "C" void func_804718B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804718B0_ra8_0_10_0(ctx, ctx->gpr[3]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804718B0 func_804718B0 preserves=true fpr_mask=0x00000000
