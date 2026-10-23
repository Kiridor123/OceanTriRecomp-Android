#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8012FF18_ra8_2_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1)
{
    uint32_t addr_psqx_8012FF80_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8012FF18;

loc_8012FF18:
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
    f31.d = f1.d;
    r0 = MemoryInline::FlatRead8((r3 + 572));
}

loc_8012FF40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8012FF4C;
    }
}

loc_8012FF44:
{
    r3 = 0;
    goto loc_8012FF7C;
}

loc_8012FF4C:
{
    // inline leaf 0x801359A4 (4 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 460));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 464));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    // end of inlined leaf 0x801359A4
    f1.d = PpcFmulsInline(f31.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 576));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 396));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8012FF64:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8012FF78;
    }
}

loc_8012FF6C:
{
    MemoryInline::FlatWriteFloat32((r31 + 396), f1.d);
    r3 = 1;
    goto loc_8012FF7C;
}

loc_8012FF78:
{
    r3 = 0;
}

loc_8012FF7C:
{
    r0 = 24;
    addr_psqx_8012FF80_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8012FF80_loc_0));
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

extern "C" void func_8012FF18(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8012FF18_ra8_2_8_0(ctx, ctx->gpr[3], ctx->fpr[1].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x80000003 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012FF18 func_8012FF18 preserves=true fpr_mask=0x00000000
