#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803CCE08(CpuContext* ctx);
extern "C" double func_803CCE08_ra8_6_0_2(CpuContext*, uint32_t, double, double);

extern "C" uint64_t func_803CB1B4_ra18_6_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1, double arg_f2)
{
    uint32_t addr_psqx_803CB204_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x803CB1B4u);
    goto loc_803CB1B4;

loc_803CB1B4:
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
    // inline leaf 0x803CC09C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 8624));
    // end of inlined leaf 0x803CC09C
}

loc_803CB1DC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803CB200;
    }
}

loc_803CB1E0:
{
    r3 = r31;
    r4 = 1;
    // inline leaf 0x803CC094 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 8624), r4);
    // end of inlined leaf 0x803CC094
    MemoryInline::FlatWriteFloat32((r31 + 8692), f31.d);
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x803CCE08u>(&func_803CCE08)) {
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_803CCE08_77E = func_803CCE08_ra8_6_0_2(ctx, r3, f1.d, f2.d);
        f1.d = regargs_result_803CCE08_77E;
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x803CCE08u>(ctx);
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8628));
    MemoryInline::FlatWriteFloat32((r31 + 8636), f0.d);
}

loc_803CB200:
{
    r0 = 24;
    addr_psqx_803CB204_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803CB204_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803CB1B4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803CB1B4_ra18_6_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001E gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x80000007 fpr_write=0x80000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803CB1B4 func_803CB1B4 preserves=true fpr_mask=0x00000000
