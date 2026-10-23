#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80819D40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_80819DEC_loc_0 = 0;
    uint32_t addr_psqx_80819DF8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80819D40;

loc_80819D40:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r30 = r3;
    r3 = 0x80840000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 17448));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    r31 = 0x80840000u;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 17440));
    // inline leaf 0x80819D18 (10 guest instruction(s))
}

loc_inl0_0x80819D18:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_inl0_0x80819D1C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_inl0_0x80819D24;
    }
}

loc_inl0_0x80819D20:
{
    goto loc_inl0_0x80819D38;
}

loc_inl0_0x80819D24:
{
    f2.d = (-(f2.d));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_inl0_0x80819D2C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl0_0x80819D34;
    }
}

loc_inl0_0x80819D30:
{
    goto loc_inl0_0x80819D38;
}

loc_inl0_0x80819D34:
{
    f2.d = f1.d;
}

loc_inl0_0x80819D38:
{
    f1.d = f2.d;
}

loc_inl0_cont_80819D18:
{
    // end of inlined leaf 0x80819D18
    f30.d = f1.d;
    f1.d = f31.d;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 17440));
    // inline leaf 0x80819D18 (10 guest instruction(s))
}

loc_inl1_0x80819D18:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_inl1_0x80819D1C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_inl1_0x80819D24;
    }
}

loc_inl1_0x80819D20:
{
    goto loc_inl1_0x80819D38;
}

loc_inl1_0x80819D24:
{
    f2.d = (-(f2.d));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_inl1_0x80819D2C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl1_0x80819D34;
    }
}

loc_inl1_0x80819D30:
{
    goto loc_inl1_0x80819D38;
}

loc_inl1_0x80819D34:
{
    f2.d = f1.d;
}

loc_inl1_0x80819D38:
{
    f1.d = f2.d;
}

loc_inl1_cont_80819D18:
{
    // end of inlined leaf 0x80819D18
    f31.d = f1.d;
    r3 = 0x80840000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 17444));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_80819DA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80819DB8;
    }
}

loc_80819DA8:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80819DAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80819DB8;
    }
}

loc_80819DB0:
{
    r3 = 0;
    goto loc_80819DE8;
}

loc_80819DB8:
{
    f0.d = MemoryInline::FlatReadFloat32(r30);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f30.d));
    r31 = 0x80840000u;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 17440));
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80819D18u>(ctx);
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    MemoryInline::FlatWriteFloat32(r30, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 17440));
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80819D18u>(ctx);
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    MemoryInline::FlatWriteFloat32((r30 + 4), f1.d);
    r3 = 1;
}

loc_80819DE8:
{
    r0 = 40;
    addr_psqx_80819DEC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80819DEC_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r0 = 24;
    addr_psqx_80819DF8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80819DF8_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0xC0000007 fpr_write=0xC0000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80819D40 func_80819D40 preserves=true fpr_mask=0x00000000
