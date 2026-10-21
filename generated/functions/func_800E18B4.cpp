#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E18B4_ra0_c_0_0(CpuContext* MKW_RESTRICT ctx, double arg_f2, double arg_f3)
{
    uint32_t addr_psqx_800E1988_loc_0 = 0;
    uint32_t addr_psqx_800E1994_loc_0 = 0;
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x800E18B4u);
    goto loc_800E18B4;

loc_800E18B4:
{
}

loc_800E18B8:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_800E18D8;
    }
}

loc_800E18BC:
{
    SetCRFloatResident(cr, 0, f30.d, f2.d);
}

loc_800E18C0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800E1980;
    }
}

loc_800E18C4:
{
    SetCRFloatResident(cr, 0, f30.d, f3.d);
}

loc_800E18C8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800E1980;
    }
}

loc_800E18D0:
{
    r3 = 1;
    goto loc_800E1984;
}

loc_800E18D8:
{
    SetCRFloatResident(cr, 0, f30.d, f3.d);
}

loc_800E18DC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800E18F4;
    }
}

loc_800E18E4:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 188));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_800E18EC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E18FC;
    }
}

loc_800E18F4:
{
    SetCRFloatResident(cr, 0, f30.d, f2.d);
}

loc_800E18F8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800E1980;
    }
}

loc_800E18FC:
{
    r3 = 1;
    goto loc_800E1984;
}

loc_800E1980:
{
    r3 = 0;
}

loc_800E1984:
{
    r0 = 56;
    addr_psqx_800E1988_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800E1988_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r0 = 40;
    addr_psqx_800E1994_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800E1994_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

extern "C" void func_800E18B4(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_800E18B4_ra0_c_0_0(ctx, ctx->fpr[2].d, ctx->fpr[3].d);
}

// RECOMP_GUEST_ABI gpr_read=0x90000002 gpr_write=0xF000000B gpr_return=0x00000008 fpr_read=0x4000000D fpr_write=0xC0000001 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E18B4 func_800E18B4 preserves=false fpr_mask=0xC0000000
