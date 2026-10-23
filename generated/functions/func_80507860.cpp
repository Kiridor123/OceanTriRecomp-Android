#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80507860_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r10_addr_0 = 0;
    uint32_t r10_addr_1 = 0;
    uint32_t r10_addr_10 = 0;
    uint32_t r10_addr_2 = 0;
    uint32_t r10_addr_3 = 0;
    uint32_t r10_addr_4 = 0;
    uint32_t r10_addr_5 = 0;
    uint32_t r10_addr_6 = 0;
    uint32_t r10_addr_7 = 0;
    uint32_t r10_addr_8 = 0;
    uint32_t r10_addr_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r7_ca_0 = 0;
    uint32_t r7_ca_1 = 0;
    uint32_t r7_ca_2 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;

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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80507860;

loc_80507860:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = (r4 & 3);
}

loc_80507868:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80507880;
    }
}

loc_80507878:
{
    r3 = -1;
    goto loc_80507A24;
}

loc_80507880:
{
    r8 = r3;
    r7 = 0;
    ctr = r4;
}

loc_80507890:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_805078B0;
    }
}

loc_80507894:
{
    // nop
}

loc_80507898:
{
    r0 = MemoryInline::FlatRead8(r8);
}

loc_805078A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(42))) {
        goto loc_805078A8;
    }
}

loc_805078A4:
{
    r7 = (r7 + 6);
}

loc_805078A8:
{
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80507898;
    }
}

loc_805078B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_805078B4:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r7) >> 3);
    r7_ca_1 = (xer >> 29) & 1u;
    r7 = (r0 + r7_ca_1);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805078C8;
    }
}

loc_805078C0:
{
    r3 = r7;
    goto loc_80507A24;
}

loc_805078C8:
{
}

loc_805078CC:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r7))) {
        goto loc_805078D8;
    }
}

loc_805078D0:
{
    r3 = -1;
    goto loc_80507A24;
}

loc_805078D8:
{
}

loc_805078DC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_805078E8;
    }
}

loc_805078E0:
{
    r3 = 0;
    goto loc_80507A24;
}

loc_805078E8:
{
    r4 = r5;
    r10 = (r1 + 8);
    r11 = 0;
    r12 = 63;
    r31 = 62;
    r0 = 4;
}

loc_80507900:
{
    r9 = 0;
    ctr = r0;
}

loc_80507908:
{
    r3_addr_3 = (r3 + r9);
    r8 = MemoryInline::FlatRead8(r3_addr_3);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
}

loc_80507914:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(58))) {
        goto loc_8050793C;
    }
}

loc_80507918:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(46));
}

loc_8050791C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80507988;
    }
}

loc_80507920:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80507930;
    }
}

loc_80507924:
{
}

loc_80507928:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(45))) {
        goto loc_80507990;
    }
}

loc_8050792C:
{
    goto loc_80507998;
}

loc_80507930:
{
}

loc_80507934:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(48))) {
        goto loc_8050797C;
    }
}

loc_80507938:
{
    goto loc_80507998;
}

loc_8050793C:
{
}

loc_80507940:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(97))) {
        goto loc_80507958;
    }
}

loc_80507944:
{
}

loc_80507948:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(91))) {
        goto loc_80507998;
    }
}

loc_8050794C:
{
}

loc_80507950:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(65))) {
        goto loc_80507964;
    }
}

loc_80507954:
{
    goto loc_80507998;
}

loc_80507958:
{
}

loc_8050795C:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(123))) {
        goto loc_80507998;
    }
}

loc_80507960:
{
    goto loc_80507970;
}

loc_80507964:
{
    r6 = (r8 + -65);
    r10_addr_6 = (r10 + r9);
    MemoryInline::FlatWrite8(r10_addr_6, static_cast<uint8_t>(r6));
    goto loc_8050799C;
}

loc_80507970:
{
    r6 = (r8 + -71);
    r10_addr_7 = (r10 + r9);
    MemoryInline::FlatWrite8(r10_addr_7, static_cast<uint8_t>(r6));
    goto loc_8050799C;
}

loc_8050797C:
{
    r6 = (r8 + 4);
    r10_addr_4 = (r10 + r9);
    MemoryInline::FlatWrite8(r10_addr_4, static_cast<uint8_t>(r6));
    goto loc_8050799C;
}

loc_80507988:
{
    r10_addr_5 = (r10 + r9);
    MemoryInline::FlatWrite8(r10_addr_5, static_cast<uint8_t>(r31));
    goto loc_8050799C;
}

loc_80507990:
{
    r10_addr_3 = (r10 + r9);
    MemoryInline::FlatWrite8(r10_addr_3, static_cast<uint8_t>(r12));
    goto loc_8050799C;
}

loc_80507998:
{
    r10_addr_8 = (r10 + r9);
    MemoryInline::FlatWrite8(r10_addr_8, static_cast<uint8_t>(r11));
}

loc_8050799C:
{
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80507908;
    }
}

loc_805079A4:
{
    r8 = MemoryInline::FlatRead8((r1 + 9));
    r6 = (r4 + 1);
    r9 = MemoryInline::FlatRead8((r1 + 8));
    r29 = (r6 - r5);
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
    r3 = (r3 + 4);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r7));
}

loc_805079C4:
{
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r9 = (r9_rot_2 & -4);
    r6 = (static_cast<int32_t>(r8) >> 4);
    r6 = (r9 | r6);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r6));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80507A20;
    }
}

loc_805079D8:
{
    r30 = MemoryInline::FlatRead8((r1 + 10));
    r6 = (r4 + 2);
    r29 = (r6 - r5);
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(4));
    r9 = (r9_rot_3 & -16);
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r6 = (static_cast<int32_t>(r8) >> 2);
}

loc_805079F4:
{
    r6 = (r9 | r6);
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r6));
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(r7))) {
        goto loc_80507A20;
    }
}

loc_80507A00:
{
    r6 = MemoryInline::FlatRead8((r1 + 11));
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(6));
    r8 = (r8_rot_2 & -64);
    r6 = (r8 | r6);
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r6));
    r4 = (r4 + 3);
    r29 = (r4 - r5);
}

loc_80507A1C:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r7))) {
        goto loc_80507900;
    }
}

loc_80507A20:
{
    r3 = r29;
}

loc_80507A24:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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

extern "C" void func_80507860(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80507860_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FDB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80507860 func_80507860 preserves=true fpr_mask=0x00000000
