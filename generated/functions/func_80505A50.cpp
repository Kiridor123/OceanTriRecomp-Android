#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80457338(CpuContext* ctx);
extern "C" uint64_t func_80457338_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80503BF8(CpuContext* ctx);
extern "C" uint64_t func_80503BF8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80504814(CpuContext* ctx);
extern "C" uint64_t func_80504814_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80504874(CpuContext* ctx);
extern "C" uint64_t func_80504874_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80505138(CpuContext* ctx);
extern "C" uint32_t func_80505138_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_805052A8(CpuContext* ctx);
extern "C" uint64_t func_805052A8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_805064DC(CpuContext* ctx);
extern "C" uint64_t func_805064DC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80505A50_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r1_psq_tmp_7 = 0;
    uint32_t r1_psq_tmp_8 = 0;
    uint32_t r1_psq_tmp_9 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t stackword67 = 0;
    uint32_t stackword68 = 0;
    uint32_t stackword70 = 0;
    uint32_t stackword71 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;
    uint8_t* guest_range_9 = nullptr;

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

    MKW_GUEST_ENTER(0x80505A50u);
    goto loc_80505A50;

loc_80505A50:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -656), 0, 664u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -656), r1);
    r1 = (r1 + -656);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 660u, (r1 + 660), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 640u, (r1 + 640), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 648);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 624u, (r1 + 624), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 632);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 608u, (r1 + 608), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 616);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 592u, (r1 + 592), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 600);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 576u, (r1 + 576), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 584);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 560u, (r1 + 560), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 568);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 544u, (r1 + 544), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 552);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 528u, (r1 + 528), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 536);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 512u, (r1 + 512), f23.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 520);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 496u, (r1 + 496), f22.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_9 = (r1 + 504);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_9, PPC_PsFromScalarInline(f22.d));
    r11 = (r1 + 496);
    // inline leaf 0x80457470 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    // end of inlined leaf 0x80457470
    f1.d = MemoryInline::FlatReadFloat32((r3 + 44));
    r22 = r4;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1424));
    r23 = r5;
    MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r1 + 20), f1.d);
    r21 = r3;
    r24 = r6;
    f28.d = MemoryInline::FlatReadFloat32((r3 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r1 + 16), f28.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 76));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80505AE0:
{
    r29 = cr;
    r27 = r22;
    r29_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(1));
    r29 = (r29_rot_0 & 1);
    r26 = r22;
    r6 = r22;
    r7 = r23;
    r4 = (r1 + 20);
    r5 = (r1 + 16);
    r28 = 0;
    ctx->lr = 0x80505B08u;
    if constexpr (KnownRegArgsCpuCall<0x805064DCu>(&func_805064DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->fpr[0] = f0;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_805064DC_22AA = func_805064DC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_805064DC_22AA);
        r4 = static_cast<uint32_t>(regargs_result_805064DC_22AA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805064DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r21 + 48));
    r0 = 0;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f25.d = f1.d;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    f26.d = static_cast<double>(PpcForceSingleValueInline(f28.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    r3 = (r1 + 72);
    MemoryInline::FlatWriteRam32((r1 + 120), r0);
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    MemoryInline::FlatWriteRam32((r1 + 108), r21);
    MemoryInline::FlatWriteRam32((r1 + 112), r22);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f0.d);
    r4 = MemoryInline::FlatRead32((r21 + 72));
    if constexpr (KnownRegArgsCpuCall<0x80505138u>(&func_80505138)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        const auto regargs_result_80505138_3117 = func_80505138_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_80505138_3117;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80505138u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWriteRam32((r1 + 72), r22);
    r3 = (r1 + 72);
    r12 = (r1 + 76);
    ctx->lr = 0x80505B58u;
    if constexpr (KnownRegArgsCpuCall<0x80457338u>(&func_80457338)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80457338_3504 = func_80457338_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80457338_3504);
        r4 = static_cast<uint32_t>(regargs_result_80457338_3504 >> 32);
        r0 = ctx->gpr[0];
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        InvokeDirectCpu<0x80457338u>(ctx);
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    // nop
    f29.d = MemoryInline::FlatReadFloat32((r2 + -1420));
    r25 = r3;
    f30.d = MemoryInline::FlatReadFloat32((r2 + -1408));
    r30 = (r1 + 328);
    f31.d = MemoryInline::FlatReadFloat64((r2 + -1416));
    r31 = 1127219200;
    goto loc_805063E4;
}

loc_80505B78:
{
    r5 = (r25 & 65535);
}

loc_80505B80:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(32))) {
        goto loc_805062BC;
    }
}

loc_80505B84:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r28));
}

loc_80505B8C:
{
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r6 = (r6_rot_2 & 134217727);
    MemoryInline::FlatWriteRam32((r1 + 112), r7);
    MemoryInline::FlatWriteRam32((r1 + 124), r6);
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80505DEC;
    }
}

loc_80505B9C:
{
}

loc_80505BA0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(10))) {
        goto loc_80505DEC;
    }
}

loc_80505BA4:
{
}

loc_80505BA8:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(r26))) {
        goto loc_80505DEC;
    }
}

loc_80505BAC:
{
    r4 = MemoryInline::FlatRead32((r1 + 108));
    r3 = MemoryInline::FlatRead32((r1 + 116));
    r0 = MemoryInline::FlatRead32((r1 + 120));
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 56), 0, 372u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_3, 32u, (r1 + 88), r4);
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r1 + 92), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r1 + 96), r3);
        MemoryInline::WriteResolved32(guest_range_3, 44u, (r1 + 100), r0);
    }
    MemoryInline::WriteResolved32(guest_range_3, 48u, (r1 + 104), r6);
    guest_range_4 = MemoryInline::ResolveRangeHost(r21, 0, 100u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_4, 0u, r21);
    MemoryInline::WriteResolved8(guest_range_3, 272u, (r1 + 328), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 1u, (r21 + 1));
    MemoryInline::WriteResolved8(guest_range_3, 273u, (r1 + 329), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 2u, (r21 + 2));
    MemoryInline::WriteResolved8(guest_range_3, 274u, (r1 + 330), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 3u, (r21 + 3));
    MemoryInline::WriteResolved8(guest_range_3, 275u, (r1 + 331), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 4u, (r21 + 4));
    MemoryInline::WriteResolved8(guest_range_3, 276u, (r1 + 332), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 5u, (r21 + 5));
    MemoryInline::WriteResolved8(guest_range_3, 277u, (r1 + 333), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 6u, (r21 + 6));
    MemoryInline::WriteResolved8(guest_range_3, 278u, (r1 + 334), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 7u, (r21 + 7));
    MemoryInline::WriteResolved8(guest_range_3, 279u, (r1 + 335), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 8u, (r21 + 8));
    MemoryInline::WriteResolved8(guest_range_3, 280u, (r1 + 336), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 9u, (r21 + 9));
    MemoryInline::WriteResolved8(guest_range_3, 281u, (r1 + 337), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 10u, (r21 + 10));
    MemoryInline::WriteResolved8(guest_range_3, 282u, (r1 + 338), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 11u, (r21 + 11));
    MemoryInline::WriteResolved8(guest_range_3, 283u, (r1 + 339), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 12u, (r21 + 12));
    MemoryInline::WriteResolved8(guest_range_3, 284u, (r1 + 340), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 13u, (r21 + 13));
    MemoryInline::WriteResolved8(guest_range_3, 285u, (r1 + 341), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 14u, (r21 + 14));
    MemoryInline::WriteResolved8(guest_range_3, 286u, (r1 + 342), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 15u, (r21 + 15));
    MemoryInline::WriteResolved8(guest_range_3, 287u, (r1 + 343), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 16u, (r21 + 16));
    MemoryInline::WriteResolved8(guest_range_3, 288u, (r1 + 344), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 17u, (r21 + 17));
    MemoryInline::WriteResolved8(guest_range_3, 289u, (r1 + 345), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 18u, (r21 + 18));
    MemoryInline::WriteResolved8(guest_range_3, 290u, (r1 + 346), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 19u, (r21 + 19));
    MemoryInline::WriteResolved8(guest_range_3, 291u, (r1 + 347), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 20u, (r21 + 20));
    MemoryInline::WriteResolved8(guest_range_3, 292u, (r1 + 348), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 21u, (r21 + 21));
    MemoryInline::WriteResolved8(guest_range_3, 293u, (r1 + 349), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 22u, (r21 + 22));
    MemoryInline::WriteResolved8(guest_range_3, 294u, (r1 + 350), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 23u, (r21 + 23));
    MemoryInline::WriteResolved8(guest_range_3, 295u, (r1 + 351), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 24u, (r21 + 24));
    MemoryInline::WriteResolved8(guest_range_3, 296u, (r1 + 352), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 25u, (r21 + 25));
    MemoryInline::WriteResolved8(guest_range_3, 297u, (r1 + 353), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 26u, (r21 + 26));
    MemoryInline::WriteResolved8(guest_range_3, 298u, (r1 + 354), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 27u, (r21 + 27));
    MemoryInline::WriteResolved8(guest_range_3, 299u, (r1 + 355), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 28u, (r21 + 28));
    MemoryInline::WriteResolved8(guest_range_3, 300u, (r1 + 356), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 29u, (r21 + 29));
    MemoryInline::WriteResolved8(guest_range_3, 301u, (r1 + 357), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 30u, (r21 + 30));
    MemoryInline::WriteResolved8(guest_range_3, 302u, (r1 + 358), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 31u, (r21 + 31));
    MemoryInline::WriteResolved8(guest_range_3, 303u, (r1 + 359), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r21 + 32));
    MemoryInline::WriteResolved32(guest_range_3, 304u, (r1 + 360), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 36u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r21 + 36));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r21 + 40));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 308u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 308u, (r1 + 364), r3);
        MemoryInline::WriteResolved32(guest_range_3, 312u, (r1 + 368), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 44u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 44u, (r21 + 44));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 48u, (r21 + 48));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 316u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 316u, (r1 + 372), r3);
        MemoryInline::WriteResolved32(guest_range_3, 320u, (r1 + 376), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_4, 52u, (r21 + 52));
    MemoryInline::WriteResolved32(guest_range_3, 324u, (r1 + 380), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 56u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 56u, (r21 + 56));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 60u, (r21 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 328u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 328u, (r1 + 384), r3);
        MemoryInline::WriteResolved32(guest_range_3, 332u, (r1 + 388), r0);
    }
    r0 = MemoryInline::ReadResolved8(guest_range_4, 64u, (r21 + 64));
    MemoryInline::WriteResolved8(guest_range_3, 336u, (r1 + 392), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 65u, (r21 + 65));
    MemoryInline::WriteResolved8(guest_range_3, 337u, (r1 + 393), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 66u, (r21 + 66));
    MemoryInline::WriteResolved8(guest_range_3, 338u, (r1 + 394), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 67u, (r21 + 67));
    MemoryInline::WriteResolved8(guest_range_3, 339u, (r1 + 395), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 68u, (r21 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 340u, (r1 + 396), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 72u, (r21 + 72));
    r4 = (r1 + 56);
    r6 = (r1 + 88);
    MemoryInline::WriteResolved32(guest_range_3, 344u, (r1 + 400), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 76u, (r21 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 348u, (r1 + 404), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 80u, (r21 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 352u, (r1 + 408), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 84u, (r21 + 84));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 356u, (r1 + 412), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 88u, (r21 + 88));
    MemoryInline::WriteResolved32(guest_range_3, 360u, (r1 + 416), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 92u, (r21 + 92));
    MemoryInline::WriteResolved32(guest_range_3, 364u, (r1 + 420), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 96u, (r21 + 96));
    MemoryInline::WriteResolved32(guest_range_3, 368u, (r1 + 424), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f29.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f29.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, (r1 + 56), f29.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r1 + 60), f29.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f29.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f29.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r1 + 64), f29.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r1 + 68), f29.d);
    }
    MemoryInline::WriteResolved32(guest_range_3, 32u, (r1 + 88), r30);
    r3 = MemoryInline::ReadResolved32(guest_range_4, 96u, (r21 + 96));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80505D9Cu;
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
    f1.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f29.d);
}

loc_80505DAC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80505DE0;
    }
}

loc_80505DB0:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 372));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f0.d = MemoryInline::FlatReadFloat32((r21 + 76));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80505DC4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80505DE0;
    }
}

loc_80505DC8:
{
    MemoryInline::FlatWriteRam32((r1 + 72), r27);
    r3 = r30;
    r25 = 10;
    r4 = 0;
    ctx->lr = 0x80505DDCu;
    if constexpr (KnownRegArgsCpuCall<0x80503BF8u>(&func_80503BF8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        const auto regargs_result_80503BF8_7624 = func_80503BF8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80503BF8_7624);
        r4 = static_cast<uint32_t>(regargs_result_80503BF8_7624 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        InvokeDirectCpu<0x80503BF8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
    }
    goto loc_805063E4;
}

loc_80505DE0:
{
    r3 = (r1 + 328);
    r4 = 0;
    ctx->lr = 0x80505DECu;
    if constexpr (KnownRegArgsCpuCall<0x80503BF8u>(&func_80503BF8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        const auto regargs_result_80503BF8_82A2 = func_80503BF8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80503BF8_82A2);
        r4 = static_cast<uint32_t>(regargs_result_80503BF8_82A2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        InvokeDirectCpu<0x80503BF8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
    }
}

loc_80505DEC:
{
    r3 = MemoryInline::FlatRead32((r21 + 96));
    r4 = (r25 & 65535);
    r5 = (r1 + 108);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80505E08u;
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
}

loc_80505E0C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_80506288;
    }
}

loc_80505E10:
{
    r0 = MemoryInline::FlatRead32((r21 + 92));
    r0 = (r0 & 3);
}

loc_80505E1C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80506034;
    }
}

loc_80505E20:
{
    r0 = MemoryInline::FlatRead32((r1 + 112));
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 316u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_5, 28u, (r1 + 40), f29.d);
    MemoryInline::WriteResolved32(guest_range_5, 0u, (r1 + 12), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f29.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f29.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 32u, (r1 + 44), f29.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 36u, (r1 + 48), f29.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_5, 40u, (r1 + 52), f29.d);
    guest_range_6 = MemoryInline::ResolveRangeHost(r21, 0, 100u, true, false);
    r3 = MemoryInline::ReadResolved8(guest_range_6, 0u, r21);
    MemoryInline::WriteResolved8(guest_range_5, 216u, (r1 + 228), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_6, 1u, (r21 + 1));
    MemoryInline::WriteResolved8(guest_range_5, 217u, (r1 + 229), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_6, 2u, (r21 + 2));
    MemoryInline::WriteResolved8(guest_range_5, 218u, (r1 + 230), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_6, 3u, (r21 + 3));
    MemoryInline::WriteResolved8(guest_range_5, 219u, (r1 + 231), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_6, 4u, (r21 + 4));
    MemoryInline::WriteResolved8(guest_range_5, 220u, (r1 + 232), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_6, 5u, (r21 + 5));
    MemoryInline::WriteResolved8(guest_range_5, 221u, (r1 + 233), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_6, 6u, (r21 + 6));
    MemoryInline::WriteResolved8(guest_range_5, 222u, (r1 + 234), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_6, 7u, (r21 + 7));
    MemoryInline::WriteResolved8(guest_range_5, 223u, (r1 + 235), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_6, 8u, (r21 + 8));
    MemoryInline::WriteResolved8(guest_range_5, 224u, (r1 + 236), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_6, 9u, (r21 + 9));
    MemoryInline::WriteResolved8(guest_range_5, 225u, (r1 + 237), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_6, 10u, (r21 + 10));
    MemoryInline::WriteResolved8(guest_range_5, 226u, (r1 + 238), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_6, 11u, (r21 + 11));
    MemoryInline::WriteResolved8(guest_range_5, 227u, (r1 + 239), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_6, 12u, (r21 + 12));
    MemoryInline::WriteResolved8(guest_range_5, 228u, (r1 + 240), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_6, 13u, (r21 + 13));
    MemoryInline::WriteResolved8(guest_range_5, 229u, (r1 + 241), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_6, 14u, (r21 + 14));
    MemoryInline::WriteResolved8(guest_range_5, 230u, (r1 + 242), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_6, 15u, (r21 + 15));
    MemoryInline::WriteResolved8(guest_range_5, 231u, (r1 + 243), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_6, 16u, (r21 + 16));
    MemoryInline::WriteResolved8(guest_range_5, 232u, (r1 + 244), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_6, 17u, (r21 + 17));
    MemoryInline::WriteResolved8(guest_range_5, 233u, (r1 + 245), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_6, 18u, (r21 + 18));
    MemoryInline::WriteResolved8(guest_range_5, 234u, (r1 + 246), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_6, 19u, (r21 + 19));
    MemoryInline::WriteResolved8(guest_range_5, 235u, (r1 + 247), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_6, 20u, (r21 + 20));
    MemoryInline::WriteResolved8(guest_range_5, 236u, (r1 + 248), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_6, 21u, (r21 + 21));
    MemoryInline::WriteResolved8(guest_range_5, 237u, (r1 + 249), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_6, 22u, (r21 + 22));
    MemoryInline::WriteResolved8(guest_range_5, 238u, (r1 + 250), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_6, 23u, (r21 + 23));
    MemoryInline::WriteResolved8(guest_range_5, 239u, (r1 + 251), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_6, 24u, (r21 + 24));
    MemoryInline::WriteResolved8(guest_range_5, 240u, (r1 + 252), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_6, 25u, (r21 + 25));
    MemoryInline::WriteResolved8(guest_range_5, 241u, (r1 + 253), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_6, 26u, (r21 + 26));
    MemoryInline::WriteResolved8(guest_range_5, 242u, (r1 + 254), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_6, 27u, (r21 + 27));
    MemoryInline::WriteResolved8(guest_range_5, 243u, (r1 + 255), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_6, 28u, (r21 + 28));
    MemoryInline::WriteResolved8(guest_range_5, 244u, (r1 + 256), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_6, 29u, (r21 + 29));
    MemoryInline::WriteResolved8(guest_range_5, 245u, (r1 + 257), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_6, 30u, (r21 + 30));
    MemoryInline::WriteResolved8(guest_range_5, 246u, (r1 + 258), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_6, 31u, (r21 + 31));
    MemoryInline::WriteResolved8(guest_range_5, 247u, (r1 + 259), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved32(guest_range_6, 32u, (r21 + 32));
    MemoryInline::WriteResolved32(guest_range_5, 248u, (r1 + 260), r3);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 36u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_6, 36u, (r21 + 36));
            r3 = MemoryInline::ReadResolved32(guest_range_6, 40u, (r21 + 40));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 252u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_5, 252u, (r1 + 264), r4);
        MemoryInline::WriteResolved32(guest_range_5, 256u, (r1 + 268), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 44u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_6, 44u, (r21 + 44));
            r3 = MemoryInline::ReadResolved32(guest_range_6, 48u, (r21 + 48));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 260u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_5, 260u, (r1 + 272), r4);
        MemoryInline::WriteResolved32(guest_range_5, 264u, (r1 + 276), r3);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_6, 52u, (r21 + 52));
    MemoryInline::WriteResolved32(guest_range_5, 268u, (r1 + 280), r3);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 56u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_6, 56u, (r21 + 56));
            r3 = MemoryInline::ReadResolved32(guest_range_6, 60u, (r21 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 272u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_5, 272u, (r1 + 284), r4);
        MemoryInline::WriteResolved32(guest_range_5, 276u, (r1 + 288), r3);
    }
    r3 = MemoryInline::ReadResolved8(guest_range_6, 64u, (r21 + 64));
    MemoryInline::WriteResolved8(guest_range_5, 280u, (r1 + 292), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_6, 65u, (r21 + 65));
    MemoryInline::WriteResolved8(guest_range_5, 281u, (r1 + 293), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_6, 66u, (r21 + 66));
    MemoryInline::WriteResolved8(guest_range_5, 282u, (r1 + 294), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_6, 67u, (r21 + 67));
    MemoryInline::WriteResolved8(guest_range_5, 283u, (r1 + 295), static_cast<uint8_t>(r3));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 68u, (r21 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 284u, (r1 + 296), f0.d);
    r5 = MemoryInline::ReadResolved32(guest_range_6, 72u, (r21 + 72));
    r4 = (r0 - r22);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
    r3 = (r1 + 228);
    MemoryInline::WriteResolved32(guest_range_5, 288u, (r1 + 300), r5);
    r0 = (r0 + r4);
    r0 = (static_cast<int32_t>(r0) >> 1);
    r4 = (r1 + 40);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 76u, (r21 + 76));
    r6 = (r23 - r0);
    r5 = (r1 + 12);
    MemoryInline::WriteResolvedFloat32(guest_range_5, 292u, (r1 + 304), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 80u, (r21 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 296u, (r1 + 308), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 84u, (r21 + 84));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 300u, (r1 + 312), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_6, 88u, (r21 + 88));
    MemoryInline::WriteResolved32(guest_range_5, 304u, (r1 + 316), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_6, 92u, (r21 + 92));
    MemoryInline::WriteResolved32(guest_range_5, 308u, (r1 + 320), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_6, 96u, (r21 + 96));
    MemoryInline::WriteResolved32(guest_range_5, 312u, (r1 + 324), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 260u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f29.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f29.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 260u, (r1 + 272), f29.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 264u, (r1 + 276), f29.d);
    }
    ctx->lr = 0x80506004u;
    if constexpr (KnownRegArgsCpuCall<0x805052A8u>(&func_805052A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        const auto regargs_result_805052A8_BEE2 = func_805052A8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_805052A8_BEE2);
        r4 = static_cast<uint32_t>(regargs_result_805052A8_BEE2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
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
    } else {
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
        InvokeDirectCpu<0x805052A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
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
    }
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    r3 = (r1 + 228);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    r4 = 0;
    f27.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    ctx->lr = 0x8050601Cu;
    if constexpr (KnownRegArgsCpuCall<0x80503BF8u>(&func_80503BF8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        const auto regargs_result_80503BF8_CAED = func_80503BF8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80503BF8_CAED);
        r4 = static_cast<uint32_t>(regargs_result_80503BF8_CAED >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        InvokeDirectCpu<0x80503BF8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
    }
    f1.d = static_cast<double>(PpcForceSingleValueInline(f25.d - f27.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f1.d = PpcFmulsInline(f1.d, f30.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r21 + 44), f0.d);
    goto loc_80506274;
}

loc_80506034:
{
}

loc_80506038:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8050624C;
    }
}

loc_8050603C:
{
    r0 = MemoryInline::FlatRead32((r1 + 112));
    guest_range_7 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 220u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_7, 16u, (r1 + 24), f29.d);
    MemoryInline::WriteResolved32(guest_range_7, 0u, (r1 + 8), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f29.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f29.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_7, 20u, (r1 + 28), f29.d);
        MemoryInline::WriteResolvedFloat32(guest_range_7, 24u, (r1 + 32), f29.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_7, 28u, (r1 + 36), f29.d);
    guest_range_8 = MemoryInline::ResolveRangeHost(r21, 0, 100u, true, false);
    r3 = MemoryInline::ReadResolved8(guest_range_8, 0u, r21);
    MemoryInline::WriteResolved8(guest_range_7, 120u, (r1 + 128), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_8, 1u, (r21 + 1));
    MemoryInline::WriteResolved8(guest_range_7, 121u, (r1 + 129), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_8, 2u, (r21 + 2));
    MemoryInline::WriteResolved8(guest_range_7, 122u, (r1 + 130), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_8, 3u, (r21 + 3));
    MemoryInline::WriteResolved8(guest_range_7, 123u, (r1 + 131), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_8, 4u, (r21 + 4));
    MemoryInline::WriteResolved8(guest_range_7, 124u, (r1 + 132), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_8, 5u, (r21 + 5));
    MemoryInline::WriteResolved8(guest_range_7, 125u, (r1 + 133), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_8, 6u, (r21 + 6));
    MemoryInline::WriteResolved8(guest_range_7, 126u, (r1 + 134), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_8, 7u, (r21 + 7));
    MemoryInline::WriteResolved8(guest_range_7, 127u, (r1 + 135), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_8, 8u, (r21 + 8));
    MemoryInline::WriteResolved8(guest_range_7, 128u, (r1 + 136), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_8, 9u, (r21 + 9));
    MemoryInline::WriteResolved8(guest_range_7, 129u, (r1 + 137), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_8, 10u, (r21 + 10));
    MemoryInline::WriteResolved8(guest_range_7, 130u, (r1 + 138), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_8, 11u, (r21 + 11));
    MemoryInline::WriteResolved8(guest_range_7, 131u, (r1 + 139), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_8, 12u, (r21 + 12));
    MemoryInline::WriteResolved8(guest_range_7, 132u, (r1 + 140), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_8, 13u, (r21 + 13));
    MemoryInline::WriteResolved8(guest_range_7, 133u, (r1 + 141), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_8, 14u, (r21 + 14));
    MemoryInline::WriteResolved8(guest_range_7, 134u, (r1 + 142), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_8, 15u, (r21 + 15));
    MemoryInline::WriteResolved8(guest_range_7, 135u, (r1 + 143), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_8, 16u, (r21 + 16));
    MemoryInline::WriteResolved8(guest_range_7, 136u, (r1 + 144), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_8, 17u, (r21 + 17));
    MemoryInline::WriteResolved8(guest_range_7, 137u, (r1 + 145), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_8, 18u, (r21 + 18));
    MemoryInline::WriteResolved8(guest_range_7, 138u, (r1 + 146), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_8, 19u, (r21 + 19));
    MemoryInline::WriteResolved8(guest_range_7, 139u, (r1 + 147), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_8, 20u, (r21 + 20));
    MemoryInline::WriteResolved8(guest_range_7, 140u, (r1 + 148), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_8, 21u, (r21 + 21));
    MemoryInline::WriteResolved8(guest_range_7, 141u, (r1 + 149), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_8, 22u, (r21 + 22));
    MemoryInline::WriteResolved8(guest_range_7, 142u, (r1 + 150), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_8, 23u, (r21 + 23));
    MemoryInline::WriteResolved8(guest_range_7, 143u, (r1 + 151), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_8, 24u, (r21 + 24));
    MemoryInline::WriteResolved8(guest_range_7, 144u, (r1 + 152), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_8, 25u, (r21 + 25));
    MemoryInline::WriteResolved8(guest_range_7, 145u, (r1 + 153), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_8, 26u, (r21 + 26));
    MemoryInline::WriteResolved8(guest_range_7, 146u, (r1 + 154), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_8, 27u, (r21 + 27));
    MemoryInline::WriteResolved8(guest_range_7, 147u, (r1 + 155), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_8, 28u, (r21 + 28));
    MemoryInline::WriteResolved8(guest_range_7, 148u, (r1 + 156), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_8, 29u, (r21 + 29));
    MemoryInline::WriteResolved8(guest_range_7, 149u, (r1 + 157), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_8, 30u, (r21 + 30));
    MemoryInline::WriteResolved8(guest_range_7, 150u, (r1 + 158), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_8, 31u, (r21 + 31));
    MemoryInline::WriteResolved8(guest_range_7, 151u, (r1 + 159), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved32(guest_range_8, 32u, (r21 + 32));
    MemoryInline::WriteResolved32(guest_range_7, 152u, (r1 + 160), r3);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 36u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_8, 36u, (r21 + 36));
            r3 = MemoryInline::ReadResolved32(guest_range_8, 40u, (r21 + 40));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 156u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_7, 156u, (r1 + 164), r4);
        MemoryInline::WriteResolved32(guest_range_7, 160u, (r1 + 168), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 44u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_8, 44u, (r21 + 44));
            r3 = MemoryInline::ReadResolved32(guest_range_8, 48u, (r21 + 48));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 164u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_7, 164u, (r1 + 172), r4);
        MemoryInline::WriteResolved32(guest_range_7, 168u, (r1 + 176), r3);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_8, 52u, (r21 + 52));
    MemoryInline::WriteResolved32(guest_range_7, 172u, (r1 + 180), r3);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 56u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_8, 56u, (r21 + 56));
            r3 = MemoryInline::ReadResolved32(guest_range_8, 60u, (r21 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 176u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_7, 176u, (r1 + 184), r4);
        MemoryInline::WriteResolved32(guest_range_7, 180u, (r1 + 188), r3);
    }
    r3 = MemoryInline::ReadResolved8(guest_range_8, 64u, (r21 + 64));
    MemoryInline::WriteResolved8(guest_range_7, 184u, (r1 + 192), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_8, 65u, (r21 + 65));
    MemoryInline::WriteResolved8(guest_range_7, 185u, (r1 + 193), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_8, 66u, (r21 + 66));
    MemoryInline::WriteResolved8(guest_range_7, 186u, (r1 + 194), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_8, 67u, (r21 + 67));
    MemoryInline::WriteResolved8(guest_range_7, 187u, (r1 + 195), static_cast<uint8_t>(r3));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 68u, (r21 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_7, 188u, (r1 + 196), f0.d);
    r5 = MemoryInline::ReadResolved32(guest_range_8, 72u, (r21 + 72));
    r4 = (r0 - r22);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
    r3 = (r1 + 128);
    MemoryInline::WriteResolved32(guest_range_7, 192u, (r1 + 200), r5);
    r0 = (r0 + r4);
    r0 = (static_cast<int32_t>(r0) >> 1);
    r4 = (r1 + 24);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 76u, (r21 + 76));
    r6 = (r23 - r0);
    r5 = (r1 + 8);
    MemoryInline::WriteResolvedFloat32(guest_range_7, 196u, (r1 + 204), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 80u, (r21 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_7, 200u, (r1 + 208), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 84u, (r21 + 84));
    MemoryInline::WriteResolvedFloat32(guest_range_7, 204u, (r1 + 212), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_8, 88u, (r21 + 88));
    MemoryInline::WriteResolved32(guest_range_7, 208u, (r1 + 216), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_8, 92u, (r21 + 92));
    MemoryInline::WriteResolved32(guest_range_7, 212u, (r1 + 220), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_8, 96u, (r21 + 96));
    MemoryInline::WriteResolved32(guest_range_7, 216u, (r1 + 224), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 164u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f29.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f29.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_7, 164u, (r1 + 172), f29.d);
        MemoryInline::WriteResolvedFloat32(guest_range_7, 168u, (r1 + 176), f29.d);
    }
    ctx->lr = 0x80506220u;
    if constexpr (KnownRegArgsCpuCall<0x805052A8u>(&func_805052A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        const auto regargs_result_805052A8_10348 = func_805052A8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_805052A8_10348);
        r4 = static_cast<uint32_t>(regargs_result_805052A8_10348 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
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
    } else {
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
        InvokeDirectCpu<0x805052A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
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
    }
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r3 = (r1 + 128);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    r4 = 0;
    f27.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    ctx->lr = 0x80506238u;
    if constexpr (KnownRegArgsCpuCall<0x80503BF8u>(&func_80503BF8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        const auto regargs_result_80503BF8_10F56 = func_80503BF8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80503BF8_10F56);
        r4 = static_cast<uint32_t>(regargs_result_80503BF8_10F56 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        InvokeDirectCpu<0x80503BF8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
    }
    f1.d = static_cast<double>(PpcForceSingleValueInline(f25.d - f27.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r21 + 44), f0.d);
    goto loc_80506274;
}

loc_8050624C:
{
    f1.d = MemoryInline::FlatReadFloat32((r21 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f25.d, f1.d);
}

loc_8050625C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80506264;
    }
}

loc_80506260:
{
    goto loc_80506268;
}

loc_80506264:
{
    f1.d = f25.d;
}

loc_80506268:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f25.d = f1.d;
    MemoryInline::FlatWriteFloat32((r21 + 44), f0.d);
}

loc_80506274:
{
}

loc_80506278:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80506280;
    }
}

loc_8050627C:
{
    r26 = MemoryInline::FlatRead32((r1 + 72));
}

loc_80506280:
{
    r28 = 0;
    goto loc_805062B0;
}

loc_80506288:
{
}

loc_8050628C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80506298;
    }
}

loc_80506290:
{
    r28 = 0;
    goto loc_805062B0;
}

loc_80506298:
{
}

loc_8050629C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_805062A8;
    }
}

loc_805062A0:
{
    r28 = 1;
    goto loc_805062B0;
}

loc_805062A8:
{
}

loc_805062AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4))) {
        goto loc_80506400;
    }
}

loc_805062B0:
{
    r0 = MemoryInline::FlatRead32((r1 + 112));
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    goto loc_805063C4;
}

loc_805062BC:
{
}

loc_805062C0:
{
    f27.d = MemoryInline::FlatReadFloat32((r21 + 48));
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80506358;
    }
}

loc_805062C8:
{
}

loc_805062CC:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(r26))) {
        goto loc_80506358;
    }
}

loc_805062D0:
{
}

loc_805062D4:
{
    f24.d = MemoryInline::FlatReadFloat32((r21 + 44));
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_805062E4;
    }
}

loc_805062DC:
{
    f23.d = MemoryInline::FlatReadFloat32((r21 + 80));
    goto loc_805062E8;
}

loc_805062E4:
{
    f23.d = MemoryInline::FlatReadFloat32((r2 + -1420));
}

loc_805062E8:
{
    r0 = MemoryInline::FlatRead8((r21 + 67));
}

loc_805062F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805062FC;
    }
}

loc_805062F4:
{
    f2.d = MemoryInline::FlatReadFloat32((r21 + 68));
    goto loc_80506330;
}

loc_805062FC:
{
    r3 = MemoryInline::FlatRead32((r21 + 72));
    r4 = (r25 & 65535);
    f22.d = MemoryInline::FlatReadFloat32((r21 + 36));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 72));
    ctr = r12;
    ctx->lr = 0x80506318u;
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
    r0 = (r3 ^ -2147483648);
    stackword67 = r31;
    MemoryInline::FlatWriteRam32((r1 + 432), r31);
    stackword68 = r0;
    MemoryInline::FlatWriteRam32((r1 + 436), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword67), static_cast<uint32_t>(stackword68));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f2.d = PpcFmulsInline(f0.d, f22.d);
}

loc_80506330:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r21 + 76));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f24.d - f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f23.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80506348:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80506358;
    }
}

loc_8050634C:
{
    MemoryInline::FlatWriteRam32((r1 + 72), r27);
    r25 = 10;
    goto loc_805063E4;
}

loc_80506358:
{
}

loc_8050635C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80506370;
    }
}

loc_80506360:
{
    f1.d = MemoryInline::FlatReadFloat32((r21 + 80));
    f0.d = MemoryInline::FlatReadFloat32((r21 + 44));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r21 + 44), f0.d);
}

loc_80506370:
{
    r3 = MemoryInline::FlatRead32((r21 + 72));
    r28 = 1;
    f22.d = MemoryInline::FlatReadFloat32((r21 + 40));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x8050638Cu;
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
    r0 = (0 - r3);
    stackword70 = r31;
    MemoryInline::FlatWriteRam32((r1 + 432), r31);
    r0 = (r0 ^ -2147483648);
    f0.d = MemoryInline::FlatReadFloat32((r21 + 48));
    stackword71 = r0;
    MemoryInline::FlatWriteRam32((r1 + 436), r0);
    r3 = r21;
    r4 = (r25 & 65535);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword70), static_cast<uint32_t>(stackword71));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f31.d));
    f1.d = PpcFmulsInline(f1.d, f22.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r21 + 48), f0.d);
    ctx->lr = 0x805063C0u;
    if constexpr (KnownRegArgsCpuCall<0x80504874u>(&func_80504874)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
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
        const auto regargs_result_80504874_136B7 = func_80504874_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80504874_136B7);
        r4 = static_cast<uint32_t>(regargs_result_80504874_136B7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
    } else {
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
        InvokeDirectCpu<0x80504874u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
    }
    MemoryInline::FlatWriteFloat32((r21 + 48), f27.d);
}

loc_805063C4:
{
}

loc_805063C8:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_805063D0;
    }
}

loc_805063CC:
{
    r27 = MemoryInline::FlatRead32((r1 + 72));
}

loc_805063D0:
{
    r3 = (r1 + 72);
    r12 = (r1 + 76);
    ctx->lr = 0x805063DCu;
    if constexpr (KnownRegArgsCpuCall<0x80457338u>(&func_80457338)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80457338_1421B = func_80457338_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80457338_1421B);
        r4 = static_cast<uint32_t>(regargs_result_80457338_1421B >> 32);
        r0 = ctx->gpr[0];
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        InvokeDirectCpu<0x80457338u>(ctx);
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    // nop
    r25 = r3;
}

loc_805063E4:
{
    r7 = MemoryInline::FlatRead32((r1 + 72));
    r3 = (r7 - r22);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r0 = (r0 + r3);
    r0 = (static_cast<int32_t>(r0) >> 1);
}

loc_805063FC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r23))) {
        goto loc_80505B78;
    }
}

loc_80506400:
{
    f1.d = MemoryInline::FlatReadFloat32((r21 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f23.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f25.d, f23.d);
}

loc_80506410:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80506418;
    }
}

loc_80506414:
{
    goto loc_8050641C;
}

loc_80506418:
{
    f23.d = f25.d;
}

loc_8050641C:
{
    r0 = MemoryInline::FlatRead32((r21 + 92));
    r0 = (r0 & 768);
}

loc_80506428:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(256))) {
        goto loc_80506434;
    }
}

loc_8050642C:
{
}

loc_80506430:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(512))) {
        goto loc_8050643C;
    }
}

loc_80506434:
{
    MemoryInline::FlatWriteFloat32((r21 + 48), f28.d);
    goto loc_80506470;
}

loc_8050643C:
{
}

loc_80506440:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_80506464;
    }
}

loc_80506444:
{
}

loc_80506448:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80506470;
    }
}

loc_8050644C:
{
    f22.d = MemoryInline::FlatReadFloat32((r21 + 48));
    r3 = r21;
    ctx->lr = 0x80506458u;
    if constexpr (KnownRegArgsCpuCall<0x80504814u>(&func_80504814)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80504814_150BF = func_80504814_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80504814_150BF);
        r4 = static_cast<uint32_t>(regargs_result_80504814_150BF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        InvokeDirectCpu<0x80504814u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    f0.d = static_cast<double>(PpcForceSingleValueInline(f22.d - f1.d));
    MemoryInline::FlatWriteFloat32((r21 + 48), f0.d);
    goto loc_80506470;
}

loc_80506464:
{
    f0.d = MemoryInline::FlatReadFloat32((r21 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f26.d));
    MemoryInline::FlatWriteFloat32((r21 + 48), f0.d);
}

loc_80506470:
{
    f1.d = f23.d;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_9 = MemoryInline::ResolveRangeHost((r1 + 496), 0, 168u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_9, 144u, (r1 + 640));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_9, 128u, (r1 + 624));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_9, 112u, (r1 + 608));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_9, 96u, (r1 + 592));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_9, 80u, (r1 + 576));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_9, 64u, (r1 + 560));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_9, 48u, (r1 + 544));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_9, 32u, (r1 + 528));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_9, 16u, (r1 + 512));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f22.d = MemoryInline::ReadResolvedFloat64(guest_range_9, 0u, (r1 + 496));
    r11 = (r1 + 496);
    // inline leaf 0x804574BC (12 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    // end of inlined leaf 0x804574BC
    r0 = MemoryInline::ReadResolved32(guest_range_9, 164u, (r1 + 660));
    ctx->lr = r0;
    r1 = (r1 + 656);
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
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

extern "C" void func_80505A50(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80505A50_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x001FFFFF gpr_return=0x00000018 fpr_read=0xFFC03FFF fpr_write=0xFFC03FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80505A50 func_80505A50 preserves=true fpr_mask=0x00000000
