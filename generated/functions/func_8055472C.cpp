#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8055472C(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    MKW_GUEST_ENTER(0x8055472Cu);
    goto loc_8055472C;

loc_8055472C:
{
    r7 = 0x80650000u;
    r8 = 0;
    r7 = (r7 + 9308);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r8);
    r0 = (r7 + 28);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r4);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r6);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r7);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r8);
    }
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r8);
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_8055472C_statefree(uint32_t native_r3, uint32_t native_r4, uint32_t native_r5, uint32_t native_r6)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = native_r5;
    uint32_t cached_r6 = native_r6;
    uint32_t cached_r7 = 0;
    uint32_t cached_r8 = 0;

    uint8_t* guest_range_0 = nullptr;

    MKW_GUEST_ENTER(0x8055472Cu);
    goto loc_8055472C;

loc_8055472C:
{
    cached_r7 = 0x80650000u;
    cached_r8 = 0;
    cached_r7 = (cached_r7 + 9308);
    guest_range_0 = MemoryInline::ResolveRangeHost(cached_r3, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (cached_r3 + 4), cached_r8);
    cached_r0 = (cached_r7 + 28);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r4)) << 32) | static_cast<uint32_t>(cached_r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (cached_r3 + 8), cached_r4);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (cached_r3 + 12), cached_r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 16u, (cached_r3 + 16), cached_r6);
    MemoryInline::WriteResolved32(guest_range_0, 0u, cached_r3, cached_r7);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r0)) << 32) | static_cast<uint32_t>(cached_r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (cached_r3 + 20), cached_r0);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (cached_r3 + 24), cached_r8);
    }
    MemoryInline::WriteResolved32(guest_range_0, 28u, (cached_r3 + 28), cached_r8);

return { static_cast<uint64_t>(cached_r7), static_cast<uint64_t>(cached_r8) };
}

}
// RECOMP_STATE_FREE_ABI address=0x8055472C symbol=func_8055472C_statefree gpr_in=0x00000078 gpr_out=0x00000180 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000181 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8055472C func_8055472C preserves=true fpr_mask=0x00000000


extern "C" void func_8055472C_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    ctx->gpr[5] = arg_r5;
    [[clang::noinline]] func_8055472C(ctx);
}
