#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8056A9BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t mkw_fifo_burst_0[16];
    uint8_t mkw_fifo_burst_1[16];
    uint8_t mkw_fifo_burst_2[16];
    uint8_t mkw_fifo_burst_3[16];
    uint8_t mkw_fifo_burst_4[16];
    uint8_t mkw_fifo_burst_5[16];

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    goto loc_8056A9BC;

loc_8056A9BC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -176), 0, 184u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 180u, (r1 + 180), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 160u, (r1 + 160), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 144u, (r1 + 144), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 128u, (r1 + 128), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 112u, (r1 + 112), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 96u, (r1 + 96), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 80u, (r1 + 80), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    f26.d = f1.d;
    f27.d = f2.d;
    f28.d = f3.d;
    f29.d = f4.d;
    r31 = r4;
    f30.d = f5.d;
    r30 = r3;
    ctx->lr = 0x8056AA20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B5AD0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    r3 = 9;
    r4 = 1;
    ctx->lr = 0x8056AA2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B54C0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    r3 = 11;
    r4 = 1;
    ctx->lr = 0x8056AA38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B54C0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    r3 = 0;
    r4 = 9;
    r5 = 1;
    r6 = 4;
    r7 = 0;
    ctx->lr = 0x8056AA50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B5B10u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    r3 = 0;
    r4 = 11;
    r5 = 1;
    r6 = 5;
    r7 = 0;
    ctx->lr = 0x8056AA68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B5B10u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    r3 = 0;
    ctx->lr = 0x8056AA70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B71E0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    r3 = 1;
    ctx->lr = 0x8056AA78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B8500u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    r3 = 4;
    r4 = 0;
    r5 = 1;
    r6 = 1;
    r7 = 0;
    r8 = 0;
    r9 = 2;
    ctx->lr = 0x8056AA98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B8530u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    r3 = 0;
    ctx->lr = 0x8056AAA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B6400u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    r3 = 1;
    ctx->lr = 0x8056AAA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x804BA080u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    r3 = 0;
    r4 = 4;
    ctx->lr = 0x8056AAB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B99E0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    r3 = 0;
    r4 = 255;
    r5 = 255;
    r6 = 4;
    ctx->lr = 0x8056AAC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9F20u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    r3 = 1;
    r4 = 4;
    r5 = 5;
    r6 = 15;
    ctx->lr = 0x8056AADCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x804BA550u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -792));
    r3 = (r1 + 8);
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x804C6990 (13 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2084));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -2088));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 28), f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_0 = (r3 + 4);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_0, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 32);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_1, PPC_PsFromScalarInline(f0.d));
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
    r3 = (r1 + 8);
    r4 = 0;
    ctx->lr = 0x8056AAFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x804BAB90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x8056AB08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B7120u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    r0 = 1127219200;
    stackword4 = r30;
    MemoryInline::FlatWriteRam32((r1 + 60), r30);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -776));
    SetCRFloatResident(cr, 0, f26.d, f28.d);
}

loc_8056AB18:
{
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -784));
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword4));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -788));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f31.d = PpcFmulsInline(f1.d, f0.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8056ABA8;
    }
}

loc_8056AB38:
{
    r3 = 128;
    r4 = 0;
    r5 = 4;
    ctx->lr = 0x8056AB48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B6EF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f26.d - f31.d));
    r3 = -872349696;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f28.d + f31.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f27.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f30.d));
    r0 = MemoryInline::FlatRead32(r31);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[0] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[1] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f1.d));
        mkw_fifo_burst_0[4] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[5] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f29.d));
        mkw_fifo_burst_0[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f30.d));
        mkw_fifo_burst_0[12] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[13] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[14] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[15] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 16u);
    r0 = MemoryInline::FlatRead32(r31);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_1[0] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[1] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f0.d));
        mkw_fifo_burst_1[4] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[5] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f29.d));
        mkw_fifo_burst_1[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f30.d));
        mkw_fifo_burst_1[12] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[13] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[14] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[15] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_1, 16u);
    r0 = MemoryInline::FlatRead32(r31);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_2[0] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_2[1] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_2[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f0.d));
        mkw_fifo_burst_2[4] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_2[5] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_2[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f27.d));
        mkw_fifo_burst_2[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_2[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_2[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f30.d));
        mkw_fifo_burst_2[12] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_2[13] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_2[14] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[15] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_2, 16u);
    r0 = MemoryInline::FlatRead32(r31);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    goto loc_8056AC14;
}

loc_8056ABA8:
{
    r3 = 128;
    r4 = 0;
    r5 = 4;
    ctx->lr = 0x8056ABB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B6EF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    r3 = -872349696;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f27.d - f31.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f26.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f31.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f30.d));
    r0 = MemoryInline::FlatRead32(r31);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_3[0] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_3[1] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_3[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_3[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f26.d));
        mkw_fifo_burst_3[4] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_3[5] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_3[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_3[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f0.d));
        mkw_fifo_burst_3[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_3[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_3[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_3[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f30.d));
        mkw_fifo_burst_3[12] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_3[13] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_3[14] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_3[15] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_3, 16u);
    r0 = MemoryInline::FlatRead32(r31);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_4[0] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_4[1] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_4[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_4[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f28.d));
        mkw_fifo_burst_4[4] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_4[5] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_4[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_4[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f0.d));
        mkw_fifo_burst_4[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_4[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_4[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_4[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f30.d));
        mkw_fifo_burst_4[12] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_4[13] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_4[14] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_4[15] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_4, 16u);
    r0 = MemoryInline::FlatRead32(r31);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_5[0] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_5[1] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_5[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_5[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f28.d));
        mkw_fifo_burst_5[4] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_5[5] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_5[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_5[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f1.d));
        mkw_fifo_burst_5[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_5[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_5[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_5[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f30.d));
        mkw_fifo_burst_5[12] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_5[13] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_5[14] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_5[15] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_5, 16u);
    r0 = MemoryInline::FlatRead32(r31);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_8056AC14:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 72), 0, 112u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 88u, (r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 72u, (r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 56u, (r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 40u, (r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 24u, (r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 8u, (r1 + 80));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 108u, (r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8056A9BC func_8056A9BC preserves=true fpr_mask=0x00000000
