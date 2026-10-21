#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8011EEE8(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x8011EEE8u);
    goto loc_8011EEE8;

loc_8011EEE8:
{
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 1994), 0, 106u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 105u, (r3 + 2099), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 94u, (r3 + 2088), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r3 + 1994), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 16u, (r3 + 2010), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 32u, (r3 + 2026), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r3 + 1996), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 18u, (r3 + 2012), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 34u, (r3 + 2028), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r3 + 1998), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 20u, (r3 + 2014), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 36u, (r3 + 2030), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 6u, (r3 + 2000), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 22u, (r3 + 2016), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 38u, (r3 + 2032), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 2002), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 24u, (r3 + 2018), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 40u, (r3 + 2034), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 2004), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 26u, (r3 + 2020), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 42u, (r3 + 2036), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r3 + 2006), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 28u, (r3 + 2022), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 44u, (r3 + 2038), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 14u, (r3 + 2008), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 30u, (r3 + 2024), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 46u, (r3 + 2040), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 56u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 56u, (r3 + 2050), r0);
        MemoryInline::WriteResolved16(guest_range_0, 58u, (r3 + 2052), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 60u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 60u, (r3 + 2054), r0);
        MemoryInline::WriteResolved16(guest_range_0, 62u, (r3 + 2056), r0);
    }
    MemoryInline::WriteResolved8(guest_range_0, 54u, (r3 + 2048), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 64u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 64u, (r3 + 2058), r0);
        MemoryInline::WriteResolved16(guest_range_0, 66u, (r3 + 2060), r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 68u, (r3 + 2062), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 50u, (r3 + 2044), r0);
    r0 = MemoryInline::FlatRead32((r3 + 448));
    r0 = (r0 & 65535);
    MemoryInline::WriteResolved16(guest_range_0, 76u, (r3 + 2070), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE void func_8011EEE8_statefree(uint32_t native_r3)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint8_t* guest_range_0 = nullptr;

    MKW_GUEST_ENTER(0x8011EEE8u);
    goto loc_8011EEE8;

loc_8011EEE8:
{
    cached_r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((cached_r3 + 1994), 0, 106u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 105u, (cached_r3 + 2099), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 94u, (cached_r3 + 2088), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 0u, (cached_r3 + 1994), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 16u, (cached_r3 + 2010), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 32u, (cached_r3 + 2026), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 2u, (cached_r3 + 1996), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 18u, (cached_r3 + 2012), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 34u, (cached_r3 + 2028), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 4u, (cached_r3 + 1998), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 20u, (cached_r3 + 2014), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 36u, (cached_r3 + 2030), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 6u, (cached_r3 + 2000), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 22u, (cached_r3 + 2016), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 38u, (cached_r3 + 2032), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 8u, (cached_r3 + 2002), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 24u, (cached_r3 + 2018), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 40u, (cached_r3 + 2034), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 10u, (cached_r3 + 2004), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 26u, (cached_r3 + 2020), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 42u, (cached_r3 + 2036), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 12u, (cached_r3 + 2006), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 28u, (cached_r3 + 2022), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 44u, (cached_r3 + 2038), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 14u, (cached_r3 + 2008), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 30u, (cached_r3 + 2024), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 46u, (cached_r3 + 2040), static_cast<uint16_t>(cached_r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 56u, ((static_cast<uint32_t>(static_cast<uint16_t>(cached_r0)) << 16) | static_cast<uint16_t>(cached_r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 56u, (cached_r3 + 2050), cached_r0);
        MemoryInline::WriteResolved16(guest_range_0, 58u, (cached_r3 + 2052), cached_r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 60u, ((static_cast<uint32_t>(static_cast<uint16_t>(cached_r0)) << 16) | static_cast<uint16_t>(cached_r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 60u, (cached_r3 + 2054), cached_r0);
        MemoryInline::WriteResolved16(guest_range_0, 62u, (cached_r3 + 2056), cached_r0);
    }
    MemoryInline::WriteResolved8(guest_range_0, 54u, (cached_r3 + 2048), static_cast<uint8_t>(cached_r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 64u, ((static_cast<uint32_t>(static_cast<uint16_t>(cached_r0)) << 16) | static_cast<uint16_t>(cached_r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 64u, (cached_r3 + 2058), cached_r0);
        MemoryInline::WriteResolved16(guest_range_0, 66u, (cached_r3 + 2060), cached_r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 68u, (cached_r3 + 2062), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved32(guest_range_0, 50u, (cached_r3 + 2044), cached_r0);
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 448));
    cached_r0 = (cached_r0 & 65535);
    MemoryInline::WriteResolved16(guest_range_0, 76u, (cached_r3 + 2070), static_cast<uint16_t>(cached_r0));
return;
}

}
// RECOMP_STATE_FREE_ABI address=0x8011EEE8 symbol=func_8011EEE8_statefree gpr_in=0x00000008 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8011EEE8 func_8011EEE8 preserves=true fpr_mask=0x00000000


extern "C" void func_8011EEE8_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_8011EEE8(ctx);
}
