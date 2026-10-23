#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804D2560(CpuContext* ctx);
extern "C" void func_804D2560_ra8_0_0_0(CpuContext*, uint32_t);
extern "C" void func_804D25A0(CpuContext* ctx);
extern "C" uint32_t func_804D25A0_ra68_1fe_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804D2680(CpuContext* ctx);
extern "C" uint64_t func_804D2680_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8051EBE0(CpuContext* ctx);
extern "C" uint64_t func_8051EBE0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8051EC58(CpuContext* ctx);
extern "C" uint32_t func_8051EC58_ra10_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8051EC8C(CpuContext* ctx);
extern "C" uint64_t func_8051EC8C_ra70_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8051E36C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;

    goto loc_8051E36C;

loc_8051E36C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r29 = 0x80770000u;
    r27 = r3;
    r31 = r4;
    r29 = (r29 + -29120);
    // inline leaf 0x804D3FF0 (3 guest instruction(s))
    r3 = 0x80000000u;
    r3 = MemoryInline::FlatRead32((r3 + 228));
    // end of inlined leaf 0x804D3FF0
}

loc_8051E398:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8051E3A4;
    }
}

loc_8051E39C:
{
    r3 = -1;
    goto loc_8051E3C8;
}

loc_8051E3A4:
{
    // inline leaf 0x8051DF30 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -13696));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x8051DF30
}

loc_8051E3AC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8051E3BC;
    }
}

loc_8051E3B0:
{
    // inline leaf 0x8051DF44 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -13696));
    r0 = (r3 + -2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 134217727);
    // end of inlined leaf 0x8051DF44
}

loc_8051E3B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8051E3C4;
    }
}

loc_8051E3BC:
{
    r3 = -10;
    goto loc_8051E3C8;
}

loc_8051E3C4:
{
    r3 = 0;
}

loc_8051E3C8:
{
}

loc_8051E3CC:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_8051E3D4;
    }
}

loc_8051E3D0:
{
    goto loc_8051E510;
}

loc_8051E3D4:
{
    r0 = MemoryInline::FlatRead32((r13 + -13688));
    r0 = (r0 & 1);
}

loc_8051E3DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8051E438;
    }
}

loc_8051E3E0:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_5 & 1);
    // end of inlined leaf 0x804D12F0
    r0 = MemoryInline::FlatRead32((r13 + -13688));
    r30 = r3;
    r0 = (r0 & 1);
}

loc_8051E3F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8051E430;
    }
}

loc_8051E3F4:
{
    r3 = (r29 + 0);
    ctx->lr = 0x8051E3FCu;
    if constexpr (KnownRegArgsCpuCall<0x804D2560u>(&func_804D2560)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_804D2560_ra8_0_0_0(ctx, r3);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x804D2560u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    }
    r3 = (r29 + 24);
    ctx->lr = 0x8051E404u;
    if constexpr (KnownRegArgsCpuCall<0x804D2560u>(&func_804D2560)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_804D2560_ra8_0_0_0(ctx, r3);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x804D2560u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    }
    r3 = (r29 + 64);
    r4 = 0;
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 96);
    r4 = 0;
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r13 + -13688));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r13 + -13688), r0);
}

loc_8051E430:
{
    r3 = r30;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl5_0x804D1330:
{
}

loc_inl5_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl5_0x804D1344;
    }
}

loc_inl5_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl5_0x804D1348;
}

loc_inl5_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl5_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_6 & 1);
}

loc_inl5_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_8051E438:
{
    r3 = (r29 + 0);
    ctx->lr = 0x8051E440u;
    if constexpr (KnownRegArgsCpuCall<0x804D25A0u>(&func_804D25A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        const auto regargs_result_804D25A0_1E42 = func_804D25A0_ra68_1fe_8_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = regargs_result_804D25A0_1E42;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r27 = ctx->gpr[27];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804D25A0u>(ctx);
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
        r13 = ctx->gpr[13];
        r27 = ctx->gpr[27];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r30 = 0x80630000u;
    r4 = 0x80630000u;
    r3 = (r30 + 6752);
    r5 = (r1 + 8);
    r4 = (r4 + 6712);
    r6 = 0;
    ctx->lr = 0x8051E45Cu;
    if constexpr (KnownRegArgsCpuCall<0x8051EBE0u>(&func_8051EBE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8051EBE0_26A0 = func_8051EBE0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8051EBE0_26A0);
        r4 = static_cast<uint32_t>(regargs_result_8051EBE0_26A0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8051EBE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8051E460:
{
    r28 = r3;
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_8051E504;
    }
}

loc_8051E468:
{
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r30 + 6752);
    r8 = (r29 + 96);
    r5 = 15;
    r6 = 0;
    r7 = 0;
    r9 = 32;
    ctx->lr = 0x8051E488u;
    if constexpr (KnownRegArgsCpuCall<0x8051EC8Cu>(&func_8051EC8C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        const auto regargs_result_8051EC8C_2B4A = func_8051EC8C_ra70_1fe_18_0(ctx, r4, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8051EC8C_2B4A);
        r4 = static_cast<uint32_t>(regargs_result_8051EC8C_2B4A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8051EC8Cu>(ctx);
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_8051E48C:
{
    r28 = r3;
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_8051E4E8;
    }
}

loc_8051E494:
{
    r28 = MemoryInline::FlatRead32((r29 + 96));
}

loc_8051E49C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8051E4B0;
    }
}

loc_8051E4A0:
{
}

loc_8051E4A4:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(-35))) {
        goto loc_8051E4B0;
    }
}

loc_8051E4A8:
{
}

loc_8051E4AC:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(-36))) {
        goto loc_8051E4E8;
    }
}

loc_8051E4B0:
{
    r0 = 0;
}

loc_8051E4B8:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(r0))) {
        goto loc_8051E4D0;
    }
}

loc_8051E4BC:
{
    r3 = (r29 + 96);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWrite32((r27 + 4), r3);
    MemoryInline::FlatWrite32(r27, r0);
}

loc_8051E4D0:
{
    r0 = 0;
}

loc_8051E4D8:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(r0))) {
        goto loc_8051E4E8;
    }
}

loc_8051E4DC:
{
    r3 = (r29 + 96);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    MemoryInline::FlatWrite32(r31, r0);
}

loc_8051E4E8:
{
    r3 = 0x80630000u;
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r3 + 6752);
    ctx->lr = 0x8051E4F8u;
    if constexpr (KnownRegArgsCpuCall<0x8051EC58u>(&func_8051EC58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8051EC58_385F = func_8051EC58_ra10_0_8_0(ctx, r4);
        r3 = regargs_result_8051EC58_385F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8051EC58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_8051E4FC:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(0))) {
        goto loc_8051E504;
    }
}

loc_8051E500:
{
    r28 = r3;
}

loc_8051E504:
{
    r3 = (r29 + 0);
    ctx->lr = 0x8051E50Cu;
    if constexpr (KnownRegArgsCpuCall<0x804D2680u>(&func_804D2680)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        const auto regargs_result_804D2680_3C3F = func_804D2680_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D2680_3C3F);
        r4 = static_cast<uint32_t>(regargs_result_804D2680_3C3F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804D2680u>(ctx);
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
        r13 = ctx->gpr[13];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = r28;
}

loc_8051E510:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8051E36C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8051E36C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x07FFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8051E36C func_8051E36C preserves=true fpr_mask=0x00000000
