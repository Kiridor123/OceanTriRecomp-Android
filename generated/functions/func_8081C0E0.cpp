#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081C0E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8081C0E0u);
    goto loc_8081C0E0;

loc_8081C0E0:
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
    r31 = 0x80840000u;
    r31 = (r31 + 17560);
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 80));
    ctr = r12;
    ctx->lr = 0x8081C124u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    ctr = ctx->ctr;
}

loc_8081C128:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8081C23C;
    }
}

loc_8081C12C:
{
    r3 = MemoryInline::FlatRead32((r30 + 44));
    r0 = MemoryInline::FlatRead32((r31 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 76));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 80));
    f31.d = MemoryInline::FlatReadFloat32((r3 + 144));
    f30.d = MemoryInline::FlatReadFloat32((r3 + 160));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = MemoryInline::FlatRead8((r30 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
}

loc_8081C158:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8081C16C;
    }
}

loc_8081C15C:
{
    r3 = 0;
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
}

loc_8081C16C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 8));
    r4 = (r1 + 8);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r3 = 8;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f5.d = MemoryInline::FlatReadFloat32(r31);
    f3.d = PpcFmulsInline(f2.d, f1.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f3.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f3.d));
    f4.d = f2.d;
    ctx->lr = 0x8081C1A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081ACD0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    ctr = ctx->ctr;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    r4 = (r1 + 8);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 8));
    r3 = 8;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f5.d = MemoryInline::FlatReadFloat32(r31);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f1.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f0.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
    f3.d = f1.d;
    ctx->lr = 0x8081C1D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081ACD0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    ctr = ctx->ctr;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 8));
    r4 = (r1 + 8);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r3 = 8;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f5.d = MemoryInline::FlatReadFloat32(r31);
    f3.d = PpcFmulsInline(f2.d, f1.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f3.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f3.d));
    f4.d = f2.d;
    ctx->lr = 0x8081C208u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081ACD0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    ctr = ctx->ctr;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    r4 = (r1 + 8);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 8));
    r3 = 8;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f5.d = MemoryInline::FlatReadFloat32(r31);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f1.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f0.d));
    f3.d = f1.d;
    ctx->lr = 0x8081C23Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081ACD0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    ctr = ctx->ctr;
}

loc_8081C23C:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 32));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8081C0E0 func_8081C0E0 preserves=true fpr_mask=0x00000000
