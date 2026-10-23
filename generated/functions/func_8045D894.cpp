#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80456C40(CpuContext* ctx);
extern "C" uint64_t func_80456C40_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80456C5C(CpuContext* ctx);
extern "C" uint32_t func_80456C5C_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8045BB60(CpuContext* ctx);
extern "C" uint64_t func_8045BB60_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8045BCE4(CpuContext* ctx);
extern "C" uint64_t func_8045BCE4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8045C15C(CpuContext* ctx);
extern "C" uint64_t func_8045C15C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8045C718(CpuContext* ctx);
extern "C" uint64_t func_8045C718_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8045C958(CpuContext* ctx);
extern "C" uint64_t func_8045C958_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8045CC08(CpuContext* ctx);
extern "C" uint64_t func_8045CC08_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8045D0F8(CpuContext* ctx);
extern "C" uint64_t func_8045D0F8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8045FE60(CpuContext* ctx);
extern "C" uint64_t func_8045FE60_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8046444C(CpuContext* ctx);
extern "C" uint64_t func_8046444C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8045D894_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
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
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_8045D894;

loc_8045D894:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -720), 0, 728u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -720), r1);
    r1 = (r1 + -720);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 724u, (r1 + 724), r0);
    r24 = 32;
    r22 = 0x80570000u;
    r25 = r3;
    r26 = r4;
    r15 = r5;
    r27 = r6;
    r28 = r7;
    r22 = (r22 + 13040);
    r21 = (r1 + 639);
    r17 = 0;
    r20 = 0x80610000u;
    r23 = 37;
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r1 + 9), static_cast<uint8_t>(r24));
    goto loc_8045E11C;
}

loc_8045D8DC:
{
    r3 = r15;
    r4 = 37;
    if constexpr (KnownRegArgsCpuCall<0x8045FE60u>(&func_8045FE60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045FE60_1461 = func_8045FE60_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8045FE60_1461);
        r4 = static_cast<uint32_t>(regargs_result_8045FE60_1461 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8045FE60u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8045D8EC:
{
    r16 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8045D930;
    }
}

loc_8045D8F4:
{
    r3 = r15;
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_178F = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_178F);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_178F >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8045D900:
{
    r5 = r3;
    r17 = (r17 + r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045E128;
    }
}

loc_8045D90C:
{
    r12 = r25;
    r3 = r26;
    r4 = r15;
    ctr = r12;
    ctx->lr = 0x8045D920u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
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
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
}

loc_8045D924:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8045E128;
    }
}

loc_8045D928:
{
    r3 = -1;
    goto loc_8045E12C;
}

loc_8045D930:
{
    r5 = (r3 - r15);
    r17 = (r17 + r5);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8045D960;
    }
}

loc_8045D93C:
{
    r12 = r25;
    r3 = r26;
    r4 = r15;
    ctr = r12;
    ctx->lr = 0x8045D950u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
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
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
}

loc_8045D954:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8045D960;
    }
}

loc_8045D958:
{
    r3 = -1;
    goto loc_8045E12C;
}

loc_8045D960:
{
    r3 = r16;
    r4 = r27;
    r5 = (r1 + 112);
    ctx->lr = 0x8045D970u;
    if constexpr (KnownRegArgsCpuCall<0x8045C15Cu>(&func_8045C15C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->ctr = ctr;
        const auto regargs_result_8045C15C_2580 = func_8045C15C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045C15C_2580);
        r4 = static_cast<uint32_t>(regargs_result_8045C15C_2580 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045C15Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        ctr = ctx->ctr;
    }
    r4 = MemoryInline::FlatRead8((r1 + 117));
    r15 = r3;
    r0 = (r4 + -37);
}

loc_8045D980:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(83))) {
        goto loc_8045DF3C;
    }
}

loc_8045D984:
{
    r3 = (r20 + -2152);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8045DF2Cu:
        goto loc_8045DF2C;
        break;
    case 0x8045DF3Cu:
        goto loc_8045DF3C;
        break;
    case 0x8045DCC0u:
        goto loc_8045DCC0;
        break;
    case 0x8045DC50u:
        goto loc_8045DC50;
        break;
    case 0x8045DAF4u:
        goto loc_8045DAF4;
        break;
    case 0x8045DF0Cu:
        goto loc_8045DF0C;
        break;
    case 0x8045D998u:
        goto loc_8045D998;
        break;
    case 0x8045DE54u:
        goto loc_8045DE54;
        break;
    case 0x8045DD30u:
        goto loc_8045DD30;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[12] = r12;
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
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_8045D998:
{
    r0 = MemoryInline::FlatRead8((r1 + 116));
}

loc_8045D9A0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8045D9B8;
    }
}

loc_8045D9A4:
{
    r3 = r27;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x80456C5Cu>(&func_80456C5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_80456C5C_3441 = func_80456C5C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80456C5C_3441;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x80456C5Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
    r31 = MemoryInline::FlatRead32(r3);
    goto loc_8045DA40;
}

loc_8045D9B8:
{
}

loc_8045D9BC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_8045D9D8;
    }
}

loc_8045D9C0:
{
    r3 = r27;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x80456C5Cu>(&func_80456C5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_80456C5C_3950 = func_80456C5C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80456C5C_3950;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x80456C5Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
    r30 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8045DA40;
}

loc_8045D9D8:
{
}

loc_8045D9DC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_8045D9F8;
    }
}

loc_8045D9E0:
{
    r3 = r27;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x80456C5Cu>(&func_80456C5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_80456C5C_3E8E = func_80456C5C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80456C5C_3E8E;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x80456C5Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
    r30 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8045DA40;
}

loc_8045D9F8:
{
}

loc_8045D9FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_8045DA14;
    }
}

loc_8045DA00:
{
    r3 = r27;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x80456C5Cu>(&func_80456C5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_80456C5C_43CC = func_80456C5C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80456C5C_43CC;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x80456C5Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
    r31 = MemoryInline::FlatRead32(r3);
    goto loc_8045DA40;
}

loc_8045DA14:
{
}

loc_8045DA18:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_8045DA30;
    }
}

loc_8045DA1C:
{
    r3 = r27;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x80456C5Cu>(&func_80456C5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_80456C5C_48DB = func_80456C5C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80456C5C_48DB;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x80456C5Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
    r31 = MemoryInline::FlatRead32(r3);
    goto loc_8045DA40;
}

loc_8045DA30:
{
    r3 = r27;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x80456C5Cu>(&func_80456C5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_80456C5C_4D55 = func_80456C5C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80456C5C_4D55;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x80456C5Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
    r31 = MemoryInline::FlatRead32(r3);
}

loc_8045DA40:
{
    r0 = MemoryInline::FlatRead8((r1 + 116));
}

loc_8045DA48:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8045DA50;
    }
}

loc_8045DA4C:
{
    r31 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
}

loc_8045DA50:
{
}

loc_8045DA54:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8045DA5C;
    }
}

loc_8045DA58:
{
    r31 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
}

loc_8045DA5C:
{
}

loc_8045DA60:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(4))) {
        goto loc_8045DA6C;
    }
}

loc_8045DA64:
{
}

loc_8045DA68:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_8045DAB0;
    }
}

loc_8045DA6C:
{
    r9 = MemoryInline::FlatRead32((r1 + 112));
    r4 = r29;
    r8 = MemoryInline::FlatRead32((r1 + 116));
    r3 = r30;
    r7 = MemoryInline::FlatRead32((r1 + 120));
    r5 = (r1 + 640);
    r0 = MemoryInline::FlatRead32((r1 + 124));
    r6 = (r1 + 96);
    MemoryInline::FlatWriteRam32((r1 + 96), r9);
    MemoryInline::FlatWriteRam32((r1 + 100), r8);
    MemoryInline::FlatWriteRam32((r1 + 104), r7);
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    ctx->lr = 0x8045DAA0u;
    if constexpr (KnownRegArgsCpuCall<0x8045C958u>(&func_8045C958)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->ctr = ctr;
        const auto regargs_result_8045C958_56D0 = func_8045C958_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045C958_56D0);
        r4 = static_cast<uint32_t>(regargs_result_8045C958_56D0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045C958u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        ctr = ctx->ctr;
    }
}

loc_8045DAA4:
{
    r18 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045DF3C;
    }
}

loc_8045DAAC:
{
    goto loc_8045DAEC;
}

loc_8045DAB0:
{
    r8 = MemoryInline::FlatRead32((r1 + 112));
    r3 = r31;
    r7 = MemoryInline::FlatRead32((r1 + 116));
    r4 = (r1 + 640);
    r6 = MemoryInline::FlatRead32((r1 + 120));
    r5 = (r1 + 80);
    r0 = MemoryInline::FlatRead32((r1 + 124));
    MemoryInline::FlatWriteRam32((r1 + 80), r8);
    MemoryInline::FlatWriteRam32((r1 + 84), r7);
    MemoryInline::FlatWriteRam32((r1 + 88), r6);
    MemoryInline::FlatWriteRam32((r1 + 92), r0);
    if constexpr (KnownRegArgsCpuCall<0x8045C718u>(&func_8045C718)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_8045C718_5E66 = func_8045C718_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045C718_5E66);
        r4 = static_cast<uint32_t>(regargs_result_8045C718_5E66 >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x8045C718u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
}

loc_8045DAE4:
{
    r18 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045DF3C;
    }
}

loc_8045DAEC:
{
    r19 = (r21 - r18);
    goto loc_8045DF80;
}

loc_8045DAF4:
{
    r0 = MemoryInline::FlatRead8((r1 + 116));
}

loc_8045DAFC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8045DB14;
    }
}

loc_8045DB00:
{
    r3 = r27;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x80456C5Cu>(&func_80456C5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_80456C5C_647B = func_80456C5C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80456C5C_647B;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x80456C5Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
    r31 = MemoryInline::FlatRead32(r3);
    goto loc_8045DB9C;
}

loc_8045DB14:
{
}

loc_8045DB18:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_8045DB34;
    }
}

loc_8045DB1C:
{
    r3 = r27;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x80456C5Cu>(&func_80456C5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_80456C5C_698A = func_80456C5C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80456C5C_698A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x80456C5Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
    r30 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8045DB9C;
}

loc_8045DB34:
{
}

loc_8045DB38:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_8045DB54;
    }
}

loc_8045DB3C:
{
    r3 = r27;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x80456C5Cu>(&func_80456C5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_80456C5C_6EC8 = func_80456C5C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80456C5C_6EC8;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x80456C5Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
    r30 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8045DB9C;
}

loc_8045DB54:
{
}

loc_8045DB58:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_8045DB70;
    }
}

loc_8045DB5C:
{
    r3 = r27;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x80456C5Cu>(&func_80456C5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_80456C5C_7406 = func_80456C5C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80456C5C_7406;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x80456C5Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
    r31 = MemoryInline::FlatRead32(r3);
    goto loc_8045DB9C;
}

loc_8045DB70:
{
}

loc_8045DB74:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_8045DB8C;
    }
}

loc_8045DB78:
{
    r3 = r27;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x80456C5Cu>(&func_80456C5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_80456C5C_7915 = func_80456C5C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80456C5C_7915;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x80456C5Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
    r31 = MemoryInline::FlatRead32(r3);
    goto loc_8045DB9C;
}

loc_8045DB8C:
{
    r3 = r27;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x80456C5Cu>(&func_80456C5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_80456C5C_7D8F = func_80456C5C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80456C5C_7D8F;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x80456C5Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
    r31 = MemoryInline::FlatRead32(r3);
}

loc_8045DB9C:
{
    r0 = MemoryInline::FlatRead8((r1 + 116));
}

loc_8045DBA4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8045DBAC;
    }
}

loc_8045DBA8:
{
    r31 = (r31 & 65535);
}

loc_8045DBAC:
{
}

loc_8045DBB0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8045DBB8;
    }
}

loc_8045DBB4:
{
    r31 = (r31 & 255);
}

loc_8045DBB8:
{
}

loc_8045DBBC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(4))) {
        goto loc_8045DBC8;
    }
}

loc_8045DBC0:
{
}

loc_8045DBC4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_8045DC0C;
    }
}

loc_8045DBC8:
{
    r9 = MemoryInline::FlatRead32((r1 + 112));
    r4 = r29;
    r8 = MemoryInline::FlatRead32((r1 + 116));
    r3 = r30;
    r7 = MemoryInline::FlatRead32((r1 + 120));
    r5 = (r1 + 640);
    r0 = MemoryInline::FlatRead32((r1 + 124));
    r6 = (r1 + 64);
    MemoryInline::FlatWriteRam32((r1 + 64), r9);
    MemoryInline::FlatWriteRam32((r1 + 68), r8);
    MemoryInline::FlatWriteRam32((r1 + 72), r7);
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    ctx->lr = 0x8045DBFCu;
    if constexpr (KnownRegArgsCpuCall<0x8045C958u>(&func_8045C958)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->ctr = ctr;
        const auto regargs_result_8045C958_86BE = func_8045C958_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045C958_86BE);
        r4 = static_cast<uint32_t>(regargs_result_8045C958_86BE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045C958u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        ctr = ctx->ctr;
    }
}

loc_8045DC00:
{
    r18 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045DF3C;
    }
}

loc_8045DC08:
{
    goto loc_8045DC48;
}

loc_8045DC0C:
{
    r8 = MemoryInline::FlatRead32((r1 + 112));
    r3 = r31;
    r7 = MemoryInline::FlatRead32((r1 + 116));
    r4 = (r1 + 640);
    r6 = MemoryInline::FlatRead32((r1 + 120));
    r5 = (r1 + 48);
    r0 = MemoryInline::FlatRead32((r1 + 124));
    MemoryInline::FlatWriteRam32((r1 + 48), r8);
    MemoryInline::FlatWriteRam32((r1 + 52), r7);
    MemoryInline::FlatWriteRam32((r1 + 56), r6);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    if constexpr (KnownRegArgsCpuCall<0x8045C718u>(&func_8045C718)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_8045C718_8E54 = func_8045C718_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045C718_8E54);
        r4 = static_cast<uint32_t>(regargs_result_8045C718_8E54 >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x8045C718u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
}

loc_8045DC40:
{
    r18 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045DF3C;
    }
}

loc_8045DC48:
{
    r19 = (r21 - r18);
    goto loc_8045DF80;
}

loc_8045DC50:
{
    r0 = MemoryInline::FlatRead8((r1 + 116));
}

loc_8045DC58:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(9))) {
        goto loc_8045DC70;
    }
}

loc_8045DC5C:
{
    r3 = r27;
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x80456C5Cu>(&func_80456C5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_80456C5C_9469 = func_80456C5C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80456C5C_9469;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x80456C5Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
    f1.d = MemoryInline::FlatReadFloat64(r3);
    goto loc_8045DC80;
}

loc_8045DC70:
{
    r3 = r27;
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x80456C5Cu>(&func_80456C5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_80456C5C_98E9 = func_80456C5C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80456C5C_98E9;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x80456C5Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
    f1.d = MemoryInline::FlatReadFloat64(r3);
}

loc_8045DC80:
{
    r7 = MemoryInline::FlatRead32((r1 + 112));
    r3 = (r1 + 640);
    r6 = MemoryInline::FlatRead32((r1 + 116));
    r4 = (r1 + 32);
    r5 = MemoryInline::FlatRead32((r1 + 120));
    r0 = MemoryInline::FlatRead32((r1 + 124));
    MemoryInline::FlatWriteRam32((r1 + 32), r7);
    MemoryInline::FlatWriteRam32((r1 + 36), r6);
    MemoryInline::FlatWriteRam32((r1 + 40), r5);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    ctx->lr = 0x8045DCACu;
    if constexpr (KnownRegArgsCpuCall<0x8045D0F8u>(&func_8045D0F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8045D0F8_9F3A = func_8045D0F8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045D0F8_9F3A);
        r4 = static_cast<uint32_t>(regargs_result_8045D0F8_9F3A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045D0F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        ctr = ctx->ctr;
    }
}

loc_8045DCB0:
{
    r18 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045DF3C;
    }
}

loc_8045DCB8:
{
    r19 = (r21 - r3);
    goto loc_8045DF80;
}

loc_8045DCC0:
{
    r0 = MemoryInline::FlatRead8((r1 + 116));
}

loc_8045DCC8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(9))) {
        goto loc_8045DCE0;
    }
}

loc_8045DCCC:
{
    r3 = r27;
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x80456C5Cu>(&func_80456C5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_80456C5C_A7D2 = func_80456C5C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80456C5C_A7D2;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x80456C5Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
    f1.d = MemoryInline::FlatReadFloat64(r3);
    goto loc_8045DCF0;
}

loc_8045DCE0:
{
    r3 = r27;
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x80456C5Cu>(&func_80456C5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_80456C5C_AC52 = func_80456C5C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80456C5C_AC52;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x80456C5Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
    f1.d = MemoryInline::FlatReadFloat64(r3);
}

loc_8045DCF0:
{
    r7 = MemoryInline::FlatRead32((r1 + 112));
    r3 = (r1 + 640);
    r6 = MemoryInline::FlatRead32((r1 + 116));
    r4 = (r1 + 16);
    r5 = MemoryInline::FlatRead32((r1 + 120));
    r0 = MemoryInline::FlatRead32((r1 + 124));
    MemoryInline::FlatWriteRam32((r1 + 16), r7);
    MemoryInline::FlatWriteRam32((r1 + 20), r6);
    MemoryInline::FlatWriteRam32((r1 + 24), r5);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    ctx->lr = 0x8045DD1Cu;
    if constexpr (KnownRegArgsCpuCall<0x8045CC08u>(&func_8045CC08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8045CC08_B2A3 = func_8045CC08_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045CC08_B2A3);
        r4 = static_cast<uint32_t>(regargs_result_8045CC08_B2A3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045CC08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        ctr = ctx->ctr;
    }
}

loc_8045DD20:
{
    r18 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045DF3C;
    }
}

loc_8045DD28:
{
    r19 = (r21 - r3);
    goto loc_8045DF80;
}

loc_8045DD30:
{
    r0 = MemoryInline::FlatRead8((r1 + 116));
}

loc_8045DD38:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_8045DD9C;
    }
}

loc_8045DD3C:
{
    r3 = r27;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x80456C5Cu>(&func_80456C5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_80456C5C_BB3B = func_80456C5C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80456C5C_BB3B;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x80456C5Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
}

loc_8045DD4C:
{
    r4 = MemoryInline::FlatRead32(r3);
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8045DD74;
    }
}

loc_8045DD54:
{
}

loc_8045DD58:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8045DD74;
    }
}

loc_8045DD5C:
{
    r3 = 0;
    r4 = 0;
    r5 = -1;
    ctx->lr = 0x8045DD6Cu;
    if constexpr (KnownRegArgsCpuCall<0x8046444Cu>(&func_8046444C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8046444C_C10A = func_8046444C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8046444C_C10A);
        r4 = static_cast<uint32_t>(regargs_result_8046444C_C10A >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8046444Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r3 = -1;
    goto loc_8045E12C;
}

loc_8045DD74:
{
}

loc_8045DD78:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8045DD80;
    }
}

loc_8045DD7C:
{
    r4 = (r13 + -20800);
}

loc_8045DD80:
{
    r3 = (r1 + 128);
    r5 = 512;
    ctx->lr = 0x8045DD8Cu;
    if constexpr (KnownRegArgsCpuCall<0x8045BB60u>(&func_8045BB60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8045BB60_CA60 = func_8045BB60_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045BB60_CA60);
        r4 = static_cast<uint32_t>(regargs_result_8045BB60_CA60 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045BB60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
}

loc_8045DD90:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_8045DF3C;
    }
}

loc_8045DD94:
{
    r18 = (r1 + 128);
    goto loc_8045DDAC;
}

loc_8045DD9C:
{
    r3 = r27;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x80456C5Cu>(&func_80456C5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_80456C5C_D368 = func_80456C5C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80456C5C_D368;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x80456C5Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
    r18 = MemoryInline::FlatRead32(r3);
}

loc_8045DDAC:
{
}

loc_8045DDB0:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8045DDD4;
    }
}

loc_8045DDB4:
{
}

loc_8045DDB8:
{
    if ((static_cast<int32_t>(r18) != static_cast<int32_t>(0))) {
        goto loc_8045DDD4;
    }
}

loc_8045DDBC:
{
    r3 = 0;
    r4 = 0;
    r5 = -1;
    ctx->lr = 0x8045DDCCu;
    if constexpr (KnownRegArgsCpuCall<0x8046444Cu>(&func_8046444C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8046444C_D950 = func_8046444C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8046444C_D950);
        r4 = static_cast<uint32_t>(regargs_result_8046444C_D950 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8046444Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r3 = -1;
    goto loc_8045E12C;
}

loc_8045DDD4:
{
}

loc_8045DDD8:
{
    if ((static_cast<int32_t>(r18) != static_cast<int32_t>(0))) {
        goto loc_8045DDE0;
    }
}

loc_8045DDDC:
{
    r18 = (r22 + 36);
}

loc_8045DDE0:
{
    r0 = MemoryInline::FlatRead8((r1 + 115));
}

loc_8045DDE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045DE14;
    }
}

loc_8045DDEC:
{
    r0 = MemoryInline::FlatRead8((r1 + 114));
    r19 = MemoryInline::FlatRead8(r18);
    r18 = (r18 + 1);
}

loc_8045DDFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045DF80;
    }
}

loc_8045DE00:
{
    r0 = MemoryInline::FlatRead32((r1 + 124));
}

loc_8045DE08:
{
    if ((static_cast<int32_t>(r19) <= static_cast<int32_t>(r0))) {
        goto loc_8045DF80;
    }
}

loc_8045DE0C:
{
    r19 = r0;
    goto loc_8045DF80;
}

loc_8045DE14:
{
    r0 = MemoryInline::FlatRead8((r1 + 114));
}

loc_8045DE1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045DE44;
    }
}

loc_8045DE20:
{
    r19 = MemoryInline::FlatRead32((r1 + 124));
    r3 = r18;
    r4 = 0;
    r5 = r19;
    if constexpr (KnownRegArgsCpuCall<0x8045BCE4u>(&func_8045BCE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045BCE4_E5A5 = func_8045BCE4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BCE4_E5A5);
        r4 = static_cast<uint32_t>(regargs_result_8045BCE4_E5A5 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8045BCE4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8045DE38:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045DF80;
    }
}

loc_8045DE3C:
{
    r19 = (r3 - r18);
    goto loc_8045DF80;
}

loc_8045DE44:
{
    r3 = r18;
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_E95F = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_E95F);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_E95F >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r19 = r3;
    goto loc_8045DF80;
}

loc_8045DE54:
{
    r3 = r27;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x80456C5Cu>(&func_80456C5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_80456C5C_ECA2 = func_80456C5C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80456C5C_ECA2;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x80456C5Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
}

loc_8045DE64:
{
    r3 = MemoryInline::FlatRead32(r3);
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8045DE84;
    }
}

loc_8045DE6C:
{
    r3 = 0;
    r4 = 0;
    r5 = -1;
    ctx->lr = 0x8045DE7Cu;
    if constexpr (KnownRegArgsCpuCall<0x8046444Cu>(&func_8046444C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8046444C_F1DE = func_8046444C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8046444C_F1DE);
        r4 = static_cast<uint32_t>(regargs_result_8046444C_F1DE >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8046444Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r3 = -1;
    goto loc_8045E12C;
}

loc_8045DE84:
{
    r0 = MemoryInline::FlatRead8((r1 + 116));
}

loc_8045DE8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045DEC4;
    }
}

loc_8045DE90:
{
}

loc_8045DE94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8045DECC;
    }
}

loc_8045DE98:
{
}

loc_8045DE9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8045DED4;
    }
}

loc_8045DEA0:
{
}

loc_8045DEA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_8045DEDC;
    }
}

loc_8045DEA8:
{
}

loc_8045DEAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_8045DEEC;
    }
}

loc_8045DEB0:
{
}

loc_8045DEB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_8045DEF4;
    }
}

loc_8045DEB8:
{
}

loc_8045DEBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8045DEFC;
    }
}

loc_8045DEC0:
{
    goto loc_8045E11C;
}

loc_8045DEC4:
{
    MemoryInline::FlatWrite32(r3, r17);
    goto loc_8045E11C;
}

loc_8045DECC:
{
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r17));
    goto loc_8045E11C;
}

loc_8045DED4:
{
    MemoryInline::FlatWrite32(r3, r17);
    goto loc_8045E11C;
}

loc_8045DEDC:
{
    MemoryInline::FlatWrite32((r3 + 4), r17);
    r0 = (static_cast<int32_t>(r17) >> 31);
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_8045E11C;
}

loc_8045DEEC:
{
    MemoryInline::FlatWrite32(r3, r17);
    goto loc_8045E11C;
}

loc_8045DEF4:
{
    MemoryInline::FlatWrite32(r3, r17);
    goto loc_8045E11C;
}

loc_8045DEFC:
{
    MemoryInline::FlatWrite32((r3 + 4), r17);
    r0 = (static_cast<int32_t>(r17) >> 31);
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_8045E11C;
}

loc_8045DF0C:
{
    r3 = r27;
    r18 = (r1 + 128);
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x80456C5Cu>(&func_80456C5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_80456C5C_101C4 = func_80456C5C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80456C5C_101C4;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x80456C5Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
    r0 = MemoryInline::FlatRead32(r3);
    r19 = 1;
    MemoryInline::FlatWriteRam8((r1 + 128), static_cast<uint8_t>(r0));
    goto loc_8045DF80;
}

loc_8045DF2C:
{
    MemoryInline::FlatWriteRam8((r1 + 128), static_cast<uint8_t>(r23));
    r18 = (r1 + 128);
    r19 = 1;
    goto loc_8045DF80;
}

loc_8045DF3C:
{
    r3 = r16;
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_106B9 = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_106B9);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_106B9 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8045DF48:
{
    r5 = r3;
    r17 = (r17 + r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045DF78;
    }
}

loc_8045DF54:
{
    r12 = r25;
    r3 = r26;
    r4 = r16;
    ctr = r12;
    ctx->lr = 0x8045DF68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
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
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
}

loc_8045DF6C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8045DF78;
    }
}

loc_8045DF70:
{
    r3 = -1;
    goto loc_8045E12C;
}

loc_8045DF78:
{
    r3 = r17;
    goto loc_8045E12C;
}

loc_8045DF80:
{
    r0 = MemoryInline::FlatRead8((r1 + 112));
    r16 = r19;
}

loc_8045DF8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045E09C;
    }
}

loc_8045DF90:
{
}

loc_8045DF94:
{
    r3 = 32;
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8045DFA0;
    }
}

loc_8045DF9C:
{
    r3 = 48;
}

loc_8045DFA0:
{
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead8(r18);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8045DFB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(43))) {
        goto loc_8045DFC4;
    }
}

loc_8045DFB4:
{
}

loc_8045DFB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(45))) {
        goto loc_8045DFC4;
    }
}

loc_8045DFBC:
{
}

loc_8045DFC0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(32))) {
        goto loc_8045E000;
    }
}

loc_8045DFC4:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_8045DFCC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(48))) {
        goto loc_8045E000;
    }
}

loc_8045DFD0:
{
    r12 = r25;
    r3 = r26;
    r4 = r18;
    r5 = 1;
    ctr = r12;
    ctx->lr = 0x8045DFE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
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
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
}

loc_8045DFEC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8045DFF8;
    }
}

loc_8045DFF0:
{
    r3 = -1;
    goto loc_8045E12C;
}

loc_8045DFF8:
{
    r18 = (r18 + 1);
    r19 = (r19 + -1);
}

loc_8045E000:
{
    r0 = MemoryInline::FlatRead8((r1 + 112));
}

loc_8045E008:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8045E090;
    }
}

loc_8045E00C:
{
    r0 = MemoryInline::FlatRead8((r1 + 117));
}

loc_8045E014:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(97))) {
        goto loc_8045E020;
    }
}

loc_8045E018:
{
}

loc_8045E01C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65))) {
        goto loc_8045E090;
    }
}

loc_8045E020:
{
}

loc_8045E024:
{
    if ((static_cast<int32_t>(r19) >= static_cast<int32_t>(2))) {
        goto loc_8045E030;
    }
}

loc_8045E028:
{
    r3 = -1;
    goto loc_8045E12C;
}

loc_8045E030:
{
    r12 = r25;
    r3 = r26;
    r4 = r18;
    r5 = 2;
    ctr = r12;
    ctx->lr = 0x8045E048u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
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
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
}

loc_8045E04C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8045E058;
    }
}

loc_8045E050:
{
    r3 = -1;
    goto loc_8045E12C;
}

loc_8045E058:
{
    r19 = (r19 + -2);
    r18 = (r18 + 2);
    goto loc_8045E090;
}

loc_8045E064:
{
    r12 = r25;
    r3 = r26;
    r4 = (r1 + 9);
    r5 = 1;
    ctr = r12;
    ctx->lr = 0x8045E07Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
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
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
}

loc_8045E080:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8045E08C;
    }
}

loc_8045E084:
{
    r3 = -1;
    goto loc_8045E12C;
}

loc_8045E08C:
{
    r16 = (r16 + 1);
}

loc_8045E090:
{
    r0 = MemoryInline::FlatRead32((r1 + 120));
}

loc_8045E098:
{
    if ((static_cast<int32_t>(r16) < static_cast<int32_t>(r0))) {
        goto loc_8045E064;
    }
}

loc_8045E09C:
{
}

loc_8045E0A0:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(0))) {
        goto loc_8045E0CC;
    }
}

loc_8045E0A4:
{
    r12 = r25;
    r3 = r26;
    r4 = r18;
    r5 = r19;
    ctr = r12;
    ctx->lr = 0x8045E0BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
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
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
}

loc_8045E0C0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8045E0CC;
    }
}

loc_8045E0C4:
{
    r3 = -1;
    goto loc_8045E12C;
}

loc_8045E0CC:
{
    r0 = MemoryInline::FlatRead8((r1 + 112));
}

loc_8045E0D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045E118;
    }
}

loc_8045E0D8:
{
    goto loc_8045E10C;
}

loc_8045E0DC:
{
    r12 = r25;
    r3 = r26;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r24));
    r4 = (r1 + 8);
    r5 = 1;
    ctr = r12;
    ctx->lr = 0x8045E0F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
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
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
}

loc_8045E0FC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8045E108;
    }
}

loc_8045E100:
{
    r3 = -1;
    goto loc_8045E12C;
}

loc_8045E108:
{
    r16 = (r16 + 1);
}

loc_8045E10C:
{
    r0 = MemoryInline::FlatRead32((r1 + 120));
}

loc_8045E114:
{
    if ((static_cast<int32_t>(r16) < static_cast<int32_t>(r0))) {
        goto loc_8045E0DC;
    }
}

loc_8045E118:
{
    r17 = (r17 + r16);
}

loc_8045E11C:
{
    r0 = MemoryInline::FlatRead8(r15);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045D8DC;
    }
}

loc_8045E128:
{
    r3 = r17;
}

loc_8045E12C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 652), 0, 76u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 72u, (r1 + 724));
    ctx->lr = r0;
    r1 = (r1 + 720);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
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
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8045D894(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8045D894_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8045D894 func_8045D894 preserves=true fpr_mask=0x00000000
