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

extern "C" uint64_t func_8051E1CC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r3_rot_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r13 = ctx->gpr[13];
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
    const uint32_t r28_entry = r28;

    goto loc_8051E1CC;

loc_8051E1CC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = 0x80770000u;
    r30 = (r30 + -29120);
    r28 = r3;
    // inline leaf 0x804D3FF0 (3 guest instruction(s))
    r3 = 0x80000000u;
    r3 = MemoryInline::FlatRead32((r3 + 228));
    // end of inlined leaf 0x804D3FF0
}

loc_8051E1FC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8051E208;
    }
}

loc_8051E200:
{
    r3 = -1;
    goto loc_8051E240;
}

loc_8051E208:
{
    // inline leaf 0x8051DF30 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -13696));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x8051DF30
}

loc_8051E210:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8051E220;
    }
}

loc_8051E214:
{
    // inline leaf 0x8051DF44 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -13696));
    r0 = (r3 + -2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 134217727);
    // end of inlined leaf 0x8051DF44
}

loc_8051E21C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8051E228;
    }
}

loc_8051E220:
{
    r3 = -10;
    goto loc_8051E240;
}

loc_8051E228:
{
    // inline leaf 0x8051DF58 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -13696));
    r0 = (r3 + -3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_3 & 134217727);
    // end of inlined leaf 0x8051DF58
}

loc_8051E230:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8051E23C;
    }
}

loc_8051E234:
{
    r3 = -26;
    goto loc_8051E240;
}

loc_8051E23C:
{
    r3 = 0;
}

loc_8051E240:
{
}

loc_8051E244:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_8051E24C;
    }
}

loc_8051E248:
{
    goto loc_8051E34C;
}

loc_8051E24C:
{
    r0 = MemoryInline::FlatRead32((r13 + -13688));
    r0 = (r0 & 1);
}

loc_8051E254:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8051E2B0;
    }
}

loc_8051E258:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_6 & 1);
    // end of inlined leaf 0x804D12F0
    r0 = MemoryInline::FlatRead32((r13 + -13688));
    r31 = r3;
    r0 = (r0 & 1);
}

loc_8051E268:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8051E2A8;
    }
}

loc_8051E26C:
{
    r3 = (r30 + 0);
    ctx->lr = 0x8051E274u;
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
    r3 = (r30 + 24);
    ctx->lr = 0x8051E27Cu;
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
    r3 = (r30 + 64);
    r4 = 0;
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 96);
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

loc_8051E2A8:
{
    r3 = r31;
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
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_7 & 1);
}

loc_inl5_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_8051E2B0:
{
    r3 = (r30 + 0);
    ctx->lr = 0x8051E2B8u;
    if constexpr (KnownRegArgsCpuCall<0x804D25A0u>(&func_804D25A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_804D25A0_1F60 = func_804D25A0_ra68_1fe_8_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = regargs_result_804D25A0_1F60;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r13 = ctx->gpr[13];
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
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = (r30 + 64);
    r4 = 0;
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r31 = 0x80630000u;
    r4 = 0x80630000u;
    r3 = (r31 + 6732);
    r5 = (r1 + 8);
    r4 = (r4 + 6712);
    r6 = 0;
    ctx->lr = 0x8051E2E4u;
    if constexpr (KnownRegArgsCpuCall<0x8051EBE0u>(&func_8051EBE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8051EBE0_27DC = func_8051EBE0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8051EBE0_27DC);
        r4 = static_cast<uint32_t>(regargs_result_8051EBE0_27DC >> 32);
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

loc_8051E2E8:
{
    r29 = r3;
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_8051E340;
    }
}

loc_8051E2F0:
{
    MemoryInline::FlatWriteRam32((r30 + 64), r28);
    r3 = (r31 + 6732);
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r6 = (r30 + 64);
    r8 = (r30 + 96);
    r5 = 34;
    r7 = 32;
    r9 = 32;
    ctx->lr = 0x8051E314u;
    if constexpr (KnownRegArgsCpuCall<0x8051EC8Cu>(&func_8051EC8C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_8051EC8C_2CA7 = func_8051EC8C_ra70_1fe_18_0(ctx, r4, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8051EC8C_2CA7);
        r4 = static_cast<uint32_t>(regargs_result_8051EC8C_2CA7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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

loc_8051E318:
{
    r29 = r3;
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_8051E324;
    }
}

loc_8051E320:
{
    r29 = MemoryInline::FlatRead32((r30 + 96));
}

loc_8051E324:
{
    r3 = 0x80630000u;
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r3 + 6732);
    ctx->lr = 0x8051E334u;
    if constexpr (KnownRegArgsCpuCall<0x8051EC58u>(&func_8051EC58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8051EC58_350E = func_8051EC58_ra10_0_8_0(ctx, r4);
        r3 = regargs_result_8051EC58_350E;
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

loc_8051E338:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(0))) {
        goto loc_8051E340;
    }
}

loc_8051E33C:
{
    r29 = r3;
}

loc_8051E340:
{
    r3 = (r30 + 0);
    ctx->lr = 0x8051E348u;
    if constexpr (KnownRegArgsCpuCall<0x804D2680u>(&func_804D2680)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[28] = r28;
        const auto regargs_result_804D2680_38B4 = func_804D2680_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D2680_38B4);
        r4 = static_cast<uint32_t>(regargs_result_804D2680_38B4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r13 = ctx->gpr[13];
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
        r13 = ctx->gpr[13];
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
    r3 = r29;
}

loc_8051E34C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->gpr[28] = r28_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8051E1CC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8051E1CC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x0FFFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8051E1CC func_8051E1CC preserves=true fpr_mask=0x00000000
