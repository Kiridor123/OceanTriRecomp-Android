#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804A49E0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804A49E0u);
    goto loc_804A49E0;

loc_804A49E0:
{
    r0 = 0;
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 5u, true, false);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 0u, r3);
    r0 = (static_cast<int32_t>(r6) >> 3);
    r6 = (r6 & 7);
}

loc_804A49F8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(6))) {
        goto loc_804A4A04;
    }
}

loc_804A49FC:
{
    r3 = (r3 + 1);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804A4A04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(6));
}

loc_804A4A08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804A4A34;
    }
}

loc_804A4A0C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804A4A1C;
    }
}

loc_804A4A10:
{
}

loc_804A4A14:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(5))) {
        goto loc_804A4A28;
    }
}

loc_804A4A18:
{
    goto loc_804A4A80;
}

loc_804A4A1C:
{
}

loc_804A4A20:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(8))) {
        goto loc_804A4A80;
    }
}

loc_804A4A24:
{
    goto loc_804A4A50;
}

loc_804A4A28:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
    r6 = (r3 + 2);
    goto loc_804A4A88;
}

loc_804A4A34:
{
    r7 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
    r6 = (r3 + 3);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 2));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r3 = (r3_rot_1 & -256);
    r0 = (r3 + r0);
    r0 = (r0 & 65535);
    goto loc_804A4A88;
}

loc_804A4A50:
{
    r8 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
    r6 = (r3 + 5);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 2));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 3));
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(24));
    r8 = (r8_rot_1 & -16777216);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 4));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(16));
    r7 = (r7_rot_1 & -65536);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & -256);
    r3 = (r7 + r3);
    r0 = (r8 + r0);
    r0 = (r3 + r0);
    goto loc_804A4A88;
}

loc_804A4A80:
{
    r3 = (r3 + 1);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804A4A88:
{
}

loc_804A4A8C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r4))) {
        goto loc_804A4A98;
    }
}

loc_804A4A90:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804A4A98:
{
    r0 = (r6 + r0);
    goto loc_804A4C20;
}

loc_804A4AA0:
{
    r4 = MemoryInline::FlatRead8(r6);
    r6 = (r6 + 1);
    r3 = (static_cast<int32_t>(r4) >> 3);
    r4 = (r4 & 7);
}

loc_804A4AB4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_804A4AC0;
    }
}

loc_804A4AB8:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804A4AC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(5));
}

loc_804A4AC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804A4B04;
    }
}

loc_804A4AC8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804A4AE4;
    }
}

loc_804A4ACC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_804A4AD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804A4AFC;
    }
}

loc_804A4AD4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804A4B5C;
    }
}

loc_804A4AD8:
{
}

loc_804A4ADC:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(1))) {
        goto loc_804A4AF4;
    }
}

loc_804A4AE0:
{
    goto loc_804A4B5C;
}

loc_804A4AE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(7));
}

loc_804A4AE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804A4B2C;
    }
}

loc_804A4AEC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804A4B5C;
    }
}

loc_804A4AF0:
{
    goto loc_804A4B10;
}

loc_804A4AF4:
{
    r3 = 2;
    goto loc_804A4B64;
}

loc_804A4AFC:
{
    r3 = 4;
    goto loc_804A4B64;
}

loc_804A4B04:
{
    r3 = MemoryInline::FlatRead8(r6);
    r6 = (r6 + 1);
    goto loc_804A4B64;
}

loc_804A4B10:
{
    r4 = MemoryInline::FlatRead8(r6);
    r3 = MemoryInline::FlatRead8((r6 + 1));
    r6 = (r6 + 2);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r4 = (r4_rot_2 & -256);
    r3 = (r4 + r3);
    r3 = (r3 & 65535);
    goto loc_804A4B64;
}

loc_804A4B2C:
{
    r7 = MemoryInline::FlatRead8(r6);
    r4 = MemoryInline::FlatRead8((r6 + 1));
    r3 = MemoryInline::FlatRead8((r6 + 2));
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r8 = (r8_rot_4 & -16777216);
    r7 = MemoryInline::FlatRead8((r6 + 3));
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r4 = (r4_rot_3 & -65536);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_4 & -256);
    r6 = (r6 + 4);
    r4 = (r8 + r4);
    r3 = (r7 + r3);
    r3 = (r4 + r3);
    goto loc_804A4B64;
}

loc_804A4B5C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804A4B64:
{
}

loc_804A4B68:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(2))) {
        goto loc_804A4BA8;
    }
}

loc_804A4B6C:
{
    r7 = MemoryInline::FlatRead8(r6);
    r3 = MemoryInline::FlatRead16(r5);
    r4 = MemoryInline::FlatRead8((r6 + 1));
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r7 = (r7_rot_4 & -256);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_6 & -4);
    r6 = (r6 + 2);
    r4 = (r7 + r4);
    r3 = (r5 + r3);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r4));
    r3 = MemoryInline::FlatRead16(r5);
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_7 & -4);
    r4 = (r5 + r3);
    r3 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r3));
    goto loc_804A4C00;
}

loc_804A4BA8:
{
}

loc_804A4BAC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(4))) {
        goto loc_804A4BF8;
    }
}

loc_804A4BB0:
{
    r7 = MemoryInline::FlatRead8(r6);
    r3 = MemoryInline::FlatRead16(r5);
    r4 = MemoryInline::FlatRead8((r6 + 1));
    r7_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r7 = (r7_rot_5 & -256);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_8 & -4);
    r4 = (r7 + r4);
    r3 = (r5 + r3);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r4));
    r7 = MemoryInline::FlatRead8((r6 + 2));
    r3 = MemoryInline::FlatRead16(r5);
    r4 = MemoryInline::FlatRead8((r6 + 3));
    r7_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r7 = (r7_rot_6 & -256);
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_9 & -4);
    r6 = (r6 + 4);
    r4 = (r7 + r4);
    r3 = (r5 + r3);
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r4));
    goto loc_804A4C00;
}

loc_804A4BF8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804A4C00:
{
    r3 = MemoryInline::FlatRead16(r5);
    r4 = (r3 + 1);
    r3 = (r4 & 65535);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r4));
}

loc_804A4C14:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(16))) {
        goto loc_804A4C20;
    }
}

loc_804A4C18:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804A4C20:
{
}

loc_804A4C24:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r0))) {
        goto loc_804A4AA0;
    }
}

loc_804A4C28:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804A49E0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804A49E0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001D9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804A49E0 func_804A49E0 preserves=true fpr_mask=0x00000000
