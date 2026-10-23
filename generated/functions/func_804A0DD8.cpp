#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8047ABF0(CpuContext* ctx);
extern "C" uint64_t func_8047ABF0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804A13C4(CpuContext* ctx);
extern "C" uint64_t func_804A13C4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804A0DD8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r28_addr_4 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r30_addr_5 = 0;
    uint32_t r30_addr_6 = 0;
    uint32_t r30_addr_7 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r6_subfic_ra_0 = 0;
    uint32_t r6_subfic_ra_1 = 0;
    uint32_t r6_subfic_ra_2 = 0;
    uint32_t r6_subfic_ra_3 = 0;
    uint32_t r6_subfic_ra_4 = 0;
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_804A0DD8;

loc_804A0DD8:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r8 = 0x80740000u;
    r26 = r5;
    r8 = (r8 + -2048);
    r24 = r3;
    r9 = MemoryInline::FlatRead16((r8 + 4642));
    r25 = r4;
    r27 = r6;
    r28 = r7;
    r30 = (r8 + 4644);
    r5 = 0;
    goto loc_804A1148;
}

loc_804A0E18:
{
    r0 = MemoryInline::FlatRead32(r30);
}

loc_804A0E20:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_804A1140;
    }
}

loc_804A0E24:
{
    r3 = MemoryInline::FlatRead16((r30 + 8));
    r29 = (r30 + 12);
    r31 = 0;
    goto loc_804A0E5C;
}

loc_804A0E34:
{
    r0 = MemoryInline::FlatRead16((r29 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_804A0E3C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804A0E50;
    }
}

loc_804A0E40:
{
    r3 = r24;
    r4 = r25;
    ctx->lr = 0x804A0E4Cu;
    if constexpr (KnownRegArgsCpuCall<0x804A13C4u>(&func_804A13C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804A13C4_11FE = func_804A13C4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A13C4_11FE);
        r4 = static_cast<uint32_t>(regargs_result_804A13C4_11FE >> 32);
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
        InvokeDirectCpu<0x804A13C4u>(ctx);
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
    goto loc_804A0E68;
}

loc_804A0E50:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_804A0E68;
    }
}

loc_804A0E54:
{
    r31 = (r31 + 1);
    r29 = (r29 + 12);
}

loc_804A0E5C:
{
    r0 = (r31 & 65535);
}

loc_804A0E64:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_804A0E34;
    }
}

loc_804A0E68:
{
    r5 = MemoryInline::FlatRead16((r30 + 8));
}

loc_804A0E70:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(25))) {
        goto loc_804A0E7C;
    }
}

loc_804A0E74:
{
    r3 = 0;
    goto loc_804A1158;
}

loc_804A0E7C:
{
    r0 = (r31 & 65535);
}

loc_804A0E84:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r5))) {
        goto loc_804A0E98;
    }
}

loc_804A0E88:
{
    r0 = (r5 * 12);
    r3 = (r30 + r0);
    r29 = (r3 + 12);
    goto loc_804A105C;
}

loc_804A0E98:
{
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_804A0E9C:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_804A105C;
    }
}

loc_804A0EA0:
{
    r0 = (r5 - r31);
    r3 = (r31 + 8);
    r0 = (r0 & 65535);
}

loc_804A0EB0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(8))) {
        goto loc_804A1018;
    }
}

loc_804A0EB4:
{
    if (((cr & 0x08000000u) != 0)) {
        goto loc_804A1018;
    }
}

loc_804A0EB8:
{
    r3 = (r3 & 65535);
    r0 = (r5 + 7);
    r0 = (r0 - r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_804A0ED0:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r3))) {
        goto loc_804A1018;
    }
}

loc_804A0ED4:
{
    r0 = (r5 & 65535);
    r3 = (r5 + 65536);
    r4 = (r0 * 12);
    r4_addr_2 = (r4 + r30);
    r9 = MemoryInline::FlatRead32(r4_addr_2);
    r4 = r4_addr_2;
    r6 = (r3 + -1);
    r0 = (r3 + -2);
    r7 = MemoryInline::FlatRead32((r4 + 4));
    r6 = (r6 & 65535);
    r8 = (r6 * 12);
    r5 = (r5 + -8);
    MemoryInline::FlatWrite32((r4 + 12), r9);
    r6 = (r0 & 65535);
    r0 = (r3 + -3);
    MemoryInline::FlatWrite32((r4 + 16), r7);
    r0 = (r0 & 65535);
    r23 = (r30 + r8);
    r11 = MemoryInline::FlatRead32((r4 + 8));
    r10 = (r6 * 12);
    r6 = (r3 + -4);
    MemoryInline::FlatWrite32((r4 + 20), r11);
    r9 = (r0 * 12);
    r0 = (r3 + -5);
    r30_addr_2 = (r30 + r8);
    r12 = MemoryInline::FlatRead32(r30_addr_2);
    r6 = (r6 & 65535);
    r11 = MemoryInline::FlatRead32((r23 + 4));
    r7 = (r0 & 65535);
    MemoryInline::FlatWrite32(r4, r12);
    r12 = (r30 + r10);
    r0 = (r3 + -6);
    r10 = (r30 + r9);
    r8 = (r6 * 12);
    MemoryInline::FlatWrite32((r4 + 4), r11);
    r6 = (r0 & 65535);
    r0 = (r3 + -7);
    r3 = (r6 * 12);
    r6 = MemoryInline::FlatRead32((r23 + 8));
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r4 + 8), r6);
    r9 = (r30 + r8);
    r7 = (r7 * 12);
    r11 = MemoryInline::FlatRead32(r12);
    r8 = (r30 + r7);
    r7 = (r30 + r3);
    r3 = MemoryInline::FlatRead32((r12 + 4));
    r0 = (r0 * 12);
    MemoryInline::FlatWrite32((r4 + -12), r11);
    MemoryInline::FlatWrite32((r4 + -8), r3);
    r6 = (r30 + r0);
    r0 = MemoryInline::FlatRead32((r12 + 8));
    MemoryInline::FlatWrite32((r4 + -4), r0);
    r3 = MemoryInline::FlatRead32(r10);
    r0 = MemoryInline::FlatRead32((r10 + 4));
    MemoryInline::FlatWrite32((r4 + -24), r3);
    MemoryInline::FlatWrite32((r4 + -20), r0);
    r0 = MemoryInline::FlatRead32((r10 + 8));
    MemoryInline::FlatWrite32((r4 + -16), r0);
    r3 = MemoryInline::FlatRead32(r9);
    r0 = MemoryInline::FlatRead32((r9 + 4));
    MemoryInline::FlatWrite32((r4 + -36), r3);
    MemoryInline::FlatWrite32((r4 + -32), r0);
    r0 = MemoryInline::FlatRead32((r9 + 8));
    MemoryInline::FlatWrite32((r4 + -28), r0);
    r3 = MemoryInline::FlatRead32(r8);
    r0 = MemoryInline::FlatRead32((r8 + 4));
    MemoryInline::FlatWrite32((r4 + -48), r3);
    MemoryInline::FlatWrite32((r4 + -44), r0);
    r0 = MemoryInline::FlatRead32((r8 + 8));
    MemoryInline::FlatWrite32((r4 + -40), r0);
    r3 = MemoryInline::FlatRead32(r7);
    r0 = MemoryInline::FlatRead32((r7 + 4));
    MemoryInline::FlatWrite32((r4 + -60), r3);
    MemoryInline::FlatWrite32((r4 + -56), r0);
    r0 = MemoryInline::FlatRead32((r7 + 8));
    MemoryInline::FlatWrite32((r4 + -52), r0);
    r3 = MemoryInline::FlatRead32(r6);
    r0 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWrite32((r4 + -72), r3);
    MemoryInline::FlatWrite32((r4 + -68), r0);
    r0 = MemoryInline::FlatRead32((r6 + 8));
    MemoryInline::FlatWrite32((r4 + -64), r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804A0ED4;
    }
}

loc_804A1018:
{
    r3 = (r31 & 65535);
    r4 = (r5 & 65535);
    r0 = (r4 - r3);
    ctr = r0;
}

loc_804A102C:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r3))) {
        goto loc_804A105C;
    }
}

loc_804A1030:
{
    r0 = (r5 & 65535);
    r5 = (r5 + -1);
    r0 = (r0 * 12);
    r4 = (r30 + r0);
    r30_addr_5 = (r30 + r0);
    r3 = MemoryInline::FlatRead32(r30_addr_5);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r4 + 12), r3);
    MemoryInline::FlatWrite32((r4 + 16), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r4 + 20), r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804A1030;
    }
}

loc_804A105C:
{
    r3 = MemoryInline::FlatRead16((r30 + 8));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r30 + 8), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r25));
    MemoryInline::FlatWrite32(r29, r27);
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r26));
    r6 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r6 + r27);
}

loc_804A1080:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(350))) {
        goto loc_804A10D0;
    }
}

loc_804A1084:
{
    r3 = 0x80740000u;
    r3 = (r3 + -2048);
    r0 = MemoryInline::FlatRead8((r3 + 17968));
}

loc_804A1094:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_804A10B4;
    }
}

loc_804A1098:
{
    r3 = 655360;
    r4 = 0x80620000u;
    r5 = r27;
    r6_subfic_ra_1 = r6;
    r6 = (350 - r6_subfic_ra_1);
    r3 = (r3 + 1);
    r4 = (r4 + -30960);
    ctx->lr = 0x804A10B4u;
    if constexpr (KnownRegArgsCpuCall<0x8047ABF0u>(&func_8047ABF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8047ABF0_359E = func_8047ABF0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABF0_359E);
        r4 = static_cast<uint32_t>(regargs_result_8047ABF0_359E >> 32);
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
        InvokeDirectCpu<0x8047ABF0u>(ctx);
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
}

loc_804A10B4:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r3 = 0;
    r27 = (350 - r0);
    r28_addr_1 = (r28 + r27);
    MemoryInline::FlatWrite8(r28_addr_1, static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0_subfic_ra_1 = r0;
    r0 = (351 - r0_subfic_ra_1);
    r28_addr_2 = (r28 + r0);
    MemoryInline::FlatWrite8(r28_addr_2, static_cast<uint8_t>(r3));
}

loc_804A10D0:
{
}

loc_804A10D4:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_804A1114;
    }
}

loc_804A10D8:
{
}

loc_804A10DC:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_804A1114;
    }
}

loc_804A10E0:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r4 = r28;
    r5 = r27;
    r3 = (r30 + r0);
    r3 = (r3 + 312);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r3 = (r30 + r0);
    r0 = (r3 + 312);
    MemoryInline::FlatWrite32((r29 + 4), r0);
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r0 + r27);
    MemoryInline::FlatWrite32((r30 + 4), r0);
}

loc_804A1114:
{
    r3 = 0x80740000u;
    r3 = (r3 + -2048);
    r0 = MemoryInline::FlatRead32((r3 + 4636));
}

loc_804A1124:
{
    if ((static_cast<uint32_t>(r24) != static_cast<uint32_t>(r0))) {
        goto loc_804A1138;
    }
}

loc_804A1128:
{
}

loc_804A112C:
{
    if ((static_cast<uint32_t>(r25) != static_cast<uint32_t>(32769))) {
        goto loc_804A1138;
    }
}

loc_804A1130:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r3 + 4640), static_cast<uint8_t>(r0));
}

loc_804A1138:
{
    r3 = 1;
    goto loc_804A1158;
}

loc_804A1140:
{
    r5 = (r5 + 1);
    r30 = (r30 + 664);
}

loc_804A1148:
{
    r0 = (r5 & 65535);
}

loc_804A1150:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r9))) {
        goto loc_804A0E18;
    }
}

loc_804A1154:
{
    r3 = 0;
}

loc_804A1158:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804A0DD8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804A0DD8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804A0DD8 func_804A0DD8 preserves=true fpr_mask=0x00000000
