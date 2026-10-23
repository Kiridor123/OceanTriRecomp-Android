#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802C1B3C(CpuContext* ctx);
extern "C" uint32_t func_802C1B3C_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802C2038_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_802C20D8_loc_0 = 0;
    uint32_t addr_psqx_802C20E4_loc_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
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

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_802C2038;

loc_802C2038:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r29 = r3;
    r30 = r4;
    r31 = r5;
    f30.d = f1.d;
    f31.d = f2.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8007A5C8u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = r29;
    r4 = r30;
    ctx->lr = 0x802C2084u;
    if constexpr (KnownRegArgsCpuCall<0x802C1B3Cu>(&func_802C1B3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_802C1B3C_943 = func_802C1B3C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_802C1B3C_943;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x802C1B3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    r0 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = r29;
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8007A5DCu>(ctx);
    r3 = r29;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13468));
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8007A688u>(ctx);
    r3 = r29;
    f1.d = f30.d;
    f2.d = f31.d;
    r4 = 3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8007A708u>(ctx);
    r3 = r29;
    // inline leaf 0x802C1FC8 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 & -17);
    MemoryInline::FlatWrite32(r3, r0);
    // end of inlined leaf 0x802C1FC8
    r3 = r29;
    // inline leaf 0x80064C48 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 | 32);
    MemoryInline::FlatWrite32(r3, r0);
    // end of inlined leaf 0x80064C48
    r3 = r29;
    // inline leaf 0x80064C38 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32(r3, r0);
    // end of inlined leaf 0x80064C38
    r0 = 56;
    addr_psqx_802C20D8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802C20D8_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r0 = 40;
    addr_psqx_802C20E4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802C20E4_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802C2038(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802C2038_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003E gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0xC0000006 fpr_write=0xC000000E fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802C2038 func_802C2038 preserves=true fpr_mask=0x00000000
