#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_805015E0_ra18_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t addr_lfsx_80501724_loc_0 = 0;
    uint32_t addr_lfsx_8050176C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x805015E0u);
    goto loc_805015E0;

loc_805015E0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -1532), 0, 24u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -1532));
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_805015EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80501600;
    }
}

loc_805015F0:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805015F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80501600;
    }
}

loc_805015F8:
{
    f1.d = f0.d;
    goto loc_80501780;
}

loc_80501600:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -1532));
    SetCRFloatResident(cr, 0, f2.d, f4.d);
}

loc_80501608:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80501678;
    }
}

loc_80501610:
{
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_80501614:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80501648;
    }
}

loc_8050161C:
{
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_80501620:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80501634;
    }
}

loc_80501628:
{
    f3.d = f2.d;
    r0 = 0;
    goto loc_805016EC;
}

loc_80501634:
{
    f3.d = f1.d;
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -1524));
    f1.d = f2.d;
    r0 = 1;
    goto loc_805016EC;
}

loc_80501648:
{
    f1.d = (-(f1.d));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_80501650:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80501664;
    }
}

loc_80501658:
{
    f3.d = f2.d;
    r0 = 1;
    goto loc_805016EC;
}

loc_80501664:
{
    f3.d = f1.d;
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -1520));
    f1.d = f2.d;
    r0 = 0;
    goto loc_805016EC;
}

loc_80501678:
{
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8050167C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805016B8;
    }
}

loc_80501684:
{
    f0.d = (-(f2.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8050168C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805016A4;
    }
}

loc_80501694:
{
    f3.d = f0.d;
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -1516));
    r0 = 1;
    goto loc_805016EC;
}

loc_805016A4:
{
    f3.d = f1.d;
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -1524));
    f1.d = f0.d;
    r0 = 0;
    goto loc_805016EC;
}

loc_805016B8:
{
    f0.d = (-(f2.d));
    f1.d = (-(f1.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805016C4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805016DC;
    }
}

loc_805016CC:
{
    f3.d = f0.d;
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r2 + -1512));
    r0 = 0;
    goto loc_805016EC;
}

loc_805016DC:
{
    f3.d = f1.d;
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -1520));
    f1.d = f0.d;
    r0 = 1;
}

loc_805016EC:
{
}

loc_805016F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8050173C;
    }
}

loc_805016F4:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f3.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -1528));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    // psq_store w=1 quant=3 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 16);
    PPC_PsqStStackInline<1u, 3u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f1.d));
    r0 = MemoryInline::FlatRead16((r1 + 16));
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
    addr_lfsx_80501724_loc_0 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80501724_loc_0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    goto loc_80501780;
}

loc_8050173C:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f3.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -1528));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    // psq_store w=1 quant=3 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 12);
    PPC_PsqStStackInline<1u, 3u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f1.d));
    r0 = MemoryInline::FlatRead16((r1 + 12));
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
    addr_lfsx_8050176C_loc_0 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8050176C_loc_0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_80501780:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_805015E0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_805015E0_ra18_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805015E0 func_805015E0 preserves=true fpr_mask=0x00000000
