#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80473C60_ra38_1fe_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_lfdx_80473D40_loc_0 = 0;
    uint32_t addr_lfdx_80473D58_loc_0 = 0;
    uint32_t addr_lfdx_80473D7C_loc_0 = 0;
    uint32_t addr_lfdx_80473D88_loc_0 = 0;
    uint32_t addr_lfdx_80473DC4_loc_0 = 0;
    uint32_t addr_lfdx_80473DD4_loc_0 = 0;
    uint32_t addr_lfdx_80473DE4_loc_0 = 0;
    uint32_t addr_lfdx_80473DF8_loc_0 = 0;
    uint32_t addr_lfdx_80473E40_loc_0 = 0;
    uint32_t addr_lfdx_80473F2C_loc_0 = 0;
    uint32_t addr_lfdx_80473F74_loc_0 = 0;
    uint32_t addr_lfdx_80473FA8_loc_0 = 0;
    uint32_t addr_lfdx_80473FC0_loc_0 = 0;
    uint32_t addr_lfdx_80473FD8_loc_0 = 0;
    uint32_t addr_lfdx_80473FF0_loc_0 = 0;
    uint32_t addr_lfdx_80474008_loc_0 = 0;
    uint32_t addr_lfdx_80474020_loc_0 = 0;
    uint32_t addr_lfdx_80474064_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_10 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r12_rot_5 = 0;
    uint32_t r12_rot_6 = 0;
    uint32_t r12_rot_7 = 0;
    uint32_t r12_rot_8 = 0;
    uint32_t r12_rot_9 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_10 = 0;
    uint32_t r27_rot_11 = 0;
    uint32_t r27_rot_12 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r27_rot_3 = 0;
    uint32_t r27_rot_4 = 0;
    uint32_t r27_rot_5 = 0;
    uint32_t r27_rot_6 = 0;
    uint32_t r27_rot_7 = 0;
    uint32_t r27_rot_8 = 0;
    uint32_t r27_rot_9 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_10 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r28_rot_3 = 0;
    uint32_t r28_rot_4 = 0;
    uint32_t r28_rot_5 = 0;
    uint32_t r28_rot_6 = 0;
    uint32_t r28_rot_7 = 0;
    uint32_t r28_rot_8 = 0;
    uint32_t r28_rot_9 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r29_rot_3 = 0;
    uint32_t r29_rot_4 = 0;
    uint32_t r29_rot_5 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r30_rot_3 = 0;
    uint32_t r30_rot_4 = 0;
    uint32_t r30_rot_5 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r31_rot_3 = 0;
    uint32_t r31_rot_4 = 0;
    uint32_t r31_rot_5 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f9 = ctx->fpr[9];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80473C60u);
    goto loc_80473C60;

loc_80473C60:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    f2.d = MemoryInline::FlatReadFloat64(r3);
    r8 = (r4 + 8);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -2832));
    r6 = (r3 + 8);
    MemoryInline::FlatWriteFloat64(r5, f1.d);
    r7 = (r5 + 8);
    f0.d = MemoryInline::FlatReadFloat64((r2 + -2864));
    r11 = 1;
    r4 = 0x80000000u;
}

loc_80473C98:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r11), static_cast<int32_t>(1));
}

loc_80473C9C:
{
    f9.d = MemoryInline::FlatReadFloat64((r2 + -2864));
    r10 = 1;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_80473E54;
    }
}

loc_80473CA8:
{
    r0 = (r11 + -1);
    r12 = (r11 + -8);
}

loc_80473CB4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_80473E18;
    }
}

loc_80473CB8:
{
    r9 = 0;
    r27 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80473CD4;
    }
}

loc_80473CC4:
{
    r0 = (r4 + -2);
}

loc_80473CCC:
{
    if ((static_cast<int32_t>(r11) > static_cast<int32_t>(r0))) {
        goto loc_80473CD4;
    }
}

loc_80473CD0:
{
    r27 = 1;
}

loc_80473CD4:
{
}

loc_80473CD8:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80473D10;
    }
}

loc_80473CDC:
{
    r28 = (r11 & -2147483648);
    r27 = 1;
    r0 = (r28 + -2147483648);
}

loc_80473CEC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_80473D04;
    }
}

loc_80473CF0:
{
    r0 = (r11 + -1);
    r0 = (r0 & -2147483648);
}

loc_80473CFC:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(r0))) {
        goto loc_80473D04;
    }
}

loc_80473D00:
{
    r27 = 0;
}

loc_80473D04:
{
}

loc_80473D08:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80473D10;
    }
}

loc_80473D0C:
{
    r9 = 1;
}

loc_80473D10:
{
}

loc_80473D14:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_80473E18;
    }
}

loc_80473D18:
{
    r0 = (r12 + 6);
    r9 = (r5 + 8);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_2 & 536870911);
    ctr = r0;
}

loc_80473D2C:
{
    if ((static_cast<int32_t>(r12) <= static_cast<int32_t>(1))) {
        goto loc_80473E18;
    }
}

loc_80473D30:
{
    r0 = (r11 - r10);
    r12 = (r10 + 1);
    r27_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r27 = (r27_rot_3 & -8);
    guest_range_0 = MemoryInline::ResolveRangeHost(r9, 0, 64u, true, false);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 0u, r9);
    addr_lfdx_80473D40_loc_0 = (r3 + r27);
    f3.d = MemoryInline::FlatReadFloat64(addr_lfdx_80473D40_loc_0);
    r12 = (r11 - r12);
    r27_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(3));
    r27 = (r27_rot_4 & -8);
    r0 = (r10 + 2);
    f5.d = (f4.d * f3.d);
    r12 = (r11 - r0);
    addr_lfdx_80473D58_loc_0 = (r3 + r27);
    f3.d = MemoryInline::FlatReadFloat64(addr_lfdx_80473D58_loc_0);
    r27_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(3));
    r27 = (r27_rot_5 & -8);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r9 + 8));
    r0 = (r10 + 3);
    f6.d = (f4.d * f3.d);
    r12 = (r11 - r0);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 16u, (r9 + 16));
    r12_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(3));
    r12 = (r12_rot_3 & -8);
    f9.d = (f9.d + f5.d);
    addr_lfdx_80473D7C_loc_0 = (r3 + r27);
    f3.d = MemoryInline::FlatReadFloat64(addr_lfdx_80473D7C_loc_0);
    f5.d = (f4.d * f3.d);
    r0 = (r10 + 4);
    addr_lfdx_80473D88_loc_0 = (r3 + r12);
    f3.d = MemoryInline::FlatReadFloat64(addr_lfdx_80473D88_loc_0);
    r0 = (r11 - r0);
    f9.d = (f9.d + f6.d);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 24u, (r9 + 24));
    r28_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r28 = (r28_rot_3 & -8);
    f4.d = (f4.d * f3.d);
    r0 = (r10 + 5);
    r12 = (r10 + 6);
    f9.d = (f9.d + f5.d);
    r0 = (r11 - r0);
    r27_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r27 = (r27_rot_6 & -8);
    r0 = (r10 + 7);
    f9.d = (f9.d + f4.d);
    r12 = (r11 - r12);
    f5.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 32u, (r9 + 32));
    addr_lfdx_80473DC4_loc_0 = (r3 + r28);
    f3.d = MemoryInline::FlatReadFloat64(addr_lfdx_80473DC4_loc_0);
    r0 = (r11 - r0);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 40u, (r9 + 40));
    f8.d = (f5.d * f3.d);
    addr_lfdx_80473DD4_loc_0 = (r3 + r27);
    f3.d = MemoryInline::FlatReadFloat64(addr_lfdx_80473DD4_loc_0);
    r12_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(3));
    r12 = (r12_rot_4 & -8);
    f6.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 48u, (r9 + 48));
    f7.d = (f4.d * f3.d);
    addr_lfdx_80473DE4_loc_0 = (r3 + r12);
    f5.d = MemoryInline::FlatReadFloat64(addr_lfdx_80473DE4_loc_0);
    f9.d = (f9.d + f8.d);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_4 & -8);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 56u, (r9 + 56));
    f5.d = (f6.d * f5.d);
    addr_lfdx_80473DF8_loc_0 = (r3 + r0);
    f3.d = MemoryInline::FlatReadFloat64(addr_lfdx_80473DF8_loc_0);
    r10 = (r10 + 8);
    f9.d = (f9.d + f7.d);
    r9 = (r9 + 64);
    f3.d = (f4.d * f3.d);
    f9.d = (f9.d + f5.d);
    f9.d = (f9.d + f3.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80473D30;
    }
}

loc_80473E18:
{
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(3));
    r9 = (r9_rot_2 & -8);
    r0 = (r11 - r10);
    r9 = (r5 + r9);
    ctr = r0;
}

loc_80473E2C:
{
    if ((static_cast<int32_t>(r10) >= static_cast<int32_t>(r11))) {
        goto loc_80473E54;
    }
}

loc_80473E30:
{
    r0 = (r11 - r10);
    f4.d = MemoryInline::FlatReadFloat64(r9);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_7 & -8);
    r9 = (r9 + 8);
    addr_lfdx_80473E40_loc_0 = (r3 + r0);
    f3.d = MemoryInline::FlatReadFloat64(addr_lfdx_80473E40_loc_0);
    r10 = (r10 + 1);
    f3.d = (f4.d * f3.d);
    f9.d = (f9.d + f3.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80473E30;
    }
}

loc_80473E54:
{
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80473E58:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80473E74;
    }
}

loc_80473E5C:
{
    f3.d = MemoryInline::FlatReadFloat64(r6);
    f3.d = (f9.d + f3.d);
    f3.d = (-(f3.d));
    f3.d = (f3.d / f2.d);
    MemoryInline::FlatWriteFloat64(r7, f3.d);
    goto loc_80473E78;
}

loc_80473E74:
{
    MemoryInline::FlatWriteFloat64(r7, f0.d);
}

loc_80473E78:
{
    f3.d = MemoryInline::FlatReadFloat64(r7);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r11), static_cast<int32_t>(1));
}

loc_80473E80:
{
    MemoryInline::FlatWriteFloat64(r8, f3.d);
    r10 = 1;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_80474080;
    }
}

loc_80473E8C:
{
    r0 = (r11 + -1);
    r12 = (r11 + -8);
}

loc_80473E98:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_8047403C;
    }
}

loc_80473E9C:
{
    r9 = 0;
    r27 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80473EB8;
    }
}

loc_80473EA8:
{
    r0 = (r4 + -2);
}

loc_80473EB0:
{
    if ((static_cast<int32_t>(r11) > static_cast<int32_t>(r0))) {
        goto loc_80473EB8;
    }
}

loc_80473EB4:
{
    r27 = 1;
}

loc_80473EB8:
{
}

loc_80473EBC:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80473EF4;
    }
}

loc_80473EC0:
{
    r28 = (r11 & -2147483648);
    r27 = 1;
    r0 = (r28 + -2147483648);
}

loc_80473ED0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_80473EE8;
    }
}

loc_80473ED4:
{
    r0 = (r11 + -1);
    r0 = (r0 & -2147483648);
}

loc_80473EE0:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(r0))) {
        goto loc_80473EE8;
    }
}

loc_80473EE4:
{
    r27 = 0;
}

loc_80473EE8:
{
}

loc_80473EEC:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80473EF4;
    }
}

loc_80473EF0:
{
    r9 = 1;
}

loc_80473EF4:
{
}

loc_80473EF8:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_8047403C;
    }
}

loc_80473EFC:
{
    r0 = (r12 + 6);
    r9 = (r5 + 8);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_9 & 536870911);
    ctr = r0;
}

loc_80473F10:
{
    if ((static_cast<int32_t>(r12) <= static_cast<int32_t>(1))) {
        goto loc_8047403C;
    }
}

loc_80473F14:
{
    r0 = (r11 - r10);
    r12 = (r10 + 1);
    r28_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r28 = (r28_rot_7 & -8);
    r31 = (r10 + 5);
    guest_range_1 = MemoryInline::ResolveRangeHost(r7, 0, 8u, true, false);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 0u, r7);
    r27 = (r11 - r12);
    addr_lfdx_80473F2C_loc_0 = (r5 + r28);
    f3.d = MemoryInline::FlatReadFloat64(addr_lfdx_80473F2C_loc_0);
    r0 = (r10 + 2);
    r28 = (r11 - r0);
    r12 = (r10 + 3);
    f4.d = (f4.d * f3.d);
    r29 = (r11 - r12);
    f3.d = MemoryInline::FlatReadFloat64(r9);
    r0 = (r10 + 4);
    r30 = (r11 - r0);
    r31 = (r11 - r31);
    f3.d = (f3.d + f4.d);
    r12 = (r10 + 6);
    r27_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(3));
    r27 = (r27_rot_10 & -8);
    r0 = (r10 + 7);
    MemoryInline::FlatWriteFloat64(r9, f3.d);
    r12 = (r11 - r12);
    f5.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 0u, r7);
    r0 = (r11 - r0);
    addr_lfdx_80473F74_loc_0 = (r5 + r27);
    f4.d = MemoryInline::FlatReadFloat64(addr_lfdx_80473F74_loc_0);
    r28_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(3));
    r28 = (r28_rot_8 & -8);
    f3.d = MemoryInline::FlatReadFloat64((r9 + 8));
    r29_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(3));
    r29 = (r29_rot_3 & -8);
    f4.d = (f5.d * f4.d);
    r30_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(3));
    r30 = (r30_rot_3 & -8);
    r31_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(3));
    r31 = (r31_rot_3 & -8);
    r12_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(3));
    r12 = (r12_rot_8 & -8);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_11 & -8);
    r10 = (r10 + 8);
    f3.d = (f3.d + f4.d);
    MemoryInline::FlatWriteFloat64((r9 + 8), f3.d);
    f5.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 0u, r7);
    addr_lfdx_80473FA8_loc_0 = (r5 + r28);
    f4.d = MemoryInline::FlatReadFloat64(addr_lfdx_80473FA8_loc_0);
    f3.d = MemoryInline::FlatReadFloat64((r9 + 16));
    f4.d = (f5.d * f4.d);
    f3.d = (f3.d + f4.d);
    MemoryInline::FlatWriteFloat64((r9 + 16), f3.d);
    f5.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 0u, r7);
    addr_lfdx_80473FC0_loc_0 = (r5 + r29);
    f4.d = MemoryInline::FlatReadFloat64(addr_lfdx_80473FC0_loc_0);
    f3.d = MemoryInline::FlatReadFloat64((r9 + 24));
    f4.d = (f5.d * f4.d);
    f3.d = (f3.d + f4.d);
    MemoryInline::FlatWriteFloat64((r9 + 24), f3.d);
    f5.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 0u, r7);
    addr_lfdx_80473FD8_loc_0 = (r5 + r30);
    f4.d = MemoryInline::FlatReadFloat64(addr_lfdx_80473FD8_loc_0);
    f3.d = MemoryInline::FlatReadFloat64((r9 + 32));
    f4.d = (f5.d * f4.d);
    f3.d = (f3.d + f4.d);
    MemoryInline::FlatWriteFloat64((r9 + 32), f3.d);
    f5.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 0u, r7);
    addr_lfdx_80473FF0_loc_0 = (r5 + r31);
    f4.d = MemoryInline::FlatReadFloat64(addr_lfdx_80473FF0_loc_0);
    f3.d = MemoryInline::FlatReadFloat64((r9 + 40));
    f4.d = (f5.d * f4.d);
    f3.d = (f3.d + f4.d);
    MemoryInline::FlatWriteFloat64((r9 + 40), f3.d);
    f5.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 0u, r7);
    addr_lfdx_80474008_loc_0 = (r5 + r12);
    f4.d = MemoryInline::FlatReadFloat64(addr_lfdx_80474008_loc_0);
    f3.d = MemoryInline::FlatReadFloat64((r9 + 48));
    f4.d = (f5.d * f4.d);
    f3.d = (f3.d + f4.d);
    MemoryInline::FlatWriteFloat64((r9 + 48), f3.d);
    f5.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 0u, r7);
    addr_lfdx_80474020_loc_0 = (r5 + r0);
    f4.d = MemoryInline::FlatReadFloat64(addr_lfdx_80474020_loc_0);
    f3.d = MemoryInline::FlatReadFloat64((r9 + 56));
    f4.d = (f5.d * f4.d);
    f3.d = (f3.d + f4.d);
    MemoryInline::FlatWriteFloat64((r9 + 56), f3.d);
    r9 = (r9 + 64);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80473F14;
    }
}

loc_8047403C:
{
    r9_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(3));
    r9 = (r9_rot_4 & -8);
    r0 = (r11 - r10);
    r9 = (r5 + r9);
    ctr = r0;
}

loc_80474050:
{
    if ((static_cast<int32_t>(r10) >= static_cast<int32_t>(r11))) {
        goto loc_80474080;
    }
}

loc_80474054:
{
    r0 = (r11 - r10);
    f5.d = MemoryInline::FlatReadFloat64(r7);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_14 & -8);
    f3.d = MemoryInline::FlatReadFloat64(r9);
    addr_lfdx_80474064_loc_0 = (r5 + r0);
    f4.d = MemoryInline::FlatReadFloat64(addr_lfdx_80474064_loc_0);
    r10 = (r10 + 1);
    f4.d = (f5.d * f4.d);
    f3.d = (f3.d + f4.d);
    MemoryInline::FlatWriteFloat64(r9, f3.d);
    r9 = (r9 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80474054;
    }
}

loc_80474080:
{
    f3.d = MemoryInline::FlatReadFloat64(r7);
    r11 = (r11 + 1);
}

loc_8047408C:
{
    r6 = (r6 + 8);
    f3.d = (f3.d * f3.d);
    r7 = (r7 + 8);
    r8 = (r8 + 8);
    f3.d = (f1.d - f3.d);
    f2.d = (f2.d * f3.d);
    if ((static_cast<int32_t>(r11) <= static_cast<int32_t>(2))) {
        goto loc_80473C98;
    }
}

loc_804740A8:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return r4;
}

}

extern "C" void func_80473C60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80473C60_ra38_1fe_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFF gpr_write=0x00001FD3 gpr_return=0x00000010 fpr_read=0x000003FF fpr_write=0x000003FF fpr_return=0x00000002 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80473C60 func_80473C60 preserves=true fpr_mask=0x00000000
