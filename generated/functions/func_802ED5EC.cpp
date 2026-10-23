#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802ED5EC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    goto loc_802ED5EC;

loc_802ED5EC:
{
    r6 = 0;
    r5 = 1;
    r0 = (r4 & 255);
}

loc_802ED5FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802ED614;
    }
}

loc_802ED600:
{
    r4 = 0x805D0000u;
    r7 = (r4 + 27384);
    r4 = 0x805D0000u;
    r4 = (r4 + 27424);
    goto loc_802ED624;
}

loc_802ED614:
{
    r4 = 0x805D0000u;
    r7 = (r4 + 27468);
    r4 = 0x805D0000u;
    r4 = (r4 + 27504);
}

loc_802ED624:
{
    r8 = MemoryInline::FlatRead32((r3 + 984));
}

loc_802ED628:
{
    r0 = MemoryInline::FlatRead32(r7);
}

loc_802ED630:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802ED650;
    }
}

loc_802ED634:
{
    r0 = (r8 & r0);
}

loc_802ED63C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802ED644;
    }
}

loc_802ED640:
{
    r6 = (r6 | r5);
}

loc_802ED644:
{
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & -2);
    r7 = (r7 + 4);
    goto loc_802ED628;
}

loc_802ED650:
{
    r3 = MemoryInline::FlatRead32((r3 + 988));
}

loc_802ED654:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_802ED65C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802ED67C;
    }
}

loc_802ED660:
{
    r0 = (r3 & r0);
}

loc_802ED668:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802ED670;
    }
}

loc_802ED66C:
{
    r6 = (r6 | r5);
}

loc_802ED670:
{
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_4 & -2);
    r4 = (r4 + 4);
    goto loc_802ED654;
}

loc_802ED67C:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802ED5EC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802ED5EC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802ED5EC func_802ED5EC preserves=true fpr_mask=0x00000000
