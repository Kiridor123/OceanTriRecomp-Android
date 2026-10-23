#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808368B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_80836914_loc_0 = 0;
    uint32_t addr_lfsx_80836960_loc_0 = 0;
    uint32_t addr_lfsx_808369BC_loc_0 = 0;
    uint32_t addr_lfsx_80836A0C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;

    goto loc_808368B0;

loc_808368B0:
{
    r3 = 0x80840000u;
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r3 = (r3 + 18736);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 24u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r3 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_808368C4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80836974;
    }
}

loc_808368CC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_808368D4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8083692C;
    }
}

loc_808368D8:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 12));
    r4 = (r1 + 28);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    // psq_store w=1 quant=3 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 3u>(ctx, r4, PPC_PsFromScalarInline(f1.d));
    r4 = (r1 + 14);
    r0 = MemoryInline::FlatRead16((r1 + 28));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    // psq_load w=1 quant=3 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 3u>(ctx, r4));
    r4 = 0x80840000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 16));
    r4 = (r4 + 31088);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - PPC_PsToScalarInline(f2.d)));
    r3 = (r4 + r0);
    addr_lfsx_80836914_loc_0 = (r4 + r0);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_80836914_loc_0);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_80836A20;
}

loc_8083692C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 12));
    r3 = (r1 + 24);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    // psq_store w=1 quant=3 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 3u>(ctx, r3, PPC_PsFromScalarInline(f0.d));
    r3 = (r1 + 12);
    r0 = MemoryInline::FlatRead16((r1 + 24));
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
    // psq_load w=1 quant=3 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 3u>(ctx, r3));
    r4 = 0x80840000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r4 = (r4 + 31088);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - PPC_PsToScalarInline(f1.d)));
    r3 = (r4 + r0);
    addr_lfsx_80836960_loc_0 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80836960_loc_0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    goto loc_80836A20;
}

loc_80836974:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 20));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8083697C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_808369D4;
    }
}

loc_80836980:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 12));
    r4 = (r1 + 20);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    // psq_store w=1 quant=3 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 3u>(ctx, r4, PPC_PsFromScalarInline(f1.d));
    r4 = (r1 + 10);
    r0 = MemoryInline::FlatRead16((r1 + 20));
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r0));
    // psq_load w=1 quant=3 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 3u>(ctx, r4));
    r4 = 0x80840000u;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r3 + 24));
    r4 = (r4 + 31088);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - PPC_PsToScalarInline(f2.d)));
    r3 = (r4 + r0);
    addr_lfsx_808369BC_loc_0 = (r4 + r0);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_808369BC_loc_0);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    goto loc_80836A20;
}

loc_808369D4:
{
    f1.d = (-(f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 12));
    r3 = (r1 + 16);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    // psq_store w=1 quant=3 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 3u>(ctx, r3, PPC_PsFromScalarInline(f1.d));
    r3 = (r1 + 8);
    r0 = MemoryInline::FlatRead16((r1 + 16));
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    // psq_load w=1 quant=3 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 3u>(ctx, r3));
    r4 = 0x80840000u;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & -8);
    r4 = (r4 + 31088);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - PPC_PsToScalarInline(f0.d)));
    r3 = (r4 + r0);
    addr_lfsx_80836A0C_loc_0 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80836A0C_loc_0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f1.d = (-(f0.d));
}

loc_80836A20:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x0000000B fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x808368B0 func_808368B0 preserves=true fpr_mask=0x00000000
