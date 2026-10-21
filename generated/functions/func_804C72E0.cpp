#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804C72E0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x804C72E0u);
    goto loc_804C72E0;

loc_804C72E0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    f2.d = MemoryInline::FlatReadFloat32(r3);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f5.d = (-(f2.d));
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    f4.d = (-(f1.d));
    f2.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = (-(f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f2.d = (-(f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r3 = (r1 + 32);
    f1.d = (-(f1.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r1 + 32), f5.d);
    f0.d = (-(f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r1 + 36), f4.d);
    r31 = r5;
    r4 = r3;
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r1 + 40), f3.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r1 + 20), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r1 + 24), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r1 + 28), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804C71E0u>(ctx);
    r3 = (r1 + 20);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804C71E0u>(ctx);
    r3 = (r1 + 32);
    r4 = (r1 + 20);
    r5 = (r1 + 8);
    // inline leaf 0x804C71B0 (9 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    PpcSetPairedFprInline(f6, PPC_PsAddInline(f2.d, f4.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r5, f6.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_0));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_0 = (r4 + 8);
    PpcSetPairedFprInline(f5, PPC_PsqLStackInline<1u, 0u>(ctx, r4_psq_tmp_0));
    PpcSetPairedFprInline(f7, PPC_PsAddInline(f3.d, f5.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_0 = (r5 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_0, f7.d);
    // end of inlined leaf 0x804C71B0
    r3 = (r1 + 8);
    r4 = r3;
    // inline leaf 0x804C7280 (8 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 4);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_1));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 4);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r4_psq_tmp_1));
    PpcSetPairedFprInline(f2, PPC_PsMulInline(f2.d, f3.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f5, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    PpcSetPairedFprInline(f3, PPC_PsMaddInline(f5.d, f4.d, f2.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f3.d, f2.d, f2.d));
    // end of inlined leaf 0x804C7280
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2024));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_804C7378:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804C738C;
    }
}

loc_804C737C:
{
    r4 = r31;
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804C71E0u>(ctx);
    goto loc_804C73A4;
}

loc_804C738C:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWrite32((r31 + 4), r0);
    MemoryInline::FlatWrite32(r31, r3);
    r0 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWrite32((r31 + 8), r0);
}

loc_804C73A4:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804C72E0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804C72E0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x000000FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804C72E0 func_804C72E0 preserves=true fpr_mask=0x00000000
