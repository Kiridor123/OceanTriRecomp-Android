#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804D1060(CpuContext* ctx);
extern "C" uint64_t func_804D1060_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804CF9D0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
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
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_10 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r11_rot_4 = 0;
    uint32_t r11_rot_5 = 0;
    uint32_t r11_rot_6 = 0;
    uint32_t r11_rot_7 = 0;
    uint32_t r11_rot_8 = 0;
    uint32_t r11_rot_9 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r12_rot_5 = 0;
    uint32_t r12_rot_6 = 0;
    uint32_t r12_rot_7 = 0;
    uint32_t r15_addr_0 = 0;
    uint32_t r15_addr_1 = 0;
    uint32_t r15_addr_2 = 0;
    uint32_t r15_addr_3 = 0;
    uint32_t r15_addr_4 = 0;
    uint32_t r15_addr_5 = 0;
    uint32_t r15_rot_0 = 0;
    uint32_t r15_rot_1 = 0;
    uint32_t r15_rot_2 = 0;
    uint32_t r15_rot_3 = 0;
    uint32_t r15_rot_4 = 0;
    uint32_t r15_rot_5 = 0;
    uint32_t r16_rot_0 = 0;
    uint32_t r16_rot_1 = 0;
    uint32_t r16_rot_2 = 0;
    uint32_t r16_rot_3 = 0;
    uint32_t r16_rot_4 = 0;
    uint32_t r16_rot_5 = 0;
    uint32_t r17_rot_0 = 0;
    uint32_t r17_rot_1 = 0;
    uint32_t r17_rot_2 = 0;
    uint32_t r17_rot_3 = 0;
    uint32_t r17_rot_4 = 0;
    uint32_t r17_rot_5 = 0;
    uint32_t r19_rot_0 = 0;
    uint32_t r19_rot_1 = 0;
    uint32_t r19_rot_2 = 0;
    uint32_t r19_rot_3 = 0;
    uint32_t r19_rot_4 = 0;
    uint32_t r19_rot_5 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r29_addr_4 = 0;
    uint32_t r29_addr_5 = 0;
    uint32_t r29_addr_6 = 0;
    uint32_t r29_addr_7 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint32_t r9_rot_6 = 0;
    uint32_t r9_rot_7 = 0;
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

    goto loc_804CF9D0;

loc_804CF9D0:
{
    MemoryInline::FlatWriteRam32((r1 + -384), r1);
    r1 = (r1 + -384);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 388), r0);
    r11 = (r1 + 384);
    // inline leaf 0x80457454 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    // end of inlined leaf 0x80457454
    r0 = (r5 + -24);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r24 = r4;
    r25 = r6;
    MemoryInline::FlatWriteRam32((r1 + 304), r0);
    r26 = r7;
    r27 = r8;
    r14 = r9;
    r30 = (r4 + -48);
    r20 = 0x80810000u;
    r21 = 0x88890000u;
    r31 = 0;
    r23 = 24;
    r22 = 3;
}

loc_804CFA1C:
{
    r0 = MemoryInline::FlatRead32((r1 + 304));
}

loc_804CFA24:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r27))) {
        goto loc_804CFCE0;
    }
}

loc_804CFA28:
{
    r0 = (r27 * r24);
    r28 = r26;
    r0 = (r26 + r0);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & -2);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r29 = (r0 + r3);
    goto loc_804CFCD4;
}

loc_804CFA44:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_804CFA4C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_804CFA5C;
    }
}

loc_804CFA50:
{
    r27 = (r27 + r14);
    r10 = (r10 + 1);
    goto loc_804CFA1C;
}

loc_804CFA5C:
{
}

loc_804CFA60:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(r28))) {
        goto loc_804CFA6C;
    }
}

loc_804CFA64:
{
    r27 = (r27 + r14);
    goto loc_804CFA1C;
}

loc_804CFA6C:
{
    r5 = 0;
    r6 = 0;
    ctr = r22;
}

loc_804CFA78:
{
    r0 = (r5 & 7);
    r8 = (r5 + 1);
    r9 = (r0 + r6);
    r16 = (r5 + 3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(29));
    r0 = (r0_rot_4 & 536870911);
    r4 = (r1 + 16);
    r3 = (r0 * 24);
    r8 = (r8 & 7);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r7 = (r5 + 2);
    r4 = (r4 + r0);
    r18 = (r5 + 4);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(29));
    r0 = (r0_rot_6 & 536870911);
    r8 = (r8 + r3);
    MemoryInline::FlatWrite32(r4, r31);
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r8 = (r8_rot_4 & -4);
    r0 = (r0 * 24);
    r7 = (r7 & 7);
    MemoryInline::FlatWrite32((r4 + 32), r31);
    r3 = (r1 + 16);
    r17_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(29));
    r17 = (r17_rot_4 & 536870911);
    MemoryInline::FlatWrite32((r4 + 64), r31);
    r0 = (r7 + r0);
    r12 = (r5 + 5);
    r11_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(29));
    r11 = (r11_rot_4 & 536870911);
    r3_addr_4 = (r3 + r8);
    MemoryInline::FlatWrite32(r3_addr_4, r31);
    r3 = r3_addr_4;
    r9 = (r5 + 6);
    r15_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r15 = (r15_rot_4 & -4);
    r8_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(29));
    r8 = (r8_rot_5 & 536870911);
    MemoryInline::FlatWrite32((r3 + 32), r31);
    r19_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r18), static_cast<uint32_t>(29));
    r19 = (r19_rot_4 & 536870911);
    r4 = (r1 + 16);
    MemoryInline::FlatWrite32((r3 + 64), r31);
    r3 = (r16 & 7);
    r16 = (r17 * 24);
    r7 = (r5 + 7);
    r4_addr_4 = (r4 + r15);
    MemoryInline::FlatWrite32(r4_addr_4, r31);
    r4 = r4_addr_4;
    r15 = (r1 + 16);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(29));
    r0 = (r0_rot_7 & 536870911);
    MemoryInline::FlatWrite32((r4 + 32), r31);
    r3 = (r3 + r16);
    r17 = (r18 & 7);
    r16 = (r19 * 24);
    MemoryInline::FlatWrite32((r4 + 64), r31);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r4 = (r4_rot_4 & -4);
    r3 = r15;
    r15_addr_4 = (r15 + r4);
    MemoryInline::FlatWrite32(r15_addr_4, r31);
    r15 = r15_addr_4;
    r16 = (r17 + r16);
    MemoryInline::FlatWrite32((r15 + 32), r31);
    r11 = (r11 * 24);
    r12 = (r12 & 7);
    r16_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(2));
    r16 = (r16_rot_4 & -4);
    MemoryInline::FlatWrite32((r15 + 64), r31);
    r4 = r3;
    r9 = (r9 & 7);
    r8 = (r8 * 24);
    r3_addr_5 = (r3 + r16);
    MemoryInline::FlatWrite32(r3_addr_5, r31);
    r3 = r3_addr_5;
    r11 = (r12 + r11);
    MemoryInline::FlatWrite32((r3 + 32), r31);
    r7 = (r7 & 7);
    r0 = (r0 * 24);
    r11_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(2));
    r11 = (r11_rot_5 & -4);
    MemoryInline::FlatWrite32((r3 + 64), r31);
    r8 = (r9 + r8);
    r4_addr_5 = (r4 + r11);
    MemoryInline::FlatWrite32(r4_addr_5, r31);
    r4 = r4_addr_5;
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r3 = (r3_rot_5 & -4);
    r8 = (r1 + 16);
    r0 = (r7 + r0);
    MemoryInline::FlatWrite32((r4 + 32), r31);
    r8 = (r8 + r3);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = (r1 + 16);
    MemoryInline::FlatWrite32((r4 + 64), r31);
    r6 = (r6 + 24);
    r5 = (r5 + 8);
    MemoryInline::FlatWrite32(r8, r31);
    MemoryInline::FlatWrite32((r8 + 32), r31);
    MemoryInline::FlatWrite32((r8 + 64), r31);
    r3_addr_6 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_6, r31);
    r3 = r3_addr_6;
    MemoryInline::FlatWrite32((r3 + 32), r31);
    MemoryInline::FlatWrite32((r3 + 64), r31);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804CFA78;
    }
}

loc_804CFBC0:
{
    r3 = r10;
    r4 = (r1 + 16);
    r7 = (r1 + 12);
    r5 = 0;
    r6 = 6;
    ctx->lr = 0x804CFBD8u;
    if constexpr (KnownRegArgsCpuCall<0x804D1060u>(&func_804D1060)) {
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
        const auto regargs_result_804D1060_30BD = func_804D1060_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D1060_30BD);
        r4 = static_cast<uint32_t>(regargs_result_804D1060_30BD >> 32);
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
        InvokeDirectCpu<0x804D1060u>(ctx);
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
    r10 = r3;
    r7 = 0;
    r3 = 0;
}

loc_804CFBE4:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(29));
    r0 = (r0_rot_10 & 536870911);
    r6 = (r7 & 7);
    r0 = (r0 * 24);
    r5 = (r1 + 16);
    r4 = r28;
    r8 = 0;
    r0 = (r6 + r0);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r5 = (r5 + r0);
    ctr = r23;
}

loc_804CFC0C:
{
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r6 = (r6_rot_5 & -32);
    r0 = (r8 & 7);
    r0_subfic_ra_5 = r0;
    r0 = (7 - r0_subfic_ra_5);
    r5_addr_5 = (r5 + r6);
    r6 = MemoryInline::FlatRead32(r5_addr_5);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r0 = PPC_Srw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
    r9 = (r0 & 15);
}

loc_804CFC28:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_804CFCA8;
    }
}

loc_804CFC2C:
{
    r6 = MemoryInline::FlatRead8(r25);
    r0 = (r8 + r3);
    r12_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r12 = (r12_rot_5 & -2);
    r11 = (r20 + -32639);
    r9 = (r6 * r9);
    r0 = (r4 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_804CFC44:
{
    r6 = (r29 + r12);
    r0 = (r21 + -30583);
    r9 = (r9 * 239);
    r11 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r11)) * static_cast<int64_t>(static_cast<int32_t>(r9))) >> 32));
    r9 = (r11 + r9);
    r9 = (static_cast<int32_t>(r9) >> 7);
    r11_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r11 = (r11_rot_8 & 1);
    r9 = (r9 + r11);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r9))) >> 32));
    r0 = (r0 + r9);
    r0 = (static_cast<int32_t>(r0) >> 3);
    r9_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r9 = (r9_rot_5 & 1);
    r9 = (r0 + r9);
    r0 = (r9 + 16);
    r29_addr_5 = (r29 + r12);
    MemoryInline::FlatWrite8(r29_addr_5, static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804CFC98;
    }
}

loc_804CFC84:
{
    r0 = MemoryInline::FlatRead8((r25 + 1));
    MemoryInline::FlatWrite8((r6 + -1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r25 + 2));
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r0));
    goto loc_804CFCA8;
}

loc_804CFC98:
{
    r0 = MemoryInline::FlatRead8((r25 + 2));
    MemoryInline::FlatWrite8((r6 + -1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r25 + 1));
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r0));
}

loc_804CFCA8:
{
    r4 = (r4 + 1);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804CFC0C;
    }
}

loc_804CFCB4:
{
    r7 = (r7 + 1);
    r3 = (r3 + r24);
}

loc_804CFCC0:
{
    if ((static_cast<uint32_t>(r7) < static_cast<uint32_t>(24))) {
        goto loc_804CFBE4;
    }
}

loc_804CFCC4:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_14 & -2);
    r28 = (r28 + r3);
    r29 = (r29 + r0);
}

loc_804CFCD4:
{
    r3 = MemoryInline::FlatRead8(r10);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804CFA44;
    }
}

loc_804CFCE0:
{
    r11 = (r1 + 384);
    // inline leaf 0x804574A0 (19 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    // end of inlined leaf 0x804574A0
    r0 = MemoryInline::FlatRead32((r1 + 388));
    ctx->lr = r0;
    r1 = (r1 + 384);
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

extern "C" void func_804CF9D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804CF9D0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804CF9D0 func_804CF9D0 preserves=true fpr_mask=0x00000000
