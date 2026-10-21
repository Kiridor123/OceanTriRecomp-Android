#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804E1CD0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_lfdx_804E1F14_loc_0 = 0;
    uint32_t addr_lfsx_804E1F0C_loc_0 = 0;
    uint32_t addr_lfsx_804E1F1C_loc_0 = 0;
    uint32_t addr_lfsx_804E1F2C_loc_0 = 0;
    uint32_t addr_lfsx_804E1F40_loc_0 = 0;
    uint32_t addr_lfsx_804E1F78_loc_0 = 0;
    uint32_t addr_lfsx_804E1F80_loc_0 = 0;
    uint32_t addr_lfsx_804E1F98_loc_0 = 0;
    uint32_t addr_lfsx_804E1FBC_loc_0 = 0;
    uint32_t addr_stfsx_804E1E38_loc_0 = 0;
    uint32_t addr_stfsx_804E1E80_loc_0 = 0;
    uint32_t addr_stfsx_804E1E98_loc_0 = 0;
    uint32_t addr_stfsx_804E1EB4_loc_0 = 0;
    uint32_t addr_stfsx_804E1ECC_loc_0 = 0;
    uint32_t addr_stfsx_804E1EDC_loc_0 = 0;
    uint32_t addr_stfsx_804E1EE4_loc_0 = 0;
    uint32_t addr_stfsx_804E1EEC_loc_0 = 0;
    uint32_t addr_stfsx_804E1F6C_loc_0 = 0;
    uint32_t addr_stfsx_804E1FA8_loc_0 = 0;
    uint32_t addr_stfsx_804E1FDC_loc_0 = 0;
    uint32_t addr_stfsx_804E1FFC_loc_0 = 0;
    uint32_t addr_stfsx_804E2010_loc_0 = 0;
    uint32_t addr_stfsx_804E201C_loc_0 = 0;
    uint32_t addr_stfsx_804E2024_loc_0 = 0;
    uint32_t addr_stfsx_804E202C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    double leaf_stack_saved_f30_entry = 0.0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r23_rot_0 = 0;
    uint32_t r23_rot_1 = 0;
    uint32_t r23_rot_2 = 0;
    uint32_t r24_rot_0 = 0;
    uint32_t r24_rot_1 = 0;
    uint32_t r24_rot_2 = 0;
    uint32_t r24_rot_3 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t r25_rot_1 = 0;
    uint32_t r25_rot_2 = 0;
    uint32_t r25_rot_3 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r26_rot_3 = 0;
    uint32_t r26_rot_4 = 0;
    uint32_t r26_rot_5 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r28_rot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r9_addr_0 = 0;
    uint32_t r9_addr_1 = 0;
    uint32_t r9_addr_2 = 0;
    uint32_t r9_addr_3 = 0;
    uint32_t stackword11 = 0;
    uint32_t stackword12 = 0;
    uint32_t stackword13 = 0;
    uint32_t stackword14 = 0;
    uint32_t stackword15 = 0;
    uint32_t stackword16 = 0;
    uint32_t stackword17 = 0;
    uint32_t stackword18 = 0;
    uint32_t stackword19 = 0;
    uint32_t stackword20 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
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
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x804E1CD0u);
    goto loc_804E1CD0;

loc_804E1CD0:
{
    leaf_stack_saved_f30_entry = f30.d;
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -352), r1);
    r1 = (r1 + -352);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 356), r0);
    r11 = (r1 + 320);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    guest_range_1 = MemoryInline::ResolveRangeHost((r13 + -14716), 0, 4u, true, false);
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -14716));
    r4 = 0x80570000u;
    r3 = (r4 + 17352);
    r10 = 1127219200;
    r6 = MemoryInline::FlatRead32((r8 + 1692));
    r9 = 0x80570000u;
    stackword11 = r10;
    MemoryInline::FlatWriteRam32((r1 + 264), r10);
    r9 = (r9 + 17272);
    r0 = MemoryInline::FlatRead8(r6);
    r5 = (r6 + 2);
    r6 = MemoryInline::FlatRead8((r6 + 1));
    r7 = (r1 + 8);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r6_mrot_0 = (r6_rot_0 & 65280);
    r6_mdest_0 = (r6 & -65281);
    r6 = (r6_mdest_0 | r6_mrot_0);
    stackword12 = r10;
    MemoryInline::FlatWriteRam32((r1 + 272), r10);
    r0 = (r6 + -2);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -1792));
    MemoryInline::FlatWrite32((r8 + 1692), r5);
    r11 = (r0 & 65535);
    guest_range_3 = MemoryInline::ResolveRangeHost((r4 + 17352), 0, 64u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 0u, (r4 + 17352));
    r29 = 8;
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 8u, (r3 + 8));
    r30 = 8;
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 16u, (r3 + 16));
    f13.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 24u, (r3 + 24));
    f11.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 32u, (r3 + 32));
    f9.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 40u, (r3 + 40));
    f7.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 48u, (r3 + 48));
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 56u, (r3 + 56));
    // nop
}

loc_804E1D68:
{
    r5 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -14716));
    r31 = 0;
    r4 = MemoryInline::FlatRead32((r5 + 1692));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r5 + 1692), r0);
    r12 = MemoryInline::FlatRead8(r4);
    ctr = r30;
}

loc_804E1D84:
{
    r5 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -14716));
    r0 = (r31 & 65535);
    r10 = (r9 + r0);
    r9_addr_3 = (r9 + r0);
    r4 = MemoryInline::FlatRead8(r9_addr_3);
    r6 = MemoryInline::FlatRead32((r5 + 1692));
    r31 = (r31 + 8);
    r26 = MemoryInline::FlatRead8((r10 + 5));
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r8 = (r8_rot_3 & -4);
    r0 = (r6 + 1);
    MemoryInline::FlatWrite32((r5 + 1692), r0);
    r0 = MemoryInline::FlatRead8((r10 + 1));
    r26_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r26 = (r26_rot_3 & -4);
    r5 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -14716));
    r4 = MemoryInline::FlatRead8(r6);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r6 = (r6_rot_3 & -4);
    r23 = MemoryInline::FlatRead32((r5 + 1692));
    stackword13 = r4;
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 268), 0, 12u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + 268), r4);
    r4 = (r23 + 1);
    r0 = MemoryInline::FlatRead8((r10 + 2));
    MemoryInline::FlatWrite32((r5 + 1692), r4);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r5 = (r5_rot_3 & -4);
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword11), static_cast<uint32_t>(stackword13));
    r24 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -14716));
    r0 = MemoryInline::FlatRead8(r23);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    r23 = MemoryInline::FlatRead32((r24 + 1692));
    stackword14 = r0;
    MemoryInline::WriteResolved32(guest_range_4, 8u, (r1 + 276), r0);
    r4 = (r23 + 1);
    r0 = MemoryInline::FlatRead8((r10 + 3));
    MemoryInline::FlatWrite32((r24 + 1692), r4);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r4 = (r4_rot_3 & -4);
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword12), static_cast<uint32_t>(stackword14));
    r24 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -14716));
    r0 = MemoryInline::FlatRead8(r23);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    r25 = MemoryInline::FlatRead32((r24 + 1692));
    stackword15 = r0;
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + 268), r0);
    r23 = (r25 + 1);
    r0 = MemoryInline::FlatRead8((r10 + 4));
    MemoryInline::FlatWrite32((r24 + 1692), r23);
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword11), static_cast<uint32_t>(stackword15));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r24 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -14716));
    r25 = MemoryInline::FlatRead8(r25);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    addr_stfsx_804E1E38_loc_0 = (r7 + r8);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804E1E38_loc_0, f6.d);
    r23 = MemoryInline::FlatRead32((r24 + 1692));
    stackword16 = r25;
    MemoryInline::WriteResolved32(guest_range_4, 8u, (r1 + 276), r25);
    r8 = (r23 + 1);
    MemoryInline::FlatWrite32((r24 + 1692), r8);
    r8 = MemoryInline::FlatRead8((r10 + 6));
    r24 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -14716));
    r23 = MemoryInline::FlatRead8(r23);
    r28_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r28 = (r28_rot_3 & -4);
    r27 = MemoryInline::FlatRead32((r24 + 1692));
    r8 = MemoryInline::FlatRead8((r10 + 7));
    r25 = (r27 + 1);
    MemoryInline::FlatWrite32((r24 + 1692), r25);
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword12), static_cast<uint32_t>(stackword16));
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r8 = (r8_rot_4 & -4);
    r25 = MemoryInline::FlatRead8(r27);
    r10 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -14716));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    addr_stfsx_804E1E80_loc_0 = (r7 + r6);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804E1E80_loc_0, f8.d);
    r27 = MemoryInline::FlatRead32((r10 + 1692));
    stackword17 = r23;
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + 268), r23);
    r6 = (r27 + 1);
    MemoryInline::FlatWrite32((r10 + 1692), r6);
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword11), static_cast<uint32_t>(stackword17));
    addr_stfsx_804E1E98_loc_0 = (r7 + r5);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804E1E98_loc_0, f5.d);
    r10 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -14716));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    r27 = MemoryInline::FlatRead8(r27);
    r6 = MemoryInline::FlatRead32((r10 + 1692));
    stackword18 = r25;
    MemoryInline::WriteResolved32(guest_range_4, 8u, (r1 + 276), r25);
    r5 = (r6 + 1);
    addr_stfsx_804E1EB4_loc_0 = (r7 + r4);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804E1EB4_loc_0, f6.d);
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword12), static_cast<uint32_t>(stackword18));
    MemoryInline::FlatWrite32((r10 + 1692), r5);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    stackword19 = r27;
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + 268), r27);
    r4 = MemoryInline::FlatRead8(r6);
    addr_stfsx_804E1ECC_loc_0 = (r7 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804E1ECC_loc_0, f5.d);
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword11), static_cast<uint32_t>(stackword19));
    stackword20 = r4;
    MemoryInline::WriteResolved32(guest_range_4, 8u, (r1 + 276), r4);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    addr_stfsx_804E1EDC_loc_0 = (r7 + r26);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804E1EDC_loc_0, f6.d);
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword12), static_cast<uint32_t>(stackword20));
    addr_stfsx_804E1EE4_loc_0 = (r7 + r28);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804E1EE4_loc_0, f5.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    addr_stfsx_804E1EEC_loc_0 = (r7 + r8);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804E1EEC_loc_0, f2.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804E1D84;
    }
}

loc_804E1EF4:
{
    r23_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(8));
    r23 = (r23_rot_2 & 16776960);
    r4 = 0;
    r5 = 0;
    ctr = r29;
}

loc_804E1F04:
{
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r6 = (r6_rot_5 & 262140);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & 524280);
    addr_lfsx_804E1F0C_loc_0 = (r7 + r6);
    f6.d = MemoryInline::FlatReadFloat32(addr_lfsx_804E1F0C_loc_0);
    r4 = (r4 + 1);
    addr_lfdx_804E1F14_loc_0 = (r3 + r0);
    f2.d = MemoryInline::FlatReadFloat64(addr_lfdx_804E1F14_loc_0);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & 262140);
    addr_lfsx_804E1F1C_loc_0 = (r7 + r0);
    f5.d = MemoryInline::FlatReadFloat32(addr_lfsx_804E1F1C_loc_0);
    r4 = (r4 + 1);
    f10.d = (f6.d * f2.d);
    r10_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r10 = (r10_rot_3 & 262140);
    addr_lfsx_804E1F2C_loc_0 = (r7 + r10);
    f6.d = MemoryInline::FlatReadFloat32(addr_lfsx_804E1F2C_loc_0);
    r4 = (r4 + 1);
    r12_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r12 = (r12_rot_3 & 262140);
    f8.d = (f5.d * f2.d);
    f12.d = (f1.d * f10.d);
    addr_lfsx_804E1F40_loc_0 = (r7 + r12);
    f5.d = MemoryInline::FlatReadFloat32(addr_lfsx_804E1F40_loc_0);
    r4 = (r4 + 1);
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -14716));
    f10.d = (f0.d * f8.d);
    r24_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r24 = (r24_rot_3 & 262140);
    f6.d = (f6.d * f2.d);
    r6 = (r6 + r23);
    r0 = (r0 + r23);
    r4 = (r4 + 1);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f12.d));
    r12 = (r12 + r23);
    addr_stfsx_804E1F6C_loc_0 = (r8 + r6);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804E1F6C_loc_0, f8.d);
    f31.d = (f30.d * f6.d);
    r8_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r8 = (r8_rot_6 & 262140);
    addr_lfsx_804E1F78_loc_0 = (r7 + r24);
    f8.d = MemoryInline::FlatReadFloat32(addr_lfsx_804E1F78_loc_0);
    f6.d = (f5.d * f2.d);
    addr_lfsx_804E1F80_loc_0 = (r7 + r8);
    f5.d = MemoryInline::FlatReadFloat32(addr_lfsx_804E1F80_loc_0);
    r4 = (r4 + 1);
    r25_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r25 = (r25_rot_3 & 262140);
    r4 = (r4 + 1);
    f12.d = (f13.d * f6.d);
    r26_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r26 = (r26_rot_5 & 262140);
    addr_lfsx_804E1F98_loc_0 = (r7 + r25);
    f6.d = MemoryInline::FlatReadFloat32(addr_lfsx_804E1F98_loc_0);
    r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -14716));
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d));
    f6.d = (f6.d * f2.d);
    addr_stfsx_804E1FA8_loc_0 = (r6 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804E1FA8_loc_0, f10.d);
    f10.d = (f8.d * f2.d);
    r0 = (r10 + r23);
    r10 = (r24 + r23);
    f8.d = (f5.d * f2.d);
    addr_lfsx_804E1FBC_loc_0 = (r7 + r26);
    f5.d = MemoryInline::FlatReadFloat32(addr_lfsx_804E1FBC_loc_0);
    r8 = (r8 + r23);
    f2.d = (f5.d * f2.d);
    r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -14716));
    r5 = (r5 + 1);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d));
    r4 = (r4 + 1);
    f10.d = (f11.d * f10.d);
    addr_stfsx_804E1FDC_loc_0 = (r6 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804E1FDC_loc_0, f31.d);
    f8.d = (f9.d * f8.d);
    r6 = (r25 + r23);
    r0 = (r26 + r23);
    f2.d = (f4.d * f2.d);
    r31 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -14716));
    f12.d = static_cast<double>(PpcForceSingleValueInline(f12.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f10.d));
    addr_stfsx_804E1FFC_loc_0 = (r31 + r12);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804E1FFC_loc_0, f12.d);
    f6.d = (f7.d * f6.d);
    r12 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -14716));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f8.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
    addr_stfsx_804E2010_loc_0 = (r12 + r10);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804E2010_loc_0, f5.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f6.d));
    r10 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -14716));
    addr_stfsx_804E201C_loc_0 = (r10 + r8);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804E201C_loc_0, f8.d);
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -14716));
    addr_stfsx_804E2024_loc_0 = (r8 + r6);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804E2024_loc_0, f5.d);
    r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -14716));
    addr_stfsx_804E202C_loc_0 = (r6 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804E202C_loc_0, f2.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804E1F04;
    }
}

loc_804E2034:
{
    r0 = (r11 + -65);
    r11 = (r0 & 65535);
}

loc_804E203C:
{
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_804E1D68;
    }
}

loc_804E2040:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3 = 0;
    f31.d = leaf_stack_saved_f31_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = leaf_stack_saved_f30_entry;
    r11 = (r1 + 320);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 356));
    ctx->lr = r0;
    r1 = (r1 + 352);
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
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804E1CD0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804E1CD0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804E1CD0 func_804E1CD0 preserves=true fpr_mask=0x00000000
