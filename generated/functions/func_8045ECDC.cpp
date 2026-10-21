#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80456C5C(CpuContext* ctx);
extern "C" uint32_t func_80456C5C_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8045BA20(CpuContext* ctx);
extern "C" uint64_t func_8045BA20_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8045E648(CpuContext* ctx);
extern "C" uint32_t func_8045E648_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80460068(CpuContext* ctx);
extern "C" uint64_t func_80460068_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8046138C(CpuContext* ctx);
extern "C" uint64_t func_8046138C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804617A0(CpuContext* ctx);
extern "C" uint64_t func_804617A0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8045ECDC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r0_ca_5 = 0;
    uint32_t r0_ca_6 = 0;
    uint32_t r0_not_0 = 0;
    uint32_t r0_not_1 = 0;
    uint32_t r0_not_2 = 0;
    uint32_t r0_not_3 = 0;
    uint32_t r0_not_4 = 0;
    uint32_t r0_not_5 = 0;
    uint32_t r0_not_6 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_26 = 0;
    uint32_t r0_rot_27 = 0;
    uint32_t r0_rot_28 = 0;
    uint32_t r0_rot_29 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_30 = 0;
    uint32_t r0_rot_31 = 0;
    uint32_t r0_rot_32 = 0;
    uint32_t r0_rot_33 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r0_subfic_ra_4 = 0;
    uint32_t r0_subfic_ra_5 = 0;
    uint32_t r0_subfic_ra_6 = 0;
    uint32_t r0_subfze_src_0 = 0;
    uint32_t r0_subfze_src_1 = 0;
    uint32_t r0_subfze_src_2 = 0;
    uint32_t r0_subfze_src_3 = 0;
    uint32_t r0_subfze_src_4 = 0;
    uint32_t r0_subfze_src_5 = 0;
    uint32_t r0_subfze_src_6 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_10 = 0;
    uint32_t r31_rot_11 = 0;
    uint32_t r31_rot_12 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r31_rot_3 = 0;
    uint32_t r31_rot_4 = 0;
    uint32_t r31_rot_5 = 0;
    uint32_t r31_rot_6 = 0;
    uint32_t r31_rot_7 = 0;
    uint32_t r31_rot_8 = 0;
    uint32_t r31_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_16 = 0;
    uint32_t r3_addr_17 = 0;
    uint32_t r3_addr_18 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8045ECDCu);
    goto loc_8045ECDC;

loc_8045ECDC:
{
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    r11 = (r1 + 176);
    // inline leaf 0x80457458 (18 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -68), 0, 68u, false, true);
    // end of inlined leaf 0x80457458
    r8 = 0x80610000u;
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 92), r0);
    r0 = 0;
    r26 = r3;
    r27 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    r17 = r5;
    r28 = r7;
    r25 = (r1 + 32);
    MemoryInline::FlatWriteRam32((r1 + 88), r0);
    r23 = (r8 + -2448);
    r29 = 0;
    r21 = 0;
    r20 = 0;
    r19 = 0;
    r24 = 1;
    goto loc_8045F91C;
}

loc_8045ED38:
{
}

loc_8045ED3C:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r22) > static_cast<uint32_t>(255))) {
        goto loc_8045ED48;
    }
}

loc_8045ED44:
{
    r0 = 0;
}

loc_8045ED48:
{
}

loc_8045ED4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045ED58;
    }
}

loc_8045ED50:
{
    r0 = 0;
    goto loc_8045ED6C;
}

loc_8045ED58:
{
    r3 = MemoryInline::FlatRead32((r23 + 56));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_2);
    r0 = (r0 & 256);
}

loc_8045ED6C:
{
}

loc_8045ED70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045EE44;
    }
}

loc_8045ED74:
{
    r4 = MemoryInline::FlatRead32((r23 + 56));
}

loc_8045ED78:
{
    r17 = (r17 + 1);
    r0 = MemoryInline::FlatRead8(r17);
    r3 = 1;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8045ED88:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(255))) {
        goto loc_8045ED90;
    }
}

loc_8045ED8C:
{
    r3 = 0;
}

loc_8045ED90:
{
}

loc_8045ED94:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045EDA0;
    }
}

loc_8045ED98:
{
    r0 = 0;
    goto loc_8045EDB0;
}

loc_8045EDA0:
{
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r3_addr_5 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_5);
    r0 = (r0 & 256);
}

loc_8045EDB0:
{
}

loc_8045EDB4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045ED78;
    }
}

loc_8045EDB8:
{
}

loc_8045EDBC:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_8045F91C;
    }
}

loc_8045EDC0:
{
    goto loc_8045EDC8;
}

loc_8045EDC4:
{
    r21 = (r21 + 1);
}

loc_8045EDC8:
{
    r12 = r26;
    r3 = r27;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    ctx->lr = 0x8045EDE0u;
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
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    xer = ctx->xer;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r3));
}

loc_8045EDEC:
{
    r4 = 1;
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(255))) {
        goto loc_8045EDF8;
    }
}

loc_8045EDF4:
{
    r4 = 0;
}

loc_8045EDF8:
{
}

loc_8045EDFC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8045EE08;
    }
}

loc_8045EE00:
{
    r0 = 0;
    goto loc_8045EE1C;
}

loc_8045EE08:
{
    r4 = MemoryInline::FlatRead32((r23 + 56));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & -2);
    r4 = MemoryInline::FlatRead32((r4 + 8));
    r4_addr_3 = (r4 + r0);
    r0 = MemoryInline::FlatRead16(r4_addr_3);
    r0 = (r0 & 256);
}

loc_8045EE1C:
{
}

loc_8045EE20:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045EDC4;
    }
}

loc_8045EE24:
{
    r4 = (r3 & 255);
    r12 = r26;
    r3 = r27;
    r5 = 1;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    ctr = r12;
    ctx->lr = 0x8045EE40u;
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
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    xer = ctx->xer;
    goto loc_8045F91C;
}

loc_8045EE44:
{
}

loc_8045EE48:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(37))) {
        goto loc_8045EEBC;
    }
}

loc_8045EE4C:
{
}

loc_8045EE50:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_8045EEBC;
    }
}

loc_8045EE54:
{
    r12 = r26;
    r3 = r27;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    ctx->lr = 0x8045EE6Cu;
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
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    xer = ctx->xer;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (r22 & 255);
}

loc_8045EE78:
{
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r3));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r4))) {
        goto loc_8045EEB0;
    }
}

loc_8045EE80:
{
    r4 = (r3 & 255);
    r12 = r26;
    r3 = r27;
    r5 = 1;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    ctr = r12;
    ctx->lr = 0x8045EE9Cu;
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
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    xer = ctx->xer;
}

loc_8045EEA0:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8045F928;
    }
}

loc_8045EEA4:
{
    r29 = 1;
    r17 = (r17 + 1);
    goto loc_8045F91C;
}

loc_8045EEB0:
{
    r21 = (r21 + 1);
    r17 = (r17 + 1);
    goto loc_8045F91C;
}

loc_8045EEBC:
{
    r3 = r17;
    r4 = (r1 + 32);
    if constexpr (KnownRegArgsCpuCall<0x8045E648u>(&func_8045E648)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8045E648_3E88 = func_8045E648_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8045E648_3E88;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8045E648u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead8((r1 + 32));
    r17 = r3;
}

loc_8045EED4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045EEF8;
    }
}

loc_8045EED8:
{
    r0 = MemoryInline::FlatRead8((r1 + 35));
}

loc_8045EEE0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(37))) {
        goto loc_8045EEF8;
    }
}

loc_8045EEE4:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x80456C5Cu>(&func_80456C5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80456C5C_45E8 = func_80456C5C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80456C5C_45E8;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
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
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80456C5Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r22 = MemoryInline::FlatRead32(r3);
    goto loc_8045EEFC;
}

loc_8045EEF8:
{
    r22 = 0;
}

loc_8045EEFC:
{
    r0 = MemoryInline::FlatRead8((r1 + 35));
}

loc_8045EF04:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(110))) {
        goto loc_8045EF3C;
    }
}

loc_8045EF08:
{
}

loc_8045EF0C:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_8045EF3C;
    }
}

loc_8045EF10:
{
    r12 = r26;
    r3 = r27;
    r4 = 0;
    r5 = 2;
    ctr = r12;
    ctx->lr = 0x8045EF28u;
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
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    xer = ctx->xer;
}

loc_8045EF2C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045EF3C;
    }
}

loc_8045EF30:
{
}

loc_8045EF34:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8045F928;
    }
}

loc_8045EF38:
{
    r29 = 1;
}

loc_8045EF3C:
{
    r3 = MemoryInline::FlatRead8((r1 + 35));
    r0 = (r3 + -37);
}

loc_8045EF48:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(83))) {
        goto loc_8045F928;
    }
}

loc_8045EF4C:
{
    r3 = 0x80610000u;
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3 = (r3 + -1528);
    r3_addr_7 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_7);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8045F504u:
        goto loc_8045F504;
        break;
    case 0x8045F928u:
        goto loc_8045F928;
        break;
    case 0x8045F2B0u:
        goto loc_8045F2B0;
        break;
    case 0x8045F128u:
        goto loc_8045F128;
        break;
    case 0x8045F650u:
        goto loc_8045F650;
        break;
    case 0x8045F358u:
        goto loc_8045F358;
        break;
    case 0x8045EF64u:
        goto loc_8045EF64;
        break;
    case 0x8045EF6Cu:
        goto loc_8045EF6C;
        break;
    case 0x8045F8B8u:
        goto loc_8045F8B8;
        break;
    case 0x8045F118u:
        goto loc_8045F118;
        break;
    case 0x8045F5ACu:
        goto loc_8045F5AC;
        break;
    case 0x8045F120u:
        goto loc_8045F120;
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
        ctx->gpr[11] = r11;
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
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_8045EF64:
{
    r3 = 10;
    goto loc_8045EF70;
}

loc_8045EF6C:
{
    r3 = 0;
}

loc_8045EF70:
{
}

loc_8045EF74:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8045EF90;
    }
}

loc_8045EF78:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 92), r0);
    r0 = 0;
    r16 = 0;
    MemoryInline::FlatWriteRam32((r1 + 88), r0);
    goto loc_8045F084;
}

loc_8045EF90:
{
    r0 = MemoryInline::FlatRead8((r1 + 34));
}

loc_8045EF98:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(7))) {
        goto loc_8045EFA4;
    }
}

loc_8045EF9C:
{
}

loc_8045EFA0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_8045EFCC;
    }
}

loc_8045EFA4:
{
    r4 = MemoryInline::FlatRead32((r1 + 36));
    r5 = r26;
    r6 = r27;
    r7 = (r1 + 24);
    r8 = (r1 + 20);
    r9 = (r1 + 16);
    ctx->lr = 0x8045EFC0u;
    if constexpr (KnownRegArgsCpuCall<0x804617A0u>(&func_804617A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804617A0_5F6D = func_804617A0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804617A0_5F6D);
        r4 = static_cast<uint32_t>(regargs_result_804617A0_5F6D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        xer = ctx->xer;
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
        ctx->xer = xer;
        InvokeDirectCpu<0x804617A0u>(ctx);
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
        xer = ctx->xer;
    }
    MemoryInline::FlatWriteRam32((r1 + 84), r4);
    MemoryInline::FlatWriteRam32((r1 + 80), r3);
    goto loc_8045EFEC;
}

loc_8045EFCC:
{
    r4 = MemoryInline::FlatRead32((r1 + 36));
    r5 = r26;
    r6 = r27;
    r7 = (r1 + 24);
    r8 = (r1 + 20);
    r9 = (r1 + 16);
    ctx->lr = 0x8045EFE8u;
    if constexpr (KnownRegArgsCpuCall<0x8046138Cu>(&func_8046138C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8046138C_6A2E = func_8046138C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8046138C_6A2E);
        r4 = static_cast<uint32_t>(regargs_result_8046138C_6A2E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        xer = ctx->xer;
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8046138Cu>(ctx);
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
        xer = ctx->xer;
    }
    r15 = r3;
}

loc_8045EFEC:
{
    r3 = MemoryInline::FlatRead32((r1 + 24));
}

loc_8045EFF4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8045F01C;
    }
}

loc_8045EFF8:
{
}

loc_8045EFFC:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8045F928;
    }
}

loc_8045F000:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 92), r0);
    r0 = 0;
    r29 = 1;
    MemoryInline::FlatWriteRam32((r1 + 88), r0);
    r16 = 0;
    goto loc_8045F084;
}

loc_8045F01C:
{
    r0 = MemoryInline::FlatRead8((r1 + 34));
    r21 = (r21 + r3);
}

loc_8045F028:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(7))) {
        goto loc_8045F034;
    }
}

loc_8045F02C:
{
}

loc_8045F030:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_8045F070;
    }
}

loc_8045F034:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
}

loc_8045F03C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045F05C;
    }
}

loc_8045F040:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    r0_subfic_ra_2 = r0;
    r0 = (0 - r0_subfic_ra_2);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(0) >= static_cast<uint32_t>(r0_subfic_ra_2) ? 1u : 0u) << 29);
    MemoryInline::FlatWriteRam32((r1 + 92), r0);
    r0 = MemoryInline::FlatRead32((r1 + 80));
    r0_subfze_src_2 = r0;
    r0_not_2 = ~(r0_subfze_src_2);
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r0_not_2 + r0_ca_2);
    MemoryInline::FlatWriteRam32((r1 + 88), r0);
    goto loc_8045F084;
}

loc_8045F05C:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    MemoryInline::FlatWriteRam32((r1 + 92), r0);
    r0 = MemoryInline::FlatRead32((r1 + 80));
    MemoryInline::FlatWriteRam32((r1 + 88), r0);
    goto loc_8045F084;
}

loc_8045F070:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r16 = r15;
}

loc_8045F07C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045F084;
    }
}

loc_8045F080:
{
    r16 = (0 - r15);
}

loc_8045F084:
{
}

loc_8045F088:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_8045F110;
    }
}

loc_8045F08C:
{
    r0 = MemoryInline::FlatRead8((r1 + 34));
}

loc_8045F094:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(7))) {
        goto loc_8045F104;
    }
}

loc_8045F098:
{
    r3 = 0x80610000u;
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3 = (r3 + -1560);
    r3_addr_8 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_8);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8045F0B0u:
        goto loc_8045F0B0;
        break;
    case 0x8045F0B8u:
        goto loc_8045F0B8;
        break;
    case 0x8045F0C0u:
        goto loc_8045F0C0;
        break;
    case 0x8045F0C8u:
        goto loc_8045F0C8;
        break;
    case 0x8045F0D0u:
        goto loc_8045F0D0;
        break;
    case 0x8045F0E4u:
        goto loc_8045F0E4;
        break;
    case 0x8045F0ECu:
        goto loc_8045F0EC;
        break;
    case 0x8045F0F4u:
        goto loc_8045F0F4;
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
        ctx->gpr[11] = r11;
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
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_8045F0B0:
{
    MemoryInline::FlatWrite32(r22, r16);
    goto loc_8045F104;
}

loc_8045F0B8:
{
    MemoryInline::FlatWrite8(r22, static_cast<uint8_t>(r16));
    goto loc_8045F104;
}

loc_8045F0C0:
{
    MemoryInline::FlatWrite16(r22, static_cast<uint16_t>(r16));
    goto loc_8045F104;
}

loc_8045F0C8:
{
    MemoryInline::FlatWrite32(r22, r16);
    goto loc_8045F104;
}

loc_8045F0D0:
{
    r0 = MemoryInline::FlatRead32((r1 + 92));
    MemoryInline::FlatWrite32((r22 + 4), r0);
    r0 = MemoryInline::FlatRead32((r1 + 88));
    MemoryInline::FlatWrite32(r22, r0);
    goto loc_8045F104;
}

loc_8045F0E4:
{
    MemoryInline::FlatWrite32(r22, r16);
    goto loc_8045F104;
}

loc_8045F0EC:
{
    MemoryInline::FlatWrite32(r22, r16);
    goto loc_8045F104;
}

loc_8045F0F4:
{
    r0 = MemoryInline::FlatRead32((r1 + 92));
    MemoryInline::FlatWrite32((r22 + 4), r0);
    r0 = MemoryInline::FlatRead32((r1 + 88));
    MemoryInline::FlatWrite32(r22, r0);
}

loc_8045F104:
{
}

loc_8045F108:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_8045F110;
    }
}

loc_8045F10C:
{
    r20 = (r20 + 1);
}

loc_8045F110:
{
    r19 = (r19 + 1);
    goto loc_8045F91C;
}

loc_8045F118:
{
    r3 = 8;
    goto loc_8045F12C;
}

loc_8045F120:
{
    r3 = 10;
    goto loc_8045F12C;
}

loc_8045F128:
{
    r3 = 16;
}

loc_8045F12C:
{
}

loc_8045F130:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8045F14C;
    }
}

loc_8045F134:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r0 = 0;
    r15 = 0;
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
    goto loc_8045F21C;
}

loc_8045F14C:
{
    r0 = MemoryInline::FlatRead8((r1 + 34));
}

loc_8045F154:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(7))) {
        goto loc_8045F160;
    }
}

loc_8045F158:
{
}

loc_8045F15C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_8045F188;
    }
}

loc_8045F160:
{
    r4 = MemoryInline::FlatRead32((r1 + 36));
    r5 = r26;
    r6 = r27;
    r7 = (r1 + 24);
    r8 = (r1 + 20);
    r9 = (r1 + 16);
    ctx->lr = 0x8045F17Cu;
    if constexpr (KnownRegArgsCpuCall<0x804617A0u>(&func_804617A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804617A0_8D4E = func_804617A0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804617A0_8D4E);
        r4 = static_cast<uint32_t>(regargs_result_804617A0_8D4E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        xer = ctx->xer;
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
        ctx->xer = xer;
        InvokeDirectCpu<0x804617A0u>(ctx);
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
        xer = ctx->xer;
    }
    MemoryInline::FlatWriteRam32((r1 + 84), r4);
    MemoryInline::FlatWriteRam32((r1 + 80), r3);
    goto loc_8045F1A8;
}

loc_8045F188:
{
    r4 = MemoryInline::FlatRead32((r1 + 36));
    r5 = r26;
    r6 = r27;
    r7 = (r1 + 24);
    r8 = (r1 + 20);
    r9 = (r1 + 16);
    ctx->lr = 0x8045F1A4u;
    if constexpr (KnownRegArgsCpuCall<0x8046138Cu>(&func_8046138C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8046138C_980F = func_8046138C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8046138C_980F);
        r4 = static_cast<uint32_t>(regargs_result_8046138C_980F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        xer = ctx->xer;
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8046138Cu>(ctx);
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
        xer = ctx->xer;
    }
    r15 = r3;
}

loc_8045F1A8:
{
    r3 = MemoryInline::FlatRead32((r1 + 24));
}

loc_8045F1B0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8045F1D8;
    }
}

loc_8045F1B4:
{
}

loc_8045F1B8:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8045F928;
    }
}

loc_8045F1BC:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r0 = 0;
    r29 = 1;
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
    r15 = 0;
    goto loc_8045F21C;
}

loc_8045F1D8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r21 = (r21 + r3);
}

loc_8045F1E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045F21C;
    }
}

loc_8045F1E8:
{
    r0 = MemoryInline::FlatRead8((r1 + 34));
}

loc_8045F1F0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_8045F20C;
    }
}

loc_8045F1F4:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    r0_subfic_ra_4 = r0;
    r0 = (0 - r0_subfic_ra_4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(0) >= static_cast<uint32_t>(r0_subfic_ra_4) ? 1u : 0u) << 29);
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r0 = MemoryInline::FlatRead32((r1 + 80));
    r0_subfze_src_4 = r0;
    r0_not_4 = ~(r0_subfze_src_4);
    r0_ca_4 = (xer >> 29) & 1u;
    r0 = (r0_not_4 + r0_ca_4);
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
}

loc_8045F20C:
{
    r0 = MemoryInline::FlatRead8((r1 + 34));
}

loc_8045F214:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(7))) {
        goto loc_8045F21C;
    }
}

loc_8045F218:
{
    r15 = (0 - r15);
}

loc_8045F21C:
{
}

loc_8045F220:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_8045F2A8;
    }
}

loc_8045F224:
{
    r0 = MemoryInline::FlatRead8((r1 + 34));
}

loc_8045F22C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(7))) {
        goto loc_8045F29C;
    }
}

loc_8045F230:
{
    r3 = 0x80610000u;
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_14 & -4);
    r3 = (r3 + -1592);
    r3_addr_11 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_11);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8045F248u:
        goto loc_8045F248;
        break;
    case 0x8045F250u:
        goto loc_8045F250;
        break;
    case 0x8045F258u:
        goto loc_8045F258;
        break;
    case 0x8045F260u:
        goto loc_8045F260;
        break;
    case 0x8045F268u:
        goto loc_8045F268;
        break;
    case 0x8045F27Cu:
        goto loc_8045F27C;
        break;
    case 0x8045F284u:
        goto loc_8045F284;
        break;
    case 0x8045F28Cu:
        goto loc_8045F28C;
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
        ctx->gpr[11] = r11;
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
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_8045F248:
{
    MemoryInline::FlatWrite32(r22, r15);
    goto loc_8045F29C;
}

loc_8045F250:
{
    MemoryInline::FlatWrite8(r22, static_cast<uint8_t>(r15));
    goto loc_8045F29C;
}

loc_8045F258:
{
    MemoryInline::FlatWrite16(r22, static_cast<uint16_t>(r15));
    goto loc_8045F29C;
}

loc_8045F260:
{
    MemoryInline::FlatWrite32(r22, r15);
    goto loc_8045F29C;
}

loc_8045F268:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    MemoryInline::FlatWrite32((r22 + 4), r0);
    r0 = MemoryInline::FlatRead32((r1 + 80));
    MemoryInline::FlatWrite32(r22, r0);
    goto loc_8045F29C;
}

loc_8045F27C:
{
    MemoryInline::FlatWrite32(r22, r15);
    goto loc_8045F29C;
}

loc_8045F284:
{
    MemoryInline::FlatWrite32(r22, r15);
    goto loc_8045F29C;
}

loc_8045F28C:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    MemoryInline::FlatWrite32((r22 + 4), r0);
    r0 = MemoryInline::FlatRead32((r1 + 80));
    MemoryInline::FlatWrite32(r22, r0);
}

loc_8045F29C:
{
}

loc_8045F2A0:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_8045F2A8;
    }
}

loc_8045F2A4:
{
    r20 = (r20 + 1);
}

loc_8045F2A8:
{
    r19 = (r19 + 1);
    goto loc_8045F91C;
}

loc_8045F2B0:
{
}

loc_8045F2B4:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8045F2C4;
    }
}

loc_8045F2B8:
{
    r3 = 0x80790000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 25016));
    goto loc_8045F304;
}

loc_8045F2C4:
{
    r3 = MemoryInline::FlatRead32((r1 + 36));
    r4 = r26;
    r5 = r27;
    r6 = (r1 + 24);
    r7 = (r1 + 16);
    ctx->lr = 0x8045F2DCu;
    if constexpr (KnownRegArgsCpuCall<0x80460068u>(&func_80460068)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80460068_B77F = func_80460068_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80460068_B77F);
        r4 = static_cast<uint32_t>(regargs_result_80460068_B77F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        xer = ctx->xer;
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
        ctx->xer = xer;
        InvokeDirectCpu<0x80460068u>(ctx);
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
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead32((r1 + 24));
}

loc_8045F2E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045F300;
    }
}

loc_8045F2E8:
{
}

loc_8045F2EC:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8045F928;
    }
}

loc_8045F2F0:
{
    r3 = 0x80790000u;
    r29 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 25016));
    goto loc_8045F304;
}

loc_8045F300:
{
    r21 = (r21 + r0);
}

loc_8045F304:
{
}

loc_8045F308:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_8045F350;
    }
}

loc_8045F30C:
{
    r0 = MemoryInline::FlatRead8((r1 + 34));
}

loc_8045F314:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045F32C;
    }
}

loc_8045F318:
{
}

loc_8045F31C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_8045F338;
    }
}

loc_8045F320:
{
}

loc_8045F324:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_8045F340;
    }
}

loc_8045F328:
{
    goto loc_8045F344;
}

loc_8045F32C:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    MemoryInline::FlatWriteFloat32(r22, f0.d);
    goto loc_8045F344;
}

loc_8045F338:
{
    MemoryInline::FlatWriteFloat64(r22, f1.d);
    goto loc_8045F344;
}

loc_8045F340:
{
    MemoryInline::FlatWriteFloat64(r22, f1.d);
}

loc_8045F344:
{
}

loc_8045F348:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_8045F350;
    }
}

loc_8045F34C:
{
    r20 = (r20 + 1);
}

loc_8045F350:
{
    r19 = (r19 + 1);
    goto loc_8045F91C;
}

loc_8045F358:
{
    r0 = MemoryInline::FlatRead8((r1 + 33));
}

loc_8045F360:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045F368;
    }
}

loc_8045F364:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r24);
}

loc_8045F368:
{
}

loc_8045F36C:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_8045F498;
    }
}

loc_8045F370:
{
}

loc_8045F374:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8045F38C;
    }
}

loc_8045F378:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r31 = 1;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x80456C5Cu>(&func_80456C5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80456C5C_C9A1 = func_80456C5C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80456C5C_C9A1;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
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
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80456C5Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r30 = MemoryInline::FlatRead32(r3);
}

loc_8045F38C:
{
}

loc_8045F390:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8045F3B0;
    }
}

loc_8045F39C:
{
}

loc_8045F3A0:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8045F91C;
    }
}

loc_8045F3A4:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r22, static_cast<uint8_t>(r0));
    goto loc_8045F91C;
}

loc_8045F3B0:
{
    MemoryInline::FlatWriteRam32((r1 + 76), r22);
    goto loc_8045F3F4;
}

loc_8045F3B8:
{
    r0 = MemoryInline::FlatRead8((r1 + 34));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r3));
}

loc_8045F3C4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_8045F3E0;
    }
}

loc_8045F3C8:
{
    r3 = r22;
    r4 = (r1 + 12);
    r5 = 1;
    ctx->lr = 0x8045F3D8u;
    if constexpr (KnownRegArgsCpuCall<0x8045BA20u>(&func_8045BA20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8045BA20_D26B = func_8045BA20_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045BA20_D26B);
        r4 = static_cast<uint32_t>(regargs_result_8045BA20_D26B >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        xer = ctx->xer;
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8045BA20u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        xer = ctx->xer;
    }
    r22 = (r22 + 2);
    goto loc_8045F3E8;
}

loc_8045F3E0:
{
    MemoryInline::FlatWrite8(r22, static_cast<uint8_t>(r3));
    r22 = (r22 + 1);
}

loc_8045F3E8:
{
    r3 = MemoryInline::FlatRead32((r1 + 24));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
}

loc_8045F3F4:
{
    r3 = MemoryInline::FlatRead32((r1 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8045F3FC:
{
    r3 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8045F448;
    }
}

loc_8045F408:
{
}

loc_8045F40C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8045F424;
    }
}

loc_8045F410:
{
    r0 = (r30 ^ r0);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0 = PPC_Slw(static_cast<uint32_t>(r30), static_cast<uint32_t>(r0));
    r31_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r31 = (r31_rot_3 & 1);
}

loc_8045F420:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8045F448;
    }
}

loc_8045F424:
{
    r12 = r26;
    r3 = r27;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    ctx->lr = 0x8045F43Cu;
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
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    xer = ctx->xer;
}

loc_8045F440:
{
    r18 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-1))) {
        goto loc_8045F3B8;
    }
}

loc_8045F448:
{
    r0 = MemoryInline::FlatRead32((r1 + 24));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r18));
}

loc_8045F454:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045F468;
    }
}

loc_8045F458:
{
}

loc_8045F45C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8045F48C;
    }
}

loc_8045F460:
{
}

loc_8045F464:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8045F48C;
    }
}

loc_8045F468:
{
}

loc_8045F46C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8045F928;
    }
}

loc_8045F470:
{
}

loc_8045F474:
{
    r29 = 1;
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8045F91C;
    }
}

loc_8045F47C:
{
    r3 = MemoryInline::FlatRead32((r1 + 76));
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_8045F91C;
}

loc_8045F48C:
{
    r21 = (r21 + r0);
    r20 = (r20 + 1);
    goto loc_8045F4FC;
}

loc_8045F498:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    goto loc_8045F4B4;
}

loc_8045F4A4:
{
    r4 = MemoryInline::FlatRead32((r1 + 24));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r3));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
}

loc_8045F4B4:
{
    r3 = MemoryInline::FlatRead32((r1 + 36));
}

loc_8045F4BC:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045F4EC;
    }
}

loc_8045F4C8:
{
    r12 = r26;
    r3 = r27;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    ctx->lr = 0x8045F4E0u;
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
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    xer = ctx->xer;
}

loc_8045F4E4:
{
    r18 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-1))) {
        goto loc_8045F4A4;
    }
}

loc_8045F4EC:
{
    r0 = MemoryInline::FlatRead32((r1 + 24));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r18));
}

loc_8045F4F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045F928;
    }
}

loc_8045F4FC:
{
    r19 = (r19 + 1);
    goto loc_8045F91C;
}

loc_8045F504:
{
}

loc_8045F508:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_8045F91C;
    }
}

loc_8045F50C:
{
    goto loc_8045F514;
}

loc_8045F510:
{
    r21 = (r21 + 1);
}

loc_8045F514:
{
    r12 = r26;
    r3 = r27;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    ctx->lr = 0x8045F52Cu;
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
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    xer = ctx->xer;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r3));
}

loc_8045F538:
{
    r4 = 1;
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(255))) {
        goto loc_8045F544;
    }
}

loc_8045F540:
{
    r4 = 0;
}

loc_8045F544:
{
}

loc_8045F548:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8045F554;
    }
}

loc_8045F54C:
{
    r0 = 0;
    goto loc_8045F568;
}

loc_8045F554:
{
    r4 = MemoryInline::FlatRead32((r23 + 56));
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_18 & -2);
    r4 = MemoryInline::FlatRead32((r4 + 8));
    r4_addr_6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16(r4_addr_6);
    r0 = (r0 & 256);
}

loc_8045F568:
{
}

loc_8045F56C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045F510;
    }
}

loc_8045F570:
{
    r0 = (r3 & 255);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8045F57C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(37))) {
        goto loc_8045F5A4;
    }
}

loc_8045F580:
{
    r12 = r26;
    r3 = r27;
    r5 = 1;
    ctr = r12;
    ctx->lr = 0x8045F594u;
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
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    xer = ctx->xer;
}

loc_8045F598:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8045F928;
    }
}

loc_8045F59C:
{
    r29 = 1;
    goto loc_8045F91C;
}

loc_8045F5A4:
{
    r21 = (r21 + 1);
    goto loc_8045F91C;
}

loc_8045F5AC:
{
}

loc_8045F5B0:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_8045F650;
    }
}

loc_8045F5B4:
{
    r12 = r26;
    r3 = r27;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    ctx->lr = 0x8045F5CCu;
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
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    xer = ctx->xer;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r3));
    goto loc_8045F5F4;
}

loc_8045F5D4:
{
    r12 = r26;
    r3 = r27;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r21 = (r21 + 1);
    ctx->lr = 0x8045F5F0u;
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
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    xer = ctx->xer;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r3));
}

loc_8045F5F4:
{
    r4 = (r3 & 255);
    r3 = 1;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_8045F604:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(255))) {
        goto loc_8045F60C;
    }
}

loc_8045F608:
{
    r3 = 0;
}

loc_8045F60C:
{
}

loc_8045F610:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045F61C;
    }
}

loc_8045F614:
{
    r0 = 0;
    goto loc_8045F630;
}

loc_8045F61C:
{
    r3 = MemoryInline::FlatRead32((r23 + 56));
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_21 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_15 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_15);
    r0 = (r0 & 256);
}

loc_8045F630:
{
}

loc_8045F634:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045F5D4;
    }
}

loc_8045F638:
{
    r12 = r26;
    r3 = r27;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r5 = 1;
    ctr = r12;
    ctx->lr = 0x8045F650u;
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
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    xer = ctx->xer;
}

loc_8045F650:
{
}

loc_8045F654:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_8045F7E4;
    }
}

loc_8045F658:
{
}

loc_8045F65C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8045F678;
    }
}

loc_8045F660:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r31 = 1;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x80456C5Cu>(&func_80456C5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80456C5C_113ED = func_80456C5C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80456C5C_113ED;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
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
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80456C5Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead32(r3);
    r30 = (r3 + -1);
}

loc_8045F678:
{
}

loc_8045F67C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8045F69C;
    }
}

loc_8045F688:
{
}

loc_8045F68C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8045F91C;
    }
}

loc_8045F690:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r22, static_cast<uint8_t>(r0));
    goto loc_8045F91C;
}

loc_8045F69C:
{
    MemoryInline::FlatWriteRam32((r1 + 72), r22);
    goto loc_8045F700;
}

loc_8045F6A4:
{
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_27 & 31);
    r5 = (r3 & 7);
    r4 = (r25 + r0);
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead8((r4 + 8));
    r4 = PPC_Slw(static_cast<uint32_t>(r24), static_cast<uint32_t>(r5));
    r3 = (r3 & 255);
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045F758;
    }
}

loc_8045F6C8:
{
    r0 = MemoryInline::FlatRead8((r1 + 34));
}

loc_8045F6D0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_8045F6EC;
    }
}

loc_8045F6D4:
{
    r3 = r22;
    r4 = (r1 + 12);
    r5 = 1;
    ctx->lr = 0x8045F6E4u;
    if constexpr (KnownRegArgsCpuCall<0x8045BA20u>(&func_8045BA20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8045BA20_11E7A = func_8045BA20_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045BA20_11E7A);
        r4 = static_cast<uint32_t>(regargs_result_8045BA20_11E7A >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        xer = ctx->xer;
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8045BA20u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        xer = ctx->xer;
    }
    r22 = (r22 + 2);
    goto loc_8045F6F4;
}

loc_8045F6EC:
{
    MemoryInline::FlatWrite8(r22, static_cast<uint8_t>(r3));
    r22 = (r22 + 1);
}

loc_8045F6F4:
{
    r3 = MemoryInline::FlatRead32((r1 + 24));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
}

loc_8045F700:
{
    r3 = MemoryInline::FlatRead32((r1 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8045F708:
{
    r3 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8045F758;
    }
}

loc_8045F714:
{
}

loc_8045F718:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8045F734;
    }
}

loc_8045F71C:
{
    r4 = (r30 - r0);
    r3 = (r30 | ~r0);
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
    r0 = (r0_rot_25 & 2147483647);
    r0 = (r3 - r0);
    r31_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r31 = (r31_rot_8 & 1);
}

loc_8045F730:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8045F758;
    }
}

loc_8045F734:
{
    r12 = r26;
    r3 = r27;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    ctx->lr = 0x8045F74Cu;
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
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    xer = ctx->xer;
}

loc_8045F750:
{
    r18 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-1))) {
        goto loc_8045F6A4;
    }
}

loc_8045F758:
{
    r3 = MemoryInline::FlatRead32((r1 + 24));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r18));
}

loc_8045F764:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045F778;
    }
}

loc_8045F768:
{
}

loc_8045F76C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8045F7B8;
    }
}

loc_8045F770:
{
}

loc_8045F774:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8045F7B8;
    }
}

loc_8045F778:
{
    r4 = (r18 & 255);
    r12 = r26;
    r3 = r27;
    r5 = 1;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    ctr = r12;
    ctx->lr = 0x8045F794u;
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
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    xer = ctx->xer;
}

loc_8045F798:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8045F928;
    }
}

loc_8045F79C:
{
}

loc_8045F7A0:
{
    r29 = 1;
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8045F91C;
    }
}

loc_8045F7A8:
{
    r3 = MemoryInline::FlatRead32((r1 + 72));
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_8045F91C;
}

loc_8045F7B8:
{
    r0 = MemoryInline::FlatRead8((r1 + 34));
    r21 = (r21 + r3);
}

loc_8045F7C4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_8045F7D4;
    }
}

loc_8045F7C8:
{
    r0 = 0;
    MemoryInline::FlatWrite16(r22, static_cast<uint16_t>(r0));
    goto loc_8045F7DC;
}

loc_8045F7D4:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r22, static_cast<uint8_t>(r0));
}

loc_8045F7DC:
{
    r20 = (r20 + 1);
    goto loc_8045F888;
}

loc_8045F7E4:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    goto loc_8045F81C;
}

loc_8045F7F0:
{
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_30 & 31);
    r5 = (r3 & 7);
    r4 = (r25 + r0);
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead8((r4 + 8));
    r3 = PPC_Slw(static_cast<uint32_t>(r24), static_cast<uint32_t>(r5));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045F854;
    }
}

loc_8045F810:
{
    r3 = MemoryInline::FlatRead32((r1 + 24));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
}

loc_8045F81C:
{
    r3 = MemoryInline::FlatRead32((r1 + 36));
}

loc_8045F824:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045F854;
    }
}

loc_8045F830:
{
    r12 = r26;
    r3 = r27;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    ctx->lr = 0x8045F848u;
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
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    xer = ctx->xer;
}

loc_8045F84C:
{
    r18 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-1))) {
        goto loc_8045F7F0;
    }
}

loc_8045F854:
{
    r0 = MemoryInline::FlatRead32((r1 + 24));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r18));
}

loc_8045F860:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045F884;
    }
}

loc_8045F864:
{
    r4 = (r18 & 255);
    r12 = r26;
    r3 = r27;
    r5 = 1;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    ctr = r12;
    ctx->lr = 0x8045F880u;
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
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    xer = ctx->xer;
    goto loc_8045F91C;
}

loc_8045F884:
{
    r21 = (r21 + r0);
}

loc_8045F888:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
}

loc_8045F890:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8045F8B0;
    }
}

loc_8045F894:
{
    r4 = MemoryInline::FlatRead8((r1 + 12));
    r12 = r26;
    r3 = r27;
    r5 = 1;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    ctr = r12;
    ctx->lr = 0x8045F8B0u;
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
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    xer = ctx->xer;
}

loc_8045F8B0:
{
    r19 = (r19 + 1);
    goto loc_8045F91C;
}

loc_8045F8B8:
{
}

loc_8045F8BC:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_8045F91C;
    }
}

loc_8045F8C0:
{
    r0 = MemoryInline::FlatRead8((r1 + 34));
}

loc_8045F8C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045F8F0;
    }
}

loc_8045F8CC:
{
}

loc_8045F8D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8045F8F8;
    }
}

loc_8045F8D4:
{
}

loc_8045F8D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8045F900;
    }
}

loc_8045F8DC:
{
}

loc_8045F8E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8045F908;
    }
}

loc_8045F8E4:
{
}

loc_8045F8E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_8045F910;
    }
}

loc_8045F8EC:
{
    goto loc_8045F91C;
}

loc_8045F8F0:
{
    MemoryInline::FlatWrite32(r22, r21);
    goto loc_8045F91C;
}

loc_8045F8F8:
{
    MemoryInline::FlatWrite16(r22, static_cast<uint16_t>(r21));
    goto loc_8045F91C;
}

loc_8045F900:
{
    MemoryInline::FlatWrite32(r22, r21);
    goto loc_8045F91C;
}

loc_8045F908:
{
    MemoryInline::FlatWrite8(r22, static_cast<uint8_t>(r21));
    goto loc_8045F91C;
}

loc_8045F910:
{
    MemoryInline::FlatWrite32((r22 + 4), r21);
    r0 = (static_cast<int32_t>(r21) >> 31);
    MemoryInline::FlatWrite32(r22, r0);
}

loc_8045F91C:
{
    r0 = MemoryInline::FlatRead8(r17);
    r22 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(0))) {
        goto loc_8045ED38;
    }
}

loc_8045F928:
{
    r12 = r26;
    r3 = r27;
    r4 = 0;
    r5 = 2;
    ctr = r12;
    ctx->lr = 0x8045F940u;
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
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    xer = ctx->xer;
}

loc_8045F944:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045F958;
    }
}

loc_8045F948:
{
}

loc_8045F94C:
{
    if ((static_cast<int32_t>(r19) != static_cast<int32_t>(0))) {
        goto loc_8045F958;
    }
}

loc_8045F950:
{
    r3 = -1;
    goto loc_8045F95C;
}

loc_8045F958:
{
    r3 = r20;
}

loc_8045F95C:
{
    r11 = (r1 + 176);
    // inline leaf 0x804574A4 (18 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -68), 0, 68u, true, false);
    // end of inlined leaf 0x804574A4
    r0 = MemoryInline::FlatRead32((r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    ctx->xer = xer;
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

extern "C" void func_8045ECDC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8045ECDC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8045ECDC func_8045ECDC preserves=true fpr_mask=0x00000000
