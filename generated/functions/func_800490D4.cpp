#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800490D4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800490D4;

loc_800490D4:
{
    r7 = 0x80670000u;
    r7 = (r7 + -16840);
    r0 = 32;
    ctr = r0;
}

loc_800490E4:
{
    r0 = MemoryInline::FlatRead8((r7 + 4));
}

loc_800490EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80049234;
    }
}

loc_800490F0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r7 + 4), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32(r7, r4);
}

loc_80049100:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(8))) {
        goto loc_80049108;
    }
}

loc_80049104:
{
    r5 = 8;
}

loc_80049108:
{
    r0 = (r5 & 255);
    MemoryInline::FlatWrite8((r7 + 5), static_cast<uint8_t>(r0));
}

loc_80049114:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800491E8;
    }
}

loc_80049118:
{
    r10 = 0;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80049120:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_800491E8;
    }
}

loc_80049124:
{
    r8 = (r5 + -8);
}

loc_8004912C:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(8))) {
        goto loc_800491BC;
    }
}

loc_80049130:
{
    r9 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8004914C;
    }
}

loc_80049138:
{
    r4 = 0x80000000u;
    r0 = (r4 + -2);
}

loc_80049144:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_8004914C;
    }
}

loc_80049148:
{
    r9 = 1;
}

loc_8004914C:
{
}

loc_80049150:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_800491BC;
    }
}

loc_80049154:
{
    r4 = r7;
    r0 = (r8 + 7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_80049168:
{
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(0))) {
        goto loc_800491BC;
    }
}

loc_8004916C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r6, 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r6);
    guest_range_1 = MemoryInline::ResolveRangeHost((r4 + 8), 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r4 + 8), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r6 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r4 + 12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r6 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r4 + 16), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r6 + 12));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r4 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r6 + 16));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r4 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r6 + 20));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r4 + 28), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r6 + 24));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r4 + 32), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r6 + 28));
    r6 = (r6 + 32);
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r4 + 36), r0);
    r4 = (r4 + 32);
    r10 = (r10 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8004916C;
    }
}

loc_800491BC:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r4 = (r7 + r0);
    r0 = (r5 - r10);
    ctr = r0;
}

loc_800491D0:
{
    if ((static_cast<int32_t>(r10) >= static_cast<int32_t>(r5))) {
        goto loc_800491E8;
    }
}

loc_800491D4:
{
    r0 = MemoryInline::FlatRead32(r6);
    r6 = (r6 + 4);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r4 = (r4 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800491D4;
    }
}

loc_800491E8:
{
    r0 = (r3 & 255);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = 0x80670000u;
    r3 = (r3 + -15432);
    r3_addr_0 = (r3 + r0);
    r4 = MemoryInline::FlatRead32(r3_addr_0);
}

loc_80049200:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8004920C;
    }
}

loc_80049204:
{
    r3_addr_1 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_1, r7);
    goto loc_80049228;
}

loc_8004920C:
{
    r0 = MemoryInline::FlatRead32((r4 + 40));
}

loc_80049214:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80049220;
    }
}

loc_80049218:
{
    MemoryInline::FlatWrite32((r4 + 40), r7);
    goto loc_80049228;
}

loc_80049220:
{
    r4 = r0;
    goto loc_8004920C;
}

loc_80049228:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r7 + 40), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80049234:
{
    r7 = (r7 + 44);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800490E4;
    }
}

loc_8004923C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800490D4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800490D4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007F9 gpr_write=0x000007F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800490D4 func_800490D4 preserves=true fpr_mask=0x00000000
