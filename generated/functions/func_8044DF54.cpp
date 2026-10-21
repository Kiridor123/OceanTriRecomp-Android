#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8044DF54_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x8044DF54u);
    goto loc_8044DF54;

loc_8044DF54:
{
    r4 = MemoryInline::FlatRead32((r13 + -16440));
    r3 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 16), 0, 356u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r4 + 16), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r4 + 17), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r4 + 18), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r4 + 19), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r4 + 20), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r4 + 21), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r4 + 22), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r4 + 23), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r4 + 28), r3);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r4 + 44), r3);
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r4 + 24), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r4 + 32), r3);
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r4 + 48), r3);
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r4 + 25), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r4 + 36), r3);
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r4 + 52), r3);
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r4 + 26), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r4 + 40), r3);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r4 + 56), r3);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r4 + 60), r3);
    }
    MemoryInline::WriteResolved8(guest_range_0, 48u, (r4 + 64), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 49u, (r4 + 65), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 50u, (r4 + 66), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 51u, (r4 + 67), static_cast<uint8_t>(r3));
    r0 = -1;
    MemoryInline::WriteResolved32(guest_range_0, 352u, (r4 + 368), r0);
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r4 + 68), r3);
    MemoryInline::WriteResolved8(guest_range_0, 90u, (r4 + 106), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 91u, (r4 + 107), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 92u, (r4 + 108), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_0, 96u, (r4 + 112), r3);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r4 + 80), r3);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r4 + 84), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r4 + 88), r3);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r4 + 92), r3);
    }
    MemoryInline::WriteResolved32(guest_range_0, 80u, (r4 + 96), r3);
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r4 + 76), r3);
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8044DF54(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8044DF54_ra0_0_18_0(ctx);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002000 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8044DF54 func_8044DF54 preserves=true fpr_mask=0x00000000
