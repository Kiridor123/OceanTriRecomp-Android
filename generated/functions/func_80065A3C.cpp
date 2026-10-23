#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80060538(CpuContext* ctx);
extern "C" uint64_t func_80060538_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80065F54(CpuContext* ctx);
extern "C" uint64_t func_80065F54_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80090348(CpuContext* ctx);
extern "C" uint64_t func_80090348_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8009051C(CpuContext* ctx);
extern "C" uint64_t func_8009051C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800906F0(CpuContext* ctx);
extern "C" uint64_t func_800906F0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800908C4(CpuContext* ctx);
extern "C" uint64_t func_800908C4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80065A3C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r24_rot_0 = 0;
    uint32_t r24_rot_1 = 0;
    uint32_t r24_rot_2 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t r25_rot_1 = 0;
    uint32_t r25_rot_2 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
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
    const uint32_t r19_entry = r19;
    const uint32_t r20_entry = r20;
    const uint32_t r21_entry = r21;
    const uint32_t r22_entry = r22;
    uint32_t cr = ctx->cr;

    goto loc_80065A3C;

loc_80065A3C:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80457468 (14 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, false, true);
    // end of inlined leaf 0x80457468
    r31 = r1;
    r19 = r3;
    r20 = r4;
    r21 = r5;
    r25 = r6;
    r3 = r21;
    // inline leaf 0x80065928 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x80065928
}

loc_80065A70:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80065A7C;
    }
}

loc_80065A74:
{
    r3 = 0;
    goto loc_80065F1C;
}

loc_80065A7C:
{
}

loc_80065A80:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_80065A94;
    }
}

loc_80065A84:
{
    r3 = r21;
    ctx->lr = 0x80065A8Cu;
    if constexpr (KnownRegArgsCpuCall<0x80090348u>(&func_80090348)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_80090348_1190 = func_80090348_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80090348_1190);
        r4 = static_cast<uint32_t>(regargs_result_80090348_1190 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        InvokeDirectCpu<0x80090348u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    }
    r24 = r3;
    goto loc_80065A98;
}

loc_80065A94:
{
    r24 = 0;
}

loc_80065A98:
{
}

loc_80065A9C:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_80065AB0;
    }
}

loc_80065AA0:
{
    r3 = r21;
    ctx->lr = 0x80065AA8u;
    if constexpr (KnownRegArgsCpuCall<0x8009051Cu>(&func_8009051C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_8009051C_175A = func_8009051C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009051C_175A);
        r4 = static_cast<uint32_t>(regargs_result_8009051C_175A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        InvokeDirectCpu<0x8009051Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    }
    r23 = r3;
    goto loc_80065AB4;
}

loc_80065AB0:
{
    r23 = 0;
}

loc_80065AB4:
{
}

loc_80065AB8:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_80065ACC;
    }
}

loc_80065ABC:
{
    r3 = r21;
    ctx->lr = 0x80065AC4u;
    if constexpr (KnownRegArgsCpuCall<0x800906F0u>(&func_800906F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_800906F0_1D24 = func_800906F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800906F0_1D24);
        r4 = static_cast<uint32_t>(regargs_result_800906F0_1D24 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        InvokeDirectCpu<0x800906F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    }
    r22 = r3;
    goto loc_80065AD0;
}

loc_80065ACC:
{
    r22 = 0;
}

loc_80065AD0:
{
}

loc_80065AD4:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_80065AE4;
    }
}

loc_80065AD8:
{
    r3 = r21;
    ctx->lr = 0x80065AE0u;
    if constexpr (KnownRegArgsCpuCall<0x800908C4u>(&func_800908C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_800908C4_22EE = func_800908C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800908C4_22EE);
        r4 = static_cast<uint32_t>(regargs_result_800908C4_22EE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        InvokeDirectCpu<0x800908C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    }
    goto loc_80065AE8;
}

loc_80065AE4:
{
    r3 = 0;
}

loc_80065AE8:
{
    r26_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(3));
    r26 = (r26_rot_1 & -8);
    r25_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(6));
    r25 = (r25_rot_1 & -64);
    r24_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(4));
    r24 = (r24_rot_1 & -16);
    r23 = (r3 * 52);
    r3 = 56;
    r4 = 4;
    // inline leaf 0x80065F3C (6 guest instruction(s))
    r0 = (r4 + -1);
    r5 = ~(r0 | r0);
    r3 = (r4 + r3);
    r0 = (r3 + -1);
    r3 = (r5 & r0);
    // end of inlined leaf 0x80065F3C
    r27 = r3;
    r3 = (r3 + r26);
    r4 = 4;
    // inline leaf 0x80065F3C (6 guest instruction(s))
    r0 = (r4 + -1);
    r5 = ~(r0 | r0);
    r3 = (r4 + r3);
    r0 = (r3 + -1);
    r3 = (r5 & r0);
    // end of inlined leaf 0x80065F3C
    r28 = r3;
    r3 = (r3 + r25);
    r4 = 4;
    // inline leaf 0x80065F3C (6 guest instruction(s))
    r0 = (r4 + -1);
    r5 = ~(r0 | r0);
    r3 = (r4 + r3);
    r0 = (r3 + -1);
    r3 = (r5 & r0);
    // end of inlined leaf 0x80065F3C
    r29 = r3;
    r3 = (r3 + r24);
    r4 = 4;
    // inline leaf 0x80065F3C (6 guest instruction(s))
    r0 = (r4 + -1);
    r5 = ~(r0 | r0);
    r3 = (r4 + r3);
    r0 = (r3 + -1);
    r3 = (r5 & r0);
    // end of inlined leaf 0x80065F3C
    r30 = r3;
    r3 = (r3 + r23);
    r4 = 4;
    // inline leaf 0x80065F3C (6 guest instruction(s))
    r0 = (r4 + -1);
    r5 = ~(r0 | r0);
    r3 = (r4 + r3);
    r0 = (r3 + -1);
    r3 = (r5 & r0);
    // end of inlined leaf 0x80065F3C
    r22 = r3;
}

loc_80065B4C:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_80065C40;
    }
}

loc_80065B50:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r20 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_80065B74:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80065B8C;
    }
}

loc_80065B78:
{
    r3 = (r20 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_80065B84:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80065B8C;
    }
}

loc_80065B88:
{
    r9 = 0;
}

loc_80065B8C:
{
}

loc_80065B90:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80065BA8;
    }
}

loc_80065B94:
{
    r3 = (r20 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_80065BA0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80065BA8;
    }
}

loc_80065BA4:
{
    r8 = 0;
}

loc_80065BA8:
{
}

loc_80065BAC:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80065BC0;
    }
}

loc_80065BB0:
{
    r0 = (r10 + 1073741824);
}

loc_80065BB8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80065BC0;
    }
}

loc_80065BBC:
{
    r7 = 0;
}

loc_80065BC0:
{
}

loc_80065BC4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80065BDC;
    }
}

loc_80065BC8:
{
    r3 = (r20 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_80065BD4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80065BDC;
    }
}

loc_80065BD8:
{
    r6 = 0;
}

loc_80065BDC:
{
}

loc_80065BE0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80065BF8;
    }
}

loc_80065BE4:
{
    r3 = (r20 & -134217728);
    r0 = (r3 + 805306368);
}

loc_80065BF0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80065BF8;
    }
}

loc_80065BF4:
{
    r5 = 0;
}

loc_80065BF8:
{
}

loc_80065BFC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80065C14;
    }
}

loc_80065C00:
{
    r3 = (r20 & -16384);
    r0 = (r3 + 536870912);
}

loc_80065C0C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80065C14;
    }
}

loc_80065C10:
{
    r4 = 0;
}

loc_80065C14:
{
}

loc_80065C18:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80065C3C;
    }
}

loc_80065C1C:
{
    r3 = 0x80590000u;
    r3 = (r3 + -13752);
    r4 = 1113;
    r5 = 0x80590000u;
    r5 = (r5 + -13140);
    r6 = r20;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80065C3Cu;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_80065C3C:
{
    MemoryInline::FlatWrite32(r20, r22);
}

loc_80065C40:
{
}

loc_80065C44:
{
    if ((static_cast<int32_t>(r19) != static_cast<int32_t>(0))) {
        goto loc_80065C50;
    }
}

loc_80065C48:
{
    r3 = 0;
    goto loc_80065F1C;
}

loc_80065C50:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r19 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_80065C74:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80065C8C;
    }
}

loc_80065C78:
{
    r3 = (r19 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_80065C84:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80065C8C;
    }
}

loc_80065C88:
{
    r9 = 0;
}

loc_80065C8C:
{
}

loc_80065C90:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80065CA8;
    }
}

loc_80065C94:
{
    r3 = (r19 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_80065CA0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80065CA8;
    }
}

loc_80065CA4:
{
    r8 = 0;
}

loc_80065CA8:
{
}

loc_80065CAC:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80065CC0;
    }
}

loc_80065CB0:
{
    r0 = (r10 + 1073741824);
}

loc_80065CB8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80065CC0;
    }
}

loc_80065CBC:
{
    r7 = 0;
}

loc_80065CC0:
{
}

loc_80065CC4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80065CDC;
    }
}

loc_80065CC8:
{
    r3 = (r19 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_80065CD4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80065CDC;
    }
}

loc_80065CD8:
{
    r6 = 0;
}

loc_80065CDC:
{
}

loc_80065CE0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80065CF8;
    }
}

loc_80065CE4:
{
    r3 = (r19 & -134217728);
    r0 = (r3 + 805306368);
}

loc_80065CF0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80065CF8;
    }
}

loc_80065CF4:
{
    r5 = 0;
}

loc_80065CF8:
{
}

loc_80065CFC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80065D14;
    }
}

loc_80065D00:
{
    r3 = (r19 & -16384);
    r0 = (r3 + 536870912);
}

loc_80065D0C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80065D14;
    }
}

loc_80065D10:
{
    r4 = 0;
}

loc_80065D14:
{
}

loc_80065D18:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80065D3C;
    }
}

loc_80065D1C:
{
    r3 = 0x80590000u;
    r3 = (r3 + -13752);
    r4 = 1122;
    r5 = 0x80590000u;
    r5 = (r5 + -13088);
    r6 = r19;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80065D3Cu;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_80065D3C:
{
    r3 = r19;
    r4 = r22;
    ctx->lr = 0x80065D48u;
    if constexpr (KnownRegArgsCpuCall<0x80060538u>(&func_80060538)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80060538_49BB = func_80060538_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80060538_49BB);
        r4 = static_cast<uint32_t>(regargs_result_80060538_49BB >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80060538u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r22 = r3;
}

loc_80065D50:
{
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(0))) {
        goto loc_80065D5C;
    }
}

loc_80065D54:
{
    r3 = 0;
    goto loc_80065F1C;
}

loc_80065D5C:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r22 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_80065D80:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80065D98;
    }
}

loc_80065D84:
{
    r3 = (r22 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_80065D90:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80065D98;
    }
}

loc_80065D94:
{
    r9 = 0;
}

loc_80065D98:
{
}

loc_80065D9C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80065DB4;
    }
}

loc_80065DA0:
{
    r3 = (r22 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_80065DAC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80065DB4;
    }
}

loc_80065DB0:
{
    r8 = 0;
}

loc_80065DB4:
{
}

loc_80065DB8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80065DCC;
    }
}

loc_80065DBC:
{
    r0 = (r10 + 1073741824);
}

loc_80065DC4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80065DCC;
    }
}

loc_80065DC8:
{
    r7 = 0;
}

loc_80065DCC:
{
}

loc_80065DD0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80065DE8;
    }
}

loc_80065DD4:
{
    r3 = (r22 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_80065DE0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80065DE8;
    }
}

loc_80065DE4:
{
    r6 = 0;
}

loc_80065DE8:
{
}

loc_80065DEC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80065E04;
    }
}

loc_80065DF0:
{
    r3 = (r22 & -134217728);
    r0 = (r3 + 805306368);
}

loc_80065DFC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80065E04;
    }
}

loc_80065E00:
{
    r5 = 0;
}

loc_80065E04:
{
}

loc_80065E08:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80065E20;
    }
}

loc_80065E0C:
{
    r3 = (r22 & -16384);
    r0 = (r3 + 536870912);
}

loc_80065E18:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80065E20;
    }
}

loc_80065E1C:
{
    r4 = 0;
}

loc_80065E20:
{
}

loc_80065E24:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80065E48;
    }
}

loc_80065E28:
{
    r3 = 0x80590000u;
    r3 = (r3 + -13752);
    r4 = 1132;
    r5 = 0x80590000u;
    r5 = (r5 + -13036);
    r6 = r22;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80065E48u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_80065E48:
{
    r0 = (r22 & 3);
}

loc_80065E50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80065E74;
    }
}

loc_80065E54:
{
    r3 = 0x80590000u;
    r3 = (r3 + -13752);
    r4 = 1133;
    r5 = 0x80590000u;
    r5 = (r5 + -12984);
    r6 = r22;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80065E74u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_80065E74:
{
    r3 = 56;
    r4 = r22;
    // inline leaf 0x80060530 (2 guest instruction(s))
    r3 = r4;
    // end of inlined leaf 0x80060530
    r20 = r3;
}

loc_80065E88:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80065F18;
    }
}

loc_80065E8C:
{
    MemoryInline::FlatWriteRam32((r31 + 36), r1);
}

loc_80065E94:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_80065EA0;
    }
}

loc_80065E98:
{
    r9 = (r22 + r30);
    goto loc_80065EA4;
}

loc_80065EA0:
{
    r9 = 0;
}

loc_80065EA4:
{
}

loc_80065EA8:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_80065EB4;
    }
}

loc_80065EAC:
{
    r8 = (r22 + r29);
    goto loc_80065EB8;
}

loc_80065EB4:
{
    r8 = 0;
}

loc_80065EB8:
{
}

loc_80065EBC:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_80065EC8;
    }
}

loc_80065EC0:
{
    r7 = (r22 + r28);
    goto loc_80065ECC;
}

loc_80065EC8:
{
    r7 = 0;
}

loc_80065ECC:
{
}

loc_80065ED0:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_80065EDC;
    }
}

loc_80065ED4:
{
    r6 = (r22 + r27);
    goto loc_80065EE0;
}

loc_80065EDC:
{
    r6 = 0;
}

loc_80065EE0:
{
    r0 = MemoryInline::FlatRead32(r21);
    MemoryInline::FlatWriteRam32((r31 + 8), r0);
    r3 = r20;
    r4 = r19;
    r5 = (r31 + 8);
    ctx->lr = 0x80065EF8u;
    if constexpr (KnownRegArgsCpuCall<0x80065F54u>(&func_80065F54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->cr = cr;
        const auto regargs_result_80065F54_695C = func_80065F54_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80065F54_695C);
        r4 = static_cast<uint32_t>(regargs_result_80065F54_695C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80065F54u>(ctx);
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
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
}

loc_80065F18:
{
    r3 = r20;
}

loc_80065F1C:
{
    r10 = r31;
    r11 = (r10 + 96);
    // inline leaf 0x804574B4 (14 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, true, false);
    // end of inlined leaf 0x804574B4
    r10 = MemoryInline::FlatRead32(r1);
    r0 = MemoryInline::FlatRead32((r10 + 4));
    r1 = r10;
    ctx->lr = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->gpr[19] = r19_entry;
    ctx->gpr[20] = r20_entry;
    ctx->gpr[21] = r21_entry;
    ctx->gpr[22] = r22_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80065A3C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80065A3C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x0007FFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80065A3C func_80065A3C preserves=true fpr_mask=0x00000000
