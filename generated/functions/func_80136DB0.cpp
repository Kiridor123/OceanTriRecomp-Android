#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800C9E30(CpuContext* ctx);
extern "C" double func_800C9E30_ra0_2_0_2(CpuContext*, double);

extern "C" MkwStateFreeResult2 func_800C9E30_statefree(PPC_FPR, PPC_FPR);
extern "C" uint64_t func_800C9E30_statefree_v0(PPC_FPR);

extern "C" double func_80136DB0_ra8_2_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1)
{
    uint32_t addr_psqx_80136E30_loc_0 = 0;
    uint32_t addr_psqx_80136E3C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80136DB0;

loc_80136DB0:
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
    r31 = r3;
    f30.d = f1.d;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 880));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 396));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    // inline leaf 0x8012B668 (1 guest instruction(s))
    // end of inlined leaf 0x8012B668
    f1.d = f31.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C9E30u) && KnownTranslatedCpuCall<0x800C9E30u>::kAvailable && !KnownTranslatedCpuCall<0x800C9E30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C9E30u>()) {
        const auto state_free_result_800C9E30_8C7 = func_800C9E30_statefree_v0(f1);
        f1.raw = static_cast<uint64_t>(state_free_result_800C9E30_8C7);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800C9E30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    SetCRFloatResident(cr, 0, f1.d, f30.d);
}

loc_80136DF4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80136E04;
    }
}

loc_80136DF8:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 880));
    MemoryInline::FlatWriteFloat32((r31 + 396), f0.d);
    goto loc_80136E2C;
}

loc_80136E04:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28232));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80136E0C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80136E20;
    }
}

loc_80136E10:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 396));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    MemoryInline::FlatWriteFloat32((r31 + 396), f0.d);
    goto loc_80136E2C;
}

loc_80136E20:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 396));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f30.d));
    MemoryInline::FlatWriteFloat32((r31 + 396), f0.d);
}

loc_80136E2C:
{
    r0 = 40;
    addr_psqx_80136E30_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80136E30_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r0 = 24;
    addr_psqx_80136E3C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80136E3C_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return f1.d;
}

}

extern "C" void func_80136DB0(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_80136DB0_ra8_2_0_2(ctx, ctx->gpr[3], ctx->fpr[1].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x00000003 gpr_return=0x00000000 fpr_read=0xC0000002 fpr_write=0xC0000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80136DB0 func_80136DB0 preserves=true fpr_mask=0x00000000
