#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800AFA8C_ra38_46_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f6)
{
    uint32_t addr_psqx_800B0074_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;
    uint32_t r4_psq_tmp_7 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_3 = 0;
    uint32_t r5_psq_tmp_4 = 0;
    uint32_t r5_psq_tmp_5 = 0;
    uint32_t r5_psq_tmp_6 = 0;
    uint32_t r5_psq_tmp_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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
    PPC_FPR f31 = ctx->fpr[31];
    ctx->fpr[6].d = arg_f6;
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x800AFA8Cu);
    goto loc_800AFA8C;

loc_800AFA8C:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 112);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r27 = r3;
    r24 = r4;
    r25 = r5;
    r26 = r6;
    r28 = r7;
    r29 = r8;
    r30 = r9;
    r31 = r10;
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -31160), 0, 24u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31148));
    r0 = MemoryInline::FlatRead8((r4 + 42));
}

loc_800AFAD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800AFAEC;
    }
}

loc_800AFAD8:
{
}

loc_800AFADC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800AFCC4;
    }
}

loc_800AFAE0:
{
}

loc_800AFAE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800AFE9C;
    }
}

loc_800AFAE8:
{
    goto loc_800B0070;
}

loc_800AFAEC:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 4));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AFAFC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AFB1C;
    }
}

loc_800AFB00:
{
    f1.d = MemoryInline::FlatReadFloat32((r25 + 4));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AFB10:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AFB1C;
    }
}

loc_800AFB14:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31148));
    goto loc_800B0070;
}

loc_800AFB1C:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -31152));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AFB28:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800AFBEC;
    }
}

loc_800AFB2C:
{
    f1.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AFB38:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AFBEC;
    }
}

loc_800AFB3C:
{
    r3 = (r1 + 68);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    f0.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f1.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r3 = r30;
    r4 = r26;
    r5 = r25;
    f1.d = f31.d;
    // inline leaf 0x800AFA60 (11 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f2.d, PPC_PsFromScalarInline(f1.d), f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f2.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_5 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_5));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_5 = (r5 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_5));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f2.d, PPC_PsFromScalarInline(f1.d), f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_5 = (r3 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5, f2.d);
    // end of inlined leaf 0x800AFA60
    f1.d = MemoryInline::FlatReadFloat32(r30);
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -31140));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AFB78:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AFBE4;
    }
}

loc_800AFB7C:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 8));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -31140));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AFB8C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AFBE4;
    }
}

loc_800AFB90:
{
    r0 = MemoryInline::FlatRead16((r24 + 44));
    r0 = (r0 & 2);
}

loc_800AFB9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        f0.d = PPC_PsToScalarInline(f0.d);
        goto loc_800AFBCC;
    }
}

loc_800AFBA0:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -31160));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 4), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 4), f0.d);
}

loc_800AFBCC:
{
    r3 = r31;
    r4 = r27;
    r5 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    f1.d = f31.d;
    goto loc_800B0070;
}

loc_800AFBE4:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31148));
    goto loc_800B0070;
}

loc_800AFBEC:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -31152));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AFBF8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AFCBC;
    }
}

loc_800AFBFC:
{
    f1.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AFC08:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800AFCBC;
    }
}

loc_800AFC0C:
{
    r3 = (r1 + 56);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    f0.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f1.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r3 = r30;
    r4 = r26;
    r5 = r25;
    f1.d = f31.d;
    // inline leaf 0x800AFA60 (11 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f2.d, PPC_PsFromScalarInline(f1.d), f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f2.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_6 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_6));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_6 = (r5 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_6));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f2.d, PPC_PsFromScalarInline(f1.d), f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_6 = (r3 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_6, f2.d);
    // end of inlined leaf 0x800AFA60
    f1.d = MemoryInline::FlatReadFloat32(r30);
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -31140));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AFC48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AFCB4;
    }
}

loc_800AFC4C:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 8));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -31140));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AFC5C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AFCB4;
    }
}

loc_800AFC60:
{
    r0 = MemoryInline::FlatRead16((r24 + 44));
    r0 = (r0 & 2);
}

loc_800AFC6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        f0.d = PPC_PsToScalarInline(f0.d);
        goto loc_800AFC9C;
    }
}

loc_800AFC70:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -31160));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 4), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 4), f0.d);
}

loc_800AFC9C:
{
    r3 = r31;
    r4 = r27;
    r5 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    f1.d = f31.d;
    goto loc_800B0070;
}

loc_800AFCB4:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31148));
    goto loc_800B0070;
}

loc_800AFCBC:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31148));
    goto loc_800B0070;
}

loc_800AFCC4:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 8));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AFCD4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AFCF4;
    }
}

loc_800AFCD8:
{
    f1.d = MemoryInline::FlatReadFloat32((r25 + 8));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AFCE8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AFCF4;
    }
}

loc_800AFCEC:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31148));
    goto loc_800B0070;
}

loc_800AFCF4:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -31152));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AFD00:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800AFDC4;
    }
}

loc_800AFD04:
{
    f1.d = MemoryInline::FlatReadFloat32((r25 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AFD10:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AFDC4;
    }
}

loc_800AFD14:
{
    r3 = (r1 + 44);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    f0.d = MemoryInline::FlatReadFloat32((r26 + 8));
    f1.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r3 = r30;
    r4 = r26;
    r5 = r25;
    f1.d = f31.d;
    // inline leaf 0x800AFA60 (11 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f2.d, PPC_PsFromScalarInline(f1.d), f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f2.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_3 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_3 = (r5 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_3));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f2.d, PPC_PsFromScalarInline(f1.d), f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3, f2.d);
    // end of inlined leaf 0x800AFA60
    f1.d = MemoryInline::FlatReadFloat32(r30);
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -31140));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AFD50:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AFDBC;
    }
}

loc_800AFD54:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 4));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -31140));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AFD64:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AFDBC;
    }
}

loc_800AFD68:
{
    r0 = MemoryInline::FlatRead16((r24 + 44));
    r0 = (r0 & 2);
}

loc_800AFD74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        f0.d = PPC_PsToScalarInline(f0.d);
        goto loc_800AFDA4;
    }
}

loc_800AFD78:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -31160));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 8), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 8), f0.d);
}

loc_800AFDA4:
{
    r3 = r31;
    r4 = r27;
    r5 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    f1.d = f31.d;
    goto loc_800B0070;
}

loc_800AFDBC:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31148));
    goto loc_800B0070;
}

loc_800AFDC4:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -31152));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AFDD0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AFE94;
    }
}

loc_800AFDD4:
{
    f1.d = MemoryInline::FlatReadFloat32((r25 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AFDE0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800AFE94;
    }
}

loc_800AFDE4:
{
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    f0.d = MemoryInline::FlatReadFloat32((r26 + 8));
    f1.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r3 = r30;
    r4 = r26;
    r5 = r25;
    f1.d = f31.d;
    // inline leaf 0x800AFA60 (11 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f2.d, PPC_PsFromScalarInline(f1.d), f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f2.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_4 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_4));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_4 = (r5 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_4));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f2.d, PPC_PsFromScalarInline(f1.d), f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4, f2.d);
    // end of inlined leaf 0x800AFA60
    f1.d = MemoryInline::FlatReadFloat32(r30);
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -31140));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AFE20:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AFE8C;
    }
}

loc_800AFE24:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 4));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -31140));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AFE34:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AFE8C;
    }
}

loc_800AFE38:
{
    r0 = MemoryInline::FlatRead16((r24 + 44));
    r0 = (r0 & 2);
}

loc_800AFE44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        f0.d = PPC_PsToScalarInline(f0.d);
        goto loc_800AFE74;
    }
}

loc_800AFE48:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -31160));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 8), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 8), f0.d);
}

loc_800AFE74:
{
    r3 = r31;
    r4 = r27;
    r5 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    f1.d = f31.d;
    goto loc_800B0070;
}

loc_800AFE8C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31148));
    goto loc_800B0070;
}

loc_800AFE94:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31148));
    goto loc_800B0070;
}

loc_800AFE9C:
{
    f1.d = MemoryInline::FlatReadFloat32(r6);
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AFEAC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AFECC;
    }
}

loc_800AFEB0:
{
    f1.d = MemoryInline::FlatReadFloat32(r25);
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AFEC0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AFECC;
    }
}

loc_800AFEC4:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31148));
    goto loc_800B0070;
}

loc_800AFECC:
{
    f1.d = MemoryInline::FlatReadFloat32(r26);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -31152));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AFED8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800AFF9C;
    }
}

loc_800AFEDC:
{
    f1.d = MemoryInline::FlatReadFloat32(r25);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AFEE8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AFF9C;
    }
}

loc_800AFEEC:
{
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    f0.d = MemoryInline::FlatReadFloat32(r26);
    f1.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat32(r28);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r3 = r30;
    r4 = r26;
    r5 = r25;
    f1.d = f31.d;
    // inline leaf 0x800AFA60 (11 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f2.d, PPC_PsFromScalarInline(f1.d), f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f2.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_1 = (r5 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_1));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f2.d, PPC_PsFromScalarInline(f1.d), f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1, f2.d);
    // end of inlined leaf 0x800AFA60
    f1.d = MemoryInline::FlatReadFloat32((r30 + 4));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -31140));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AFF28:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AFF94;
    }
}

loc_800AFF2C:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 8));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -31140));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AFF3C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AFF94;
    }
}

loc_800AFF40:
{
    r0 = MemoryInline::FlatRead16((r24 + 44));
    r0 = (r0 & 2);
}

loc_800AFF4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        f0.d = PPC_PsToScalarInline(f0.d);
        goto loc_800AFF7C;
    }
}

loc_800AFF50:
{
    f0.d = MemoryInline::FlatReadFloat32(r29);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -31160));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32(r29, f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r28);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32(r28, f0.d);
    f1.d = MemoryInline::FlatReadFloat32(r30);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32(r30, f0.d);
}

loc_800AFF7C:
{
    r3 = r31;
    r4 = r27;
    r5 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    f1.d = f31.d;
    goto loc_800B0070;
}

loc_800AFF94:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31148));
    goto loc_800B0070;
}

loc_800AFF9C:
{
    f1.d = MemoryInline::FlatReadFloat32(r26);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -31152));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AFFA8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B006C;
    }
}

loc_800AFFAC:
{
    f1.d = MemoryInline::FlatReadFloat32(r25);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AFFB8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B006C;
    }
}

loc_800AFFBC:
{
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    f0.d = MemoryInline::FlatReadFloat32(r26);
    f1.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat32(r28);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r3 = r30;
    r4 = r26;
    r5 = r25;
    f1.d = f31.d;
    // inline leaf 0x800AFA60 (11 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f2.d, PPC_PsFromScalarInline(f1.d), f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f2.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_2 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_2 = (r5 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_2));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f2.d, PPC_PsFromScalarInline(f1.d), f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2, f2.d);
    // end of inlined leaf 0x800AFA60
    f1.d = MemoryInline::FlatReadFloat32((r30 + 4));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -31140));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AFFF8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B0064;
    }
}

loc_800AFFFC:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 8));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -31140));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B000C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B0064;
    }
}

loc_800B0010:
{
    r0 = MemoryInline::FlatRead16((r24 + 44));
    r0 = (r0 & 2);
}

loc_800B001C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        f0.d = PPC_PsToScalarInline(f0.d);
        goto loc_800B004C;
    }
}

loc_800B0020:
{
    f0.d = MemoryInline::FlatReadFloat32(r29);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -31160));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32(r29, f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r28);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32(r28, f0.d);
    f1.d = MemoryInline::FlatReadFloat32(r30);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32(r30, f0.d);
}

loc_800B004C:
{
    r3 = r31;
    r4 = r27;
    r5 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    f1.d = f31.d;
    goto loc_800B0070;
}

loc_800B0064:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31148));
    goto loc_800B0070;
}

loc_800B006C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31148));
}

loc_800B0070:
{
    r0 = 120;
    addr_psqx_800B0074_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800B0074_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 112));
    r11 = (r1 + 112);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800AFA8C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800AFA8C_ra38_46_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[6].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FF gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x80000007 fpr_write=0x80000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800AFA8C func_800AFA8C preserves=true fpr_mask=0x00000000
