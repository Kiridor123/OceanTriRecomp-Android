#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005B28C(CpuContext* ctx);
extern "C" uint64_t func_8005B28C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80065220(CpuContext* ctx);
extern "C" uint32_t func_80065220_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800652E8(CpuContext* ctx);
extern "C" uint64_t func_800652E8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80064D54_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
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
    uint32_t r12 = ctx->gpr[12];
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
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    goto loc_80064D54;

loc_80064D54:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r30 = r3;
    r31 = r4;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_80064D94:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80064DAC;
    }
}

loc_80064D98:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_80064DA4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80064DAC;
    }
}

loc_80064DA8:
{
    r10 = 0;
}

loc_80064DAC:
{
}

loc_80064DB0:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_80064DC8;
    }
}

loc_80064DB4:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_80064DC0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80064DC8;
    }
}

loc_80064DC4:
{
    r9 = 0;
}

loc_80064DC8:
{
}

loc_80064DCC:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80064DE0;
    }
}

loc_80064DD0:
{
    r0 = (r11 + 1073741824);
}

loc_80064DD8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80064DE0;
    }
}

loc_80064DDC:
{
    r8 = 0;
}

loc_80064DE0:
{
}

loc_80064DE4:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80064DFC;
    }
}

loc_80064DE8:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_80064DF4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80064DFC;
    }
}

loc_80064DF8:
{
    r7 = 0;
}

loc_80064DFC:
{
}

loc_80064E00:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80064E18;
    }
}

loc_80064E04:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_80064E10:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80064E18;
    }
}

loc_80064E14:
{
    r6 = 0;
}

loc_80064E18:
{
}

loc_80064E1C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80064E34;
    }
}

loc_80064E20:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_80064E2C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80064E34;
    }
}

loc_80064E30:
{
    r5 = 0;
}

loc_80064E34:
{
}

loc_80064E38:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80064E5C;
    }
}

loc_80064E3C:
{
    r3 = 0x80590000u;
    r3 = (r3 + -13752);
    r4 = 182;
    r5 = 0x80590000u;
    r5 = (r5 + -13672);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80064E5Cu;
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

loc_80064E5C:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r31 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_80064E80:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80064E98;
    }
}

loc_80064E84:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_80064E90:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80064E98;
    }
}

loc_80064E94:
{
    r9 = 0;
}

loc_80064E98:
{
}

loc_80064E9C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80064EB4;
    }
}

loc_80064EA0:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_80064EAC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80064EB4;
    }
}

loc_80064EB0:
{
    r8 = 0;
}

loc_80064EB4:
{
}

loc_80064EB8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80064ECC;
    }
}

loc_80064EBC:
{
    r0 = (r10 + 1073741824);
}

loc_80064EC4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80064ECC;
    }
}

loc_80064EC8:
{
    r7 = 0;
}

loc_80064ECC:
{
}

loc_80064ED0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80064EE8;
    }
}

loc_80064ED4:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_80064EE0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80064EE8;
    }
}

loc_80064EE4:
{
    r6 = 0;
}

loc_80064EE8:
{
}

loc_80064EEC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80064F04;
    }
}

loc_80064EF0:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 805306368);
}

loc_80064EFC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80064F04;
    }
}

loc_80064F00:
{
    r5 = 0;
}

loc_80064F04:
{
}

loc_80064F08:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80064F20;
    }
}

loc_80064F0C:
{
    r3 = (r31 & -16384);
    r0 = (r3 + 536870912);
}

loc_80064F18:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80064F20;
    }
}

loc_80064F1C:
{
    r4 = 0;
}

loc_80064F20:
{
}

loc_80064F24:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80064F48;
    }
}

loc_80064F28:
{
    r3 = 0x80590000u;
    r3 = (r3 + -13752);
    r4 = 183;
    r5 = 0x80590000u;
    r5 = (r5 + -13620);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80064F48u;
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

loc_80064F48:
{
    r3 = r30;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 80));
    ctr = r12;
    ctx->lr = 0x80064F5Cu;
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
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    r3 = r30;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 84));
    ctr = r12;
    ctx->lr = 0x80064F74u;
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
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    MemoryInline::FlatWriteRam32((r1 + 32), r3);
    r3 = r30;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 88));
    ctr = r12;
    ctx->lr = 0x80064F8Cu;
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
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    r0 = MemoryInline::FlatRead32((r1 + 36));
}

loc_80064F98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8006503C;
    }
}

loc_80064F9C:
{
    r3 = r31;
    // inline leaf 0x800652E0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 2));
    // end of inlined leaf 0x800652E0
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    r3 = (r1 + 36);
    r4 = (r1 + 24);
    // inline leaf 0x800652C8 (6 guest instruction(s))
}

loc_inl2_0x800652C8:
{
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl2_0x800652D4:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x800652D8:
{
    r3 = r4;
    goto loc_inl2_cont_800652C8;
}

loc_inl2_return:
{
}

loc_inl2_cont_800652C8:
{
    // end of inlined leaf 0x800652C8
    r27 = MemoryInline::FlatRead32(r3);
    r26 = 0;
    r28 = 0x80590000u;
    r29 = 0x80590000u;
    goto loc_80065034;
}

loc_80064FC8:
{
    r3 = (r1 + 48);
    r4 = r31;
    r5 = r26;
    // inline leaf 0x80065290 (14 guest instruction(s))
}

loc_inl3_0x80065290:
{
    r0 = MemoryInline::FlatRead16((r4 + 2));
}

loc_inl3_0x80065298:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r0))) {
        goto loc_inl3_0x800652B4;
    }
}

loc_inl3_0x8006529C:
{
}

loc_inl3_0x800652A0:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_inl3_0x800652B4;
    }
}

loc_inl3_0x800652A4:
{
    r6 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r5 * 12);
    r5 = (r6 + r0);
    goto loc_inl3_0x800652BC;
}

loc_inl3_0x800652B4:
{
    r5 = 0;
}

loc_inl3_0x800652BC:
{
    MemoryInline::FlatWriteRam32(r3, r4);
    MemoryInline::FlatWriteRam32((r3 + 4), r5);
}

loc_inl3_cont_80065290:
{
    // end of inlined leaf 0x80065290
    r3 = (r1 + 48);
    // inline leaf 0x80065268 (10 guest instruction(s))
}

loc_inl4_0x80065268:
{
    r4 = 0;
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl4_0x80065274:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl4_0x80065288;
    }
}

loc_inl4_0x80065278:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl4_0x80065280:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl4_0x80065288;
    }
}

loc_inl4_0x80065284:
{
    r4 = 1;
}

loc_inl4_0x80065288:
{
    r3 = r4;
}

loc_inl4_cont_80065268:
{
    // end of inlined leaf 0x80065268
}

loc_80064FE4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80064FFC;
    }
}

loc_80064FE8:
{
    r3 = (r28 + -13752);
    r4 = 198;
    r5 = (r29 + -13564);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80064FFCu;
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

loc_80064FFC:
{
    r3 = (r1 + 40);
    r4 = (r1 + 48);
    // inline leaf 0x80065254 (5 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32(r3, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    // end of inlined leaf 0x80065254
    r3 = r30;
    r4 = (r1 + 40);
    r5 = r26;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 100));
    ctr = r12;
    ctx->lr = 0x80065024u;
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
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    r3 = (r1 + 40);
    r4 = -1;
    ctx->lr = 0x80065030u;
    if constexpr (KnownRegArgsCpuCall<0x800652E8u>(&func_800652E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800652E8_47B3 = func_800652E8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800652E8_47B3);
        r4 = static_cast<uint32_t>(regargs_result_800652E8_47B3 >> 32);
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
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
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
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800652E8u>(ctx);
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
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r26 = (r26 + 1);
}

loc_80065034:
{
}

loc_80065038:
{
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(r27))) {
        goto loc_80064FC8;
    }
}

loc_8006503C:
{
    r0 = MemoryInline::FlatRead32((r1 + 32));
}

loc_80065044:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800650BC;
    }
}

loc_80065048:
{
    r3 = r31;
    // inline leaf 0x8006524C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // end of inlined leaf 0x8006524C
    r26 = r3;
    r3 = r31;
    // inline leaf 0x80065244 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16(r3);
    // end of inlined leaf 0x80065244
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r3 = (r1 + 32);
    r4 = (r1 + 20);
    // inline leaf 0x800652C8 (6 guest instruction(s))
}

loc_inl8_0x800652C8:
{
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl8_0x800652D4:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_inl8_return;
    }
}

loc_inl8_0x800652D8:
{
    r3 = r4;
    goto loc_inl8_cont_800652C8;
}

loc_inl8_return:
{
}

loc_inl8_cont_800652C8:
{
    // end of inlined leaf 0x800652C8
    r27 = MemoryInline::FlatRead32(r3);
    r28 = 0;
    goto loc_800650B4;
}

loc_80065078:
{
    r3 = (r1 + 8);
    r4 = r30;
    r5 = r28;
    r12 = MemoryInline::FlatRead32(r4);
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x80065094u;
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
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    r3 = (r1 + 8);
    ctx->lr = 0x8006509Cu;
    if constexpr (KnownRegArgsCpuCall<0x80065220u>(&func_80065220)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80065220_5BFA = func_80065220_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80065220_5BFA;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80065220u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    MemoryInline::FlatWrite32(r26, r3);
    r3 = (r1 + 8);
    r4 = -1;
    ctx->lr = 0x800650ACu;
    if constexpr (KnownRegArgsCpuCall<0x8005B28Cu>(&func_8005B28C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8005B28C_5FDF = func_8005B28C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005B28C_5FDF);
        r4 = static_cast<uint32_t>(regargs_result_8005B28C_5FDF >> 32);
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
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
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
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8005B28Cu>(ctx);
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
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r26 = (r26 + 4);
    r28 = (r28 + 1);
}

loc_800650B4:
{
}

loc_800650B8:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r27))) {
        goto loc_80065078;
    }
}

loc_800650BC:
{
    r28 = MemoryInline::FlatRead32((r1 + 28));
}

loc_800650C4:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_800651D8;
    }
}

loc_800650C8:
{
    r3 = r31;
    // inline leaf 0x80065218 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80065218
    r26 = r3;
    r3 = r31;
    // inline leaf 0x80065244 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16(r3);
    // end of inlined leaf 0x80065244
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    r3 = r30;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 68));
    ctr = r12;
    ctx->lr = 0x800650F4u;
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
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    r0 = (r28 + r3);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = (r1 + 28);
    r4 = (r1 + 16);
    // inline leaf 0x800652C8 (6 guest instruction(s))
}

loc_inl11_0x800652C8:
{
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl11_0x800652D4:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_inl11_return;
    }
}

loc_inl11_0x800652D8:
{
    r3 = r4;
    goto loc_inl11_cont_800652C8;
}

loc_inl11_return:
{
}

loc_inl11_cont_800652C8:
{
    // end of inlined leaf 0x800652C8
    r27 = MemoryInline::FlatRead32(r3);
    r3 = (r1 + 12);
    r4 = (r1 + 16);
    // inline leaf 0x800652C8 (6 guest instruction(s))
}

loc_inl12_0x800652C8:
{
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl12_0x800652D4:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_inl12_return;
    }
}

loc_inl12_0x800652D8:
{
    r3 = r4;
    goto loc_inl12_cont_800652C8;
}

loc_inl12_return:
{
}

loc_inl12_cont_800652C8:
{
    // end of inlined leaf 0x800652C8
    r29 = MemoryInline::FlatRead32(r3);
    r31 = 0;
    r28 = r26;
    goto loc_80065138;
}

loc_80065128:
{
    r3 = r28;
    // inline leaf 0x80065208 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 & -5);
    MemoryInline::FlatWrite32(r3, r0);
    // end of inlined leaf 0x80065208
    r28 = (r28 + 68);
    r31 = (r31 + 1);
}

loc_80065138:
{
}

loc_8006513C:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(r27))) {
        goto loc_80065128;
    }
}

loc_80065140:
{
    r31 = 0;
    r28 = r26;
    goto loc_800651D0;
}

loc_8006514C:
{
    r25 = 0;
    r3 = r28;
    // inline leaf 0x800651F0 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r3 = (r0 & 4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x800651F0
}

loc_8006515C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800651C8;
    }
}

loc_80065160:
{
    r3 = r30;
    r4 = r31;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 124));
    ctr = r12;
    ctx->lr = 0x80065178u;
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
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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

loc_8006517C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800651A8;
    }
}

loc_80065180:
{
    r3 = r30;
    r4 = r31;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 120));
    ctr = r12;
    ctx->lr = 0x80065198u;
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
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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

loc_8006519C:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r29))) {
        goto loc_800651A8;
    }
}

loc_800651A0:
{
    r0 = (r3 * 68);
    r25 = (r26 + r0);
}

loc_800651A8:
{
    r3 = r30;
    r4 = r28;
    r5 = r25;
    r6 = r31;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 108));
    ctr = r12;
    ctx->lr = 0x800651C8u;
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
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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

loc_800651C8:
{
    r28 = (r28 + 68);
    r31 = (r31 + 1);
}

loc_800651D0:
{
}

loc_800651D4:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(r27))) {
        goto loc_8006514C;
    }
}

loc_800651D8:
{
    r11 = (r1 + 96);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
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
    ctx->gpr[25] = r25_entry;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80064D54(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80064D54_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x01FFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80064D54 func_80064D54 preserves=true fpr_mask=0x00000000
