#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80457338(CpuContext* ctx);
extern "C" uint64_t func_80457338_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80503BF8(CpuContext* ctx);
extern "C" uint64_t func_80503BF8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80505138(CpuContext* ctx);
extern "C" uint32_t func_80505138_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_805052A8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t stackword19 = 0;
    uint32_t stackword20 = 0;
    uint32_t stackword21 = 0;
    uint32_t stackword22 = 0;
    uint32_t stackword46 = 0;
    uint32_t stackword47 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

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
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
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

    goto loc_805052A8;

loc_805052A8:
{
    MemoryInline::FlatWriteRam32((r1 + -368), r1);
    r1 = (r1 + -368);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 372), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 352), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 360);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 336), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 344);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 320), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 328);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 304), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 312);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 288), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 296);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    r11 = (r1 + 288);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
    f1.d = MemoryInline::FlatReadFloat32((r3 + 76));
    r31_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r31 = (r31_rot_0 & -2);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1424));
    r22 = r3;
    r21 = MemoryInline::FlatRead32(r5);
    r23 = r4;
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80505300:
{
    r24 = r5;
    r30 = (r21 + r31);
    r29 = cr;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -1420));
    r20 = 0;
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 56), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 36u, (r1 + 92), r3);
    r29_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(1));
    r29 = (r29_rot_0 & 1);
    r3 = (r1 + 40);
    MemoryInline::WriteResolved32(guest_range_2, 44u, (r1 + 100), r20);
    r28 = 0;
    r27 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_2, 48u, (r1 + 104), r20);
        MemoryInline::WriteResolved32(guest_range_2, 52u, (r1 + 108), r20);
    }
    MemoryInline::WriteResolved32(guest_range_2, 40u, (r1 + 96), r21);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r1 + 56), f31.d);
    r4 = MemoryInline::FlatRead32((r22 + 72));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f31.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f31.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r1 + 60), f31.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r1 + 64), f31.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r1 + 68), f31.d);
    if constexpr (KnownRegArgsCpuCall<0x80505138u>(&func_80505138)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        const auto regargs_result_80505138_1AA8 = func_80505138_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_80505138_1AA8;
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
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1420));
    MemoryInline::FlatWriteFloat32(r23, f0.d);
    MemoryInline::FlatWriteFloat32((r23 + 8), f0.d);
    r3 = MemoryInline::FlatRead32((r22 + 72));
}

loc_80505364:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8050537C;
    }
}

loc_80505368:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 52));
    ctr = r12;
    ctx->lr = 0x80505378u;
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
    goto loc_80505380;
}

loc_8050537C:
{
    r3 = r20;
}

loc_80505380:
{
    r3 = (r3 ^ -2147483648);
    r0 = 1127219200;
    stackword19 = r3;
    MemoryInline::FlatWriteRam32((r1 + 220), r3);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -1416));
    stackword20 = r0;
    MemoryInline::FlatWriteRam32((r1 + 216), r0);
    f3.d = MemoryInline::FlatReadFloat32((r22 + 40));
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword20), static_cast<uint32_t>(stackword19));
    f1.d = MemoryInline::FlatReadFloat32((r22 + 84));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1420));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805053B4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805053BC;
    }
}

loc_805053B8:
{
    goto loc_805053C0;
}

loc_805053BC:
{
    f1.d = f0.d;
}

loc_805053C0:
{
    MemoryInline::FlatWriteFloat32((r23 + 4), f1.d);
    r3 = MemoryInline::FlatRead32((r22 + 72));
}

loc_805053CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805053E4;
    }
}

loc_805053D0:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 52));
    ctr = r12;
    ctx->lr = 0x805053E0u;
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
    goto loc_805053E8;
}

loc_805053E4:
{
    r3 = 0;
}

loc_805053E8:
{
    r3 = (r3 ^ -2147483648);
    r0 = 1127219200;
    stackword21 = r3;
    MemoryInline::FlatWriteRam32((r1 + 228), r3);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -1416));
    stackword22 = r0;
    MemoryInline::FlatWriteRam32((r1 + 224), r0);
    f3.d = MemoryInline::FlatReadFloat32((r22 + 40));
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword22), static_cast<uint32_t>(stackword21));
    f1.d = MemoryInline::FlatReadFloat32((r22 + 84));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1420));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_8050541C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80505424;
    }
}

loc_80505420:
{
    goto loc_80505428;
}

loc_80505424:
{
    f4.d = f0.d;
}

loc_80505428:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d));
    f3.d = MemoryInline::FlatReadFloat32(r23);
    f2.d = MemoryInline::FlatReadFloat32((r23 + 4));
    r3 = (r1 + 40);
    f1.d = MemoryInline::FlatReadFloat32((r23 + 8));
    r12 = (r1 + 44);
    MemoryInline::FlatWriteFloat32((r23 + 12), f4.d);
    r26 = 0;
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    MemoryInline::FlatWriteRam32((r1 + 40), r21);
    ctx->lr = 0x80505460u;
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
        const auto regargs_result_80457338_33A1 = func_80457338_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80457338_33A1);
        r4 = static_cast<uint32_t>(regargs_result_80457338_33A1 >> 32);
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
    f30.d = MemoryInline::FlatReadFloat64((r2 + -1416));
    r20 = (r1 + 112);
    r21 = 1127219200;
    goto loc_805058D8;
}

loc_8050547C:
{
    r5 = (r25 & 65535);
}

loc_80505484:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(32))) {
        goto loc_805057F4;
    }
}

loc_80505488:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r28));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f31.d);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
}

loc_80505498:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f29.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f29.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f29.d);
    MemoryInline::FlatWriteRam32((r1 + 96), r3);
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    MemoryInline::FlatWriteFloat32((r22 + 44), f31.d);
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80505710;
    }
}

loc_805054B4:
{
}

loc_805054B8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(10))) {
        goto loc_80505710;
    }
}

loc_805054BC:
{
}

loc_805054C0:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_80505710;
    }
}

loc_805054C4:
{
    r7 = MemoryInline::FlatRead32((r1 + 92));
    r6 = MemoryInline::FlatRead32((r1 + 96));
    r4 = MemoryInline::FlatRead32((r1 + 100));
    r3 = MemoryInline::FlatRead32((r1 + 104));
    r0 = MemoryInline::FlatRead32((r1 + 108));
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 204u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_3, 64u, (r1 + 72), r7);
        MemoryInline::WriteResolved32(guest_range_3, 68u, (r1 + 76), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_3, 72u, (r1 + 80), r4);
        MemoryInline::WriteResolved32(guest_range_3, 76u, (r1 + 84), r3);
    }
    MemoryInline::WriteResolved32(guest_range_3, 80u, (r1 + 88), r0);
    guest_range_4 = MemoryInline::ResolveRangeHost(r22, 0, 100u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_4, 0u, r22);
    MemoryInline::WriteResolved8(guest_range_3, 104u, (r1 + 112), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 1u, (r22 + 1));
    MemoryInline::WriteResolved8(guest_range_3, 105u, (r1 + 113), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 2u, (r22 + 2));
    MemoryInline::WriteResolved8(guest_range_3, 106u, (r1 + 114), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 3u, (r22 + 3));
    MemoryInline::WriteResolved8(guest_range_3, 107u, (r1 + 115), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 4u, (r22 + 4));
    MemoryInline::WriteResolved8(guest_range_3, 108u, (r1 + 116), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 5u, (r22 + 5));
    MemoryInline::WriteResolved8(guest_range_3, 109u, (r1 + 117), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 6u, (r22 + 6));
    MemoryInline::WriteResolved8(guest_range_3, 110u, (r1 + 118), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 7u, (r22 + 7));
    MemoryInline::WriteResolved8(guest_range_3, 111u, (r1 + 119), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 8u, (r22 + 8));
    MemoryInline::WriteResolved8(guest_range_3, 112u, (r1 + 120), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 9u, (r22 + 9));
    MemoryInline::WriteResolved8(guest_range_3, 113u, (r1 + 121), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 10u, (r22 + 10));
    MemoryInline::WriteResolved8(guest_range_3, 114u, (r1 + 122), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 11u, (r22 + 11));
    MemoryInline::WriteResolved8(guest_range_3, 115u, (r1 + 123), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 12u, (r22 + 12));
    MemoryInline::WriteResolved8(guest_range_3, 116u, (r1 + 124), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 13u, (r22 + 13));
    MemoryInline::WriteResolved8(guest_range_3, 117u, (r1 + 125), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 14u, (r22 + 14));
    MemoryInline::WriteResolved8(guest_range_3, 118u, (r1 + 126), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 15u, (r22 + 15));
    MemoryInline::WriteResolved8(guest_range_3, 119u, (r1 + 127), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 16u, (r22 + 16));
    MemoryInline::WriteResolved8(guest_range_3, 120u, (r1 + 128), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 17u, (r22 + 17));
    MemoryInline::WriteResolved8(guest_range_3, 121u, (r1 + 129), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 18u, (r22 + 18));
    MemoryInline::WriteResolved8(guest_range_3, 122u, (r1 + 130), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 19u, (r22 + 19));
    MemoryInline::WriteResolved8(guest_range_3, 123u, (r1 + 131), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 20u, (r22 + 20));
    MemoryInline::WriteResolved8(guest_range_3, 124u, (r1 + 132), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 21u, (r22 + 21));
    MemoryInline::WriteResolved8(guest_range_3, 125u, (r1 + 133), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 22u, (r22 + 22));
    MemoryInline::WriteResolved8(guest_range_3, 126u, (r1 + 134), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 23u, (r22 + 23));
    MemoryInline::WriteResolved8(guest_range_3, 127u, (r1 + 135), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 24u, (r22 + 24));
    MemoryInline::WriteResolved8(guest_range_3, 128u, (r1 + 136), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 25u, (r22 + 25));
    MemoryInline::WriteResolved8(guest_range_3, 129u, (r1 + 137), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 26u, (r22 + 26));
    MemoryInline::WriteResolved8(guest_range_3, 130u, (r1 + 138), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 27u, (r22 + 27));
    MemoryInline::WriteResolved8(guest_range_3, 131u, (r1 + 139), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 28u, (r22 + 28));
    MemoryInline::WriteResolved8(guest_range_3, 132u, (r1 + 140), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 29u, (r22 + 29));
    MemoryInline::WriteResolved8(guest_range_3, 133u, (r1 + 141), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 30u, (r22 + 30));
    MemoryInline::WriteResolved8(guest_range_3, 134u, (r1 + 142), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 31u, (r22 + 31));
    MemoryInline::WriteResolved8(guest_range_3, 135u, (r1 + 143), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r22 + 32));
    MemoryInline::WriteResolved32(guest_range_3, 136u, (r1 + 144), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 36u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r22 + 36));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r22 + 40));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 140u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 140u, (r1 + 148), r3);
        MemoryInline::WriteResolved32(guest_range_3, 144u, (r1 + 152), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 44u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 44u, (r22 + 44));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 48u, (r22 + 48));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 148u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 148u, (r1 + 156), r3);
        MemoryInline::WriteResolved32(guest_range_3, 152u, (r1 + 160), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_4, 52u, (r22 + 52));
    MemoryInline::WriteResolved32(guest_range_3, 156u, (r1 + 164), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 56u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 56u, (r22 + 56));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 60u, (r22 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 160u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 160u, (r1 + 168), r3);
        MemoryInline::WriteResolved32(guest_range_3, 164u, (r1 + 172), r0);
    }
    r0 = MemoryInline::ReadResolved8(guest_range_4, 64u, (r22 + 64));
    MemoryInline::WriteResolved8(guest_range_3, 168u, (r1 + 176), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 65u, (r22 + 65));
    MemoryInline::WriteResolved8(guest_range_3, 169u, (r1 + 177), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 66u, (r22 + 66));
    MemoryInline::WriteResolved8(guest_range_3, 170u, (r1 + 178), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 67u, (r22 + 67));
    MemoryInline::WriteResolved8(guest_range_3, 171u, (r1 + 179), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 68u, (r22 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 172u, (r1 + 180), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 72u, (r22 + 72));
    r4 = (r1 + 8);
    r6 = (r1 + 72);
    MemoryInline::WriteResolved32(guest_range_3, 176u, (r1 + 184), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 76u, (r22 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 180u, (r1 + 188), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 80u, (r22 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 184u, (r1 + 192), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 84u, (r22 + 84));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 188u, (r1 + 196), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 88u, (r22 + 88));
    MemoryInline::WriteResolved32(guest_range_3, 192u, (r1 + 200), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 92u, (r22 + 92));
    MemoryInline::WriteResolved32(guest_range_3, 196u, (r1 + 204), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 96u, (r22 + 96));
    MemoryInline::WriteResolved32(guest_range_3, 200u, (r1 + 208), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f29.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f29.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, (r1 + 8), f29.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r1 + 12), f29.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f29.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f29.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r1 + 16), f29.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r1 + 20), f29.d);
    }
    MemoryInline::WriteResolved32(guest_range_3, 64u, (r1 + 72), r20);
    r3 = MemoryInline::ReadResolved32(guest_range_4, 96u, (r22 + 96));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x805056BCu;
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
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f29.d);
}

loc_805056CC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80505704;
    }
}

loc_805056D0:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 156));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 100));
    f0.d = MemoryInline::FlatReadFloat32((r22 + 76));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805056E4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80505704;
    }
}

loc_805056E8:
{
    MemoryInline::FlatWriteRam32((r1 + 40), r26);
    r3 = r20;
    r27 = 1;
    r25 = 10;
    r4 = 0;
    ctx->lr = 0x80505700u;
    if constexpr (KnownRegArgsCpuCall<0x80503BF8u>(&func_80503BF8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        const auto regargs_result_80503BF8_77A3 = func_80503BF8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80503BF8_77A3);
        r4 = static_cast<uint32_t>(regargs_result_80503BF8_77A3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
    }
    goto loc_805058D8;
}

loc_80505704:
{
    r3 = (r1 + 112);
    r4 = 0;
    ctx->lr = 0x80505710u;
    if constexpr (KnownRegArgsCpuCall<0x80503BF8u>(&func_80503BF8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        const auto regargs_result_80503BF8_8509 = func_80503BF8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80503BF8_8509);
        r4 = static_cast<uint32_t>(regargs_result_80503BF8_8509 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
    }
}

loc_80505710:
{
    r3 = MemoryInline::FlatRead32((r22 + 96));
    r4 = (r1 + 24);
    r5 = (r25 & 65535);
    r6 = (r1 + 92);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80505730u;
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
    r0 = MemoryInline::FlatRead32((r1 + 96));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    f0.d = MemoryInline::FlatReadFloat32(r23);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80505744:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8050574C;
    }
}

loc_80505748:
{
    goto loc_80505750;
}

loc_8050574C:
{
    f1.d = f0.d;
}

loc_80505750:
{
    MemoryInline::FlatWriteFloat32(r23, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r23 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80505760:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80505768;
    }
}

loc_80505764:
{
    goto loc_8050576C;
}

loc_80505768:
{
    f1.d = f0.d;
}

loc_8050576C:
{
    MemoryInline::FlatWriteFloat32((r23 + 4), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r23 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8050577C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80505784;
    }
}

loc_80505780:
{
    goto loc_80505788;
}

loc_80505784:
{
    f1.d = f0.d;
}

loc_80505788:
{
    MemoryInline::FlatWriteFloat32((r23 + 8), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r23 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80505798:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805057A0;
    }
}

loc_8050579C:
{
    goto loc_805057A4;
}

loc_805057A0:
{
    f1.d = f0.d;
}

loc_805057A4:
{
    MemoryInline::FlatWriteFloat32((r23 + 12), f1.d);
}

loc_805057AC:
{
    f31.d = MemoryInline::FlatReadFloat32((r22 + 44));
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_805057C8;
    }
}

loc_805057B4:
{
    r0 = MemoryInline::FlatRead32(r24);
    r3 = 0;
    r0 = (r0 + r31);
    MemoryInline::FlatWrite32(r24, r0);
    goto loc_805058F0;
}

loc_805057C8:
{
}

loc_805057CC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_805057D8;
    }
}

loc_805057D0:
{
    r28 = 0;
    goto loc_805058B8;
}

loc_805057D8:
{
}

loc_805057DC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_805057E8;
    }
}

loc_805057E0:
{
    r28 = 1;
    goto loc_805058B8;
}

loc_805057E8:
{
}

loc_805057EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_805058E4;
    }
}

loc_805057F0:
{
    goto loc_805058B8;
}

loc_805057F4:
{
}

loc_805057F8:
{
    f27.d = MemoryInline::FlatReadFloat32((r2 + -1420));
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80505808;
    }
}

loc_80505800:
{
    f0.d = MemoryInline::FlatReadFloat32((r22 + 80));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f0.d));
}

loc_80505808:
{
    r0 = MemoryInline::FlatRead8((r22 + 67));
}

loc_80505810:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80505820;
    }
}

loc_80505814:
{
    f0.d = MemoryInline::FlatReadFloat32((r22 + 68));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f0.d));
    goto loc_80505858;
}

loc_80505820:
{
    r3 = MemoryInline::FlatRead32((r22 + 72));
    r4 = (r25 & 65535);
    f28.d = MemoryInline::FlatReadFloat32((r22 + 36));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 72));
    ctr = r12;
    ctx->lr = 0x8050583Cu;
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
    stackword46 = r21;
    MemoryInline::FlatWriteRam32((r1 + 224), r21);
    stackword47 = r0;
    MemoryInline::FlatWriteRam32((r1 + 228), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword46), static_cast<uint32_t>(stackword47));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f0.d = PpcFmulsInline(f0.d, f28.d);
    f27.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f0.d));
}

loc_80505858:
{
}

loc_8050585C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80505888;
    }
}

loc_80505860:
{
}

loc_80505864:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_80505888;
    }
}

loc_80505868:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f27.d));
    f0.d = MemoryInline::FlatReadFloat32((r22 + 76));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80505874:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80505888;
    }
}

loc_80505878:
{
    MemoryInline::FlatWriteRam32((r1 + 40), r26);
    r27 = 1;
    r25 = 10;
    goto loc_805058D8;
}

loc_80505888:
{
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f27.d));
    f0.d = MemoryInline::FlatReadFloat32(r23);
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_80505894:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8050589C;
    }
}

loc_80505898:
{
    f0.d = f31.d;
}

loc_8050589C:
{
    f1.d = MemoryInline::FlatReadFloat32((r23 + 8));
    MemoryInline::FlatWriteFloat32(r23, f0.d);
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_805058A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805058B0;
    }
}

loc_805058AC:
{
    f1.d = f31.d;
}

loc_805058B0:
{
    MemoryInline::FlatWriteFloat32((r23 + 8), f1.d);
    r28 = 1;
}

loc_805058B8:
{
}

loc_805058BC:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_805058C4;
    }
}

loc_805058C0:
{
    r26 = MemoryInline::FlatRead32((r1 + 40));
}

loc_805058C4:
{
    r3 = (r1 + 40);
    r12 = (r1 + 44);
    ctx->lr = 0x805058D0u;
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
        const auto regargs_result_80457338_B085 = func_80457338_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80457338_B085);
        r4 = static_cast<uint32_t>(regargs_result_80457338_B085 >> 32);
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

loc_805058D8:
{
    r3 = MemoryInline::FlatRead32((r1 + 40));
}

loc_805058E0:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r30))) {
        goto loc_8050547C;
    }
}

loc_805058E4:
{
    r0 = MemoryInline::FlatRead32((r1 + 40));
    r3 = r27;
    MemoryInline::FlatWrite32(r24, r0);
}

loc_805058F0:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 352));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 336));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 320));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::FlatReadFloat64((r1 + 304));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 288);
    f27.d = MemoryInline::FlatReadFloat64((r1 + 288));
    // inline leaf 0x804574B8 (13 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    // end of inlined leaf 0x804574B8
    r0 = MemoryInline::FlatRead32((r1 + 372));
    ctx->lr = r0;
    r1 = (r1 + 368);
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
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

extern "C" void func_805052A8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_805052A8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x000FFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x805052A8 func_805052A8 preserves=true fpr_mask=0x00000000
