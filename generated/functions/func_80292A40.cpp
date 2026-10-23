#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80293568(CpuContext* ctx);
extern "C" uint64_t func_80293568_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80296F3C(CpuContext* ctx);
extern "C" void func_80296F3C_ra18_e_0_0(CpuContext*, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_80292A40_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_80293530_loc_0 = 0;
    uint32_t addr_psqx_8029353C_loc_0 = 0;
    uint32_t addr_psqx_80293548_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r10_addr_0 = 0;
    uint32_t r10_addr_1 = 0;
    uint32_t r10_addr_2 = 0;
    uint32_t r10_addr_3 = 0;
    uint32_t r10_addr_4 = 0;
    uint32_t r10_addr_5 = 0;
    uint32_t r10_addr_6 = 0;
    uint32_t r10_addr_7 = 0;
    uint32_t r19_addr_0 = 0;
    uint32_t r19_addr_1 = 0;
    uint32_t r19_addr_2 = 0;
    uint32_t r19_addr_3 = 0;
    uint32_t r19_addr_4 = 0;
    uint32_t r19_addr_5 = 0;
    uint32_t r19_addr_6 = 0;
    uint32_t r19_addr_7 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r21_addr_0 = 0;
    uint32_t r21_addr_1 = 0;
    uint32_t r21_addr_2 = 0;
    uint32_t r21_addr_3 = 0;
    uint32_t r21_addr_4 = 0;
    uint32_t r21_addr_5 = 0;
    uint32_t r21_addr_6 = 0;
    uint32_t r22_addr_0 = 0;
    uint32_t r22_addr_1 = 0;
    uint32_t r22_addr_2 = 0;
    uint32_t r22_addr_3 = 0;
    uint32_t r22_addr_4 = 0;
    uint32_t r22_addr_5 = 0;
    uint32_t r22_addr_6 = 0;
    uint32_t r24_addr_0 = 0;
    uint32_t r24_addr_1 = 0;
    uint32_t r24_addr_2 = 0;
    uint32_t r24_addr_3 = 0;
    uint32_t r24_addr_4 = 0;
    uint32_t r24_addr_5 = 0;
    uint32_t r26_addr_0 = 0;
    uint32_t r26_addr_1 = 0;
    uint32_t r26_addr_2 = 0;
    uint32_t r26_addr_3 = 0;
    uint32_t r26_addr_4 = 0;
    uint32_t r26_addr_5 = 0;
    uint32_t r26_addr_6 = 0;
    uint32_t r26_addr_7 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r29_addr_4 = 0;
    uint32_t r29_addr_5 = 0;
    uint32_t r29_addr_6 = 0;
    uint32_t r29_addr_7 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_10 = 0;
    uint32_t r3_psq_tmp_11 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_8 = 0;
    uint32_t r3_psq_tmp_9 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_10 = 0;
    uint32_t r4_psq_tmp_11 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;
    uint32_t r4_psq_tmp_7 = 0;
    uint32_t r4_psq_tmp_8 = 0;
    uint32_t r4_psq_tmp_9 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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
    uint32_t r10 = ctx->gpr[10];
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
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80292A40;

loc_80292A40:
{
    MemoryInline::FlatWriteRam32((r1 + -288), r1);
    r1 = (r1 + -288);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 292), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 272), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 256), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 240), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    r11 = (r1 + 240);
    // inline leaf 0x80457454 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    // end of inlined leaf 0x80457454
    r15 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r14 = r5;
    r3 = (r1 + 108);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r0 = MemoryInline::FlatRead8((r13 + -17096));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80292A8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80293524;
    }
}

loc_80292A90:
{
}

loc_80292A94:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80292B20;
    }
}

loc_80292A98:
{
    r3 = r15;
    r4 = (r1 + 108);
    r5 = 0;
    r6 = r14;
    ctx->lr = 0x80292AACu;
    if constexpr (KnownRegArgsCpuCall<0x80293568u>(&func_80293568)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80293568_1DBF = func_80293568_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80293568_1DBF);
        r4 = static_cast<uint32_t>(regargs_result_80293568_1DBF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
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
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80293568u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80292AB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80293524;
    }
}

loc_80292AB8:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14192));
    f0.d = MemoryInline::FlatReadFloat32((r15 + 28));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80292AC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80292AF0;
    }
}

loc_80292AC8:
{
    r3 = (r1 + 108);
    ctx->lr = 0x80292AD0u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050F88u>(ctx);
    f1 = ctx->fpr[1];
    f2.d = MemoryInline::FlatReadFloat32((r2 + -14164));
    f0.d = MemoryInline::FlatReadFloat32((r15 + 28));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80292AE0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80292AF0;
    }
}

loc_80292AE4:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    r3 = (r1 + 108);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051454u>(ctx);
}

loc_80292AF0:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r1 + 108);
    ctx->lr = 0x80292AFCu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r5 = 0;
    r4 = MemoryInline::FlatRead8((r13 + -17095));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r3 = 0x806B0000u;
    r3 = (r3 + -7960);
    r3_addr_1 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_1, static_cast<uint8_t>(r5));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r13 + -17095), static_cast<uint8_t>(r0));
    goto loc_80293524;
}

loc_80292B20:
{
    r3 = (r1 + 120);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 132);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 144);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 156);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r16 = 0;
    r7 = 0;
    r18 = 0;
    r17 = 0;
    r0 = MemoryInline::FlatRead8((r13 + -17096));
    r3 = 0x806B0000u;
    r6 = (r3 + -6920);
    r3 = (r1 + 84);
    r5 = (r1 + 96);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    ctr = r0;
}

loc_80292B70:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80292BBC;
    }
}

loc_80292B74:
{
    r0 = MemoryInline::FlatRead8(r6);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80292B80:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80292B9C;
    }
}

loc_80292B84:
{
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r0 = r18;
    r18 = (r18 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r5_addr_2 = (r5 + r0);
    MemoryInline::FlatWrite8(r5_addr_2, static_cast<uint8_t>(r4));
    goto loc_80292BB0;
}

loc_80292B9C:
{
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r0 = r17;
    r17 = (r17 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3_addr_3 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_3, static_cast<uint8_t>(r4));
}

loc_80292BB0:
{
    r6 = (r6 + 1);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80292B74;
    }
}

loc_80292BBC:
{
    r29 = 0;
    r27 = (r1 + 96);
    r25 = 1;
    r3 = 0x806B0000u;
    r26 = (r3 + -7944);
    r24 = (r13 + -27568);
    r23 = 2;
    r22 = (r1 + 72);
    r21 = (r1 + 60);
    f29.d = MemoryInline::FlatReadFloat32((r2 + -14192));
    f30.d = MemoryInline::FlatReadFloat32((r2 + -14160));
    f31.d = MemoryInline::FlatReadFloat32((r2 + -14184));
    r20 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    r31 = (static_cast<int32_t>(static_cast<int8_t>(r18)));
    r19 = 3;
    goto loc_80292E74;
}

loc_80292BFC:
{
    r30 = 0;
    r28 = (r1 + 84);
    goto loc_80292E64;
}

loc_80292C08:
{
    r5 = 0;
    r4 = (r1 + 60);
    r0 = MemoryInline::FlatRead8(r28);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r16)));
    ctr = r0;
}

loc_80292C24:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80292C48;
    }
}

loc_80292C28:
{
    r0 = MemoryInline::FlatRead8(r4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80292C34:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80292C40;
    }
}

loc_80292C38:
{
    r5 = 1;
    goto loc_80292C48;
}

loc_80292C40:
{
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80292C28;
    }
}

loc_80292C48:
{
}

loc_80292C4C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(1))) {
        goto loc_80292E5C;
    }
}

loc_80292C50:
{
    r3 = MemoryInline::FlatRead8(r28);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (r0 * 60);
    r4 = (r26 + r0);
    r0 = MemoryInline::FlatRead8(r27);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 60);
    r5 = (r26 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 44));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80292C7C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80292CB4;
    }
}

loc_80292C80:
{
    f1.d = MemoryInline::FlatReadFloat32((r5 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 48));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80292C8C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80292CB4;
    }
}

loc_80292C90:
{
    f1.d = MemoryInline::FlatReadFloat32((r5 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 52));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80292C9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80292CB4;
    }
}

loc_80292CA0:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r16)));
    r22_addr_3 = (r22 + r0);
    MemoryInline::FlatWrite8(r22_addr_3, static_cast<uint8_t>(r25));
    r16 = (r16 + 1);
    r21_addr_3 = (r21 + r0);
    MemoryInline::FlatWrite8(r21_addr_3, static_cast<uint8_t>(r3));
    goto loc_80292E5C;
}

loc_80292CB4:
{
    r3 = (r1 + 48);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r0 = MemoryInline::FlatRead8(r27);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 60);
    r3 = (r26 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 48));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80292CD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80292E5C;
    }
}

loc_80292CD8:
{
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_80292CDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80292E5C;
    }
}

loc_80292CE0:
{
    r0 = MemoryInline::FlatRead8(r28);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 60);
    r4 = (r26 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 48));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80292CF8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80292E5C;
    }
}

loc_80292CFC:
{
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_80292D00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80292E5C;
    }
}

loc_80292D04:
{
    r7 = 0;
    r5 = (r3 + 8);
    r3 = r5;
    r6 = 0;
    ctr = r19;
}

loc_80292D18:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f3.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_80292D2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80292D5C;
    }
}

loc_80292D30:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80292D38:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80292D5C;
    }
}

loc_80292D3C:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80292D44:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80292D5C;
    }
}

loc_80292D48:
{
    r0 = 0;
    r0 = PPC_Slw(static_cast<uint32_t>(r25), static_cast<uint32_t>(r0));
    r0 = (r0 & 255);
    r7 = (r7 + r0);
    goto loc_80292DC8;
}

loc_80292D5C:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 20));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_80292D64:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80292D94;
    }
}

loc_80292D68:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 24));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80292D70:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80292D94;
    }
}

loc_80292D74:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 28));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80292D7C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80292D94;
    }
}

loc_80292D80:
{
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r25), static_cast<uint32_t>(r0));
    r0 = (r0 & 255);
    r7 = (r7 + r0);
    goto loc_80292DC8;
}

loc_80292D94:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 32));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_80292D9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80292DC8;
    }
}

loc_80292DA0:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 36));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80292DA8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80292DC8;
    }
}

loc_80292DAC:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 40));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80292DB4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80292DC8;
    }
}

loc_80292DB8:
{
    r0 = 2;
    r0 = PPC_Slw(static_cast<uint32_t>(r25), static_cast<uint32_t>(r0));
    r0 = (r0 & 255);
    r7 = (r7 + r0);
}

loc_80292DC8:
{
    r6 = (r6 + 1);
    r3 = (r3 + 12);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80292D18;
    }
}

loc_80292DD4:
{
    r0 = (r7 & 255);
    r24_addr_3 = (r24 + r0);
    r0 = MemoryInline::FlatRead8(r24_addr_3);
}

loc_80292DE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80292DF8;
    }
}

loc_80292DE4:
{
}

loc_80292DE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80292E00;
    }
}

loc_80292DEC:
{
}

loc_80292DF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80292E08;
    }
}

loc_80292DF4:
{
    goto loc_80292E5C;
}

loc_80292DF8:
{
    r4 = (r4 + 8);
    goto loc_80292E0C;
}

loc_80292E00:
{
    r4 = (r4 + 20);
    goto loc_80292E0C;
}

loc_80292E08:
{
    r4 = (r4 + 32);
}

loc_80292E0C:
{
    r3 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 48);
    r4 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 48);
    r0 = MemoryInline::FlatRead8(r27);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 60);
    r4 = (r26 + r0);
    r4 = (r4 + 44);
    // inline leaf 0x80052278 (8 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_3 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_3));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f2.d, f1.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80052278
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f29.d);
}

loc_80292E40:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        f0.d = PPC_PsToScalarInline(f0.d);
        goto loc_80292E5C;
    }
}

loc_80292E48:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r16)));
    r22_addr_4 = (r22 + r3);
    MemoryInline::FlatWrite8(r22_addr_4, static_cast<uint8_t>(r23));
    r0 = MemoryInline::FlatRead8(r28);
    r16 = (r16 + 1);
    r21_addr_4 = (r21 + r3);
    MemoryInline::FlatWrite8(r21_addr_4, static_cast<uint8_t>(r0));
    f0.d = PPC_PsToScalarInline(f0.d);
}

loc_80292E5C:
{
    r28 = (r28 + 1);
    r30 = (r30 + 1);
}

loc_80292E64:
{
}

loc_80292E68:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r20))) {
        goto loc_80292C08;
    }
}

loc_80292E6C:
{
    r27 = (r27 + 1);
    r29 = (r29 + 1);
}

loc_80292E74:
{
}

loc_80292E78:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r31))) {
        goto loc_80292BFC;
    }
}

loc_80292E7C:
{
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
}

loc_80292E84:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(2))) {
        goto loc_80292FE8;
    }
}

loc_80292E88:
{
    r7 = 0;
    r3 = (r1 + 84);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r16)));
    r4 = (r1 + 72);
    r4 = (r4 + r0);
    r0 = (r5 + -1);
    r19 = 3;
    r10 = (r1 + 60);
    r5 = 0x806B0000u;
    r20 = (r5 + -7224);
    goto loc_80292FE0;
}

loc_80292EB4:
{
    r9 = 0;
    r8 = (r1 + 60);
    r5 = MemoryInline::FlatRead8(r3);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r16)));
    ctr = r5;
}

loc_80292ED0:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_80292EF4;
    }
}

loc_80292ED4:
{
    r5 = MemoryInline::FlatRead8(r8);
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_80292EE0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r5))) {
        goto loc_80292EEC;
    }
}

loc_80292EE4:
{
    r9 = 1;
    goto loc_80292EF4;
}

loc_80292EEC:
{
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80292ED4;
    }
}

loc_80292EF4:
{
}

loc_80292EF8:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(1))) {
        goto loc_80292FD8;
    }
}

loc_80292EFC:
{
    r8 = 1;
    r5 = (r1 + 85);
    r6 = MemoryInline::FlatRead8(r3);
    r21 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r9 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    goto loc_80292FD0;
}

loc_80292F14:
{
    r23 = MemoryInline::FlatRead8(r5);
    r12 = (static_cast<int32_t>(static_cast<int8_t>(r23)));
}

loc_80292F20:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(r12))) {
        goto loc_80292FC8;
    }
}

loc_80292F24:
{
    r24 = 0;
    r22 = (r1 + 60);
    r11 = (static_cast<int32_t>(static_cast<int8_t>(r16)));
    ctr = r11;
}

loc_80292F38:
{
    if ((static_cast<int32_t>(r11) <= static_cast<int32_t>(0))) {
        goto loc_80292F5C;
    }
}

loc_80292F3C:
{
    r11 = MemoryInline::FlatRead8(r22);
    r11 = (static_cast<int32_t>(static_cast<int8_t>(r11)));
}

loc_80292F48:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(r11))) {
        goto loc_80292F54;
    }
}

loc_80292F4C:
{
    r24 = 1;
    goto loc_80292F5C;
}

loc_80292F54:
{
    r22 = (r22 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80292F3C;
    }
}

loc_80292F5C:
{
}

loc_80292F60:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(1))) {
        goto loc_80292FC8;
    }
}

loc_80292F64:
{
    r11 = (static_cast<int32_t>(static_cast<int8_t>(r23)));
    r11 = (r11 * 12);
    r12 = (r20 + r11);
    r11 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r11 = (r11 * 12);
    r11 = (r20 + r11);
    f1.d = MemoryInline::FlatReadFloat32(r11);
    f0.d = MemoryInline::FlatReadFloat32(r12);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80292F88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80292FC8;
    }
}

loc_80292F8C:
{
    f1.d = MemoryInline::FlatReadFloat32((r11 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r12 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80292F98:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80292FC8;
    }
}

loc_80292F9C:
{
    f1.d = MemoryInline::FlatReadFloat32((r11 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r12 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80292FA8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80292FC8;
    }
}

loc_80292FAC:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r19));
    r4 = (r4 + 1);
    r12 = MemoryInline::FlatRead8(r5);
    r11 = r16;
    r16 = (r16 + 1);
    r11 = (static_cast<int32_t>(static_cast<int8_t>(r11)));
    r10_addr_3 = (r10 + r11);
    MemoryInline::FlatWrite8(r10_addr_3, static_cast<uint8_t>(r12));
}

loc_80292FC8:
{
    r5 = (r5 + 1);
    r8 = (r8 + 1);
}

loc_80292FD0:
{
}

loc_80292FD4:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(r9))) {
        goto loc_80292F14;
    }
}

loc_80292FD8:
{
    r3 = (r3 + 1);
    r7 = (r7 + 1);
}

loc_80292FE0:
{
}

loc_80292FE4:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r0))) {
        goto loc_80292EB4;
    }
}

loc_80292FE8:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r16)));
}

loc_80292FF0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8029324C;
    }
}

loc_80292FF4:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
}

loc_80292FFC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r3))) {
        goto loc_8029324C;
    }
}

loc_80293000:
{
    r20 = 0;
    r24 = (r1 + 72);
    r23 = (r1 + 60);
    r22 = (r24 + r3);
    r25 = 1;
    r26 = (r13 + -27568);
    r3 = 0x806B0000u;
    r27 = (r3 + -7944);
    r28 = 2;
    r29 = r23;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -14192));
    f30.d = MemoryInline::FlatReadFloat32((r2 + -14160));
    f29.d = MemoryInline::FlatReadFloat32((r2 + -14184));
    r31 = 3;
    goto loc_80293240;
}

loc_8029303C:
{
    r0 = MemoryInline::FlatRead8(r24);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80293048:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80293234;
    }
}

loc_8029304C:
{
    r19 = 0;
    r21 = (r1 + 84);
    r30 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    goto loc_8029322C;
}

loc_8029305C:
{
    r0 = MemoryInline::FlatRead8(r21);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8(r23);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80293070:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_80293224;
    }
}

loc_80293074:
{
    r3 = (r1 + 36);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r0 = MemoryInline::FlatRead8(r23);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 60);
    r3 = (r27 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 48));
    SetCRFloatResident(cr, 0, f29.d, f0.d);
}

loc_80293094:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80293224;
    }
}

loc_80293098:
{
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_8029309C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80293224;
    }
}

loc_802930A0:
{
    r0 = MemoryInline::FlatRead8(r21);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 60);
    r4 = (r27 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 48));
    SetCRFloatResident(cr, 0, f29.d, f0.d);
}

loc_802930B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80293224;
    }
}

loc_802930BC:
{
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_802930C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80293224;
    }
}

loc_802930C4:
{
    r7 = 0;
    r5 = (r3 + 8);
    r3 = r5;
    r6 = 0;
    ctr = r31;
}

loc_802930D8:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f3.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_802930EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8029311C;
    }
}

loc_802930F0:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_802930F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8029311C;
    }
}

loc_802930FC:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80293104:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8029311C;
    }
}

loc_80293108:
{
    r0 = 0;
    r0 = PPC_Slw(static_cast<uint32_t>(r25), static_cast<uint32_t>(r0));
    r0 = (r0 & 255);
    r7 = (r7 + r0);
    goto loc_80293188;
}

loc_8029311C:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 20));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_80293124:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80293154;
    }
}

loc_80293128:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 24));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80293130:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80293154;
    }
}

loc_80293134:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 28));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8029313C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80293154;
    }
}

loc_80293140:
{
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r25), static_cast<uint32_t>(r0));
    r0 = (r0 & 255);
    r7 = (r7 + r0);
    goto loc_80293188;
}

loc_80293154:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 32));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_8029315C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80293188;
    }
}

loc_80293160:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 36));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80293168:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80293188;
    }
}

loc_8029316C:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 40));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80293174:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80293188;
    }
}

loc_80293178:
{
    r0 = 2;
    r0 = PPC_Slw(static_cast<uint32_t>(r25), static_cast<uint32_t>(r0));
    r0 = (r0 & 255);
    r7 = (r7 + r0);
}

loc_80293188:
{
    r6 = (r6 + 1);
    r3 = (r3 + 12);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802930D8;
    }
}

loc_80293194:
{
    r0 = (r7 & 255);
    r26_addr_3 = (r26 + r0);
    r0 = MemoryInline::FlatRead8(r26_addr_3);
}

loc_802931A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802931B8;
    }
}

loc_802931A4:
{
}

loc_802931A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802931C0;
    }
}

loc_802931AC:
{
}

loc_802931B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802931C8;
    }
}

loc_802931B4:
{
    goto loc_80293224;
}

loc_802931B8:
{
    r4 = (r4 + 8);
    goto loc_802931CC;
}

loc_802931C0:
{
    r4 = (r4 + 20);
    goto loc_802931CC;
}

loc_802931C8:
{
    r4 = (r4 + 32);
}

loc_802931CC:
{
    r3 = (r1 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 36);
    r4 = (r1 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 36);
    r0 = MemoryInline::FlatRead8(r23);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 60);
    r4 = (r27 + r0);
    r4 = (r4 + 44);
    // inline leaf 0x80052278 (8 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_7 = (r3 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_7));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_7 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_7));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f2.d, f1.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80052278
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f31.d);
}

loc_80293200:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        f0.d = PPC_PsToScalarInline(f0.d);
        goto loc_80293224;
    }
}

loc_80293208:
{
    MemoryInline::FlatWrite8(r22, static_cast<uint8_t>(r28));
    r22 = (r22 + 1);
    r3 = MemoryInline::FlatRead8(r21);
    r0 = r16;
    r16 = (r16 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r29_addr_3 = (r29 + r0);
    MemoryInline::FlatWrite8(r29_addr_3, static_cast<uint8_t>(r3));
    f0.d = PPC_PsToScalarInline(f0.d);
}

loc_80293224:
{
    r21 = (r21 + 1);
    r19 = (r19 + 1);
}

loc_8029322C:
{
}

loc_80293230:
{
    if ((static_cast<int32_t>(r19) < static_cast<int32_t>(r30))) {
        goto loc_8029305C;
    }
}

loc_80293234:
{
    r24 = (r24 + 1);
    r23 = (r23 + 1);
    r20 = (r20 + 1);
}

loc_80293240:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r16)));
}

loc_80293248:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r20))) {
        goto loc_8029303C;
    }
}

loc_8029324C:
{
    r3 = (r1 + 120);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14192));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 132);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14192));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 144);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14192));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 156);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14192));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 44u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r21 = 0;
    r20 = (r1 + 96);
    r3 = 0x806B0000u;
    r19 = (r3 + -7960);
    r18 = (static_cast<int32_t>(static_cast<int8_t>(r18)));
    goto loc_80293304;
}

loc_802932B4:
{
    r22 = MemoryInline::FlatRead8(r20);
    r3 = r15;
    r4 = (r1 + 108);
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r22)));
    r6 = r14;
    ctx->lr = 0x802932CCu;
    if constexpr (KnownRegArgsCpuCall<0x80293568u>(&func_80293568)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80293568_A075 = func_80293568_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80293568_A075);
        r4 = static_cast<uint32_t>(regargs_result_80293568_A075 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
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
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80293568u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_802932D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802932FC;
    }
}

loc_802932D8:
{
    r3 = (r1 + 108);
    r4 = (r1 + 120);
    f1.d = MemoryInline::FlatReadFloat32((r15 + 24));
    if constexpr (KnownRegArgsCpuCall<0x80296F3Cu>(&func_80296F3C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        func_80296F3C_ra18_e_0_0(ctx, r3, r4, f1.d, f2.d, f3.d);
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80296F3Cu>(ctx);
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead8((r13 + -17095));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r19_addr_2 = (r19 + r0);
    MemoryInline::FlatWrite8(r19_addr_2, static_cast<uint8_t>(r22));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r13 + -17095), static_cast<uint8_t>(r0));
}

loc_802932FC:
{
    r20 = (r20 + 1);
    r21 = (r21 + 1);
}

loc_80293304:
{
}

loc_80293308:
{
    if ((static_cast<int32_t>(r21) < static_cast<int32_t>(r18))) {
        goto loc_802932B4;
    }
}

loc_8029330C:
{
    r18 = 0;
    r21 = (r1 + 84);
    r20 = (static_cast<int32_t>(static_cast<int8_t>(r16)));
    r3 = 0x806B0000u;
    r19 = (r3 + -7960);
    r16 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    goto loc_802933B8;
}

loc_80293328:
{
    r17 = MemoryInline::FlatRead8(r21);
    r5 = 0;
    r4 = (r1 + 60);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    ctr = r20;
}

loc_80293340:
{
    if ((static_cast<int32_t>(r20) <= static_cast<int32_t>(0))) {
        goto loc_80293364;
    }
}

loc_80293344:
{
    r3 = MemoryInline::FlatRead8(r4);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80293350:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_8029335C;
    }
}

loc_80293354:
{
    r5 = 1;
    goto loc_80293364;
}

loc_8029335C:
{
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80293344;
    }
}

loc_80293364:
{
}

loc_80293368:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_802933B0;
    }
}

loc_8029336C:
{
    r3 = r15;
    r4 = (r1 + 108);
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r17)));
    r6 = r14;
    ctx->lr = 0x80293380u;
    if constexpr (KnownRegArgsCpuCall<0x80293568u>(&func_80293568)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80293568_B6E7 = func_80293568_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80293568_B6E7);
        r4 = static_cast<uint32_t>(regargs_result_80293568_B6E7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
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
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80293568u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80293388:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802933B0;
    }
}

loc_8029338C:
{
    r3 = (r1 + 108);
    r4 = (r1 + 120);
    f1.d = MemoryInline::FlatReadFloat32((r15 + 24));
    if constexpr (KnownRegArgsCpuCall<0x80296F3Cu>(&func_80296F3C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        func_80296F3C_ra18_e_0_0(ctx, r3, r4, f1.d, f2.d, f3.d);
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80296F3Cu>(ctx);
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead8((r13 + -17095));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r19_addr_5 = (r19 + r0);
    MemoryInline::FlatWrite8(r19_addr_5, static_cast<uint8_t>(r17));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r13 + -17095), static_cast<uint8_t>(r0));
}

loc_802933B0:
{
    r21 = (r21 + 1);
    r18 = (r18 + 1);
}

loc_802933B8:
{
}

loc_802933BC:
{
    if ((static_cast<int32_t>(r18) < static_cast<int32_t>(r16))) {
        goto loc_80293328;
    }
}

loc_802933C0:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -14192));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 132));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_802933CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80293410;
    }
}

loc_802933D0:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 120));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_802933D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80293400;
    }
}

loc_802933DC:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14176));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 144));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 156));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f0.d);
    goto loc_80293420;
}

loc_80293400:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 156));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f0.d);
    goto loc_80293420;
}

loc_80293410:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 120));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 144));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f0.d);
}

loc_80293420:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -14192));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 136));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8029342C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80293470;
    }
}

loc_80293430:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 124));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80293438:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80293460;
    }
}

loc_8029343C:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14176));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 148));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 160));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f0.d);
    goto loc_80293480;
}

loc_80293460:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 160));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f0.d);
    goto loc_80293480;
}

loc_80293470:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 124));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 148));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f0.d);
}

loc_80293480:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -14192));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 140));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8029348C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802934D0;
    }
}

loc_80293490:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 128));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80293498:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802934C0;
    }
}

loc_8029349C:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14176));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 152));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 164));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f0.d);
    goto loc_802934E0;
}

loc_802934C0:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 164));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f0.d);
    goto loc_802934E0;
}

loc_802934D0:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 128));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 152));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f0.d);
}

loc_802934E0:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14192));
    f0.d = MemoryInline::FlatReadFloat32((r15 + 28));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802934EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80293518;
    }
}

loc_802934F0:
{
    r3 = (r1 + 108);
    ctx->lr = 0x802934F8u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050F88u>(ctx);
    f1 = ctx->fpr[1];
    f2.d = MemoryInline::FlatReadFloat32((r2 + -14164));
    f0.d = MemoryInline::FlatReadFloat32((r15 + 28));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80293508:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80293518;
    }
}

loc_8029350C:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    r3 = (r1 + 108);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051454u>(ctx);
}

loc_80293518:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r1 + 108);
    ctx->lr = 0x80293524u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
}

loc_80293524:
{
    r3 = MemoryInline::FlatRead8((r13 + -17096));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = 280;
    addr_psqx_80293530_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80293530_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 272));
    r0 = 264;
    addr_psqx_8029353C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8029353C_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 256));
    r0 = 248;
    addr_psqx_80293548_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80293548_loc_0));
    f29.d = MemoryInline::FlatReadFloat64((r1 + 240));
    r11 = (r1 + 240);
    // inline leaf 0x804574A0 (19 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    // end of inlined leaf 0x804574A0
    r0 = MemoryInline::FlatRead32((r1 + 292));
    ctx->lr = r0;
    r1 = (r1 + 288);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80292A40(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80292A40_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80292A40 func_80292A40 preserves=true fpr_mask=0x00000000
