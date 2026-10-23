#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809D6BC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_809D6BC0;

loc_809D6BC0:
{
    r0 = MemoryInline::FlatRead8((r3 + 55));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r5 = (r5_rot_0 & -8);
    r4 = 0x80A20000u;
    r0 = (r4 + 11376);
    r5 = (r0 + r5);
    r4 = MemoryInline::FlatRead8(r5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_809D6BE4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_809D6BF4;
    }
}

loc_809D6BE8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 52), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

loc_809D6BF4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 52), 0, 28u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 54), static_cast<uint8_t>(r4));
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 52), static_cast<uint8_t>(r0));
    r4 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 53), static_cast<uint8_t>(r4));
    r0 = -256;
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 68), r0);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 76), r4);
    r0 = MemoryInline::FlatRead8((r5 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 56), r0);
    r0 = MemoryInline::FlatRead16((r5 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 60), r0);
    r0 = MemoryInline::FlatRead16((r5 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 64), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x809D6BC0 func_809D6BC0 preserves=true fpr_mask=0x00000000
