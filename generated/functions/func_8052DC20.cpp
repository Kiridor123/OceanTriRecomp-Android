#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80457338(CpuContext* ctx);
extern "C" uint64_t func_80457338_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80505138(CpuContext* ctx);
extern "C" uint32_t func_80505138_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80505224(CpuContext* ctx);
extern "C" uint64_t func_80505224_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8052DC20_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r0_rot_8 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t stackword19 = 0;
    uint32_t stackword20 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8052DC20u);
    goto loc_8052DC20;

loc_8052DC20:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -208), 0, 216u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -208), r1);
    r1 = (r1 + -208);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 212u, (r1 + 212), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 192u, (r1 + 192), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 176u, (r1 + 176), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 160u, (r1 + 160), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 144u, (r1 + 144), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 128u, (r1 + 128), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    r11 = (r1 + 128);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r0 = 0;
    r25 = r3;
    MemoryInline::WriteResolved32(guest_range_2, 64u, (r1 + 64), r0);
    f30.d = f1.d;
    r26 = r4;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -1312));
    MemoryInline::WriteResolved32(guest_range_2, 68u, (r1 + 68), r0);
    r27 = r5;
    r28 = r6;
    MemoryInline::WriteResolved32(guest_range_2, 72u, (r1 + 72), r0);
    r29 = r7;
    r3 = (r1 + 40);
    r31 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_2, 56u, (r1 + 56), r4);
        MemoryInline::WriteResolved32(guest_range_2, 60u, (r1 + 60), r5);
    }
    r4 = MemoryInline::FlatRead32((r4 + 72));
    if constexpr (KnownRegArgsCpuCall<0x80505138u>(&func_80505138)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        const auto regargs_result_80505138_147E = func_80505138_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_80505138_147E;
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
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r3 = r26;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1312));
    MemoryInline::FlatWriteFloat32(r25, f0.d);
    MemoryInline::FlatWriteFloat32((r25 + 8), f0.d);
    ctx->lr = 0x8052DCB8u;
    if constexpr (KnownRegArgsCpuCall<0x80505224u>(&func_80505224)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80505224_18E9 = func_80505224_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80505224_18E9);
        r4 = static_cast<uint32_t>(regargs_result_80505224_18E9 >> 32);
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
        InvokeDirectCpu<0x80505224u>(ctx);
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
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1312));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8052DCC0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8052DCC8;
    }
}

loc_8052DCC4:
{
    goto loc_8052DCCC;
}

loc_8052DCC8:
{
    f1.d = f0.d;
}

loc_8052DCCC:
{
    MemoryInline::FlatWriteFloat32((r25 + 4), f1.d);
    r3 = r26;
    ctx->lr = 0x8052DCD8u;
    if constexpr (KnownRegArgsCpuCall<0x80505224u>(&func_80505224)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80505224_22C8 = func_80505224_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80505224_22C8);
        r4 = static_cast<uint32_t>(regargs_result_80505224_22C8 >> 32);
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
        InvokeDirectCpu<0x80505224u>(ctx);
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
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1312));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8052DCE0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8052DCE8;
    }
}

loc_8052DCE4:
{
    goto loc_8052DCEC;
}

loc_8052DCE8:
{
    f1.d = f0.d;
}

loc_8052DCEC:
{
    MemoryInline::FlatWriteFloat32((r25 + 12), f1.d);
    r0 = 0;
    r3 = (r1 + 40);
    r12 = (r1 + 44);
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 40), r27);
    f3.d = MemoryInline::FlatReadFloat32(r25);
    f2.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r25 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r25 + 12));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    ctx->lr = 0x8052DD28u;
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
        const auto regargs_result_80457338_2EED = func_80457338_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80457338_2EED);
        r4 = static_cast<uint32_t>(regargs_result_80457338_2EED >> 32);
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
    f28.d = MemoryInline::FlatReadFloat32((r2 + -1312));
    r4 = r3;
    f29.d = MemoryInline::FlatReadFloat64((r2 + -1304));
    r24 = 1127219200;
    goto loc_8052DF48;
}

loc_8052DD40:
{
    r5 = (r4 & 65535);
}

loc_8052DD48:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(32))) {
        goto loc_8052DE64;
    }
}

loc_8052DD4C:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r31));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f31.d);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_3 & 134217727);
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f28.d);
    r6 = (r1 + 56);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f28.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f28.d);
    MemoryInline::FlatWriteRam32((r1 + 60), r7);
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    MemoryInline::FlatWriteFloat32((r26 + 44), f31.d);
    r3 = MemoryInline::FlatRead32((r26 + 96));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8052DD8Cu;
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
    r0 = MemoryInline::FlatRead32((r1 + 60));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    f0.d = MemoryInline::FlatReadFloat32(r25);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8052DDA0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8052DDA8;
    }
}

loc_8052DDA4:
{
    goto loc_8052DDAC;
}

loc_8052DDA8:
{
    f1.d = f0.d;
}

loc_8052DDAC:
{
    MemoryInline::FlatWriteFloat32(r25, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8052DDBC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8052DDC4;
    }
}

loc_8052DDC0:
{
    goto loc_8052DDC8;
}

loc_8052DDC4:
{
    f1.d = f0.d;
}

loc_8052DDC8:
{
    MemoryInline::FlatWriteFloat32((r25 + 4), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r25 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8052DDD8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8052DDE0;
    }
}

loc_8052DDDC:
{
    goto loc_8052DDE4;
}

loc_8052DDE0:
{
    f1.d = f0.d;
}

loc_8052DDE4:
{
    MemoryInline::FlatWriteFloat32((r25 + 8), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r25 + 12));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8052DDF4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8052DDFC;
    }
}

loc_8052DDF8:
{
    goto loc_8052DE00;
}

loc_8052DDFC:
{
    f2.d = f0.d;
}

loc_8052DE00:
{
    f1.d = MemoryInline::FlatReadFloat32((r25 + 8));
    f0.d = MemoryInline::FlatReadFloat32(r25);
    MemoryInline::FlatWriteFloat32((r25 + 12), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f31.d = MemoryInline::FlatReadFloat32((r26 + 44));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_8052DE18:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8052DE28;
    }
}

loc_8052DE1C:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    goto loc_8052DF64;
}

loc_8052DE28:
{
}

loc_8052DE2C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_8052DE38;
    }
}

loc_8052DE30:
{
    r3 = r28;
    goto loc_8052DFC0;
}

loc_8052DE38:
{
}

loc_8052DE3C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_8052DE48;
    }
}

loc_8052DE40:
{
    r31 = 0;
    goto loc_8052DF10;
}

loc_8052DE48:
{
}

loc_8052DE4C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8052DE58;
    }
}

loc_8052DE50:
{
    r31 = 1;
    goto loc_8052DF10;
}

loc_8052DE58:
{
}

loc_8052DE5C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_8052DF64;
    }
}

loc_8052DE60:
{
    goto loc_8052DF10;
}

loc_8052DE64:
{
}

loc_8052DE68:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8052DE74;
    }
}

loc_8052DE6C:
{
    f0.d = MemoryInline::FlatReadFloat32((r26 + 80));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
}

loc_8052DE74:
{
    r0 = MemoryInline::FlatRead8((r26 + 67));
    r31 = 1;
}

loc_8052DE80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8052DE90;
    }
}

loc_8052DE84:
{
    f0.d = MemoryInline::FlatReadFloat32((r26 + 68));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
    goto loc_8052DEC8;
}

loc_8052DE90:
{
    r3 = MemoryInline::FlatRead32((r26 + 72));
    r4 = (r4 & 65535);
    f27.d = MemoryInline::FlatReadFloat32((r26 + 36));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 72));
    ctr = r12;
    ctx->lr = 0x8052DEACu;
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
    stackword19 = r24;
    MemoryInline::FlatWriteRam32((r1 + 80), r24);
    stackword20 = r0;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword19), static_cast<uint32_t>(stackword20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    f0.d = PpcFmulsInline(f0.d, f27.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
}

loc_8052DEC8:
{
    f0.d = MemoryInline::FlatReadFloat32(r25);
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_8052DED0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8052DED8;
    }
}

loc_8052DED4:
{
    f0.d = f31.d;
}

loc_8052DED8:
{
    f2.d = MemoryInline::FlatReadFloat32((r25 + 8));
    MemoryInline::FlatWriteFloat32(r25, f0.d);
    SetCRFloatResident(cr, 0, f2.d, f31.d);
}

loc_8052DEE4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8052DEEC;
    }
}

loc_8052DEE8:
{
    f2.d = f31.d;
}

loc_8052DEEC:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
    f0.d = MemoryInline::FlatReadFloat32(r25);
    MemoryInline::FlatWriteFloat32((r25 + 8), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_8052DF00:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8052DF10;
    }
}

loc_8052DF04:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    goto loc_8052DF64;
}

loc_8052DF10:
{
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r3 = (r1 + 40);
    r12 = (r1 + 44);
    ctx->lr = 0x8052DF20u;
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
        const auto regargs_result_80457338_57A1 = func_80457338_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80457338_57A1);
        r4 = static_cast<uint32_t>(regargs_result_80457338_57A1 >> 32);
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
    f3.d = MemoryInline::FlatReadFloat32(r25);
    r4 = r3;
    f2.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r25 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r25 + 12));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
}

loc_8052DF48:
{
    r7 = MemoryInline::FlatRead32((r1 + 40));
    r3 = (r7 - r27);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r0 = (r0 + r3);
    r0 = (static_cast<int32_t>(r0) >> 1);
}

loc_8052DF60:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r28))) {
        goto loc_8052DD40;
    }
}

loc_8052DF64:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_8052DF6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8052DFAC;
    }
}

loc_8052DF70:
{
}

loc_8052DF74:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8052DFAC;
    }
}

loc_8052DF78:
{
    r3 = (r30 - r27);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 28));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & 1);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r0 = (r0 + r3);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    r3 = (static_cast<int32_t>(r0) >> 1);
    MemoryInline::FlatWriteFloat32(r25, f3.d);
    MemoryInline::FlatWriteFloat32((r25 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r25 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r25 + 12), f0.d);
    goto loc_8052DFC0;
}

loc_8052DFAC:
{
    r0 = MemoryInline::FlatRead32((r1 + 40));
    r3 = (r0 - r27);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & 1);
    r0 = (r0 + r3);
    r3 = (static_cast<int32_t>(r0) >> 1);
}

loc_8052DFC0:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 192));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 176));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::FlatReadFloat64((r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 128);
    f27.d = MemoryInline::FlatReadFloat64((r1 + 128));
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 212));
    ctx->lr = r0;
    r1 = (r1 + 208);
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8052DC20(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8052DC20_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8052DC20 func_8052DC20 preserves=true fpr_mask=0x00000000
