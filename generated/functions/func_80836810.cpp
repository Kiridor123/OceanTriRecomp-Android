#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80836810(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_8083687C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;

    goto loc_80836810;

loc_80836810:
{
    r5 = 0x80840000u;
    f2.d = std::fabs(f1.d);
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 18736));
    goto loc_8083682C;
}

loc_80836828:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
}

loc_8083682C:
{
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80836830:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80836828;
    }
}

loc_80836838:
{
    r5 = (r1 + 12);
    // psq_store w=1 quant=3 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 3u>(ctx, r5, PPC_PsFromScalarInline(f2.d));
    r5 = (r1 + 8);
    r0 = MemoryInline::FlatRead16((r1 + 12));
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    // psq_load w=1 quant=3 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 3u>(ctx, r5));
    r7 = 0x80840000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & 4080);
    r5 = 0x80840000u;
    r7 = (r7 + 26976);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d - PPC_PsToScalarInline(f0.d)));
    r6 = (r7 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 18740));
    f3.d = MemoryInline::FlatReadFloat32((r6 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80836874:
{
    f2.d = MemoryInline::FlatReadFloat32((r6 + 12));
    f4.d = PpcFmulsInline(f5.d, f3.d);
    addr_lfsx_8083687C_loc_0 = (r7 + r0);
    f3.d = MemoryInline::FlatReadFloat32(addr_lfsx_8083687C_loc_0);
    f1.d = PpcFmulsInline(f5.d, f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 4));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80836898;
    }
}

loc_80836894:
{
    f2.d = (-(f2.d));
}

loc_80836898:
{
    MemoryInline::FlatWriteFloat32(r3, f2.d);
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000DB gpr_write=0x000000E3 gpr_return=0x00000000 fpr_read=0x0000002F fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80836810 func_80836810 preserves=true fpr_mask=0x00000000
