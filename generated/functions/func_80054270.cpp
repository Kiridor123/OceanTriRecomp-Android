#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80054270_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint8_t* guest_range_0 = nullptr;

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

    goto loc_80054270;

loc_80054270:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    r5 = r3;
    r30 = r4;
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -32412));
    // inline leaf 0x804C6A20 (10 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2084));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, r3, f1.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_0 = (r3 + 4);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_0, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 12);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_1, PPC_PsFromScalarInline(f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 20), f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_2, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 32);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_3, PPC_PsFromScalarInline(f0.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r3 + 40), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r3 + 44), f0.d);
    }
    // end of inlined leaf 0x804C6A20
    f0.d = MemoryInline::FlatReadFloat32(r30);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r1 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r1 + 36), f0.d);
    r30 = 0x80670000u;
    r0 = MemoryInline::FlatRead32((r30 + -12896));
    r0 = (r0 & 4);
}

loc_800542C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800542F0;
    }
}

loc_800542C4:
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
    r3 = (r1 + 8);
    r5 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804C6300u>(ctx);
    goto loc_80054314;
}

loc_800542F0:
{
    r3 = (r30 + -12896);
    r3 = (r3 + 116);
    // inline leaf 0x8005056C (1 guest instruction(s))
    // end of inlined leaf 0x8005056C
    r4 = r3;
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804C62C0u>(ctx);
    r0 = MemoryInline::FlatRead32((r30 + -12896));
    r0 = (r0 | 4);
    MemoryInline::FlatWriteRam32((r30 + -12896), r0);
}

loc_80054314:
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80054270(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80054270_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80054270 func_80054270 preserves=true fpr_mask=0x00000000
