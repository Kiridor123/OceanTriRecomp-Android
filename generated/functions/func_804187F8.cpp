#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804187F8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r10_ca_0 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_not_0 = 0;
    uint32_t r4_adde_right_0 = 0;
    uint32_t r4_ca_0 = 0;
    uint32_t r4_subfc_sub_0 = 0;
    uint32_t r6_ca_0 = 0;
    uint32_t r8_addze_src_0 = 0;
    uint32_t r8_ca_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_804187F8;

loc_804187F8:
{
    MemoryAlias::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = 0;
    goto loc_80418820;
}

loc_80418808:
{
    r5 = MemoryAlias::FlatRead16(r4);
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r5 = (r5 + 1);
    MemoryAlias::FlatWrite16(r4, static_cast<uint16_t>(r5));
    r5 = MemoryAlias::FlatRead16((r4 + 2));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r5 = (r5 + -12);
    MemoryAlias::FlatWrite16((r4 + 2), static_cast<uint16_t>(r5));
}

loc_80418820:
{
    r5 = MemoryAlias::FlatRead16((r4 + 2));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
}

loc_80418828:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(12))) {
        goto loc_80418808;
    }
}

loc_8041882C:
{
    goto loc_80418848;
}

loc_80418830:
{
    r5 = MemoryAlias::FlatRead16(r4);
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r5 = (r5 + -1);
    MemoryAlias::FlatWrite16(r4, static_cast<uint16_t>(r5));
    r5 = MemoryAlias::FlatRead16((r4 + 2));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r5 = (r5 + 12);
    MemoryAlias::FlatWrite16((r4 + 2), static_cast<uint16_t>(r5));
}

loc_80418848:
{
    r5 = MemoryAlias::FlatRead16((r4 + 2));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
}

loc_80418850:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_80418830;
    }
}

loc_80418854:
{
    r6 = MemoryAlias::FlatRead16(r4);
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r31 = (r6 + -1);
    r7 = 1374420992;
    r10 = (r7 + -31457);
    r11 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r10)) * static_cast<int64_t>(static_cast<int32_t>(r31))) >> 32));
    r7 = (static_cast<int32_t>(r11) >> 7);
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r8 = (r8_rot_0 & 1);
    r12 = (r7 + r8);
    r7 = (static_cast<int32_t>(r12) >> 31);
    r9 = (r12 * 366);
    r7 = (static_cast<int32_t>(r11) >> 5);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r8 = (r8_rot_1 & 1);
    r7 = (r7 + r8);
    r8 = (r7 - r12);
    r7 = (static_cast<int32_t>(r8) >> 31);
    r7 = (r8 * 365);
    r7 = (r9 + r7);
    r12 = (r12 + r8);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r31);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r8 = (static_cast<int32_t>(r31) >> 2);
    r8_addze_src_0 = r8;
    r8_ca_0 = (xer >> 29) & 1u;
    r8 = (r8_addze_src_0 + r8_ca_0);
    r9 = (r8 - r12);
    r8 = (static_cast<int32_t>(r9) >> 31);
    r8 = (r9 * 366);
    r7 = (r7 + r8);
    r12 = (r12 + r9);
    r9 = (r31 - r12);
    r8 = (static_cast<int32_t>(r9) >> 31);
    r8 = (r9 * 365);
    r7 = (r7 + r8);
    r7 = (r7 + 366);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(30));
    r8 = (r8_rot_2 & -1073741824);
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r9 = (r9_rot_0 & 1);
    r8 = (r8 - r9);
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r8 = (r8_rot_3 & -1);
    r8 = (r8 + r9);
}

loc_804188E4:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80418930;
    }
}

loc_804188E8:
{
    r10 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r10)) * static_cast<int64_t>(static_cast<int32_t>(r6))) >> 32));
    r8 = (static_cast<int32_t>(r10) >> 5);
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_1 & 1);
    r8 = (r8 + r9);
    r8 = (r8 * 100);
    r8 = (r6 - r8);
}

loc_80418904:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80418910;
    }
}

loc_80418908:
{
    r0 = 1;
    goto loc_80418930;
}

loc_80418910:
{
    r8 = (static_cast<int32_t>(r10) >> 7);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_2 & 1);
    r8 = (r8 + r9);
    r8 = (r8 * 400);
    r6 = (r6 - r8);
}

loc_80418928:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80418930;
    }
}

loc_8041892C:
{
    r0 = 1;
}

loc_80418930:
{
    r6 = 1;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r5), static_cast<int32_t>(1));
}

loc_80418938:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_80418A5C;
    }
}

loc_8041893C:
{
    r10 = (r5 + -8);
    r8 = (r5 + -1);
}

loc_80418948:
{
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(8))) {
        goto loc_80418A24;
    }
}

loc_8041894C:
{
    r9 = 0;
    r11 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8041896C;
    }
}

loc_80418958:
{
    r8 = 0x80000000u;
    r8 = (r8 + -2);
}

loc_80418964:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r8))) {
        goto loc_8041896C;
    }
}

loc_80418968:
{
    r11 = 1;
}

loc_8041896C:
{
}

loc_80418970:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_804189A8;
    }
}

loc_80418974:
{
    r11 = 1;
    r12 = (r5 & -2147483648);
    r8 = (r12 + -2147483648);
}

loc_80418984:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(0))) {
        goto loc_8041899C;
    }
}

loc_80418988:
{
    r8 = (r5 + -1);
    r8 = (r8 & -2147483648);
}

loc_80418994:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(r8))) {
        goto loc_8041899C;
    }
}

loc_80418998:
{
    r11 = 0;
}

loc_8041899C:
{
}

loc_804189A0:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_804189A8;
    }
}

loc_804189A4:
{
    r9 = 1;
}

loc_804189A8:
{
}

loc_804189AC:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_80418A24;
    }
}

loc_804189B0:
{
    r9 = (r0 * 48);
    r8 = 0x80600000u;
    r8 = (r8 + 12872);
    r9 = (r8 + r9);
    r9 = (r9 + 4);
    r8 = (r10 + 6);
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(29));
    r8 = (r8_rot_4 & 536870911);
    ctr = r8;
}

loc_804189D4:
{
    if ((static_cast<int32_t>(r10) <= static_cast<int32_t>(1))) {
        goto loc_80418A24;
    }
}

loc_804189D8:
{
    guest_range_0 = MemoryAlias::ResolveRangeHost((r9 + -4), 0, 32u, true, false);
    r8 = MemoryAlias::ReadResolved32(guest_range_0, 0u, (r9 + -4));
    r7 = (r7 + r8);
    r8 = MemoryAlias::ReadResolved32(guest_range_0, 4u, r9);
    r7 = (r7 + r8);
    r8 = MemoryAlias::ReadResolved32(guest_range_0, 8u, (r9 + 4));
    r7 = (r7 + r8);
    r8 = MemoryAlias::ReadResolved32(guest_range_0, 12u, (r9 + 8));
    r7 = (r7 + r8);
    r8 = MemoryAlias::ReadResolved32(guest_range_0, 16u, (r9 + 12));
    r7 = (r7 + r8);
    r8 = MemoryAlias::ReadResolved32(guest_range_0, 20u, (r9 + 16));
    r7 = (r7 + r8);
    r8 = MemoryAlias::ReadResolved32(guest_range_0, 24u, (r9 + 20));
    r7 = (r7 + r8);
    r8 = MemoryAlias::ReadResolved32(guest_range_0, 28u, (r9 + 24));
    r7 = (r7 + r8);
    r9 = (r9 + 32);
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804189D8;
    }
}

loc_80418A24:
{
    r9 = (r0 * 48);
    r8 = 0x80600000u;
    r0 = (r8 + 12872);
    r8_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r8 = (r8_rot_6 & -4);
    r0 = (r0 + r9);
    r8 = (r8 + r0);
    r0 = (r5 - r6);
    ctr = r0;
}

loc_80418A48:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r5))) {
        goto loc_80418A5C;
    }
}

loc_80418A4C:
{
    r0 = MemoryAlias::FlatRead32((r8 + -4));
    r7 = (r7 + r0);
    r8 = (r8 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80418A4C;
    }
}

loc_80418A5C:
{
    r0 = MemoryAlias::FlatRead16((r4 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r5 = (r0 + r7);
    r7 = (r5 + -1);
    r9 = (static_cast<int32_t>(r7) >> 31);
    r5 = 500629504;
    r8 = (r5 + 24576);
    r6 = 20;
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r7) * static_cast<uint64_t>(r8)) >> 32));
    r5 = (r9 * r8);
    r5 = (r0 + r5);
    r0 = (r7 * r6);
    r10 = (r7 * r8);
    r9 = (r5 + r0);
    r8 = MemoryAlias::FlatRead16((r4 + 6));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r6 = (static_cast<int32_t>(r8) >> 31);
    r5 = -694943744;
    r7 = (r5 + -23552);
    r0 = 0;
    r5 = (static_cast<uint32_t>((static_cast<uint64_t>(r8) * static_cast<uint64_t>(r7)) >> 32));
    r6 = (r6 * r7);
    r6 = (r5 + r6);
    r5 = (r8 * r0);
    r7 = (r8 * r7);
    r5 = (r6 + r5);
    r11 = (r10 + r7);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r10)) + static_cast<uint64_t>(static_cast<uint32_t>(r7)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r10_ca_0 = (xer >> 29) & 1u;
    r10 = (r9 + r5);
    r10 = (r10 + r10_ca_0);
    r8 = MemoryAlias::FlatRead16((r4 + 10));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r6 = (static_cast<int32_t>(r8) >> 31);
    r5 = 983040;
    r7 = (r5 + 16960);
    r5 = (static_cast<uint32_t>((static_cast<uint64_t>(r8) * static_cast<uint64_t>(r7)) >> 32));
    r6 = (r6 * r7);
    r6 = (r5 + r6);
    r5 = (r8 * r0);
    r9 = (r8 * r7);
    r7 = (r6 + r5);
    r6 = MemoryAlias::FlatRead16((r4 + 8));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r5 = (static_cast<int32_t>(r6) >> 31);
    r4 = 60030976;
    r8 = (r4 + -30976);
    r4 = (static_cast<uint32_t>((static_cast<uint64_t>(r6) * static_cast<uint64_t>(r8)) >> 32));
    r5 = (r5 * r8);
    r5 = (r4 + r5);
    r4 = (r6 * r0);
    r6 = (r6 * r8);
    r4 = (r5 + r4);
    r5 = (r9 + r6);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r9)) + static_cast<uint64_t>(static_cast<uint32_t>(r6)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4_adde_right_0 = r4;
    r4_ca_0 = (xer >> 29) & 1u;
    r4 = (r7 + r4_adde_right_0);
    r4 = (r4 + r4_ca_0);
    r7 = (r11 + r5);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r11)) + static_cast<uint64_t>(static_cast<uint32_t>(r5)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r6_ca_0 = (xer >> 29) & 1u;
    r6 = (r10 + r4);
    r6 = (r6 + r6_ca_0);
    r5 = MemoryAlias::FlatRead32((r3 + 140));
    r4 = (static_cast<int32_t>(r5) >> 31);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r5) * static_cast<uint64_t>(r8)) >> 32));
    r4 = (r4 * r8);
    r3 = (r3 + r4);
    r0 = (r5 * r0);
    r4 = (r5 * r8);
    r0 = (r3 + r0);
    r4_subfc_sub_0 = r4;
    r4 = (r7 - r4_subfc_sub_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r4_subfc_sub_0) ? 1u : 0u) << 29);
    r3_not_0 = ~(r0);
    r3_ca_0 = (xer >> 29) & 1u;
    r3 = (r3_not_0 + r6);
    r3 = (r3 + r3_ca_0);
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804187F8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804187F8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804187F8 func_804187F8 preserves=true fpr_mask=0x00000000
