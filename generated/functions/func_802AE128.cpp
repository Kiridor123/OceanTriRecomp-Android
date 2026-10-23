#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802AE128_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t ctr = ctx->ctr;

    goto loc_802AE128;

loc_802AE128:
{
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 4u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r4, r0);
    r5 = MemoryInline::FlatRead8((r3 + 21));
    r0 = (r5 + -6);
}

loc_802AE13C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(14))) {
        goto loc_802AE238;
    }
}

loc_802AE140:
{
    r5 = 0x805D0000u;
    r5 = (r5 + -2248);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5_addr_1 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_1);
    ctr = r5;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x802AE158u:
        goto loc_802AE158;
        break;
    case 0x802AE198u:
        goto loc_802AE198;
        break;
    case 0x802AE1B8u:
        goto loc_802AE1B8;
        break;
    case 0x802AE1D8u:
        goto loc_802AE1D8;
        break;
    case 0x802AE238u:
        goto loc_802AE238;
        break;
    case 0x802AE218u:
        goto loc_802AE218;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return ctx->gpr[3];
    }
}

loc_802AE158:
{
    r0 = MemoryInline::FlatRead8((r3 + 22));
}

loc_802AE160:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802AE170;
    }
}

loc_802AE164:
{
}

loc_802AE168:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802AE184;
    }
}

loc_802AE16C:
{
    goto loc_802AE238;
}

loc_802AE170:
{
    r0 = 6;
    MemoryInline::WriteResolved32(guest_range_0, 0u, r4, r0);
    r3 = 0x805D0000u;
    r3 = (r3 + -2792);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return r3;
}

loc_802AE184:
{
    r0 = 4;
    MemoryInline::WriteResolved32(guest_range_0, 0u, r4, r0);
    r3 = 0x805D0000u;
    r3 = (r3 + -2600);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return r3;
}

loc_802AE198:
{
    r0 = MemoryInline::FlatRead8((r3 + 22));
}

loc_802AE1A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_802AE238;
    }
}

loc_802AE1A4:
{
    r0 = 3;
    MemoryInline::WriteResolved32(guest_range_0, 0u, r4, r0);
    r3 = 0x805D0000u;
    r3 = (r3 + -2472);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return r3;
}

loc_802AE1B8:
{
    r0 = MemoryInline::FlatRead8((r3 + 22));
}

loc_802AE1C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_802AE238;
    }
}

loc_802AE1C4:
{
    r0 = 1;
    MemoryInline::WriteResolved32(guest_range_0, 0u, r4, r0);
    r3 = 0x805D0000u;
    r3 = (r3 + -2376);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return r3;
}

loc_802AE1D8:
{
    r0 = MemoryInline::FlatRead8((r3 + 22));
}

loc_802AE1E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802AE1F0;
    }
}

loc_802AE1E4:
{
}

loc_802AE1E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802AE204;
    }
}

loc_802AE1EC:
{
    goto loc_802AE238;
}

loc_802AE1F0:
{
    r0 = 1;
    MemoryInline::WriteResolved32(guest_range_0, 0u, r4, r0);
    r3 = 0x805D0000u;
    r3 = (r3 + -2344);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return r3;
}

loc_802AE204:
{
    r0 = 1;
    MemoryInline::WriteResolved32(guest_range_0, 0u, r4, r0);
    r3 = 0x805D0000u;
    r3 = (r3 + -2312);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return r3;
}

loc_802AE218:
{
    r0 = MemoryInline::FlatRead8((r3 + 22));
}

loc_802AE220:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_802AE238;
    }
}

loc_802AE224:
{
    r0 = 1;
    MemoryInline::WriteResolved32(guest_range_0, 0u, r4, r0);
    r3 = 0x805D0000u;
    r3 = (r3 + -2280);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return r3;
}

loc_802AE238:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_802AE128(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802AE128_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802AE128 func_802AE128 preserves=true fpr_mask=0x00000000
