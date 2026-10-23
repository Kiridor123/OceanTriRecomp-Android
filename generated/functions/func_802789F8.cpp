#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802789F8(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_802789F8;

loc_802789F8:
{
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 906), 0, 164u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r3 + 926), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r3 + 906), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 98u, (r3 + 1004), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 110u, (r3 + 1016), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 116u, (r3 + 1022), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 104u, (r3 + 1010), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 132u, (r3 + 1038), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 138u, (r3 + 1044), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 144u, (r3 + 1050), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 150u, (r3 + 1056), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r3 + 908), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 154u, (r3 + 1060), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r3 + 910), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 156u, (r3 + 1062), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 6u, (r3 + 912), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 158u, (r3 + 1064), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 914), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 160u, (r3 + 1066), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 916), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 162u, (r3 + 1068), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_802789F8_statefree(uint32_t native_r3)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint8_t* guest_range_0 = nullptr;

    goto loc_802789F8;

loc_802789F8:
{
    cached_r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((cached_r3 + 906), 0, 164u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 20u, (cached_r3 + 926), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 0u, (cached_r3 + 906), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 98u, (cached_r3 + 1004), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 110u, (cached_r3 + 1016), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 116u, (cached_r3 + 1022), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 104u, (cached_r3 + 1010), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 132u, (cached_r3 + 1038), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 138u, (cached_r3 + 1044), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 144u, (cached_r3 + 1050), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 150u, (cached_r3 + 1056), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 2u, (cached_r3 + 908), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 154u, (cached_r3 + 1060), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 4u, (cached_r3 + 910), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 156u, (cached_r3 + 1062), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 6u, (cached_r3 + 912), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 158u, (cached_r3 + 1064), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 8u, (cached_r3 + 914), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 160u, (cached_r3 + 1066), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 10u, (cached_r3 + 916), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 162u, (cached_r3 + 1068), static_cast<uint16_t>(cached_r0));
return static_cast<uint64_t>(cached_r0);
}


    return static_cast<uint64_t>(cached_r0);
}
// RECOMP_STATE_FREE_ABI address=0x802789F8 symbol=func_802789F8_statefree gpr_in=0x00000008 gpr_out=0x00000001 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802789F8 func_802789F8 preserves=true fpr_mask=0x00000000


extern "C" void func_802789F8_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_802789F8(ctx);
}
