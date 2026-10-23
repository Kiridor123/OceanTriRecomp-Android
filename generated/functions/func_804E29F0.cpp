#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

template <bool gqr_entry_profile>
MKW_PPC_NO_INLINE static void func_804E29F0_gqr_impl(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    double leaf_stack_saved_f25_entry = 0.0;
    double leaf_stack_saved_f26_entry = 0.0;
    double leaf_stack_saved_f27_entry = 0.0;
    double leaf_stack_saved_f28_entry = 0.0;
    double leaf_stack_saved_f29_entry = 0.0;
    double leaf_stack_saved_f30_entry = 0.0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint32_t r10_psq_ea_0 = 0;
    uint32_t r10_psq_ea_1 = 0;
    uint32_t r10_psq_ea_10 = 0;
    uint32_t r10_psq_ea_11 = 0;
    uint32_t r10_psq_ea_12 = 0;
    uint32_t r10_psq_ea_13 = 0;
    uint32_t r10_psq_ea_14 = 0;
    uint32_t r10_psq_ea_15 = 0;
    uint32_t r10_psq_ea_16 = 0;
    uint32_t r10_psq_ea_2 = 0;
    uint32_t r10_psq_ea_3 = 0;
    uint32_t r10_psq_ea_4 = 0;
    uint32_t r10_psq_ea_5 = 0;
    uint32_t r10_psq_ea_6 = 0;
    uint32_t r10_psq_ea_7 = 0;
    uint32_t r10_psq_ea_8 = 0;
    uint32_t r10_psq_ea_9 = 0;
    uint32_t r10_psq_tmp_0 = 0;
    uint32_t r10_psq_tmp_1 = 0;
    uint32_t r10_psq_tmp_10 = 0;
    uint32_t r10_psq_tmp_11 = 0;
    uint32_t r10_psq_tmp_12 = 0;
    uint32_t r10_psq_tmp_13 = 0;
    uint32_t r10_psq_tmp_14 = 0;
    uint32_t r10_psq_tmp_15 = 0;
    uint32_t r10_psq_tmp_16 = 0;
    uint32_t r10_psq_tmp_17 = 0;
    uint32_t r10_psq_tmp_18 = 0;
    uint32_t r10_psq_tmp_19 = 0;
    uint32_t r10_psq_tmp_2 = 0;
    uint32_t r10_psq_tmp_20 = 0;
    uint32_t r10_psq_tmp_21 = 0;
    uint32_t r10_psq_tmp_22 = 0;
    uint32_t r10_psq_tmp_3 = 0;
    uint32_t r10_psq_tmp_4 = 0;
    uint32_t r10_psq_tmp_5 = 0;
    uint32_t r10_psq_tmp_6 = 0;
    uint32_t r10_psq_tmp_7 = 0;
    uint32_t r10_psq_tmp_8 = 0;
    uint32_t r10_psq_tmp_9 = 0;
    uint32_t r3_psq_addr_0 = 0;
    uint32_t r3_psq_addr_1 = 0;
    uint32_t r3_psq_addr_2 = 0;
    uint32_t r3_psq_addr_3 = 0;
    uint32_t r3_psq_addr_4 = 0;
    uint32_t r3_psq_addr_5 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_8 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r5_psq_addr_0 = 0;
    uint32_t r5_psq_addr_1 = 0;
    uint32_t r5_psq_addr_2 = 0;
    uint32_t r5_psq_addr_3 = 0;
    uint32_t r5_psq_addr_4 = 0;
    uint32_t r5_psq_addr_5 = 0;
    uint32_t r5_psq_addr_6 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_3 = 0;
    uint32_t r5_psq_tmp_4 = 0;
    uint32_t r5_psq_tmp_5 = 0;
    uint32_t r5_psq_tmp_6 = 0;
    uint32_t r5_psq_tmp_7 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r6_psq_tmp_0 = 0;
    uint32_t r6_psq_tmp_1 = 0;
    uint32_t r6_psq_tmp_2 = 0;
    uint32_t r6_psq_tmp_3 = 0;
    uint32_t r6_psq_tmp_4 = 0;
    uint32_t r6_psq_tmp_5 = 0;
    uint32_t r6_psq_tmp_6 = 0;
    uint32_t r6_psq_tmp_7 = 0;
    uint32_t r7_psq_tmp_0 = 0;
    uint32_t r7_psq_tmp_1 = 0;
    uint32_t r7_psq_tmp_2 = 0;
    uint32_t r7_psq_tmp_3 = 0;
    uint32_t r7_psq_tmp_4 = 0;
    uint32_t r7_psq_tmp_5 = 0;
    uint32_t r7_psq_tmp_6 = 0;
    uint32_t r7_psq_tmp_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_10 = nullptr;
    uint8_t* guest_range_11 = nullptr;
    uint8_t* guest_range_12 = nullptr;
    uint8_t* guest_range_13 = nullptr;
    uint8_t* guest_range_14 = nullptr;
    uint8_t* guest_range_15 = nullptr;
    uint8_t* guest_range_16 = nullptr;
    uint8_t* guest_range_17 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;
    uint8_t* guest_range_9 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_804E29F0;

loc_804E29F0:
{
    leaf_stack_saved_f25_entry = f25.d;
    leaf_stack_saved_f26_entry = f26.d;
    leaf_stack_saved_f27_entry = f27.d;
    leaf_stack_saved_f28_entry = f28.d;
    leaf_stack_saved_f29_entry = f29.d;
    leaf_stack_saved_f30_entry = f30.d;
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5 = 0x80760000u;
    r7 = 8;
    r5 = (r5 + -11072);
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -1784), 0, 20u, true, false);
    f29.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -1784));
    r10 = (r5 + -8);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 4u);
        if (resolved_pair.valid) {
            f28.d = PpcBitCastToFloatInline(resolved_pair.first);
            f27.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f28.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -1780));
            f27.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -1776));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 12u);
        if (resolved_pair.valid) {
            f26.d = PpcBitCastToFloatInline(resolved_pair.first);
            f25.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f26.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -1772));
            f25.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -1768));
        }
    }
    guest_range_1 = MemoryInline::ResolveRangeHost((r13 + -14688), 0, 68u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -14688));
    ctr = r7;
}

loc_804E2A58:
{
    // psq_load w=0 quant=5 (using PPC_PsqL)
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 16u, true, false);
    if constexpr (gqr_entry_profile) {
        PpcSetPairedFprInline(f10, PPC_PsqLKnownResolvedInline<0u, 5u, 0x00070007u>(ctx, guest_range_2, 0u, r3));
    } else {
        PpcSetPairedFprInline(f10, PPC_PsqLResolvedInline<0u, 5u>(ctx, guest_range_2, 0u, r3));
    }
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f11, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r8 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r3 + 12));
            r8 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r3 + 8));
        }
    }
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f10.d, f11.d));
    r6 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r3 + 4));
    r0 = (r0 | r8);
    r7 = MemoryInline::ReadResolved16(guest_range_2, 2u, (r3 + 2));
}

loc_804E2A78:
{
}

loc_804E2A7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804E2BB8;
    }
}

loc_804E2A80:
{
    PpcSetPairedFprInline(f0, PPC_PsMerge00Inline(f10.d, f10.d));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_804E2A88:
{
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r10_psq_tmp_3 = (r10 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r10_psq_tmp_3, f0.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804E2B24;
    }
}

loc_804E2A90:
{
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r10_psq_tmp_4 = (r10 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r10_psq_tmp_4, f0.d);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_804E2A98:
{
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r10_psq_tmp_5 = (r10 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r10_psq_tmp_5, f0.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804E2AB4;
    }
}

loc_804E2AA0:
{
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r10_psq_ea_3 = (r10 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r10_psq_ea_3, f0.d);
    r10 = r10_psq_ea_3;
    r3 = (r3 + 16);
    r5 = (r5 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804E2A58;
    }
}

loc_804E2AB0:
{
    goto loc_804E2C78;
}

loc_804E2AB4:
{
    PpcSetPairedFprInline(f2, PPC_PsMsubInline(f10.d, PPC_PsFromScalarInline(f28.d), f10.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_addr_3 = (r5 + 32);
    PpcSetPairedFprInline(f11, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_addr_3));
    r5 = r5_psq_addr_3;
    PpcSetPairedFprInline(f1, PPC_PsSubInline(PPC_PsFromScalarInline(f28.d), PPC_PsFromScalarInline(f27.d)));
    guest_range_3 = MemoryInline::ResolveRangeHost((r3 + 16), 0, 16u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r3 + 20));
    PpcSetPairedFprInline(f9, PPC_PsMerge00Inline(f10.d, f10.d));
    r7 = MemoryInline::ReadResolved16(guest_range_3, 2u, (r3 + 18));
    PpcSetPairedFprInline(f3, PPC_PsMsubInline(f10.d, PPC_PsFromScalarInline(f29.d), f2.d));
    PpcSetPairedFprInline(f5, PPC_PsMerge11Inline(f10.d, f2.d));
    PpcSetPairedFprInline(f4, PPC_PsNmsubInline(f10.d, f1.d, f3.d));
    PpcSetPairedFprInline(f7, PPC_PsAddInline(f9.d, f5.d));
    // psq_load w=0 quant=5 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 16);
    if constexpr (gqr_entry_profile) {
        PpcSetPairedFprInline(f10, PPC_PsqLKnownResolvedInline<0u, 5u, 0x00070007u>(ctx, guest_range_3, 0u, r3_psq_tmp_3));
    } else {
        PpcSetPairedFprInline(f10, PPC_PsqLResolvedInline<0u, 5u>(ctx, guest_range_3, 0u, r3_psq_tmp_3));
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r3 + 28));
    PpcSetPairedFprInline(f5, PPC_PsSubInline(f9.d, f5.d));
    PpcSetPairedFprInline(f6, PPC_PsMerge11Inline(f3.d, f4.d));
    r8 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r3 + 24));
    PpcSetPairedFprInline(f8, PPC_PsAddInline(f9.d, f6.d));
    PpcSetPairedFprInline(f6, PPC_PsSubInline(f9.d, f6.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r10_psq_ea_4 = (r10 + 8);
    guest_range_4 = MemoryInline::ResolveRangeHost(r10_psq_ea_4, 0, 32u, false, true);
    PPC_PsqStResolvedInline<0u, 0u>(ctx, guest_range_4, 0u, r10_psq_ea_4, f7.d);
    r10 = r10_psq_ea_4;
    PpcSetPairedFprInline(f6, PPC_PsMerge10Inline(f6.d, f6.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r10_psq_ea_5 = (r10 + 8);
    PPC_PsqStResolvedInline<0u, 0u>(ctx, guest_range_4, 8u, r10_psq_ea_5, f8.d);
    r10 = r10_psq_ea_5;
    PpcSetPairedFprInline(f5, PPC_PsMerge10Inline(f5.d, f5.d));
    r0 = (r0 | r8);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r10_psq_ea_6 = (r10 + 8);
    PPC_PsqStResolvedInline<0u, 0u>(ctx, guest_range_4, 16u, r10_psq_ea_6, f6.d);
    r10 = r10_psq_ea_6;
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f10.d, f11.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r10_psq_ea_7 = (r10 + 8);
    PPC_PsqStResolvedInline<0u, 0u>(ctx, guest_range_4, 24u, r10_psq_ea_7, f5.d);
    r10 = r10_psq_ea_7;
    r3 = (r3 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804E2A78;
    }
}

loc_804E2B20:
{
    goto loc_804E2C78;
}

loc_804E2B24:
{
    // psq_load w=0 quant=5 (using PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 4);
    guest_range_5 = MemoryInline::ResolveRangeHost(r3_psq_tmp_4, 0, 28u, true, false);
    if constexpr (gqr_entry_profile) {
        PpcSetPairedFprInline(f1, PPC_PsqLKnownResolvedInline<0u, 5u, 0x00070007u>(ctx, guest_range_5, 0u, r3_psq_tmp_4));
    } else {
        PpcSetPairedFprInline(f1, PPC_PsqLResolvedInline<0u, 5u>(ctx, guest_range_5, 0u, r3_psq_tmp_4));
    }
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_3 = (r5 + 8);
    guest_range_6 = MemoryInline::ResolveRangeHost(r5_psq_tmp_3, 0, 32u, true, false);
    PpcSetPairedFprInline(f9, PPC_PsqLResolvedInline<0u, 0u>(ctx, guest_range_6, 0u, r5_psq_tmp_3));
    r0 = MemoryInline::ReadResolved32(guest_range_5, 24u, (r3 + 28));
    PpcSetPairedFprInline(f1, PPC_PsMulInline(f1.d, f9.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 16u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.second;
            r6 = resolved_pair.first;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_5, 20u, (r3 + 24));
            r6 = MemoryInline::ReadResolved32(guest_range_5, 16u, (r3 + 20));
        }
    }
    r7 = MemoryInline::ReadResolved16(guest_range_5, 14u, (r3 + 18));
    PpcSetPairedFprInline(f3, PPC_PsSubInline(f10.d, f1.d));
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f10.d, f1.d));
    PpcSetPairedFprInline(f8, PPC_PsMulInline(f3.d, PPC_PsFromScalarInline(f28.d)));
    PpcSetPairedFprInline(f4, PPC_PsMaddInline(f1.d, PPC_PsFromScalarInline(f29.d), f3.d));
    PpcSetPairedFprInline(f5, PPC_PsNmsubInline(f1.d, PPC_PsFromScalarInline(f29.d), f2.d));
    PpcSetPairedFprInline(f6, PPC_PsNmsubInline(f1.d, PPC_PsFromScalarInline(f26.d), f8.d));
    PpcSetPairedFprInline(f7, PPC_PsNmsubInline(f10.d, PPC_PsFromScalarInline(f27.d), f8.d));
    PpcSetPairedFprInline(f4, PPC_PsMerge00Inline(f2.d, f4.d));
    PpcSetPairedFprInline(f6, PPC_PsSubInline(f6.d, f2.d));
    PpcSetPairedFprInline(f5, PPC_PsMerge00Inline(f5.d, f3.d));
    PpcSetPairedFprInline(f8, PPC_PsMsubInline(f3.d, PPC_PsFromScalarInline(f29.d), f6.d));
    PpcSetPairedFprInline(f2, PPC_PsMerge11Inline(f2.d, f6.d));
    // psq_load w=0 quant=5 (using PPC_PsqL)
    r3_psq_addr_3 = (r3 + 16);
    if constexpr (gqr_entry_profile) {
        PpcSetPairedFprInline(f10, PPC_PsqLKnownResolvedInline<0u, 5u, 0x00070007u>(ctx, guest_range_5, 12u, r3_psq_addr_3));
    } else {
        PpcSetPairedFprInline(f10, PPC_PsqLResolvedInline<0u, 5u>(ctx, guest_range_5, 12u, r3_psq_addr_3));
    }
    r3 = r3_psq_addr_3;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_addr_4 = (r5 + 32);
    PpcSetPairedFprInline(f11, PPC_PsqLResolvedInline<0u, 0u>(ctx, guest_range_6, 24u, r5_psq_addr_4));
    r5 = r5_psq_addr_4;
    PpcSetPairedFprInline(f7, PPC_PsSubInline(f7.d, f8.d));
    PpcSetPairedFprInline(f9, PPC_PsAddInline(f4.d, f2.d));
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f4.d, f2.d));
    PpcSetPairedFprInline(f3, PPC_PsMerge11Inline(f8.d, f7.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r10_psq_ea_8 = (r10 + 8);
    guest_range_7 = MemoryInline::ResolveRangeHost(r10_psq_ea_8, 0, 32u, false, true);
    PPC_PsqStResolvedInline<0u, 0u>(ctx, guest_range_7, 0u, r10_psq_ea_8, f9.d);
    r10 = r10_psq_ea_8;
    r0 = (r0 | r8);
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f5.d, f3.d));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f5.d, f3.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r10_psq_ea_9 = (r10 + 8);
    PPC_PsqStResolvedInline<0u, 0u>(ctx, guest_range_7, 8u, r10_psq_ea_9, f0.d);
    r10 = r10_psq_ea_9;
    PpcSetPairedFprInline(f1, PPC_PsMerge10Inline(f1.d, f1.d));
    PpcSetPairedFprInline(f4, PPC_PsMerge10Inline(f4.d, f4.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r10_psq_ea_10 = (r10 + 8);
    PPC_PsqStResolvedInline<0u, 0u>(ctx, guest_range_7, 16u, r10_psq_ea_10, f1.d);
    r10 = r10_psq_ea_10;
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f10.d, f11.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r10_psq_ea_11 = (r10 + 8);
    PPC_PsqStResolvedInline<0u, 0u>(ctx, guest_range_7, 24u, r10_psq_ea_11, f4.d);
    r10 = r10_psq_ea_11;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804E2A78;
    }
}

loc_804E2BB4:
{
    goto loc_804E2C78;
}

loc_804E2BB8:
{
    // psq_load w=0 quant=5 (using PPC_PsqL)
    r3_psq_tmp_5 = (r3 + 4);
    guest_range_8 = MemoryInline::ResolveRangeHost(r3_psq_tmp_5, 0, 28u, true, false);
    if constexpr (gqr_entry_profile) {
        PpcSetPairedFprInline(f9, PPC_PsqLKnownResolvedInline<0u, 5u, 0x00070007u>(ctx, guest_range_8, 0u, r3_psq_tmp_5));
    } else {
        PpcSetPairedFprInline(f9, PPC_PsqLResolvedInline<0u, 5u>(ctx, guest_range_8, 0u, r3_psq_tmp_5));
    }
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_4 = (r5 + 8);
    guest_range_9 = MemoryInline::ResolveRangeHost(r5_psq_tmp_4, 0, 32u, true, false);
    PpcSetPairedFprInline(f5, PPC_PsqLResolvedInline<0u, 0u>(ctx, guest_range_9, 0u, r5_psq_tmp_4));
    PpcSetPairedFprInline(f9, PPC_PsMulInline(f9.d, f5.d));
    // psq_load w=0 quant=5 (using PPC_PsqL)
    r3_psq_tmp_6 = (r3 + 8);
    if constexpr (gqr_entry_profile) {
        PpcSetPairedFprInline(f2, PPC_PsqLKnownResolvedInline<0u, 5u, 0x00070007u>(ctx, guest_range_8, 4u, r3_psq_tmp_6));
    } else {
        PpcSetPairedFprInline(f2, PPC_PsqLResolvedInline<0u, 5u>(ctx, guest_range_8, 4u, r3_psq_tmp_6));
    }
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_5 = (r5 + 16);
    PpcSetPairedFprInline(f6, PPC_PsqLResolvedInline<0u, 0u>(ctx, guest_range_9, 8u, r5_psq_tmp_5));
    PpcSetPairedFprInline(f0, PPC_PsMerge01Inline(f10.d, f9.d));
    // psq_load w=0 quant=5 (using PPC_PsqL)
    r3_psq_tmp_7 = (r3 + 12);
    if constexpr (gqr_entry_profile) {
        PpcSetPairedFprInline(f3, PPC_PsqLKnownResolvedInline<0u, 5u, 0x00070007u>(ctx, guest_range_8, 8u, r3_psq_tmp_7));
    } else {
        PpcSetPairedFprInline(f3, PPC_PsqLResolvedInline<0u, 5u>(ctx, guest_range_8, 8u, r3_psq_tmp_7));
    }
    PpcSetPairedFprInline(f1, PPC_PsMerge01Inline(f9.d, f10.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_6 = (r5 + 24);
    PpcSetPairedFprInline(f7, PPC_PsqLResolvedInline<0u, 0u>(ctx, guest_range_9, 16u, r5_psq_tmp_6));
    r0 = MemoryInline::ReadResolved32(guest_range_8, 24u, (r3 + 28));
    PpcSetPairedFprInline(f4, PPC_PsMaddInline(f2.d, f6.d, f0.d));
    PpcSetPairedFprInline(f5, PPC_PsNmsubInline(f2.d, f6.d, f0.d));
    r8 = MemoryInline::ReadResolved32(guest_range_8, 20u, (r3 + 24));
    PpcSetPairedFprInline(f6, PPC_PsMaddInline(f3.d, f7.d, f1.d));
    r6 = MemoryInline::ReadResolved32(guest_range_8, 16u, (r3 + 20));
    PpcSetPairedFprInline(f7, PPC_PsNmsubInline(f3.d, f7.d, f1.d));
    r7 = MemoryInline::ReadResolved16(guest_range_8, 14u, (r3 + 18));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f4.d, f6.d));
    PpcSetPairedFprInline(f8, PPC_PsSubInline(f7.d, f5.d));
    PpcSetPairedFprInline(f2, PPC_PsMsubInline(f7.d, PPC_PsFromScalarInline(f29.d), f6.d));
    PpcSetPairedFprInline(f3, PPC_PsSubInline(f4.d, f6.d));
    PpcSetPairedFprInline(f8, PPC_PsMulInline(f8.d, PPC_PsFromScalarInline(f28.d)));
    PpcSetPairedFprInline(f1, PPC_PsAddInline(f5.d, f2.d));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f5.d, f2.d));
    PpcSetPairedFprInline(f6, PPC_PsNmsubInline(f5.d, PPC_PsFromScalarInline(f26.d), f8.d));
    PpcSetPairedFprInline(f4, PPC_PsMsubInline(f7.d, PPC_PsFromScalarInline(f27.d), f8.d));
    PpcSetPairedFprInline(f1, PPC_PsMerge00Inline(f0.d, f1.d));
    PpcSetPairedFprInline(f6, PPC_PsSubInline(f6.d, f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMerge00Inline(f2.d, f3.d));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, PPC_PsFromScalarInline(f29.d), f6.d));
    PpcSetPairedFprInline(f7, PPC_PsMerge11Inline(f0.d, f6.d));
    // psq_load w=0 quant=5 (using PPC_PsqL)
    r3_psq_addr_4 = (r3 + 16);
    if constexpr (gqr_entry_profile) {
        PpcSetPairedFprInline(f10, PPC_PsqLKnownResolvedInline<0u, 5u, 0x00070007u>(ctx, guest_range_8, 12u, r3_psq_addr_4));
    } else {
        PpcSetPairedFprInline(f10, PPC_PsqLResolvedInline<0u, 5u>(ctx, guest_range_8, 12u, r3_psq_addr_4));
    }
    r3 = r3_psq_addr_4;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_addr_5 = (r5 + 32);
    PpcSetPairedFprInline(f11, PPC_PsqLResolvedInline<0u, 0u>(ctx, guest_range_9, 24u, r5_psq_addr_5));
    r5 = r5_psq_addr_5;
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f4.d, f5.d));
    PpcSetPairedFprInline(f3, PPC_PsAddInline(f1.d, f7.d));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f1.d, f7.d));
    PpcSetPairedFprInline(f4, PPC_PsMerge11Inline(f5.d, f4.d));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f10.d, f11.d));
    PpcSetPairedFprInline(f5, PPC_PsAddInline(f2.d, f4.d));
    PpcSetPairedFprInline(f6, PPC_PsSubInline(f2.d, f4.d));
    PpcSetPairedFprInline(f5, PPC_PsMerge10Inline(f5.d, f5.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r10_psq_ea_12 = (r10 + 8);
    guest_range_10 = MemoryInline::ResolveRangeHost(r10_psq_ea_12, 0, 32u, false, true);
    PPC_PsqStResolvedInline<0u, 0u>(ctx, guest_range_10, 0u, r10_psq_ea_12, f3.d);
    r10 = r10_psq_ea_12;
    PpcSetPairedFprInline(f0, PPC_PsMerge10Inline(f0.d, f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r10_psq_ea_13 = (r10 + 8);
    PPC_PsqStResolvedInline<0u, 0u>(ctx, guest_range_10, 8u, r10_psq_ea_13, f6.d);
    r10 = r10_psq_ea_13;
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r10_psq_ea_14 = (r10 + 8);
    PPC_PsqStResolvedInline<0u, 0u>(ctx, guest_range_10, 16u, r10_psq_ea_14, f5.d);
    r10 = r10_psq_ea_14;
    r0 = (r0 | r8);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r10_psq_ea_15 = (r10 + 8);
    PPC_PsqStResolvedInline<0u, 0u>(ctx, guest_range_10, 24u, r10_psq_ea_15, f0.d);
    r10 = r10_psq_ea_15;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804E2A78;
    }
}

loc_804E2C78:
{
    r10 = 0x80760000u;
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r13 + -14656));
    r10 = (r10 + -11072);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & -4);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_11 = MemoryInline::ResolveRangeHost(r10, 0, 200u, true, false);
    PpcSetPairedFprInline(f10, PPC_PsqLResolvedInline<0u, 0u>(ctx, guest_range_11, 0u, r10));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r5 = (r5_rot_0 & -4);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r10_psq_tmp_7 = (r10 + 128);
    PpcSetPairedFprInline(f11, PPC_PsqLResolvedInline<0u, 0u>(ctx, guest_range_11, 128u, r10_psq_tmp_7));
    r5 = (r4 + r5);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r13 + -14624));
    r3 = 3;
    PpcSetPairedFprInline(f6, PPC_PsAddInline(f10.d, f11.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r10_psq_tmp_8 = (r10 + 64);
    PpcSetPairedFprInline(f12, PPC_PsqLResolvedInline<0u, 0u>(ctx, guest_range_11, 64u, r10_psq_tmp_8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r10_psq_tmp_9 = (r10 + 192);
    PpcSetPairedFprInline(f13, PPC_PsqLResolvedInline<0u, 0u>(ctx, guest_range_11, 192u, r10_psq_tmp_9));
    PpcSetPairedFprInline(f8, PPC_PsSubInline(f10.d, f11.d));
    r6 = (r0 + r4);
    r7 = (r0 + r5);
    PpcSetPairedFprInline(f6, PPC_PsAddInline(f6.d, PPC_PsFromScalarInline(f25.d)));
    PpcSetPairedFprInline(f7, PPC_PsAddInline(f12.d, f13.d));
    PpcSetPairedFprInline(f9, PPC_PsSubInline(f12.d, f13.d));
    PpcSetPairedFprInline(f8, PPC_PsAddInline(f8.d, PPC_PsFromScalarInline(f25.d)));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f6.d, f7.d));
    ctr = r3;
}

loc_804E2CD0:
{
    PpcSetPairedFprInline(f9, PPC_PsMsubInline(f9.d, PPC_PsFromScalarInline(f29.d), f7.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r10_psq_tmp_11 = (r10 + 32);
    guest_range_12 = MemoryInline::ResolveRangeHost((r10_psq_tmp_11 + -24), 0, 224u, true, false);
    PpcSetPairedFprInline(f4, PPC_PsqLResolvedInline<0u, 0u>(ctx, guest_range_12, 24u, r10_psq_tmp_11));
    PpcSetPairedFprInline(f3, PPC_PsSubInline(f6.d, f7.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r10_psq_tmp_12 = (r10 + 96);
    PpcSetPairedFprInline(f5, PPC_PsqLResolvedInline<0u, 0u>(ctx, guest_range_12, 88u, r10_psq_tmp_12));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r10_psq_tmp_13 = (r10 + 160);
    PpcSetPairedFprInline(f6, PPC_PsqLResolvedInline<0u, 0u>(ctx, guest_range_12, 152u, r10_psq_tmp_13));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r10_psq_tmp_14 = (r10 + 224);
    PpcSetPairedFprInline(f7, PPC_PsqLResolvedInline<0u, 0u>(ctx, guest_range_12, 216u, r10_psq_tmp_14));
    PpcSetPairedFprInline(f1, PPC_PsAddInline(f8.d, f9.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r10_psq_tmp_15 = (r10 + 8);
    PpcSetPairedFprInline(f10, PPC_PsqLResolvedInline<0u, 0u>(ctx, guest_range_12, 0u, r10_psq_tmp_15));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f8.d, f9.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r10_psq_tmp_16 = (r10 + 136);
    PpcSetPairedFprInline(f11, PPC_PsqLResolvedInline<0u, 0u>(ctx, guest_range_12, 128u, r10_psq_tmp_16));
    PpcSetPairedFprInline(f8, PPC_PsAddInline(f6.d, f5.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r10_psq_tmp_17 = (r10 + 72);
    PpcSetPairedFprInline(f12, PPC_PsqLResolvedInline<0u, 0u>(ctx, guest_range_12, 64u, r10_psq_tmp_17));
    PpcSetPairedFprInline(f9, PPC_PsAddInline(f4.d, f7.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r10_psq_tmp_18 = (r10 + 200);
    PpcSetPairedFprInline(f13, PPC_PsqLResolvedInline<0u, 0u>(ctx, guest_range_12, 192u, r10_psq_tmp_18));
    PpcSetPairedFprInline(f6, PPC_PsSubInline(f6.d, f5.d));
    r10 = (r10 + 8);
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f4.d, f7.d));
    PpcSetPairedFprInline(f7, PPC_PsAddInline(f9.d, f8.d));
    PpcSetPairedFprInline(f5, PPC_PsSubInline(f9.d, f8.d));
    PpcSetPairedFprInline(f8, PPC_PsAddInline(f6.d, f4.d));
    PpcSetPairedFprInline(f9, PPC_PsAddInline(f0.d, f7.d));
    PpcSetPairedFprInline(f30, PPC_PsSubInline(f0.d, f7.d));
    PpcSetPairedFprInline(f8, PPC_PsMulInline(f8.d, PPC_PsFromScalarInline(f28.d)));
    PpcSetPairedFprInline(f6, PPC_PsMaddInline(f6.d, PPC_PsFromScalarInline(f26.d), f8.d));
    PpcSetPairedFprInline(f6, PPC_PsSubInline(f6.d, f7.d));
    // psq_store w=0 quant=6 (using PPC_PsqSt)
    guest_range_13 = MemoryInline::ResolveRangeHost(r6, 0, 32u, false, true);
    if constexpr (gqr_entry_profile) {
        PPC_PsqStKnownResolvedInline<0u, 6u, 0x3D043D04u>(ctx, guest_range_13, 0u, r6, f9.d);
    } else {
        PPC_PsqStResolvedInline<0u, 6u>(ctx, guest_range_13, 0u, r6, f9.d);
    }
    PpcSetPairedFprInline(f4, PPC_PsMsubInline(f4.d, PPC_PsFromScalarInline(f27.d), f8.d));
    PpcSetPairedFprInline(f5, PPC_PsMsubInline(f5.d, PPC_PsFromScalarInline(f29.d), f6.d));
    PpcSetPairedFprInline(f9, PPC_PsAddInline(f1.d, f6.d));
    PpcSetPairedFprInline(f31, PPC_PsSubInline(f1.d, f6.d));
    // psq_store w=0 quant=6 (using PPC_PsqSt)
    r6_psq_tmp_2 = (r6 + 8);
    if constexpr (gqr_entry_profile) {
        PPC_PsqStKnownResolvedInline<0u, 6u, 0x3D043D04u>(ctx, guest_range_13, 8u, r6_psq_tmp_2, f9.d);
    } else {
        PPC_PsqStResolvedInline<0u, 6u>(ctx, guest_range_13, 8u, r6_psq_tmp_2, f9.d);
    }
    PpcSetPairedFprInline(f4, PPC_PsAddInline(f4.d, f5.d));
    PpcSetPairedFprInline(f8, PPC_PsAddInline(f2.d, f5.d));
    // psq_store w=0 quant=6 (using PPC_PsqSt)
    r6_psq_tmp_3 = (r6 + 16);
    if constexpr (gqr_entry_profile) {
        PPC_PsqStKnownResolvedInline<0u, 6u, 0x3D043D04u>(ctx, guest_range_13, 16u, r6_psq_tmp_3, f8.d);
    } else {
        PPC_PsqStResolvedInline<0u, 6u>(ctx, guest_range_13, 16u, r6_psq_tmp_3, f8.d);
    }
    PpcSetPairedFprInline(f9, PPC_PsSubInline(f3.d, f4.d));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f3.d, f4.d));
    // psq_store w=0 quant=6 (using PPC_PsqSt)
    r6_psq_tmp_4 = (r6 + 24);
    if constexpr (gqr_entry_profile) {
        PPC_PsqStKnownResolvedInline<0u, 6u, 0x3D043D04u>(ctx, guest_range_13, 24u, r6_psq_tmp_4, f9.d);
    } else {
        PPC_PsqStResolvedInline<0u, 6u>(ctx, guest_range_13, 24u, r6_psq_tmp_4, f9.d);
    }
    PpcSetPairedFprInline(f6, PPC_PsAddInline(f10.d, f11.d));
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f2.d, f5.d));
    // psq_store w=0 quant=6 (using PPC_PsqSt)
    guest_range_14 = MemoryInline::ResolveRangeHost(r7, 0, 32u, false, true);
    if constexpr (gqr_entry_profile) {
        PPC_PsqStKnownResolvedInline<0u, 6u, 0x3D043D04u>(ctx, guest_range_14, 0u, r7, f0.d);
    } else {
        PPC_PsqStResolvedInline<0u, 6u>(ctx, guest_range_14, 0u, r7, f0.d);
    }
    PpcSetPairedFprInline(f8, PPC_PsSubInline(f10.d, f11.d));
    PpcSetPairedFprInline(f6, PPC_PsAddInline(f6.d, PPC_PsFromScalarInline(f25.d)));
    // psq_store w=0 quant=6 (using PPC_PsqSt)
    r7_psq_tmp_2 = (r7 + 8);
    if constexpr (gqr_entry_profile) {
        PPC_PsqStKnownResolvedInline<0u, 6u, 0x3D043D04u>(ctx, guest_range_14, 8u, r7_psq_tmp_2, f1.d);
    } else {
        PPC_PsqStResolvedInline<0u, 6u>(ctx, guest_range_14, 8u, r7_psq_tmp_2, f1.d);
    }
    PpcSetPairedFprInline(f7, PPC_PsAddInline(f12.d, f13.d));
    PpcSetPairedFprInline(f9, PPC_PsSubInline(f12.d, f13.d));
    // psq_store w=0 quant=6 (using PPC_PsqSt)
    r7_psq_tmp_3 = (r7 + 16);
    if constexpr (gqr_entry_profile) {
        PPC_PsqStKnownResolvedInline<0u, 6u, 0x3D043D04u>(ctx, guest_range_14, 16u, r7_psq_tmp_3, f31.d);
    } else {
        PPC_PsqStResolvedInline<0u, 6u>(ctx, guest_range_14, 16u, r7_psq_tmp_3, f31.d);
    }
    r4 = (r4 + 2);
    r6 = (r0 + r4);
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f6.d, f7.d));
    // psq_store w=0 quant=6 (using PPC_PsqSt)
    r7_psq_tmp_4 = (r7 + 24);
    if constexpr (gqr_entry_profile) {
        PPC_PsqStKnownResolvedInline<0u, 6u, 0x3D043D04u>(ctx, guest_range_14, 24u, r7_psq_tmp_4, f30.d);
    } else {
        PPC_PsqStResolvedInline<0u, 6u>(ctx, guest_range_14, 24u, r7_psq_tmp_4, f30.d);
    }
    r5 = (r5 + 2);
    PpcSetPairedFprInline(f8, PPC_PsAddInline(f8.d, PPC_PsFromScalarInline(f25.d)));
    r7 = (r0 + r5);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804E2CD0;
    }
}

loc_804E2DA8:
{
    PpcSetPairedFprInline(f9, PPC_PsMsubInline(f9.d, PPC_PsFromScalarInline(f29.d), f7.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r10_psq_tmp_19 = (r10 + 32);
    guest_range_15 = MemoryInline::ResolveRangeHost(r10_psq_tmp_19, 0, 200u, true, false);
    PpcSetPairedFprInline(f4, PPC_PsqLResolvedInline<0u, 0u>(ctx, guest_range_15, 0u, r10_psq_tmp_19));
    PpcSetPairedFprInline(f3, PPC_PsSubInline(f6.d, f7.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r10_psq_tmp_20 = (r10 + 96);
    PpcSetPairedFprInline(f5, PPC_PsqLResolvedInline<0u, 0u>(ctx, guest_range_15, 64u, r10_psq_tmp_20));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r10_psq_tmp_21 = (r10 + 160);
    PpcSetPairedFprInline(f6, PPC_PsqLResolvedInline<0u, 0u>(ctx, guest_range_15, 128u, r10_psq_tmp_21));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r10_psq_tmp_22 = (r10 + 224);
    PpcSetPairedFprInline(f7, PPC_PsqLResolvedInline<0u, 0u>(ctx, guest_range_15, 192u, r10_psq_tmp_22));
    PpcSetPairedFprInline(f1, PPC_PsAddInline(f8.d, f9.d));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f8.d, f9.d));
    PpcSetPairedFprInline(f8, PPC_PsAddInline(f6.d, f5.d));
    PpcSetPairedFprInline(f9, PPC_PsAddInline(f4.d, f7.d));
    PpcSetPairedFprInline(f6, PPC_PsSubInline(f6.d, f5.d));
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f4.d, f7.d));
    PpcSetPairedFprInline(f7, PPC_PsAddInline(f9.d, f8.d));
    PpcSetPairedFprInline(f5, PPC_PsSubInline(f9.d, f8.d));
    PpcSetPairedFprInline(f8, PPC_PsAddInline(f6.d, f4.d));
    PpcSetPairedFprInline(f9, PPC_PsAddInline(f0.d, f7.d));
    PpcSetPairedFprInline(f30, PPC_PsSubInline(f0.d, f7.d));
    PpcSetPairedFprInline(f8, PPC_PsMulInline(f8.d, PPC_PsFromScalarInline(f28.d)));
    PpcSetPairedFprInline(f6, PPC_PsMaddInline(f6.d, PPC_PsFromScalarInline(f26.d), f8.d));
    // psq_store w=0 quant=6 (using PPC_PsqSt)
    guest_range_16 = MemoryInline::ResolveRangeHost(r6, 0, 32u, false, true);
    if constexpr (gqr_entry_profile) {
        PPC_PsqStKnownResolvedInline<0u, 6u, 0x3D043D04u>(ctx, guest_range_16, 0u, r6, f9.d);
    } else {
        PPC_PsqStResolvedInline<0u, 6u>(ctx, guest_range_16, 0u, r6, f9.d);
    }
    PpcSetPairedFprInline(f4, PPC_PsMsubInline(f4.d, PPC_PsFromScalarInline(f27.d), f8.d));
    PpcSetPairedFprInline(f6, PPC_PsSubInline(f6.d, f7.d));
    // psq_store w=0 quant=6 (using PPC_PsqSt)
    r7_psq_tmp_5 = (r7 + 24);
    guest_range_17 = MemoryInline::ResolveRangeHost((r7_psq_tmp_5 + -24), 0, 32u, false, true);
    if constexpr (gqr_entry_profile) {
        PPC_PsqStKnownResolvedInline<0u, 6u, 0x3D043D04u>(ctx, guest_range_17, 24u, r7_psq_tmp_5, f30.d);
    } else {
        PPC_PsqStResolvedInline<0u, 6u>(ctx, guest_range_17, 24u, r7_psq_tmp_5, f30.d);
    }
    PpcSetPairedFprInline(f9, PPC_PsAddInline(f1.d, f6.d));
    PpcSetPairedFprInline(f5, PPC_PsMsubInline(f5.d, PPC_PsFromScalarInline(f29.d), f6.d));
    PpcSetPairedFprInline(f31, PPC_PsSubInline(f1.d, f6.d));
    // psq_store w=0 quant=6 (using PPC_PsqSt)
    r6_psq_tmp_5 = (r6 + 8);
    if constexpr (gqr_entry_profile) {
        PPC_PsqStKnownResolvedInline<0u, 6u, 0x3D043D04u>(ctx, guest_range_16, 8u, r6_psq_tmp_5, f9.d);
    } else {
        PPC_PsqStResolvedInline<0u, 6u>(ctx, guest_range_16, 8u, r6_psq_tmp_5, f9.d);
    }
    PpcSetPairedFprInline(f4, PPC_PsAddInline(f4.d, f5.d));
    PpcSetPairedFprInline(f8, PPC_PsAddInline(f2.d, f5.d));
    // psq_store w=0 quant=6 (using PPC_PsqSt)
    r7_psq_tmp_6 = (r7 + 16);
    if constexpr (gqr_entry_profile) {
        PPC_PsqStKnownResolvedInline<0u, 6u, 0x3D043D04u>(ctx, guest_range_17, 16u, r7_psq_tmp_6, f31.d);
    } else {
        PPC_PsqStResolvedInline<0u, 6u>(ctx, guest_range_17, 16u, r7_psq_tmp_6, f31.d);
    }
    // psq_store w=0 quant=6 (using PPC_PsqSt)
    r6_psq_tmp_6 = (r6 + 16);
    if constexpr (gqr_entry_profile) {
        PPC_PsqStKnownResolvedInline<0u, 6u, 0x3D043D04u>(ctx, guest_range_16, 16u, r6_psq_tmp_6, f8.d);
    } else {
        PPC_PsqStResolvedInline<0u, 6u>(ctx, guest_range_16, 16u, r6_psq_tmp_6, f8.d);
    }
    PpcSetPairedFprInline(f9, PPC_PsSubInline(f3.d, f4.d));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f3.d, f4.d));
    // psq_store w=0 quant=6 (using PPC_PsqSt)
    r6_psq_tmp_7 = (r6 + 24);
    if constexpr (gqr_entry_profile) {
        PPC_PsqStKnownResolvedInline<0u, 6u, 0x3D043D04u>(ctx, guest_range_16, 24u, r6_psq_tmp_7, f9.d);
    } else {
        PPC_PsqStResolvedInline<0u, 6u>(ctx, guest_range_16, 24u, r6_psq_tmp_7, f9.d);
    }
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f2.d, f5.d));
    // psq_store w=0 quant=6 (using PPC_PsqSt)
    if constexpr (gqr_entry_profile) {
        PPC_PsqStKnownResolvedInline<0u, 6u, 0x3D043D04u>(ctx, guest_range_17, 0u, r7, f0.d);
    } else {
        PPC_PsqStResolvedInline<0u, 6u>(ctx, guest_range_17, 0u, r7, f0.d);
    }
    // psq_store w=0 quant=6 (using PPC_PsqSt)
    r7_psq_tmp_7 = (r7 + 8);
    if constexpr (gqr_entry_profile) {
        PPC_PsqStKnownResolvedInline<0u, 6u, 0x3D043D04u>(ctx, guest_range_17, 8u, r7_psq_tmp_7, f1.d);
    } else {
        PPC_PsqStResolvedInline<0u, 6u>(ctx, guest_range_17, 8u, r7_psq_tmp_7, f1.d);
    }
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = leaf_stack_saved_f31_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = leaf_stack_saved_f30_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = leaf_stack_saved_f29_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = leaf_stack_saved_f28_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = leaf_stack_saved_f27_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = leaf_stack_saved_f26_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f25.d = leaf_stack_saved_f25_entry;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[10] = r10;
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
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

extern "C" void func_804E29F0(CpuContext* MKW_RESTRICT ctx)
{
    if (ctx->gqr[5u] == 0x00070007u && ctx->gqr[6u] == 0x3D043D04u)
        func_804E29F0_gqr_impl<true>(ctx);
    else
        func_804E29F0_gqr_impl<false>(ctx);
}

// RECOMP_GUEST_ABI gpr_read=0x000025FF gpr_write=0x000005FB gpr_return=0x00000018 fpr_read=0xFE000FFF fpr_write=0xFE003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804E29F0 func_804E29F0 preserves=true fpr_mask=0x00000000


extern "C" uint64_t func_804E29F0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    ctx->gpr[5] = arg_r5;
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    [[clang::noinline]] func_804E29F0(ctx);
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
}
