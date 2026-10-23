#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800B130C_ra38_46_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f6)
{
    uint32_t addr_psqx_800B18E0_loc_0 = 0;
    uint32_t addr_psqx_800B18EC_loc_0 = 0;
    uint32_t addr_psqx_800B18F8_loc_0 = 0;
    uint32_t addr_psqx_800B1904_loc_0 = 0;
    uint32_t addr_psqx_800B1910_loc_0 = 0;
    uint32_t addr_psqx_800B191C_loc_0 = 0;
    uint32_t addr_psqx_800B1928_loc_0 = 0;
    uint32_t addr_psqx_800B1934_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r1_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_10 = 0;
    uint32_t r3_psq_tmp_11 = 0;
    uint32_t r3_psq_tmp_12 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_8 = 0;
    uint32_t r3_psq_tmp_9 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_10 = 0;
    uint32_t r4_psq_tmp_11 = 0;
    uint32_t r4_psq_tmp_12 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;
    uint32_t r4_psq_tmp_7 = 0;
    uint32_t r4_psq_tmp_8 = 0;
    uint32_t r4_psq_tmp_9 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_10 = 0;
    uint32_t r5_psq_tmp_11 = 0;
    uint32_t r5_psq_tmp_12 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_3 = 0;
    uint32_t r5_psq_tmp_4 = 0;
    uint32_t r5_psq_tmp_5 = 0;
    uint32_t r5_psq_tmp_6 = 0;
    uint32_t r5_psq_tmp_7 = 0;
    uint32_t r5_psq_tmp_8 = 0;
    uint32_t r5_psq_tmp_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;

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
    PPC_FPR f24 = ctx->fpr[24];
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    ctx->fpr[6].d = arg_f6;
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800B130C;

loc_800B130C:
{
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + -192), 0, 200u, false, true);
    MemoryInline::WriteResolved32(guest_range_5, 0u, (r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_5, 196u, (r1 + 196), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_5, 176u, (r1 + 176), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_5, 160u, (r1 + 160), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_5, 144u, (r1 + 144), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_5, 128u, (r1 + 128), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_5, 112u, (r1 + 112), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_5, 96u, (r1 + 96), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_5, 80u, (r1 + 80), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_5, 64u, (r1 + 64), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    r11 = (r1 + 64);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r24 = r3;
    r25 = r4;
    r26 = r5;
    r27 = r6;
    r28 = r7;
    r29 = r8;
    r30 = r9;
    r31 = r10;
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -31160), 0, 24u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31148));
    f30.d = f31.d;
    f29.d = f31.d;
    f28.d = f31.d;
    f27.d = f31.d;
    f26.d = f31.d;
    f25.d = f31.d;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -31156));
    guest_range_3 = MemoryInline::ResolveRangeHost(r27, 0, 12u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, r27);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32(r28);
    f24.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -31152));
    SetCRFloatResident(cr, 0, f24.d, f0.d);
}

loc_800B13C0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B1428;
    }
}

loc_800B13C4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -31140));
    SetCRFloatResident(cr, 0, f24.d, f0.d);
}

loc_800B13CC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800B1428;
    }
}

loc_800B13D4:
{
    r3 = (r1 + 8);
    r4 = r27;
    r5 = r26;
    f1.d = f24.d;
    // inline leaf 0x800AFA60 (11 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f2.d, PPC_PsFromScalarInline(f1.d), f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f2.d);
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
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_1, f2.d);
    // end of inlined leaf 0x800AFA60
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -31140));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B13F8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_800B1428;
    }
}

loc_800B1400:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -31140));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B1410:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_800B1428;
    }
}

loc_800B1418:
{
    f30.d = f24.d;
    SetCRFloatResident(cr, 0, f24.d, f31.d);
}

loc_800B1420:
{
    if (((cr & 0x80000000u) == 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_800B1428;
    }
}

loc_800B1424:
{
    f31.d = f24.d;
    f2.d = PPC_PsToScalarInline(f2.d);
}

loc_800B1428:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -31160));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, r27);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32(r28);
    f24.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -31152));
    SetCRFloatResident(cr, 0, f24.d, f0.d);
}

loc_800B1444:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B14AC;
    }
}

loc_800B1448:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -31140));
    SetCRFloatResident(cr, 0, f24.d, f0.d);
}

loc_800B1450:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800B14AC;
    }
}

loc_800B1458:
{
    r3 = (r1 + 8);
    r4 = r27;
    r5 = r26;
    f1.d = f24.d;
    // inline leaf 0x800AFA60 (11 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f2.d, PPC_PsFromScalarInline(f1.d), f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f2.d);
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
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_3, f2.d);
    // end of inlined leaf 0x800AFA60
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -31140));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B147C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_800B14AC;
    }
}

loc_800B1484:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -31140));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B1494:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_800B14AC;
    }
}

loc_800B149C:
{
    f29.d = f24.d;
    SetCRFloatResident(cr, 0, f24.d, f31.d);
}

loc_800B14A4:
{
    if (((cr & 0x80000000u) == 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_800B14AC;
    }
}

loc_800B14A8:
{
    f31.d = f24.d;
    f2.d = PPC_PsToScalarInline(f2.d);
}

loc_800B14AC:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -31156));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 4u, (r27 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f24.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -31152));
    SetCRFloatResident(cr, 0, f24.d, f0.d);
}

loc_800B14C8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B1530;
    }
}

loc_800B14CC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -31140));
    SetCRFloatResident(cr, 0, f24.d, f0.d);
}

loc_800B14D4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800B1530;
    }
}

loc_800B14DC:
{
    r3 = (r1 + 8);
    r4 = r27;
    r5 = r26;
    f1.d = f24.d;
    // inline leaf 0x800AFA60 (11 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f2.d, PPC_PsFromScalarInline(f1.d), f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f2.d);
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
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_5, f2.d);
    // end of inlined leaf 0x800AFA60
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -31140));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B1500:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_800B1530;
    }
}

loc_800B1508:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -31140));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B1518:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_800B1530;
    }
}

loc_800B1520:
{
    f28.d = f24.d;
    SetCRFloatResident(cr, 0, f24.d, f31.d);
}

loc_800B1528:
{
    if (((cr & 0x80000000u) == 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_800B1530;
    }
}

loc_800B152C:
{
    f31.d = f24.d;
    f2.d = PPC_PsToScalarInline(f2.d);
}

loc_800B1530:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -31160));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 4u, (r27 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f24.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -31152));
    SetCRFloatResident(cr, 0, f24.d, f0.d);
}

loc_800B154C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B15B4;
    }
}

loc_800B1550:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -31140));
    SetCRFloatResident(cr, 0, f24.d, f0.d);
}

loc_800B1558:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800B15B4;
    }
}

loc_800B1560:
{
    r3 = (r1 + 8);
    r4 = r27;
    r5 = r26;
    f1.d = f24.d;
    // inline leaf 0x800AFA60 (11 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f2.d, PPC_PsFromScalarInline(f1.d), f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f2.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_7 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_7));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_7 = (r5 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_7));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f2.d, PPC_PsFromScalarInline(f1.d), f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_7 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_7, f2.d);
    // end of inlined leaf 0x800AFA60
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -31140));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B1584:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_800B15B4;
    }
}

loc_800B158C:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -31140));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B159C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_800B15B4;
    }
}

loc_800B15A4:
{
    f27.d = f24.d;
    SetCRFloatResident(cr, 0, f24.d, f31.d);
}

loc_800B15AC:
{
    if (((cr & 0x80000000u) == 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_800B15B4;
    }
}

loc_800B15B0:
{
    f31.d = f24.d;
    f2.d = PPC_PsToScalarInline(f2.d);
}

loc_800B15B4:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -31156));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 8u, (r27 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f24.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -31152));
    SetCRFloatResident(cr, 0, f24.d, f0.d);
}

loc_800B15D0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B1638;
    }
}

loc_800B15D4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -31140));
    SetCRFloatResident(cr, 0, f24.d, f0.d);
}

loc_800B15DC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800B1638;
    }
}

loc_800B15E4:
{
    r3 = (r1 + 8);
    r4 = r27;
    r5 = r26;
    f1.d = f24.d;
    // inline leaf 0x800AFA60 (11 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f2.d, PPC_PsFromScalarInline(f1.d), f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f2.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_9 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_9));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_9 = (r5 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_9));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f2.d, PPC_PsFromScalarInline(f1.d), f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_9 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_9, f2.d);
    // end of inlined leaf 0x800AFA60
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -31140));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B1608:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_800B1638;
    }
}

loc_800B1610:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -31140));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B1620:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_800B1638;
    }
}

loc_800B1628:
{
    f26.d = f24.d;
    SetCRFloatResident(cr, 0, f24.d, f31.d);
}

loc_800B1630:
{
    if (((cr & 0x80000000u) == 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_800B1638;
    }
}

loc_800B1634:
{
    f31.d = f24.d;
    f2.d = PPC_PsToScalarInline(f2.d);
}

loc_800B1638:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -31160));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 8u, (r27 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f24.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -31152));
    SetCRFloatResident(cr, 0, f24.d, f0.d);
}

loc_800B1654:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B16BC;
    }
}

loc_800B1658:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -31140));
    SetCRFloatResident(cr, 0, f24.d, f0.d);
}

loc_800B1660:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800B16BC;
    }
}

loc_800B1668:
{
    r3 = (r1 + 8);
    r4 = r27;
    r5 = r26;
    f1.d = f24.d;
    // inline leaf 0x800AFA60 (11 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f2.d, PPC_PsFromScalarInline(f1.d), f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f2.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_11 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_11));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_11 = (r5 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_11));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f2.d, PPC_PsFromScalarInline(f1.d), f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_11 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_11, f2.d);
    // end of inlined leaf 0x800AFA60
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -31140));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B168C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_800B16BC;
    }
}

loc_800B1694:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -31140));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B16A4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_800B16BC;
    }
}

loc_800B16AC:
{
    f25.d = f24.d;
    SetCRFloatResident(cr, 0, f24.d, f31.d);
}

loc_800B16B4:
{
    if (((cr & 0x80000000u) == 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_800B16BC;
    }
}

loc_800B16B8:
{
    f31.d = f24.d;
    f2.d = PPC_PsToScalarInline(f2.d);
}

loc_800B16BC:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31148));
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_800B16C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800B16CC;
    }
}

loc_800B16C8:
{
    goto loc_800B18DC;
}

loc_800B16CC:
{
    f0.d = MemoryInline::FlatReadFloat32(r26);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, r27);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f31.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32(r30, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 4u, (r27 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f31.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 8u, (r27 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f31.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 8), f0.d);
    r3 = r31;
    r4 = r24;
    r5 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    r0 = MemoryInline::FlatRead16((r25 + 44));
    r0 = (r0 & 2);
}

loc_800B1730:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800B18D8;
    }
}

loc_800B1734:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f31.d));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    guest_range_2 = MemoryInline::ResolveRangeHost((r2 + -31160), 0, 20u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B1744:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800B1764;
    }
}

loc_800B174C:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f31.d));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B175C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800B1780;
    }
}

loc_800B1764:
{
    f0.d = MemoryInline::FlatReadFloat32(r29);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31160));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32(r29, f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r28);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32(r28, f0.d);
}

loc_800B1780:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f28.d - f31.d));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B1790:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800B17B0;
    }
}

loc_800B1798:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f27.d - f31.d));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B17A8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800B17CC;
    }
}

loc_800B17B0:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31160));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 4), f0.d);
}

loc_800B17CC:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f26.d - f31.d));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B17DC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800B17FC;
    }
}

loc_800B17E4:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f25.d - f31.d));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B17F4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800B1818;
    }
}

loc_800B17FC:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31160));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 8), f0.d);
}

loc_800B1818:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f31.d));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B1828:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800B1838;
    }
}

loc_800B1830:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r2 + -31156));
    MemoryInline::FlatWriteFloat32(r30, f0.d);
}

loc_800B1838:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f31.d));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B1848:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800B1858;
    }
}

loc_800B1850:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31160));
    MemoryInline::FlatWriteFloat32(r30, f0.d);
}

loc_800B1858:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f28.d - f31.d));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B1868:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800B1878;
    }
}

loc_800B1870:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r2 + -31156));
    MemoryInline::FlatWriteFloat32((r30 + 4), f0.d);
}

loc_800B1878:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f27.d - f31.d));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B1888:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800B1898;
    }
}

loc_800B1890:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31160));
    MemoryInline::FlatWriteFloat32((r30 + 4), f0.d);
}

loc_800B1898:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f26.d - f31.d));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B18A8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800B18B8;
    }
}

loc_800B18B0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r2 + -31156));
    MemoryInline::FlatWriteFloat32((r30 + 8), f0.d);
}

loc_800B18B8:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f25.d - f31.d));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B18C8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800B18D8;
    }
}

loc_800B18D0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31160));
    MemoryInline::FlatWriteFloat32((r30 + 8), f0.d);
}

loc_800B18D8:
{
    f1.d = f31.d;
}

loc_800B18DC:
{
    r0 = 184;
    addr_psqx_800B18E0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800B18E0_loc_0));
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + 64), 0, 136u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 112u, (r1 + 176));
    r0 = 168;
    addr_psqx_800B18EC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800B18EC_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 96u, (r1 + 160));
    r0 = 152;
    addr_psqx_800B18F8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800B18F8_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 80u, (r1 + 144));
    r0 = 136;
    addr_psqx_800B1904_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800B1904_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 64u, (r1 + 128));
    r0 = 120;
    addr_psqx_800B1910_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800B1910_loc_0));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 48u, (r1 + 112));
    r0 = 104;
    addr_psqx_800B191C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f26, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800B191C_loc_0));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 32u, (r1 + 96));
    r0 = 88;
    addr_psqx_800B1928_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f25, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800B1928_loc_0));
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 16u, (r1 + 80));
    r0 = 72;
    addr_psqx_800B1934_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f24, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800B1934_loc_0));
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 0u, (r1 + 64));
    r11 = (r1 + 64);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_4 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::ReadResolved32(guest_range_6, 132u, (r1 + 196));
    ctx->lr = r0;
    r1 = (r1 + 192);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800B130C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800B130C_ra38_46_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[6].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FF gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0xFF000007 fpr_write=0xFF000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800B130C func_800B130C preserves=true fpr_mask=0x00000000
