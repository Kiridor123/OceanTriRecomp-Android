#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80056A30_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];

    MKW_GUEST_ENTER(0x80056A30u);
    goto loc_80056A30;

loc_80056A30:
{
    r3 = 0x80670000u;
    r4 = (r3 + -11912);
    r3 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 60), 0, 34u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r4 + 60), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r4 + 61), static_cast<uint8_t>(r3));
    r0 = 128;
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r4 + 62), static_cast<uint8_t>(r0));
    r0 = 32;
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r4 + 63), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32392));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r4 + 68), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r4 + 72), f0.d);
    }
    MemoryInline::WriteResolved8(guest_range_0, 23u, (r4 + 83), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r4 + 82), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r4 + 81), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r4 + 80), static_cast<uint8_t>(r3));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r4 + 84), r3);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r4 + 88), r3);
    }
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r4 + 92), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 33u, (r4 + 93), static_cast<uint8_t>(r3));
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80056A30(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80056A30_ra0_0_18_0(ctx);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000004 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80056A30 func_80056A30 preserves=true fpr_mask=0x00000000
