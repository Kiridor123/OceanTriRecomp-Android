#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80053E00_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];

    MKW_GUEST_ENTER(0x80053E00u);
    goto loc_80053E00;

loc_80053E00:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 116u, (r1 + 116), r0);
    r30 = r3;
    r3 = (r1 + 56);
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -32412));
    // inline leaf 0x804C6A20 (10 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2084));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 56u, r3, f1.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_0 = (r3 + 4);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_0, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 12);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_1, PPC_PsFromScalarInline(f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 76u, (r3 + 20), f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_2, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 32);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_3, PPC_PsFromScalarInline(f0.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 96u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 96u, (r3 + 40), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 100u, (r3 + 44), f0.d);
    }
    // end of inlined leaf 0x804C6A20
    f1.d = MemoryInline::FlatReadFloat32(r30);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, (r1 + 68), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 84u, (r1 + 84), f0.d);
    r3 = (r1 + 8);
    f1.d = (-(f1.d));
    f2.d = (-(f0.d));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -32424));
    // inline leaf 0x804C6990 (13 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2084));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -2088));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 28), f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 4);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_4, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_5 = (r3 + 32);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_5, PPC_PsFromScalarInline(f0.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 20), f4.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 24), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 40), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 44), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r3, f4.d);
    // end of inlined leaf 0x804C6990
    r3 = (r1 + 56);
    r4 = (r1 + 8);
    r5 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804C6300u>(ctx);
    r30 = 0x80670000u;
    r0 = MemoryInline::FlatRead32((r30 + -12896));
    r0 = (r0 & 4);
}

loc_80053E70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80053EA0;
    }
}

loc_80053E74:
{
    r30 = (r30 + -12896);
    r3 = (r30 + 116);
    // inline leaf 0x8005056C (1 guest instruction(s))
    // end of inlined leaf 0x8005056C
    r31 = r3;
    r3 = (r30 + 116);
    // inline leaf 0x8005056C (1 guest instruction(s))
    // end of inlined leaf 0x8005056C
    r4 = r3;
    r3 = (r1 + 56);
    r5 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804C6300u>(ctx);
    goto loc_80053EC4;
}

loc_80053EA0:
{
    r3 = (r30 + -12896);
    r3 = (r3 + 116);
    // inline leaf 0x8005056C (1 guest instruction(s))
    // end of inlined leaf 0x8005056C
    r4 = r3;
    r3 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804C62C0u>(ctx);
    r0 = MemoryInline::FlatRead32((r30 + -12896));
    r0 = (r0 | 4);
    MemoryInline::FlatWriteRam32((r30 + -12896), r0);
}

loc_80053EC4:
{
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80053E00(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80053E00_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80053E00 func_80053E00 preserves=true fpr_mask=0x00000000
