#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8098545C(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x8098545Cu);
    goto loc_8098545C;

loc_8098545C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 18u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r4);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 18u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r4 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r4 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 14u, (r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r4 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY void func_8098545C_statefree_v0(uint32_t native_r3, uint32_t native_r4)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    MKW_GUEST_ENTER(0x8098545Cu);
    goto loc_8098545C;

loc_8098545C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(cached_r4, 0, 18u, true, false);
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, cached_r4);
    guest_range_1 = MemoryInline::ResolveRangeHost(cached_r3, 0, 18u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, cached_r3, static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (cached_r4 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (cached_r3 + 1), static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (cached_r4 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (cached_r3 + 2), static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (cached_r4 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (cached_r3 + 3), static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (cached_r4 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (cached_r3 + 4), cached_r0);
    cached_r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (cached_r4 + 8));
    cached_r0 = (cached_r0 << 16);
    cached_r0 = (static_cast<int32_t>(cached_r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 8u, (cached_r3 + 8), static_cast<uint16_t>(cached_r0));
    cached_r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (cached_r4 + 10));
    cached_r0 = (cached_r0 << 16);
    cached_r0 = (static_cast<int32_t>(cached_r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 10u, (cached_r3 + 10), static_cast<uint16_t>(cached_r0));
    cached_r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (cached_r4 + 12));
    cached_r0 = (cached_r0 << 16);
    cached_r0 = (static_cast<int32_t>(cached_r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 12u, (cached_r3 + 12), static_cast<uint16_t>(cached_r0));
    cached_r0 = MemoryInline::ReadResolved16(guest_range_0, 14u, (cached_r4 + 14));
    cached_r0 = (cached_r0 << 16);
    cached_r0 = (static_cast<int32_t>(cached_r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 14u, (cached_r3 + 14), static_cast<uint16_t>(cached_r0));
    cached_r0 = MemoryInline::ReadResolved16(guest_range_0, 16u, (cached_r4 + 16));
    cached_r0 = (cached_r0 << 16);
    cached_r0 = (static_cast<int32_t>(cached_r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 16u, (cached_r3 + 16), static_cast<uint16_t>(cached_r0));
return;
}

}
// RECOMP_STATE_FREE_ABI address=0x8098545C symbol=func_8098545C_statefree_v0 gpr_in=0x00000018 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE uint64_t func_8098545C_statefree(uint32_t native_r3, uint32_t native_r4)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    MKW_GUEST_ENTER(0x8098545Cu);
    goto loc_8098545C;

loc_8098545C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(cached_r4, 0, 18u, true, false);
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, cached_r4);
    guest_range_1 = MemoryInline::ResolveRangeHost(cached_r3, 0, 18u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, cached_r3, static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (cached_r4 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (cached_r3 + 1), static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (cached_r4 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (cached_r3 + 2), static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (cached_r4 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (cached_r3 + 3), static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (cached_r4 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (cached_r3 + 4), cached_r0);
    cached_r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (cached_r4 + 8));
    cached_r0 = (cached_r0 << 16);
    cached_r0 = (static_cast<int32_t>(cached_r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 8u, (cached_r3 + 8), static_cast<uint16_t>(cached_r0));
    cached_r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (cached_r4 + 10));
    cached_r0 = (cached_r0 << 16);
    cached_r0 = (static_cast<int32_t>(cached_r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 10u, (cached_r3 + 10), static_cast<uint16_t>(cached_r0));
    cached_r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (cached_r4 + 12));
    cached_r0 = (cached_r0 << 16);
    cached_r0 = (static_cast<int32_t>(cached_r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 12u, (cached_r3 + 12), static_cast<uint16_t>(cached_r0));
    cached_r0 = MemoryInline::ReadResolved16(guest_range_0, 14u, (cached_r4 + 14));
    cached_r0 = (cached_r0 << 16);
    cached_r0 = (static_cast<int32_t>(cached_r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 14u, (cached_r3 + 14), static_cast<uint16_t>(cached_r0));
    cached_r0 = MemoryInline::ReadResolved16(guest_range_0, 16u, (cached_r4 + 16));
    cached_r0 = (cached_r0 << 16);
    cached_r0 = (static_cast<int32_t>(cached_r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 16u, (cached_r3 + 16), static_cast<uint16_t>(cached_r0));
return static_cast<uint64_t>(cached_r0);
}


    return static_cast<uint64_t>(cached_r0);
}
// RECOMP_STATE_FREE_ABI address=0x8098545C symbol=func_8098545C_statefree gpr_in=0x00000018 gpr_out=0x00000001 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8098545C func_8098545C preserves=true fpr_mask=0x00000000

