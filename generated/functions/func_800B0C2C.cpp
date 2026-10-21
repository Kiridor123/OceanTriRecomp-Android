#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800B0BF4(CpuContext* ctx);
extern "C" uint64_t func_800B0BF4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_800B0C2C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_800B12C8_loc_0 = 0;
    uint32_t addr_psqx_800B12D4_loc_0 = 0;
    uint32_t addr_psqx_800B12E0_loc_0 = 0;
    uint32_t addr_psqx_800B12EC_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_10 = 0;
    uint32_t r3_psq_tmp_11 = 0;
    uint32_t r3_psq_tmp_12 = 0;
    uint32_t r3_psq_tmp_13 = 0;
    uint32_t r3_psq_tmp_14 = 0;
    uint32_t r3_psq_tmp_15 = 0;
    uint32_t r3_psq_tmp_16 = 0;
    uint32_t r3_psq_tmp_17 = 0;
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
    uint32_t r4_psq_tmp_15 = 0;
    uint32_t r4_psq_tmp_16 = 0;
    uint32_t r4_psq_tmp_17 = 0;
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
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x800B0C2Cu);
    goto loc_800B0C2C;

loc_800B0C2C:
{
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 160), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 144), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    r11 = (r1 + 112);
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
    f31.d = MemoryInline::FlatReadFloat32((r2 + -31148));
    f5.d = MemoryInline::FlatReadFloat32(r6);
    f1.d = PpcFmulsInline(f5.d, f5.d);
    f4.d = MemoryInline::FlatReadFloat32((r6 + 8));
    f0.d = PpcFmulsInline(f4.d, f4.d);
    f30.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f3.d = MemoryInline::FlatReadFloat32(r7);
    f1.d = PpcFmulsInline(f3.d, f3.d);
    f2.d = MemoryInline::FlatReadFloat32((r7 + 8));
    f0.d = PpcFmulsInline(f2.d, f2.d);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = PpcFmulsInline(f5.d, f3.d);
    f0.d = PpcFmulsInline(f4.d, f2.d);
    f28.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31132));
    f0.d = PpcFmulsInline(f1.d, f28.d);
    f2.d = PpcFmulsInline(f0.d, f28.d);
    f1.d = PpcFmulsInline(f1.d, f29.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31156));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f0.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31152));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B0CE0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B0CEC;
    }
}

loc_800B0CE4:
{
    f1.d = f31.d;
    goto loc_800B12C4;
}

loc_800B0CEC:
{
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050C24u>(ctx);
    f1 = ctx->fpr[1];
    mkw_gqr0 = ctx->gqr[0];
    guest_range_2 = MemoryInline::ResolveRangeHost((r2 + -31152), 0, 28u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, (r2 + -31128));
    f4.d = PpcFmulsInline(f0.d, f28.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r2 + -31148));
    f2.d = PpcFmulsInline(f0.d, f29.d);
    f28.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31152));
    SetCRFloatResident(cr, 0, f28.d, f0.d);
}

loc_800B0D18:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B0D54;
    }
}

loc_800B0D1C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r2 + -31140));
    SetCRFloatResident(cr, 0, f28.d, f0.d);
}

loc_800B0D24:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B0D54;
    }
}

loc_800B0D28:
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
    f1.d = MemoryInline::FlatReadFloat32((r29 + 4));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r2 + -31140));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B0D4C:
{
    if (((cr & 0x80000000u) == 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_800B0D54;
    }
}

loc_800B0D50:
{
    f31.d = f28.d;
    f2.d = PPC_PsToScalarInline(f2.d);
}

loc_800B0D54:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31152));
    SetCRFloatResident(cr, 0, f29.d, f0.d);
}

loc_800B0D5C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B0DB4;
    }
}

loc_800B0D60:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r2 + -31140));
    SetCRFloatResident(cr, 0, f29.d, f0.d);
}

loc_800B0D68:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B0DB4;
    }
}

loc_800B0D6C:
{
    SetCRFloatResident(cr, 0, f29.d, f31.d);
}

loc_800B0D70:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B0DB4;
    }
}

loc_800B0D74:
{
    r3 = (r1 + 68);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 68);
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
    f1.d = MemoryInline::FlatReadFloat32((r1 + 72));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r2 + -31140));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B0DA0:
{
    if (((cr & 0x80000000u) == 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_800B0DB4;
    }
}

loc_800B0DA4:
{
    r3 = r29;
    r4 = (r1 + 68);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f31.d = f29.d;
    f2.d = PPC_PsToScalarInline(f2.d);
}

loc_800B0DB4:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -31160), 0, 28u, true, false);
    f28.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -31156));
    guest_range_3 = MemoryInline::ResolveRangeHost((r26 + 4), 0, 4u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r26 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f28.d));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B0DCC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B0DE8;
    }
}

loc_800B0DD0:
{
    f0.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f28.d));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B0DE4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800B0F90;
    }
}

loc_800B0DE8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r26 + 4));
    SetCRFloatResident(cr, 0, f0.d, f28.d);
}

loc_800B0DF0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B0EBC;
    }
}

loc_800B0DF4:
{
    f1.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f28.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B0E04:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B0EBC;
    }
}

loc_800B0E08:
{
    r3 = (r1 + 56);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r26 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f28.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r27 + 4));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
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
    SetCRFloatResident(cr, 0, f29.d, f31.d);
}

loc_800B0E38:
{
    if (((cr & 0x80000000u) == 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_800B0F90;
    }
}

loc_800B0E3C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -31136));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B0E58:
{
    if (((cr & 0x80000000u) == 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_800B0F90;
    }
}

loc_800B0E5C:
{
    r3 = r29;
    r4 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead16((r24 + 44));
    r0 = (r0 & 2);
}

loc_800B0E74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800B0EA4;
    }
}

loc_800B0E78:
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

loc_800B0EA4:
{
    r3 = r30;
    r4 = r31;
    r5 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    f1.d = f29.d;
    goto loc_800B12C4;
}

loc_800B0EBC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r26 + 4));
    SetCRFloatResident(cr, 0, f0.d, f28.d);
}

loc_800B0EC4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B0F90;
    }
}

loc_800B0EC8:
{
    f1.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f28.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B0ED8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B0F90;
    }
}

loc_800B0EDC:
{
    r3 = (r1 + 44);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r26 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f28.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r27 + 4));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r3 = (r1 + 44);
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
    SetCRFloatResident(cr, 0, f29.d, f31.d);
}

loc_800B0F0C:
{
    if (((cr & 0x80000000u) == 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_800B0F90;
    }
}

loc_800B0F10:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -31136));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B0F2C:
{
    if (((cr & 0x80000000u) == 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_800B0F90;
    }
}

loc_800B0F30:
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

loc_800B0F48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800B0F78;
    }
}

loc_800B0F4C:
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

loc_800B0F78:
{
    r3 = r30;
    r4 = r31;
    r5 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    f1.d = f29.d;
    goto loc_800B12C4;
}

loc_800B0F90:
{
    f28.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -31160));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r26 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f28.d));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B0FA8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B0FC4;
    }
}

loc_800B0FAC:
{
    f0.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f28.d));
    // inline leaf 0x80052270 (2 guest instruction(s))
    f1.d = std::fabs(f1.d);
    // end of inlined leaf 0x80052270
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B0FC0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800B116C;
    }
}

loc_800B0FC4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r26 + 4));
    SetCRFloatResident(cr, 0, f0.d, f28.d);
}

loc_800B0FCC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B1098;
    }
}

loc_800B0FD0:
{
    f1.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f28.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B0FE0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B1098;
    }
}

loc_800B0FE4:
{
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r26 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f28.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r27 + 4));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r3 = (r1 + 32);
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
    r4_psq_tmp_8 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_8));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_8 = (r5 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_8));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f2.d, PPC_PsFromScalarInline(f1.d), f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_8 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_8, f2.d);
    // end of inlined leaf 0x800AFA60
    SetCRFloatResident(cr, 0, f29.d, f31.d);
}

loc_800B1014:
{
    if (((cr & 0x80000000u) == 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_800B116C;
    }
}

loc_800B1018:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -31136));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B1034:
{
    if (((cr & 0x80000000u) == 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_800B116C;
    }
}

loc_800B1038:
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

loc_800B1050:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800B1080;
    }
}

loc_800B1054:
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

loc_800B1080:
{
    r3 = r30;
    r4 = r31;
    r5 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    f1.d = f29.d;
    goto loc_800B12C4;
}

loc_800B1098:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r26 + 4));
    SetCRFloatResident(cr, 0, f0.d, f28.d);
}

loc_800B10A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B116C;
    }
}

loc_800B10A4:
{
    f1.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31144));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f28.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B10B4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B116C;
    }
}

loc_800B10B8:
{
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r26 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f28.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r27 + 4));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r3 = (r1 + 20);
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
    SetCRFloatResident(cr, 0, f29.d, f31.d);
}

loc_800B10E8:
{
    if (((cr & 0x80000000u) == 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_800B116C;
    }
}

loc_800B10EC:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -31136));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B1108:
{
    if (((cr & 0x80000000u) == 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_800B116C;
    }
}

loc_800B110C:
{
    r3 = r29;
    r4 = (r1 + 20);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead16((r24 + 44));
    r0 = (r0 & 2);
}

loc_800B1124:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800B1154;
    }
}

loc_800B1128:
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

loc_800B1154:
{
    r3 = r30;
    r4 = r31;
    r5 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    f1.d = f29.d;
    goto loc_800B12C4;
}

loc_800B116C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31148));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_800B1174:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B12C0;
    }
}

loc_800B1178:
{
    r0 = MemoryInline::FlatRead16((r24 + 44));
    r0 = (r0 & 2);
}

loc_800B1184:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800B12B0;
    }
}

loc_800B1188:
{
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    f0.d = MemoryInline::FlatReadFloat32(r27);
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 8));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050C24u>(ctx);
    f1 = ctx->fpr[1];
    mkw_gqr0 = ctx->gqr[0];
    f0.d = MemoryInline::FlatReadFloat32(r27);
    f3.d = MemoryInline::FlatReadFloat32(r29);
    f2.d = PpcFmulsInline(f0.d, f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f28.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31152));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    r3 = (r1 + 8);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
    r3 = (r1 + 8);
    r4 = r3;
    f1.d = f28.d;
    // inline leaf 0x80051488 (7 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_11 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r4_psq_tmp_11));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_11 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_11, f0.d);
    // end of inlined leaf 0x80051488
    r3 = r27;
    r4 = (r1 + 8);
    ctx->lr = 0x800B11FCu;
    if constexpr (KnownRegArgsCpuCall<0x800B0BF4u>(&func_800B0BF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800B0BF4_8375 = func_800B0BF4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800B0BF4_8375);
        r4 = static_cast<uint32_t>(regargs_result_800B0BF4_8375 >> 32);
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
    ctx->lr = 0x800B1208u;
    if constexpr (KnownRegArgsCpuCall<0x800B0BF4u>(&func_800B0BF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800B0BF4_8789 = func_800B0BF4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800B0BF4_8789);
        r4 = static_cast<uint32_t>(regargs_result_800B0BF4_8789 >> 32);
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
    f0.d = MemoryInline::FlatReadFloat32(r28);
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050C24u>(ctx);
    f1 = ctx->fpr[1];
    mkw_gqr0 = ctx->gqr[0];
    f0.d = MemoryInline::FlatReadFloat32(r28);
    f3.d = MemoryInline::FlatReadFloat32(r29);
    f2.d = PpcFmulsInline(f0.d, f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31152));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    r3 = (r1 + 8);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
    r3 = (r1 + 8);
    r4 = r3;
    f1.d = f29.d;
    // inline leaf 0x80051488 (7 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_12 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r4_psq_tmp_12));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_12 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_12, f0.d);
    // end of inlined leaf 0x80051488
    r3 = r28;
    r4 = (r1 + 8);
    ctx->lr = 0x800B1274u;
    if constexpr (KnownRegArgsCpuCall<0x800B0BF4u>(&func_800B0BF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800B0BF4_9315 = func_800B0BF4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800B0BF4_9315);
        r4 = static_cast<uint32_t>(regargs_result_800B0BF4_9315 >> 32);
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
    ctx->lr = 0x800B1280u;
    if constexpr (KnownRegArgsCpuCall<0x800B0BF4u>(&func_800B0BF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800B0BF4_9729 = func_800B0BF4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800B0BF4_9729);
        r4 = static_cast<uint32_t>(regargs_result_800B0BF4_9729 >> 32);
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
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_800B1288:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B12A0;
    }
}

loc_800B128C:
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
    r4_psq_tmp_13 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_13));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_13 = (r3 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_13, f0.d);
    // end of inlined leaf 0x80051488
    f0.d = PPC_PsToScalarInline(f0.d);
    goto loc_800B12B0;
}

loc_800B12A0:
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
    r4_psq_tmp_14 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_14));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_14 = (r3 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_14, f0.d);
    // end of inlined leaf 0x80051488
    f0.d = PPC_PsToScalarInline(f0.d);
}

loc_800B12B0:
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

loc_800B12C0:
{
    f1.d = f31.d;
}

loc_800B12C4:
{
    r0 = 168;
    addr_psqx_800B12C8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800B12C8_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 160));
    r0 = 152;
    addr_psqx_800B12D4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800B12D4_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 144));
    r0 = 136;
    addr_psqx_800B12E0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800B12E0_loc_0));
    f29.d = MemoryInline::FlatReadFloat64((r1 + 128));
    r0 = 120;
    addr_psqx_800B12EC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800B12EC_loc_0));
    f28.d = MemoryInline::FlatReadFloat64((r1 + 112));
    r11 = (r1 + 112);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_4 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800B0C2C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800B0C2C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FF gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0xF000001F fpr_write=0xF000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800B0C2C func_800B0C2C preserves=true fpr_mask=0x00000000
