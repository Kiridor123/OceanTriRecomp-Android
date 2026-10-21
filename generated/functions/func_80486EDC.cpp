#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80486EDC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r6_addr_0 = 0;
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80486EDCu);
    goto loc_80486EDC;

loc_80486EDC:
{
}

loc_80486EE0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80486F14;
    }
}

loc_80486EE4:
{
    r6 = MemoryInline::FlatRead16(r4);
    r3 = r4;
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r0));
    r6 = MemoryInline::FlatRead16((r4 + 4));
    r0 = MemoryInline::FlatRead16((r4 + 6));
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r5 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 8));
    MemoryInline::FlatWrite16((r5 + 8), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80486F14:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 10u, true, false);
    r9 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r4 + 8));
}

loc_80486F1C:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_80486F2C;
    }
}

loc_80486F20:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 10u, true, false);
    r8 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r3 + 8));
}

loc_80486F28:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80486F34;
    }
}

loc_80486F2C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80486F34:
{
    r0 = (r8 & 16);
}

loc_80486F38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80486F78;
    }
}

loc_80486F3C:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved16(guest_range_1, 0u, r3);
            r0 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r3 + 2));
        }
    }
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 4u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r3 + 4));
            r0 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r3 + 6));
        }
    }
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r5 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r3 + 8));
    r3 = r5;
    MemoryInline::FlatWrite16((r5 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 8));
    r0 = (r0 & -17);
    MemoryInline::FlatWrite8((r5 + 8), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80486F78:
{
    r0 = (r9 & 16);
}

loc_80486F7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80486FBC;
    }
}

loc_80486F80:
{
    r6 = MemoryInline::ReadResolved16(guest_range_0, 0u, r4);
    r3 = r5;
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r4 + 2));
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 4u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r4 + 4));
            r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r4 + 6));
        }
    }
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r5 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r4 + 8));
    MemoryInline::FlatWrite16((r5 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 8));
    r0 = (r0 & -17);
    MemoryInline::FlatWrite8((r5 + 8), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80486FBC:
{
    r7 = (r8 + -1);
    r6 = 0x80570000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r0 = (r0 - r7);
    r6 = (r6 + 16392);
    r7 = (r9 + r0);
    r0 = (r7 + -1);
    r0 = (r0 & 255);
    r6_addr_0 = (r6 + r0);
    r0 = MemoryInline::FlatRead8(r6_addr_0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80486FE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80487030;
    }
}

loc_80486FE8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80486FF8;
    }
}

loc_80486FEC:
{
}

loc_80486FF0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1))) {
        goto loc_80487004;
    }
}

loc_80486FF4:
{
    goto loc_804870F0;
}

loc_80486FF8:
{
}

loc_80486FFC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(4))) {
        goto loc_804870F0;
    }
}

loc_80487000:
{
    goto loc_80487060;
}

loc_80487004:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved16(guest_range_1, 0u, r3);
            r0 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r3 + 2));
        }
    }
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 4u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r3 + 4));
            r0 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r3 + 6));
        }
    }
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r5 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r3 + 8));
    MemoryInline::FlatWrite16((r5 + 8), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80487030:
{
    r6 = MemoryInline::ReadResolved16(guest_range_0, 0u, r4);
    r3 = r4;
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r4 + 2));
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 4u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r4 + 4));
            r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r4 + 6));
        }
    }
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r5 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r4 + 8));
    MemoryInline::FlatWrite16((r5 + 8), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80487060:
{
    MemoryInline::FlatWrite8((r5 + 8), static_cast<uint8_t>(r8));
    r6 = MemoryInline::ReadResolved16(guest_range_0, 0u, r4);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 0u, r3);
}

loc_80487070:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r6))) {
        goto loc_80487078;
    }
}

loc_80487074:
{
    r6 = r0;
}

loc_80487078:
{
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r6));
    r7 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r4 + 2));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r3 + 2));
}

loc_80487088:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r7))) {
        goto loc_80487090;
    }
}

loc_8048708C:
{
    r7 = r0;
}

loc_80487090:
{
    r6 = MemoryInline::FlatRead16(r5);
    r0 = (r7 & 65535);
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r7));
}

loc_804870A0:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r0))) {
        goto loc_804870AC;
    }
}

loc_804870A4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804870AC:
{
    r0 = MemoryInline::FlatRead8((r5 + 8));
}

loc_804870B4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_804870E8;
    }
}

loc_804870B8:
{
    r6 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r4 + 4));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r3 + 4));
}

loc_804870C4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r6))) {
        goto loc_804870CC;
    }
}

loc_804870C8:
{
    r6 = r0;
}

loc_804870CC:
{
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r6));
    r4 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r4 + 6));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r3 + 6));
}

loc_804870DC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r4))) {
        goto loc_804870E4;
    }
}

loc_804870E0:
{
    r4 = r0;
}

loc_804870E4:
{
    MemoryInline::FlatWrite16((r5 + 6), static_cast<uint16_t>(r4));
}

loc_804870E8:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804870F0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80486EDC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80486EDC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003D9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80486EDC func_80486EDC preserves=true fpr_mask=0x00000000
