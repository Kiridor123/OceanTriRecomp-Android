#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804C6B60_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_804C6B60;

loc_804C6B60:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    f1.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 68), r0);
    f0.d = MemoryInline::FlatReadFloat32(r6);
    r31 = r5;
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    r30 = r4;
    f2.d = MemoryInline::FlatReadFloat32((r6 + 4));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r6 + 8));
    r29 = r3;
    r3 = (r1 + 32);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r1 + 32), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r1 + 36), f2.d);
    r4 = r3;
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r1 + 40), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804C71E0u>(ctx);
    r3 = r31;
    r4 = (r1 + 32);
    r5 = (r1 + 20);
    // inline leaf 0x804C72A0 (15 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f6, PPC_PsMerge10Inline(f1.d, f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f1.d, PPC_PsFromScalarInline(f2.d)));
    PpcSetPairedFprInline(f7, PPC_PsMuls0Inline(f1.d, f0.d));
    PpcSetPairedFprInline(f5, PPC_PsMsubInline(f0.d, PPC_PsFromScalarInline(f3.d), f4.d));
    PpcSetPairedFprInline(f8, PPC_PsMsubInline(f0.d, f6.d, f7.d));
    PpcSetPairedFprInline(f9, PPC_PsMerge11Inline(f5.d, f5.d));
    PpcSetPairedFprInline(f10, PPC_PsMerge01Inline(f5.d, f8.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 0u>(ctx, r5, f9.d);
    PpcSetPairedFprInline(f10, PPC_PsNegInline(f10.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_0 = (r5 + 4);
    PPC_PsqStStackInline<0u, 0u>(ctx, r5_psq_tmp_0, f10.d);
    // end of inlined leaf 0x804C72A0
    r3 = (r1 + 20);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804C71E0u>(ctx);
    r3 = (r1 + 32);
    r4 = (r1 + 20);
    r5 = (r1 + 8);
    // inline leaf 0x804C72A0 (15 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + -24), 0, 64u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 32u, (r3 + 8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f6, PPC_PsMerge10Inline(f1.d, f1.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r4 + 8));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f1.d, PPC_PsFromScalarInline(f2.d)));
    PpcSetPairedFprInline(f7, PPC_PsMuls0Inline(f1.d, f0.d));
    PpcSetPairedFprInline(f5, PPC_PsMsubInline(f0.d, PPC_PsFromScalarInline(f3.d), f4.d));
    PpcSetPairedFprInline(f8, PPC_PsMsubInline(f0.d, f6.d, f7.d));
    PpcSetPairedFprInline(f9, PPC_PsMerge11Inline(f5.d, f5.d));
    PpcSetPairedFprInline(f10, PPC_PsMerge01Inline(f5.d, f8.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 0u>(ctx, r5, f9.d);
    PpcSetPairedFprInline(f10, PPC_PsNegInline(f10.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_1 = (r5 + 4);
    PPC_PsqStStackInline<0u, 0u>(ctx, r5_psq_tmp_1, f10.d);
    // end of inlined leaf 0x804C72A0
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r1 + 20));
    guest_range_0 = MemoryInline::ResolveRangeHost(r29, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r29, f0.d);
    f4.d = MemoryInline::FlatReadFloat32(r30);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r1 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r29 + 4), f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r1 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r29 + 8), f0.d);
    f5.d = MemoryInline::FlatReadFloat32((r30 + 8));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 12u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r1 + 20));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r1 + 24));
        }
    }
    f1.d = PpcFmulsInline(f4.d, f1.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r1 + 28));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f2.d = PpcFmulsInline(f5.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = (-(f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r29 + 12), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r1 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r29 + 16), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r1 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r29 + 20), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r1 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r29 + 24), f0.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r1 + 8));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r1 + 12));
        }
    }
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r1 + 16));
    f1.d = PpcFmulsInline(f4.d, f1.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f2.d = PpcFmulsInline(f5.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = (-(f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r29 + 28), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, (r1 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r29 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 28u, (r1 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r29 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 32u, (r1 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r29 + 40), f0.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, (r1 + 32));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 28u, (r1 + 36));
        }
    }
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 32u, (r1 + 40));
    f1.d = PpcFmulsInline(f4.d, f1.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f2.d = PpcFmulsInline(f5.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = (-(f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r29 + 44), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 60u, (r1 + 68));
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804C6B60(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804C6B60_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x000007FF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804C6B60 func_804C6B60 preserves=true fpr_mask=0x00000000
