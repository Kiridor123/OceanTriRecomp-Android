#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800854DC(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x800854DCu);
    goto loc_800854DC;

loc_800854DC:
{
    r4 = -1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 16), 0, 28u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 16), r4);
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 24), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 28), r0);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 32), r0);
    }
    MemoryInline::WriteResolved8(guest_range_0, 27u, (r3 + 43), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 26u, (r3 + 42), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 25u, (r3 + 41), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r3 + 40), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 23u, (r3 + 39), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r3 + 38), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r3 + 37), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r3 + 36), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE void func_800854DC_statefree(uint32_t native_r3)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;

    uint8_t* guest_range_0 = nullptr;

    MKW_GUEST_ENTER(0x800854DCu);
    goto loc_800854DC;

loc_800854DC:
{
    cached_r4 = -1;
    guest_range_0 = MemoryInline::ResolveRangeHost((cached_r3 + 16), 0, 28u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (cached_r3 + 16), cached_r4);
    cached_r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r0)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (cached_r3 + 20), cached_r0);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (cached_r3 + 24), cached_r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r0)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (cached_r3 + 28), cached_r0);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (cached_r3 + 32), cached_r0);
    }
    MemoryInline::WriteResolved8(guest_range_0, 27u, (cached_r3 + 43), static_cast<uint8_t>(cached_r4));
    MemoryInline::WriteResolved8(guest_range_0, 26u, (cached_r3 + 42), static_cast<uint8_t>(cached_r4));
    MemoryInline::WriteResolved8(guest_range_0, 25u, (cached_r3 + 41), static_cast<uint8_t>(cached_r4));
    MemoryInline::WriteResolved8(guest_range_0, 24u, (cached_r3 + 40), static_cast<uint8_t>(cached_r4));
    MemoryInline::WriteResolved8(guest_range_0, 23u, (cached_r3 + 39), static_cast<uint8_t>(cached_r4));
    MemoryInline::WriteResolved8(guest_range_0, 22u, (cached_r3 + 38), static_cast<uint8_t>(cached_r4));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (cached_r3 + 37), static_cast<uint8_t>(cached_r4));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (cached_r3 + 36), static_cast<uint8_t>(cached_r4));

    return;
}

}
// RECOMP_STATE_FREE_ABI address=0x800854DC symbol=func_800854DC_statefree gpr_in=0x00000008 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800854DC func_800854DC preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_800854DC_ra8_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_800854DC(ctx);
    return ctx->gpr[4];
}
