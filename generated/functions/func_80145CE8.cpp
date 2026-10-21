#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80145CE8(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x80145CE8u);
    goto loc_80145CE8;

loc_80145CE8:
{
    r4 = 0;
    r3 = 0x806B0000u;
    MemoryInline::FlatWriteRam8((r3 + -25760), static_cast<uint8_t>(r4));
    r0 = 255;
    r3 = (r3 + -25760);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 1), 0, 59u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 1), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 2), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 3), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 7u, (r3 + 8), r4);
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r3 + 12), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r3 + 13), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r3 + 14), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r3 + 15), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r3 + 16), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 19u, (r3 + 20), r4);
    MemoryInline::WriteResolved8(guest_range_0, 23u, (r3 + 24), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r3 + 25), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 25u, (r3 + 26), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 26u, (r3 + 27), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 27u, (r3 + 28), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 31u, (r3 + 32), r4);
    MemoryInline::WriteResolved8(guest_range_0, 35u, (r3 + 36), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 36u, (r3 + 37), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 37u, (r3 + 38), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 38u, (r3 + 39), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 39u, (r3 + 40), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 43u, (r3 + 44), r4);
    MemoryInline::WriteResolved8(guest_range_0, 47u, (r3 + 48), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 48u, (r3 + 49), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 49u, (r3 + 50), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 50u, (r3 + 51), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 51u, (r3 + 52), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 55u, (r3 + 56), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_80145CE8_statefree()
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;
    uint32_t cached_r4 = 0;

    uint8_t* guest_range_0 = nullptr;

    MKW_GUEST_ENTER(0x80145CE8u);
    goto loc_80145CE8;

loc_80145CE8:
{
    cached_r4 = 0;
    cached_r3 = 0x806B0000u;
    MemoryInline::FlatWriteRam8((cached_r3 + -25760), static_cast<uint8_t>(cached_r4));
    cached_r0 = 255;
    cached_r3 = (cached_r3 + -25760);
    guest_range_0 = MemoryInline::ResolveRangeHost((cached_r3 + 1), 0, 59u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (cached_r3 + 1), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (cached_r3 + 2), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (cached_r3 + 3), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (cached_r3 + 4), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved32(guest_range_0, 7u, (cached_r3 + 8), cached_r4);
    MemoryInline::WriteResolved8(guest_range_0, 11u, (cached_r3 + 12), static_cast<uint8_t>(cached_r4));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (cached_r3 + 13), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (cached_r3 + 14), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (cached_r3 + 15), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 15u, (cached_r3 + 16), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved32(guest_range_0, 19u, (cached_r3 + 20), cached_r4);
    MemoryInline::WriteResolved8(guest_range_0, 23u, (cached_r3 + 24), static_cast<uint8_t>(cached_r4));
    MemoryInline::WriteResolved8(guest_range_0, 24u, (cached_r3 + 25), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 25u, (cached_r3 + 26), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 26u, (cached_r3 + 27), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 27u, (cached_r3 + 28), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved32(guest_range_0, 31u, (cached_r3 + 32), cached_r4);
    MemoryInline::WriteResolved8(guest_range_0, 35u, (cached_r3 + 36), static_cast<uint8_t>(cached_r4));
    MemoryInline::WriteResolved8(guest_range_0, 36u, (cached_r3 + 37), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 37u, (cached_r3 + 38), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 38u, (cached_r3 + 39), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 39u, (cached_r3 + 40), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved32(guest_range_0, 43u, (cached_r3 + 44), cached_r4);
    MemoryInline::WriteResolved8(guest_range_0, 47u, (cached_r3 + 48), static_cast<uint8_t>(cached_r4));
    MemoryInline::WriteResolved8(guest_range_0, 48u, (cached_r3 + 49), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 49u, (cached_r3 + 50), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 50u, (cached_r3 + 51), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 51u, (cached_r3 + 52), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved32(guest_range_0, 55u, (cached_r3 + 56), cached_r4);

return static_cast<uint64_t>(cached_r4);
}


    return static_cast<uint64_t>(cached_r4);
}
// RECOMP_STATE_FREE_ABI address=0x80145CE8 symbol=func_80145CE8_statefree gpr_in=0x00000000 gpr_out=0x00000010 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80145CE8 func_80145CE8 preserves=true fpr_mask=0x00000000


extern "C" uint64_t func_80145CE8_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80145CE8(ctx);
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
}
