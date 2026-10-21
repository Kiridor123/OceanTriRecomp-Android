#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80504874_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f31 = ctx->fpr[31];
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80504874u);
    goto loc_80504874;

loc_80504874:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r0 = 1127219200;
    r5 = r4;
    r4 = (r1 + 8);
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 72));
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r12 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    r12 = MemoryInline::FlatRead32((r12 + 80));
    ctr = r12;
    ctx->lr = 0x805048B8u;
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

loc_805048C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8050491C;
    }
}

loc_805048C4:
{
    r3 = MemoryInline::FlatRead8((r1 + 14));
    r0 = MemoryInline::FlatRead8((r1 + 12));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    f4.d = MemoryInline::FlatReadFloat64((r2 + -1448));
    r3 = (r3 ^ -2147483648);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    r0 = (r0 ^ -2147483648);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 36));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f31.d = MemoryInline::FlatReadFloat32((r31 + 68));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -1440));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f3.d);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    goto loc_8050495C;
}

loc_8050491C:
{
    r3 = MemoryInline::FlatRead8((r1 + 14));
    r0 = MemoryInline::FlatRead8((r1 + 12));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    f3.d = MemoryInline::FlatReadFloat64((r2 + -1448));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 36));
    r3 = (r3 ^ -2147483648);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f31.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = PpcFmulsInline(f0.d, f1.d);
}

loc_8050495C:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 44));
    r3 = r31;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 48));
    r4 = (r1 + 8);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 52));
    ctx->lr = 0x80504978u;
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
    InvokeDirectCpu<0x805049A4u>(ctx);
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
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80504874(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80504874_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80504874 func_80504874 preserves=true fpr_mask=0x00000000
