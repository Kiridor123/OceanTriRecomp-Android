#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050F58(CpuContext* ctx);
extern "C" uint64_t func_80050F58_ra18_8_18_0(CpuContext*, uint32_t, uint32_t, double);

extern "C" uint64_t func_803446BC_ra38_8_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f3)
{
    uint32_t addr_psqx_80344DDC_loc_0 = 0;
    uint32_t addr_psqx_80344DE8_loc_0 = 0;
    uint32_t addr_stfsx_80344B2C_loc_0 = 0;
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
    uint32_t r0_rot_27 = 0;
    uint32_t r0_rot_28 = 0;
    uint32_t r0_rot_29 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_30 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r25_addr_0 = 0;
    uint32_t r25_addr_1 = 0;
    uint32_t r25_addr_2 = 0;
    uint32_t r25_addr_3 = 0;
    uint32_t r25_addr_4 = 0;
    uint32_t r25_addr_5 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_10 = 0;
    uint32_t r28_addr_11 = 0;
    uint32_t r28_addr_12 = 0;
    uint32_t r28_addr_13 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r28_addr_4 = 0;
    uint32_t r28_addr_5 = 0;
    uint32_t r28_addr_6 = 0;
    uint32_t r28_addr_7 = 0;
    uint32_t r28_addr_8 = 0;
    uint32_t r28_addr_9 = 0;
    uint32_t r3_addr_0 = 0;
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
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x803446BCu);
    goto loc_803446BC;

loc_803446BC:
{
    MemoryInline::FlatWriteRam32((r1 + -400), r1);
    r1 = (r1 + -400);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 404), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 384), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 392);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 368), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 376);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 368);
    // inline leaf 0x80457460 (16 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -60), 0, 60u, false, true);
    // end of inlined leaf 0x80457460
    r27 = r3;
    r28 = r4;
    r29 = r5;
    // inline leaf 0x80343AB8 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = 0x805F0000u;
    r3 = (r3 + -26328);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    // end of inlined leaf 0x80343AB8
    r7 = 0;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_803446F8:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8034479C;
    }
}

loc_803446FC:
{
    r5 = (r29 + -8);
}

loc_80344704:
{
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(8))) {
        goto loc_80344774;
    }
}

loc_80344708:
{
    r6 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80344724;
    }
}

loc_80344710:
{
    r4 = 0x80000000u;
    r0 = (r4 + -2);
}

loc_8034471C:
{
    if ((static_cast<int32_t>(r29) > static_cast<int32_t>(r0))) {
        goto loc_80344724;
    }
}

loc_80344720:
{
    r6 = 1;
}

loc_80344724:
{
}

loc_80344728:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80344774;
    }
}

loc_8034472C:
{
    r6 = (r1 + 8);
    r4 = 0;
    r0 = (r5 + 7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_80344744:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_80344774;
    }
}

loc_80344748:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r6, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r6, static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r6 + 1), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r6 + 2), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r6 + 3), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r6 + 4), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r6 + 5), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r6 + 6), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r6 + 7), static_cast<uint8_t>(r4));
    r6 = (r6 + 8);
    r7 = (r7 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80344748;
    }
}

loc_80344774:
{
    r5 = (r1 + 8);
    r5 = (r5 + r7);
    r4 = 0;
    r0 = (r29 - r7);
    ctr = r0;
}

loc_8034478C:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r29))) {
        goto loc_8034479C;
    }
}

loc_80344790:
{
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r4));
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80344790;
    }
}

loc_8034479C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 56), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8(r27);
}

loc_803447AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803447B8;
    }
}

loc_803447B0:
{
}

loc_803447B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_80344D20;
    }
}

loc_803447B8:
{
    r0 = MemoryInline::FlatRead8((r27 + 8));
}

loc_803447C0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80344CAC;
    }
}

loc_803447C4:
{
    r0 = MemoryInline::FlatRead8((r27 + 15));
}

loc_803447CC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_80344CAC;
    }
}

loc_803447D0:
{
    r7 = r28;
    r8 = (r1 + 8);
    r6 = 0;
    r5 = 1;
    ctr = r29;
}

loc_803447E8:
{
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(0))) {
        goto loc_80344830;
    }
}

loc_803447EC:
{
    r9 = MemoryInline::FlatRead32(r7);
    r4 = MemoryInline::FlatRead8((r9 + 3));
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_803447FC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8034480C;
    }
}

loc_80344800:
{
    MemoryInline::FlatWrite8((r9 + 1134), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r5));
    goto loc_80344824;
}

loc_8034480C:
{
    r0 = MemoryInline::FlatRead8((r9 + 1135));
}

loc_80344814:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_80344824;
    }
}

loc_80344818:
{
    r4 = MemoryInline::FlatRead8((r27 + 56));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r27 + 56), static_cast<uint8_t>(r0));
}

loc_80344824:
{
    r7 = (r7 + 4);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803447EC;
    }
}

loc_80344830:
{
    r31 = 0;
    r26 = 0;
    r18 = 0;
    r20 = (r1 + 8);
    r19 = r28;
    r23 = 0x80000000u;
    r21 = 0x806C0000u;
    r30 = (r21 + -2080);
    f31.d = MemoryInline::FlatReadFloat32((r2 + -10064));
    r24 = (r1 + 168);
    r25 = (r1 + 40);
    r22 = 255;
    goto loc_80344B48;
}

loc_80344864:
{
    r0 = MemoryInline::FlatRead8(r20);
}

loc_8034486C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80344B3C;
    }
}

loc_80344870:
{
    r17 = MemoryInline::FlatRead32(r19);
    r0 = MemoryInline::FlatRead8((r27 + 15));
}

loc_8034487C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80344894;
    }
}

loc_80344880:
{
}

loc_80344884:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803448B4;
    }
}

loc_80344888:
{
}

loc_8034488C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803448EC;
    }
}

loc_80344890:
{
    goto loc_80344938;
}

loc_80344894:
{
    r0 = MemoryInline::FlatRead8((r27 + 16));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3 = (r17 + r0);
    f30.d = MemoryInline::FlatReadFloat32((r3 + 1108));
    SetCRFloatResident(cr, 0, f30.d, f31.d);
}

loc_803448A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80344938;
    }
}

loc_803448AC:
{
    MemoryInline::FlatWrite8((r17 + 1134), static_cast<uint8_t>(r22));
    goto loc_80344B3C;
}

loc_803448B4:
{
    r0 = MemoryInline::FlatRead8((r21 + -2080));
}

loc_803448BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803448E4;
    }
}

loc_803448C0:
{
    r3 = MemoryInline::FlatRead8((r17 + 481));
    r0 = MemoryInline::FlatRead8((r30 + 420));
}

loc_803448CC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_803448E4;
    }
}

loc_803448D0:
{
    r3 = (r17 + 392);
    r4 = (r30 + 376);
    ctx->lr = 0x803448DCu;
    if constexpr (KnownRegArgsCpuCall<0x80050F58u>(&func_80050F58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80050F58_2BBA = func_80050F58_ra18_8_18_0(ctx, r3, r4, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80050F58_2BBA);
        r4 = static_cast<uint32_t>(regargs_result_80050F58_2BBA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80050F58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    f30.d = f1.d;
    goto loc_80344938;
}

loc_803448E4:
{
    MemoryInline::FlatWrite8((r17 + 1134), static_cast<uint8_t>(r22));
    goto loc_80344B3C;
}

loc_803448EC:
{
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl2_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl2_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CFB10;
    }
}

loc_inl2_0x800CFB08:
{
    r3 = 0;
    goto loc_inl2_cont_800CFAF4;
}

loc_inl2_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl2_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl2_0x800CFB24;
    }
}

loc_inl2_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl2_cont_800CFAF4;
}

loc_inl2_0x800CFB24:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl2_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r0 = MemoryInline::FlatRead8((r27 + 16));
    r0 = (r0 * 2840);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_80344908:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80344930;
    }
}

loc_8034490C:
{
    r3 = MemoryInline::FlatRead8((r17 + 481));
    r0 = MemoryInline::FlatRead8((r4 + 481));
}

loc_80344918:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80344930;
    }
}

loc_8034491C:
{
    r3 = (r17 + 392);
    r4 = (r4 + 392);
    ctx->lr = 0x80344928u;
    if constexpr (KnownRegArgsCpuCall<0x80050F58u>(&func_80050F58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80050F58_3678 = func_80050F58_ra18_8_18_0(ctx, r3, r4, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80050F58_3678);
        r4 = static_cast<uint32_t>(regargs_result_80050F58_3678 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80050F58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    f30.d = f1.d;
    goto loc_80344938;
}

loc_80344930:
{
    MemoryInline::FlatWrite8((r17 + 1134), static_cast<uint8_t>(r22));
    goto loc_80344B3C;
}

loc_80344938:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8034493C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8034494C;
    }
}

loc_80344940:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 168), f30.d);
    MemoryInline::FlatWriteRam32((r1 + 40), r18);
    goto loc_80344B34;
}

loc_8034494C:
{
    r5 = 0;
    r3 = (r1 + 168);
    ctr = r31;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80344B28;
    }
}

loc_8034495C:
{
    f0.d = MemoryInline::FlatReadFloat32(r3);
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_80344964:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80344B1C;
    }
}

loc_80344968:
{
    r6 = r31;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r31), static_cast<int32_t>(r5));
}

loc_80344970:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_80344B28;
    }
}

loc_80344974:
{
    r10 = (r31 - r5);
    r7 = (r5 + 8);
}

loc_80344980:
{
    if ((static_cast<int32_t>(r10) <= static_cast<int32_t>(8))) {
        goto loc_80344AD4;
    }
}

loc_80344984:
{
    r3 = 0;
    r4 = 0;
    r8 = 0;
    r9 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_803449A8;
    }
}

loc_80344998:
{
    r0 = (r23 + 1);
}

loc_803449A0:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r0))) {
        goto loc_803449A8;
    }
}

loc_803449A4:
{
    r9 = 1;
}

loc_803449A8:
{
}

loc_803449AC:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_803449C0;
    }
}

loc_803449B0:
{
    r0 = (r23 + 1);
}

loc_803449B8:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r0))) {
        goto loc_803449C0;
    }
}

loc_803449BC:
{
    r8 = 1;
}

loc_803449C0:
{
}

loc_803449C4:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_803449D8;
    }
}

loc_803449C8:
{
    r0 = (r5 + -2147483648);
}

loc_803449D0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_803449D8;
    }
}

loc_803449D4:
{
    r4 = 1;
}

loc_803449D8:
{
}

loc_803449DC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80344A14;
    }
}

loc_803449E0:
{
    r4 = 1;
    r8 = (r31 & -2147483648);
    r0 = (0 - r5);
    r0 = (r0 & -2147483648);
}

loc_803449F4:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(r0))) {
        goto loc_80344A08;
    }
}

loc_803449F8:
{
    r0 = (r10 & -2147483648);
}

loc_80344A00:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(r0))) {
        goto loc_80344A08;
    }
}

loc_80344A04:
{
    r4 = 0;
}

loc_80344A08:
{
}

loc_80344A0C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80344A14;
    }
}

loc_80344A10:
{
    r3 = 1;
}

loc_80344A14:
{
}

loc_80344A18:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80344AD4;
    }
}

loc_80344A1C:
{
    r3 = (r1 + 168);
    r3 = (r3 + r26);
    r4 = (r1 + 40);
    r4 = (r4 + r26);
    r0 = (r31 + 7);
    r0 = (r0 - r7);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_9 & 536870911);
    ctr = r0;
}

loc_80344A40:
{
    if ((static_cast<int32_t>(r31) <= static_cast<int32_t>(r7))) {
        goto loc_80344AD4;
    }
}

loc_80344A44:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + -4));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    r0 = MemoryInline::FlatRead32((r4 + -4));
    MemoryInline::FlatWrite32(r4, r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + -8));
    MemoryInline::FlatWriteFloat32((r3 + -4), f0.d);
    r0 = MemoryInline::FlatRead32((r4 + -8));
    MemoryInline::FlatWrite32((r4 + -4), r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + -12));
    MemoryInline::FlatWriteFloat32((r3 + -8), f0.d);
    r0 = MemoryInline::FlatRead32((r4 + -12));
    MemoryInline::FlatWrite32((r4 + -8), r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + -16));
    MemoryInline::FlatWriteFloat32((r3 + -12), f0.d);
    r0 = MemoryInline::FlatRead32((r4 + -16));
    MemoryInline::FlatWrite32((r4 + -12), r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + -20));
    MemoryInline::FlatWriteFloat32((r3 + -16), f0.d);
    r0 = MemoryInline::FlatRead32((r4 + -20));
    MemoryInline::FlatWrite32((r4 + -16), r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + -24));
    MemoryInline::FlatWriteFloat32((r3 + -20), f0.d);
    r0 = MemoryInline::FlatRead32((r4 + -24));
    MemoryInline::FlatWrite32((r4 + -20), r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + -28));
    MemoryInline::FlatWriteFloat32((r3 + -24), f0.d);
    r0 = MemoryInline::FlatRead32((r4 + -28));
    MemoryInline::FlatWrite32((r4 + -24), r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + -32));
    MemoryInline::FlatWriteFloat32((r3 + -28), f0.d);
    r0 = MemoryInline::FlatRead32((r4 + -32));
    MemoryInline::FlatWrite32((r4 + -28), r0);
    r3 = (r3 + -32);
    r4 = (r4 + -32);
    r6 = (r6 + -8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80344A44;
    }
}

loc_80344AD4:
{
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3 = (r1 + 168);
    r3 = (r3 + r0);
    r4 = (r1 + 40);
    r4 = (r4 + r0);
    r0 = (r6 - r5);
    ctr = r0;
}

loc_80344AF4:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(r5))) {
        goto loc_80344B28;
    }
}

loc_80344AF8:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + -4));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    r0 = MemoryInline::FlatRead32((r4 + -4));
    MemoryInline::FlatWrite32(r4, r0);
    r3 = (r3 + -4);
    r4 = (r4 + -4);
    r6 = (r6 + -1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80344AF8;
    }
}

loc_80344B18:
{
    goto loc_80344B28;
}

loc_80344B1C:
{
    r3 = (r3 + 4);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8034495C;
    }
}

loc_80344B28:
{
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    addr_stfsx_80344B2C_loc_0 = (r24 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_80344B2C_loc_0, f30.d);
    r25_addr_2 = (r25 + r0);
    MemoryInline::FlatWrite32(r25_addr_2, r18);
}

loc_80344B34:
{
    r31 = (r31 + 1);
    r26 = (r26 + 4);
}

loc_80344B3C:
{
    r20 = (r20 + 1);
    r19 = (r19 + 4);
    r18 = (r18 + 1);
}

loc_80344B48:
{
}

loc_80344B4C:
{
    if ((static_cast<int32_t>(r18) < static_cast<int32_t>(r29))) {
        goto loc_80344864;
    }
}

loc_80344B50:
{
    r4 = 0;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80344B58:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_80344D64;
    }
}

loc_80344B5C:
{
    r5 = (r31 + -8);
}

loc_80344B64:
{
    if ((static_cast<int32_t>(r31) <= static_cast<int32_t>(8))) {
        goto loc_80344C6C;
    }
}

loc_80344B68:
{
    r6 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80344B84;
    }
}

loc_80344B70:
{
    r3 = 0x80000000u;
    r0 = (r3 + -2);
}

loc_80344B7C:
{
    if ((static_cast<int32_t>(r31) > static_cast<int32_t>(r0))) {
        goto loc_80344B84;
    }
}

loc_80344B80:
{
    r6 = 1;
}

loc_80344B84:
{
}

loc_80344B88:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80344C6C;
    }
}

loc_80344B8C:
{
    r3 = (r1 + 40);
    r0 = (r5 + 7);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_16 & 536870911);
    ctr = r0;
}

loc_80344BA0:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_80344C6C;
    }
}

loc_80344BA4:
{
    r6 = (r4 & 255);
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 0u, r3);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_18 & -4);
    r28_addr_2 = (r28 + r0);
    r5 = MemoryInline::FlatRead32(r28_addr_2);
    MemoryInline::FlatWrite8((r5 + 1134), static_cast<uint8_t>(r6));
    r0 = (r4 + 1);
    r6 = (r0 & 255);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r3 + 4));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_19 & -4);
    r28_addr_3 = (r28 + r0);
    r5 = MemoryInline::FlatRead32(r28_addr_3);
    MemoryInline::FlatWrite8((r5 + 1134), static_cast<uint8_t>(r6));
    r0 = (r4 + 2);
    r6 = (r0 & 255);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r3 + 8));
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_20 & -4);
    r28_addr_4 = (r28 + r0);
    r5 = MemoryInline::FlatRead32(r28_addr_4);
    MemoryInline::FlatWrite8((r5 + 1134), static_cast<uint8_t>(r6));
    r0 = (r4 + 3);
    r6 = (r0 & 255);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r3 + 12));
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_21 & -4);
    r28_addr_5 = (r28 + r0);
    r5 = MemoryInline::FlatRead32(r28_addr_5);
    MemoryInline::FlatWrite8((r5 + 1134), static_cast<uint8_t>(r6));
    r0 = (r4 + 4);
    r6 = (r0 & 255);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r3 + 16));
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_22 & -4);
    r28_addr_6 = (r28 + r0);
    r5 = MemoryInline::FlatRead32(r28_addr_6);
    MemoryInline::FlatWrite8((r5 + 1134), static_cast<uint8_t>(r6));
    r0 = (r4 + 5);
    r6 = (r0 & 255);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r3 + 20));
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_23 & -4);
    r28_addr_7 = (r28 + r0);
    r5 = MemoryInline::FlatRead32(r28_addr_7);
    MemoryInline::FlatWrite8((r5 + 1134), static_cast<uint8_t>(r6));
    r0 = (r4 + 6);
    r6 = (r0 & 255);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r3 + 24));
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_24 & -4);
    r28_addr_8 = (r28 + r0);
    r5 = MemoryInline::FlatRead32(r28_addr_8);
    MemoryInline::FlatWrite8((r5 + 1134), static_cast<uint8_t>(r6));
    r0 = (r4 + 7);
    r6 = (r0 & 255);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r3 + 28));
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_25 & -4);
    r28_addr_9 = (r28 + r0);
    r5 = MemoryInline::FlatRead32(r28_addr_9);
    MemoryInline::FlatWrite8((r5 + 1134), static_cast<uint8_t>(r6));
    r3 = (r3 + 32);
    r4 = (r4 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80344BA4;
    }
}

loc_80344C6C:
{
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_27 & -4);
    r6 = (r1 + 40);
    r6 = (r6 + r0);
    r0 = (r31 - r4);
    ctr = r0;
}

loc_80344C84:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r31))) {
        goto loc_80344D64;
    }
}

loc_80344C88:
{
    r5 = (r4 & 255);
    r0 = MemoryInline::FlatRead32(r6);
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_29 & -4);
    r28_addr_12 = (r28 + r0);
    r3 = MemoryInline::FlatRead32(r28_addr_12);
    MemoryInline::FlatWrite8((r3 + 1134), static_cast<uint8_t>(r5));
    r6 = (r6 + 4);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80344C88;
    }
}

loc_80344CA8:
{
    goto loc_80344D64;
}

loc_80344CAC:
{
    r10 = 0;
    r7 = r28;
    r8 = (r1 + 8);
    r6 = 0;
    r5 = 1;
    ctr = r29;
}

loc_80344CC8:
{
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(0))) {
        goto loc_80344D64;
    }
}

loc_80344CCC:
{
    r9 = MemoryInline::FlatRead32(r7);
    r4 = MemoryInline::FlatRead8((r9 + 3));
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_80344CDC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80344CEC;
    }
}

loc_80344CE0:
{
    MemoryInline::FlatWrite8((r9 + 1134), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r5));
    goto loc_80344D10;
}

loc_80344CEC:
{
    r0 = (r10 & 255);
    MemoryInline::FlatWrite8((r9 + 1134), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r9 + 1135));
}

loc_80344CFC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_80344D0C;
    }
}

loc_80344D00:
{
    r4 = MemoryInline::FlatRead8((r27 + 56));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r27 + 56), static_cast<uint8_t>(r0));
}

loc_80344D0C:
{
    r10 = (r10 + 1);
}

loc_80344D10:
{
    r7 = (r7 + 4);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80344CCC;
    }
}

loc_80344D1C:
{
    goto loc_80344D64;
}

loc_80344D20:
{
    r5 = 0;
    r4 = r28;
    ctr = r29;
}

loc_80344D30:
{
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(0))) {
        goto loc_80344D64;
    }
}

loc_80344D34:
{
    r3 = MemoryInline::FlatRead32(r4);
    r0 = (r5 & 255);
    MemoryInline::FlatWrite8((r3 + 1134), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 1135));
}

loc_80344D48:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_80344D58;
    }
}

loc_80344D4C:
{
    r3 = MemoryInline::FlatRead8((r27 + 56));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r27 + 56), static_cast<uint8_t>(r0));
}

loc_80344D58:
{
    r4 = (r4 + 4);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80344D34;
    }
}

loc_80344D64:
{
    r3 = MemoryInline::FlatRead8((r27 + 57));
}

loc_80344D6C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r29))) {
        goto loc_80344DD8;
    }
}

loc_80344D70:
{
    r0 = MemoryInline::FlatRead8((r27 + 56));
    r3 = (r3 - r0);
}

loc_80344D7C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80344DD8;
    }
}

loc_80344D80:
{
    r0 = (r3 + -1);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r27 + 55), static_cast<uint8_t>(r0));
    r5 = 0;
    r4 = (r1 + 8);
    goto loc_80344DCC;
}

loc_80344D98:
{
    r0 = MemoryInline::FlatRead8(r4);
}

loc_80344DA0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80344DC0;
    }
}

loc_80344DA4:
{
    r3 = MemoryInline::FlatRead32(r28);
    r0 = MemoryInline::FlatRead8((r3 + 1135));
}

loc_80344DB0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_80344DC0;
    }
}

loc_80344DB4:
{
    r3 = MemoryInline::FlatRead8((r27 + 55));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r27 + 55), static_cast<uint8_t>(r0));
}

loc_80344DC0:
{
    r4 = (r4 + 1);
    r28 = (r28 + 4);
    r5 = (r5 + 1);
}

loc_80344DCC:
{
    r0 = MemoryInline::FlatRead8((r27 + 55));
}

loc_80344DD4:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(r0))) {
        goto loc_80344D98;
    }
}

loc_80344DD8:
{
    r0 = 392;
    addr_psqx_80344DDC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80344DDC_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 384));
    r0 = 376;
    addr_psqx_80344DE8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80344DE8_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 368));
    r11 = (r1 + 368);
    // inline leaf 0x804574AC (16 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -60), 0, 60u, true, false);
    // end of inlined leaf 0x804574AC
    r0 = MemoryInline::FlatRead32((r1 + 404));
    ctx->lr = r0;
    r1 = (r1 + 400);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803446BC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803446BC_ra38_8_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0xC0000009 fpr_write=0xC000001F fpr_return=0x00000002 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803446BC func_803446BC preserves=true fpr_mask=0x00000000
