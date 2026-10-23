#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80467F98(CpuContext* ctx);
extern "C" uint64_t func_80467F98_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804684A0(CpuContext* ctx);
extern "C" uint64_t func_804684A0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804F56D0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_lfsx_804F5A54_loc_0 = 0;
    uint32_t addr_lfsx_804F5A6C_loc_0 = 0;
    uint32_t addr_lfsx_804F5A74_loc_0 = 0;
    uint32_t addr_lfsx_804F5A78_loc_0 = 0;
    uint32_t addr_lfsx_804F5A84_loc_0 = 0;
    uint32_t addr_lfsx_804F5A98_loc_0 = 0;
    uint32_t addr_lfsx_804F5AAC_loc_0 = 0;
    uint32_t addr_lfsx_804F5ACC_loc_0 = 0;
    uint32_t addr_lfsx_804F5ADC_loc_0 = 0;
    uint32_t addr_lfsx_804F5AF4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_10 = 0;
    uint32_t r11_rot_11 = 0;
    uint32_t r11_rot_12 = 0;
    uint32_t r11_rot_13 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r11_rot_4 = 0;
    uint32_t r11_rot_5 = 0;
    uint32_t r11_rot_6 = 0;
    uint32_t r11_rot_7 = 0;
    uint32_t r11_rot_8 = 0;
    uint32_t r11_rot_9 = 0;
    uint32_t r11_subfic_ra_0 = 0;
    uint32_t r11_subfic_ra_1 = 0;
    uint32_t r11_subfic_ra_2 = 0;
    uint32_t r11_subfic_ra_3 = 0;
    uint32_t r11_subfic_ra_4 = 0;
    uint32_t r11_subfic_ra_5 = 0;
    uint32_t r11_subfic_ra_6 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r12_rot_5 = 0;
    uint32_t r12_subfic_ra_0 = 0;
    uint32_t r12_subfic_ra_1 = 0;
    uint32_t r12_subfic_ra_2 = 0;
    uint32_t r12_subfic_ra_3 = 0;
    uint32_t r12_subfic_ra_4 = 0;
    uint32_t r12_subfic_ra_5 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r23_rot_0 = 0;
    uint32_t r23_rot_1 = 0;
    uint32_t r23_rot_2 = 0;
    uint32_t r23_rot_3 = 0;
    uint32_t r23_rot_4 = 0;
    uint32_t r23_rot_5 = 0;
    uint32_t r23_rot_6 = 0;
    uint32_t r23_rot_7 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r26_rot_3 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t stackword12 = 0;
    uint32_t stackword13 = 0;
    uint32_t stackword14 = 0;
    uint32_t stackword15 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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
    uint32_t r22 = ctx->gpr[22];
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
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_804F56D0;

loc_804F56D0:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -160), 0, 168u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_3, 164u, (r1 + 164), r0);
    r11 = (r1 + 80);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 144u, (r1 + 144), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 128u, (r1 + 128), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 112u, (r1 + 112), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 96u, (r1 + 96), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 80u, (r1 + 80), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r8 = 0x80760000u;
    r0 = 1127219200;
    r27_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r27 = (r27_rot_0 & -4);
    r3 = 0x80760000u;
    r8 = (r8 + -10352);
    stackword12 = r0;
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r1 + 8), r0);
    r8_addr_0 = (r8 + r27);
    r8 = MemoryInline::FlatRead32(r8_addr_0);
    r24 = r4;
    stackword13 = r0;
    MemoryInline::WriteResolved32(guest_range_3, 16u, (r1 + 16), r0);
    r3 = (r3 + 3776);
    r0 = MemoryInline::FlatRead8((r8 + 2452));
}

loc_804F573C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804F5750;
    }
}

loc_804F5740:
{
    r3 = MemoryInline::FlatRead32(r4);
    r0 = -4;
    MemoryInline::FlatWrite8((r3 + 41), static_cast<uint8_t>(r0));
    goto loc_804F5B24;
}

loc_804F5750:
{
}

loc_804F5754:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(3))) {
        goto loc_804F58C4;
    }
}

loc_804F5758:
{
    r0 = 4;
    f3.d = MemoryInline::FlatReadFloat64((r2 + -1656));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -1664));
    r5 = 0;
    r10 = 0;
    r9 = 767;
    ctr = r0;
    // nop
}

loc_804F5778:
{
    r8 = (r5 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r8 = (r0 - r8);
    r0 = (r8 + 2);
}

loc_804F578C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r7))) {
        goto loc_804F5884;
    }
}

loc_804F5790:
{
    r23 = (r6 + r8);
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 4u, true, false);
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & 2040);
    r12 = MemoryInline::FlatRead8(r23);
    r11 = (r8 + r0);
    r22 = MemoryInline::FlatRead8((r23 + 2));
    r8 = MemoryInline::FlatRead8((r23 + 1));
    r25 = (static_cast<int32_t>(static_cast<int16_t>(r12)));
    r23_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(4));
    r23 = (r23_rot_2 & 768);
    r12_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(2));
    r12 = (r12_rot_2 & 768);
    r23 = (r25 | r23);
    MemoryInline::FlatWrite16((r11 + 8), static_cast<uint16_t>(r23));
    r23 = (static_cast<int32_t>(static_cast<int16_t>(r8)));
    r11 = (r22 & 15);
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r12 = (r23 | r12);
    r12 = (static_cast<int32_t>(static_cast<int16_t>(r12)));
    r8 = (r8 + r0);
    r12_subfic_ra_2 = r12;
    r12 = (767 - r12_subfic_ra_2);
    MemoryInline::FlatWrite16((r8 + 10), static_cast<uint16_t>(r12));
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r8 = (r8 + r0);
    MemoryInline::FlatWrite16((r8 + 12), static_cast<uint16_t>(r11));
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r11 = (r8 + r0);
    r8 = MemoryInline::FlatRead16((r11 + 12));
    stackword14 = r8;
    MemoryInline::FlatWriteRam32((r1 + 12), r8);
    stackword15 = r8;
    MemoryInline::FlatWriteRam32((r1 + 20), r8);
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword12), static_cast<uint32_t>(stackword14));
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword13), static_cast<uint32_t>(stackword15));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r8 = fctiwzword0;
    r8 = (r8 & 255);
    MemoryInline::FlatWrite16((r11 + 12), static_cast<uint16_t>(r8));
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r11 = (r8 + r0);
    r8 = MemoryInline::FlatRead16((r11 + 12));
}

loc_804F583C:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_804F5858;
    }
}

loc_804F5840:
{
    r8 = MemoryInline::FlatRead16((r11 + 8));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
}

loc_804F5848:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(1023))) {
        goto loc_804F5858;
    }
}

loc_804F584C:
{
    r8 = MemoryInline::FlatRead16((r11 + 10));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
}

loc_804F5854:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(767))) {
        goto loc_804F5874;
    }
}

loc_804F5858:
{
    MemoryInline::FlatWrite16((r11 + 8), static_cast<uint16_t>(r10));
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r8 = (r8 + r0);
    MemoryInline::FlatWrite16((r8 + 10), static_cast<uint16_t>(r9));
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r8 = (r8 + r0);
    MemoryInline::FlatWrite16((r8 + 12), static_cast<uint16_t>(r10));
}

loc_804F5874:
{
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r8 = (r8 + r0);
    MemoryInline::FlatWrite8((r8 + 14), static_cast<uint8_t>(r5));
    goto loc_804F58B8;
}

loc_804F5884:
{
    r0 = MemoryInline::FlatRead32(r4);
    r11_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r11 = (r11_rot_2 & 2040);
    r8 = (r0 + r11);
    MemoryInline::FlatWrite16((r8 + 8), static_cast<uint16_t>(r10));
    r0 = MemoryInline::FlatRead32(r4);
    r8 = (r0 + r11);
    MemoryInline::FlatWrite16((r8 + 10), static_cast<uint16_t>(r9));
    r0 = MemoryInline::FlatRead32(r4);
    r8 = (r0 + r11);
    MemoryInline::FlatWrite16((r8 + 12), static_cast<uint16_t>(r10));
    r0 = MemoryInline::FlatRead32(r4);
    r8 = (r0 + r11);
    MemoryInline::FlatWrite8((r8 + 14), static_cast<uint8_t>(r5));
}

loc_804F58B8:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804F5778;
    }
}

loc_804F58C0:
{
    goto loc_804F59FC;
}

loc_804F58C4:
{
}

loc_804F58C8:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(1))) {
        goto loc_804F59FC;
    }
}

loc_804F58CC:
{
    r0 = 4;
    r5 = 0;
    r8 = 12;
    r10 = 0;
    r9 = 767;
    ctr = r0;
}

loc_804F58E4:
{
    r12 = (r5 & 255);
    r11_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r11 = (r11_rot_5 & 1020);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(1));
    r7 = (r7_rot_2 & 1);
    r0 = (r5 & 1);
    r12 = (r11 - r12);
    r23_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(31));
    r23 = (r23_rot_5 & 127);
    r11_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r11 = (r11_rot_6 & 508);
    r0 = (r0 ^ r7);
    r12 = (r6 + r12);
    r11 = (r11 + r23);
    r0 = (r0 - r7);
    r12 = (r12 - r23);
    r7 = (r6 + r11);
    r23 = MemoryInline::FlatRead8(r12);
    r12 = MemoryInline::FlatRead8((r12 + 1));
    r22 = MemoryInline::FlatRead8((r7 + 2));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804F5968;
    }
}

loc_804F5928:
{
    r7 = MemoryInline::FlatRead32(r4);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_6 & 2040);
    r23 = (static_cast<int32_t>(static_cast<int16_t>(r23)));
    r11_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(4));
    r11 = (r11_rot_7 & 768);
    r7 = (r7 + r0);
    r12 = (static_cast<int32_t>(static_cast<int16_t>(r12)));
    r11 = (r23 | r11);
    MemoryInline::FlatWrite16((r7 + 8), static_cast<uint16_t>(r11));
    r11_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(2));
    r11 = (r11_rot_8 & 768);
    r7 = MemoryInline::FlatRead32(r4);
    r11 = (r12 | r11);
    r11 = (static_cast<int32_t>(static_cast<int16_t>(r11)));
    r7 = (r7 + r0);
    r11_subfic_ra_2 = r11;
    r11 = (767 - r11_subfic_ra_2);
    MemoryInline::FlatWrite16((r7 + 10), static_cast<uint16_t>(r11));
    goto loc_804F59A4;
}

loc_804F5968:
{
    r7 = MemoryInline::FlatRead32(r4);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_7 & 2040);
    r23 = (static_cast<int32_t>(static_cast<int16_t>(r23)));
    r11_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(8));
    r11 = (r11_rot_9 & 768);
    r7 = (r7 + r0);
    r12 = (static_cast<int32_t>(static_cast<int16_t>(r12)));
    r11 = (r23 | r11);
    MemoryInline::FlatWrite16((r7 + 8), static_cast<uint16_t>(r11));
    r11_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(6));
    r11 = (r11_rot_10 & 768);
    r7 = MemoryInline::FlatRead32(r4);
    r11 = (r12 | r11);
    r11 = (static_cast<int32_t>(static_cast<int16_t>(r11)));
    r7 = (r7 + r0);
    r11_subfic_ra_3 = r11;
    r11 = (767 - r11_subfic_ra_3);
    MemoryInline::FlatWrite16((r7 + 10), static_cast<uint16_t>(r11));
}

loc_804F59A4:
{
    r7 = MemoryInline::FlatRead32(r4);
    r11 = (r7 + r0);
    r7 = MemoryInline::FlatRead16((r11 + 8));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
}

loc_804F59B4:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(1023))) {
        goto loc_804F59C4;
    }
}

loc_804F59B8:
{
    r7 = MemoryInline::FlatRead16((r11 + 10));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
}

loc_804F59C0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(767))) {
        goto loc_804F59E4;
    }
}

loc_804F59C4:
{
    MemoryInline::FlatWrite16((r11 + 8), static_cast<uint16_t>(r10));
    r7 = MemoryInline::FlatRead32(r4);
    r7 = (r7 + r0);
    MemoryInline::FlatWrite16((r7 + 10), static_cast<uint16_t>(r9));
    r7 = MemoryInline::FlatRead32(r4);
    r7 = (r7 + r0);
    MemoryInline::FlatWrite16((r7 + 12), static_cast<uint16_t>(r10));
    goto loc_804F59E8;
}

loc_804F59E4:
{
    MemoryInline::FlatWrite16((r11 + 12), static_cast<uint16_t>(r8));
}

loc_804F59E8:
{
    r7 = MemoryInline::FlatRead32(r4);
    r7 = (r7 + r0);
    MemoryInline::FlatWrite8((r7 + 14), static_cast<uint8_t>(r5));
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804F58E4;
    }
}

loc_804F59FC:
{
    f30.d = MemoryInline::FlatReadFloat64((r2 + -1672));
    r28 = (r3 + 0);
    f31.d = MemoryInline::FlatReadFloat32((r2 + -1688));
    r29 = (r3 + 32);
    r30 = (r3 + 16);
    r31 = (r3 + 48);
    r23 = (r3 + 64);
    r25 = 0;
}

loc_804F5A1C:
{
    r5 = MemoryInline::FlatRead32(r24);
    r26_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(3));
    r26 = (r26_rot_2 & 2040);
    r3 = (r5 + r26);
    r4 = MemoryInline::FlatRead16((r3 + 8));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_804F5A30:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_804F5A40;
    }
}

loc_804F5A34:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_804F5A3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(767))) {
        goto loc_804F5B18;
    }
}

loc_804F5A40:
{
    r22 = (r5 + r26);
    r3 = (r4 ^ -2147483648);
    r0 = MemoryInline::FlatRead16((r22 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r0 = (r0 ^ -2147483648);
    addr_lfsx_804F5A54_loc_0 = (r23 + r27);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_804F5A54_loc_0);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = PpcFmulsInline(f31.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f30.d));
    addr_lfsx_804F5A6C_loc_0 = (r28 + r27);
    f4.d = MemoryInline::FlatReadFloat32(addr_lfsx_804F5A6C_loc_0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    addr_lfsx_804F5A74_loc_0 = (r30 + r27);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_804F5A74_loc_0);
    addr_lfsx_804F5A78_loc_0 = (r29 + r27);
    f3.d = MemoryInline::FlatReadFloat32(addr_lfsx_804F5A78_loc_0);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    addr_lfsx_804F5A84_loc_0 = (r31 + r27);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_804F5A84_loc_0);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    ctx->lr = 0x804F5A94u;
    if constexpr (KnownRegArgsCpuCall<0x804684A0u>(&func_804684A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_804684A0_4EC0 = func_804684A0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804684A0_4EC0);
        r4 = static_cast<uint32_t>(regargs_result_804684A0_4EC0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
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
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804684A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    addr_lfsx_804F5A98_loc_0 = (r23 + r27);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_804F5A98_loc_0);
    f1.d = PpcFmulsInline(f31.d, f0.d);
    f28.d = PpcFmulsInline(f27.d, f2.d);
    ctx->lr = 0x804F5AA8u;
    if constexpr (KnownRegArgsCpuCall<0x80467F98u>(&func_80467F98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_80467F98_5B8F = func_80467F98_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80467F98_5B8F);
        r4 = static_cast<uint32_t>(regargs_result_80467F98_5B8F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
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
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80467F98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    addr_lfsx_804F5AAC_loc_0 = (r29 + r27);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_804F5AAC_loc_0);
    f1.d = PpcFmulsInline(f29.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f28.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWrite16((r22 + 8), static_cast<uint16_t>(r0));
    addr_lfsx_804F5ACC_loc_0 = (r23 + r27);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_804F5ACC_loc_0);
    f1.d = PpcFmulsInline(f31.d, f0.d);
    ctx->lr = 0x804F5AD8u;
    if constexpr (KnownRegArgsCpuCall<0x80467F98u>(&func_80467F98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_80467F98_6A45 = func_80467F98_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80467F98_6A45);
        r4 = static_cast<uint32_t>(regargs_result_80467F98_6A45 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
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
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80467F98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    addr_lfsx_804F5ADC_loc_0 = (r23 + r27);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_804F5ADC_loc_0);
    f1.d = PpcFmulsInline(f31.d, f0.d);
    f28.d = PpcFmulsInline(f27.d, f2.d);
    ctx->lr = 0x804F5AECu;
    if constexpr (KnownRegArgsCpuCall<0x804684A0u>(&func_804684A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_804684A0_7714 = func_804684A0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804684A0_7714);
        r4 = static_cast<uint32_t>(regargs_result_804684A0_7714 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
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
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804684A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    r0 = MemoryInline::FlatRead32(r24);
    addr_lfsx_804F5AF4_loc_0 = (r31 + r27);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_804F5AF4_loc_0);
    r3 = (r0 + r26);
    f1.d = PpcFmulsInline(f29.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f28.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r0 = fctiwzword2;
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r0));
}

loc_804F5B18:
{
    r25 = (r25 + 1);
}

loc_804F5B20:
{
    if ((static_cast<uint32_t>(r25) < static_cast<uint32_t>(4))) {
        goto loc_804F5A1C;
    }
}

loc_804F5B24:
{
    r11 = (r1 + 80);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::FlatReadFloat64((r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::FlatReadFloat64((r1 + 80));
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804F56D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804F56D0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF8003FF fpr_write=0xFF8003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804F56D0 func_804F56D0 preserves=true fpr_mask=0x00000000
