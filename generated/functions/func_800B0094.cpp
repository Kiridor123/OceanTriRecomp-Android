#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800B0094_ra38_46_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f6)
{
    uint32_t addr_psqx_800B064C_loc_0 = 0;
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

    goto loc_800B0094;

loc_800B0094:
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
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -31160), 0, 28u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31148));
    r0 = MemoryInline::FlatRead8((r4 + 42));
}

loc_800B00DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800B00F4;
    }
}

loc_800B00E0:
{
}

loc_800B00E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800B02BC;
    }
}

loc_800B00E8:
{
}

loc_800B00EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800B0484;
    }
}

loc_800B00F0:
{
    goto loc_800B0648;
}

loc_800B00F4:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 4));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B0104:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B0124;
    }
}

loc_800B0108:
{
    f1.d = MemoryInline::FlatReadFloat32((r25 + 4));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B0118:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B0124;
    }
}

loc_800B011C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31148));
    goto loc_800B0648;
}

loc_800B0124:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -31152));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B0130:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B01EC;
    }
}

loc_800B0134:
{
    f1.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B0140:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B01EC;
    }
}

loc_800B0144:
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
    f0.d = MemoryInline::FlatReadFloat32(r30);
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -31136));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B018C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B01E4;
    }
}

loc_800B0190:
{
    r0 = MemoryInline::FlatRead16((r24 + 44));
    r0 = (r0 & 2);
}

loc_800B019C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800B01CC;
    }
}

loc_800B01A0:
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

loc_800B01CC:
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
    goto loc_800B0648;
}

loc_800B01E4:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31148));
    goto loc_800B0648;
}

loc_800B01EC:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -31152));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B01F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B02B4;
    }
}

loc_800B01FC:
{
    f1.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B0208:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B02B4;
    }
}

loc_800B020C:
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
    f0.d = MemoryInline::FlatReadFloat32(r30);
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -31136));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B0254:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B02AC;
    }
}

loc_800B0258:
{
    r0 = MemoryInline::FlatRead16((r24 + 44));
    r0 = (r0 & 2);
}

loc_800B0264:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800B0294;
    }
}

loc_800B0268:
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

loc_800B0294:
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
    goto loc_800B0648;
}

loc_800B02AC:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31148));
    goto loc_800B0648;
}

loc_800B02B4:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31148));
    goto loc_800B0648;
}

loc_800B02BC:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 8));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B02CC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B02EC;
    }
}

loc_800B02D0:
{
    f1.d = MemoryInline::FlatReadFloat32((r25 + 8));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B02E0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B02EC;
    }
}

loc_800B02E4:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31148));
    goto loc_800B0648;
}

loc_800B02EC:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -31152));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B02F8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B03B4;
    }
}

loc_800B02FC:
{
    f1.d = MemoryInline::FlatReadFloat32((r25 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B0308:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B03B4;
    }
}

loc_800B030C:
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
    f0.d = MemoryInline::FlatReadFloat32(r30);
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -31136));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B0354:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B03AC;
    }
}

loc_800B0358:
{
    r0 = MemoryInline::FlatRead16((r24 + 44));
    r0 = (r0 & 2);
}

loc_800B0364:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800B0394;
    }
}

loc_800B0368:
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

loc_800B0394:
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
    goto loc_800B0648;
}

loc_800B03AC:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31148));
    goto loc_800B0648;
}

loc_800B03B4:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -31152));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B03C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B047C;
    }
}

loc_800B03C4:
{
    f1.d = MemoryInline::FlatReadFloat32((r25 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B03D0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B047C;
    }
}

loc_800B03D4:
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
    f0.d = MemoryInline::FlatReadFloat32(r30);
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -31136));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B041C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B0474;
    }
}

loc_800B0420:
{
    r0 = MemoryInline::FlatRead16((r24 + 44));
    r0 = (r0 & 2);
}

loc_800B042C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800B045C;
    }
}

loc_800B0430:
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

loc_800B045C:
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
    goto loc_800B0648;
}

loc_800B0474:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31148));
    goto loc_800B0648;
}

loc_800B047C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31148));
    goto loc_800B0648;
}

loc_800B0484:
{
    f1.d = MemoryInline::FlatReadFloat32(r6);
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B0494:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B04B4;
    }
}

loc_800B0498:
{
    f1.d = MemoryInline::FlatReadFloat32(r25);
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B04A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B04B4;
    }
}

loc_800B04AC:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31148));
    goto loc_800B0648;
}

loc_800B04B4:
{
    f1.d = MemoryInline::FlatReadFloat32(r26);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -31152));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B04C0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B057C;
    }
}

loc_800B04C4:
{
    f1.d = MemoryInline::FlatReadFloat32(r25);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B04D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B057C;
    }
}

loc_800B04D4:
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
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -31136));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B051C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B0574;
    }
}

loc_800B0520:
{
    r0 = MemoryInline::FlatRead16((r24 + 44));
    r0 = (r0 & 2);
}

loc_800B052C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800B055C;
    }
}

loc_800B0530:
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

loc_800B055C:
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
    goto loc_800B0648;
}

loc_800B0574:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31148));
    goto loc_800B0648;
}

loc_800B057C:
{
    f1.d = MemoryInline::FlatReadFloat32(r26);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -31152));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B0588:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B0644;
    }
}

loc_800B058C:
{
    f1.d = MemoryInline::FlatReadFloat32(r25);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B0598:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B0644;
    }
}

loc_800B059C:
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
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -31136));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B05E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B063C;
    }
}

loc_800B05E8:
{
    r0 = MemoryInline::FlatRead16((r24 + 44));
    r0 = (r0 & 2);
}

loc_800B05F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800B0624;
    }
}

loc_800B05F8:
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

loc_800B0624:
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
    goto loc_800B0648;
}

loc_800B063C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31148));
    goto loc_800B0648;
}

loc_800B0644:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31148));
}

loc_800B0648:
{
    r0 = 120;
    addr_psqx_800B064C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800B064C_loc_0));
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

extern "C" void func_800B0094(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800B0094_ra38_46_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[6].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FF gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x80000007 fpr_write=0x80000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800B0094 func_800B0094 preserves=true fpr_mask=0x00000000
