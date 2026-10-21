#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80467F98(CpuContext* ctx);
extern "C" uint64_t func_80467F98_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804684A0(CpuContext* ctx);
extern "C" uint64_t func_804684A0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80468848(CpuContext* ctx);
extern "C" uint64_t func_80468848_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_804CBA00(CpuContext* ctx);
extern "C" uint64_t func_804CBA00_ra68_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804EDBB0(CpuContext* ctx);
extern "C" uint64_t func_804EDBB0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804EDCA0(CpuContext* ctx);
extern "C" uint64_t func_804EDCA0_ra0_0_18_0(CpuContext*);
extern "C" void func_804EF0D0(CpuContext* ctx);
extern "C" uint64_t func_804EF0D0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804EF160(CpuContext* ctx);
extern "C" uint64_t func_804EF160_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804EF5E0(CpuContext* ctx);
extern "C" uint64_t func_804EF5E0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804F19F0(CpuContext* ctx);
extern "C" uint64_t func_804F19F0_ra0_0_18_0(CpuContext*);
extern "C" void func_804F1A80(CpuContext* ctx);
extern "C" uint32_t func_804F1A80_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_804C0F30_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r15_addic_src_0 = 0;
    uint32_t r15_addic_src_1 = 0;
    uint32_t r15_addic_src_2 = 0;
    uint32_t r15_addic_src_3 = 0;
    uint32_t r18_rot_0 = 0;
    uint32_t r18_rot_1 = 0;
    uint32_t r18_rot_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t stackword20 = 0;
    uint32_t stackword21 = 0;
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
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x804C0F30u);
    goto loc_804C0F30;

loc_804C0F30:
{
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    r11 = (r1 + 96);
    MemoryInline::FlatWriteRamFloat64((r1 + 160), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 144), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    // inline leaf 0x80457454 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    // end of inlined leaf 0x80457454
    r0 = MemoryInline::FlatRead8((r13 + -15276));
    r20 = 0x80750000u;
    r15 = r3;
    r16 = r4;
}

loc_804C0F80:
{
    r20 = (r20 + -26112);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804C1334;
    }
}

loc_804C0F88:
{
    ctx->lr = 0x804C0F8Cu;
    if constexpr (KnownRegArgsCpuCall<0x804EDBB0u>(&func_804EDBB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_804EDBB0_18B7 = func_804EDBB0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804EDBB0_18B7);
        r4 = static_cast<uint32_t>(regargs_result_804EDBB0_18B7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
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
        InvokeDirectCpu<0x804EDBB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
    }
    r3 = (r20 + 0);
    r4 = 0;
    r5 = 5600;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    ctx->lr = 0x804C0FA0u;
    if constexpr (KnownRegArgsCpuCall<0x804F19F0u>(&func_804F19F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804F19F0_20C6 = func_804F19F0_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804F19F0_20C6);
        r4 = static_cast<uint32_t>(regargs_result_804F19F0_20C6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804F19F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = (r3 & 255);
    r0 = 1127219200;
    stackword20 = r3;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r17 = 0;
    f1.d = MemoryInline::FlatReadFloat64((r2 + -2136));
    r3 = 65536;
    stackword21 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r22 = r17;
    f29.d = MemoryInline::FlatReadFloat32((r2 + -2196));
    r26 = r17;
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword21), static_cast<uint32_t>(stackword20));
    r27 = r17;
    f30.d = MemoryInline::FlatReadFloat64((r2 + -2152));
    r29 = r17;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f31.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    r19 = (r20 + 0);
    r18_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(30));
    r18 = (r18_rot_1 & 1073741823);
    r23 = (r20 + 5648);
    r24 = (r20 + 5680);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f0.d));
    r28 = (r3 + -25536);
    r31 = 0;
    r30 = -1;
    MemoryInline::FlatWriteFloat32((r13 + -32616), f0.d);
    r14 = 0x804C0000u;
    r25 = 1;
    r21 = 0x804C0000u;
}

loc_804C1010:
{
    r3 = r17;
    r4 = (r21 + 5152);
    ctx->lr = 0x804C101Cu;
    if constexpr (KnownRegArgsCpuCall<0x804EF160u>(&func_804EF160)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_804EF160_2903 = func_804EF160_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804EF160_2903);
        r4 = static_cast<uint32_t>(regargs_result_804EF160_2903 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
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
        InvokeDirectCpu<0x804EF160u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
    }
    MemoryInline::FlatWrite32((r19 + 1360), r3);
    r3 = r17;
    r4 = (r14 + 5744);
    ctx->lr = 0x804C102Cu;
    if constexpr (KnownRegArgsCpuCall<0x804EF0D0u>(&func_804EF0D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_804EF0D0_30DC = func_804EF0D0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804EF0D0_30DC);
        r4 = static_cast<uint32_t>(regargs_result_804EF0D0_30DC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
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
        InvokeDirectCpu<0x804EF0D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
    }
    MemoryInline::FlatWrite32((r19 + 1356), r3);
    r3 = r17;
    MemoryInline::FlatWrite8((r19 + 1367), static_cast<uint8_t>(r22));
    MemoryInline::FlatWrite8((r13 + -15250), static_cast<uint8_t>(r22));
    MemoryInline::FlatWrite8((r13 + -15251), static_cast<uint8_t>(r22));
    MemoryInline::FlatWrite8((r13 + -15252), static_cast<uint8_t>(r22));
    MemoryInline::FlatWrite8((r13 + -15254), static_cast<uint8_t>(r22));
    MemoryInline::FlatWrite16((r13 + -15256), static_cast<uint16_t>(r22));
    MemoryInline::FlatWrite8((r13 + -15253), static_cast<uint8_t>(r22));
    MemoryInline::FlatWriteRamFloat64((r20 + 5648), f30.d);
    MemoryInline::FlatWriteRamFloat64((r20 + 5680), f30.d);
    MemoryInline::FlatWriteRamFloat64((r23 + 8), f30.d);
    MemoryInline::FlatWriteRamFloat64((r24 + 8), f30.d);
    MemoryInline::FlatWriteRamFloat64((r23 + 16), f30.d);
    MemoryInline::FlatWriteRamFloat64((r24 + 16), f30.d);
    MemoryInline::FlatWriteRamFloat64((r23 + 24), f30.d);
    MemoryInline::FlatWriteRamFloat64((r24 + 24), f30.d);
    MemoryInline::FlatWrite8((r19 + 1366), static_cast<uint8_t>(r25));
    ctx->lr = 0x804C1078u;
    if constexpr (KnownRegArgsCpuCall<0x804F1A80u>(&func_804F1A80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804F1A80_3C98 = func_804F1A80_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_804F1A80_3C98;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804F1A80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    guest_range_2 = MemoryInline::ResolveRangeHost((r19 + 92), 0, 1278u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 1277u, (r19 + 1369), static_cast<uint8_t>(r3));
    r0 = 253;
    f27.d = MemoryInline::FlatReadFloat32((r2 + -2196));
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r19 + 92), static_cast<uint8_t>(r0));
    f28.d = MemoryInline::FlatReadFloat32((r2 + -2188));
    f1.d = PpcFmulsInline(f27.d, f27.d);
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r19 + 95), static_cast<uint8_t>(r26));
    f2.d = MemoryInline::FlatReadFloat32((r13 + -20324));
    f0.d = PpcFmulsInline(f28.d, f28.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 116u, (r19 + 208), f2.d);
    r0 = MemoryInline::FlatRead32((r13 + -20320));
    MemoryInline::WriteResolved32(guest_range_2, 120u, (r19 + 212), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    r0 = MemoryInline::FlatRead32((r13 + -20316));
    MemoryInline::WriteResolved32(guest_range_2, 124u, (r19 + 216), r0);
    r0 = MemoryInline::FlatRead32((r13 + -20312));
    MemoryInline::WriteResolved32(guest_range_2, 128u, (r19 + 220), r0);
    r0 = MemoryInline::FlatRead32((r13 + -20308));
    MemoryInline::WriteResolved32(guest_range_2, 132u, (r19 + 224), r0);
    r0 = MemoryInline::FlatRead32((r13 + -15296));
    MemoryInline::WriteResolved32(guest_range_2, 136u, (r19 + 228), r0);
    r0 = MemoryInline::FlatRead32((r13 + -15292));
    MemoryInline::WriteResolved32(guest_range_2, 140u, (r19 + 232), r0);
    if constexpr (KnownRegArgsCpuCall<0x80468848u>(&func_80468848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80468848_45C3 = func_80468848_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80468848_45C3);
        r4 = static_cast<uint32_t>(regargs_result_80468848_45C3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80468848u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r19 + 228));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_804C10E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804C10F0;
    }
}

loc_804C10E8:
{
    f27.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f0.d));
    goto loc_804C10F4;
}

loc_804C10F0:
{
    f27.d = static_cast<double>(PpcForceSingleValueInline(f27.d - f0.d));
}

loc_804C10F4:
{
    f0.d = MemoryInline::FlatReadFloat32((r19 + 232));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_804C10FC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804C1108;
    }
}

loc_804C1100:
{
    f28.d = static_cast<double>(PpcForceSingleValueInline(f28.d + f0.d));
    goto loc_804C110C;
}

loc_804C1108:
{
    f28.d = static_cast<double>(PpcForceSingleValueInline(f28.d - f0.d));
}

loc_804C110C:
{
    SetCRFloatResident(cr, 0, f27.d, f28.d);
}

loc_804C1110:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804C1118;
    }
}

loc_804C1114:
{
    goto loc_804C111C;
}

loc_804C1118:
{
    f27.d = f28.d;
}

loc_804C111C:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f27.d));
}

loc_804C1124:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r19 + 176), 0, 1221u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 60u, (r19 + 236), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r19 + 200), f31.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r19 + 192), f31.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r19 + 184), f31.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, (r19 + 176), f31.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r19 + 204), f29.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r19 + 196), f29.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r19 + 188), f29.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r19 + 180), f29.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 1208u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_3, 1212u, (r19 + 1388), r27);
        MemoryInline::WriteResolved32(guest_range_3, 1208u, (r19 + 1384), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 1200u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_3, 1204u, (r19 + 1380), r27);
        MemoryInline::WriteResolved32(guest_range_3, 1200u, (r19 + 1376), r27);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 1108u, ((static_cast<uint32_t>(static_cast<uint16_t>(r28)) << 16) | static_cast<uint16_t>(r27)))) {
        MemoryInline::WriteResolved16(guest_range_3, 1108u, (r19 + 1284), r28);
        MemoryInline::WriteResolved16(guest_range_3, 1110u, (r19 + 1286), r27);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 1104u, ((static_cast<uint32_t>(static_cast<uint16_t>(r27)) << 16) | static_cast<uint16_t>(r28)))) {
        MemoryInline::WriteResolved16(guest_range_3, 1104u, (r19 + 1280), r27);
        MemoryInline::WriteResolved16(guest_range_3, 1106u, (r19 + 1282), r28);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 1112u, ((static_cast<uint32_t>(static_cast<uint16_t>(r27)) << 16) | static_cast<uint16_t>(r28)))) {
        MemoryInline::WriteResolved16(guest_range_3, 1112u, (r19 + 1288), r27);
        MemoryInline::WriteResolved16(guest_range_3, 1114u, (r19 + 1290), r28);
    }
    MemoryInline::WriteResolved8(guest_range_3, 1199u, (r19 + 1375), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_3, 1196u, (r19 + 1372), static_cast<uint8_t>(r25));
    MemoryInline::WriteResolved8(guest_range_3, 1197u, (r19 + 1373), static_cast<uint8_t>(r25));
    MemoryInline::WriteResolved8(guest_range_3, 1220u, (r19 + 1396), static_cast<uint8_t>(r25));
    MemoryInline::WriteResolved8(guest_range_3, 1198u, (r19 + 1374), static_cast<uint8_t>(r27));
    if ((static_cast<int32_t>(r16) == static_cast<int32_t>(0))) {
        goto loc_804C11A4;
    }
}

loc_804C1188:
{
}

loc_804C118C:
{
    if ((static_cast<int32_t>(r15) == static_cast<int32_t>(0))) {
        goto loc_804C11A4;
    }
}

loc_804C1190:
{
    r0 = (r18 * r31);
    MemoryInline::FlatWrite32((r19 + 1216), r18);
    r0 = (r15 + r0);
    MemoryInline::FlatWrite32((r19 + 1212), r0);
    goto loc_804C11AC;
}

loc_804C11A4:
{
    MemoryInline::FlatWrite32((r19 + 1216), r29);
    MemoryInline::FlatWrite32((r19 + 1212), r29);
}

loc_804C11AC:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r19 + 357), 0, 841u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 0u, (r19 + 357), static_cast<uint8_t>(r30));
    r5 = 0;
    r4 = 0;
    MemoryInline::WriteResolved8(guest_range_4, 56u, (r19 + 413), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_4, 112u, (r19 + 469), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_4, 168u, (r19 + 525), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_4, 224u, (r19 + 581), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_4, 280u, (r19 + 637), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_4, 336u, (r19 + 693), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_4, 392u, (r19 + 749), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_4, 448u, (r19 + 805), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_4, 504u, (r19 + 861), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_4, 560u, (r19 + 917), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_4, 616u, (r19 + 973), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_4, 672u, (r19 + 1029), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_4, 728u, (r19 + 1085), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_4, 784u, (r19 + 1141), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_4, 840u, (r19 + 1197), static_cast<uint8_t>(r30));
    goto loc_804C120C;
}

loc_804C11F8:
{
    r0 = MemoryInline::FlatRead32((r19 + 1212));
    r5 = (r5 + 1);
    r3 = (r0 + r4);
    r4 = (r4 + 56);
    MemoryInline::FlatWrite8((r3 + 41), static_cast<uint8_t>(r30));
}

loc_804C120C:
{
    r0 = MemoryInline::FlatRead32((r19 + 1216));
}

loc_804C1214:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r0))) {
        goto loc_804C11F8;
    }
}

loc_804C1218:
{
    r17 = (r17 + 1);
    r31 = (r31 + 56);
}

loc_804C1224:
{
    r19 = (r19 + 1400);
    if ((static_cast<int32_t>(r17) < static_cast<int32_t>(4))) {
        goto loc_804C1010;
    }
}

loc_804C122C:
{
    r3 = 1;
    // inline leaf 0x804F3640 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r13 + -14144), r3);
    // end of inlined leaf 0x804F3640
    f28.d = MemoryInline::FlatReadFloat32((r13 + -32640));
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x804D12F0
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2128));
    MemoryInline::FlatWriteFloat32((r13 + -32640), f28.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f28.d / f0.d));
    MemoryInline::FlatWriteFloat32((r13 + -17952), f0.d);
    MemoryInline::FlatWriteFloat32((r13 + -15248), f0.d);
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl3_0x804D1330:
{
}

loc_inl3_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x804D1344;
    }
}

loc_inl3_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl3_0x804D1348;
}

loc_inl3_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl3_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
}

loc_inl3_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = (r20 + 0);
    r15 = 3;
    r16 = (r3 + 4200);
    r14 = 1;
}

loc_804C1264:
{
    ctx->lr = 0x804C1268u;
    if constexpr (KnownRegArgsCpuCall<0x804EDCA0u>(&func_804EDCA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804EDCA0_6B40 = func_804EDCA0_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804EDCA0_6B40);
        r4 = static_cast<uint32_t>(regargs_result_804EDCA0_6B40 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804EDCA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_804C126C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_804C127C;
    }
}

loc_804C1270:
{
    r3 = r15;
    r4 = 0;
    ctx->lr = 0x804C127Cu;
    if constexpr (KnownRegArgsCpuCall<0x804EF5E0u>(&func_804EF5E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804EF5E0_6F3A = func_804EF5E0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804EF5E0_6F3A);
        r4 = static_cast<uint32_t>(regargs_result_804EF5E0_6F3A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804EF5E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_804C127C:
{
    r15_addic_src_2 = r15;
    r15 = (r15_addic_src_2 + -1);
}

loc_804C1280:
{
    MemoryInline::FlatWrite8((r16 + 1364), static_cast<uint8_t>(r14));
    r16 = (r16 + -1400);
    if ((static_cast<int32_t>(r15) >= static_cast<int32_t>(0))) {
        goto loc_804C1264;
    }
}

loc_804C128C:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -2124));
    r14 = (r20 + 5600);
    f0.d = MemoryInline::FlatReadFloat32((r13 + -20256));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -2196));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r20 + 5600), f3.d);
    MemoryInline::FlatWriteRamFloat32((r14 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r14 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32((r14 + 12), f2.d);
    MemoryInline::FlatWriteRamFloat32((r14 + 16), f2.d);
    ctx->lr = 0x804C12BCu;
    if constexpr (KnownRegArgsCpuCall<0x80467F98u>(&func_80467F98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80467F98_76D8 = func_80467F98_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80467F98_76D8);
        r4 = static_cast<uint32_t>(regargs_result_80467F98_76D8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
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
        InvokeDirectCpu<0x80467F98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
    }
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -2124));
    f0.d = MemoryInline::FlatReadFloat32((r13 + -20256));
    MemoryInline::FlatWriteRamFloat32((r14 + 20), f1.d);
    f1.d = PpcFmulsInline(f2.d, f0.d);
    ctx->lr = 0x804C12D4u;
    if constexpr (KnownRegArgsCpuCall<0x804684A0u>(&func_804684A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_804684A0_812E = func_804684A0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804684A0_812E);
        r4 = static_cast<uint32_t>(regargs_result_804684A0_812E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
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
        InvokeDirectCpu<0x804684A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
    }
    f3.d = (-(f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -2124));
    f0.d = MemoryInline::FlatReadFloat32((r13 + -20256));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d));
    MemoryInline::FlatWriteRamFloat32((r14 + 28), f2.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r14 + 24), f3.d);
    MemoryInline::FlatWriteRamFloat32((r14 + 32), f2.d);
    ctx->lr = 0x804C12FCu;
    if constexpr (KnownRegArgsCpuCall<0x804684A0u>(&func_804684A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_804684A0_8C44 = func_804684A0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804684A0_8C44);
        r4 = static_cast<uint32_t>(regargs_result_804684A0_8C44 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
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
        InvokeDirectCpu<0x804684A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
    }
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -2124));
    f0.d = MemoryInline::FlatReadFloat32((r13 + -20256));
    MemoryInline::FlatWriteRamFloat32((r14 + 36), f1.d);
    f1.d = PpcFmulsInline(f2.d, f0.d);
    ctx->lr = 0x804C1314u;
    if constexpr (KnownRegArgsCpuCall<0x80467F98u>(&func_80467F98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80467F98_969A = func_80467F98_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80467F98_969A);
        r4 = static_cast<uint32_t>(regargs_result_80467F98_969A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
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
        InvokeDirectCpu<0x80467F98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
    }
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    r0 = 1;
    MemoryInline::FlatWriteRamFloat32((r14 + 44), f0.d);
    r3 = MemoryInline::FlatRead32((r13 + -20328));
    MemoryInline::FlatWriteRamFloat32((r14 + 40), f1.d);
    MemoryInline::FlatWrite8((r13 + -15276), static_cast<uint8_t>(r0));
    ctx->lr = 0x804C1334u;
    if constexpr (KnownRegArgsCpuCall<0x804CBA00u>(&func_804CBA00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_804CBA00_A0DF = func_804CBA00_ra68_1fe_18_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804CBA00_A0DF);
        r4 = static_cast<uint32_t>(regargs_result_804CBA00_A0DF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
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
        InvokeDirectCpu<0x804CBA00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
    }
}

loc_804C1334:
{
    r11 = (r1 + 96);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::FlatReadFloat64((r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::FlatReadFloat64((r1 + 96));
    // inline leaf 0x804574A0 (19 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    // end of inlined leaf 0x804574A0
    r0 = MemoryInline::FlatRead32((r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804C0F30(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804C0F30_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804C0F30 func_804C0F30 preserves=true fpr_mask=0x00000000
