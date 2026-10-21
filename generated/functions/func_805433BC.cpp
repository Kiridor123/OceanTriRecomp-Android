#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_805433BC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t addr_sthux_805433D8_loc_0 = 0;
    uint32_t addr_sthux_80543414_loc_0 = 0;
    uint32_t addr_sthux_80543444_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    MKW_GUEST_ENTER(0x805433BCu);
    goto loc_805433BC;

loc_805433BC:
{
    r8 = 0;
    r4 = 0;
    goto loc_805433EC;
}

loc_805433C8:
{
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r5 = (r8 + -1);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(3));
    r6 = (r6_rot_2 & 524280);
    r0 = (r8 + 1);
    addr_sthux_805433D8_loc_0 = (r6 + r7);
    MemoryInline::FlatWrite16(addr_sthux_805433D8_loc_0, static_cast<uint16_t>(r5));
    r6 = addr_sthux_805433D8_loc_0;
    r8 = (r8 + 1);
    MemoryInline::FlatWrite16((r6 + 2), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r6 + 4), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r6 + 6), static_cast<uint16_t>(r4));
}

loc_805433EC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 6u, true, false);
    r5 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r3 + 4));
    r0 = (r8 & 65535);
}

loc_805433F8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r5))) {
        goto loc_805433C8;
    }
}

loc_805433FC:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r3 + 4));
    r5 = (r5 + -1);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r4 = 0;
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r6 = (r6_rot_3 & -8);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & 524280);
    addr_sthux_80543414_loc_0 = (r6 + r7);
    MemoryInline::FlatWrite16(addr_sthux_80543414_loc_0, static_cast<uint16_t>(r5));
    r6 = addr_sthux_80543414_loc_0;
    MemoryInline::FlatWrite16((r6 + 2), static_cast<uint16_t>(r4));
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r5 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r3 + 4));
    r4 = (r6 + r0);
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r5));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r3 + 4));
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    r5 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r3 + 4));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r5 = (r5 + 1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & 524280);
    addr_sthux_80543444_loc_0 = (r4 + r0);
    MemoryInline::FlatWrite16(addr_sthux_80543444_loc_0, static_cast<uint16_t>(r5));
    r4 = addr_sthux_80543444_loc_0;
    r3 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r3 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_805433BC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_805433BC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805433BC func_805433BC preserves=true fpr_mask=0x00000000
