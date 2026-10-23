#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_805072F4_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    goto loc_805072F4;

loc_805072F4:
{
    r4 = 0x80760000u;
    r0 = 8;
    r4 = (r4 + 12688);
    r3 = 0;
    ctr = r0;
}

loc_80507308:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 64u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 0u, r4, r3);
        MemoryInline::WriteResolved16(guest_range_0, 2u, (r4 + 2), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 4u, (r4 + 4), r3);
        MemoryInline::WriteResolved16(guest_range_0, 6u, (r4 + 6), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 8u, (r4 + 8), r3);
        MemoryInline::WriteResolved16(guest_range_0, 10u, (r4 + 10), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 12u, (r4 + 12), r3);
        MemoryInline::WriteResolved16(guest_range_0, 14u, (r4 + 14), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 16u, (r4 + 16), r3);
        MemoryInline::WriteResolved16(guest_range_0, 18u, (r4 + 18), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 20u, (r4 + 20), r3);
        MemoryInline::WriteResolved16(guest_range_0, 22u, (r4 + 22), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 24u, (r4 + 24), r3);
        MemoryInline::WriteResolved16(guest_range_0, 26u, (r4 + 26), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 28u, (r4 + 28), r3);
        MemoryInline::WriteResolved16(guest_range_0, 30u, (r4 + 30), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 32u, (r4 + 32), r3);
        MemoryInline::WriteResolved16(guest_range_0, 34u, (r4 + 34), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 36u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 36u, (r4 + 36), r3);
        MemoryInline::WriteResolved16(guest_range_0, 38u, (r4 + 38), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 40u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 40u, (r4 + 40), r3);
        MemoryInline::WriteResolved16(guest_range_0, 42u, (r4 + 42), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 44u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 44u, (r4 + 44), r3);
        MemoryInline::WriteResolved16(guest_range_0, 46u, (r4 + 46), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 48u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 48u, (r4 + 48), r3);
        MemoryInline::WriteResolved16(guest_range_0, 50u, (r4 + 50), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 52u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 52u, (r4 + 52), r3);
        MemoryInline::WriteResolved16(guest_range_0, 54u, (r4 + 54), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 56u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 56u, (r4 + 56), r3);
        MemoryInline::WriteResolved16(guest_range_0, 58u, (r4 + 58), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 60u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 60u, (r4 + 60), r3);
        MemoryInline::WriteResolved16(guest_range_0, 62u, (r4 + 62), r3);
    }
    r4 = (r4 + 64);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80507308;
    }
}

loc_80507390:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -13968), r0);
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_805072F4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_805072F4_ra8_0_18_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805072F4 func_805072F4 preserves=true fpr_mask=0x00000000
