#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8056D618_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8056D618u);
    goto loc_8056D618;

loc_8056D618:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 7u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
}

loc_8056D620:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8056D62C;
    }
}

loc_8056D624:
{
    r4 = 0;
    goto loc_8056D72C;
}

loc_8056D62C:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(0))) {
        goto loc_8056D640;
    }
}

loc_8056D638:
{
}

loc_8056D63C:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(8))) {
        goto loc_8056D648;
    }
}

loc_8056D640:
{
    r4 = 0;
    goto loc_8056D72C;
}

loc_8056D648:
{
    r5 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 6));
}

loc_8056D650:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(1))) {
        goto loc_8056D65C;
    }
}

loc_8056D654:
{
    r4 = 0;
    goto loc_8056D72C;
}

loc_8056D65C:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_8056D664:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056D6D8;
    }
}

loc_8056D668:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8056D67C;
    }
}

loc_8056D66C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8056D670:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056D688;
    }
}

loc_8056D674:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8056D6B0;
    }
}

loc_8056D678:
{
    goto loc_8056D728;
}

loc_8056D67C:
{
}

loc_8056D680:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(4))) {
        goto loc_8056D728;
    }
}

loc_8056D684:
{
    goto loc_8056D700;
}

loc_8056D688:
{
    r4 = (r5 * 108);
    r5 = 1;
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
    r4 = (r0 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 24));
    r5 = (r5 & r4);
    r4 = (0 - r5);
    r4 = (r4 | r5);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
    goto loc_8056D72C;
}

loc_8056D6B0:
{
    r4 = (r5 * 108);
    r5 = 1;
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
    r4 = (r0 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 28));
    r5 = (r5 & r4);
    r4 = (0 - r5);
    r4 = (r4 | r5);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    goto loc_8056D72C;
}

loc_8056D6D8:
{
    r4 = (r5 * 108);
    r5 = 1;
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
    r4 = (r0 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 32));
    r5 = (r5 & r4);
    r4 = (0 - r5);
    r4 = (r4 | r5);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_4 & 1);
    goto loc_8056D72C;
}

loc_8056D700:
{
    r4 = (r5 * 108);
    r5 = 1;
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
    r4 = (r0 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 36));
    r5 = (r5 & r4);
    r4 = (0 - r5);
    r4 = (r4 | r5);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_3 & 1);
    goto loc_8056D72C;
}

loc_8056D728:
{
    r4 = 0;
}

loc_8056D72C:
{
}

loc_8056D730:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8056D73C;
    }
}

loc_8056D734:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8056D73C:
{
    r5 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 6));
}

loc_8056D744:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(1))) {
        goto loc_8056D750;
    }
}

loc_8056D748:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8056D750:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_8056D758:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056D7B4;
    }
}

loc_8056D75C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8056D770;
    }
}

loc_8056D760:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8056D764:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056D77C;
    }
}

loc_8056D768:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8056D798;
    }
}

loc_8056D76C:
{
    goto loc_8056D7EC;
}

loc_8056D770:
{
}

loc_8056D774:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(4))) {
        goto loc_8056D7EC;
    }
}

loc_8056D778:
{
    goto loc_8056D7D0;
}

loc_8056D77C:
{
    r4 = (r5 * 108);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (r0 + r4);
    r3 = (r0 + r3);
    r3 = MemoryInline::FlatRead8((r3 + 77));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8056D798:
{
    r4 = (r5 * 108);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (r0 + r4);
    r3 = (r0 + r3);
    r3 = MemoryInline::FlatRead8((r3 + 77));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8056D7B4:
{
    r4 = (r5 * 108);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (r0 + r4);
    r3 = (r0 + r3);
    r3 = MemoryInline::FlatRead8((r3 + 69));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8056D7D0:
{
    r4 = (r5 * 108);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (r0 + r4);
    r3 = (r0 + r3);
    r3 = MemoryInline::FlatRead8((r3 + 77));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8056D7EC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8056D618(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8056D618_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8056D618 func_8056D618 preserves=true fpr_mask=0x00000000
