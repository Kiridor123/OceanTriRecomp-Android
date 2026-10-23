#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800B0BF4(CpuContext* ctx);
extern "C" uint64_t func_800B0BF4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_800B066C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_800B0BA4_loc_0 = 0;
    uint32_t addr_psqx_800B0BB0_loc_0 = 0;
    uint32_t addr_psqx_800B0BBC_loc_0 = 0;
    uint32_t addr_psqx_800B0BC8_loc_0 = 0;
    uint32_t addr_psqx_800B0BD4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_10 = 0;
    uint32_t r3_psq_tmp_11 = 0;
    uint32_t r3_psq_tmp_12 = 0;
    uint32_t r3_psq_tmp_13 = 0;
    uint32_t r3_psq_tmp_14 = 0;
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
    uint32_t r4_psq_tmp_13 = 0;
    uint32_t r4_psq_tmp_14 = 0;
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
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_3 = 0;
    uint32_t r5_psq_tmp_4 = 0;
    uint32_t r5_psq_tmp_5 = 0;
    uint32_t r5_psq_tmp_6 = 0;
    uint32_t r5_psq_tmp_7 = 0;
    uint32_t r5_psq_tmp_8 = 0;
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
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800B066C;

loc_800B066C:
{
    MemoryInline::FlatWriteRam32((r1 + -240), r1);
    r1 = (r1 + -240);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 244), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 224), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 208), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 192), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 176), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 160), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    r11 = (r1 + 160);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r31 = r3;
    r24 = r4;
    r25 = r5;
    r26 = r6;
    r27 = r7;
    r28 = r8;
    r29 = r9;
    r30 = r10;
    f30.d = MemoryInline::FlatReadFloat32((r2 + -31148));
    r3 = r26;
    // inline leaf 0x80050F40 (6 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80050F40
    f31.d = f1.d;
    r3 = r25;
    // inline leaf 0x80050F40 (6 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80050F40
    r3 = r27;
    // inline leaf 0x80050F40 (6 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80050F40
    f28.d = f1.d;
    r3 = r26;
    r4 = r27;
    // inline leaf 0x80052278 (8 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_0 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_0));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f2.d, f1.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80052278
    f29.d = f1.d;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -31132));
    f0.d = PpcFmulsInline(f3.d, PPC_PsToScalarInline(f1.d));
    f2.d = PpcFmulsInline(f0.d, PPC_PsToScalarInline(f1.d));
    f1.d = PpcFmulsInline(f3.d, PPC_PsToScalarInline(f28.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31156));
    f0.d = static_cast<double>(PpcForceSingleValueInline(PPC_PsToScalarInline(f31.d) - f0.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31152));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B0724:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B0730;
    }
}

loc_800B0728:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31148));
    goto loc_800B0BA0;
}

loc_800B0730:
{
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050C24u>(ctx);
    f1 = ctx->fpr[1];
    mkw_gqr0 = ctx->gqr[0];
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -31152), 0, 32u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -31128));
    f4.d = PpcFmulsInline(f0.d, PPC_PsToScalarInline(f29.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -31148));
    f2.d = PpcFmulsInline(f0.d, PPC_PsToScalarInline(f28.d));
    f28.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -31152));
    SetCRFloatResident(cr, 0, f28.d, f0.d);
}

loc_800B075C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B07B8;
    }
}

loc_800B0760:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31140));
    SetCRFloatResident(cr, 0, f28.d, f0.d);
}

loc_800B0768:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B07B8;
    }
}

loc_800B076C:
{
    r3 = r29;
    r4 = r26;
    r5 = r25;
    f1.d = f28.d;
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
    r0 = MemoryInline::FlatRead8((r24 + 42));
}

loc_800B0788:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800B079C;
    }
}

loc_800B078C:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r2 + -31124));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B0798:
{
    if (((cr & 0x80000000u) != 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_800B07B8;
    }
}

loc_800B079C:
{
}

loc_800B07A0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_800B07B4;
    }
}

loc_800B07A4:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B07B0:
{
    if (((cr & 0x40000000u) != 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_800B07B8;
    }
}

loc_800B07B4:
{
    f30.d = f28.d;
    f2.d = PPC_PsToScalarInline(f2.d);
}

loc_800B07B8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -31152));
    SetCRFloatResident(cr, 0, f29.d, f0.d);
}

loc_800B07C0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B0838;
    }
}

loc_800B07C4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31140));
    SetCRFloatResident(cr, 0, f29.d, f0.d);
}

loc_800B07CC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B0838;
    }
}

loc_800B07D0:
{
    SetCRFloatResident(cr, 0, f29.d, f30.d);
}

loc_800B07D4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B0838;
    }
}

loc_800B07D8:
{
    r3 = (r1 + 56);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 56);
    r4 = r26;
    r5 = r25;
    f1.d = f29.d;
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
    r0 = MemoryInline::FlatRead8((r24 + 42));
}

loc_800B07FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800B0810;
    }
}

loc_800B0800:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r2 + -31124));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B080C:
{
    if (((cr & 0x80000000u) != 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_800B0838;
    }
}

loc_800B0810:
{
}

loc_800B0814:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_800B0828;
    }
}

loc_800B0818:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B0824:
{
    if (((cr & 0x40000000u) != 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_800B0838;
    }
}

loc_800B0828:
{
    r3 = r29;
    r4 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f30.d = f29.d;
    f2.d = PPC_PsToScalarInline(f2.d);
}

loc_800B0838:
{
    r3 = MemoryInline::FlatRead8((r24 + 42));
    r0 = (r3 + 255);
    r0 = (r0 & 255);
}

loc_800B0848:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_800B0A1C;
    }
}

loc_800B084C:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 4));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    guest_range_2 = MemoryInline::ResolveRangeHost((r2 + -31152), 0, 20u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B085C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B0874;
    }
}

loc_800B0860:
{
    f1.d = MemoryInline::FlatReadFloat32((r25 + 4));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B0870:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800B0A1C;
    }
}

loc_800B0874:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31152));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B0880:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B0948;
    }
}

loc_800B0884:
{
    f1.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B0890:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B0948;
    }
}

loc_800B0894:
{
    r3 = (r1 + 44);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    f0.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f1.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r27 + 4));
    f28.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r3 = (r1 + 44);
    r4 = r26;
    r5 = r25;
    f1.d = f28.d;
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
    SetCRFloatResident(cr, 0, f28.d, f30.d);
}

loc_800B08C4:
{
    if (((cr & 0x80000000u) == 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_800B0A1C;
    }
}

loc_800B08C8:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r2 + -31136));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B08E4:
{
    if (((cr & 0x80000000u) == 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_800B0A1C;
    }
}

loc_800B08E8:
{
    r3 = r29;
    r4 = (r1 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead16((r24 + 44));
    r0 = (r0 & 2);
}

loc_800B0900:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800B0930;
    }
}

loc_800B0904:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31160));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 4));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r27 + 4), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31144));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 4), f0.d);
}

loc_800B0930:
{
    r3 = r30;
    r4 = r31;
    r5 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    f1.d = f28.d;
    goto loc_800B0BA0;
}

loc_800B0948:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31152));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B0954:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B0A1C;
    }
}

loc_800B0958:
{
    f1.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B0964:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B0A1C;
    }
}

loc_800B0968:
{
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    f0.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f1.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r27 + 4));
    f28.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r3 = (r1 + 32);
    r4 = r26;
    r5 = r25;
    f1.d = f28.d;
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
    r4_psq_tmp_6 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_6));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_6 = (r5 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_6));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f2.d, PPC_PsFromScalarInline(f1.d), f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_6 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_6, f2.d);
    // end of inlined leaf 0x800AFA60
    SetCRFloatResident(cr, 0, f28.d, f30.d);
}

loc_800B0998:
{
    if (((cr & 0x80000000u) == 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_800B0A1C;
    }
}

loc_800B099C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r2 + -31136));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B09B8:
{
    if (((cr & 0x80000000u) == 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_800B0A1C;
    }
}

loc_800B09BC:
{
    r3 = r29;
    r4 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead16((r24 + 44));
    r0 = (r0 & 2);
}

loc_800B09D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800B0A04;
    }
}

loc_800B09D8:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31160));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 4));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r27 + 4), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31144));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 4), f0.d);
}

loc_800B0A04:
{
    r3 = r30;
    r4 = r31;
    r5 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    f1.d = f28.d;
    goto loc_800B0BA0;
}

loc_800B0A1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31148));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_800B0A24:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B0B9C;
    }
}

loc_800B0A28:
{
    r0 = MemoryInline::FlatRead16((r24 + 44));
    r0 = (r0 & 2);
}

loc_800B0A34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800B0B8C;
    }
}

loc_800B0A38:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31156));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050C24u>(ctx);
    f1 = ctx->fpr[1];
    mkw_gqr0 = ctx->gqr[0];
    f29.d = f1.d;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B0A58:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B0A74;
    }
}

loc_800B0A5C:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = MemoryInline::FlatReadFloat32(r29);
    f0.d = (-(f0.d));
    f28.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    goto loc_800B0A7C;
}

loc_800B0A74:
{
    f27.d = MemoryInline::FlatReadFloat32((r2 + -31156));
    f28.d = MemoryInline::FlatReadFloat32((r2 + -31152));
}

loc_800B0A7C:
{
    r3 = (r1 + 72);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 72), 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r1 + 72), f27.d);
    f0.d = MemoryInline::FlatReadFloat32(r29);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r1 + 76), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f0.d = PpcFmulsInline(f2.d, f28.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r1 + 80), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31152));
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f28.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r1 + 84), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 16u, (r1 + 88), f28.d);
    }
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 20u, (r1 + 92), f0.d);
    f0.d = (-(f27.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 24u, (r1 + 96), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 28u, (r1 + 100), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 32u, (r1 + 104), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 36u, (r1 + 108), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f29.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 40u, (r1 + 112), f29.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 44u, (r1 + 116), f1.d);
    }
    r3 = (r1 + 72);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80088428u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 20);
    r4 = (r1 + 72);
    r5 = r27;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    r3 = (r1 + 8);
    r4 = r29;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    // inline leaf 0x80051488 (7 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_8 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_8));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_8 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_8, f0.d);
    // end of inlined leaf 0x80051488
    r3 = r27;
    r4 = (r1 + 8);
    ctx->lr = 0x800B0B18u;
    if constexpr (KnownRegArgsCpuCall<0x800B0BF4u>(&func_800B0BF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800B0BF4_7820 = func_800B0BF4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800B0BF4_7820);
        r4 = static_cast<uint32_t>(regargs_result_800B0BF4_7820 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800B0BF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = r27;
    r4 = (r1 + 8);
    ctx->lr = 0x800B0B24u;
    if constexpr (KnownRegArgsCpuCall<0x800B0BF4u>(&func_800B0BF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800B0BF4_7C56 = func_800B0BF4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800B0BF4_7C56);
        r4 = static_cast<uint32_t>(regargs_result_800B0BF4_7C56 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800B0BF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r1 + 20);
    r4 = (r1 + 72);
    r5 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    r3 = (r1 + 8);
    r4 = r29;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    // inline leaf 0x80051488 (7 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_9 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_9));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_9 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_9, f0.d);
    // end of inlined leaf 0x80051488
    r3 = r28;
    r4 = (r1 + 8);
    ctx->lr = 0x800B0B50u;
    if constexpr (KnownRegArgsCpuCall<0x800B0BF4u>(&func_800B0BF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800B0BF4_84BB = func_800B0BF4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800B0BF4_84BB);
        r4 = static_cast<uint32_t>(regargs_result_800B0BF4_84BB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800B0BF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = r28;
    r4 = (r1 + 8);
    ctx->lr = 0x800B0B5Cu;
    if constexpr (KnownRegArgsCpuCall<0x800B0BF4u>(&func_800B0BF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800B0BF4_88F1 = func_800B0BF4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800B0BF4_88F1);
        r4 = static_cast<uint32_t>(regargs_result_800B0BF4_88F1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800B0BF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31156));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f31.d), f0.d);
}

loc_800B0B64:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B0B7C;
    }
}

loc_800B0B68:
{
    r3 = r29;
    r4 = r29;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31120));
    // inline leaf 0x80051488 (7 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_10 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_10));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_10 = (r3 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_10, f0.d);
    // end of inlined leaf 0x80051488
    f0.d = PPC_PsToScalarInline(f0.d);
    goto loc_800B0B8C;
}

loc_800B0B7C:
{
    r3 = r29;
    r4 = r29;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31116));
    // inline leaf 0x80051488 (7 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_11 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_11));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_11 = (r3 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_11, f0.d);
    // end of inlined leaf 0x80051488
    f0.d = PPC_PsToScalarInline(f0.d);
}

loc_800B0B8C:
{
    r3 = r30;
    r4 = r31;
    r5 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
}

loc_800B0B9C:
{
    f1.d = f30.d;
}

loc_800B0BA0:
{
    r0 = 232;
    addr_psqx_800B0BA4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800B0BA4_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 224));
    r0 = 216;
    addr_psqx_800B0BB0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800B0BB0_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 208));
    r0 = 200;
    addr_psqx_800B0BBC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800B0BBC_loc_0));
    f29.d = MemoryInline::FlatReadFloat64((r1 + 192));
    r0 = 184;
    addr_psqx_800B0BC8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800B0BC8_loc_0));
    f28.d = MemoryInline::FlatReadFloat64((r1 + 176));
    r0 = 168;
    addr_psqx_800B0BD4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800B0BD4_loc_0));
    f27.d = MemoryInline::FlatReadFloat64((r1 + 160));
    r11 = (r1 + 160);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 244));
    ctx->lr = r0;
    r1 = (r1 + 240);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800B066C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800B066C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FF gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0xF800001F fpr_write=0xF800001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800B066C func_800B066C preserves=true fpr_mask=0x00000000
