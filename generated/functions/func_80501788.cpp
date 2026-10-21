#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80501788_ra10_1e_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t addr_lfsx_805018D0_loc_0 = 0;
    uint32_t addr_lfsx_80501918_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r1_psq_tmp_7 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x80501788u);
    goto loc_80501788;

loc_80501788:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -1532), 0, 32u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -1532));
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80501794:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805017A8;
    }
}

loc_80501798:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8050179C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805017A8;
    }
}

loc_805017A0:
{
    r3 = 0;
    goto loc_8050193C;
}

loc_805017A8:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -1532));
    SetCRFloatResident(cr, 0, f2.d, f4.d);
}

loc_805017B0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80501824;
    }
}

loc_805017B8:
{
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_805017BC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805017F0;
    }
}

loc_805017C4:
{
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_805017C8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805017DC;
    }
}

loc_805017D0:
{
    f3.d = f2.d;
    r0 = 0;
    goto loc_80501898;
}

loc_805017DC:
{
    f3.d = f1.d;
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -1524));
    f1.d = f2.d;
    r0 = 1;
    goto loc_80501898;
}

loc_805017F0:
{
    f1.d = (-(f1.d));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_805017F8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80501810;
    }
}

loc_80501800:
{
    f3.d = f2.d;
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r2 + -1504));
    r0 = 1;
    goto loc_80501898;
}

loc_80501810:
{
    f3.d = f1.d;
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -1508));
    f1.d = f2.d;
    r0 = 0;
    goto loc_80501898;
}

loc_80501824:
{
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_80501828:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80501864;
    }
}

loc_80501830:
{
    f0.d = (-(f2.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80501838:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80501850;
    }
}

loc_80501840:
{
    f3.d = f0.d;
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -1516));
    r0 = 1;
    goto loc_80501898;
}

loc_80501850:
{
    f3.d = f1.d;
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -1524));
    f1.d = f0.d;
    r0 = 0;
    goto loc_80501898;
}

loc_80501864:
{
    f0.d = (-(f2.d));
    f1.d = (-(f1.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80501870:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80501888;
    }
}

loc_80501878:
{
    f3.d = f0.d;
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -1516));
    r0 = 0;
    goto loc_80501898;
}

loc_80501888:
{
    f3.d = f1.d;
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -1508));
    f1.d = f0.d;
    r0 = 1;
}

loc_80501898:
{
}

loc_8050189C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805018E8;
    }
}

loc_805018A0:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f3.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -1528));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    // psq_store w=1 quant=3 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 20);
    PPC_PsqStStackInline<1u, 3u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f1.d));
    r0 = MemoryInline::FlatRead16((r1 + 20));
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r0));
    // psq_load w=1 quant=3 (using PPC_PsqL)
    r1_psq_tmp_2 = (r1 + 10);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 3u>(ctx, r1_psq_tmp_2));
    r4 = 0x80630000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r4 = (r4 + 640);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - PPC_PsToScalarInline(f0.d)));
    r3 = (r4 + r0);
    addr_lfsx_805018D0_loc_0 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_805018D0_loc_0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    goto loc_8050192C;
}

loc_805018E8:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f3.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -1528));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    // psq_store w=1 quant=3 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 16);
    PPC_PsqStStackInline<1u, 3u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f1.d));
    r0 = MemoryInline::FlatRead16((r1 + 16));
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    // psq_load w=1 quant=3 (using PPC_PsqL)
    r1_psq_tmp_4 = (r1 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 3u>(ctx, r1_psq_tmp_4));
    r4 = 0x80630000u;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r4 = (r4 + 640);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - PPC_PsToScalarInline(f0.d)));
    r3 = (r4 + r0);
    addr_lfsx_80501918_loc_0 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80501918_loc_0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_8050192C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r2 + -1504));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    // psq_store w=1 quant=3 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 12);
    PPC_PsqStStackInline<1u, 3u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f0.d));
    r3 = MemoryInline::FlatRead16((r1 + 12));
}

loc_8050193C:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return r4;
}

}

extern "C" void func_80501788(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80501788_ra10_1e_10_0(ctx, ctx->gpr[4], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000017 gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80501788 func_80501788 preserves=true fpr_mask=0x00000000
