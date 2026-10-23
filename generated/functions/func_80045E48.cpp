#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80045E48_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t addr_psqx_80045EE8_loc_0 = 0;
    uint32_t addr_psqx_80045EF4_loc_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80045E48;

loc_80045E48:
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
    r31 = r6;
    f1.d = MemoryInline::FlatReadFloat32(r5);
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = PpcFmulsInline(f31.d, f31.d);
    f0.d = PpcFmulsInline(f30.d, f30.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x804645F4u>(ctx);
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32644));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f31.d = PpcFmulsInline(f31.d, f2.d);
    f30.d = PpcFmulsInline(f30.d, f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 220));
    f1.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 224));
    f0.d = PpcFmulsInline(f0.d, f30.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32(r31, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 224));
    f1.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 220));
    f0.d = PpcFmulsInline(f0.d, f30.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 416));
    f1.d = PpcFmulsInline(f0.d, f2.d);
    r0 = 40;
    addr_psqx_80045EE8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80045EE8_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r0 = 24;
    addr_psqx_80045EF4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80045EF4_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80045E48(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80045E48_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007E gpr_write=0x00000003 gpr_return=0x00000000 fpr_read=0xC0000000 fpr_write=0xC0000007 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80045E48 func_80045E48 preserves=true fpr_mask=0x00000000
