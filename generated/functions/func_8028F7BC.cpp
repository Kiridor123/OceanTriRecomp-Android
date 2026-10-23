#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050F10(CpuContext* ctx);
extern "C" uint64_t func_80050F10_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8028F7BC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_8028F880_loc_0 = 0;
    uint32_t addr_psqx_8028F88C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8028F7BC;

loc_8028F7BC:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r29;
    r4 = r30;
    ctx->lr = 0x8028F804u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050F10u>(ctx);
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31.d = f1.d;
    f2.d = MemoryInline::FlatReadFloat32((r29 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = PpcFmulsInline(f30.d, f30.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8028F81C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8028F878;
    }
}

loc_8028F824:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14220));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8028F82C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8028F860;
    }
}

loc_8028F830:
{
    r3 = (r1 + 8);
    r4 = r29;
    r5 = r30;
    // inline leaf 0x80050D58 (9 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_0 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_0));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_0 = (r5 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_0));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_0 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_0, f0.d);
    // end of inlined leaf 0x80050D58
    f1.d = f31.d;
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050C24u>(ctx);
    f1 = ctx->fpr[1];
    mkw_gqr0 = ctx->gqr[0];
    f0.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    r3 = r31;
    r4 = (r1 + 8);
    // inline leaf 0x80051488 (7 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r4_psq_tmp_1));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1, f0.d);
    // end of inlined leaf 0x80051488
    goto loc_8028F870;
}

loc_8028F860:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14216));
    MemoryInline::FlatWriteFloat32(r31, f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
}

loc_8028F870:
{
    r3 = 1;
    goto loc_8028F87C;
}

loc_8028F878:
{
    r3 = 0;
}

loc_8028F87C:
{
    r0 = 72;
    addr_psqx_8028F880_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8028F880_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r0 = 56;
    addr_psqx_8028F88C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8028F88C_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8028F7BC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8028F7BC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003E gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0xC0000002 fpr_write=0xC0000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8028F7BC func_8028F7BC preserves=true fpr_mask=0x00000000
