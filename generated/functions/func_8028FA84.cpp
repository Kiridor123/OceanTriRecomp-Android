#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050F40(CpuContext* ctx);
extern "C" double func_80050F40_ra8_0_0_2(CpuContext*, uint32_t);
extern "C" void func_800513DC(CpuContext* ctx);
extern "C" uint64_t func_800513DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8028F8B0(CpuContext* ctx);
extern "C" double func_8028F8B0_ra0_e_0_2(CpuContext*, double, double, double);

extern "C" MkwStateFreeResult2 func_80050F40_statefree(uint32_t, PPC_FPR, PPC_FPR, uint32_t);

extern "C" uint64_t func_8028FA84_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t addr_psqx_8028FCBC_loc_0 = 0;
    uint32_t addr_psqx_8028FCC8_loc_0 = 0;
    uint32_t addr_psqx_8028FCD4_loc_0 = 0;
    uint32_t addr_psqx_8028FCE0_loc_0 = 0;
    uint32_t addr_psqx_8028FCEC_loc_0 = 0;
    uint32_t addr_psqx_8028FCF8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
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
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8028FA84;

loc_8028FA84:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -192), 0, 200u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 196u, (r1 + 196), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 176u, (r1 + 176), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 160u, (r1 + 160), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 144u, (r1 + 144), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 128u, (r1 + 128), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 112u, (r1 + 112), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 96u, (r1 + 96), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r6;
    r3 = (r1 + 68);
    r4 = r28;
    r5 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r28 + 24);
    // inline leaf 0x80050F40 (6 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80050F40
    f27.d = f1.d;
    r3 = (r29 + 24);
    // inline leaf 0x80050F40 (6 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80050F40
    f28.d = f1.d;
    r3 = (r29 + 24);
    r4 = (r1 + 68);
    // inline leaf 0x80052278 (8 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_0 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r4_psq_tmp_0));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r4));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f2.d, f1.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80052278
    f29.d = f1.d;
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -14220), 0, 12u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -14220));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f27.d), f0.d);
}

loc_8028FB20:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8028FB4C;
    }
}

loc_8028FB28:
{
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f28.d), PPC_PsToScalarInline(f0.d));
}

loc_8028FB2C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8028FB4C;
    }
}

loc_8028FB34:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -14216));
    MemoryInline::FlatWriteFloat32(r31, f0.d);
    MemoryInline::FlatWriteFloat32(r30, f0.d);
    r3 = (r1 + 68);
    // inline leaf 0x80050F40 (6 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80050F40
    goto loc_8028FCB8;
}

loc_8028FB4C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -14220));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f27.d), f0.d);
}

loc_8028FB54:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8028FB78;
    }
}

loc_8028FB5C:
{
    f26.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -14216));
    f1.d = static_cast<double>(PpcForceSingleValueInline(PPC_PsToScalarInline(f1.d) / PPC_PsToScalarInline(f28.d)));
    f2.d = f26.d;
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -14212));
    // inline leaf 0x8028F8B0 (8 guest instruction(s))
}

loc_inl4_0x8028F8B0:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_inl4_0x8028F8B4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl4_0x8028F8C0;
    }
}

loc_inl4_0x8028F8B8:
{
    f1.d = f2.d;
    goto loc_inl4_cont_8028F8B0;
}

loc_inl4_0x8028F8C0:
{
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_inl4_0x8028F8C4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x8028F8C8:
{
    f1.d = f3.d;
    goto loc_inl4_cont_8028F8B0;
}

loc_inl4_return:
{
}

loc_inl4_cont_8028F8B0:
{
    // end of inlined leaf 0x8028F8B0
    f28.d = f1.d;
    f0.d = PPC_PsToScalarInline(f0.d);
    goto loc_8028FC58;
}

loc_8028FB78:
{
    r3 = (r28 + 24);
    r4 = (r1 + 68);
    // inline leaf 0x80052278 (8 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r4_psq_tmp_1));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r4));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f2.d, f1.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80052278
    f30.d = f1.d;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -14220));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f28.d), f0.d);
}

loc_8028FB90:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8028FBB8;
    }
}

loc_8028FB98:
{
    f28.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -14216));
    f0.d = (-(PPC_PsToScalarInline(f1.d)));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / PPC_PsToScalarInline(f27.d)));
    f2.d = f28.d;
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -14212));
    // inline leaf 0x8028F8B0 (8 guest instruction(s))
}

loc_inl6_0x8028F8B0:
{
    SetCRFloatResident(cr, 0, f1.d, PPC_PsToScalarInline(f2.d));
}

loc_inl6_0x8028F8B4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl6_0x8028F8C0;
    }
}

loc_inl6_0x8028F8B8:
{
    f1.d = f2.d;
    f1.d = PPC_PsToScalarInline(f1.d);
    goto loc_inl6_cont_8028F8B0;
}

loc_inl6_0x8028F8C0:
{
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_inl6_0x8028F8C4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x8028F8C8:
{
    f1.d = f3.d;
    goto loc_inl6_cont_8028F8B0;
}

loc_inl6_return:
{
}

loc_inl6_cont_8028F8B0:
{
    // end of inlined leaf 0x8028F8B0
    f26.d = f1.d;
    f2.d = PPC_PsToScalarInline(f2.d);
    f28.d = PPC_PsToScalarInline(f28.d);
    f30.d = PPC_PsToScalarInline(f30.d);
    goto loc_8028FC58;
}

loc_8028FBB8:
{
    r3 = (r28 + 24);
    r4 = (r29 + 24);
    // inline leaf 0x80052278 (8 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_2 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_2));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f2.d, f1.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80052278
    f31.d = f1.d;
    f2.d = PpcFmulsInline(PPC_PsToScalarInline(f27.d), PPC_PsToScalarInline(f28.d));
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f1.d), PPC_PsToScalarInline(f1.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -14216));
    SetCRFloatResident(cr, 0, f2.d, f3.d);
}

loc_8028FBDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8028FBFC;
    }
}

loc_8028FBE0:
{
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f1.d), PPC_PsToScalarInline(f29.d));
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f30.d), PPC_PsToScalarInline(f28.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -14212));
    // inline leaf 0x8028F8B0 (8 guest instruction(s))
}

loc_inl8_0x8028F8B0:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_inl8_0x8028F8B4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl8_0x8028F8C0;
    }
}

loc_inl8_0x8028F8B8:
{
    f1.d = f2.d;
    goto loc_inl8_cont_8028F8B0;
}

loc_inl8_0x8028F8C0:
{
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_inl8_0x8028F8C4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_inl8_return;
    }
}

loc_inl8_0x8028F8C8:
{
    f1.d = f3.d;
    goto loc_inl8_cont_8028F8B0;
}

loc_inl8_return:
{
}

loc_inl8_cont_8028F8B0:
{
    // end of inlined leaf 0x8028F8B0
    goto loc_8028FC00;
}

loc_8028FBFC:
{
    f1.d = f2.d;
}

loc_8028FC00:
{
    f26.d = f1.d;
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f31.d), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(PPC_PsToScalarInline(f29.d) + f0.d));
    f28.d = static_cast<double>(PpcForceSingleValueInline(f0.d / PPC_PsToScalarInline(f28.d)));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -14216));
    SetCRFloatResident(cr, 0, f28.d, f2.d);
}

loc_8028FC18:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8028FC38;
    }
}

loc_8028FC1C:
{
    f28.d = f2.d;
    f0.d = (-(PPC_PsToScalarInline(f30.d)));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / PPC_PsToScalarInline(f27.d)));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -14212));
    // inline leaf 0x8028F8B0 (8 guest instruction(s))
}

loc_inl9_0x8028F8B0:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_inl9_0x8028F8B4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl9_0x8028F8C0;
    }
}

loc_inl9_0x8028F8B8:
{
    f1.d = f2.d;
    goto loc_inl9_cont_8028F8B0;
}

loc_inl9_0x8028F8C0:
{
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_inl9_0x8028F8C4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_inl9_return;
    }
}

loc_inl9_0x8028F8C8:
{
    f1.d = f3.d;
    goto loc_inl9_cont_8028F8B0;
}

loc_inl9_return:
{
}

loc_inl9_cont_8028F8B0:
{
    // end of inlined leaf 0x8028F8B0
    f26.d = f1.d;
    f30.d = PPC_PsToScalarInline(f30.d);
    f31.d = PPC_PsToScalarInline(f31.d);
    goto loc_8028FC58;
}

loc_8028FC38:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -14212));
    SetCRFloatResident(cr, 0, f28.d, f3.d);
}

loc_8028FC40:
{
    if (((cr & 0x40000000u) == 0)) {
        f30.d = PPC_PsToScalarInline(f30.d);
        f31.d = PPC_PsToScalarInline(f31.d);
        goto loc_8028FC58;
    }
}

loc_8028FC44:
{
    f28.d = f3.d;
    f0.d = static_cast<double>(PpcForceSingleValueInline(PPC_PsToScalarInline(f31.d) - PPC_PsToScalarInline(f30.d)));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / PPC_PsToScalarInline(f27.d)));
    if constexpr (KnownRegArgsCpuCall<0x8028F8B0u>(&func_8028F8B0)) {
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8028F8B0_42B1 = func_8028F8B0_ra0_e_0_2(ctx, f1.d, f2.d, f3.d);
        f1.d = regargs_result_8028F8B0_42B1;
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8028F8B0u>(ctx);
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f26.d = f1.d;
    f30.d = PPC_PsToScalarInline(f30.d);
    f31.d = PPC_PsToScalarInline(f31.d);
}

loc_8028FC58:
{
    MemoryInline::FlatWriteFloat32(r30, f26.d);
    MemoryInline::FlatWriteFloat32(r31, f28.d);
    r3 = (r1 + 20);
    r4 = (r28 + 24);
    f1.d = f26.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 56);
    r4 = r28;
    r5 = (r1 + 20);
    ctx->lr = 0x8028FC80u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_46F9 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_46F9);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_46F9 >> 32);
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
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r1 + 8);
    r4 = (r29 + 24);
    f1.d = f28.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r1 + 44);
    r4 = r29;
    r5 = (r1 + 8);
    ctx->lr = 0x8028FCA0u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_4BEE = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_4BEE);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_4BEE >> 32);
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
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r1 + 32);
    r4 = (r1 + 44);
    r5 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    if (MkwStateFreeAbiEnabled(0x80050F40u) && KnownTranslatedCpuCall<0x80050F40u>::kAvailable && !KnownTranslatedCpuCall<0x80050F40u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80050F40u>()) {
        const auto state_free_result_80050F40_524C = func_80050F40_statefree(ctx->gpr[3], ctx->fpr[0], ctx->fpr[1], ctx->gqr[0]);
        ctx->fpr[0].raw = static_cast<uint64_t>(state_free_result_80050F40_524C[0]);
        ctx->fpr[1].raw = static_cast<uint64_t>(state_free_result_80050F40_524C[1]);
    } else {
        InvokeDirectCpu<0x80050F40u>(ctx);
    }
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
}

loc_8028FCB8:
{
    r0 = 184;
    addr_psqx_8028FCBC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8028FCBC_loc_0));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 80), 0, 120u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 96u, (r1 + 176));
    r0 = 168;
    addr_psqx_8028FCC8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8028FCC8_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 80u, (r1 + 160));
    r0 = 152;
    addr_psqx_8028FCD4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8028FCD4_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 64u, (r1 + 144));
    r0 = 136;
    addr_psqx_8028FCE0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8028FCE0_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 48u, (r1 + 128));
    r0 = 120;
    addr_psqx_8028FCEC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8028FCEC_loc_0));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 32u, (r1 + 112));
    r0 = 104;
    addr_psqx_8028FCF8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f26, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8028FCF8_loc_0));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 16u, (r1 + 96));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 116u, (r1 + 196));
    ctx->lr = r0;
    r1 = (r1 + 192);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
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

extern "C" void func_8028FA84(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8028FA84_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007E gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0xFC00000F fpr_write=0xFC00000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8028FA84 func_8028FA84 preserves=true fpr_mask=0x00000000
