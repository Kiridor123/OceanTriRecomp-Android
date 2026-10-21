#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808386B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x808386B0u);
    goto loc_808386B0;

loc_808386B0:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    r5 = r4;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r0 = 1127219200;
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 72));
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r12 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    r12 = MemoryInline::FlatRead32((r12 + 80));
    ctr = r12;
    ctx->lr = 0x808386F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead8((r31 + 67));
}

loc_808386FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80838760;
    }
}

loc_80838700:
{
    r4 = MemoryInline::FlatRead8((r1 + 14));
    r5 = 0x80840000u;
    r0 = MemoryInline::FlatRead8((r1 + 12));
    r3 = 0x80840000u;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    f4.d = MemoryInline::FlatReadFloat64((r5 + 18784));
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 36));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f31.d = MemoryInline::FlatReadFloat32((r31 + 68));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 18792));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f3.d);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    goto loc_808387A4;
}

loc_80838760:
{
    r4 = MemoryInline::FlatRead8((r1 + 14));
    r3 = 0x80840000u;
    r0 = MemoryInline::FlatRead8((r1 + 12));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    f3.d = MemoryInline::FlatReadFloat64((r3 + 18784));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 36));
    r3 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f31.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = PpcFmulsInline(f0.d, f1.d);
}

loc_808387A4:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 44));
    r3 = r31;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 48));
    r4 = (r1 + 8);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 52));
    ctx->lr = 0x808387C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80838970u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    ctr = ctx->ctr;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 44));
    f1.d = f31.d;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f31.d));
    MemoryInline::FlatWriteFloat32((r31 + 44), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FDE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x808386B0 func_808386B0 preserves=true fpr_mask=0x00000000
