#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803CB9BC(CpuContext* ctx);
extern "C" uint64_t func_803CB9BC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803CBA18(CpuContext* ctx);
extern "C" uint64_t func_803CBA18_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_803CBA9C(CpuContext* ctx);
extern "C" uint32_t func_803CBA9C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803CBBFC(CpuContext* ctx);
extern "C" uint64_t func_803CBBFC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803CBF20(CpuContext* ctx);
extern "C" uint64_t func_803CBF20_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_803D2A84(CpuContext* ctx);
extern "C" uint64_t func_803D2A84_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803D2B00(CpuContext* ctx);
extern "C" uint64_t func_803D2B00_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803D2FA8(CpuContext* ctx);
extern "C" uint64_t func_803D2FA8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803D3A20(CpuContext* ctx);
extern "C" uint64_t func_803D3A20_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803D3EA0(CpuContext* ctx);
extern "C" uint64_t func_803D3EA0_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803D3F3C(CpuContext* ctx);
extern "C" uint64_t func_803D3F3C_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803D4130(CpuContext* ctx);
extern "C" uint64_t func_803D4130_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803D42F4(CpuContext* ctx);
extern "C" uint64_t func_803D42F4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803D43B8(CpuContext* ctx);
extern "C" uint64_t func_803D43B8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803D451C(CpuContext* ctx);
extern "C" uint64_t func_803D451C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803D46F4(CpuContext* ctx);
extern "C" uint64_t func_803D46F4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803D48BC(CpuContext* ctx);
extern "C" uint64_t func_803D48BC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803F8A34(CpuContext* ctx);
extern "C" uint64_t func_803F8A34_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803F8A78(CpuContext* ctx);
extern "C" uint64_t func_803F8A78_ra218_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803F8D2C(CpuContext* ctx);
extern "C" uint64_t func_803F8D2C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803F8E8C(CpuContext* ctx);
extern "C" uint64_t func_803F8E8C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803FA7E0(CpuContext* ctx);
extern "C" uint64_t func_803FA7E0_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_803CFF50_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_803D1250_loc_0 = 0;
    uint32_t addr_psqx_803D125C_loc_0 = 0;
    uint32_t addr_psqx_803D1268_loc_0 = 0;
    uint32_t addr_psqx_803D1274_loc_0 = 0;
    uint32_t addr_psqx_803D1280_loc_0 = 0;
    uint32_t addr_psqx_803D128C_loc_0 = 0;
    uint32_t addr_psqx_803D1298_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t cr6_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r15_addr_0 = 0;
    uint32_t r15_addr_1 = 0;
    uint32_t r15_addr_10 = 0;
    uint32_t r15_addr_11 = 0;
    uint32_t r15_addr_12 = 0;
    uint32_t r15_addr_13 = 0;
    uint32_t r15_addr_14 = 0;
    uint32_t r15_addr_2 = 0;
    uint32_t r15_addr_3 = 0;
    uint32_t r15_addr_4 = 0;
    uint32_t r15_addr_5 = 0;
    uint32_t r15_addr_6 = 0;
    uint32_t r15_addr_7 = 0;
    uint32_t r15_addr_8 = 0;
    uint32_t r15_addr_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_10 = 0;
    uint32_t r5_addr_11 = 0;
    uint32_t r5_addr_12 = 0;
    uint32_t r5_addr_13 = 0;
    uint32_t r5_addr_14 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;
    uint32_t r5_addr_7 = 0;
    uint32_t r5_addr_8 = 0;
    uint32_t r5_addr_9 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
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
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    const uint32_t r14_entry = r14;
    const uint32_t r15_entry = r15;
    const uint32_t r16_entry = r16;
    const uint32_t r17_entry = r17;
    const uint32_t r18_entry = r18;
    const uint32_t r19_entry = r19;
    const uint32_t r20_entry = r20;
    const uint32_t r21_entry = r21;
    const uint32_t r22_entry = r22;
    const uint32_t r23_entry = r23;
    const uint32_t r24_entry = r24;
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_803CFF50;

loc_803CFF50:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -352), 0, 360u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -352), r1);
    r1 = (r1 + -352);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 356u, (r1 + 356), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 336u, (r1 + 336), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 344);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 320u, (r1 + 320), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 328);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 304u, (r1 + 304), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 312);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 288u, (r1 + 288), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 296);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 272u, (r1 + 272), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 256u, (r1 + 256), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 240u, (r1 + 240), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    r11 = (r1 + 240);
    // inline leaf 0x80457454 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    // end of inlined leaf 0x80457454
    r15 = r3;
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_2, 136u, (r1 + 136), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_2, 144u, (r1 + 144), r0);
    // inline leaf 0x803C99D8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16736));
    // end of inlined leaf 0x803C99D8
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x803CFFC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r15 + 65536);
    MemoryInline::FlatWriteFloat32((r3 + 27868), f1.d);
    r17 = 0;
    r20 = (r3 + 18472);
    r24 = r20;
    r23 = r15;
    r0 = (r15 + 13);
    MemoryInline::FlatWriteRam32((r1 + 160), r0);
    r26 = 0x80030000u;
    r25 = 2;
    r14 = -2;
    r27 = 0;
    r28 = 4;
    f27.d = MemoryInline::FlatReadFloat32((r2 + -5028));
    f28.d = MemoryInline::FlatReadFloat64((r2 + -5008));
    r29 = 1;
    f25.d = MemoryInline::FlatReadFloat32((r2 + -5036));
    f26.d = MemoryInline::FlatReadFloat32((r2 + -5136));
    f31.d = MemoryInline::FlatReadFloat32((r2 + -5024));
    f30.d = MemoryInline::FlatReadFloat32((r2 + -5032));
    f29.d = MemoryInline::FlatReadFloat32((r2 + -5048));
}

loc_803D0018:
{
    r18 = MemoryInline::FlatRead32((r24 + 44));
}

loc_803D0020:
{
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(0))) {
        goto loc_803D0BD4;
    }
}

loc_803D0024:
{
    r3 = r18;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x803D0038u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r3 = MemoryInline::FlatRead32((r24 + 80));
    // inline leaf 0x803CF80C (9 guest instruction(s))
}

loc_inl2_0x803CF80C:
{
    r4 = 0;
}

loc_inl2_0x803CF814:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x803CF828;
    }
}

loc_inl2_0x803CF818:
{
    r0 = (r3 + 65536);
}

loc_inl2_0x803CF820:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_inl2_0x803CF828;
    }
}

loc_inl2_0x803CF824:
{
    r4 = 1;
}

loc_inl2_0x803CF828:
{
    r3 = r4;
}

loc_inl2_cont_803CF80C:
{
    // end of inlined leaf 0x803CF80C
}

loc_803D0044:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803D00CC;
    }
}

loc_803D0048:
{
    r16 = 0;
    r5 = r15;
    ctr = r28;
}

loc_803D0054:
{
    r4 = MemoryInline::FlatRead32((r24 + 80));
    r3 = (r5 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + 18452));
}

loc_803D0064:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_803D00C0;
    }
}

loc_803D0068:
{
    // inline leaf 0x803C99D8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16736));
    // end of inlined leaf 0x803C99D8
    r4 = 3;
    r5 = 0x80600000u;
    r5 = (r5 + -24016);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(2));
    r7 = (r7_rot_2 & -4);
    r7 = (r7 + 65536);
    r0 = (r7 + 18452);
    r15_addr_2 = (r15 + r0);
    r7 = MemoryInline::FlatRead32(r15_addr_2);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x803D00A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r3 = r15;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    r5 = (r26 + 55);
    r6 = 0;
    r7 = 0x80000000u;
    r8 = 3;
    if constexpr (KnownRegArgsCpuCall<0x803D2A84u>(&func_803D2A84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_803D2A84_4873 = func_803D2A84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803D2A84_4873);
        r4 = static_cast<uint32_t>(regargs_result_803D2A84_4873 >> 32);
        r0 = ctx->gpr[0];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        InvokeDirectCpu<0x803D2A84u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
    }
    goto loc_803D00CC;
}

loc_803D00C0:
{
    r5 = (r5 + 4);
    r16 = (r16 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803D0054;
    }
}

loc_803D00CC:
{
    r0 = MemoryInline::FlatRead32((r24 + 8));
}

loc_803D00D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803D00F4;
    }
}

loc_803D00D8:
{
}

loc_803D00DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803D0160;
    }
}

loc_803D00E0:
{
}

loc_803D00E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_803D01F8;
    }
}

loc_803D00E8:
{
}

loc_803D00EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_803D02EC;
    }
}

loc_803D00F0:
{
    goto loc_803D0338;
}

loc_803D00F4:
{
    r3 = (r1 + 112);
    ctx->lr = 0x803D00FCu;
    if constexpr (KnownRegArgsCpuCall<0x803CBA18u>(&func_803CBA18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803CBA18_4F78 = func_803CBA18_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_803CBA18_4F78);
        r4 = static_cast<uint32_t>(regargs_result_803CBA18_4F78 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803CBA18u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = (r1 + 112);
    r4 = (r15 + 13);
    r5 = 1024;
    ctx->lr = 0x803D010Cu;
    if constexpr (KnownRegArgsCpuCall<0x803F8A34u>(&func_803F8A34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_803F8A34_52CB = func_803F8A34_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803F8A34_52CB);
        r4 = static_cast<uint32_t>(regargs_result_803F8A34_52CB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x803F8A34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r1 + 112);
    r4 = 0;
    ctx->lr = 0x803D0118u;
    if constexpr (KnownRegArgsCpuCall<0x803F8A78u>(&func_803F8A78)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803F8A78_5839 = func_803F8A78_ra218_1fe_18_0(ctx, r3, r4, r9, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803F8A78_5839);
        r4 = static_cast<uint32_t>(regargs_result_803F8A78_5839 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803F8A78u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 112);
    r4 = 5;
    // inline leaf 0x803F8E54 (14 guest instruction(s))
}

loc_inl4_0x803F8E54:
{
    r6 = MemoryInline::FlatRead32((r3 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 - r6);
}

loc_inl4_0x803F8E64:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(1))) {
        goto loc_inl4_0x803F8E70;
    }
}

loc_inl4_0x803F8E68:
{
    r3 = -1;
    goto loc_inl4_cont_803F8E54;
}

loc_inl4_0x803F8E70:
{
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r5_addr_2 = (r5 + r6);
    MemoryInline::FlatWrite8(r5_addr_2, static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    r3 = 1;
}

loc_inl4_cont_803F8E54:
{
    // end of inlined leaf 0x803F8E54
    r4 = (r3 & 65535);
    r3 = (r1 + 112);
    ctx->lr = 0x803D0130u;
    if constexpr (KnownRegArgsCpuCall<0x803F8E8Cu>(&func_803F8E8C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803F8E8C_65B6 = func_803F8E8C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803F8E8C_65B6);
        r4 = static_cast<uint32_t>(regargs_result_803F8E8C_65B6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803F8E8Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r17));
    r3 = r15;
    r4 = (r1 + 112);
    r5 = 1;
    r6 = 1;
    r7 = (r1 + 16);
    r8 = 255;
    ctx->lr = 0x803D0150u;
    if constexpr (KnownRegArgsCpuCall<0x803D3A20u>(&func_803D3A20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803D3A20_70CA = func_803D3A20_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803D3A20_70CA);
        r4 = static_cast<uint32_t>(regargs_result_803D3A20_70CA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f26 = ctx->fpr[26];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803D3A20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f26 = ctx->fpr[26];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 112);
    r4 = -1;
    ctx->lr = 0x803D015Cu;
    if constexpr (KnownRegArgsCpuCall<0x803CB9BCu>(&func_803CB9BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
        ctx->gpr[17] = r17;
        ctx->gpr[18] = r18;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803CB9BC_7E66 = func_803CB9BC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803CB9BC_7E66);
        r4 = static_cast<uint32_t>(regargs_result_803CB9BC_7E66 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
        r17 = ctx->gpr[17];
        r18 = ctx->gpr[18];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
        ctx->gpr[17] = r17;
        ctx->gpr[18] = r18;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803CB9BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
        r17 = ctx->gpr[17];
        r18 = ctx->gpr[18];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWrite32((r24 + 8), r25);
}

loc_803D0160:
{
    r3 = MemoryInline::FlatRead32((r24 + 80));
    // inline leaf 0x803CF80C (9 guest instruction(s))
}

loc_inl5_0x803CF80C:
{
    r4 = 0;
}

loc_inl5_0x803CF814:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl5_0x803CF828;
    }
}

loc_inl5_0x803CF818:
{
    r0 = (r3 + 65536);
}

loc_inl5_0x803CF820:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_inl5_0x803CF828;
    }
}

loc_inl5_0x803CF824:
{
    r4 = 1;
}

loc_inl5_0x803CF828:
{
    r3 = r4;
}

loc_inl5_cont_803CF80C:
{
    // end of inlined leaf 0x803CF80C
}

loc_803D016C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803D01F0;
    }
}

loc_803D0170:
{
    r3 = (r1 + 88);
    ctx->lr = 0x803D0178u;
    if constexpr (KnownRegArgsCpuCall<0x803CBA18u>(&func_803CBA18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803CBA18_9045 = func_803CBA18_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_803CBA18_9045);
        r4 = static_cast<uint32_t>(regargs_result_803CBA18_9045 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803CBA18u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = (r1 + 88);
    r4 = (r15 + 13);
    r5 = 1024;
    ctx->lr = 0x803D0188u;
    if constexpr (KnownRegArgsCpuCall<0x803F8A34u>(&func_803F8A34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_803F8A34_9397 = func_803F8A34_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803F8A34_9397);
        r4 = static_cast<uint32_t>(regargs_result_803F8A34_9397 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x803F8A34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r1 + 88);
    r4 = 0;
    ctx->lr = 0x803D0194u;
    if constexpr (KnownRegArgsCpuCall<0x803F8A78u>(&func_803F8A78)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803F8A78_9904 = func_803F8A78_ra218_1fe_18_0(ctx, r3, r4, r9, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803F8A78_9904);
        r4 = static_cast<uint32_t>(regargs_result_803F8A78_9904 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803F8A78u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 88);
    r4 = 3;
    // inline leaf 0x803F8E54 (14 guest instruction(s))
}

loc_inl6_0x803F8E54:
{
    r6 = MemoryInline::FlatRead32((r3 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 - r6);
}

loc_inl6_0x803F8E64:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(1))) {
        goto loc_inl6_0x803F8E70;
    }
}

loc_inl6_0x803F8E68:
{
    r3 = -1;
    goto loc_inl6_cont_803F8E54;
}

loc_inl6_0x803F8E70:
{
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r5_addr_5 = (r5 + r6);
    MemoryInline::FlatWrite8(r5_addr_5, static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    r3 = 1;
}

loc_inl6_cont_803F8E54:
{
    // end of inlined leaf 0x803F8E54
    r16 = (r3 & 65535);
    r3 = (r1 + 88);
    r4 = MemoryInline::FlatRead32((r24 + 80));
    ctx->lr = 0x803D01B0u;
    if constexpr (KnownRegArgsCpuCall<0x803F8D2Cu>(&func_803F8D2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803F8D2C_A6B0 = func_803F8D2C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803F8D2C_A6B0);
        r4 = static_cast<uint32_t>(regargs_result_803F8D2C_A6B0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803F8D2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = (r3 & 65535);
    r0 = (r16 + r0);
    r3 = (r1 + 88);
    r4 = (r0 & 65535);
    ctx->lr = 0x803D01C4u;
    if constexpr (KnownRegArgsCpuCall<0x803F8E8Cu>(&func_803F8E8C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803F8E8C_B0C6 = func_803F8E8C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803F8E8C_B0C6);
        r4 = static_cast<uint32_t>(regargs_result_803F8E8C_B0C6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803F8E8Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r14));
    r3 = r15;
    r4 = (r1 + 88);
    r5 = 0;
    r6 = 1;
    r7 = (r1 + 12);
    r8 = 255;
    ctx->lr = 0x803D01E4u;
    if constexpr (KnownRegArgsCpuCall<0x803D3A20u>(&func_803D3A20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803D3A20_BBD9 = func_803D3A20_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803D3A20_BBD9);
        r4 = static_cast<uint32_t>(regargs_result_803D3A20_BBD9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f26 = ctx->fpr[26];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803D3A20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f26 = ctx->fpr[26];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 88);
    r4 = -1;
    ctx->lr = 0x803D01F0u;
    if constexpr (KnownRegArgsCpuCall<0x803CB9BCu>(&func_803CB9BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
        ctx->gpr[17] = r17;
        ctx->gpr[18] = r18;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803CB9BC_C974 = func_803CB9BC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803CB9BC_C974);
        r4 = static_cast<uint32_t>(regargs_result_803CB9BC_C974 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
        r17 = ctx->gpr[17];
        r18 = ctx->gpr[18];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
        ctx->gpr[17] = r17;
        ctx->gpr[18] = r18;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803CB9BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
        r17 = ctx->gpr[17];
        r18 = ctx->gpr[18];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_803D01F0:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r24 + 8), r0);
}

loc_803D01F8:
{
    r3 = (r15 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + 18470));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
}

loc_803D020C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_803D02D0;
    }
}

loc_803D0210:
{
    r3 = (r1 + 64);
    ctx->lr = 0x803D0218u;
    if constexpr (KnownRegArgsCpuCall<0x803CBA18u>(&func_803CBA18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803CBA18_D9B6 = func_803CBA18_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_803CBA18_D9B6);
        r4 = static_cast<uint32_t>(regargs_result_803CBA18_D9B6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803CBA18u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = (r1 + 64);
    r4 = (r15 + 13);
    r5 = 1024;
    ctx->lr = 0x803D0228u;
    if constexpr (KnownRegArgsCpuCall<0x803F8A34u>(&func_803F8A34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_803F8A34_DD08 = func_803F8A34_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803F8A34_DD08);
        r4 = static_cast<uint32_t>(regargs_result_803F8A34_DD08 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x803F8A34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r1 + 64);
    r4 = 0;
    ctx->lr = 0x803D0234u;
    if constexpr (KnownRegArgsCpuCall<0x803F8A78u>(&func_803F8A78)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803F8A78_E275 = func_803F8A78_ra218_1fe_18_0(ctx, r3, r4, r9, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803F8A78_E275);
        r4 = static_cast<uint32_t>(regargs_result_803F8A78_E275 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803F8A78u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 64);
    r4 = 7;
    // inline leaf 0x803F8E54 (14 guest instruction(s))
}

loc_inl7_0x803F8E54:
{
    r6 = MemoryInline::FlatRead32((r3 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 - r6);
}

loc_inl7_0x803F8E64:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(1))) {
        goto loc_inl7_0x803F8E70;
    }
}

loc_inl7_0x803F8E68:
{
    r3 = -1;
    goto loc_inl7_cont_803F8E54;
}

loc_inl7_0x803F8E70:
{
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r5_addr_9 = (r5 + r6);
    MemoryInline::FlatWrite8(r5_addr_9, static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    r3 = 1;
}

loc_inl7_cont_803F8E54:
{
    // end of inlined leaf 0x803F8E54
    r4 = (r3 & 65535);
    r3 = (r1 + 64);
    ctx->lr = 0x803D024Cu;
    if constexpr (KnownRegArgsCpuCall<0x803F8E8Cu>(&func_803F8E8C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803F8E8C_EFF0 = func_803F8E8C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803F8E8C_EFF0);
        r4 = static_cast<uint32_t>(regargs_result_803F8E8C_EFF0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803F8E8Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r14));
    r3 = r15;
    r4 = (r1 + 64);
    r5 = 1;
    r6 = 1;
    r7 = (r1 + 8);
    r8 = 255;
    ctx->lr = 0x803D026Cu;
    if constexpr (KnownRegArgsCpuCall<0x803D3A20u>(&func_803D3A20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803D3A20_FB01 = func_803D3A20_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803D3A20_FB01);
        r4 = static_cast<uint32_t>(regargs_result_803D3A20_FB01 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f26 = ctx->fpr[26];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803D3A20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f26 = ctx->fpr[26];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r21 = 0;
    r19 = r15;
    r16 = (r15 + 65536);
}

loc_803D0278:
{
    r0 = MemoryInline::FlatRead8((r16 + 18470));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803D0284:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r21))) {
        goto loc_803D02B4;
    }
}

loc_803D0288:
{
    r3 = (r19 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + 18516));
}

loc_803D0294:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803D02B4;
    }
}

loc_803D0298:
{
    r3 = r15;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r21)));
    r5 = (r26 + 65);
    r6 = 0;
    r7 = 0x80000000u;
    r8 = 3;
    if constexpr (KnownRegArgsCpuCall<0x803D2A84u>(&func_803D2A84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_803D2A84_108FD = func_803D2A84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803D2A84_108FD);
        r4 = static_cast<uint32_t>(regargs_result_803D2A84_108FD >> 32);
        r0 = ctx->gpr[0];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        InvokeDirectCpu<0x803D2A84u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
    }
}

loc_803D02B4:
{
    r19 = (r19 + 2340);
    r21 = (r21 + 1);
}

loc_803D02C0:
{
    if ((static_cast<int32_t>(r21) < static_cast<int32_t>(4))) {
        goto loc_803D0278;
    }
}

loc_803D02C4:
{
    r3 = (r1 + 64);
    r4 = -1;
    ctx->lr = 0x803D02D0u;
    if constexpr (KnownRegArgsCpuCall<0x803CB9BCu>(&func_803CB9BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
        ctx->gpr[17] = r17;
        ctx->gpr[18] = r18;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803CB9BC_11009 = func_803CB9BC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803CB9BC_11009);
        r4 = static_cast<uint32_t>(regargs_result_803CB9BC_11009 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
        r17 = ctx->gpr[17];
        r18 = ctx->gpr[18];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
        ctx->gpr[17] = r17;
        ctx->gpr[18] = r18;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803CB9BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
        r17 = ctx->gpr[17];
        r18 = ctx->gpr[18];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_803D02D0:
{
    MemoryInline::FlatWrite8((r24 + 28), static_cast<uint8_t>(r27));
    r3 = r18;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 44));
    ctr = r12;
    ctx->lr = 0x803D02E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWrite32((r24 + 8), r28);
}

loc_803D02EC:
{
    r0 = MemoryInline::FlatRead8((r24 + 28));
}

loc_803D02F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803D0BD4;
    }
}

loc_803D02F8:
{
    r3 = 3;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    r5 = MemoryInline::FlatRead32((r24 + 32));
    r6 = 1;
    r7 = (r24 + 32);
    r8 = MemoryInline::FlatRead32((r15 + 8));
    r12 = MemoryInline::FlatRead32((r15 + 4));
    ctr = r12;
    ctx->lr = 0x803D031Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r3 = r15;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x803D0334u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_803D0BD4;
}

loc_803D0338:
{
    r0 = MemoryInline::FlatRead32(r24);
}

loc_803D0340:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803D0368;
    }
}

loc_803D0344:
{
}

loc_803D0348:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803D03A4;
    }
}

loc_803D034C:
{
}

loc_803D0350:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_803D03E8;
    }
}

loc_803D0354:
{
}

loc_803D0358:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_803D03FC;
    }
}

loc_803D035C:
{
}

loc_803D0360:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_803D04DC;
    }
}

loc_803D0364:
{
    goto loc_803D04FC;
}

loc_803D0368:
{
    MemoryInline::FlatWrite8((r24 + 26), static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite8((r24 + 25), static_cast<uint8_t>(r27));
    r3 = r15;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 140));
    ctr = r12;
    ctx->lr = 0x803D0388u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r3 = r18;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->lr = 0x803D039Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWrite32(r24, r25);
    goto loc_803D04FC;
}

loc_803D03A4:
{
    r0 = MemoryInline::FlatRead8((r24 + 26));
}

loc_803D03AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803D03B8;
    }
}

loc_803D03B0:
{
    MemoryInline::FlatWrite32(r24, r28);
    goto loc_803D04FC;
}

loc_803D03B8:
{
    r0 = MemoryInline::FlatRead8((r24 + 25));
}

loc_803D03C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803D04FC;
    }
}

loc_803D03C4:
{
    r3 = r18;
    r4 = 1;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 52));
    ctr = r12;
    ctx->lr = 0x803D03DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r0 = 3;
    MemoryInline::FlatWrite32(r24, r0);
    goto loc_803D04FC;
}

loc_803D03E8:
{
    r0 = MemoryInline::FlatRead8((r24 + 26));
}

loc_803D03F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803D04FC;
    }
}

loc_803D03F4:
{
    MemoryInline::FlatWrite32(r24, r28);
    goto loc_803D04FC;
}

loc_803D03FC:
{
    r3 = r18;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x803D0410u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    r3 = (r15 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + 18470));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803D0424:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_803D0430;
    }
}

loc_803D0428:
{
    MemoryInline::FlatWrite32(r24, r29);
    goto loc_803D04FC;
}

loc_803D0430:
{
    r5 = 0;
    r0 = MemoryInline::FlatRead32((r3 + 18516));
}

loc_803D043C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803D0444;
    }
}

loc_803D0440:
{
    r5 = 1;
}

loc_803D0444:
{
    r4 = (r15 + 2340);
    r3 = (r4 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + 18516));
}

loc_803D0454:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803D045C;
    }
}

loc_803D0458:
{
    r5 = (r5 + 1);
}

loc_803D045C:
{
    r4 = (r4 + 2340);
    r3 = (r4 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + 18516));
}

loc_803D046C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803D0474;
    }
}

loc_803D0470:
{
    r5 = (r5 + 1);
}

loc_803D0474:
{
    r4 = (r4 + 2340);
    r3 = (r4 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + 18516));
}

loc_803D0484:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803D048C;
    }
}

loc_803D0488:
{
    r5 = (r5 + 1);
}

loc_803D048C:
{
}

loc_803D0490:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(2))) {
        goto loc_803D04B4;
    }
}

loc_803D0494:
{
    r3 = r15;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    r5 = (r26 + 66);
    r6 = 1;
    r7 = 0x80000000u;
    r8 = 1;
    if constexpr (KnownRegArgsCpuCall<0x803D2A84u>(&func_803D2A84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_803D2A84_150BF = func_803D2A84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803D2A84_150BF);
        r4 = static_cast<uint32_t>(regargs_result_803D2A84_150BF >> 32);
        r0 = ctx->gpr[0];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        InvokeDirectCpu<0x803D2A84u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
    }
    goto loc_803D04FC;
}

loc_803D04B4:
{
    r3 = (r15 + 65536);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 27868));
    MemoryInline::FlatWriteFloat32((r24 + 236), f0.d);
    r0 = 5;
    MemoryInline::FlatWrite32(r24, r0);
    r0 = MemoryInline::FlatRead32((r24 + 4));
}

loc_803D04D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803D04FC;
    }
}

loc_803D04D4:
{
    MemoryInline::FlatWrite32((r24 + 4), r29);
    goto loc_803D04FC;
}

loc_803D04DC:
{
    f0.d = MemoryInline::FlatReadFloat32((r24 + 236));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f25.d + f0.d));
    r3 = (r15 + 65536);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 27868));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803D04F0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_803D04FC;
    }
}

loc_803D04F8:
{
    MemoryInline::FlatWrite32(r24, r29);
}

loc_803D04FC:
{
    r0 = MemoryInline::FlatRead8((r24 + 25));
}

loc_803D0504:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803D0528;
    }
}

loc_803D0508:
{
    MemoryInline::FlatWrite32((r24 + 4), r27);
    r0 = -1;
    MemoryInline::FlatWrite8((r24 + 16), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteFloat32((r24 + 20), f26.d);
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r24 + 244), r0);
    MemoryInline::FlatWrite8((r24 + 27), static_cast<uint8_t>(r27));
}

loc_803D0528:
{
    r0 = MemoryInline::FlatRead32((r24 + 4));
}

loc_803D0530:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803D0560;
    }
}

loc_803D0534:
{
}

loc_803D0538:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803D05E8;
    }
}

loc_803D053C:
{
}

loc_803D0540:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_803D07F8;
    }
}

loc_803D0544:
{
}

loc_803D0548:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_803D08E4;
    }
}

loc_803D054C:
{
}

loc_803D0550:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_803D0974;
    }
}

loc_803D0554:
{
}

loc_803D0558:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_803D098C;
    }
}

loc_803D055C:
{
    goto loc_803D09AC;
}

loc_803D0560:
{
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    r3 = (r15 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + 18470));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803D0574:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_803D0580;
    }
}

loc_803D0578:
{
    MemoryInline::FlatWrite32((r24 + 4), r27);
    goto loc_803D09AC;
}

loc_803D0580:
{
    // inline leaf 0x803C99D8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16736));
    // end of inlined leaf 0x803C99D8
    r4 = 3;
    r5 = 0x80600000u;
    r5 = (r5 + -23924);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x803D05A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r3 = r18;
    r4 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 52));
    ctr = r12;
    ctx->lr = 0x803D05C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWrite8((r24 + 16), static_cast<uint8_t>(r14));
    MemoryInline::FlatWriteFloat32((r24 + 20), f26.d);
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r24 + 244), r0);
    MemoryInline::FlatWrite8((r24 + 27), static_cast<uint8_t>(r27));
    MemoryInline::FlatWriteFloat32((r24 + 248), f29.d);
    MemoryInline::FlatWrite32((r24 + 252), r27);
    MemoryInline::FlatWrite32((r24 + 4), r25);
    goto loc_803D09AC;
}

loc_803D05E8:
{
    r0 = MemoryInline::FlatRead8((r24 + 16));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803D05F4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_803D07E4;
    }
}

loc_803D05F8:
{
    f0.d = MemoryInline::FlatReadFloat32((r24 + 248));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
    r4 = (r15 + 65536);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 27868));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803D060C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_803D09AC;
    }
}

loc_803D0614:
{
    MemoryInline::FlatWriteFloat32((r24 + 248), f0.d);
    r3 = MemoryInline::FlatRead32((r24 + 252));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r24 + 252), r0);
    r16 = MemoryInline::FlatRead32((r24 + 252));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 27892));
    f1.d = PpcFmulsInline(f27.d, f0.d);
    r0 = (r16 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 140), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 136));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f28.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803D0644:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803D0684;
    }
}

loc_803D0648:
{
    // inline leaf 0x803C99D8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16736));
    // end of inlined leaf 0x803C99D8
    r4 = 0x80600000u;
    r4 = (r4 + -23868);
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    r6 = r16;
    r7 = (r15 + 65536);
    f0.d = MemoryInline::FlatReadFloat32((r7 + 27892));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 152), f0.d);
    r7 = fctiwzword0;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x803D0684u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_803D0684:
{
    r3 = (r15 + 65536);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 27892));
    r0 = MemoryInline::FlatRead32((r24 + 252));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 144));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f28.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803D06A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803D07D4;
    }
}

loc_803D06A8:
{
    r0 = MemoryInline::FlatRead8((r3 + 27904));
}

loc_803D06B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803D0708;
    }
}

loc_803D06B4:
{
    // inline leaf 0x803C99D8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16736));
    // end of inlined leaf 0x803C99D8
    r4 = 3;
    r5 = 0x80600000u;
    r5 = (r5 + -23812);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    r7 = MemoryInline::FlatRead32((r24 + 80));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x803D06E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r3 = r15;
    r4 = (r15 + 65536);
    r4 = MemoryInline::FlatRead8((r4 + 18470));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r5 = (r26 + 59);
    r6 = MemoryInline::FlatRead32((r24 + 252));
    r7 = 0x80000000u;
    r8 = 3;
    if constexpr (KnownRegArgsCpuCall<0x803D2A84u>(&func_803D2A84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_803D2A84_18480 = func_803D2A84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803D2A84_18480);
        r4 = static_cast<uint32_t>(regargs_result_803D2A84_18480 >> 32);
        r0 = ctx->gpr[0];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        InvokeDirectCpu<0x803D2A84u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
    }
    goto loc_803D09AC;
}

loc_803D0708:
{
    r3 = MemoryInline::FlatRead32((r24 + 80));
    // inline leaf 0x803CF80C (9 guest instruction(s))
}

loc_inl11_0x803CF80C:
{
    r4 = 0;
}

loc_inl11_0x803CF814:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl11_0x803CF828;
    }
}

loc_inl11_0x803CF818:
{
    r0 = (r3 + 65536);
}

loc_inl11_0x803CF820:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_inl11_0x803CF828;
    }
}

loc_inl11_0x803CF824:
{
    r4 = 1;
}

loc_inl11_0x803CF828:
{
    r3 = r4;
}

loc_inl11_cont_803CF80C:
{
    // end of inlined leaf 0x803CF80C
}

loc_803D0714:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803D0764;
    }
}

loc_803D0718:
{
    // inline leaf 0x803C99D8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16736));
    // end of inlined leaf 0x803C99D8
    r4 = 3;
    r5 = 0x80600000u;
    r5 = (r5 + -23720);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    r7 = MemoryInline::FlatRead32((r24 + 80));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x803D0744u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r3 = r15;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    r5 = (r26 + 66);
    r6 = 0;
    r7 = 0x80000000u;
    r8 = 1;
    if constexpr (KnownRegArgsCpuCall<0x803D2A84u>(&func_803D2A84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_803D2A84_19296 = func_803D2A84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803D2A84_19296);
        r4 = static_cast<uint32_t>(regargs_result_803D2A84_19296 >> 32);
        r0 = ctx->gpr[0];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        InvokeDirectCpu<0x803D2A84u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
    }
    goto loc_803D09AC;
}

loc_803D0764:
{
    r0 = MemoryInline::FlatRead8((r15 + 12));
}

loc_803D076C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803D09AC;
    }
}

loc_803D0770:
{
    r4 = (r15 + 65536);
    r0 = MemoryInline::FlatRead8((r4 + 18470));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8((r4 + 18468));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803D0788:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_803D09AC;
    }
}

loc_803D078C:
{
    // inline leaf 0x803C99D8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16736));
    // end of inlined leaf 0x803C99D8
    r4 = 3;
    r5 = 0x80600000u;
    r5 = (r5 + -23648);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x803D07B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r3 = r15;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    r5 = (r26 + 59);
    r6 = MemoryInline::FlatRead32((r24 + 252));
    r7 = 0x80000000u;
    r8 = 3;
    if constexpr (KnownRegArgsCpuCall<0x803D2A84u>(&func_803D2A84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_803D2A84_19FC9 = func_803D2A84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803D2A84_19FC9);
        r4 = static_cast<uint32_t>(regargs_result_803D2A84_19FC9 >> 32);
        r0 = ctx->gpr[0];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        InvokeDirectCpu<0x803D2A84u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
    }
    goto loc_803D09AC;
}

loc_803D07D4:
{
    r3 = r15;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    ctx->lr = 0x803D07E0u;
    if constexpr (KnownRegArgsCpuCall<0x803D3F3Cu>(&func_803D3F3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
        ctx->gpr[17] = r17;
        ctx->gpr[18] = r18;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803D3F3C_1A701 = func_803D3F3C_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803D3F3C_1A701);
        r4 = static_cast<uint32_t>(regargs_result_803D3F3C_1A701 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
        r17 = ctx->gpr[17];
        r18 = ctx->gpr[18];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f26 = ctx->fpr[26];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
        ctx->gpr[17] = r17;
        ctx->gpr[18] = r18;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803D3F3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
        r17 = ctx->gpr[17];
        r18 = ctx->gpr[18];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f26 = ctx->fpr[26];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_803D09AC;
}

loc_803D07E4:
{
    MemoryInline::FlatWriteFloat32((r24 + 248), f29.d);
    MemoryInline::FlatWrite32((r24 + 252), r27);
    r0 = 3;
    MemoryInline::FlatWrite32((r24 + 4), r0);
    goto loc_803D09AC;
}

loc_803D07F8:
{
    r3 = r15;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    if constexpr (KnownRegArgsCpuCall<0x803D48BCu>(&func_803D48BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803D48BC_1B8C7 = func_803D48BC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803D48BC_1B8C7);
        r4 = static_cast<uint32_t>(regargs_result_803D48BC_1B8C7 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x803D48BCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_803D080C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_803D0848;
    }
}

loc_803D0810:
{
    // inline leaf 0x803C99D8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16736));
    // end of inlined leaf 0x803C99D8
    r4 = 3;
    r5 = 0x80600000u;
    r5 = (r5 + -23568);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    r7 = MemoryInline::FlatRead8((r24 + 16));
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x803D0840u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWrite32((r24 + 4), r29);
    goto loc_803D09AC;
}

loc_803D0848:
{
    r0 = MemoryInline::FlatRead8((r24 + 27));
}

loc_803D0850:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803D0898;
    }
}

loc_803D0854:
{
    // inline leaf 0x803C99D8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16736));
    // end of inlined leaf 0x803C99D8
    r4 = 3;
    r5 = 0x80600000u;
    r5 = (r5 + -23512);
    r6 = (r15 + 65536);
    r6 = MemoryInline::FlatRead8((r6 + 18470));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r7 = MemoryInline::FlatRead8((r24 + 16));
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x803D0890u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWrite32((r24 + 4), r28);
    goto loc_803D09AC;
}

loc_803D0898:
{
    f0.d = MemoryInline::FlatReadFloat32((r24 + 248));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
    r3 = (r15 + 65536);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 27868));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803D08AC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_803D09AC;
    }
}

loc_803D08B4:
{
    MemoryInline::FlatWriteFloat32((r24 + 248), f0.d);
    r3 = r15;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    ctx->lr = 0x803D08C4u;
    if constexpr (KnownRegArgsCpuCall<0x803D46F4u>(&func_803D46F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
        ctx->gpr[17] = r17;
        ctx->gpr[18] = r18;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803D46F4_1D0A7 = func_803D46F4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803D46F4_1D0A7);
        r4 = static_cast<uint32_t>(regargs_result_803D46F4_1D0A7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
        r17 = ctx->gpr[17];
        r18 = ctx->gpr[18];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
        ctx->gpr[17] = r17;
        ctx->gpr[18] = r18;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803D46F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
        r17 = ctx->gpr[17];
        r18 = ctx->gpr[18];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = MemoryInline::FlatRead8((r24 + 180));
}

loc_803D08CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803D09AC;
    }
}

loc_803D08D0:
{
    r3 = r15;
    r4 = 0;
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    ctx->lr = 0x803D08E0u;
    if constexpr (KnownRegArgsCpuCall<0x803D4130u>(&func_803D4130)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
        ctx->gpr[17] = r17;
        ctx->gpr[18] = r18;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803D4130_1E20E = func_803D4130_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803D4130_1E20E);
        r4 = static_cast<uint32_t>(regargs_result_803D4130_1E20E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
        r17 = ctx->gpr[17];
        r18 = ctx->gpr[18];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f26 = ctx->fpr[26];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
        ctx->gpr[17] = r17;
        ctx->gpr[18] = r18;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803D4130u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
        r17 = ctx->gpr[17];
        r18 = ctx->gpr[18];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f26 = ctx->fpr[26];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_803D09AC;
}

loc_803D08E4:
{
    r3 = r15;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    if constexpr (KnownRegArgsCpuCall<0x803D48BCu>(&func_803D48BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803D48BC_1F2FE = func_803D48BC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803D48BC_1F2FE);
        r4 = static_cast<uint32_t>(regargs_result_803D48BC_1F2FE >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x803D48BCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_803D08F8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_803D0934;
    }
}

loc_803D08FC:
{
    // inline leaf 0x803C99D8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16736));
    // end of inlined leaf 0x803C99D8
    r4 = 3;
    r5 = 0x80600000u;
    r5 = (r5 + -23568);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    r7 = MemoryInline::FlatRead8((r24 + 16));
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x803D092Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWrite32((r24 + 4), r29);
    goto loc_803D09AC;
}

loc_803D0934:
{
    f0.d = MemoryInline::FlatReadFloat32((r24 + 248));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
    r4 = (r15 + 65536);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 27868));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803D0948:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_803D09AC;
    }
}

loc_803D0950:
{
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r24 + 244), r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 27868));
    MemoryInline::FlatWriteFloat32((r24 + 248), f0.d);
    r3 = r15;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    ctx->lr = 0x803D0970u;
    if constexpr (KnownRegArgsCpuCall<0x803D3F3Cu>(&func_803D3F3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
        ctx->gpr[17] = r17;
        ctx->gpr[18] = r18;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803D3F3C_2044C = func_803D3F3C_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803D3F3C_2044C);
        r4 = static_cast<uint32_t>(regargs_result_803D3F3C_2044C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
        r17 = ctx->gpr[17];
        r18 = ctx->gpr[18];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f26 = ctx->fpr[26];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
        ctx->gpr[17] = r17;
        ctx->gpr[18] = r18;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803D3F3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
        r17 = ctx->gpr[17];
        r18 = ctx->gpr[18];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f26 = ctx->fpr[26];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_803D09AC;
}

loc_803D0974:
{
    r3 = (r15 + 65536);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 27868));
    MemoryInline::FlatWriteFloat32((r24 + 240), f0.d);
    r0 = 6;
    MemoryInline::FlatWrite32((r24 + 4), r0);
    goto loc_803D09AC;
}

loc_803D098C:
{
    f0.d = MemoryInline::FlatReadFloat32((r24 + 240));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f26.d));
    r3 = (r15 + 65536);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 27868));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803D09A0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_803D09AC;
    }
}

loc_803D09A8:
{
    MemoryInline::FlatWrite32((r24 + 4), r29);
}

loc_803D09AC:
{
    r3 = r15;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    r5 = 0;
    ctx->lr = 0x803D09BCu;
    if constexpr (KnownRegArgsCpuCall<0x803D2FA8u>(&func_803D2FA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
        ctx->gpr[17] = r17;
        ctx->gpr[18] = r18;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->fpr[0] = f0;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803D2FA8_21B8A = func_803D2FA8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803D2FA8_21B8A);
        r4 = static_cast<uint32_t>(regargs_result_803D2FA8_21B8A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
        r17 = ctx->gpr[17];
        r18 = ctx->gpr[18];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f26 = ctx->fpr[26];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
        ctx->gpr[17] = r17;
        ctx->gpr[18] = r18;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803D2FA8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
        r17 = ctx->gpr[17];
        r18 = ctx->gpr[18];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f26 = ctx->fpr[26];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = r15;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    if constexpr (KnownRegArgsCpuCall<0x803D48BCu>(&func_803D48BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803D48BC_22B9D = func_803D48BC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803D48BC_22B9D);
        r4 = static_cast<uint32_t>(regargs_result_803D48BC_22B9D >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x803D48BCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_803D09D0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_803D0B38;
    }
}

loc_803D09D4:
{
    r16 = MemoryInline::FlatRead32((r24 + 1308));
    r3 = (r0 * 2340);
    r3 = (r3 + 65536);
    r22 = (r3 + 18516);
    r15_addr_4 = (r15 + r22);
    r3 = MemoryInline::FlatRead32(r15_addr_4);
    // inline leaf 0x803CBA90 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 4128), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x803CBA90
    r3 = r15;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    r5 = 0;
    r6 = (r23 + 65536);
    r6 = MemoryInline::FlatRead8((r6 + 18660));
    ctx->lr = 0x803D0A04u;
    if constexpr (KnownRegArgsCpuCall<0x803D2B00u>(&func_803D2B00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803D2B00_23325 = func_803D2B00_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803D2B00_23325);
        r4 = static_cast<uint32_t>(regargs_result_803D2B00_23325 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803D2B00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_803D0A08:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803D0A14;
    }
}

loc_803D0A0C:
{
    r3 = (r23 + 65536);
    MemoryInline::FlatWrite8((r3 + 18660), static_cast<uint8_t>(r27));
}

loc_803D0A14:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r19 = (r24 + r0);
    r3 = r15;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    r5 = 1;
    r6 = MemoryInline::FlatRead32((r19 + 1304));
    r0 = (0 - r6);
    r0 = (r0 & ~r6);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r6 = (r6_rot_2 & 1);
    ctx->lr = 0x803D0A3Cu;
    if constexpr (KnownRegArgsCpuCall<0x803D2B00u>(&func_803D2B00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803D2B00_2424F = func_803D2B00_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803D2B00_2424F);
        r4 = static_cast<uint32_t>(regargs_result_803D2B00_2424F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803D2B00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r21 = r3;
    r15_addr_5 = (r15 + r22);
    r3 = MemoryInline::FlatRead32(r15_addr_5);
    ctx->lr = 0x803D0A48u;
    if constexpr (KnownRegArgsCpuCall<0x803CBA9Cu>(&func_803CBA9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803CBA9C_24DCF = func_803CBA9C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803CBA9C_24DCF;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x803CBA9Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r19 + 1304));
    SetCRResident(cr, xer, 6, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_803D0A54:
{
    if (((cr & 0x00000040u) == 0)) {
        goto loc_803D0B20;
    }
}

loc_803D0A58:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_803D0A5C:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_803D0B20;
    }
}

loc_803D0A60:
{
}

loc_803D0A64:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_803D0B20;
    }
}

loc_803D0A68:
{
    r5 = 0;
    r21 = 0;
    if (((cr & 0x00000040u) == 0)) {
        goto loc_803D0AD8;
    }
}

loc_803D0A74:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_803D0AD8;
    }
}

loc_803D0A78:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(10));
    r0 = (r0_rot_3 & -1024);
    r3 = (r24 + r0);
    r21 = (r3 + 280);
    r3 = (r1 + 20);
    r4 = r21;
    r5 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    // inline leaf 0x803C99D8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16736));
    // end of inlined leaf 0x803C99D8
    r4 = MemoryInline::FlatRead16((r1 + 20));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 72));
    ctr = r12;
    ctx->lr = 0x803D0AACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r31 = r3;
    r5 = (r3 & 65535);
}

loc_803D0AB8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_803D0BE8;
    }
}

loc_803D0ABC:
{
}

loc_803D0AC0:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r5))) {
        goto loc_803D0BE8;
    }
}

loc_803D0AC4:
{
    r3 = MemoryInline::FlatRead32((r1 + 160));
    r4 = (r21 + 2);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r5 = (r31 & 65535);
    r21 = (r5 + 2);
}

loc_803D0AD8:
{
    r15_addr_6 = (r15 + r22);
    r3 = MemoryInline::FlatRead32(r15_addr_6);
    r4 = (r15 + 13);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r16)));
    ctx->lr = 0x803D0AE8u;
    if constexpr (KnownRegArgsCpuCall<0x803CBBFCu>(&func_803CBBFC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803CBBFC_25E76 = func_803CBBFC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803CBBFC_25E76);
        r4 = static_cast<uint32_t>(regargs_result_803CBBFC_25E76 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803CBBFCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_803D0AEC:
{
    if ((static_cast<int32_t>(r21) <= static_cast<int32_t>(0))) {
        goto loc_803D0B34;
    }
}

loc_803D0AF0:
{
    r0 = MemoryInline::FlatRead32((r19 + 1304));
    r0 = (r0 - r21);
    MemoryInline::FlatWrite32((r19 + 1304), r0);
    r5 = MemoryInline::FlatRead32((r19 + 1304));
}

loc_803D0B04:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_803D0B34;
    }
}

loc_803D0B08:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(10));
    r0 = (r0_rot_5 & -1024);
    r3 = (r24 + r0);
    r3 = (r3 + 280);
    r4 = (r3 + r21);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8045BC18u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_803D0B34;
}

loc_803D0B20:
{
    r15_addr_7 = (r15 + r22);
    r3 = MemoryInline::FlatRead32(r15_addr_7);
    r4 = 0;
    r5 = 0;
    r6 = 0;
    ctx->lr = 0x803D0B34u;
    if constexpr (KnownRegArgsCpuCall<0x803CBBFCu>(&func_803CBBFC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803CBBFC_26BFF = func_803CBBFC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803CBBFC_26BFF);
        r4 = static_cast<uint32_t>(regargs_result_803CBBFC_26BFF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803CBBFCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_803D0B34:
{
    MemoryInline::FlatWrite32((r24 + 1308), r27);
}

loc_803D0B38:
{
    r3 = r15;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    ctx->lr = 0x803D0B44u;
    if constexpr (KnownRegArgsCpuCall<0x803D42F4u>(&func_803D42F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803D42F4_27669 = func_803D42F4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803D42F4_27669);
        r4 = static_cast<uint32_t>(regargs_result_803D42F4_27669 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803D42F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = MemoryInline::FlatRead8((r24 + 256));
}

loc_803D0B4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803D0BD4;
    }
}

loc_803D0B50:
{
    r3 = r18;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 56));
    ctr = r12;
    ctx->lr = 0x803D0B64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r3 = r15;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    if constexpr (KnownRegArgsCpuCall<0x803D48BCu>(&func_803D48BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803D48BC_28505 = func_803D48BC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803D48BC_28505);
        r4 = static_cast<uint32_t>(regargs_result_803D48BC_28505 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x803D48BCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_803D0B78:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_803D0B8C;
    }
}

loc_803D0B7C:
{
    r3 = (r15 + 65536);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 27868));
    MemoryInline::FlatWriteFloat32((r24 + 260), f0.d);
    goto loc_803D0BD4;
}

loc_803D0B8C:
{
    r6 = MemoryInline::FlatRead32((r24 + 12));
    r0 = (r6 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 140), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 136));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f28.d));
    f0.d = MemoryInline::FlatReadFloat32((r24 + 260));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    r3 = (r15 + 65536);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 27868));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803D0BB4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_803D0BD4;
    }
}

loc_803D0BBC:
{
    r3 = r15;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    r5 = (r26 + 54);
    r7 = 0x80000000u;
    r8 = 1;
    if constexpr (KnownRegArgsCpuCall<0x803D2A84u>(&func_803D2A84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_803D2A84_28D97 = func_803D2A84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803D2A84_28D97);
        r4 = static_cast<uint32_t>(regargs_result_803D2A84_28D97 >> 32);
        r0 = ctx->gpr[0];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        InvokeDirectCpu<0x803D2A84u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
    }
}

loc_803D0BD4:
{
    r24 = (r24 + 2340);
    r23 = (r23 + 2340);
    r17 = (r17 + 1);
}

loc_803D0BE4:
{
    if ((static_cast<int32_t>(r17) < static_cast<int32_t>(4))) {
        goto loc_803D0018;
    }
}

loc_803D0BE8:
{
    r22 = 0;
    r23 = 0;
    r24 = 0;
    r25 = 0;
    r26 = 0;
    r3 = (r1 + 24);
    r4 = 0;
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r21 = 0;
    r19 = (r1 + 24);
    f28.d = MemoryInline::FlatReadFloat64((r2 + -5008));
    r16 = 65536;
    f27.d = MemoryInline::FlatReadFloat32((r2 + -5020));
    f26.d = MemoryInline::FlatReadFloat32((r2 + -5016));
    r17 = 0;
    r14 = 0x80600000u;
    f25.d = MemoryInline::FlatReadFloat32((r2 + -5032));
}

loc_803D0C30:
{
    r3 = r15;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r21)));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 76));
    ctr = r12;
    ctx->lr = 0x803D0C48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_803D0C4C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803D0E74;
    }
}

loc_803D0C50:
{
    r3 = r15;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r21)));
    if constexpr (KnownRegArgsCpuCall<0x803D48BCu>(&func_803D48BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803D48BC_29A3C = func_803D48BC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803D48BC_29A3C);
        r4 = static_cast<uint32_t>(regargs_result_803D48BC_29A3C >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x803D48BCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r18 = r3;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_803D0C68:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_803D0E74;
    }
}

loc_803D0C6C:
{
    f0.d = MemoryInline::FlatReadFloat32((r20 + 264));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f25.d + f0.d));
    r3 = (r15 + 65536);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 27868));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803D0C80:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_803D0DE8;
    }
}

loc_803D0C88:
{
    MemoryInline::FlatWriteFloat32((r20 + 264), f0.d);
    r3 = (r1 + 40);
    ctx->lr = 0x803D0C94u;
    if constexpr (KnownRegArgsCpuCall<0x803CBA18u>(&func_803CBA18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803CBA18_2A09E = func_803CBA18_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_803CBA18_2A09E);
        r4 = static_cast<uint32_t>(regargs_result_803CBA18_2A09E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803CBA18u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = (r20 + 84);
    r4 = (r1 + 40);
    ctx->lr = 0x803D0CA0u;
    if constexpr (KnownRegArgsCpuCall<0x803FA7E0u>(&func_803FA7E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803FA7E0_2A46C = func_803FA7E0_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803FA7E0_2A46C);
        r4 = static_cast<uint32_t>(regargs_result_803FA7E0_2A46C >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803FA7E0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = (r1 + 40);
    // inline leaf 0x803F98D0 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r3 = (r0 & 65535);
    // end of inlined leaf 0x803F98D0
    r27 = (r3 & 65535);
    // inline leaf 0x803F98DC (2 guest instruction(s))
    r3 = 23;
    // end of inlined leaf 0x803F98DC
    r28 = (r3 & 65535);
    // inline leaf 0x803FA1C0 (2 guest instruction(s))
    r3 = 22;
    // end of inlined leaf 0x803FA1C0
    r0 = (r3 & 65535);
    r0 = (r0 + r28);
}

loc_803D0CC4:
{
    if ((static_cast<int32_t>(r27) >= static_cast<int32_t>(r0))) {
        goto loc_803D0CF4;
    }
}

loc_803D0CC8:
{
    MemoryInline::FlatWrite32((r20 + 272), r17);
    f0.d = MemoryInline::FlatReadFloat32((r20 + 268));
    f1.d = PpcFmulsInline(f27.d, f0.d);
    r0 = (r27 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 144));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f28.d));
    f0.d = PpcFmulsInline(f26.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r20 + 268), f0.d);
    goto loc_803D0D7C;
}

loc_803D0CF4:
{
    r0 = (r27 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 140), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 136));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f28.d));
    f0.d = MemoryInline::FlatReadFloat32((r20 + 268));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803D0D0C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_803D0D50;
    }
}

loc_803D0D14:
{
    r3 = MemoryInline::FlatRead32((r20 + 272));
}

loc_803D0D1C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_803D0D28;
    }
}

loc_803D0D20:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r20 + 272), r0);
}

loc_803D0D28:
{
    f0.d = MemoryInline::FlatReadFloat32((r20 + 268));
    f1.d = PpcFmulsInline(f27.d, f0.d);
    r0 = (r27 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 144));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f28.d));
    f0.d = PpcFmulsInline(f26.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r20 + 268), f0.d);
    goto loc_803D0D7C;
}

loc_803D0D50:
{
    r3 = MemoryInline::FlatRead32((r20 + 272));
    r0 = (r16 + -1);
}

loc_803D0D5C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_803D0D68;
    }
}

loc_803D0D60:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r20 + 272), r0);
}

loc_803D0D68:
{
    r0 = (r27 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 140), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 136));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f28.d));
    MemoryInline::FlatWriteFloat32((r20 + 268), f0.d);
}

loc_803D0D7C:
{
    r28 = MemoryInline::FlatRead32((r20 + 272));
}

loc_803D0D84:
{
    if ((static_cast<int32_t>(r28) <= static_cast<int32_t>(7))) {
        goto loc_803D0DB4;
    }
}

loc_803D0D88:
{
    // inline leaf 0x803C99D8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16736));
    // end of inlined leaf 0x803C99D8
    r4 = (r14 + -23444);
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r21)));
    r6 = r27;
    f1.d = MemoryInline::FlatReadFloat32((r20 + 268));
    r7 = r28;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(5), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x803D0DB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_803D0DB4:
{
    f0.d = MemoryInline::FlatReadFloat32((r20 + 276));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f25.d + f0.d));
    r3 = (r15 + 65536);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 27868));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803D0DC8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_803D0DDC;
    }
}

loc_803D0DD0:
{
    r3 = r15;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r21)));
    ctx->lr = 0x803D0DDCu;
    if constexpr (KnownRegArgsCpuCall<0x803D3EA0u>(&func_803D3EA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
        ctx->gpr[17] = r17;
        ctx->gpr[18] = r18;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803D3EA0_2C654 = func_803D3EA0_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803D3EA0_2C654);
        r4 = static_cast<uint32_t>(regargs_result_803D3EA0_2C654 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
        r17 = ctx->gpr[17];
        r18 = ctx->gpr[18];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f26 = ctx->fpr[26];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
        ctx->gpr[17] = r17;
        ctx->gpr[18] = r18;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803D3EA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
        r17 = ctx->gpr[17];
        r18 = ctx->gpr[18];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f26 = ctx->fpr[26];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_803D0DDC:
{
    r3 = (r1 + 40);
    r4 = -1;
    ctx->lr = 0x803D0DE8u;
    if constexpr (KnownRegArgsCpuCall<0x803CB9BCu>(&func_803CB9BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
        ctx->gpr[17] = r17;
        ctx->gpr[18] = r18;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803CB9BC_2D992 = func_803CB9BC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803CB9BC_2D992);
        r4 = static_cast<uint32_t>(regargs_result_803CB9BC_2D992 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
        r17 = ctx->gpr[17];
        r18 = ctx->gpr[18];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
        ctx->gpr[17] = r17;
        ctx->gpr[18] = r18;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803CB9BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
        r17 = ctx->gpr[17];
        r18 = ctx->gpr[18];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_803D0DE8:
{
    r22 = (r22 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r18)));
    r3 = (r0 * 2340);
    r3 = (r3 + 65536);
    r0 = (r3 + 18516);
    r15_addr_13 = (r15 + r0);
    r3 = MemoryInline::FlatRead32(r15_addr_13);
    if constexpr (KnownRegArgsCpuCall<0x803CBF20u>(&func_803CBF20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803CBF20_2E94D = func_803CBF20_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_803CBF20_2E94D);
        r4 = static_cast<uint32_t>(regargs_result_803CBF20_2E94D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803CBF20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead32((r20 + 272));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32(r19, r0);
    r4 = MemoryInline::FlatRead32(r19);
    r3 = (r15 + 65536);
    r3 = MemoryInline::FlatRead32((r3 + 27880));
}

loc_803D0E20:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r4))) {
        goto loc_803D0E2C;
    }
}

loc_803D0E24:
{
    r23 = (r23 + 1);
    goto loc_803D0E44;
}

loc_803D0E2C:
{
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_11 & 1);
    r0 = (r0 + r3);
    r0 = (static_cast<int32_t>(r0) >> 1);
}

loc_803D0E3C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r4))) {
        goto loc_803D0E44;
    }
}

loc_803D0E40:
{
    r24 = (r24 + 1);
}

loc_803D0E44:
{
    r3 = (r15 + 65536);
    r3 = MemoryInline::FlatRead32((r3 + 27884));
}

loc_803D0E50:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r4))) {
        goto loc_803D0E5C;
    }
}

loc_803D0E54:
{
    r25 = (r25 + 1);
    goto loc_803D0E74;
}

loc_803D0E5C:
{
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_13 & 1);
    r0 = (r0 + r3);
    r0 = (static_cast<int32_t>(r0) >> 1);
}

loc_803D0E6C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r4))) {
        goto loc_803D0E74;
    }
}

loc_803D0E70:
{
    r26 = (r26 + 1);
}

loc_803D0E74:
{
    r20 = (r20 + 2340);
    r19 = (r19 + 4);
    r21 = (r21 + 1);
}

loc_803D0E84:
{
    if ((static_cast<int32_t>(r21) < static_cast<int32_t>(4))) {
        goto loc_803D0C30;
    }
}

loc_803D0E88:
{
}

loc_803D0E8C:
{
    if ((static_cast<int32_t>(r22) <= static_cast<int32_t>(2))) {
        goto loc_803D0F08;
    }
}

loc_803D0E90:
{
    r0 = (r22 + -1);
}

loc_803D0E98:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r23))) {
        goto loc_803D0EC8;
    }
}

loc_803D0E9C:
{
    r3 = r15;
    r4 = (r15 + 65536);
    r4 = MemoryInline::FlatRead8((r4 + 18470));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r5 = 0x80030000u;
    r5 = (r5 + 57);
    r6 = 0;
    r7 = 0x80000000u;
    r8 = 3;
    if constexpr (KnownRegArgsCpuCall<0x803D2A84u>(&func_803D2A84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_803D2A84_2F744 = func_803D2A84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803D2A84_2F744);
        r4 = static_cast<uint32_t>(regargs_result_803D2A84_2F744 >> 32);
        r0 = ctx->gpr[0];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        InvokeDirectCpu<0x803D2A84u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
    }
    goto loc_803D0F08;
}

loc_803D0EC8:
{
}

loc_803D0ECC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r24))) {
        goto loc_803D0F08;
    }
}

loc_803D0ED0:
{
    r16 = 0;
    r14 = r15;
}

loc_803D0ED8:
{
    r3 = (r14 + 65536);
    r3 = MemoryInline::FlatRead32((r3 + 18516));
}

loc_803D0EE4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803D0EF8;
    }
}

loc_803D0EE8:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 56));
    ctr = r12;
    ctx->lr = 0x803D0EF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_803D0EF8:
{
    r14 = (r14 + 2340);
    r16 = (r16 + 1);
}

loc_803D0F04:
{
    if ((static_cast<int32_t>(r16) < static_cast<int32_t>(4))) {
        goto loc_803D0ED8;
    }
}

loc_803D0F08:
{
}

loc_803D0F0C:
{
    if ((static_cast<int32_t>(r22) <= static_cast<int32_t>(1))) {
        goto loc_803D1044;
    }
}

loc_803D0F10:
{
}

loc_803D0F14:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(1))) {
        goto loc_803D0FEC;
    }
}

loc_803D0F18:
{
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(1));
    r0 = (r0_rot_15 & 1);
    r0 = (r0 + r22);
    r0 = (static_cast<int32_t>(r0) >> 1);
}

loc_803D0F28:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r26))) {
        goto loc_803D0F80;
    }
}

loc_803D0F2C:
{
    r16 = 0;
    r14 = (r15 + 65536);
}

loc_803D0F34:
{
    r3 = r15;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r16)));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 76));
    ctr = r12;
    ctx->lr = 0x803D0F4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_803D0F50:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803D0F70;
    }
}

loc_803D0F54:
{
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r16)));
    r0 = MemoryInline::FlatRead8((r14 + 18470));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803D0F64:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r0))) {
        goto loc_803D0F70;
    }
}

loc_803D0F68:
{
    r3 = r15;
    ctx->lr = 0x803D0F70u;
    if constexpr (KnownRegArgsCpuCall<0x803D43B8u>(&func_803D43B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803D43B8_30C60 = func_803D43B8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803D43B8_30C60);
        r4 = static_cast<uint32_t>(regargs_result_803D43B8_30C60 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803D43B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_803D0F70:
{
    r16 = (r16 + 1);
}

loc_803D0F78:
{
    if ((static_cast<int32_t>(r16) < static_cast<int32_t>(4))) {
        goto loc_803D0F34;
    }
}

loc_803D0F7C:
{
    goto loc_803D1044;
}

loc_803D0F80:
{
    r16 = 0;
    r14 = (r1 + 24);
}

loc_803D0F88:
{
    r3 = r15;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r16)));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 76));
    ctr = r12;
    ctx->lr = 0x803D0FA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_803D0FA4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803D0FD8;
    }
}

loc_803D0FA8:
{
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r16)));
    r5 = (r15 + 65536);
    r0 = MemoryInline::FlatRead8((r5 + 18470));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803D0FBC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r0))) {
        goto loc_803D0FD8;
    }
}

loc_803D0FC0:
{
    r3 = MemoryInline::FlatRead32(r14);
    r0 = MemoryInline::FlatRead32((r5 + 27884));
}

loc_803D0FCC:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_803D0FD8;
    }
}

loc_803D0FD0:
{
    r3 = r15;
    ctx->lr = 0x803D0FD8u;
    if constexpr (KnownRegArgsCpuCall<0x803D43B8u>(&func_803D43B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803D43B8_31F14 = func_803D43B8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803D43B8_31F14);
        r4 = static_cast<uint32_t>(regargs_result_803D43B8_31F14 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803D43B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_803D0FD8:
{
    r14 = (r14 + 4);
    r16 = (r16 + 1);
}

loc_803D0FE4:
{
    if ((static_cast<int32_t>(r16) < static_cast<int32_t>(4))) {
        goto loc_803D0F88;
    }
}

loc_803D0FE8:
{
    goto loc_803D1044;
}

loc_803D0FEC:
{
}

loc_803D0FF0:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_803D1044;
    }
}

loc_803D0FF4:
{
    r16 = 0;
    r14 = (r15 + 65536);
}

loc_803D0FFC:
{
    r3 = r15;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r16)));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 76));
    ctr = r12;
    ctx->lr = 0x803D1014u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_803D1018:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803D1038;
    }
}

loc_803D101C:
{
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r16)));
    r0 = MemoryInline::FlatRead8((r14 + 18470));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803D102C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r0))) {
        goto loc_803D1038;
    }
}

loc_803D1030:
{
    r3 = r15;
    ctx->lr = 0x803D1038u;
    if constexpr (KnownRegArgsCpuCall<0x803D451Cu>(&func_803D451C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803D451C_33170 = func_803D451C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803D451C_33170);
        r4 = static_cast<uint32_t>(regargs_result_803D451C_33170 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803D451Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_803D1038:
{
    r16 = (r16 + 1);
}

loc_803D1040:
{
    if ((static_cast<int32_t>(r16) < static_cast<int32_t>(4))) {
        goto loc_803D0FFC;
    }
}

loc_803D1044:
{
    r3 = r15;
    r4 = (r15 + 65536);
    r4 = MemoryInline::FlatRead8((r4 + 18468));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if constexpr (KnownRegArgsCpuCall<0x803D48BCu>(&func_803D48BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803D48BC_33BA7 = func_803D48BC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803D48BC_33BA7);
        r4 = static_cast<uint32_t>(regargs_result_803D48BC_33BA7 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x803D48BCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_803D1060:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_803D10BC;
    }
}

loc_803D1064:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -5048));
    r3 = (r15 + 65536);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 27872));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803D1074:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_803D10B0;
    }
}

loc_803D1078:
{
    // inline leaf 0x803C99D8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16736));
    // end of inlined leaf 0x803C99D8
    r4 = 3;
    r5 = 0x80600000u;
    r5 = (r5 + -23380);
    r7 = (r15 + 65536);
    r6 = MemoryInline::FlatRead8((r7 + 18470));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r7 = MemoryInline::FlatRead8((r7 + 18468));
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x803D10B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_803D10B0:
{
    r3 = (r15 + 65536);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 27868));
    MemoryInline::FlatWriteFloat32((r3 + 27872), f0.d);
}

loc_803D10BC:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -5048));
    r3 = (r15 + 65536);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 27872));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803D10CC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803D1148;
    }
}

loc_803D10D0:
{
    r0 = MemoryInline::FlatRead8((r15 + 12));
}

loc_803D10D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803D10E4;
    }
}

loc_803D10DC:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 27888));
    goto loc_803D1100;
}

loc_803D10E4:
{
    r3 = MemoryInline::FlatRead32((r3 + 27880));
    r0 = (r3 + 6);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -5008));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 144));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
}

loc_803D1100:
{
    r4 = (r15 + 65536);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 27868));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 27872));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_803D1114:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_803D1148;
    }
}

loc_803D111C:
{
    r3 = r15;
    r4 = MemoryInline::FlatRead8((r4 + 18470));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r5 = 0x80030000u;
    r5 = (r5 + 63);
    f0.d = PPC_Fctiwz(f2.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 152), f0.d);
    r6 = fctiwzword1;
    r7 = 0x80000000u;
    r8 = 3;
    if constexpr (KnownRegArgsCpuCall<0x803D2A84u>(&func_803D2A84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_803D2A84_34FF1 = func_803D2A84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803D2A84_34FF1);
        r4 = static_cast<uint32_t>(regargs_result_803D2A84_34FF1 >> 32);
        r0 = ctx->gpr[0];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        InvokeDirectCpu<0x803D2A84u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
    }
}

loc_803D1148:
{
    r3 = r15;
    r4 = (r15 + 65536);
    r4 = MemoryInline::FlatRead8((r4 + 18469));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if constexpr (KnownRegArgsCpuCall<0x803D48BCu>(&func_803D48BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803D48BC_3541E = func_803D48BC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803D48BC_3541E);
        r4 = static_cast<uint32_t>(regargs_result_803D48BC_3541E >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x803D48BCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_803D1164:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_803D11C0;
    }
}

loc_803D1168:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -5048));
    r3 = (r15 + 65536);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 27876));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803D1178:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_803D11B4;
    }
}

loc_803D117C:
{
    // inline leaf 0x803C99D8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16736));
    // end of inlined leaf 0x803C99D8
    r4 = 3;
    r5 = 0x80600000u;
    r5 = (r5 + -23328);
    r7 = (r15 + 65536);
    r6 = MemoryInline::FlatRead8((r7 + 18470));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r7 = MemoryInline::FlatRead8((r7 + 18469));
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x803D11B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_803D11B4:
{
    r3 = (r15 + 65536);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 27868));
    MemoryInline::FlatWriteFloat32((r3 + 27876), f0.d);
}

loc_803D11C0:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -5048));
    r3 = (r15 + 65536);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 27876));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803D11D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803D124C;
    }
}

loc_803D11D4:
{
    r0 = MemoryInline::FlatRead8((r15 + 12));
}

loc_803D11DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803D11E8;
    }
}

loc_803D11E0:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 27888));
    goto loc_803D1204;
}

loc_803D11E8:
{
    r3 = MemoryInline::FlatRead32((r3 + 27880));
    r0 = (r3 + 6);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -5008));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 140), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 136));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
}

loc_803D1204:
{
    r4 = (r15 + 65536);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 27868));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 27876));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_803D1218:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_803D124C;
    }
}

loc_803D1220:
{
    r3 = r15;
    r4 = MemoryInline::FlatRead8((r4 + 18470));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r5 = 0x80030000u;
    r5 = (r5 + 63);
    f0.d = PPC_Fctiwz(f2.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 152), f0.d);
    r6 = fctiwzword2;
    r7 = 0x80000000u;
    r8 = 3;
    if constexpr (KnownRegArgsCpuCall<0x803D2A84u>(&func_803D2A84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_803D2A84_36868 = func_803D2A84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803D2A84_36868);
        r4 = static_cast<uint32_t>(regargs_result_803D2A84_36868 >> 32);
        r0 = ctx->gpr[0];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        InvokeDirectCpu<0x803D2A84u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
    }
}

loc_803D124C:
{
    r0 = 344;
    addr_psqx_803D1250_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803D1250_loc_0));
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 240), 0, 120u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 96u, (r1 + 336));
    r0 = 328;
    addr_psqx_803D125C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803D125C_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 80u, (r1 + 320));
    r0 = 312;
    addr_psqx_803D1268_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803D1268_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 64u, (r1 + 304));
    r0 = 296;
    addr_psqx_803D1274_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803D1274_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 48u, (r1 + 288));
    r0 = 280;
    addr_psqx_803D1280_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803D1280_loc_0));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 32u, (r1 + 272));
    r0 = 264;
    addr_psqx_803D128C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f26, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803D128C_loc_0));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 16u, (r1 + 256));
    r0 = 248;
    addr_psqx_803D1298_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f25, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803D1298_loc_0));
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 0u, (r1 + 240));
    r11 = (r1 + 240);
    // inline leaf 0x804574A0 (19 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    // end of inlined leaf 0x804574A0
    r0 = MemoryInline::ReadResolved32(guest_range_3, 116u, (r1 + 356));
    ctx->lr = r0;
    r1 = (r1 + 352);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->gpr[14] = r14_entry;
    ctx->gpr[15] = r15_entry;
    ctx->gpr[16] = r16_entry;
    ctx->gpr[17] = r17_entry;
    ctx->gpr[18] = r18_entry;
    ctx->gpr[19] = r19_entry;
    ctx->gpr[20] = r20_entry;
    ctx->gpr[21] = r21_entry;
    ctx->gpr[22] = r22_entry;
    ctx->gpr[23] = r23_entry;
    ctx->gpr[24] = r24_entry;
    ctx->gpr[25] = r25_entry;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803CFF50(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803CFF50_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00003FFF gpr_return=0x00000018 fpr_read=0xFE003FFF fpr_write=0xFE003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803CFF50 func_803CFF50 preserves=true fpr_mask=0x00000000
