#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027A1FC(CpuContext* ctx);
extern "C" uint32_t func_8027A1FC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8027A230(CpuContext* ctx);
extern "C" uint64_t func_8027A230_ra58_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_8027A1FC_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_8027A1FC_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_8025ED64_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addze_src_0 = 0;
    uint32_t r0_addze_src_1 = 0;
    uint32_t r0_addze_src_2 = 0;
    uint32_t r0_addze_src_3 = 0;
    uint32_t r0_addze_src_4 = 0;
    uint32_t r0_addze_src_5 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r0_ca_5 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8025ED64;

loc_8025ED64:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8025ED80:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8025F044;
    }
}

loc_8025ED84:
{
    r3 = MemoryInline::FlatRead8((r31 + 10));
    r0 = (r3 + 250);
    r0 = (r0 & 255);
}

loc_8025ED94:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_8025F030;
    }
}

loc_8025ED98:
{
    r0 = MemoryInline::FlatRead8((r31 + 24));
}

loc_8025EDA0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8025EF94;
    }
}

loc_8025EDA4:
{
    r3 = r31;
    // inline leaf 0x8026FEA8 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    r4 = (r3 + -4);
    r3 = 2;
    r0 = (2 - r4);
    r3 = (r3 | ~r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8026FEA8
}

loc_8025EDB0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8025EF94;
    }
}

loc_8025EDB4:
{
    r3 = r31;
    r4 = 7;
    // inline leaf 0x8026A708 (13 guest instruction(s))
    r5 = 1;
    r0 = (r4 & 31);
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_1 = r0;
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_1 + r0_ca_1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 240));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x8026A708
}

loc_8025EDC4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025EF94;
    }
}

loc_8025EDC8:
{
    r0 = MemoryInline::FlatRead8((r31 + 10));
}

loc_8025EDD0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8025EEEC;
    }
}

loc_8025EDD4:
{
    r0 = MemoryInline::FlatRead16((r31 + 12));
}

loc_8025EDDC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(83))) {
        goto loc_8025EE58;
    }
}

loc_8025EDE0:
{
}

loc_8025EDE4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(20))) {
        goto loc_8025EE28;
    }
}

loc_8025EDE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(8));
}

loc_8025EDEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8025EF64;
    }
}

loc_8025EDF0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8025EE14;
    }
}

loc_8025EDF4:
{
}

loc_8025EDF8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_8025EE08;
    }
}

loc_8025EDFC:
{
}

loc_8025EE00:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1))) {
        goto loc_8025EF64;
    }
}

loc_8025EE04:
{
    goto loc_8025EEE0;
}

loc_8025EE08:
{
}

loc_8025EE0C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(6))) {
        goto loc_8025EED4;
    }
}

loc_8025EE10:
{
    goto loc_8025EEE0;
}

loc_8025EE14:
{
}

loc_8025EE18:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(17))) {
        goto loc_8025EEE0;
    }
}

loc_8025EE1C:
{
}

loc_8025EE20:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(15))) {
        goto loc_8025EF64;
    }
}

loc_8025EE24:
{
    goto loc_8025EEE0;
}

loc_8025EE28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(73));
}

loc_8025EE2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8025EF64;
    }
}

loc_8025EE30:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8025EE4C;
    }
}

loc_8025EE34:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(22));
}

loc_8025EE38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8025EEE0;
    }
}

loc_8025EE3C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8025EF64;
    }
}

loc_8025EE40:
{
}

loc_8025EE44:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(29))) {
        goto loc_8025EEE0;
    }
}

loc_8025EE48:
{
    goto loc_8025EF64;
}

loc_8025EE4C:
{
}

loc_8025EE50:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(81))) {
        goto loc_8025EF64;
    }
}

loc_8025EE54:
{
    goto loc_8025EEE0;
}

loc_8025EE58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(134));
}

loc_8025EE5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8025EF64;
    }
}

loc_8025EE60:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8025EE98;
    }
}

loc_8025EE64:
{
}

loc_8025EE68:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(102))) {
        goto loc_8025EE84;
    }
}

loc_8025EE6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(91));
}

loc_8025EE70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8025EF64;
    }
}

loc_8025EE74:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8025EEE0;
    }
}

loc_8025EE78:
{
}

loc_8025EE7C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(100))) {
        goto loc_8025EF64;
    }
}

loc_8025EE80:
{
    goto loc_8025EEE0;
}

loc_8025EE84:
{
}

loc_8025EE88:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(124))) {
        goto loc_8025EEE0;
    }
}

loc_8025EE8C:
{
}

loc_8025EE90:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(122))) {
        goto loc_8025EF64;
    }
}

loc_8025EE94:
{
    goto loc_8025EEE0;
}

loc_8025EE98:
{
}

loc_8025EE9C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(162))) {
        goto loc_8025EEC0;
    }
}

loc_8025EEA0:
{
}

loc_8025EEA4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(143))) {
        goto loc_8025EEB4;
    }
}

loc_8025EEA8:
{
}

loc_8025EEAC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(140))) {
        goto loc_8025EF64;
    }
}

loc_8025EEB0:
{
    goto loc_8025EEE0;
}

loc_8025EEB4:
{
}

loc_8025EEB8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(158))) {
        goto loc_8025EF64;
    }
}

loc_8025EEBC:
{
    goto loc_8025EEE0;
}

loc_8025EEC0:
{
}

loc_8025EEC4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(185))) {
        goto loc_8025EEE0;
    }
}

loc_8025EEC8:
{
}

loc_8025EECC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(181))) {
        goto loc_8025EF64;
    }
}

loc_8025EED0:
{
    goto loc_8025EEE0;
}

loc_8025EED4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1510), static_cast<uint8_t>(r0));
    goto loc_8025EF64;
}

loc_8025EEE0:
{
    r3 = r31;
    // inline leaf 0x8025ED54 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 1510));
    r0 = (r0 ^ 1);
    MemoryInline::FlatWrite8((r3 + 1510), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8025ED54
    goto loc_8025EF64;
}

loc_8025EEEC:
{
}

loc_8025EEF0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_8025EF64;
    }
}

loc_8025EEF4:
{
}

loc_8025EEF8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_8025EF2C;
    }
}

loc_8025EEFC:
{
    r3 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r3 + -16);
}

loc_8025EF08:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_8025EF64;
    }
}

loc_8025EF0C:
{
    r0 = (r3 + -2);
}

loc_8025EF14:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8025EF64;
    }
}

loc_8025EF18:
{
}

loc_8025EF1C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8025EF64;
    }
}

loc_8025EF20:
{
    r3 = r31;
    // inline leaf 0x8025ED54 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 1510));
    r0 = (r0 ^ 1);
    MemoryInline::FlatWrite8((r3 + 1510), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8025ED54
    goto loc_8025EF64;
}

loc_8025EF2C:
{
}

loc_8025EF30:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8025EF5C;
    }
}

loc_8025EF34:
{
    r3 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r3 + -20);
}

loc_8025EF40:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8025EF50;
    }
}

loc_8025EF44:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1510), static_cast<uint8_t>(r0));
    goto loc_8025EF64;
}

loc_8025EF50:
{
    r3 = r31;
    // inline leaf 0x8025ED54 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 1510));
    r0 = (r0 ^ 1);
    MemoryInline::FlatWrite8((r3 + 1510), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8025ED54
    goto loc_8025EF64;
}

loc_8025EF5C:
{
    r3 = r31;
    // inline leaf 0x8025ED54 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 1510));
    r0 = (r0 ^ 1);
    MemoryInline::FlatWrite8((r3 + 1510), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8025ED54
}

loc_8025EF64:
{
    r0 = MemoryInline::FlatRead8((r31 + 9));
}

loc_8025EF6C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8025EF78;
    }
}

loc_8025EF70:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1510), static_cast<uint8_t>(r0));
}

loc_8025EF78:
{
    r3 = r31;
    // inline leaf 0x8027A1F4 (2 guest instruction(s))
    r3 = 1;
    // end of inlined leaf 0x8027A1F4
}

loc_8025EF84:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8025F030;
    }
}

loc_8025EF88:
{
    r3 = r31;
    // inline leaf 0x8027A1E0 (5 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1510), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 1509), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r3 + 1512), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8027A1E0
    goto loc_8025F030;
}

loc_8025EF94:
{
    r0 = MemoryInline::FlatRead8((r31 + 24));
}

loc_8025EF9C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8025EFFC;
    }
}

loc_8025EFA0:
{
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x8025EFACu;
    if constexpr (KnownRegArgsCpuCall<0x8027A230u>(&func_8027A230)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8027A230_3662 = func_8027A230_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8027A230_3662);
        r4 = static_cast<uint32_t>(regargs_result_8027A230_3662 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027A230u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_8025EFB0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025EFD4;
    }
}

loc_8025EFB4:
{
    r3 = r31;
    r4 = 54;
    // inline leaf 0x8026A6A8 (13 guest instruction(s))
    r5 = 1;
    r0 = (r4 & 31);
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_3 = r0;
    r0_ca_3 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_3 + r0_ca_3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 224));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    // end of inlined leaf 0x8026A6A8
}

loc_8025EFC4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025F030;
    }
}

loc_8025EFC8:
{
    r3 = r31;
    // inline leaf 0x8025ED54 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 1510));
    r0 = (r0 ^ 1);
    MemoryInline::FlatWrite8((r3 + 1510), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8025ED54
    goto loc_8025F030;
}

loc_8025EFD4:
{
    r3 = r31;
    // inline leaf 0x8027A1FC (13 guest instruction(s))
}

loc_inl10_0x8027A1FC:
{
    r0 = MemoryInline::FlatRead8((r3 + 10));
}

loc_inl10_0x8027A204:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl10_0x8027A228;
    }
}

loc_inl10_0x8027A208:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r3 + -68);
}

loc_inl10_0x8027A214:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl10_0x8027A220;
    }
}

loc_inl10_0x8027A218:
{
}

loc_inl10_0x8027A21C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(71))) {
        goto loc_inl10_0x8027A228;
    }
}

loc_inl10_0x8027A220:
{
    r3 = 1;
    goto loc_inl10_cont_8027A1FC;
}

loc_inl10_0x8027A228:
{
    r3 = 0;
}

loc_inl10_cont_8027A1FC:
{
    // end of inlined leaf 0x8027A1FC
}

loc_8025EFE0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025EFF0;
    }
}

loc_8025EFE4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 1510), static_cast<uint8_t>(r0));
    goto loc_8025F030;
}

loc_8025EFF0:
{
    r3 = r31;
    // inline leaf 0x8027A1E0 (5 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1510), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 1509), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r3 + 1512), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8027A1E0
    goto loc_8025F030;
}

loc_8025EFFC:
{
    r3 = r31;
    // inline leaf 0x8026FEA8 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    r4 = (r3 + -4);
    r3 = 2;
    r0 = (2 - r4);
    r3 = (r3 | ~r4);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_5 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
    // end of inlined leaf 0x8026FEA8
}

loc_8025F008:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8025F030;
    }
}

loc_8025F00C:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x8027A1FCu) && KnownTranslatedCpuCall<0x8027A1FCu>::kAvailable && !KnownTranslatedCpuCall<0x8027A1FCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8027A1FCu>()) {
        const auto state_free_result_8027A1FC_4B59 = func_8027A1FC_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_8027A1FC_4B59);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027A1FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8025F018:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025F028;
    }
}

loc_8025F01C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 1510), static_cast<uint8_t>(r0));
    goto loc_8025F030;
}

loc_8025F028:
{
    r3 = r31;
    // inline leaf 0x8027A1E0 (5 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1510), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 1509), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r3 + 1512), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8027A1E0
}

loc_8025F030:
{
    r0 = MemoryInline::FlatRead8((r31 + 1510));
}

loc_8025F038:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8025F044;
    }
}

loc_8025F03C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1509), static_cast<uint8_t>(r0));
}

loc_8025F044:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8025ED64(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8025ED64_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0xC000000F fpr_write=0xC000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8025ED64 func_8025ED64 preserves=true fpr_mask=0x00000000
