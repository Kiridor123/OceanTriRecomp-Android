#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804C6230_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r4_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x804C6230u);
    goto loc_804C6230;

loc_804C6230:
{
    r4 = (r3 * 68);
    r5 = MemoryInline::FlatRead32((r13 + -15216));
    r3 = 0;
    r4_addr_0 = (r4 + r5);
    MemoryInline::FlatWrite32(r4_addr_0, r3);
    r4 = r4_addr_0;
    r0 = -960;
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 4), 0, 62u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r4 + 4), r3);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r4 + 8), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r4 + 12), r3);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r4 + 16), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r4 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r4 + 24), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r4 + 28), r0);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r4 + 32), r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 60u, (r4 + 64), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_0, 56u, (r4 + 60), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_0, 52u, (r4 + 56), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_0, 48u, (r4 + 52), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_0, 44u, (r4 + 48), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_0, 40u, (r4 + 44), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_0, 36u, (r4 + 40), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_0, 32u, (r4 + 36), static_cast<uint16_t>(r3));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804C6230(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804C6230_ra8_0_18_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804C6230 func_804C6230 preserves=true fpr_mask=0x00000000
