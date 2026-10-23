#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804E1A70_ra58_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_804E1A70;

loc_804E1A70:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -14716), 0, 4u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -14716));
    r3 = MemoryInline::FlatRead32((r4 + 1692));
    r0 = (r3 + 2);
    MemoryInline::FlatWrite32((r4 + 1692), r0);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -14716));
    r3 = MemoryInline::FlatRead32((r4 + 1692));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 1692), r0);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_804E1A98:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(8))) {
        goto loc_804E1AA4;
    }
}

loc_804E1A9C:
{
    r3 = 10;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804E1AA4:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -14716));
    r4 = MemoryInline::FlatRead32((r5 + 1692));
    r3 = MemoryInline::FlatRead8(r4);
    r0 = MemoryInline::FlatRead8((r4 + 1));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_0 = (r0_rot_0 & 65280);
    r0_mdest_0 = (r0 & -65281);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryInline::FlatWrite16((r5 + 1684), static_cast<uint16_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -14716));
    r3 = MemoryInline::FlatRead32((r4 + 1692));
    r0 = (r3 + 2);
    MemoryInline::FlatWrite32((r4 + 1692), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -14716));
    r4 = MemoryInline::FlatRead32((r5 + 1692));
    r3 = MemoryInline::FlatRead8(r4);
    r0 = MemoryInline::FlatRead8((r4 + 1));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_1 = (r0_rot_1 & 65280);
    r0_mdest_1 = (r0 & -65281);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite16((r5 + 1682), static_cast<uint16_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -14716));
    r3 = MemoryInline::FlatRead32((r4 + 1692));
    r0 = (r3 + 2);
    MemoryInline::FlatWrite32((r4 + 1692), r0);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -14716));
    r3 = MemoryInline::FlatRead32((r4 + 1692));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 1692), r0);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_804E1B0C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_804E1B18;
    }
}

loc_804E1B10:
{
    r3 = 12;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804E1B18:
{
    r0 = 3;
    r6 = 0;
    ctr = r0;
}

loc_804E1B24:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -14716));
    r0 = (r6 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_804E1B2C:
{
    r3 = MemoryInline::FlatRead32((r4 + 1692));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 1692), r0);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -14716));
    r3 = MemoryInline::FlatRead32((r4 + 1692));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 1692), r0);
    r3 = MemoryInline::FlatRead8(r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804E1B58;
    }
}

loc_804E1B50:
{
}

loc_804E1B54:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(34))) {
        goto loc_804E1B68;
    }
}

loc_804E1B58:
{
    r0 = (r6 & 255);
}

loc_804E1B5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E1B70;
    }
}

loc_804E1B60:
{
}

loc_804E1B64:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(17))) {
        goto loc_804E1B70;
    }
}

loc_804E1B68:
{
    r3 = 19;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804E1B70:
{
    r0 = (r6 & 255);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -14716));
    r0 = (r0 * 6);
    r6 = (r6 + 1);
    r4 = MemoryInline::FlatRead32((r5 + 1692));
    r3 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8((r3 + 1664), static_cast<uint8_t>(r0));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r5 + 1692), r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804E1B24;
    }
}

loc_804E1B9C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804E1A70(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804E1A70_ra58_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002059 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804E1A70 func_804E1A70 preserves=true fpr_mask=0x00000000
