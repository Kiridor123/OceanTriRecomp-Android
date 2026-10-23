#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80531CA0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_stbux_80532244_loc_0 = 0;
    uint32_t addr_stbux_805322FC_loc_0 = 0;
    uint32_t addr_stbux_80532368_loc_0 = 0;
    uint32_t addr_stbux_805323E4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_10 = 0;
    uint32_t r0_mdest_11 = 0;
    uint32_t r0_mdest_12 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mdest_6 = 0;
    uint32_t r0_mdest_7 = 0;
    uint32_t r0_mdest_8 = 0;
    uint32_t r0_mdest_9 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_10 = 0;
    uint32_t r0_mrot_11 = 0;
    uint32_t r0_mrot_12 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_mrot_6 = 0;
    uint32_t r0_mrot_7 = 0;
    uint32_t r0_mrot_8 = 0;
    uint32_t r0_mrot_9 = 0;
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
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r21_mdest_0 = 0;
    uint32_t r21_mdest_1 = 0;
    uint32_t r21_mdest_2 = 0;
    uint32_t r21_mrot_0 = 0;
    uint32_t r21_mrot_1 = 0;
    uint32_t r21_mrot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mdest_3 = 0;
    uint32_t r3_mdest_4 = 0;
    uint32_t r3_mdest_5 = 0;
    uint32_t r3_mdest_6 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_mrot_3 = 0;
    uint32_t r3_mrot_4 = 0;
    uint32_t r3_mrot_5 = 0;
    uint32_t r3_mrot_6 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mdest_2 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_mrot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_10 = 0;
    uint32_t r4_rot_11 = 0;
    uint32_t r4_rot_12 = 0;
    uint32_t r4_rot_13 = 0;
    uint32_t r4_rot_14 = 0;
    uint32_t r4_rot_15 = 0;
    uint32_t r4_rot_16 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r5_rot_9 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r6_rot_8 = 0;
    uint32_t r6_rot_9 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r7_rot_8 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
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
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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
    uint32_t r13 = ctx->gpr[13];
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
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    goto loc_80531CA0;

loc_80531CA0:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r20 = r3;
    r28 = MemoryInline::FlatRead8((r1 + 107));
    r21 = r4;
    r11_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r11 = (r11_rot_0 & 15);
    r29 = MemoryInline::FlatRead8((r1 + 111));
}

loc_80531CD0:
{
    r30 = MemoryInline::FlatRead8((r1 + 115));
    r31 = MemoryInline::FlatRead8((r1 + 119));
    r22 = r5;
    r23 = r6;
    r24 = r7;
    r25 = r8;
    r26 = r9;
    r27 = r10;
    if ((static_cast<uint32_t>(r11) < static_cast<uint32_t>(r4))) {
        goto loc_80531D6C;
    }
}

loc_80531CF4:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r4 = (r4_rot_1 & 15);
}

loc_80531CFC:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r5))) {
        goto loc_80531D6C;
    }
}

loc_80531D00:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r4 = (r4_rot_2 & 15);
}

loc_80531D08:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r6))) {
        goto loc_80531D6C;
    }
}

loc_80531D0C:
{
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(23));
    r4 = (r4_rot_3 & 31);
}

loc_80531D14:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r7))) {
        goto loc_80531D6C;
    }
}

loc_80531D18:
{
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(18));
    r4 = (r4_rot_4 & 1);
}

loc_80531D20:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r8))) {
        goto loc_80531D6C;
    }
}

loc_80531D24:
{
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_5 & 7);
}

loc_80531D2C:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r9))) {
        goto loc_80531D6C;
    }
}

loc_80531D30:
{
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(14));
    r4 = (r4_rot_6 & 3);
}

loc_80531D38:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r10))) {
        goto loc_80531D6C;
    }
}

loc_80531D3C:
{
    r4_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r4 = (r4_rot_7 & 1);
}

loc_80531D44:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r28))) {
        goto loc_80531D6C;
    }
}

loc_80531D48:
{
    r4_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r4 = (r4_rot_8 & 1);
}

loc_80531D50:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r29))) {
        goto loc_80531D6C;
    }
}

loc_80531D54:
{
    r4_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r4 = (r4_rot_9 & 1);
}

loc_80531D5C:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r30))) {
        goto loc_80531D6C;
    }
}

loc_80531D60:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 1);
}

loc_80531D68:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r31))) {
        goto loc_805323F4;
    }
}

loc_80531D6C:
{
    r4 = MemoryInline::FlatRead32((r3 + 64));
}

loc_80531D74:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80531DA0;
    }
}

loc_80531D78:
{
    r3 = MemoryInline::FlatRead32((r13 + -13312));
    ctx->lr = 0x80531D80u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804C2B10u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
    r3 = MemoryInline::FlatRead32((r20 + 56));
    r4 = 0;
    r0 = MemoryInline::FlatRead32((r20 + 60));
    r3 = (r3 & 31);
    MemoryInline::FlatWrite32((r20 + 64), r4);
    r0 = (r0 & 31);
    MemoryInline::FlatWrite32((r20 + 56), r3);
    MemoryInline::FlatWrite32((r20 + 60), r0);
}

loc_80531DA0:
{
    r4 = (r27 + r22);
    r0 = (r25 + r28);
    r7 = (r4 * 20);
    r5 = (r31 + r29);
    r3 = (r26 + r23);
    r4 = (r30 + r0);
    r6 = (r5 + r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & 4080);
    r5 = (r21 * 28);
    r3 = MemoryInline::FlatRead32((r13 + -13312));
    r4 = (r6 + r4);
    r4_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_11 & -4);
    r4 = (r7 + r4);
    r0 = (r5 + r0);
    r4 = (r4 + r0);
    ctx->lr = 0x80531DE0u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804C2B00u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
}

loc_80531DE4:
{
    MemoryInline::FlatWrite32((r20 + 64), r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805323F4;
    }
}

loc_80531DEC:
{
    r0 = MemoryInline::FlatRead32((r20 + 56));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(28));
    r0_mrot_1 = (r0_rot_4 & -268435456);
    r0_mdest_1 = (r0 & 268435455);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(24));
    r0_mrot_2 = (r0_rot_5 & 251658240);
    r0_mdest_2 = (r0 & -251658241);
    r0 = (r0_mdest_2 | r0_mrot_2);
    r4 = MemoryInline::FlatRead32((r20 + 60));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(20));
    r0_mrot_3 = (r0_rot_6 & 15728640);
    r0_mdest_3 = (r0 & -15728641);
    r0 = (r0_mdest_3 | r0_mrot_3);
    r6 = 0;
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(18));
    r0_mrot_4 = (r0_rot_7 & 786432);
    r0_mdest_4 = (r0 & -786433);
    r0 = (r0_mdest_4 | r0_mrot_4);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(15));
    r0_mrot_5 = (r0_rot_8 & 229376);
    r0_mdest_5 = (r0 & -229377);
    r0 = (r0_mdest_5 | r0_mrot_5);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(14));
    r0_mrot_6 = (r0_rot_9 & 16384);
    r0_mdest_6 = (r0 & -16385);
    r0 = (r0_mdest_6 | r0_mrot_6);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(9));
    r0_mrot_7 = (r0_rot_10 & 15872);
    r0_mdest_7 = (r0 & -15873);
    r0 = (r0_mdest_7 | r0_mrot_7);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(8));
    r0_mrot_8 = (r0_rot_11 & 256);
    r0_mdest_8 = (r0 & -257);
    r0 = (r0_mdest_8 | r0_mrot_8);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(7));
    r0_mrot_9 = (r0_rot_12 & 128);
    r0_mdest_9 = (r0 & -129);
    r0 = (r0_mdest_9 | r0_mrot_9);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(6));
    r0_mrot_10 = (r0_rot_13 & 64);
    r0_mdest_10 = (r0 & -65);
    r0 = (r0_mdest_10 | r0_mrot_10);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(5));
    r0_mrot_11 = (r0_rot_14 & 32);
    r0_mdest_11 = (r0 & -33);
    r0 = (r0_mdest_11 | r0_mrot_11);
    r4_mrot_1 = (r0 & 251658240);
    r4_mdest_1 = (r4 & -251658241);
    r4 = (r4_mdest_1 | r4_mrot_1);
    MemoryInline::FlatWrite32((r20 + 56), r0);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_15 & 15);
    r0 = (r0 * 28);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r5 = (r5_rot_1 & 15);
}

loc_80531E38:
{
    MemoryInline::FlatWrite32((r20 + 60), r4);
    r4 = (r3 + r0);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80531FE8;
    }
}

loc_80531E44:
{
}

loc_80531E48:
{
    r3 = (r5 + -8);
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(8))) {
        goto loc_80531F9C;
    }
}

loc_80531E50:
{
    r0 = (r3 + 7);
    r7 = r4;
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_16 & 536870911);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -1256));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1252));
    ctr = r0;
}

loc_80531E6C:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(0))) {
        goto loc_80531F9C;
    }
}

loc_80531E70:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r7, 0, 160u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r7, f1.d);
    r6 = (r6 + 8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r7 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r7 + 8), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r7 + 12), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r7 + 16), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r7 + 20), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r7 + 24), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r7 + 28), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r7 + 32), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r7 + 36), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r7 + 40), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r7 + 44), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r7 + 48), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 52u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 52u, (r7 + 52), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 56u, (r7 + 56), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 60u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 60u, (r7 + 60), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 64u, (r7 + 64), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 68u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, (r7 + 68), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 72u, (r7 + 72), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 76u, (r7 + 76), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 80u, (r7 + 80), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 84u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 84u, (r7 + 84), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 88u, (r7 + 88), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 92u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 92u, (r7 + 92), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 96u, (r7 + 96), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 100u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 100u, (r7 + 100), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 104u, (r7 + 104), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 108u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 108u, (r7 + 108), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 112u, (r7 + 112), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 116u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 116u, (r7 + 116), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 120u, (r7 + 120), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 124u, (r7 + 124), f1.d);
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 24), 0, 16u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r1 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r1 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r1 + 32), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r1 + 36), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 128u, (r7 + 128), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r1 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r1 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r1 + 32), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r1 + 36), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 132u, (r7 + 132), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r1 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r1 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r1 + 32), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r1 + 36), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 136u, (r7 + 136), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r1 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r1 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r1 + 32), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r1 + 36), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 140u, (r7 + 140), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r1 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r1 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r1 + 32), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r1 + 36), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 144u, (r7 + 144), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r1 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r1 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r1 + 32), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r1 + 36), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 148u, (r7 + 148), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r1 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r1 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r1 + 32), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r1 + 36), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 152u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 152u, (r7 + 152), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 156u, (r7 + 156), f0.d);
    }
    r7 = (r7 + 160);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r1 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r1 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r1 + 32), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r1 + 36), f0.d);
    }
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80531E70;
    }
}

loc_80531F9C:
{
    r3 = (r6 * 20);
    r0 = (r5 - r6);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -1256));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1252));
    r3 = (r4 + r3);
    ctr = r0;
}

loc_80531FB8:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r5))) {
        goto loc_80531FE8;
    }
}

loc_80531FBC:
{
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 16), f0.d);
    r3 = (r3 + 20);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80531FBC;
    }
}

loc_80531FE8:
{
    r10 = MemoryInline::FlatRead32((r20 + 56));
    r4 = 0;
    r0 = MemoryInline::FlatRead32((r20 + 56));
    r21 = MemoryInline::FlatRead32((r20 + 60));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(27));
    r7 = (r7_rot_1 & 4);
    r21_mrot_1 = (r0 & 786432);
    r21_mdest_1 = (r21 & -786433);
    r21 = (r21_mdest_1 | r21_mrot_1);
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(26));
    r0 = (r0_rot_19 & 4);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(4));
    r5 = (r5_rot_2 & 15);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(8));
    r6 = (r6_rot_1 & 15);
    r0 = (r7 + r0);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(28));
    r8 = (r8_rot_1 & 4);
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(20));
    r9 = (r9_rot_1 & 4);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(14));
    r7 = (r7_rot_2 & 60);
    r9 = (r9 + r7);
    r11_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(19));
    r11 = (r11_rot_1 & 28);
    r7 = (r6 * 20);
    r8 = (r8 + r0);
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(29));
    r10 = (r10_rot_1 & 4);
    r12 = MemoryInline::FlatRead32((r20 + 64));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(14));
    r3 = (r3_rot_1 & 3);
}

loc_80532038:
{
    MemoryInline::FlatWrite32((r20 + 60), r21);
    r5 = (r5 * 28);
    r0 = (r11 + r10);
    r6 = (r9 + r8);
    r0 = (r12 + r0);
    r5 = (r7 + r5);
    r5 = (r6 + r5);
    r6 = (r5 + r0);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80532200;
    }
}

loc_8053205C:
{
}

loc_80532060:
{
    r5 = (r3 + -8);
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(8))) {
        goto loc_805321B4;
    }
}

loc_80532068:
{
    r0 = (r5 + 7);
    r7 = r6;
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_20 & 536870911);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -1256));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1252));
    ctr = r0;
}

loc_80532084:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(0))) {
        goto loc_805321B4;
    }
}

loc_80532088:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r7, 0, 160u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, r7, f1.d);
    r4 = (r4 + 8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r7 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r7 + 8), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r7 + 12), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r7 + 16), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r7 + 20), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r7 + 24), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r7 + 28), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r7 + 32), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r7 + 36), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r7 + 40), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 44u, (r7 + 44), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 48u, (r7 + 48), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 52u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 52u, (r7 + 52), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 56u, (r7 + 56), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 60u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 60u, (r7 + 60), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 64u, (r7 + 64), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 68u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 68u, (r7 + 68), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 72u, (r7 + 72), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 76u, (r7 + 76), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 80u, (r7 + 80), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 84u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 84u, (r7 + 84), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 88u, (r7 + 88), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 92u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 92u, (r7 + 92), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 96u, (r7 + 96), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 100u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 100u, (r7 + 100), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 104u, (r7 + 104), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 108u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 108u, (r7 + 108), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 112u, (r7 + 112), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 116u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 116u, (r7 + 116), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 120u, (r7 + 120), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 124u, (r7 + 124), f1.d);
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 16u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 0u, (r1 + 8), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 4u, (r1 + 12), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 8u, (r1 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 12u, (r1 + 20), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 128u, (r7 + 128), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 0u, (r1 + 8), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 4u, (r1 + 12), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 8u, (r1 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 12u, (r1 + 20), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 132u, (r7 + 132), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 0u, (r1 + 8), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 4u, (r1 + 12), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 8u, (r1 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 12u, (r1 + 20), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 136u, (r7 + 136), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 0u, (r1 + 8), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 4u, (r1 + 12), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 8u, (r1 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 12u, (r1 + 20), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 140u, (r7 + 140), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 0u, (r1 + 8), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 4u, (r1 + 12), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 8u, (r1 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 12u, (r1 + 20), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 144u, (r7 + 144), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 0u, (r1 + 8), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 4u, (r1 + 12), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 8u, (r1 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 12u, (r1 + 20), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 148u, (r7 + 148), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 0u, (r1 + 8), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 4u, (r1 + 12), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 8u, (r1 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 12u, (r1 + 20), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 152u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 152u, (r7 + 152), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 156u, (r7 + 156), f0.d);
    }
    r7 = (r7 + 160);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 0u, (r1 + 8), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 4u, (r1 + 12), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 8u, (r1 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 12u, (r1 + 20), f0.d);
    }
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80532088;
    }
}

loc_805321B4:
{
    r5 = (r4 * 20);
    r0 = (r3 - r4);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -1256));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1252));
    r5 = (r6 + r5);
    ctr = r0;
}

loc_805321D0:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r3))) {
        goto loc_80532200;
    }
}

loc_805321D4:
{
    MemoryInline::FlatWriteFloat32(r5, f1.d);
    MemoryInline::FlatWriteFloat32((r5 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r5 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r5 + 12), f0.d);
    MemoryInline::FlatWriteFloat32((r5 + 16), f0.d);
    r5 = (r5 + 20);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805321D4;
    }
}

loc_80532200:
{
    r0 = MemoryInline::FlatRead32((r20 + 56));
    r3 = MemoryInline::FlatRead32((r20 + 60));
    r3_mrot_1 = (r0 & 256);
    r3_mdest_1 = (r3 & -257);
    r3 = (r3_mdest_1 | r3_mrot_1);
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0 = (r0_rot_23 & 1);
}

loc_80532210:
{
    MemoryInline::FlatWrite32((r20 + 60), r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80532254;
    }
}

loc_80532218:
{
    r6 = MemoryInline::FlatRead32((r20 + 56));
    r3 = 1;
    r7 = MemoryInline::FlatRead32((r20 + 64));
    r0 = 0;
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r5 = (r5_rot_3 & 15);
    r4_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r4 = (r4_rot_12 & 15);
    r5 = (r5 * 20);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(14));
    r6 = (r6_rot_2 & 60);
    r4 = (r4 * 28);
    r5 = (r6 + r5);
    r4 = (r7 + r4);
    addr_stbux_80532244_loc_0 = (r4 + r5);
    MemoryInline::FlatWrite8(addr_stbux_80532244_loc_0, static_cast<uint8_t>(r3));
    r4 = addr_stbux_80532244_loc_0;
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r0));
}

loc_80532254:
{
    r0 = MemoryInline::FlatRead32((r20 + 56));
    r3 = MemoryInline::FlatRead32((r20 + 60));
    r3_mrot_2 = (r0 & 128);
    r3_mdest_2 = (r3 & -129);
    r3 = (r3_mdest_2 | r3_mrot_2);
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(25));
    r0 = (r0_rot_24 & 1);
}

loc_80532264:
{
    MemoryInline::FlatWrite32((r20 + 60), r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805322A0;
    }
}

loc_8053226C:
{
    r5 = MemoryInline::FlatRead32((r20 + 56));
    r8 = -1;
    r7 = MemoryInline::FlatRead32((r20 + 64));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r3 = (r3_rot_2 & 15);
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r0 = (r0_rot_25 & 15);
    r4 = (r3 * 20);
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(26));
    r6 = (r6_rot_4 & 4);
    r5_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(14));
    r5 = (r5_rot_5 & 60);
    r3 = (r0 * 28);
    r0 = (r6 + r5);
    r0 = (r7 + r0);
    r3 = (r4 + r3);
    r3_addr_1 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_1, r8);
}

loc_805322A0:
{
    r0 = MemoryInline::FlatRead32((r20 + 56));
    r3 = MemoryInline::FlatRead32((r20 + 60));
    r3_mrot_3 = (r0 & 16384);
    r3_mdest_3 = (r3 & -16385);
    r3 = (r3_mdest_3 | r3_mrot_3);
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(18));
    r0 = (r0_rot_27 & 1);
}

loc_805322B0:
{
    MemoryInline::FlatWrite32((r20 + 60), r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8053230C;
    }
}

loc_805322B8:
{
    r9 = MemoryInline::FlatRead32((r20 + 56));
    r5 = 228;
    r10 = MemoryInline::FlatRead32((r20 + 64));
    r4 = 192;
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(8));
    r3 = (r3_rot_4 & 15);
    r0_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(4));
    r0 = (r0_rot_28 & 15);
    r8 = (r3 * 20);
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(27));
    r7 = (r7_rot_3 & 4);
    r6_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(26));
    r6 = (r6_rot_6 & 4);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(14));
    r9 = (r9_rot_2 & 60);
    r6 = (r7 + r6);
    r3 = 213;
    r7 = (r0 * 28);
    r0 = 234;
    r6 = (r9 + r6);
    r7 = (r8 + r7);
    r6 = (r10 + r6);
    addr_stbux_805322FC_loc_0 = (r6 + r7);
    MemoryInline::FlatWrite8(addr_stbux_805322FC_loc_0, static_cast<uint8_t>(r5));
    r6 = addr_stbux_805322FC_loc_0;
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r0));
}

loc_8053230C:
{
    r0 = MemoryInline::FlatRead32((r20 + 56));
    r3 = MemoryInline::FlatRead32((r20 + 60));
    r3_mrot_4 = (r0 & 64);
    r3_mdest_4 = (r3 & -65);
    r3 = (r3_mdest_4 | r3_mrot_4);
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(26));
    r0 = (r0_rot_30 & 1);
}

loc_8053231C:
{
    MemoryInline::FlatWrite32((r20 + 60), r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80532378;
    }
}

loc_80532324:
{
    r6 = MemoryInline::FlatRead32((r20 + 56));
    r3 = 119;
    r11 = MemoryInline::FlatRead32((r20 + 64));
    r0 = 0;
    r5_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r5 = (r5_rot_7 & 15);
    r4_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r4 = (r4_rot_14 & 15);
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(20));
    r10 = (r10_rot_2 & 4);
    r7_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(14));
    r7 = (r7_rot_5 & 60);
    r9_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(27));
    r9 = (r9_rot_4 & 4);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(26));
    r8 = (r8_rot_2 & 4);
    r6 = (r5 * 20);
    r7 = (r10 + r7);
    r8 = (r9 + r8);
    r5 = (r4 * 28);
    r4 = (r8 + r7);
    r4 = (r11 + r4);
    r5 = (r6 + r5);
    addr_stbux_80532368_loc_0 = (r4 + r5);
    MemoryInline::FlatWrite8(addr_stbux_80532368_loc_0, static_cast<uint8_t>(r3));
    r4 = addr_stbux_80532368_loc_0;
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r0));
}

loc_80532378:
{
    r0 = MemoryInline::FlatRead32((r20 + 56));
    r3 = MemoryInline::FlatRead32((r20 + 60));
    r3_mrot_5 = (r0 & 32);
    r3_mdest_5 = (r3 & -33);
    r3 = (r3_mdest_5 | r3_mrot_5);
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r0 = (r0_rot_31 & 1);
}

loc_80532388:
{
    MemoryInline::FlatWrite32((r20 + 60), r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805323F4;
    }
}

loc_80532390:
{
    r7 = MemoryInline::FlatRead32((r20 + 56));
    r5 = 1;
    r11 = MemoryInline::FlatRead32((r20 + 64));
    r4 = 4;
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r3 = (r3_rot_6 & 15);
    r0_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(4));
    r0 = (r0_rot_32 & 15);
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(27));
    r8 = (r8_rot_4 & 4);
    r6_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(26));
    r6 = (r6_rot_8 & 4);
    r6 = (r8 + r6);
    r10_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(28));
    r10 = (r10_rot_4 & 4);
    r9_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(20));
    r9 = (r9_rot_6 & 4);
    r7_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(14));
    r7 = (r7_rot_7 & 60);
    r8 = (r3 * 20);
    r6 = (r10 + r6);
    r9 = (r9 + r7);
    r3 = 5;
    r7 = (r0 * 28);
    r6 = (r9 + r6);
    r0 = 15;
    r6 = (r11 + r6);
    r7 = (r8 + r7);
    addr_stbux_805323E4_loc_0 = (r6 + r7);
    MemoryInline::FlatWrite8(addr_stbux_805323E4_loc_0, static_cast<uint8_t>(r5));
    r6 = addr_stbux_805323E4_loc_0;
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r0));
}

loc_805323F4:
{
    r11 = (r1 + 96);
    // inline leaf 0x804574B8 (13 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    // end of inlined leaf 0x804574B8
    r0 = MemoryInline::FlatRead32((r1 + 100));
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80531CA0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80531CA0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80531CA0 func_80531CA0 preserves=true fpr_mask=0x00000000
