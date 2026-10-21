#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80135B4C(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    MKW_GUEST_ENTER(0x80135B4Cu);
    goto loc_80135B4C;

loc_80135B4C:
{
    r5 = 0;
    r0 = -1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 1160), 0, 264u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r3 + 1165), static_cast<uint8_t>(r5));
    r4 = MemoryInline::FlatRead8((r3 + 481));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 1166), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 1160), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 1161), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 1162), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 1163), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 1164), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 1170), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 16u, (r3 + 1176), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved32(guest_range_0, 128u, (r3 + 1288), r0);
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 1167), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r3 + 1169), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 137u, (r3 + 1297), static_cast<uint8_t>(r5));
    r4 = MemoryInline::FlatRead8((r3 + 481));
    MemoryInline::WriteResolved8(guest_range_0, 138u, (r3 + 1298), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 132u, (r3 + 1292), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 133u, (r3 + 1293), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 134u, (r3 + 1294), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 135u, (r3 + 1295), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 136u, (r3 + 1296), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 142u, (r3 + 1302), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 148u, (r3 + 1308), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved32(guest_range_0, 260u, (r3 + 1420), r0);
    MemoryInline::WriteResolved8(guest_range_0, 139u, (r3 + 1299), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 141u, (r3 + 1301), static_cast<uint8_t>(r5));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80135B4C_statefree(uint32_t native_r3)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;
    uint32_t cached_r5 = 0;

    uint8_t* guest_range_0 = nullptr;

    MKW_GUEST_ENTER(0x80135B4Cu);
    goto loc_80135B4C;

loc_80135B4C:
{
    cached_r5 = 0;
    cached_r0 = -1;
    guest_range_0 = MemoryInline::ResolveRangeHost((cached_r3 + 1160), 0, 264u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 5u, (cached_r3 + 1165), static_cast<uint8_t>(cached_r5));
    cached_r4 = MemoryInline::FlatRead8((cached_r3 + 481));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (cached_r3 + 1166), static_cast<uint8_t>(cached_r4));
    MemoryInline::WriteResolved8(guest_range_0, 0u, (cached_r3 + 1160), static_cast<uint8_t>(cached_r5));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (cached_r3 + 1161), static_cast<uint8_t>(cached_r5));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (cached_r3 + 1162), static_cast<uint8_t>(cached_r5));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (cached_r3 + 1163), static_cast<uint8_t>(cached_r5));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (cached_r3 + 1164), static_cast<uint8_t>(cached_r5));
    MemoryInline::WriteResolved16(guest_range_0, 10u, (cached_r3 + 1170), static_cast<uint16_t>(cached_r5));
    MemoryInline::WriteResolved16(guest_range_0, 16u, (cached_r3 + 1176), static_cast<uint16_t>(cached_r5));
    MemoryInline::WriteResolved32(guest_range_0, 128u, (cached_r3 + 1288), cached_r0);
    MemoryInline::WriteResolved8(guest_range_0, 7u, (cached_r3 + 1167), static_cast<uint8_t>(cached_r5));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (cached_r3 + 1169), static_cast<uint8_t>(cached_r5));
    MemoryInline::WriteResolved8(guest_range_0, 137u, (cached_r3 + 1297), static_cast<uint8_t>(cached_r5));
    cached_r4 = MemoryInline::FlatRead8((cached_r3 + 481));
    MemoryInline::WriteResolved8(guest_range_0, 138u, (cached_r3 + 1298), static_cast<uint8_t>(cached_r4));
    MemoryInline::WriteResolved8(guest_range_0, 132u, (cached_r3 + 1292), static_cast<uint8_t>(cached_r5));
    MemoryInline::WriteResolved8(guest_range_0, 133u, (cached_r3 + 1293), static_cast<uint8_t>(cached_r5));
    MemoryInline::WriteResolved8(guest_range_0, 134u, (cached_r3 + 1294), static_cast<uint8_t>(cached_r5));
    MemoryInline::WriteResolved8(guest_range_0, 135u, (cached_r3 + 1295), static_cast<uint8_t>(cached_r5));
    MemoryInline::WriteResolved8(guest_range_0, 136u, (cached_r3 + 1296), static_cast<uint8_t>(cached_r5));
    MemoryInline::WriteResolved16(guest_range_0, 142u, (cached_r3 + 1302), static_cast<uint16_t>(cached_r5));
    MemoryInline::WriteResolved16(guest_range_0, 148u, (cached_r3 + 1308), static_cast<uint16_t>(cached_r5));
    MemoryInline::WriteResolved32(guest_range_0, 260u, (cached_r3 + 1420), cached_r0);
    MemoryInline::WriteResolved8(guest_range_0, 139u, (cached_r3 + 1299), static_cast<uint8_t>(cached_r5));
    MemoryInline::WriteResolved8(guest_range_0, 141u, (cached_r3 + 1301), static_cast<uint8_t>(cached_r5));

return { static_cast<uint64_t>(cached_r4), static_cast<uint64_t>(cached_r5) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80135B4C symbol=func_80135B4C_statefree gpr_in=0x00000008 gpr_out=0x00000030 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80135B4C func_80135B4C preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_80135B4C_ra8_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_80135B4C(ctx);
    return ctx->gpr[4];
}
