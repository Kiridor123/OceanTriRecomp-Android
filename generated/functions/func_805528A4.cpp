#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_805528A4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_10 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r1_psq_tmp_7 = 0;
    uint32_t r1_psq_tmp_8 = 0;
    uint32_t r1_psq_tmp_9 = 0;
    uint32_t r28_addic_src_0 = 0;
    uint32_t r28_addic_src_1 = 0;
    uint32_t r28_addic_src_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f21 = ctx->fpr[21];
    PPC_FPR f22 = ctx->fpr[22];
    PPC_FPR f23 = ctx->fpr[23];
    PPC_FPR f24 = ctx->fpr[24];
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805528A4;

loc_805528A4:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -384), 0, 392u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -384), r1);
    r1 = (r1 + -384);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 388u, (r1 + 388), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 368u, (r1 + 368), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 376);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 352u, (r1 + 352), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 360);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 336u, (r1 + 336), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 344);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 320u, (r1 + 320), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 328);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 304u, (r1 + 304), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 312);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 288u, (r1 + 288), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 296);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 272u, (r1 + 272), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 256u, (r1 + 256), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 240u, (r1 + 240), f23.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 224u, (r1 + 224), f22.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_9 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_9, PPC_PsFromScalarInline(f22.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 208u, (r1 + 208), f21.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_10 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_10, PPC_PsFromScalarInline(f21.d));
    r11 = (r1 + 208);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r4 = MemoryInline::FlatRead32((r3 + 216));
    r0 = 1127219200;
    r26 = r3;
    MemoryInline::WriteResolved32(guest_range_2, 152u, (r1 + 152), r0);
    r4 = MemoryInline::FlatRead32((r4 + 156));
    r22 = r26;
    MemoryInline::WriteResolved32(guest_range_2, 160u, (r1 + 160), r0);
    r23 = 0;
    f30.d = MemoryInline::FlatReadFloat32((r2 + -1012));
    f31.d = MemoryInline::FlatReadFloat32((r3 + 476));
    f29.d = MemoryInline::FlatReadFloat32((r4 + 44));
    f28.d = MemoryInline::FlatReadFloat32((r4 + 76));
    r27 = MemoryInline::FlatRead32((r3 + 464));
    f24.d = MemoryInline::FlatReadFloat32((r2 + -1024));
}

loc_80552948:
{
    r6 = MemoryInline::FlatRead32((r22 + 56));
    r4 = (r13 + -18472);
    r3 = MemoryInline::FlatRead32((r22 + 136));
    r5 = 0;
    r25 = MemoryInline::FlatRead32((r6 + 156));
    r28 = MemoryInline::FlatRead32((r3 + 156));
    r12 = MemoryInline::FlatRead32(r25);
    r3 = r25;
    f1.d = MemoryInline::FlatReadFloat32((r25 + 76));
    f0.d = MemoryInline::FlatReadFloat32((r25 + 80));
    r12 = MemoryInline::FlatRead32((r12 + 124));
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    ctr = r12;
    ctx->lr = 0x80552984u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r25 + 187));
    r23 = (r23 + 1);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 100));
}

loc_80552994:
{
    r0 = (r0 & 254);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f24.d);
    r22 = (r22 + 4);
    MemoryInline::FlatWrite8((r25 + 187), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteFloat32((r28 + 76), f24.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 80), f0.d);
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(20))) {
        goto loc_80552948;
    }
}

loc_805529B4:
{
    r3 = MemoryInline::FlatRead32((r26 + 220));
    r28 = 20;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 88));
    ctr = r12;
    ctx->lr = 0x805529CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805529D0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805529DC;
    }
}

loc_805529D4:
{
    r29 = MemoryInline::FlatRead32((r26 + 472));
    goto loc_805529E0;
}

loc_805529DC:
{
    r29 = 0;
}

loc_805529E0:
{
    r31 = (r29 * 122);
    f27.d = MemoryInline::FlatReadFloat64((r2 + -1000));
    f26.d = MemoryInline::FlatReadFloat32((r2 + -1008));
    f25.d = MemoryInline::FlatReadFloat32((r2 + -1004));
    f24.d = MemoryInline::FlatReadFloat32((r2 + -1024));
    goto loc_80552BD4;
}

loc_805529F8:
{
}

loc_805529FC:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80552BDC;
    }
}

loc_80552A00:
{
    r28_addic_src_2 = r28;
    r28 = (r28_addic_src_2 + -1);
}

loc_80552A04:
{
    r29 = (r29 + -1);
    r31 = (r31 + -122);
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(0))) {
        goto loc_80552A14;
    }
}

loc_80552A10:
{
    r28 = 19;
}

loc_80552A14:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & -4);
    r0 = MemoryInline::FlatRead32((r26 + 508));
    r30 = (r26 + r3);
    r5 = 0;
    r7 = MemoryInline::FlatRead32((r30 + 56));
    r3 = (r0 + r31);
    r6 = MemoryInline::FlatRead32((r30 + 136));
    r4 = (r3 + 4);
    r24 = MemoryInline::FlatRead32((r7 + 156));
    r23 = MemoryInline::FlatRead32((r6 + 156));
    r12 = MemoryInline::FlatRead32(r24);
    r3 = r24;
    r12 = MemoryInline::FlatRead32((r12 + 124));
    ctr = r12;
    ctx->lr = 0x80552A50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r24 + 187));
}

loc_80552A58:
{
    r0 = (r0 & 254);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r24 + 187), static_cast<uint8_t>(r0));
    f1.d = MemoryInline::FlatReadFloat32((r24 + 76));
    f0.d = MemoryInline::FlatReadFloat32((r24 + 80));
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f0.d);
    if ((static_cast<int32_t>(r24) != static_cast<int32_t>(0))) {
        goto loc_80552A80;
    }
}

loc_80552A78:
{
    f4.d = MemoryInline::FlatReadFloat32((r2 + -1024));
    goto loc_80552B1C;
}

loc_80552A80:
{
    r22 = MemoryInline::FlatRead32((r24 + 216));
}

loc_80552A88:
{
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(0))) {
        goto loc_80552A94;
    }
}

loc_80552A8C:
{
    f4.d = MemoryInline::FlatReadFloat32((r2 + -1024));
    goto loc_80552B1C;
}

loc_80552A94:
{
    r3 = r24;
    // inline leaf 0x8052E2B0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 228));
    // end of inlined leaf 0x8052E2B0
    f23.d = MemoryInline::FlatReadFloat32((r24 + 232));
    r25 = r3;
    f21.d = MemoryInline::FlatReadFloat32((r24 + 244));
    f22.d = MemoryInline::FlatReadFloat32((r2 + -1024));
    goto loc_80552AE0;
}

loc_80552AB0:
{
    r12 = MemoryInline::FlatRead32(r25);
    f22.d = static_cast<double>(PpcForceSingleValueInline(f22.d + f21.d));
    r3 = r25;
    r12 = MemoryInline::FlatRead32((r12 + 72));
    ctr = r12;
    ctx->lr = 0x80552AC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 ^ -2147483648);
    r22 = (r22 + 2);
    MemoryInline::FlatWriteRam32((r1 + 156), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 152));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f27.d));
    f22.d = static_cast<double>(PpcForceSingleValueInline(f22.d + f0.d));
}

loc_80552AE0:
{
    r4 = MemoryInline::FlatRead16(r22);
}

loc_80552AE8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80552AB0;
    }
}

loc_80552AEC:
{
    r12 = MemoryInline::FlatRead32(r25);
    r3 = r25;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80552B00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 160));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f27.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f23.d / f0.d));
    f0.d = PpcFmulsInline(f22.d, f0.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f26.d + f0.d));
}

loc_80552B1C:
{
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f30.d));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 92));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r27));
}

loc_80552B2C:
{
    f1.d = PpcFmulsInline(f4.d, f25.d);
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 40), 0, 112u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r1 + 64), f4.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f4.d));
    MemoryInline::FlatWriteFloat32((r24 + 76), f2.d);
    MemoryInline::FlatWriteFloat32((r24 + 80), f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f31.d));
    MemoryInline::FlatWriteFloat32((r23 + 76), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r23 + 80), f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r1 + 68), f3.d);
    MemoryInline::FlatWriteFloat32((r24 + 44), f0.d);
    MemoryInline::FlatWriteFloat32((r24 + 48), f24.d);
    MemoryInline::FlatWriteFloat32((r24 + 52), f24.d);
    MemoryInline::FlatWriteFloat32((r23 + 44), f0.d);
    MemoryInline::FlatWriteFloat32((r23 + 48), f24.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r1 + 56), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r1 + 60), f3.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f24.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r1 + 48), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r1 + 52), f24.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 100u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f24.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 100u, (r1 + 140), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 104u, (r1 + 144), f24.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 108u, (r1 + 148), f24.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f24.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, (r1 + 40), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r1 + 44), f24.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 88u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f24.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 88u, (r1 + 128), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 92u, (r1 + 132), f24.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 96u, (r1 + 136), f24.d);
    MemoryInline::FlatWriteFloat32((r23 + 52), f24.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80552BBC;
    }
}

loc_80552BA0:
{
    r3 = MemoryInline::FlatRead32((r30 + 224));
    r4 = 1;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80552BB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80552BD4;
}

loc_80552BBC:
{
    r3 = MemoryInline::FlatRead32((r30 + 224));
    r4 = 2;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80552BD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80552BD4:
{
    SetCRFloatResident(cr, 0, f31.d, f24.d);
}

loc_80552BD8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805529F8;
    }
}

loc_80552BDC:
{
    MemoryInline::FlatWrite32((r26 + 484), r29);
    r29 = 0;
    r3 = MemoryInline::FlatRead32((r26 + 220));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 88));
    ctr = r12;
    ctx->lr = 0x80552BF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80552BFC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80552C08;
    }
}

loc_80552C00:
{
    r28 = MemoryInline::FlatRead32((r26 + 472));
    goto loc_80552C0C;
}

loc_80552C08:
{
    r28 = MemoryInline::FlatRead32((r26 + 480));
}

loc_80552C0C:
{
    r31 = (r28 * 122);
    f31.d = MemoryInline::FlatReadFloat32((r26 + 476));
    f24.d = MemoryInline::FlatReadFloat64((r2 + -1000));
    f25.d = MemoryInline::FlatReadFloat32((r2 + -1008));
    f26.d = MemoryInline::FlatReadFloat32((r2 + -1004));
    f27.d = MemoryInline::FlatReadFloat32((r2 + -1024));
    goto loc_80552E14;
}

loc_80552C28:
{
    r0 = MemoryInline::FlatRead32((r26 + 480));
}

loc_80552C30:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(r0))) {
        goto loc_80552E1C;
    }
}

loc_80552C34:
{
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r3 = (r3_rot_4 & -4);
    r0 = MemoryInline::FlatRead32((r26 + 508));
    r30 = (r26 + r3);
    r5 = 0;
    r7 = MemoryInline::FlatRead32((r30 + 56));
    r3 = (r0 + r31);
    r6 = MemoryInline::FlatRead32((r30 + 136));
    r4 = (r3 + 4);
    r22 = MemoryInline::FlatRead32((r7 + 156));
    r23 = MemoryInline::FlatRead32((r6 + 156));
    r12 = MemoryInline::FlatRead32(r22);
    r3 = r22;
    r12 = MemoryInline::FlatRead32((r12 + 124));
    ctr = r12;
    ctx->lr = 0x80552C70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r22 + 187));
}

loc_80552C78:
{
    r0 = (r0 & 254);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r22 + 187), static_cast<uint8_t>(r0));
    f1.d = MemoryInline::FlatReadFloat32((r22 + 76));
    f0.d = MemoryInline::FlatReadFloat32((r22 + 80));
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f0.d);
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(0))) {
        goto loc_80552CA0;
    }
}

loc_80552C98:
{
    f21.d = MemoryInline::FlatReadFloat32((r2 + -1024));
    goto loc_80552D3C;
}

loc_80552CA0:
{
    r24 = MemoryInline::FlatRead32((r22 + 216));
}

loc_80552CA8:
{
    if ((static_cast<int32_t>(r24) != static_cast<int32_t>(0))) {
        goto loc_80552CB4;
    }
}

loc_80552CAC:
{
    f21.d = MemoryInline::FlatReadFloat32((r2 + -1024));
    goto loc_80552D3C;
}

loc_80552CB4:
{
    r3 = r22;
    // inline leaf 0x8052E2B0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 228));
    // end of inlined leaf 0x8052E2B0
    f22.d = MemoryInline::FlatReadFloat32((r22 + 232));
    r25 = r3;
    f21.d = MemoryInline::FlatReadFloat32((r22 + 244));
    f23.d = MemoryInline::FlatReadFloat32((r2 + -1024));
    goto loc_80552D00;
}

loc_80552CD0:
{
    r12 = MemoryInline::FlatRead32(r25);
    f23.d = static_cast<double>(PpcForceSingleValueInline(f23.d + f21.d));
    r3 = r25;
    r12 = MemoryInline::FlatRead32((r12 + 72));
    ctr = r12;
    ctx->lr = 0x80552CE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 ^ -2147483648);
    r24 = (r24 + 2);
    MemoryInline::FlatWriteRam32((r1 + 156), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 152));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f24.d));
    f23.d = static_cast<double>(PpcForceSingleValueInline(f23.d + f0.d));
}

loc_80552D00:
{
    r4 = MemoryInline::FlatRead16(r24);
}

loc_80552D08:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80552CD0;
    }
}

loc_80552D0C:
{
    r12 = MemoryInline::FlatRead32(r25);
    r3 = r25;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80552D20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 160));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f24.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f22.d / f0.d));
    f0.d = PpcFmulsInline(f23.d, f0.d);
    f21.d = static_cast<double>(PpcForceSingleValueInline(f25.d + f0.d));
}

loc_80552D3C:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f21.d));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 84));
    f1.d = PpcFmulsInline(f21.d, f26.d);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(r27));
}

loc_80552D4C:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f31.d));
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 120u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 24u, (r1 + 32), f21.d);
    MemoryInline::FlatWriteFloat32((r22 + 76), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r22 + 80), f3.d);
    MemoryInline::FlatWriteFloat32((r23 + 76), f2.d);
    MemoryInline::FlatWriteFloat32((r23 + 80), f3.d);
    MemoryInline::FlatWriteFloat32((r22 + 44), f0.d);
    MemoryInline::FlatWriteFloat32((r22 + 48), f27.d);
    MemoryInline::FlatWriteFloat32((r22 + 52), f27.d);
    MemoryInline::FlatWriteFloat32((r23 + 44), f0.d);
    MemoryInline::FlatWriteFloat32((r23 + 48), f27.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 28u, (r1 + 36), f3.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f21.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 16u, (r1 + 24), f21.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 20u, (r1 + 28), f3.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f27.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r1 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r1 + 20), f27.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 108u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f27.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 108u, (r1 + 116), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 112u, (r1 + 120), f27.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_4, 116u, (r1 + 124), f27.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f27.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r1 + 8), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r1 + 12), f27.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 96u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f27.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 96u, (r1 + 104), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 100u, (r1 + 108), f27.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_4, 104u, (r1 + 112), f27.d);
    MemoryInline::FlatWriteFloat32((r23 + 52), f27.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80552DD0;
    }
}

loc_80552DB8:
{
    r3 = MemoryInline::FlatRead32((r30 + 224));
    r4 = 1;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80552DD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80552DD0:
{
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f30.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f21.d));
    SetCRFloatResident(cr, 0, f31.d, f27.d);
}

loc_80552DDC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r31 = (r31 + 122);
    r28 = (r28 + 1);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80552E04;
    }
}

loc_80552DEC:
{
    r3 = MemoryInline::FlatRead32((r30 + 224));
    r4 = 5;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80552E04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80552E04:
{
    r29 = (r29 + 1);
}

loc_80552E0C:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(20))) {
        goto loc_80552E14;
    }
}

loc_80552E10:
{
    r29 = 0;
}

loc_80552E14:
{
    SetCRFloatResident(cr, 0, f31.d, f28.d);
}

loc_80552E18:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80552C28;
    }
}

loc_80552E1C:
{
    r22 = r26;
    r23 = 0;
}

loc_80552E24:
{
    r3 = MemoryInline::FlatRead32((r22 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 156));
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 1);
}

loc_80552E34:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80552E50;
    }
}

loc_80552E38:
{
    r3 = MemoryInline::FlatRead32((r22 + 224));
    r4 = 5;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80552E50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80552E50:
{
    r23 = (r23 + 1);
    r22 = (r22 + 4);
}

loc_80552E5C:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(20))) {
        goto loc_80552E24;
    }
}

loc_80552E60:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f30.d));
    r3 = (r28 + -1);
    MemoryInline::FlatWrite32((r26 + 488), r3);
    r4 = 1;
    SetCRFloatResident(cr, 0, f0.d, f28.d);
}

loc_80552E74:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80552EA8;
    }
}

loc_80552E7C:
{
    r0 = MemoryInline::FlatRead32((r26 + 480));
}

loc_80552E84:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80552E98;
    }
}

loc_80552E88:
{
    r0 = MemoryInline::FlatRead32((r26 + 484));
    r3 = (r3 - r0);
    r0 = (r3 + 1);
    goto loc_80552E9C;
}

loc_80552E98:
{
    r0 = 0;
}

loc_80552E9C:
{
}

loc_80552EA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80552EA8;
    }
}

loc_80552EA4:
{
    r4 = 0;
}

loc_80552EA8:
{
}

loc_80552EAC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80552EB8;
    }
}

loc_80552EB0:
{
    r0 = MemoryInline::FlatRead32((r26 + 488));
    goto loc_80552EC0;
}

loc_80552EB8:
{
    r3 = MemoryInline::FlatRead32((r26 + 488));
    r0 = (r3 + -1);
}

loc_80552EC0:
{
    MemoryInline::FlatWrite32((r26 + 492), r0);
    MemoryInline::FlatWriteFloat32((r26 + 496), f31.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 208), 0, 184u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 160u, (r1 + 368));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 144u, (r1 + 352));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 128u, (r1 + 336));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 112u, (r1 + 320));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 96u, (r1 + 304));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 80u, (r1 + 288));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 64u, (r1 + 272));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 48u, (r1 + 256));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 32u, (r1 + 240));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f22.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 16u, (r1 + 224));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f21.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 0u, (r1 + 208));
    r11 = (r1 + 208);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::ReadResolved32(guest_range_5, 180u, (r1 + 388));
    ctx->lr = r0;
    r1 = (r1 + 384);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[21] = f21;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_805528A4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_805528A4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFFE03FFF fpr_write=0xFFE03FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x805528A4 func_805528A4 preserves=true fpr_mask=0x00000000
