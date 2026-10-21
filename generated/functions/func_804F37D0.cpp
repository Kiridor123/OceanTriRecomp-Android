#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80467BF0(CpuContext* ctx);
extern "C" uint64_t func_80467BF0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8046856C(CpuContext* ctx);
extern "C" uint64_t func_8046856C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804FA160(CpuContext* ctx);
extern "C" void func_804FA160_ra38_1fe_0_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804F37D0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_lfsx_804F3D24_loc_0 = 0;
    uint32_t addr_lfsx_804F3E0C_loc_0 = 0;
    uint32_t addr_lfsx_804F3E14_loc_0 = 0;
    uint32_t addr_lfsx_804F3E30_loc_0 = 0;
    uint32_t addr_lfsx_804F3E4C_loc_0 = 0;
    uint32_t addr_lfsx_804F3E60_loc_0 = 0;
    uint32_t addr_lfsx_804F3E7C_loc_0 = 0;
    uint32_t addr_lfsx_804F3EA8_loc_0 = 0;
    uint32_t addr_lfsx_804F3EC8_loc_0 = 0;
    uint32_t addr_lfsx_804F3EE4_loc_0 = 0;
    uint32_t addr_lfsx_804F3F04_loc_0 = 0;
    uint32_t addr_lfsx_804F3F60_loc_0 = 0;
    uint32_t addr_lfsx_804F3F64_loc_0 = 0;
    uint32_t addr_lfsx_804F3F68_loc_0 = 0;
    uint32_t addr_lfsx_804F3F6C_loc_0 = 0;
    uint32_t addr_lfsx_804F3FC8_loc_0 = 0;
    uint32_t addr_lfsx_804F3FD0_loc_0 = 0;
    uint32_t addr_lfsx_804F3FF4_loc_0 = 0;
    uint32_t addr_lhax_804F3CB0_loc_0 = 0;
    uint32_t addr_lhax_804F3CD0_loc_0 = 0;
    uint32_t addr_lhax_804F3F88_loc_0 = 0;
    uint32_t addr_lhax_804F3F8C_loc_0 = 0;
    uint32_t addr_stfsx_804F3D0C_loc_0 = 0;
    uint32_t addr_stfsx_804F3D14_loc_0 = 0;
    uint32_t addr_stfsx_804F3DC4_loc_0 = 0;
    uint32_t addr_stfsx_804F3DEC_loc_0 = 0;
    uint32_t addr_stfsx_804F3E38_loc_0 = 0;
    uint32_t addr_stfsx_804F3E44_loc_0 = 0;
    uint32_t addr_stfsx_804F3E70_loc_0 = 0;
    uint32_t addr_stfsx_804F3E88_loc_0 = 0;
    uint32_t addr_stfsx_804F3EA0_loc_0 = 0;
    uint32_t addr_stfsx_804F3EAC_loc_0 = 0;
    uint32_t addr_stfsx_804F3EC4_loc_0 = 0;
    uint32_t addr_stfsx_804F3ED0_loc_0 = 0;
    uint32_t addr_stfsx_804F3EE0_loc_0 = 0;
    uint32_t addr_stfsx_804F3EE8_loc_0 = 0;
    uint32_t addr_stfsx_804F3EFC_loc_0 = 0;
    uint32_t addr_stfsx_804F3F1C_loc_0 = 0;
    uint32_t addr_stfsx_804F3F30_loc_0 = 0;
    uint32_t addr_stfsx_804F3FAC_loc_0 = 0;
    uint32_t addr_stfsx_804F3FD8_loc_0 = 0;
    uint32_t addr_stfsx_804F3FE4_loc_0 = 0;
    uint32_t addr_stfsx_804F4000_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mdest_6 = 0;
    uint32_t r0_mdest_7 = 0;
    uint32_t r0_mdest_8 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_mrot_6 = 0;
    uint32_t r0_mrot_7 = 0;
    uint32_t r0_mrot_8 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_26 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r16_rot_0 = 0;
    uint32_t r16_rot_1 = 0;
    uint32_t r16_rot_2 = 0;
    uint32_t r16_rot_3 = 0;
    uint32_t r16_rot_4 = 0;
    uint32_t r17_rot_0 = 0;
    uint32_t r17_rot_1 = 0;
    uint32_t r17_rot_2 = 0;
    uint32_t r17_rot_3 = 0;
    uint32_t r19_rot_0 = 0;
    uint32_t r19_rot_1 = 0;
    uint32_t r19_rot_2 = 0;
    uint32_t r19_rot_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r21_rot_0 = 0;
    uint32_t r21_rot_1 = 0;
    uint32_t r21_rot_2 = 0;
    uint32_t r21_rot_3 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_10 = 0;
    uint32_t r27_addr_11 = 0;
    uint32_t r27_addr_12 = 0;
    uint32_t r27_addr_2 = 0;
    uint32_t r27_addr_3 = 0;
    uint32_t r27_addr_4 = 0;
    uint32_t r27_addr_5 = 0;
    uint32_t r27_addr_6 = 0;
    uint32_t r27_addr_7 = 0;
    uint32_t r27_addr_8 = 0;
    uint32_t r27_addr_9 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_subfic_ra_0 = 0;
    uint32_t r6_subfic_ra_1 = 0;
    uint32_t r6_subfic_ra_2 = 0;
    uint32_t r6_subfic_ra_3 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;

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
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
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
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804F37D0u);
    goto loc_804F37D0;

loc_804F37D0:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + -272), 0, 280u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + -272), r1);
    r1 = (r1 + -272);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_4, 276u, (r1 + 276), r0);
    r11 = (r1 + 208);
    MemoryInline::WriteResolvedFloat64(guest_range_4, 256u, (r1 + 256), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 240u, (r1 + 240), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 224u, (r1 + 224), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 208u, (r1 + 208), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    // inline leaf 0x80457458 (18 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -68), 0, 68u, false, true);
    // end of inlined leaf 0x80457458
    r6 = 0x80760000u;
    r0 = 1127219200;
    r29_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r29 = (r29_rot_0 & -4);
    r5 = MemoryInline::FlatRead32((r2 + -1744));
    r6 = (r6 + -10352);
    MemoryInline::WriteResolved32(guest_range_4, 16u, (r1 + 16), r5);
    r6_addr_0 = (r6 + r29);
    r28 = MemoryInline::FlatRead32(r6_addr_0);
    r30 = 0x80760000u;
    r5 = MemoryInline::FlatRead32((r2 + -1736));
    r31 = 0x80630000u;
    MemoryInline::WriteResolved32(guest_range_4, 8u, (r1 + 8), r5);
    r26 = r3;
    r27 = MemoryInline::FlatRead32((r28 + 2420));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_804F383C:
{
    r5 = MemoryInline::FlatRead16((r1 + 16));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r11 = 0;
    guest_range_5 = MemoryInline::ResolveRangeHost((r28 + 2132), 0, 46u, false, true);
    MemoryInline::WriteResolved16(guest_range_5, 0u, (r28 + 2132), static_cast<uint16_t>(r5));
    r10 = 1;
    r5 = MemoryInline::FlatRead16((r1 + 8));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r8 = 2;
    MemoryInline::WriteResolved16(guest_range_5, 2u, (r28 + 2134), static_cast<uint16_t>(r5));
    r7 = 3;
    r12 = MemoryInline::FlatRead32((r2 + -1740));
    r6 = 530;
    r4 = MemoryInline::FlatRead8((r28 + 2250));
    r5 = 636;
    MemoryInline::WriteResolved16(guest_range_5, 4u, (r28 + 2136), static_cast<uint16_t>(r4));
    r30 = (r30 + 3776);
    r4 = MemoryInline::FlatRead16((r1 + 18));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r31 = (r31 + -13288);
    MemoryInline::WriteResolved8(guest_range_5, 6u, (r28 + 2138), static_cast<uint8_t>(r11));
    r3 = MemoryInline::FlatRead16((r1 + 10));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::WriteResolved16(guest_range_5, 8u, (r28 + 2140), static_cast<uint16_t>(r4));
    r9 = MemoryInline::FlatRead32((r2 + -1732));
    MemoryInline::WriteResolved16(guest_range_5, 10u, (r28 + 2142), static_cast<uint16_t>(r3));
    r4 = MemoryInline::FlatRead8((r28 + 2250));
    MemoryInline::WriteResolved16(guest_range_5, 12u, (r28 + 2144), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam32((r1 + 20), r12);
    MemoryInline::FlatWriteRam32((r1 + 12), r9);
    r3 = MemoryInline::FlatRead16((r1 + 20));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::WriteResolved8(guest_range_5, 14u, (r28 + 2146), static_cast<uint8_t>(r10));
    r9 = MemoryInline::FlatRead16((r1 + 12));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    MemoryInline::WriteResolved16(guest_range_5, 16u, (r28 + 2148), static_cast<uint16_t>(r3));
    r4 = MemoryInline::FlatRead16((r1 + 22));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    MemoryInline::WriteResolved16(guest_range_5, 18u, (r28 + 2150), static_cast<uint16_t>(r9));
    r3 = MemoryInline::FlatRead16((r1 + 14));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r9 = MemoryInline::FlatRead8((r28 + 2250));
    MemoryInline::WriteResolved16(guest_range_5, 20u, (r28 + 2152), static_cast<uint16_t>(r9));
    MemoryInline::WriteResolved8(guest_range_5, 22u, (r28 + 2154), static_cast<uint8_t>(r8));
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_5, 24u, (r28 + 2156), r4);
        MemoryInline::WriteResolved16(guest_range_5, 26u, (r28 + 2158), r3);
    }
    r3 = MemoryInline::FlatRead8((r28 + 2250));
    MemoryInline::WriteResolved16(guest_range_5, 28u, (r28 + 2160), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved8(guest_range_5, 30u, (r28 + 2162), static_cast<uint8_t>(r7));
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r6)) << 16) | static_cast<uint16_t>(r6)))) {
        MemoryInline::WriteResolved16(guest_range_5, 32u, (r28 + 2164), r6);
        MemoryInline::WriteResolved16(guest_range_5, 34u, (r28 + 2166), r6);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 36u, ((static_cast<uint32_t>(static_cast<uint16_t>(r6)) << 16) | static_cast<uint16_t>(r5)))) {
        MemoryInline::WriteResolved16(guest_range_5, 36u, (r28 + 2168), r6);
        MemoryInline::WriteResolved16(guest_range_5, 38u, (r28 + 2170), r5);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 40u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r5)))) {
        MemoryInline::WriteResolved16(guest_range_5, 40u, (r28 + 2172), r5);
        MemoryInline::WriteResolved16(guest_range_5, 42u, (r28 + 2174), r5);
    }
    MemoryInline::WriteResolved8(guest_range_5, 45u, (r28 + 2177), static_cast<uint8_t>(r11));
    MemoryInline::FlatWriteRam32((r1 + 120), r0);
    MemoryInline::FlatWriteRam32((r1 + 128), r0);
    MemoryInline::WriteResolved8(guest_range_5, 44u, (r28 + 2176), static_cast<uint8_t>(r11));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804F4280;
    }
}

loc_804F3908:
{
    r0 = MemoryInline::FlatRead32((r28 + 2272));
}

loc_804F3910:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804F3C78;
    }
}

loc_804F3914:
{
    r15 = 0;
    r20 = 0x80000000u;
}

loc_804F391C:
{
    r0 = (r15 & 255);
    r3 = 0;
    r16 = (r0 * 11);
    r5 = (r16 + 10);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r16), static_cast<int32_t>(r5));
}

loc_804F3930:
{
    r4 = r16;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804F3A64;
    }
}

loc_804F3938:
{
    r6 = (r16 + 2);
    r7 = 0;
    r8 = 0;
    r9 = 0;
    r10 = 0;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_804F3960;
    }
}

loc_804F3950:
{
    r0 = (r20 + -2);
}

loc_804F3958:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_804F3960;
    }
}

loc_804F395C:
{
    r10 = 1;
}

loc_804F3960:
{
}

loc_804F3964:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_804F3978;
    }
}

loc_804F3968:
{
    r0 = (r20 + -2);
}

loc_804F3970:
{
    if ((static_cast<int32_t>(r16) > static_cast<int32_t>(r0))) {
        goto loc_804F3978;
    }
}

loc_804F3974:
{
    r9 = 1;
}

loc_804F3978:
{
}

loc_804F397C:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_804F3990;
    }
}

loc_804F3980:
{
    r0 = (r16 + -2147483648);
}

loc_804F3988:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_804F3990;
    }
}

loc_804F398C:
{
    r8 = 1;
}

loc_804F3990:
{
}

loc_804F3994:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_804F39CC;
    }
}

loc_804F3998:
{
    r5 = (r16 + 10);
    r0 = (0 - r16);
    r8 = (r5 & -2147483648);
    r0 = (r0 & -2147483648);
    r5 = 1;
}

loc_804F39B0:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(r0))) {
        goto loc_804F39C0;
    }
}

loc_804F39B4:
{
}

loc_804F39B8:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_804F39C0;
    }
}

loc_804F39BC:
{
    r5 = 0;
}

loc_804F39C0:
{
}

loc_804F39C4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804F39CC;
    }
}

loc_804F39C8:
{
    r7 = 1;
}

loc_804F39CC:
{
}

loc_804F39D0:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_804F3A38;
    }
}

loc_804F39D4:
{
    r0 = (r6 + 7);
    r0 = (r0 - r16);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_2 & 536870911);
    ctr = r0;
}

loc_804F39E8:
{
    if ((static_cast<int32_t>(r16) >= static_cast<int32_t>(r6))) {
        goto loc_804F3A38;
    }
}

loc_804F39EC:
{
    r6 = (r27 + r4);
    r27_addr_3 = (r27 + r4);
    r5 = MemoryInline::FlatRead8(r27_addr_3);
    r0 = MemoryInline::FlatRead8((r6 + 1));
    r4 = (r4 + 8);
    r3 = (r3 + r5);
    r5 = MemoryInline::FlatRead8((r6 + 2));
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r6 + 3));
    r3 = (r3 + r5);
    r5 = MemoryInline::FlatRead8((r6 + 4));
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r6 + 5));
    r3 = (r3 + r5);
    r5 = MemoryInline::FlatRead8((r6 + 6));
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r6 + 7));
    r3 = (r3 + r5);
    r3 = (r3 + r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804F39EC;
    }
}

loc_804F3A38:
{
    r6 = (r16 + 10);
    r5 = (r27 + r4);
    r0 = (r6 - r4);
    ctr = r0;
}

loc_804F3A4C:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r6))) {
        goto loc_804F3A64;
    }
}

loc_804F3A50:
{
    r0 = MemoryInline::FlatRead8(r5);
    r4 = (r4 + 1);
    r5 = (r5 + 1);
    r3 = (r3 + r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804F3A50;
    }
}

loc_804F3A64:
{
    r21 = (r27 + r16);
    r3 = (r3 + 85);
    r0 = MemoryInline::FlatRead8((r21 + 10));
    r3 = (r3 & 255);
}

loc_804F3A78:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_804F3C5C;
    }
}

loc_804F3A7C:
{
    r3 = (r31 + 172);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804FA160u>(&func_804FA160)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        func_804FA160_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804FA160u>(ctx);
        r1 = ctx->gpr[1];
    }
    guest_range_1 = MemoryInline::ResolveRangeHost(r21, 0, 10u, true, false);
    r11 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r21 + 2));
    r8 = 0;
    r7 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r21 + 1));
    r5 = 1;
    r0 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r21 + 4));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & 768);
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r17 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r21 + 6));
    r4 = (r7 | r4);
    r15 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(6));
    r0 = (r0_rot_5 & 768);
    r12 = MemoryInline::ReadResolved8(guest_range_1, 0u, r21);
    r0 = (r15 | r0);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r10 = (767 - r4);
    r7 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r21 + 3));
    r9 = MemoryInline::FlatRead8((r28 + 2250));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r6_subfic_ra_1 = r6;
    r6 = (767 - r6_subfic_ra_1);
    r20 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(8));
    r7 = (r7_rot_1 & 768);
    r0 = 2;
    r15 = 3;
    r3 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r21 + 7));
    r19 = (static_cast<int32_t>(static_cast<int16_t>(r17)));
    r7 = (r20 | r7);
    r17_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r17 = (r17_rot_1 & 768);
    r16 = MemoryInline::ReadResolved8(guest_range_1, 9u, (r21 + 9));
    r19 = (r19 | r17);
    r4 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r21 + 5));
    r17 = (static_cast<int32_t>(static_cast<int16_t>(r16)));
    r16_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(6));
    r16 = (r16_rot_1 & 768);
    r18 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r21 + 8));
    r16 = (r17 | r16);
    r19 = (static_cast<int32_t>(static_cast<int16_t>(r19)));
    r12 = (static_cast<int32_t>(static_cast<int16_t>(r12)));
    r17 = (767 - r19);
    r21_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(4));
    r21 = (r21_rot_1 & 768);
    r19 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r4 = (r4_rot_2 & 768);
    r19 = (r19 | r4);
    r11 = (r12 | r21);
    r16 = (static_cast<int32_t>(static_cast<int16_t>(r16)));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_1 & 768);
    r12 = (767 - r16);
    r4 = 4;
    r16 = (static_cast<int32_t>(static_cast<int16_t>(r18)));
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + 88), 0, 31u, false, true);
    MemoryInline::WriteResolved16(guest_range_6, 0u, (r1 + 88), static_cast<uint16_t>(r11));
    r16 = (r16 | r3);
    r3 = (r1 + 88);
    if (!MemoryInline::WriteResolvedPair16(guest_range_6, 2u, ((static_cast<uint32_t>(static_cast<uint16_t>(r10)) << 16) | static_cast<uint16_t>(r9)))) {
        MemoryInline::WriteResolved16(guest_range_6, 2u, (r1 + 90), r10);
        MemoryInline::WriteResolved16(guest_range_6, 4u, (r1 + 92), r9);
    }
    MemoryInline::WriteResolved8(guest_range_6, 6u, (r1 + 94), static_cast<uint8_t>(r8));
    if (!MemoryInline::WriteResolvedPair16(guest_range_6, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r7)) << 16) | static_cast<uint16_t>(r6)))) {
        MemoryInline::WriteResolved16(guest_range_6, 8u, (r1 + 96), r7);
        MemoryInline::WriteResolved16(guest_range_6, 10u, (r1 + 98), r6);
    }
    MemoryInline::WriteResolved16(guest_range_6, 12u, (r1 + 100), static_cast<uint16_t>(r9));
    MemoryInline::WriteResolved8(guest_range_6, 14u, (r1 + 102), static_cast<uint8_t>(r5));
    if (!MemoryInline::WriteResolvedPair16(guest_range_6, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r19)) << 16) | static_cast<uint16_t>(r17)))) {
        MemoryInline::WriteResolved16(guest_range_6, 16u, (r1 + 104), r19);
        MemoryInline::WriteResolved16(guest_range_6, 18u, (r1 + 106), r17);
    }
    MemoryInline::WriteResolved16(guest_range_6, 20u, (r1 + 108), static_cast<uint16_t>(r9));
    MemoryInline::WriteResolved8(guest_range_6, 22u, (r1 + 110), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_6, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r16)) << 16) | static_cast<uint16_t>(r12)))) {
        MemoryInline::WriteResolved16(guest_range_6, 24u, (r1 + 112), r16);
        MemoryInline::WriteResolved16(guest_range_6, 26u, (r1 + 114), r12);
    }
    MemoryInline::WriteResolved16(guest_range_6, 28u, (r1 + 116), static_cast<uint16_t>(r9));
    MemoryInline::WriteResolved8(guest_range_6, 30u, (r1 + 118), static_cast<uint8_t>(r15));
    ctr = r4;
}

loc_804F3B90:
{
    r4 = MemoryInline::FlatRead16(r3);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_804F3B98:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(512))) {
        goto loc_804F3BC0;
    }
}

loc_804F3B9C:
{
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_804F3BA4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(384))) {
        goto loc_804F3BC0;
    }
}

loc_804F3BA8:
{
    MemoryInline::FlatWrite16((r28 + 2132), static_cast<uint16_t>(r4));
    r4 = MemoryInline::FlatRead16((r3 + 4));
    MemoryInline::FlatWrite16((r28 + 2134), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 6));
    MemoryInline::FlatWrite16((r28 + 2136), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite8((r28 + 2138), static_cast<uint8_t>(r0));
}

loc_804F3BC0:
{
    r4 = MemoryInline::FlatRead16(r3);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_804F3BC8:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(512))) {
        goto loc_804F3BF0;
    }
}

loc_804F3BCC:
{
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_804F3BD4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(384))) {
        goto loc_804F3BF0;
    }
}

loc_804F3BD8:
{
    MemoryInline::FlatWrite16((r28 + 2140), static_cast<uint16_t>(r4));
    r4 = MemoryInline::FlatRead16((r3 + 4));
    MemoryInline::FlatWrite16((r28 + 2142), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 6));
    MemoryInline::FlatWrite16((r28 + 2144), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite8((r28 + 2146), static_cast<uint8_t>(r0));
}

loc_804F3BF0:
{
    r4 = MemoryInline::FlatRead16(r3);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_804F3BF8:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(512))) {
        goto loc_804F3C20;
    }
}

loc_804F3BFC:
{
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_804F3C04:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(384))) {
        goto loc_804F3C20;
    }
}

loc_804F3C08:
{
    MemoryInline::FlatWrite16((r28 + 2148), static_cast<uint16_t>(r4));
    r4 = MemoryInline::FlatRead16((r3 + 4));
    MemoryInline::FlatWrite16((r28 + 2150), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 6));
    MemoryInline::FlatWrite16((r28 + 2152), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite8((r28 + 2154), static_cast<uint8_t>(r0));
}

loc_804F3C20:
{
    r4 = MemoryInline::FlatRead16(r3);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_804F3C28:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(512))) {
        goto loc_804F3C50;
    }
}

loc_804F3C2C:
{
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_804F3C34:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(384))) {
        goto loc_804F3C50;
    }
}

loc_804F3C38:
{
    MemoryInline::FlatWrite16((r28 + 2156), static_cast<uint16_t>(r4));
    r4 = MemoryInline::FlatRead16((r3 + 4));
    MemoryInline::FlatWrite16((r28 + 2158), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 6));
    MemoryInline::FlatWrite16((r28 + 2160), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite8((r28 + 2162), static_cast<uint8_t>(r0));
}

loc_804F3C50:
{
    r3 = (r3 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804F3B90;
    }
}

loc_804F3C58:
{
    goto loc_804F3C84;
}

loc_804F3C5C:
{
    r3 = (r31 + 192);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804FA160u>(&func_804FA160)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        func_804FA160_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804FA160u>(ctx);
        r1 = ctx->gpr[1];
    }
    r15 = (r15 + 1);
}

loc_804F3C70:
{
    if ((static_cast<uint32_t>(r15) < static_cast<uint32_t>(2))) {
        goto loc_804F391C;
    }
}

loc_804F3C74:
{
    goto loc_804F3C84;
}

loc_804F3C78:
{
    r3 = (r31 + 216);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804FA160u>(&func_804FA160)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        func_804FA160_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804FA160u>(ctx);
        r1 = ctx->gpr[1];
    }
}

loc_804F3C84:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -1728));
    r21 = (r1 + 72);
    f29.d = MemoryInline::FlatReadFloat64((r2 + -1672));
    r20 = (r1 + 56);
    f30.d = f31.d;
    r17 = (r1 + 16);
    r16 = (r1 + 8);
    r15 = 0;
}

loc_804F3CA4:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(3));
    r0 = (r0_rot_8 & 2040);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(1));
    r8 = (r8_rot_2 & 510);
    r3 = (r28 + r0);
    addr_lhax_804F3CB0_loc_0 = (r17 + r8);
    r4 = MemoryInline::FlatRead16(addr_lhax_804F3CB0_loc_0);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r7 = MemoryInline::FlatRead16((r3 + 2132));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(2));
    r6 = (r6_rot_2 & 1020);
    r9 = MemoryInline::FlatRead16((r3 + 2134));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r3 = (r31 + 284);
    r0 = (r7 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    r5 = (r9 ^ -2147483648);
    addr_lhax_804F3CD0_loc_0 = (r16 + r8);
    r0 = MemoryInline::FlatRead16(addr_lhax_804F3CD0_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam32((r1 + 132), r5);
    r4 = (r7 - r4);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 120));
    r0 = (r9 - r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 128));
    r4 = (r4 ^ -2147483648);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 124), r4);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f29.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 120));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 128));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f29.d));
    addr_stfsx_804F3D0C_loc_0 = (r21 + r6);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804F3D0C_loc_0, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    addr_stfsx_804F3D14_loc_0 = (r20 + r6);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804F3D14_loc_0, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f1.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
    addr_lfsx_804F3D24_loc_0 = (r21 + r6);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_804F3D24_loc_0);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(5), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804FA160u>(&func_804FA160)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        func_804FA160_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804FA160u>(ctx);
        r1 = ctx->gpr[1];
    }
    r15 = (r15 + 1);
}

loc_804F3D38:
{
    if ((static_cast<uint32_t>(r15) < static_cast<uint32_t>(4))) {
        goto loc_804F3CA4;
    }
}

loc_804F3D3C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1724));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -1712));
    f30.d = PpcFmulsInline(f30.d, f0.d);
    f31.d = PpcFmulsInline(f31.d, f0.d);
    if constexpr (KnownRegArgsCpuCall<0x80467BF0u>(&func_80467BF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->fpr[12] = f12;
        ctx->cr = cr;
        const auto regargs_result_80467BF0_883D = func_80467BF0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80467BF0_883D);
        r4 = static_cast<uint32_t>(regargs_result_80467BF0_883D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        f12 = ctx->fpr[12];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80467BF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        f12 = ctx->fpr[12];
        cr = ctx->cr;
    }
    f2.d = MemoryInline::FlatReadFloat32((r2 + -1720));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1716));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f30.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    if constexpr (KnownRegArgsCpuCall<0x80467BF0u>(&func_80467BF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->fpr[12] = f12;
        ctx->cr = cr;
        const auto regargs_result_80467BF0_91F4 = func_80467BF0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80467BF0_91F4);
        r4 = static_cast<uint32_t>(regargs_result_80467BF0_91F4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        f12 = ctx->fpr[12];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80467BF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        f12 = ctx->fpr[12];
        cr = ctx->cr;
    }
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -1696));
    f28.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    if constexpr (KnownRegArgsCpuCall<0x80467BF0u>(&func_80467BF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->fpr[12] = f12;
        ctx->cr = cr;
        const auto regargs_result_80467BF0_9B2B = func_80467BF0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80467BF0_9B2B);
        r4 = static_cast<uint32_t>(regargs_result_80467BF0_9B2B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        f12 = ctx->fpr[12];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80467BF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        f12 = ctx->fpr[12];
        cr = ctx->cr;
    }
    f2.d = MemoryInline::FlatReadFloat32((r2 + -1704));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1700));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f31.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    if constexpr (KnownRegArgsCpuCall<0x80467BF0u>(&func_80467BF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->fpr[12] = f12;
        ctx->cr = cr;
        const auto regargs_result_80467BF0_A4E2 = func_80467BF0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80467BF0_A4E2);
        r4 = static_cast<uint32_t>(regargs_result_80467BF0_A4E2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        f12 = ctx->fpr[12];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80467BF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        f12 = ctx->fpr[12];
        cr = ctx->cr;
    }
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    r16_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r16 = (r16_rot_3 & -4);
    f1.d = f28.d;
    r17 = (r30 + 0);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    ctx->lr = 0x804F3DA8u;
    if constexpr (KnownRegArgsCpuCall<0x8046856Cu>(&func_8046856C)) {
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
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->fpr[12] = f12;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8046856C_AFC0 = func_8046856C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8046856C_AFC0);
        r4 = static_cast<uint32_t>(regargs_result_8046856C_AFC0 >> 32);
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
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        f12 = ctx->fpr[12];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
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
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8046856Cu>(ctx);
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
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        f12 = ctx->fpr[12];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -1688));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1716));
    f1.d = f29.d;
    r15 = (r30 + 16);
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    addr_stfsx_804F3DC4_loc_0 = (r17 + r16);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804F3DC4_loc_0, f0.d);
    ctx->lr = 0x804F3DCCu;
    if constexpr (KnownRegArgsCpuCall<0x8046856Cu>(&func_8046856C)) {
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
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->fpr[12] = f12;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8046856C_BEC0 = func_8046856C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8046856C_BEC0);
        r4 = static_cast<uint32_t>(regargs_result_8046856C_BEC0 >> 32);
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
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        f12 = ctx->fpr[12];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
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
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8046856Cu>(ctx);
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
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        f12 = ctx->fpr[12];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -1688));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1700));
    f1.d = f30.d;
    f2.d = f31.d;
    r3 = (r31 + 304);
    f3.d = PpcFmulsInline(f3.d, f4.d);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    addr_stfsx_804F3DEC_loc_0 = (r15 + r16);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804F3DEC_loc_0, f0.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(5), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804FA160u>(&func_804FA160)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        func_804FA160_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804FA160u>(ctx);
        r1 = ctx->gpr[1];
    }
    f1.d = f28.d;
    r3 = (r31 + 336);
    f2.d = f29.d;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(5), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804FA160u>(&func_804FA160)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        func_804FA160_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804FA160u>(ctx);
        r1 = ctx->gpr[1];
    }
    addr_lfsx_804F3E0C_loc_0 = (r17 + r16);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_804F3E0C_loc_0);
    r3 = (r31 + 368);
    addr_lfsx_804F3E14_loc_0 = (r15 + r16);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_804F3E14_loc_0);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(5), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804FA160u>(&func_804FA160)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        func_804FA160_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804FA160u>(ctx);
        r1 = ctx->gpr[1];
    }
    f1.d = MemoryInline::FlatReadFloat32((r2 + -1728));
    r20 = (r30 + 48);
    r21 = (r30 + 32);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    addr_lfsx_804F3E30_loc_0 = (r17 + r16);
    f5.d = MemoryInline::FlatReadFloat32(addr_lfsx_804F3E30_loc_0);
    r3 = (r31 + 420);
    addr_stfsx_804F3E38_loc_0 = (r20 + r16);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804F3E38_loc_0, f1.d);
    f12.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f5.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    addr_stfsx_804F3E44_loc_0 = (r21 + r16);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804F3E44_loc_0, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    addr_lfsx_804F3E4C_loc_0 = (r15 + r16);
    f11.d = MemoryInline::FlatReadFloat32(addr_lfsx_804F3E4C_loc_0);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 76));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f12.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f11.d));
    addr_lfsx_804F3E60_loc_0 = (r20 + r16);
    f3.d = MemoryInline::FlatReadFloat32(addr_lfsx_804F3E60_loc_0);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f11.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 80));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    addr_stfsx_804F3E70_loc_0 = (r21 + r16);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804F3E70_loc_0, f4.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f5.d));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f5.d));
    addr_lfsx_804F3E7C_loc_0 = (r21 + r16);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_804F3E7C_loc_0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f10.d));
    addr_stfsx_804F3E88_loc_0 = (r20 + r16);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804F3E88_loc_0, f3.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f9.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 84));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f11.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f5.d));
    addr_stfsx_804F3EA0_loc_0 = (r21 + r16);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804F3EA0_loc_0, f4.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d));
    addr_lfsx_804F3EA8_loc_0 = (r21 + r16);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_804F3EA8_loc_0);
    addr_stfsx_804F3EAC_loc_0 = (r20 + r16);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804F3EAC_loc_0, f3.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f8.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f7.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -1724));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f11.d));
    addr_stfsx_804F3EC4_loc_0 = (r21 + r16);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804F3EC4_loc_0, f3.d);
    addr_lfsx_804F3EC8_loc_0 = (r21 + r16);
    f3.d = MemoryInline::FlatReadFloat32(addr_lfsx_804F3EC8_loc_0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d));
    addr_stfsx_804F3ED0_loc_0 = (r20 + r16);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804F3ED0_loc_0, f6.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f5.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f12.d);
    addr_stfsx_804F3EE0_loc_0 = (r21 + r16);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804F3EE0_loc_0, f3.d);
    addr_lfsx_804F3EE4_loc_0 = (r21 + r16);
    f3.d = MemoryInline::FlatReadFloat32(addr_lfsx_804F3EE4_loc_0);
    addr_stfsx_804F3EE8_loc_0 = (r20 + r16);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804F3EE8_loc_0, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f3.d = PpcFmulsInline(f3.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f0.d);
    f2.d = PpcFmulsInline(f1.d, f2.d);
    addr_stfsx_804F3EFC_loc_0 = (r21 + r16);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804F3EFC_loc_0, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f10.d);
    addr_lfsx_804F3F04_loc_0 = (r21 + r16);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_804F3F04_loc_0);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f9.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f8.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f7.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f4.d);
    addr_stfsx_804F3F1C_loc_0 = (r20 + r16);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804F3F1C_loc_0, f2.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(5), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804FA160u>(&func_804FA160)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        func_804FA160_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804FA160u>(ctx);
        r1 = ctx->gpr[1];
    }
    r22 = (r30 + 64);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1728));
    addr_stfsx_804F3F30_loc_0 = (r22 + r16);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804F3F30_loc_0, f0.d);
    r17 = (r1 + 40);
    f29.d = MemoryInline::FlatReadFloat64((r2 + -1672));
    r23 = (r1 + 56);
    f31.d = MemoryInline::FlatReadFloat32((r2 + -1684));
    r24 = (r1 + 72);
    f30.d = MemoryInline::FlatReadFloat32((r2 + -1680));
    r18 = (r1 + 24);
    r25 = (r1 + 8);
    r26 = (r1 + 16);
    r15 = 0;
}

loc_804F3F5C:
{
    r19_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(2));
    r19 = (r19_rot_2 & 1020);
    addr_lfsx_804F3F60_loc_0 = (r20 + r16);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_804F3F60_loc_0);
    addr_lfsx_804F3F64_loc_0 = (r23 + r19);
    f3.d = MemoryInline::FlatReadFloat32(addr_lfsx_804F3F64_loc_0);
    addr_lfsx_804F3F68_loc_0 = (r24 + r19);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_804F3F68_loc_0);
    addr_lfsx_804F3F6C_loc_0 = (r21 + r16);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_804F3F6C_loc_0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    if constexpr (KnownRegArgsCpuCall<0x80467BF0u>(&func_80467BF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->fpr[12] = f12;
        ctx->cr = cr;
        const auto regargs_result_80467BF0_F69A = func_80467BF0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80467BF0_F69A);
        r4 = static_cast<uint32_t>(regargs_result_80467BF0_F69A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        f12 = ctx->fpr[12];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80467BF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        f12 = ctx->fpr[12];
        cr = ctx->cr;
    }
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & 510);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    addr_lhax_804F3F88_loc_0 = (r25 + r0);
    r3 = MemoryInline::FlatRead16(addr_lhax_804F3F88_loc_0);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    addr_lhax_804F3F8C_loc_0 = (r26 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_804F3F8C_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 124), r3);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 120));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 128));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f29.d));
    addr_stfsx_804F3FAC_loc_0 = (r17 + r19);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804F3FAC_loc_0, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f31.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    if constexpr (KnownRegArgsCpuCall<0x80467BF0u>(&func_80467BF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->fpr[12] = f12;
        ctx->cr = cr;
        const auto regargs_result_80467BF0_103FA = func_80467BF0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80467BF0_103FA);
        r4 = static_cast<uint32_t>(regargs_result_80467BF0_103FA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        f12 = ctx->fpr[12];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80467BF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        f12 = ctx->fpr[12];
        cr = ctx->cr;
    }
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    addr_lfsx_804F3FC8_loc_0 = (r17 + r19);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_804F3FC8_loc_0);
    r15 = (r15 + 1);
    addr_lfsx_804F3FD0_loc_0 = (r22 + r16);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_804F3FD0_loc_0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r15), static_cast<uint32_t>(4));
}

loc_804F3FD8:
{
    addr_stfsx_804F3FD8_loc_0 = (r18 + r19);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804F3FD8_loc_0, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    addr_stfsx_804F3FE4_loc_0 = (r22 + r16);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804F3FE4_loc_0, f0.d);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_804F3F5C;
    }
}

loc_804F3FEC:
{
    r4 = (r30 + 64);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1724));
    addr_lfsx_804F3FF4_loc_0 = (r4 + r29);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_804F3FF4_loc_0);
    r3 = (r31 + 448);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    addr_stfsx_804F4000_loc_0 = (r4 + r29);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804F4000_loc_0, f1.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(5), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804FA160u>(&func_804FA160)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        func_804FA160_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804FA160u>(ctx);
        r1 = ctx->gpr[1];
    }
    r16 = 0;
    r26 = 0x80000000u;
}

loc_804F4014:
{
    r0 = MemoryInline::FlatRead32((r28 + 2272));
    r3 = (r16 & 255);
    r15 = (r3 * 10);
}

loc_804F4024:
{
    r3 = 0;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804F4030;
    }
}

loc_804F402C:
{
    r15 = (r15 + 22);
}

loc_804F4030:
{
    r5 = (r15 + 9);
    r4 = r15;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r15), static_cast<int32_t>(r5));
}

loc_804F403C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804F416C;
    }
}

loc_804F4040:
{
    r6 = (r15 + 1);
    r7 = 0;
    r8 = 0;
    r9 = 0;
    r10 = 0;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_804F4068;
    }
}

loc_804F4058:
{
    r0 = (r26 + -2);
}

loc_804F4060:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_804F4068;
    }
}

loc_804F4064:
{
    r10 = 1;
}

loc_804F4068:
{
}

loc_804F406C:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_804F4080;
    }
}

loc_804F4070:
{
    r0 = (r26 + -2);
}

loc_804F4078:
{
    if ((static_cast<int32_t>(r15) > static_cast<int32_t>(r0))) {
        goto loc_804F4080;
    }
}

loc_804F407C:
{
    r9 = 1;
}

loc_804F4080:
{
}

loc_804F4084:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_804F4098;
    }
}

loc_804F4088:
{
    r0 = (r15 + -2147483648);
}

loc_804F4090:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_804F4098;
    }
}

loc_804F4094:
{
    r8 = 1;
}

loc_804F4098:
{
}

loc_804F409C:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_804F40D4;
    }
}

loc_804F40A0:
{
    r5 = (r15 + 9);
    r0 = (0 - r15);
    r8 = (r5 & -2147483648);
    r0 = (r0 & -2147483648);
    r5 = 1;
}

loc_804F40B8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(r0))) {
        goto loc_804F40C8;
    }
}

loc_804F40BC:
{
}

loc_804F40C0:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_804F40C8;
    }
}

loc_804F40C4:
{
    r5 = 0;
}

loc_804F40C8:
{
}

loc_804F40CC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804F40D4;
    }
}

loc_804F40D0:
{
    r7 = 1;
}

loc_804F40D4:
{
}

loc_804F40D8:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_804F4140;
    }
}

loc_804F40DC:
{
    r0 = (r6 + 7);
    r0 = (r0 - r15);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_12 & 536870911);
    ctr = r0;
}

loc_804F40F0:
{
    if ((static_cast<int32_t>(r15) >= static_cast<int32_t>(r6))) {
        goto loc_804F4140;
    }
}

loc_804F40F4:
{
    r6 = (r27 + r4);
    r27_addr_9 = (r27 + r4);
    r5 = MemoryInline::FlatRead8(r27_addr_9);
    r0 = MemoryInline::FlatRead8((r6 + 1));
    r4 = (r4 + 8);
    r3 = (r3 + r5);
    r5 = MemoryInline::FlatRead8((r6 + 2));
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r6 + 3));
    r3 = (r3 + r5);
    r5 = MemoryInline::FlatRead8((r6 + 4));
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r6 + 5));
    r3 = (r3 + r5);
    r5 = MemoryInline::FlatRead8((r6 + 6));
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r6 + 7));
    r3 = (r3 + r5);
    r3 = (r3 + r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804F40F4;
    }
}

loc_804F4140:
{
    r6 = (r15 + 9);
    r5 = (r27 + r4);
    r0 = (r6 - r4);
    ctr = r0;
}

loc_804F4154:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r6))) {
        goto loc_804F416C;
    }
}

loc_804F4158:
{
    r0 = MemoryInline::FlatRead8(r5);
    r4 = (r4 + 1);
    r5 = (r5 + 1);
    r3 = (r3 + r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804F4158;
    }
}

loc_804F416C:
{
    r17 = (r27 + r15);
    r3 = (r3 + 85);
    r0 = MemoryInline::FlatRead8((r17 + 9));
    r3 = (r3 & 255);
}

loc_804F4180:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_804F4224;
    }
}

loc_804F4184:
{
    r3 = (r31 + 468);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804FA160u>(&func_804FA160)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        func_804FA160_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804FA160u>(ctx);
        r1 = ctx->gpr[1];
    }
    guest_range_2 = MemoryInline::ResolveRangeHost(r17, 0, 9u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r17 + 3));
    r3 = MemoryInline::ReadResolved8(guest_range_2, 0u, r17);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_15 & 3);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0_mrot_1 = (r0_rot_16 & 1020);
    r0_mdest_1 = (r0 & -1021);
    r0 = (r0_mdest_1 | r0_mrot_1);
    guest_range_7 = MemoryInline::ResolveRangeHost((r28 + 2164), 0, 14u, false, true);
    MemoryInline::WriteResolved16(guest_range_7, 0u, (r28 + 2164), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r17 + 3));
    r3 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r17 + 1));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_17 & 3);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0_mrot_2 = (r0_rot_18 & 1020);
    r0_mdest_2 = (r0 & -1021);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::WriteResolved16(guest_range_7, 2u, (r28 + 2166), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r17 + 3));
    r3 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r17 + 2));
    r0 = (r0 & 3);
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0_mrot_3 = (r0_rot_19 & 1020);
    r0_mdest_3 = (r0 & -1021);
    r0 = (r0_mdest_3 | r0_mrot_3);
    MemoryInline::WriteResolved16(guest_range_7, 4u, (r28 + 2168), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 7u, (r17 + 7));
    r3 = MemoryInline::ReadResolved8(guest_range_2, 4u, (r17 + 4));
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_20 & 3);
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0_mrot_4 = (r0_rot_21 & 1020);
    r0_mdest_4 = (r0 & -1021);
    r0 = (r0_mdest_4 | r0_mrot_4);
    MemoryInline::WriteResolved16(guest_range_7, 6u, (r28 + 2170), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 7u, (r17 + 7));
    r3 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r17 + 5));
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_22 & 3);
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0_mrot_5 = (r0_rot_23 & 1020);
    r0_mdest_5 = (r0 & -1021);
    r0 = (r0_mdest_5 | r0_mrot_5);
    MemoryInline::WriteResolved16(guest_range_7, 8u, (r28 + 2172), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 7u, (r17 + 7));
    r3 = MemoryInline::ReadResolved8(guest_range_2, 6u, (r17 + 6));
    r0 = (r0 & 3);
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0_mrot_6 = (r0_rot_24 & 1020);
    r0_mdest_6 = (r0 & -1021);
    r0 = (r0_mdest_6 | r0_mrot_6);
    MemoryInline::WriteResolved16(guest_range_7, 10u, (r28 + 2174), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 8u, (r17 + 8));
    r0 = (r0 & 127);
    MemoryInline::WriteResolved8(guest_range_7, 13u, (r28 + 2177), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 8u, (r17 + 8));
    r0 = (r0 & 128);
    MemoryInline::WriteResolved8(guest_range_7, 12u, (r28 + 2176), static_cast<uint8_t>(r0));
    goto loc_804F423C;
}

loc_804F4224:
{
    r3 = (r31 + 480);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804FA160u>(&func_804FA160)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        func_804FA160_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804FA160u>(ctx);
        r1 = ctx->gpr[1];
    }
    r16 = (r16 + 1);
}

loc_804F4238:
{
    if ((static_cast<uint32_t>(r16) < static_cast<uint32_t>(2))) {
        goto loc_804F4014;
    }
}

loc_804F423C:
{
    r4 = MemoryInline::FlatRead16((r28 + 2164));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = (r31 + 496);
    r5 = MemoryInline::FlatRead16((r28 + 2166));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead16((r28 + 2168));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804FA160u>(&func_804FA160)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        func_804FA160_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804FA160u>(ctx);
        r1 = ctx->gpr[1];
    }
    r4 = MemoryInline::FlatRead16((r28 + 2170));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = (r31 + 536);
    r5 = MemoryInline::FlatRead16((r28 + 2172));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead16((r28 + 2174));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804FA160u>(&func_804FA160)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        func_804FA160_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804FA160u>(ctx);
        r1 = ctx->gpr[1];
    }
    r4 = MemoryInline::FlatRead8((r28 + 2177));
    r3 = (r31 + 576);
    r5 = MemoryInline::FlatRead8((r28 + 2176));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804FA160u>(&func_804FA160)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        func_804FA160_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804FA160u>(ctx);
        r1 = ctx->gpr[1];
    }
}

loc_804F4280:
{
    r11 = (r1 + 208);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 256));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 240));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 224));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::FlatReadFloat64((r1 + 208));
    // inline leaf 0x804574A4 (18 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -68), 0, 68u, true, false);
    // end of inlined leaf 0x804574A4
    r0 = MemoryInline::FlatRead32((r1 + 276));
    ctx->lr = r0;
    r1 = (r1 + 272);
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
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804F37D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804F37D0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804F37D0 func_804F37D0 preserves=true fpr_mask=0x00000000
