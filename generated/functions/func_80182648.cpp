#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80182648_ra8_2_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1)
{
    uint32_t addr_psqx_801827B0_loc_0 = 0;
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x80182648u);
    goto loc_80182648;

loc_80182648:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 880));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 396));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24392));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8018265C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8018266C;
    }
}

loc_80182664:
{
    r3 = 2;
    goto loc_801827AC;
}

loc_8018266C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24436));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80182674:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80182684;
    }
}

loc_8018267C:
{
    r3 = 1;
    goto loc_801827AC;
}

loc_80182684:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24388));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8018268C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8018269C;
    }
}

loc_80182694:
{
    r3 = 4;
    goto loc_801827AC;
}

loc_8018269C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24080));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801826A4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801826B4;
    }
}

loc_801826AC:
{
    r3 = 3;
    goto loc_801827AC;
}

loc_801826B4:
{
    r3 = 0;
}

loc_801827AC:
{
    r0 = 24;
    addr_psqx_801827B0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_801827B0_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_80182648(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80182648_ra8_2_8_0(ctx, ctx->gpr[3], ctx->fpr[1].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x8000000B gpr_return=0x00000008 fpr_read=0x00000003 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80182648 func_80182648 preserves=false fpr_mask=0x80000000
