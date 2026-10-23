#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80501F28_ra38_3e_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r6_psq_tmp_0 = 0;
    uint32_t r6_psq_tmp_1 = 0;
    uint32_t r6_psq_tmp_2 = 0;
    uint32_t r6_psq_tmp_3 = 0;
    uint32_t r6_psq_tmp_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80501F28;

loc_80501F28:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 24u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 132));
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80501F38:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80501F8C;
    }
}

loc_80501F3C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 120));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80501F48:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80501F8C;
    }
}

loc_80501F4C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 136));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80501F58:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80501F8C;
    }
}

loc_80501F5C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 124));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80501F68:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80501F8C;
    }
}

loc_80501F6C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 140));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80501F78:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80501F8C;
    }
}

loc_80501F7C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 128));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r4 + 20));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80501F88:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80501F94;
    }
}

loc_80501F8C:
{
    r0 = 0;
    goto loc_80501F98;
}

loc_80501F94:
{
    r0 = 1;
}

loc_80501F98:
{
}

loc_80501F9C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80501FA8;
    }
}

loc_80501FA0:
{
    r3 = 0;
    goto loc_805020C4;
}

loc_80501FA8:
{
    r0 = 6;
    r5 = r3;
    r6 = (r3 + 144);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -1472));
    r3 = 1;
    ctr = r0;
}

loc_80501FC0:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 144));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80501FC8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80501FE4;
    }
}

loc_80501FD0:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 12));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    goto loc_80501FF4;
}

loc_80501FE4:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 12));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
}

loc_80501FF4:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 148));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80501FFC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80502018;
    }
}

loc_80502004:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    goto loc_80502028;
}

loc_80502018:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
}

loc_80502028:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 152));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80502030:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8050204C;
    }
}

loc_80502038:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r4 + 20));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    goto loc_8050205C;
}

loc_8050204C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r4 + 20));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
}

loc_8050205C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r6_psq_tmp_2 = (r6 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_2));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r1_psq_tmp_2 = (r1 + 24);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r1_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6));
    PpcSetPairedFprInline(f1, PPC_PsMulInline(f1.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r1_psq_tmp_3 = (r1 + 20);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r1_psq_tmp_3));
    f0.d = MemoryInline::FlatReadFloat32((r6 + 12));
    PpcSetPairedFprInline(f3, PPC_PsMaddInline(f4.d, f3.d, f1.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f3.d, f1.d, f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + PPC_PsToScalarInline(f1.d)));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_80502084:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80502090;
    }
}

loc_80502088:
{
    r3 = 0;
    goto loc_805020C4;
}

loc_80502090:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r6_psq_tmp_3 = (r6 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r1_psq_tmp_4 = (r1 + 12);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r1_psq_tmp_4));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r1_psq_tmp_5 = (r1 + 8);
    PpcSetPairedFprInline(f5, PPC_PsqLStackInline<1u, 0u>(ctx, r1_psq_tmp_5));
    PpcSetPairedFprInline(f1, PPC_PsMulInline(f1.d, f3.d));
    PpcSetPairedFprInline(f3, PPC_PsMaddInline(f4.d, f5.d, f1.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f3.d, f1.d, f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + PPC_PsToScalarInline(f1.d)));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_805020B0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805020B8;
    }
}

loc_805020B4:
{
    r3 = 2;
}

loc_805020B8:
{
    r5 = (r5 + 16);
    r6 = (r6 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80501FC0;
    }
}

loc_805020C4:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_80501F28(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80501F28_ra38_3e_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000006B gpr_return=0x00000008 fpr_read=0x0000003F fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80501F28 func_80501F28 preserves=true fpr_mask=0x00000000
