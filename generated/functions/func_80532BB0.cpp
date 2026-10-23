#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80530F08(CpuContext* ctx);
extern "C" uint64_t func_80530F08_ra18_18_18_0(CpuContext*, uint32_t, uint32_t, double, double);

extern "C" void func_80532BB0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_34 = 0;
    uint32_t r0_rot_35 = 0;
    uint32_t r0_rot_36 = 0;
    uint32_t r0_rot_37 = 0;
    uint32_t r0_rot_38 = 0;
    uint32_t r0_rot_39 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_40 = 0;
    uint32_t r0_rot_41 = 0;
    uint32_t r0_rot_42 = 0;
    uint32_t r0_rot_43 = 0;
    uint32_t r0_rot_44 = 0;
    uint32_t r0_rot_45 = 0;
    uint32_t r0_rot_46 = 0;
    uint32_t r0_rot_47 = 0;
    uint32_t r0_rot_48 = 0;
    uint32_t r0_rot_49 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_50 = 0;
    uint32_t r0_rot_51 = 0;
    uint32_t r0_rot_52 = 0;
    uint32_t r0_rot_53 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r24_rot_0 = 0;
    uint32_t r24_rot_1 = 0;
    uint32_t r24_rot_2 = 0;
    uint32_t r24_rot_3 = 0;
    uint32_t r26_addr_0 = 0;
    uint32_t r26_addr_1 = 0;
    uint32_t r26_addr_2 = 0;
    uint32_t r26_addr_3 = 0;
    uint32_t r26_addr_4 = 0;
    uint32_t r26_addr_5 = 0;
    uint32_t r26_addr_6 = 0;
    uint32_t r26_addr_7 = 0;
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
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_14 = 0;
    uint32_t r3_rot_15 = 0;
    uint32_t r3_rot_16 = 0;
    uint32_t r3_rot_17 = 0;
    uint32_t r3_rot_18 = 0;
    uint32_t r3_rot_19 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_20 = 0;
    uint32_t r3_rot_21 = 0;
    uint32_t r3_rot_22 = 0;
    uint32_t r3_rot_23 = 0;
    uint32_t r3_rot_24 = 0;
    uint32_t r3_rot_25 = 0;
    uint32_t r3_rot_26 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_10 = 0;
    uint32_t r4_rot_11 = 0;
    uint32_t r4_rot_12 = 0;
    uint32_t r4_rot_13 = 0;
    uint32_t r4_rot_14 = 0;
    uint32_t r4_rot_15 = 0;
    uint32_t r4_rot_16 = 0;
    uint32_t r4_rot_17 = 0;
    uint32_t r4_rot_18 = 0;
    uint32_t r4_rot_19 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_20 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mdest_2 = 0;
    uint32_t r5_mdest_3 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_mrot_2 = 0;
    uint32_t r5_mrot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_10 = 0;
    uint32_t r5_rot_11 = 0;
    uint32_t r5_rot_12 = 0;
    uint32_t r5_rot_13 = 0;
    uint32_t r5_rot_14 = 0;
    uint32_t r5_rot_15 = 0;
    uint32_t r5_rot_16 = 0;
    uint32_t r5_rot_17 = 0;
    uint32_t r5_rot_18 = 0;
    uint32_t r5_rot_19 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_20 = 0;
    uint32_t r5_rot_21 = 0;
    uint32_t r5_rot_22 = 0;
    uint32_t r5_rot_23 = 0;
    uint32_t r5_rot_24 = 0;
    uint32_t r5_rot_25 = 0;
    uint32_t r5_rot_26 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r5_rot_9 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_10 = 0;
    uint32_t r6_rot_11 = 0;
    uint32_t r6_rot_12 = 0;
    uint32_t r6_rot_13 = 0;
    uint32_t r6_rot_14 = 0;
    uint32_t r6_rot_15 = 0;
    uint32_t r6_rot_16 = 0;
    uint32_t r6_rot_17 = 0;
    uint32_t r6_rot_18 = 0;
    uint32_t r6_rot_19 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_20 = 0;
    uint32_t r6_rot_21 = 0;
    uint32_t r6_rot_22 = 0;
    uint32_t r6_rot_23 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r6_rot_8 = 0;
    uint32_t r6_rot_9 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_10 = 0;
    uint32_t r7_rot_11 = 0;
    uint32_t r7_rot_12 = 0;
    uint32_t r7_rot_13 = 0;
    uint32_t r7_rot_14 = 0;
    uint32_t r7_rot_15 = 0;
    uint32_t r7_rot_16 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r7_rot_8 = 0;
    uint32_t r7_rot_9 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_10 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
    uint32_t r8_rot_8 = 0;
    uint32_t r8_rot_9 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80532BB0;

loc_80532BB0:
{
    MemoryInline::FlatWriteRam32((r1 + -288), r1);
    r1 = (r1 + -288);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 292), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 272), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 256), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 256);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r27 = r3;
    r31 = r4;
    r28 = r5;
    r30 = 1;
    r23 = 0;
    r3 = 1;
    ctx->lr = 0x80532BF0u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B8500u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r27 + 56));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r0 = (r0_rot_0 & 1);
}

loc_80532BF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80532CA0;
    }
}

loc_80532BFC:
{
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r3 = (r3_rot_0 & 15);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & 15);
    r5 = (r3 * 20);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(14));
    r6 = (r6_rot_0 & 60);
    r7 = MemoryInline::FlatRead32((r27 + 64));
    r3 = 0;
    r4 = 0;
    r0 = (r0 * 28);
    r6 = (r6 + r5);
    r5 = 0;
    r0 = (r7 + r0);
    r7 = 0;
    r24 = (r6 + r0);
    r6_addr_0 = (r6 + r0);
    r6 = MemoryInline::FlatRead8(r6_addr_0);
    r8 = 0;
    r9 = 2;
    ctx->lr = 0x80532C40u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B8530u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r6 = MemoryInline::FlatRead8((r24 + 1));
    r3 = 2;
    r4 = 0;
    r5 = 0;
    r7 = 0;
    r8 = 0;
    r9 = 2;
    ctx->lr = 0x80532C60u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B8530u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead8(r24);
    r30 = 1;
}

loc_80532C6C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80532C80;
    }
}

loc_80532C70:
{
    r0 = MemoryInline::FlatRead8((r24 + 1));
}

loc_80532C78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80532C80;
    }
}

loc_80532C7C:
{
    r30 = 0;
}

loc_80532C80:
{
}

loc_80532C84:
{
    r23 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80532C98;
    }
}

loc_80532C8C:
{
    r0 = MemoryInline::FlatRead8((r24 + 1));
}

loc_80532C94:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80532CC0;
    }
}

loc_80532C98:
{
    r23 = 1;
    goto loc_80532CC0;
}

loc_80532CA0:
{
    r3 = 4;
    r4 = 0;
    r5 = 0;
    r6 = 1;
    r7 = 0;
    r8 = 0;
    r9 = 2;
    ctx->lr = 0x80532CC0u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B8530u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80532CC0:
{
}

loc_80532CC4:
{
    r29 = 0;
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80532CDC;
    }
}

loc_80532CCC:
{
}

loc_80532CD0:
{
    r29 = 1;
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_80532CDC;
    }
}

loc_80532CD8:
{
    r29 = 0;
}

loc_80532CDC:
{
}

loc_80532CE0:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_80532DB8;
    }
}

loc_80532CE4:
{
    r5 = MemoryInline::FlatRead32((r27 + 56));
    r0 = -1;
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(25));
    r0 = (r0_rot_3 & 1);
}

loc_80532CF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80532D44;
    }
}

loc_80532CF8:
{
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r3 = (r3_rot_3 & 15);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & 15);
    r4 = (r3 * 20);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(26));
    r6 = (r6_rot_3 & 4);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(14));
    r5 = (r5_rot_1 & 60);
    r7 = MemoryInline::FlatRead32((r27 + 64));
    r3 = (r0 * 28);
    r0 = (r6 + r5);
    r0 = (r7 + r0);
    r3 = (r4 + r3);
    r6 = (r3 + r0);
    r3_addr_1 = (r3 + r0);
    r5 = MemoryInline::FlatRead8(r3_addr_1);
    r4 = MemoryInline::FlatRead8((r6 + 1));
    r3 = MemoryInline::FlatRead8((r6 + 2));
    r0 = MemoryInline::FlatRead8((r6 + 3));
    MemoryInline::FlatWriteRam8((r1 + 48), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 49), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 50), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 51), static_cast<uint8_t>(r0));
}

loc_80532D44:
{
    r0 = MemoryInline::FlatRead32((r1 + 48));
    r5 = r28;
    r3 = (r1 + 36);
    r4 = (r1 + 40);
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    // inline leaf 0x80535E18 (21 guest instruction(s))
}

loc_inl1_0x80535E18:
{
    r8 = MemoryInline::FlatRead8(r4);
}

loc_inl1_0x80535E20:
{
    r7 = MemoryInline::FlatRead8((r4 + 1));
    r6 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(255))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80535E40:
{
    r0 = MemoryInline::FlatRead8((r4 + 3));
    r4 = 0x80810000u;
    r4 = (r4 + -32639);
    r0 = (r0 * r5);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (r4 + r0);
    r0 = (static_cast<int32_t>(r0) >> 7);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r0 = (r0 + r4);
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    goto loc_inl1_cont_80535E18;
}

loc_inl1_return:
{
}

loc_inl1_cont_80535E18:
{
    // end of inlined leaf 0x80535E18
    r7 = MemoryInline::FlatRead8((r1 + 36));
    r4 = (r1 + 32);
    r6 = MemoryInline::FlatRead8((r1 + 37));
    r3 = 4;
    r5 = MemoryInline::FlatRead8((r1 + 38));
    r0 = MemoryInline::FlatRead8((r1 + 39));
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 32), 0, 20u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 16u, (r1 + 48), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 17u, (r1 + 49), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 18u, (r1 + 50), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_3, 19u, (r1 + 51), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r1 + 32), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r1 + 33), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r1 + 34), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r1 + 35), static_cast<uint8_t>(r0));
    ctx->lr = 0x80532D98u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B8420u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80532D9C:
{
    r29 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80532DB4;
    }
}

loc_80532DA4:
{
    r3 = MemoryInline::FlatRead32((r1 + 48));
    r0 = (r3 + 65536);
}

loc_80532DB0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_80532DB8;
    }
}

loc_80532DB4:
{
    r29 = 1;
}

loc_80532DB8:
{
    r31 = 0;
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 92), 0, 10u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 0u, (r1 + 92), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_4, 1u, (r1 + 93), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r1 + 94), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_4, 3u, (r1 + 95), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_4, 4u, (r1 + 96), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_4, 5u, (r1 + 97), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_4, 6u, (r1 + 98), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_4, 7u, (r1 + 99), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_4, 8u, (r1 + 100), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_4, 9u, (r1 + 101), static_cast<uint8_t>(r31));
    r0 = MemoryInline::FlatRead32((r27 + 60));
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r3 = (r3_rot_6 & 15);
    ctx->lr = 0x80532DF0u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B6400u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r27 + 60));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r0 = (r0_rot_7 & 15);
}

loc_80532DF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80532E90;
    }
}

loc_80532DFC:
{
    r0 = MemoryInline::FlatRead32((r27 + 56));
    r3 = -1431633920;
    r5 = MemoryInline::FlatRead32((r27 + 64));
    r25 = (r3 + -21845);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r4 = (r4_rot_4 & 15);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_8 & 15);
    r4 = (r4 * 20);
    r26 = (r1 + 92);
    r28 = 0;
    r24 = 1;
    r3 = (r0 * 28);
    r0 = (r5 + r4);
    r23 = (r3 + r0);
    goto loc_80532E80;
}

loc_80532E34:
{
    r0 = MemoryInline::FlatRead8(r23);
    r6 = MemoryInline::FlatRead8((r23 + 2));
}

loc_80532E40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80532E60;
    }
}

loc_80532E44:
{
}

loc_80532E48:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(60))) {
        goto loc_80532E60;
    }
}

loc_80532E4C:
{
    r0 = (r6 + -30);
    r31 = 1;
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r25) * static_cast<uint64_t>(r0)) >> 32));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_11 & 2147483647);
    r26_addr_2 = (r26 + r0);
    MemoryInline::FlatWrite8(r26_addr_2, static_cast<uint8_t>(r24));
}

loc_80532E60:
{
    r4 = MemoryInline::FlatRead8(r23);
    r3 = r28;
    r5 = MemoryInline::FlatRead8((r23 + 1));
    r7 = 0;
    r8 = 125;
    ctx->lr = 0x80532E78u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B61B0u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r23 = (r23 + 4);
    r28 = (r28 + 1);
}

loc_80532E80:
{
    r0 = MemoryInline::FlatRead32((r27 + 60));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r0 = (r0_rot_10 & 15);
}

loc_80532E8C:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r0))) {
        goto loc_80532E34;
    }
}

loc_80532E90:
{
}

loc_80532E94:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80532F0C;
    }
}

loc_80532E98:
{
    r0 = MemoryInline::FlatRead32((r27 + 56));
    r26 = (r1 + 92);
    r3 = MemoryInline::FlatRead32((r27 + 64));
    r28 = 0;
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_14 & 15);
    r0 = (r0 * 28);
    r23 = (r3 + r0);
    goto loc_80532EF8;
}

loc_80532EB8:
{
    r3 = (r28 & 255);
    r26_addr_6 = (r26 + r3);
    r0 = MemoryInline::FlatRead8(r26_addr_6);
}

loc_80532EC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80532EF4;
    }
}

loc_80532EC8:
{
    r0 = (r3 * 20);
    r3 = (r1 + 160);
    r4 = (r23 + r0);
    ctx->lr = 0x80532ED8u;
    if constexpr (KnownRegArgsCpuCall<0x80530F08u>(&func_80530F08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80530F08_65B6 = func_80530F08_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80530F08_65B6);
        r4 = static_cast<uint32_t>(regargs_result_80530F08_65B6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80530F08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r3 = (r28 & 255);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_17 & 1020);
    r4 = (r0 - r3);
    r5 = 1;
    r3 = (r1 + 160);
    r4 = (r4 + 30);
    ctx->lr = 0x80532EF4u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804BACD0u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80532EF4:
{
    r28 = (r28 + 1);
}

loc_80532EF8:
{
    r0 = MemoryInline::FlatRead32((r27 + 60));
    r3 = (r28 & 255);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_16 & 15);
}

loc_80532F08:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_80532EB8;
    }
}

loc_80532F0C:
{
    r0 = MemoryInline::FlatRead32((r27 + 60));
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_20 & 15);
}

loc_80532F14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80532FB0;
    }
}

loc_80532F18:
{
    r24 = MemoryInline::FlatRead32((r27 + 64));
    r23 = 0;
    r25 = 16;
    r26 = 0;
    goto loc_80532FA0;
}

loc_80532F2C:
{
    r3 = r24;
    r4 = (r1 + 128);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80533C50u>(ctx);
    r0 = MemoryInline::FlatRead32((r24 + 24));
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r3 = (r3_rot_8 & 15);
    r0 = (r3 + -8);
}

loc_80532F48:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_80532F8C;
    }
}

loc_80532F4C:
{
}

loc_80532F50:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(10))) {
        goto loc_80532F60;
    }
}

loc_80532F54:
{
    r28 = r25;
    r25 = (r25 + 1);
    goto loc_80532F68;
}

loc_80532F60:
{
    r28 = r23;
    r23 = (r23 + 1);
}

loc_80532F68:
{
    r4 = r28;
    r3 = (r1 + 128);
    ctx->lr = 0x80532F74u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B8A30u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r24;
    r4 = (r1 + 80);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80533D3Cu>(ctx);
    r4 = r28;
    r3 = (r1 + 80);
    ctx->lr = 0x80532F8Cu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B8E30u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80532F8C:
{
    r4 = r26;
    r3 = (r1 + 128);
    ctx->lr = 0x80532F98u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B8DA0u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r24 = (r24 + 28);
    r26 = (r26 + 1);
}

loc_80532FA0:
{
    r0 = MemoryInline::FlatRead32((r27 + 60));
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_22 & 15);
}

loc_80532FAC:
{
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(r0))) {
        goto loc_80532F2C;
    }
}

loc_80532FB0:
{
    r5 = MemoryInline::FlatRead16((r27 + 16));
    r4 = (r1 + 72);
    r0 = MemoryInline::FlatRead16((r27 + 18));
    r3 = 1;
    MemoryInline::FlatWriteRam16((r1 + 72), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam16((r1 + 74), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead16((r27 + 20));
    r0 = MemoryInline::FlatRead16((r27 + 22));
    MemoryInline::FlatWriteRam16((r1 + 76), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam16((r1 + 78), static_cast<uint16_t>(r0));
    ctx->lr = 0x80532FDCu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9C20u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = MemoryInline::FlatRead16((r27 + 24));
    r4 = (r1 + 64);
    r0 = MemoryInline::FlatRead16((r27 + 26));
    r3 = 2;
    MemoryInline::FlatWriteRam16((r1 + 64), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam16((r1 + 66), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead16((r27 + 28));
    r0 = MemoryInline::FlatRead16((r27 + 30));
    MemoryInline::FlatWriteRam16((r1 + 68), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam16((r1 + 70), static_cast<uint16_t>(r0));
    ctx->lr = 0x80533008u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9C20u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = MemoryInline::FlatRead16((r27 + 32));
    r4 = (r1 + 56);
    r0 = MemoryInline::FlatRead16((r27 + 34));
    r3 = 3;
    MemoryInline::FlatWriteRam16((r1 + 56), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam16((r1 + 58), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead16((r27 + 36));
    r0 = MemoryInline::FlatRead16((r27 + 38));
    MemoryInline::FlatWriteRam16((r1 + 60), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam16((r1 + 62), static_cast<uint16_t>(r0));
    ctx->lr = 0x80533034u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9C20u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r27 + 40));
    r4 = (r1 + 28);
    r3 = 0;
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 41));
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 42));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 43));
    MemoryInline::FlatWriteRam8((r1 + 31), static_cast<uint8_t>(r0));
    ctx->lr = 0x80533060u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9C90u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r27 + 44));
    r4 = (r1 + 24);
    r3 = 1;
    MemoryInline::FlatWriteRam8((r1 + 24), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 45));
    MemoryInline::FlatWriteRam8((r1 + 25), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 46));
    MemoryInline::FlatWriteRam8((r1 + 26), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 47));
    MemoryInline::FlatWriteRam8((r1 + 27), static_cast<uint8_t>(r0));
    ctx->lr = 0x8053308Cu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9C90u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r27 + 48));
    r4 = (r1 + 20);
    r3 = 2;
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 49));
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 50));
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 51));
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r0));
    ctx->lr = 0x805330B8u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9C90u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r27 + 52));
    r4 = (r1 + 16);
    r3 = 3;
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 53));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 54));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 55));
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r0));
    ctx->lr = 0x805330E4u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9C90u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r6 = MemoryInline::FlatRead32((r27 + 56));
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(18));
    r0 = (r0_rot_24 & 1);
}

loc_805330EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80533158;
    }
}

loc_805330F0:
{
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r3 = (r3_rot_10 & 15);
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r0 = (r0_rot_25 & 15);
    r4 = (r3 * 20);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(27));
    r7 = (r7_rot_0 & 4);
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(26));
    r5 = (r5_rot_4 & 4);
    r6_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(14));
    r6 = (r6_rot_6 & 60);
    r3 = (r0 * 28);
    r5 = (r7 + r5);
    r7 = MemoryInline::FlatRead32((r27 + 64));
    r23 = 0;
    r0 = (r6 + r5);
    r3 = (r4 + r3);
    r0 = (r7 + r0);
    r28 = (r3 + r0);
}

loc_80533128:
{
    r0 = MemoryInline::FlatRead8(r28);
    r3 = r23;
    r4 = (r0 & 3);
    r5_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r5 = (r5_rot_6 & 3);
    r6_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r6 = (r6_rot_8 & 3);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r7 = (r7_rot_2 & 3);
    ctx->lr = 0x80533144u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9DD0u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r23 = (r23 + 1);
    r28 = (r28 + 1);
}

loc_80533150:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(4))) {
        goto loc_80533128;
    }
}

loc_80533154:
{
    goto loc_805331B8;
}

loc_80533158:
{
    r3 = 0;
    r4 = 0;
    r5 = 1;
    r6 = 2;
    r7 = 3;
    ctx->lr = 0x80533170u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9DD0u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 1;
    r4 = 0;
    r5 = 0;
    r6 = 0;
    r7 = 3;
    ctx->lr = 0x80533188u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9DD0u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 2;
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 3;
    ctx->lr = 0x805331A0u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9DD0u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 3;
    r4 = 2;
    r5 = 2;
    r6 = 2;
    r7 = 3;
    ctx->lr = 0x805331B8u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9DD0u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_805331B8:
{
    r0 = MemoryInline::FlatRead32((r27 + 60));
    r28 = 0;
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r28));
    r3_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(23));
    r3 = (r3_rot_12 & 31);
}

loc_805331C8:
{
    MemoryInline::FlatWriteRam8((r1 + 45), static_cast<uint8_t>(r28));
    MemoryInline::FlatWriteRam8((r1 + 46), static_cast<uint8_t>(r28));
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805333A0;
    }
}

loc_805331D4:
{
    ctx->lr = 0x805331D8u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804BA080u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r7 = MemoryInline::FlatRead32((r27 + 56));
    r26 = (r1 + 44);
    r8 = MemoryInline::FlatRead32((r27 + 64));
    r29 = 0;
    r3_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(14));
    r3 = (r3_rot_13 & 3);
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r0 = (r0_rot_27 & 15);
    r3 = (r3 + r0);
    r5_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(4));
    r5 = (r5_rot_8 & 15);
    r6 = (r3 * 20);
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(14));
    r4 = (r4_rot_6 & 60);
    r0_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(26));
    r0 = (r0_rot_28 & 4);
    r3_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(27));
    r3 = (r3_rot_14 & 4);
    r0 = (r4 + r0);
    r4_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(20));
    r4 = (r4_rot_7 & 4);
    r0 = (r3 + r0);
    r3_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(28));
    r3 = (r3_rot_15 & 4);
    r0 = (r4 + r0);
    r4_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(29));
    r4 = (r4_rot_8 & 4);
    r5 = (r5 * 28);
    r31 = 1;
    r0 = (r3 + r0);
    r3_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(19));
    r3 = (r3_rot_16 & 28);
    r5 = (r6 + r5);
    r0 = (r5 + r0);
    r3 = (r4 + r3);
    r0 = (r8 + r0);
    r25 = (r3 + r0);
    goto loc_80533388;
}

loc_80533248:
{
    r0 = MemoryInline::FlatRead8((r25 + 3));
    r3 = r29;
    r5 = MemoryInline::FlatRead8((r25 + 2));
    r4 = MemoryInline::FlatRead8(r25);
    r5_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r5_mrot_2 = (r5_rot_10 & 256);
    r5_mdest_2 = (r5 & -257);
    r5 = (r5_mdest_2 | r5_mrot_2);
    r6 = MemoryInline::FlatRead8((r25 + 1));
    ctx->lr = 0x80533264u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9F20u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r25 + 3));
    r3 = r29;
    r4_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r4 = (r4_rot_10 & 3);
    r5_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r5 = (r5_rot_11 & 3);
    ctx->lr = 0x80533278u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9D90u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r25 + 5));
    r3 = r29;
    r5 = MemoryInline::FlatRead8((r25 + 4));
    r6 = (r0 & 15);
    r7_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r7 = (r7_rot_6 & 15);
    r4 = (r5 & 15);
    r5_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(28));
    r5 = (r5_rot_12 & 15);
    ctx->lr = 0x80533298u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9A80u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r6 = MemoryInline::FlatRead8((r25 + 6));
    r3 = r29;
    r0 = MemoryInline::FlatRead8((r25 + 7));
    r4 = (r6 & 15);
    r5_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(28));
    r5 = (r5_rot_13 & 3);
    r6_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(26));
    r6 = (r6_rot_11 & 3);
    r7 = (r0 & 1);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r8 = (r8_rot_2 & 3);
    ctx->lr = 0x805332BCu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9B00u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r25 + 7));
    r3 = r29;
    r4_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r4 = (r4_rot_11 & 31);
    ctx->lr = 0x805332CCu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9CF0u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r25 + 9));
    r3 = r29;
    r5 = MemoryInline::FlatRead8((r25 + 8));
    r6 = (r0 & 15);
    r7_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r7 = (r7_rot_7 & 15);
    r4 = (r5 & 15);
    r5_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(28));
    r5 = (r5_rot_14 & 15);
    ctx->lr = 0x805332ECu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9AC0u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r6 = MemoryInline::FlatRead8((r25 + 10));
    r3 = r29;
    r0 = MemoryInline::FlatRead8((r25 + 11));
    r4 = (r6 & 15);
    r5_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(28));
    r5 = (r5_rot_15 & 3);
    r6_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(26));
    r6 = (r6_rot_12 & 3);
    r7 = (r0 & 1);
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r8 = (r8_rot_3 & 3);
    ctx->lr = 0x80533310u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9B60u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r25 + 11));
    r3 = r29;
    r4_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r4 = (r4_rot_12 & 31);
    ctx->lr = 0x80533320u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9D40u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r10 = MemoryInline::FlatRead8((r25 + 15));
    r3 = r29;
    r6 = MemoryInline::FlatRead8((r25 + 13));
    r9 = MemoryInline::FlatRead8((r25 + 14));
    r4_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(29));
    r4 = (r4_rot_13 & 1);
    r24_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r24 = (r24_rot_2 & 15);
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(28));
    r0 = (r0_rot_31 & 3);
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r5 = (r10 & 3);
    r8 = (r9 & 7);
    r7 = r24;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r6 = (r6 & 7);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(29));
    r9 = (r9_rot_2 & 7);
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(30));
    r10 = (r10_rot_2 & 1);
    r4 = MemoryInline::FlatRead8((r25 + 12));
    ctx->lr = 0x80533364u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9580u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80533368:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(1))) {
        goto loc_80533380;
    }
}

loc_8053336C:
{
}

loc_80533370:
{
    if ((static_cast<int32_t>(r24) > static_cast<int32_t>(3))) {
        goto loc_80533380;
    }
}

loc_80533374:
{
    r3 = (r26 + r24);
    r28 = 1;
    MemoryInline::FlatWrite8((r3 + -1), static_cast<uint8_t>(r31));
}

loc_80533380:
{
    r25 = (r25 + 16);
    r29 = (r29 + 1);
}

loc_80533388:
{
    r0 = MemoryInline::FlatRead32((r27 + 60));
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(23));
    r0 = (r0_rot_30 & 31);
}

loc_80533394:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r0))) {
        goto loc_80533248;
    }
}

loc_80533398:
{
    r29 = 1;
    goto loc_80533768;
}

loc_805333A0:
{
    r0_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_32 & 15);
}

loc_805333A4:
{
    r31 = 0;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805333FC;
    }
}

loc_805333AC:
{
    r3 = 0;
    r4 = 255;
    r5 = 255;
    r6 = 4;
    ctx->lr = 0x805333C0u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9F20u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    r4 = 15;
    r5 = 4;
    r6 = 10;
    r7 = 15;
    ctx->lr = 0x805333D8u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9A80u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    r4 = 7;
    r5 = 2;
    r6 = 5;
    r7 = 7;
    ctx->lr = 0x805333F0u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9AC0u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r29 = 1;
    r31 = 1;
    goto loc_805336F0;
}

loc_805333FC:
{
}

loc_80533400:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80533450;
    }
}

loc_80533404:
{
    r3 = 0;
    r4 = 0;
    r5 = 0;
    r6 = 255;
    ctx->lr = 0x80533418u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9F20u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    r4 = 2;
    r5 = 4;
    r6 = 8;
    r7 = 15;
    ctx->lr = 0x80533430u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9A80u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    r4 = 1;
    r5 = 2;
    r6 = 4;
    r7 = 7;
    ctx->lr = 0x80533448u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9AC0u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = 1;
    goto loc_8053369C;
}

loc_80533450:
{
}

loc_80533454:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80533508;
    }
}

loc_80533458:
{
    r3 = 0;
    r4 = 0;
    r5 = 0;
    r6 = 255;
    ctx->lr = 0x8053346Cu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9F20u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    r4 = 15;
    r5 = 15;
    r6 = 15;
    r7 = 8;
    ctx->lr = 0x80533484u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9A80u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    r4 = 7;
    r5 = 7;
    r6 = 7;
    r7 = 4;
    ctx->lr = 0x8053349Cu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9AC0u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 1;
    r4 = 1;
    r5 = 1;
    r6 = 255;
    ctx->lr = 0x805334B0u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9F20u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 1;
    r4 = 8;
    r5 = 0;
    r6 = 14;
    r7 = 15;
    ctx->lr = 0x805334C8u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9A80u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 1;
    r4 = 4;
    r5 = 0;
    r6 = 6;
    r7 = 7;
    ctx->lr = 0x805334E0u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9AC0u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x80650000u;
    r3 = 1;
    r4 = MemoryInline::FlatRead32((r4 + -13040));
    ctx->lr = 0x805334F0u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9CF0u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x80650000u;
    r3 = 1;
    r4 = MemoryInline::FlatRead32((r4 + -13008));
    ctx->lr = 0x80533500u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9D40u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = 2;
    goto loc_805335BC;
}

loc_80533508:
{
    r24 = 0x80650000u;
    r25 = 0x80650000u;
    r24 = (r24 + -13040);
    r23 = 0;
    r25 = (r25 + -13008);
    goto loc_805335AC;
}

loc_80533520:
{
    r22 = (r31 & 255);
    r4 = r23;
    r3 = r22;
    r5 = r23;
    r6 = 255;
    ctx->lr = 0x80533538u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9F20u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8053353C:
{
    r7 = 0;
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(0))) {
        goto loc_80533548;
    }
}

loc_80533544:
{
    r7 = 15;
}

loc_80533548:
{
}

loc_8053354C:
{
    r26 = 0;
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(0))) {
        goto loc_80533558;
    }
}

loc_80533554:
{
    r26 = 7;
}

loc_80533558:
{
    r3 = r22;
    r4 = 15;
    r5 = 8;
    r6 = 14;
    ctx->lr = 0x8053356Cu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9A80u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r22;
    r7 = r26;
    r4 = 7;
    r5 = 4;
    r6 = 6;
    ctx->lr = 0x80533584u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9AC0u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32(r24);
    r3 = r22;
    ctx->lr = 0x80533590u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9CF0u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32(r25);
    r3 = r22;
    ctx->lr = 0x8053359Cu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9D40u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = (r31 + 1);
    r24 = (r24 + 4);
    r25 = (r25 + 4);
    r23 = (r23 + 1);
}

loc_805335AC:
{
    r0 = MemoryInline::FlatRead32((r27 + 60));
    r0_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_34 & 15);
}

loc_805335B8:
{
    if ((static_cast<uint32_t>(r23) < static_cast<uint32_t>(r0))) {
        goto loc_80533520;
    }
}

loc_805335BC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r27 + 16), 0, 16u, true, false);
    r3 = MemoryInline::ReadResolved16(guest_range_1, 0u, (r27 + 16));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r5 = 0;
    r0 = MemoryInline::FlatRead16((r2 + -688));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_805335CC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80533608;
    }
}

loc_805335D0:
{
    r4 = (r2 + -688);
    r3 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r27 + 18));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_805335E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80533608;
    }
}

loc_805335E4:
{
    r3 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r27 + 20));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_805335F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80533608;
    }
}

loc_805335F4:
{
    r3 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r27 + 22));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r4 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80533600:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80533608;
    }
}

loc_80533604:
{
    r5 = 1;
}

loc_80533608:
{
}

loc_8053360C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80533650;
    }
}

loc_80533610:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r27 + 24));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = 0;
}

loc_8053361C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(255))) {
        goto loc_80533648;
    }
}

loc_80533620:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r27 + 26));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80533628:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(255))) {
        goto loc_80533648;
    }
}

loc_8053362C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r27 + 28));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80533634:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(255))) {
        goto loc_80533648;
    }
}

loc_80533638:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r27 + 30));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80533640:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(255))) {
        goto loc_80533648;
    }
}

loc_80533644:
{
    r3 = 1;
}

loc_80533648:
{
}

loc_8053364C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8053369C;
    }
}

loc_80533650:
{
    r22 = (r31 & 255);
    r4 = 255;
    r3 = r22;
    r5 = 255;
    r6 = 255;
    ctx->lr = 0x80533668u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9F20u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r22;
    r4 = 2;
    r5 = 4;
    r6 = 0;
    r7 = 15;
    ctx->lr = 0x80533680u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9A80u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r22;
    r4 = 1;
    r5 = 2;
    r6 = 0;
    r7 = 7;
    ctx->lr = 0x80533698u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9AC0u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = (r31 + 1);
}

loc_8053369C:
{
}

loc_805336A0:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_805336F0;
    }
}

loc_805336A4:
{
    r22 = (r31 & 255);
    r4 = 255;
    r3 = r22;
    r5 = 255;
    r6 = 4;
    ctx->lr = 0x805336BCu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9F20u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r22;
    r4 = 15;
    r5 = 0;
    r6 = 10;
    r7 = 15;
    ctx->lr = 0x805336D4u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9A80u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r22;
    r4 = 7;
    r5 = 0;
    r6 = 5;
    r7 = 7;
    ctx->lr = 0x805336ECu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9AC0u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = (r31 + 1);
}

loc_805336F0:
{
    r22 = (r31 & 255);
    r23 = 0;
    goto loc_80533754;
}

loc_805336FC:
{
    r24 = (r23 & 255);
    r4 = 0;
    r3 = r24;
    r5 = 0;
    r6 = 0;
    r7 = 1;
    r8 = 0;
    ctx->lr = 0x8053371Cu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9B00u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r24;
    r4 = 0;
    r5 = 0;
    r6 = 0;
    r7 = 1;
    r8 = 0;
    ctx->lr = 0x80533738u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9B60u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r24;
    ctx->lr = 0x80533740u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9920u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r24;
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x80533750u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9D90u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r23 = (r23 + 1);
}

loc_80533754:
{
    r0 = (r23 & 255);
}

loc_8053375C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r22))) {
        goto loc_805336FC;
    }
}

loc_80533760:
{
    r3 = r22;
    ctx->lr = 0x80533768u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804BA080u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80533768:
{
}

loc_8053376C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8053386C;
    }
}

loc_80533770:
{
    r8 = MemoryInline::FlatRead32((r27 + 56));
    r31 = (r1 + 44);
    r10 = MemoryInline::FlatRead32((r27 + 64));
    r28 = 0;
    r3_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(8));
    r3 = (r3_rot_18 & 15);
    r0_rot_39 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(4));
    r0 = (r0_rot_39 & 15);
    r5_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(27));
    r5 = (r5_rot_17 & 4);
    r4_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(26));
    r4 = (r4_rot_15 & 4);
    r4 = (r5 + r4);
    r7_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(28));
    r7 = (r7_rot_9 & 4);
    r3 = (r3 * 20);
    r6_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(20));
    r6 = (r6_rot_14 & 4);
    r5_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(14));
    r5 = (r5_rot_18 & 60);
    f30.d = MemoryInline::FlatReadFloat32((r2 + -1260));
    r9_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(19));
    r9 = (r9_rot_4 & 28);
    r0 = (r0 * 28);
    r8_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(29));
    r8 = (r8_rot_5 & 4);
    r5 = (r6 + r5);
    r4 = (r7 + r4);
    r3 = (r3 + r0);
    r0 = (r9 + r8);
    r4 = (r5 + r4);
    r3 = (r4 + r3);
    r0 = (r10 + r0);
    r24 = (r3 + r0);
    goto loc_8053385C;
}

loc_805337D8:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_805337E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80533850;
    }
}

loc_805337E4:
{
    f0.d = MemoryInline::FlatReadFloat32((r24 + 8));
    f1.d = PpcFmulsInline(f30.d, f0.d);
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8050151Cu>(ctx);
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat32((r24 + 8));
    f31.d = f1.d;
    f1.d = PpcFmulsInline(f30.d, f0.d);
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x805014B4u>(ctx);
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat32((r24 + 12));
    f2.d = (-(f1.d));
    r3 = (r28 + 1);
    r4 = (r1 + 104);
    f0.d = PpcFmulsInline(f31.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r24 + 16));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r24);
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r24 + 12));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r24 + 16));
    f0.d = PpcFmulsInline(f31.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r24 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80531010u>(ctx);
}

loc_80533850:
{
    r31 = (r31 + 1);
    r24 = (r24 + 20);
    r28 = (r28 + 1);
}

loc_8053385C:
{
    r0 = MemoryInline::FlatRead32((r27 + 60));
    r0_rot_41 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(14));
    r0 = (r0_rot_41 & 3);
}

loc_80533868:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r0))) {
        goto loc_805337D8;
    }
}

loc_8053386C:
{
    r0 = MemoryInline::FlatRead32((r27 + 60));
    r3_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r3 = (r3_rot_20 & 7);
    ctx->lr = 0x80533878u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9900u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r27 + 60));
    r0_rot_43 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r0 = (r0_rot_43 & 7);
}

loc_80533880:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80533914;
    }
}

loc_80533884:
{
    r8 = MemoryInline::FlatRead32((r27 + 56));
    r28 = 0;
    r9 = MemoryInline::FlatRead32((r27 + 64));
    r3_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(8));
    r3 = (r3_rot_21 & 15);
    r0_rot_44 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(4));
    r0 = (r0_rot_44 & 15);
    r5_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(27));
    r5 = (r5_rot_20 & 4);
    r4_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(26));
    r4 = (r4_rot_17 & 4);
    r4 = (r5 + r4);
    r7_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(28));
    r7 = (r7_rot_11 & 4);
    r3 = (r3 * 20);
    r6_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(20));
    r6 = (r6_rot_16 & 4);
    r5_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(14));
    r5 = (r5_rot_21 & 60);
    r4 = (r7 + r4);
    r0 = (r0 * 28);
    r5 = (r6 + r5);
    r6_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(29));
    r6 = (r6_rot_17 & 4);
    r0 = (r3 + r0);
    r3 = (r5 + r4);
    r3 = (r6 + r3);
    r0 = (r9 + r0);
    r24 = (r3 + r0);
    goto loc_80533904;
}

loc_805338DC:
{
    r4 = MemoryInline::FlatRead8(r24);
    r3 = r28;
    r5 = MemoryInline::FlatRead8((r24 + 1));
    ctx->lr = 0x805338ECu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9830u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead8((r24 + 2));
    r3 = r28;
    r5 = MemoryInline::FlatRead8((r24 + 3));
    ctx->lr = 0x805338FCu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9730u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r24 = (r24 + 4);
    r28 = (r28 + 1);
}

loc_80533904:
{
    r0 = MemoryInline::FlatRead32((r27 + 60));
    r0_rot_46 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r0 = (r0_rot_46 & 7);
}

loc_80533910:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r0))) {
        goto loc_805338DC;
    }
}

loc_80533914:
{
    r4 = MemoryInline::FlatRead32((r27 + 56));
    r0_rot_48 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(26));
    r0 = (r0_rot_48 & 1);
}

loc_8053391C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8053397C;
    }
}

loc_80533920:
{
    r3_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r3 = (r3_rot_23 & 15);
    r0_rot_49 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_49 & 15);
    r8_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(20));
    r8 = (r8_rot_7 & 4);
    r5_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(14));
    r5 = (r5_rot_23 & 60);
    r7_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r7 = (r7_rot_13 & 4);
    r6_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(26));
    r6 = (r6_rot_19 & 4);
    r4 = (r3 * 20);
    r5 = (r8 + r5);
    r6 = (r7 + r6);
    r7 = MemoryInline::FlatRead32((r27 + 64));
    r3 = (r0 * 28);
    r0 = (r6 + r5);
    r0 = (r7 + r0);
    r3 = (r4 + r3);
    r6 = (r3 + r0);
    r3_addr_4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_4);
    r4 = MemoryInline::FlatRead8((r6 + 2));
    r5 = MemoryInline::FlatRead8((r6 + 1));
    r3 = (r0 & 15);
    r7 = MemoryInline::FlatRead8((r6 + 3));
    r6_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r6 = (r6_rot_20 & 15);
    ctx->lr = 0x80533978u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9E50u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80533994;
}

loc_8053397C:
{
    r3 = 7;
    r4 = 0;
    r5 = 0;
    r6 = 7;
    r7 = 0;
    ctx->lr = 0x80533994u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9E50u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80533994:
{
    r6 = MemoryInline::FlatRead32((r27 + 56));
    r0_rot_51 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(27));
    r0 = (r0_rot_51 & 1);
}

loc_8053399C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805339FC;
    }
}

loc_805339A0:
{
    r3_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r3 = (r3_rot_25 & 15);
    r0_rot_52 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r0 = (r0_rot_52 & 15);
    r5_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(27));
    r5 = (r5_rot_25 & 4);
    r4_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(26));
    r4 = (r4_rot_19 & 4);
    r5 = (r5 + r4);
    r8_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(28));
    r8 = (r8_rot_9 & 4);
    r7_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(20));
    r7 = (r7_rot_15 & 4);
    r6_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(14));
    r6 = (r6_rot_22 & 60);
    r4 = (r3 * 20);
    r9 = MemoryInline::FlatRead32((r27 + 64));
    r6 = (r7 + r6);
    r5 = (r8 + r5);
    r3 = (r0 * 28);
    r0 = (r6 + r5);
    r3 = (r4 + r3);
    r0 = (r9 + r0);
    r6 = (r3 + r0);
    r3_addr_6 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_6);
    r4 = MemoryInline::FlatRead8((r6 + 1));
    r5 = MemoryInline::FlatRead8((r6 + 2));
    r6 = MemoryInline::FlatRead8((r6 + 3));
    ctx->lr = 0x805339F8u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804BA550u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80533A10;
}

loc_805339FC:
{
    r3 = 1;
    r4 = 4;
    r5 = 5;
    r6 = 15;
    ctx->lr = 0x80533A10u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x804BA550u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80533A10:
{
}

loc_80533A14:
{
    r3 = 0;
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80533A28;
    }
}

loc_80533A1C:
{
}

loc_80533A20:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80533A28;
    }
}

loc_80533A24:
{
    r3 = 1;
}

loc_80533A28:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 272));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 256);
    f30.d = MemoryInline::FlatReadFloat64((r1 + 256));
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 292));
    ctx->lr = r0;
    r1 = (r1 + 288);
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80532BB0 func_80532BB0 preserves=true fpr_mask=0x00000000
