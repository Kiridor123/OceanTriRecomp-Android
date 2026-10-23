#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800502E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_8005039C_loc_0 = 0;
    uint32_t addr_psqx_800503A8_loc_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800502E0;

loc_800502E0:
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
    r31 = r4;
    f30.d = MemoryInline::FlatReadFloat32(r4);
    r3 = (r3 & 65535);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x800502B0u>(ctx);
    f1 = ctx->fpr[1];
    f31.d = f1.d;
    r3 = (r30 & 65535);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050218u>(ctx);
    f1 = ctx->fpr[1];
    f3.d = MemoryInline::FlatReadFloat32((r31 + 32));
    f2.d = PpcFmulsInline(f31.d, f3.d);
    f0.d = PpcFmulsInline(f1.d, f30.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32(r31, f0.d);
    f2.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = PpcFmulsInline(f31.d, f30.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 32), f0.d);
    f4.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 36));
    f2.d = PpcFmulsInline(f31.d, f3.d);
    f0.d = PpcFmulsInline(f1.d, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
    f2.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = PpcFmulsInline(f31.d, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 36), f0.d);
    f4.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 40));
    f2.d = PpcFmulsInline(f31.d, f3.d);
    f0.d = PpcFmulsInline(f1.d, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = PpcFmulsInline(f31.d, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 40), f0.d);
    r0 = 40;
    addr_psqx_8005039C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8005039C_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r0 = 24;
    addr_psqx_800503A8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800503A8_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0xC0000002 fpr_write=0xC000001F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800502E0 func_800502E0 preserves=true fpr_mask=0x00000000
