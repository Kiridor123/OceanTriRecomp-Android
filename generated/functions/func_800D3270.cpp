#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800D3270_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    goto loc_800D3270;

loc_800D3270:
{
    r3 = MemoryInline::FlatRead32((r13 + -17584));
    r4 = (r3 + 112);
    r3 = 0;
    r0 = 128;
    ctr = r0;
}

loc_800D3284:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 96u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, r4, static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r4 + 2), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r4 + 3), static_cast<uint8_t>(r3));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r4 + 4), r3);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r4 + 8), r3);
    }
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r4 + 12), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r4 + 14), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r4 + 15), static_cast<uint8_t>(r3));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r4 + 16), r3);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r4 + 20), r3);
    }
    MemoryInline::WriteResolved16(guest_range_0, 24u, (r4 + 24), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 26u, (r4 + 26), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 27u, (r4 + 27), static_cast<uint8_t>(r3));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r4 + 28), r3);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r4 + 32), r3);
    }
    MemoryInline::WriteResolved16(guest_range_0, 36u, (r4 + 36), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 38u, (r4 + 38), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 39u, (r4 + 39), static_cast<uint8_t>(r3));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r4 + 40), r3);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r4 + 44), r3);
    }
    MemoryInline::WriteResolved16(guest_range_0, 48u, (r4 + 48), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 50u, (r4 + 50), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 51u, (r4 + 51), static_cast<uint8_t>(r3));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r4 + 52), r3);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r4 + 56), r3);
    }
    MemoryInline::WriteResolved16(guest_range_0, 60u, (r4 + 60), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 62u, (r4 + 62), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 63u, (r4 + 63), static_cast<uint8_t>(r3));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r4 + 64), r3);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r4 + 68), r3);
    }
    MemoryInline::WriteResolved16(guest_range_0, 72u, (r4 + 72), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 74u, (r4 + 74), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 75u, (r4 + 75), static_cast<uint8_t>(r3));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r4 + 76), r3);
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r4 + 80), r3);
    }
    MemoryInline::WriteResolved16(guest_range_0, 84u, (r4 + 84), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 86u, (r4 + 86), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 87u, (r4 + 87), static_cast<uint8_t>(r3));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r4 + 88), r3);
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r4 + 92), r3);
    }
    r4 = (r4 + 96);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800D3284;
    }
}

loc_800D332C:
{
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800D3270(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800D3270_ra8_0_18_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800D3270 func_800D3270 preserves=true fpr_mask=0x00000000
