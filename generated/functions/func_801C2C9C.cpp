#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_801C2C9C_ra8_2_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1)
{
    uint32_t addr_psqx_801C2D38_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;

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

    MKW_GUEST_ENTER(0x801C2C9Cu);
    goto loc_801C2C9C;

loc_801C2C9C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r31 = r3;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 396));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 524));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -19108));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801C2CD0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C2CEC;
    }
}

loc_801C2CD4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -19104));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801C2CDC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C2CE4;
    }
}

loc_801C2CE0:
{
    f1.d = f0.d;
}

loc_801C2CE4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -19108));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
}

loc_801C2CEC:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 812));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
    r3 = r31;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -19100));
    f1.d = PpcFmulsInline(f0.d, f31.d);
    ctx->lr = 0x801C2D04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80130460u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_801C2D0C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C2D24;
    }
}

loc_801C2D10:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 428));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_801C2D18:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C2D34;
    }
}

loc_801C2D1C:
{
    MemoryInline::FlatWriteFloat32((r31 + 428), f31.d);
    goto loc_801C2D34;
}

loc_801C2D24:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 428));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_801C2D2C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801C2D34;
    }
}

loc_801C2D30:
{
    MemoryInline::FlatWriteFloat32((r31 + 428), f31.d);
}

loc_801C2D34:
{
    r0 = 24;
    addr_psqx_801C2D38_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_801C2D38_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_801C2C9C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_801C2C9C_ra8_2_8_0(ctx, ctx->gpr[3], ctx->fpr[1].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801C2C9C func_801C2C9C preserves=true fpr_mask=0x00000000
