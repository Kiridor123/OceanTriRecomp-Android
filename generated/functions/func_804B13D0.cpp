#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804D16C0(CpuContext* ctx);
extern "C" uint64_t func_804D16C0_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_804B13D0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_10 = 0;
    uint32_t r6_rot_11 = 0;
    uint32_t r6_rot_12 = 0;
    uint32_t r6_rot_13 = 0;
    uint32_t r6_rot_14 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r6_rot_8 = 0;
    uint32_t r6_rot_9 = 0;
    uint32_t r6_subfic_ra_0 = 0;
    uint32_t r6_subfic_ra_1 = 0;
    uint32_t r6_subfic_ra_10 = 0;
    uint32_t r6_subfic_ra_11 = 0;
    uint32_t r6_subfic_ra_2 = 0;
    uint32_t r6_subfic_ra_3 = 0;
    uint32_t r6_subfic_ra_4 = 0;
    uint32_t r6_subfic_ra_5 = 0;
    uint32_t r6_subfic_ra_6 = 0;
    uint32_t r6_subfic_ra_7 = 0;
    uint32_t r6_subfic_ra_8 = 0;
    uint32_t r6_subfic_ra_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804B13D0u);
    goto loc_804B13D0;

loc_804B13D0:
{
    MemoryHw::FlatWriteRam32((r1 + -752), r1);
    r1 = (r1 + -752);
    r0 = ctx->lr;
    MemoryHw::FlatWriteRam32((r1 + 756), r0);
    r11 = (r1 + 752);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r4;
    r0 = (r3 + -10);
    r4 = 1431633920;
    r4 = (r4 + 21846);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    r29 = (r4 + r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(6));
    r0 = (r0_rot_1 & -64);
    r4 = 0x80750000u;
    r4 = (r4 + -28640);
    r30 = (r4 + r0);
    r31 = 0x80000000u;
    r3 = PPC_Srw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r3));
    ctx->lr = 0x804B141Cu;
    if constexpr (KnownRegArgsCpuCall<0x804D16C0u>(&func_804D16C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804D16C0_DC5 = func_804D16C0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804D16C0_DC5);
        r4 = static_cast<uint32_t>(regargs_result_804D16C0_DC5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804D16C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = (r29 * 20);
    r0 = -855638016;
    r3 = (r0 + r3);
    r0 = MemoryHw::FlatRead32((r3 + 26624));
    r0 = (r0 & 2037);
}

loc_804B1430:
{
    r0 = (r0 | 8);
    MemoryHw::FlatWrite32((r3 + 26624), r0);
    r28 = MemoryHw::FlatRead32((r30 + 4));
}

loc_804B1440:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_804B15D0;
    }
}

loc_804B1444:
{
    r0 = 0;
    MemoryHw::FlatWrite32((r30 + 4), r0);
    r0 = MemoryHw::FlatRead32((r30 + 12));
    r0 = (r0 & 3);
}

loc_804B1454:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B159C;
    }
}

loc_804B1458:
{
    r0 = MemoryHw::FlatRead32((r30 + 12));
    r0 = (r0 & 2);
}

loc_804B1460:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B1590;
    }
}

loc_804B1464:
{
    r5 = MemoryHw::FlatRead32((r30 + 16));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_804B146C:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_804B1590;
    }
}

loc_804B1470:
{
    r4 = MemoryHw::FlatRead32((r30 + 20));
    r0 = MemoryHw::FlatRead32((r3 + 26640));
    r3 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_804B1590;
    }
}

loc_804B1480:
{
    r7 = (r5 + -8);
}

loc_804B1488:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(8))) {
        goto loc_804B1564;
    }
}

loc_804B148C:
{
    r8 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_804B14A4;
    }
}

loc_804B1494:
{
    r6 = (r31 + -2);
}

loc_804B149C:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r6))) {
        goto loc_804B14A4;
    }
}

loc_804B14A0:
{
    r8 = 1;
}

loc_804B14A4:
{
}

loc_804B14A8:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_804B1564;
    }
}

loc_804B14AC:
{
    r6 = (r7 + 7);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r6 = (r6_rot_1 & 536870911);
    ctr = r6;
}

loc_804B14BC:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(0))) {
        goto loc_804B1564;
    }
}

loc_804B14C0:
{
    r6 = (3 - r3);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r6 = (r6_rot_3 & -8);
    r6 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    guest_range_0 = MemoryHw::ResolveRangeHost(r4, 0, 8u, false, true);
    MemoryHw::WriteResolved8(guest_range_0, 0u, r4, static_cast<uint8_t>(r6));
    r6 = (r3 + 1);
    r6_subfic_ra_2 = r6;
    r6 = (3 - r6_subfic_ra_2);
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r6 = (r6_rot_4 & -8);
    r6 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    MemoryHw::WriteResolved8(guest_range_0, 1u, (r4 + 1), static_cast<uint8_t>(r6));
    r6 = (r3 + 2);
    r6_subfic_ra_3 = r6;
    r6 = (3 - r6_subfic_ra_3);
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r6 = (r6_rot_5 & -8);
    r6 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    MemoryHw::WriteResolved8(guest_range_0, 2u, (r4 + 2), static_cast<uint8_t>(r6));
    r6 = (0 - r3);
    r6_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r6 = (r6_rot_6 & -8);
    r6 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    MemoryHw::WriteResolved8(guest_range_0, 3u, (r4 + 3), static_cast<uint8_t>(r6));
    r6 = (r3 + 4);
    r6_subfic_ra_4 = r6;
    r6 = (3 - r6_subfic_ra_4);
    r6_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r6 = (r6_rot_7 & -8);
    r6 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    MemoryHw::WriteResolved8(guest_range_0, 4u, (r4 + 4), static_cast<uint8_t>(r6));
    r6 = (r3 + 5);
    r6_subfic_ra_5 = r6;
    r6 = (3 - r6_subfic_ra_5);
    r6_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r6 = (r6_rot_8 & -8);
    r6 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    MemoryHw::WriteResolved8(guest_range_0, 5u, (r4 + 5), static_cast<uint8_t>(r6));
    r6 = (r3 + 6);
    r6_subfic_ra_6 = r6;
    r6 = (3 - r6_subfic_ra_6);
    r6_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r6 = (r6_rot_9 & -8);
    r6 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    MemoryHw::WriteResolved8(guest_range_0, 6u, (r4 + 6), static_cast<uint8_t>(r6));
    r6 = (r3 + 7);
    r6_subfic_ra_7 = r6;
    r6 = (3 - r6_subfic_ra_7);
    r6_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r6 = (r6_rot_10 & -8);
    r6 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    MemoryHw::WriteResolved8(guest_range_0, 7u, (r4 + 7), static_cast<uint8_t>(r6));
    r4 = (r4 + 8);
    r3 = (r3 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804B14C0;
    }
}

loc_804B1564:
{
    r6 = (r5 - r3);
    ctr = r6;
}

loc_804B1570:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r5))) {
        goto loc_804B1590;
    }
}

loc_804B1574:
{
    r5 = (3 - r3);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r5 = (r5_rot_2 & -8);
    r5 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    MemoryHw::FlatWrite8(r4, static_cast<uint8_t>(r5));
    r4 = (r4 + 1);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804B1574;
    }
}

loc_804B1590:
{
    r0 = MemoryHw::FlatRead32((r30 + 12));
    r0 = (r0 & -4);
    MemoryHw::FlatWrite32((r30 + 12), r0);
}

loc_804B159C:
{
    r3 = (r1 + 8);
    // inline leaf 0x804CD870 (9 guest instruction(s))
}

loc_inl1_0x804CD870:
{
    r5 = 0;
    MemoryHw::FlatWriteRam16((r3 + 416), static_cast<uint16_t>(r5));
    r4 = 0x80000000u;
    MemoryHw::FlatWriteRam16((r3 + 418), static_cast<uint16_t>(r5));
    r0 = MemoryHw::FlatRead32((r4 + 216));
}

loc_inl1_0x804CD888:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x804CD88C:
{
    MemoryHw::FlatWriteRam32((r4 + 216), r5);
    goto loc_inl1_cont_804CD870;
}

loc_inl1_return:
{
}

loc_inl1_cont_804CD870:
{
    // end of inlined leaf 0x804CD870
    r3 = (r1 + 8);
    // inline leaf 0x804CD630 (23 guest instruction(s))
}

loc_inl2_0x804CD630:
{
    r4 = 0x80000000u;
    MemoryHw::FlatWriteRam32((r4 + 212), r3);
    r5 = (r3 & 1073741823);
    MemoryHw::FlatWriteRam32((r4 + 192), r5);
    r5 = MemoryHw::FlatRead32((r4 + 216));
}

loc_inl2_0x804CD648:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r3))) {
        goto loc_inl2_0x804CD668;
    }
}

loc_inl2_0x804CD64C:
{
    r6 = MemoryHw::FlatRead32((r3 + 412));
    r6 = (r6 | 8192);
    MemoryHw::FlatWriteRam32((r3 + 412), r6);
    r6 = ctx->msr;
    r6 = (r6 | 2);
    ctx->msr = r6;
    goto loc_inl2_cont_804CD630;
}

loc_inl2_0x804CD668:
{
    r6 = MemoryHw::FlatRead32((r3 + 412));
    r6 = (r6 & -8193);
    MemoryHw::FlatWriteRam32((r3 + 412), r6);
    r6 = ctx->msr;
    r6 = (r6 & -8193);
    r6 = (r6 | 2);
    ctx->msr = r6;
    // isync @ 0x804CD684 (no-op)
}

loc_inl2_cont_804CD630:
{
    // end of inlined leaf 0x804CD630
    r3 = r29;
    r4 = r27;
    r12 = r28;
    ctr = r12;
    ctx->lr = 0x804B15C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 8);
    // inline leaf 0x804CD870 (9 guest instruction(s))
}

loc_inl3_0x804CD870:
{
    r5 = 0;
    MemoryHw::FlatWriteRam16((r3 + 416), static_cast<uint16_t>(r5));
    r4 = 0x80000000u;
    MemoryHw::FlatWriteRam16((r3 + 418), static_cast<uint16_t>(r5));
    r0 = MemoryHw::FlatRead32((r4 + 216));
}

loc_inl3_0x804CD888:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x804CD88C:
{
    MemoryHw::FlatWriteRam32((r4 + 216), r5);
    goto loc_inl3_cont_804CD870;
}

loc_inl3_return:
{
}

loc_inl3_cont_804CD870:
{
    // end of inlined leaf 0x804CD870
    r3 = r27;
    // inline leaf 0x804CD630 (23 guest instruction(s))
}

loc_inl4_0x804CD630:
{
    r4 = 0x80000000u;
    MemoryHw::FlatWriteRam32((r4 + 212), r3);
    r5 = (r3 & 1073741823);
    MemoryHw::FlatWriteRam32((r4 + 192), r5);
    r5 = MemoryHw::FlatRead32((r4 + 216));
}

loc_inl4_0x804CD648:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r3))) {
        goto loc_inl4_0x804CD668;
    }
}

loc_inl4_0x804CD64C:
{
    r6 = MemoryHw::FlatRead32((r3 + 412));
    r6 = (r6 | 8192);
    MemoryHw::FlatWrite32((r3 + 412), r6);
    r6 = ctx->msr;
    r6 = (r6 | 2);
    ctx->msr = r6;
    goto loc_inl4_cont_804CD630;
}

loc_inl4_0x804CD668:
{
    r6 = MemoryHw::FlatRead32((r3 + 412));
    r6 = (r6 & -8193);
    MemoryHw::FlatWrite32((r3 + 412), r6);
    r6 = ctx->msr;
    r6 = (r6 & -8193);
    r6 = (r6 | 2);
    ctx->msr = r6;
    // isync @ 0x804CD684 (no-op)
}

loc_inl4_cont_804CD630:
{
    // end of inlined leaf 0x804CD630
}

loc_804B15D0:
{
    r11 = (r1 + 752);
    r0 = MemoryHw::FlatRead32((r1 + 756));
    ctx->lr = r0;
    r1 = (r1 + 752);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804B13D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804B13D0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804B13D0 func_804B13D0 preserves=true fpr_mask=0x00000000
