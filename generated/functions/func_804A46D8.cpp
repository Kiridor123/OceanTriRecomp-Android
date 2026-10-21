#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804A46D8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804A46D8u);
    goto loc_804A46D8;

loc_804A46D8:
{
    r0 = 2;
}

loc_804A4750:
{
}

loc_804A4754:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_804A4760;
    }
}

loc_804A4758:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804A4760:
{
    r0 = (r8 + r0);
    r4 = 0x80620000u;
    r3 = 0x80000000u;
    goto loc_804A49C4;
}

loc_804A4770:
{
    r7 = MemoryInline::FlatRead8(r8);
    r8 = (r8 + 1);
    r6 = (static_cast<int32_t>(r7) >> 3);
    r9 = (r7 & 7);
}

loc_804A4784:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(3))) {
        goto loc_804A4790;
    }
}

loc_804A4788:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804A4790:
{
}

loc_804A4794:
{
    if ((static_cast<uint32_t>(r9) > static_cast<uint32_t>(7))) {
        goto loc_804A481C;
    }
}

loc_804A4798:
{
    r7 = (r4 + -29376);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r6 = (r6_rot_2 & -4);
    r7_addr_2 = (r7 + r6);
    r7 = MemoryInline::FlatRead32(r7_addr_2);
    ctr = r7;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x804A481Cu:
        goto loc_804A481C;
        break;
    case 0x804A47ACu:
        goto loc_804A47AC;
        break;
    case 0x804A47B4u:
        goto loc_804A47B4;
        break;
    case 0x804A47BCu:
        goto loc_804A47BC;
        break;
    case 0x804A47C4u:
        goto loc_804A47C4;
        break;
    case 0x804A47D0u:
        goto loc_804A47D0;
        break;
    case 0x804A47ECu:
        goto loc_804A47EC;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_804A47AC:
{
    r6 = 2;
    goto loc_804A4824;
}

loc_804A47B4:
{
    r6 = 4;
    goto loc_804A4824;
}

loc_804A47BC:
{
    r6 = 16;
    goto loc_804A4824;
}

loc_804A47C4:
{
    r6 = MemoryInline::FlatRead8(r8);
    r8 = (r8 + 1);
    goto loc_804A4824;
}

loc_804A47D0:
{
    r7 = MemoryInline::FlatRead8(r8);
    r6 = MemoryInline::FlatRead8((r8 + 1));
    r8 = (r8 + 2);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r7 = (r7_rot_2 & -256);
    r6 = (r7 + r6);
    r6 = (r6 & 65535);
    goto loc_804A4824;
}

loc_804A47EC:
{
    r9 = MemoryInline::FlatRead8(r8);
    r7 = MemoryInline::FlatRead8((r8 + 1));
    r6 = MemoryInline::FlatRead8((r8 + 2));
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(24));
    r10 = (r10_rot_2 & -16777216);
    r9 = MemoryInline::FlatRead8((r8 + 3));
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(16));
    r7 = (r7_rot_3 & -65536);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r6 = (r6_rot_3 & -256);
    r8 = (r8 + 4);
    r7 = (r10 + r7);
    r6 = (r9 + r6);
    r6 = (r7 + r6);
    goto loc_804A4824;
}

loc_804A481C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804A4824:
{
}

loc_804A4828:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(2))) {
        goto loc_804A483C;
    }
}

loc_804A482C:
{
}

loc_804A4830:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(4))) {
        goto loc_804A483C;
    }
}

loc_804A4834:
{
}

loc_804A4838:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(16))) {
        goto loc_804A49A8;
    }
}

loc_804A483C:
{
    r9 = MemoryInline::FlatRead16(r5);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_804A4844:
{
    r7 = 0;
    r9 = (r9 * 18);
    r9 = (r5 + r9);
    MemoryInline::FlatWrite16((r9 + 2), static_cast<uint16_t>(r6));
    if (((cr & 0x04000000u) == 0)) {
        goto loc_804A4998;
    }
}

loc_804A4858:
{
}

loc_804A485C:
{
    r10 = (r6 + -8);
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(8))) {
        goto loc_804A4964;
    }
}

loc_804A4864:
{
    r11 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_804A487C;
    }
}

loc_804A486C:
{
    r9 = (r3 + -2);
}

loc_804A4874:
{
    if ((static_cast<int32_t>(r6) > static_cast<int32_t>(r9))) {
        goto loc_804A487C;
    }
}

loc_804A4878:
{
    r11 = 1;
}

loc_804A487C:
{
}

loc_804A4880:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_804A4964;
    }
}

loc_804A4884:
{
    r9 = (r10 + 7);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(29));
    r9 = (r9_rot_2 & 536870911);
    ctr = r9;
}

loc_804A4894:
{
    if ((static_cast<int32_t>(r10) <= static_cast<int32_t>(0))) {
        goto loc_804A4964;
    }
}

loc_804A4898:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 2u, true, false);
    r9 = MemoryInline::ReadResolved16(guest_range_0, 0u, r5);
    guest_range_1 = MemoryInline::ResolveRangeHost(r8, 0, 8u, true, false);
    r10 = MemoryInline::ReadResolved8(guest_range_1, 0u, r8);
    r9 = (r9 * 18);
    r9 = (r5 + r9);
    r9 = (r9 + r7);
    MemoryInline::FlatWrite8((r9 + 4), static_cast<uint8_t>(r10));
    r9 = MemoryInline::ReadResolved16(guest_range_0, 0u, r5);
    r10 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r8 + 1));
    r9 = (r9 * 18);
    r9 = (r5 + r9);
    r9 = (r9 + r7);
    MemoryInline::FlatWrite8((r9 + 5), static_cast<uint8_t>(r10));
    r9 = MemoryInline::ReadResolved16(guest_range_0, 0u, r5);
    r10 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r8 + 2));
    r9 = (r9 * 18);
    r9 = (r5 + r9);
    r9 = (r9 + r7);
    MemoryInline::FlatWrite8((r9 + 6), static_cast<uint8_t>(r10));
    r9 = MemoryInline::ReadResolved16(guest_range_0, 0u, r5);
    r10 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r8 + 3));
    r9 = (r9 * 18);
    r9 = (r5 + r9);
    r9 = (r9 + r7);
    MemoryInline::FlatWrite8((r9 + 7), static_cast<uint8_t>(r10));
    r9 = MemoryInline::ReadResolved16(guest_range_0, 0u, r5);
    r10 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r8 + 4));
    r9 = (r9 * 18);
    r9 = (r5 + r9);
    r9 = (r9 + r7);
    MemoryInline::FlatWrite8((r9 + 8), static_cast<uint8_t>(r10));
    r9 = MemoryInline::ReadResolved16(guest_range_0, 0u, r5);
    r10 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r8 + 5));
    r9 = (r9 * 18);
    r9 = (r5 + r9);
    r9 = (r9 + r7);
    MemoryInline::FlatWrite8((r9 + 9), static_cast<uint8_t>(r10));
    r9 = MemoryInline::ReadResolved16(guest_range_0, 0u, r5);
    r10 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r8 + 6));
    r9 = (r9 * 18);
    r9 = (r5 + r9);
    r9 = (r9 + r7);
    MemoryInline::FlatWrite8((r9 + 10), static_cast<uint8_t>(r10));
    r9 = MemoryInline::ReadResolved16(guest_range_0, 0u, r5);
    r10 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r8 + 7));
    r8 = (r8 + 8);
    r9 = (r9 * 18);
    r9 = (r5 + r9);
    r9 = (r9 + r7);
    r7 = (r7 + 8);
    MemoryInline::FlatWrite8((r9 + 11), static_cast<uint8_t>(r10));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804A4898;
    }
}

loc_804A4964:
{
    r9 = (r6 - r7);
    ctr = r9;
}

loc_804A4970:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r6))) {
        goto loc_804A4998;
    }
}

loc_804A4974:
{
    r6 = MemoryInline::FlatRead16(r5);
    r9 = MemoryInline::FlatRead8(r8);
    r8 = (r8 + 1);
    r6 = (r6 * 18);
    r6 = (r5 + r6);
    r6 = (r6 + r7);
    r7 = (r7 + 1);
    MemoryInline::FlatWrite8((r6 + 4), static_cast<uint8_t>(r9));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804A4974;
    }
}

loc_804A4998:
{
    r6 = MemoryInline::FlatRead16(r5);
    r6 = (r6 + 1);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r6));
    goto loc_804A49B0;
}

loc_804A49A8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804A49B0:
{
    r6 = (r6 & 65535);
}

loc_804A49B8:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(16))) {
        goto loc_804A49C4;
    }
}

loc_804A49BC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804A49C4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(r0));
}

loc_804A49C8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_804A4770;
    }
}

loc_804A49CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804A49D8;
    }
}

loc_804A49D0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804A49D8:
{
    r3 = r8;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804A46D8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804A46D8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FF9 gpr_write=0x00000FD9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804A46D8 func_804A46D8 preserves=true fpr_mask=0x00000000
