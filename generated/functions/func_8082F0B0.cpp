#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082F0B0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_54 = 0;
    uint32_t r0_rot_55 = 0;
    uint32_t r0_rot_56 = 0;
    uint32_t r0_rot_57 = 0;
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
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r24_rot_0 = 0;
    uint32_t r24_rot_1 = 0;
    uint32_t r24_rot_2 = 0;
    uint32_t r24_rot_3 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_2 = 0;
    uint32_t r27_addr_3 = 0;
    uint32_t r27_addr_4 = 0;
    uint32_t r27_addr_5 = 0;
    uint32_t r27_addr_6 = 0;
    uint32_t r27_addr_7 = 0;
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
    uint32_t r3_rot_2 = 0;
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
    uint32_t r4_rot_21 = 0;
    uint32_t r4_rot_22 = 0;
    uint32_t r4_rot_23 = 0;
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
    uint8_t* guest_range_5 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8082F0B0;

loc_8082F0B0:
{
    MemoryInline::FlatWriteRam32((r1 + -288), r1);
    r1 = (r1 + -288);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 292), r0);
    r11 = (r1 + 256);
    MemoryInline::FlatWriteRamFloat64((r1 + 272), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 256), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r26 = r3;
    r28 = r4;
    r27 = r5;
    r30 = 1;
    r23 = 0;
    r3 = 1;
    ctx->lr = 0x8082F0F0u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r26 + 76));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0 = (r0_rot_0 & 1);
}

loc_8082F0F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8082F19C;
    }
}

loc_8082F0FC:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & 15);
    r7 = MemoryInline::FlatRead32((r26 + 88));
    r0 = (r0 * 20);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(14));
    r5 = (r5_rot_0 & 60);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(9));
    r4 = (r4_rot_0 & 480);
    r3 = 0;
    r6 = (r5 + r4);
    r4 = 0;
    r0 = (r7 + r0);
    r5 = 0;
    r24 = (r6 + r0);
    r6_addr_0 = (r6 + r0);
    r6 = MemoryInline::FlatRead8(r6_addr_0);
    r7 = 0;
    r8 = 0;
    r9 = 2;
    ctx->lr = 0x8082F13Cu;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r6 = MemoryInline::FlatRead8((r24 + 1));
    r3 = 2;
    r4 = 0;
    r5 = 0;
    r7 = 0;
    r8 = 0;
    r9 = 2;
    ctx->lr = 0x8082F15Cu;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead8(r24);
    r30 = 1;
}

loc_8082F168:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8082F17C;
    }
}

loc_8082F16C:
{
    r0 = MemoryInline::FlatRead8((r24 + 1));
}

loc_8082F174:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8082F17C;
    }
}

loc_8082F178:
{
    r30 = 0;
}

loc_8082F17C:
{
}

loc_8082F180:
{
    r23 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8082F194;
    }
}

loc_8082F188:
{
    r0 = MemoryInline::FlatRead8((r24 + 1));
}

loc_8082F190:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8082F1BC;
    }
}

loc_8082F194:
{
    r23 = 1;
    goto loc_8082F1BC;
}

loc_8082F19C:
{
    r3 = 4;
    r4 = 0;
    r5 = 0;
    r6 = 1;
    r7 = 0;
    r8 = 0;
    r9 = 2;
    ctx->lr = 0x8082F1BCu;
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
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8082F1BC:
{
}

loc_8082F1C0:
{
    r29 = 0;
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8082F1D8;
    }
}

loc_8082F1C8:
{
}

loc_8082F1CC:
{
    r29 = 1;
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_8082F1D8;
    }
}

loc_8082F1D4:
{
    r29 = 0;
}

loc_8082F1D8:
{
}

loc_8082F1DC:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_8082F2A8;
    }
}

loc_8082F1E0:
{
    r5 = MemoryInline::FlatRead32((r26 + 76));
    r0 = -1;
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(25));
    r0 = (r0_rot_3 & 1);
}

loc_8082F1F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8082F23C;
    }
}

loc_8082F1F4:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r0 = (r0_rot_4 & 15);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(14));
    r4 = (r4_rot_3 & 60);
    r3 = (r0 * 20);
    r6 = MemoryInline::FlatRead32((r26 + 88));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(9));
    r0 = (r0_rot_5 & 480);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(26));
    r5 = (r5_rot_3 & 4);
    r0 = (r4 + r0);
    r3 = (r5 + r3);
    r0 = (r6 + r0);
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

loc_8082F23C:
{
    r0 = MemoryInline::FlatRead32((r1 + 48));
    r5 = r27;
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    r3 = (r1 + 36);
    r4 = (r1 + 40);
    // inline leaf 0x8082A240 (15 guest instruction(s))
}

loc_inl1_0x8082A240:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_inl1_0x8082A248:
{
    MemoryInline::FlatWriteRam32(r3, r0);
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(255))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8082A250:
{
    r0 = MemoryInline::FlatRead8((r4 + 3));
    r4 = 0x80810000u;
    r4 = (r4 + -32639);
    r0 = (r0 * r5);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (r4 + r0);
    r0 = (static_cast<int32_t>(r0) >> 7);
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_5 & 1);
    r0 = (r0 + r4);
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    goto loc_inl1_cont_8082A240;
}

loc_inl1_return:
{
}

loc_inl1_cont_8082A240:
{
    // end of inlined leaf 0x8082A240
    r7 = MemoryInline::FlatRead8((r1 + 36));
    r4 = (r1 + 32);
    r6 = MemoryInline::FlatRead8((r1 + 37));
    r3 = 4;
    r5 = MemoryInline::FlatRead8((r1 + 38));
    r0 = MemoryInline::FlatRead8((r1 + 39));
    MemoryInline::FlatWriteRam8((r1 + 48), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 49), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 50), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 51), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 48));
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    ctx->lr = 0x8082F288u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8082F28C:
{
    r29 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8082F2A4;
    }
}

loc_8082F294:
{
    r3 = MemoryInline::FlatRead32((r1 + 48));
    r0 = (r3 + 65536);
}

loc_8082F2A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_8082F2A8;
    }
}

loc_8082F2A4:
{
    r29 = 1;
}

loc_8082F2A8:
{
    r31 = 0;
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 92), 0, 10u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r1 + 92), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r1 + 93), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r1 + 94), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r1 + 95), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r1 + 96), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r1 + 97), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r1 + 98), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r1 + 99), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_3, 8u, (r1 + 100), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_3, 9u, (r1 + 101), static_cast<uint8_t>(r31));
    r0 = MemoryInline::FlatRead32((r26 + 80));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r3 = (r3_rot_0 & 15);
    ctx->lr = 0x8082F2E0u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r26 + 80));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r0 = (r0_rot_8 & 15);
}

loc_8082F2E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8082F37C;
    }
}

loc_8082F2EC:
{
    r4 = MemoryInline::FlatRead32((r26 + 76));
    r3 = -1431633920;
    r5 = MemoryInline::FlatRead32((r26 + 88));
    r27 = (r1 + 92);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0 = (r0_rot_9 & 15);
    r4_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(9));
    r4 = (r4_rot_8 & 480);
    r0 = (r0 * 20);
    r25 = (r3 + -21845);
    r28 = 0;
    r24 = 1;
    r0 = (r5 + r0);
    r23 = (r4 + r0);
    goto loc_8082F36C;
}

loc_8082F320:
{
    r0 = MemoryInline::FlatRead8(r23);
    r6 = MemoryInline::FlatRead8((r23 + 2));
}

loc_8082F32C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8082F34C;
    }
}

loc_8082F330:
{
}

loc_8082F334:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(60))) {
        goto loc_8082F34C;
    }
}

loc_8082F338:
{
    r0 = (r6 + -30);
    r31 = 1;
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r25) * static_cast<uint64_t>(r0)) >> 32));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_12 & 2147483647);
    r27_addr_2 = (r27 + r0);
    MemoryInline::FlatWrite8(r27_addr_2, static_cast<uint8_t>(r24));
}

loc_8082F34C:
{
    r4 = MemoryInline::FlatRead8(r23);
    r3 = r28;
    r5 = MemoryInline::FlatRead8((r23 + 1));
    r7 = 0;
    r8 = 125;
    ctx->lr = 0x8082F364u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r23 = (r23 + 4);
    r28 = (r28 + 1);
}

loc_8082F36C:
{
    r0 = MemoryInline::FlatRead32((r26 + 80));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r0 = (r0_rot_11 & 15);
}

loc_8082F378:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r0))) {
        goto loc_8082F320;
    }
}

loc_8082F37C:
{
}

loc_8082F380:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8082F3F4;
    }
}

loc_8082F384:
{
    r0 = MemoryInline::FlatRead32((r26 + 76));
    r27 = (r1 + 92);
    r3 = MemoryInline::FlatRead32((r26 + 88));
    r28 = 0;
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(9));
    r0 = (r0_rot_15 & 480);
    r23 = (r3 + r0);
    goto loc_8082F3E0;
}

loc_8082F3A0:
{
    r3 = (r28 & 255);
    r27_addr_6 = (r27 + r3);
    r0 = MemoryInline::FlatRead8(r27_addr_6);
}

loc_8082F3AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8082F3DC;
    }
}

loc_8082F3B0:
{
    r0 = (r3 * 20);
    r3 = (r1 + 160);
    r4 = (r23 + r0);
    ctx->lr = 0x8082F3C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8082C250u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = (r28 & 255);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_18 & 1020);
    r4 = (r0 - r3);
    r5 = 1;
    r3 = (r1 + 160);
    r4 = (r4 + 30);
    ctx->lr = 0x8082F3DCu;
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
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8082F3DC:
{
    r28 = (r28 + 1);
}

loc_8082F3E0:
{
    r0 = MemoryInline::FlatRead32((r26 + 80));
    r3 = (r28 & 255);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_17 & 15);
}

loc_8082F3F0:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8082F3A0;
    }
}

loc_8082F3F4:
{
    r0 = MemoryInline::FlatRead32((r26 + 80));
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_21 & 15);
}

loc_8082F3FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8082F4CC;
    }
}

loc_8082F400:
{
    r31 = MemoryInline::FlatRead32((r26 + 88));
    r28 = 0;
    r27 = 0;
    goto loc_8082F4BC;
}

loc_8082F410:
{
    guest_range_4 = MemoryInline::ResolveRangeHost(r31, 0, 32u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_4, 0u, r31);
    r3 = (r1 + 128);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r31 + 4));
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 128), 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 4u, (r1 + 132), r0);
        MemoryInline::WriteResolved32(guest_range_5, 0u, (r1 + 128), r4);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r31 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r31 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 12u, (r1 + 140), r0);
        MemoryInline::WriteResolved32(guest_range_5, 8u, (r1 + 136), r4);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r31 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r31 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 20u, (r1 + 148), r0);
        MemoryInline::WriteResolved32(guest_range_5, 16u, (r1 + 144), r4);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 24u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r31 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r31 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 28u, (r1 + 156), r0);
        MemoryInline::WriteResolved32(guest_range_5, 24u, (r1 + 152), r4);
    }
    ctx->lr = 0x8082F458u;
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
    InvokeDirectCpu<0x804B8B00u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 + -8);
}

loc_8082F460:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8082F4A8;
    }
}

loc_8082F464:
{
    r3 = (r1 + 128);
    ctx->lr = 0x8082F46Cu;
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
    InvokeDirectCpu<0x804B8A50u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8082F470:
{
    r6 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8082F4A8;
    }
}

loc_8082F478:
{
    r4 = MemoryInline::FlatRead32((r6 + 8));
    r3 = (r1 + 80);
    r5 = MemoryInline::FlatRead32((r6 + 4));
    r6 = MemoryInline::FlatRead16(r6);
    ctx->lr = 0x8082F48Cu;
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
    InvokeDirectCpu<0x804B8E00u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = r28;
    r3 = (r1 + 80);
    ctx->lr = 0x8082F498u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = r28;
    r3 = (r1 + 128);
    ctx->lr = 0x8082F4A4u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = (r28 + 1);
}

loc_8082F4A8:
{
    r4 = r27;
    r3 = (r1 + 128);
    ctx->lr = 0x8082F4B4u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = (r31 + 32);
    r27 = (r27 + 1);
}

loc_8082F4BC:
{
    r0 = MemoryInline::FlatRead32((r26 + 80));
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_23 & 15);
}

loc_8082F4C8:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(r0))) {
        goto loc_8082F410;
    }
}

loc_8082F4CC:
{
    r5 = MemoryInline::FlatRead32((r26 + 36));
    r4 = (r1 + 72);
    r0 = MemoryInline::FlatRead32((r26 + 40));
    r3 = 1;
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    MemoryInline::FlatWriteRam32((r1 + 72), r5);
    ctx->lr = 0x8082F4E8u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = MemoryInline::FlatRead32((r26 + 44));
    r4 = (r1 + 64);
    r0 = MemoryInline::FlatRead32((r26 + 48));
    r3 = 2;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 64), r5);
    ctx->lr = 0x8082F504u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = MemoryInline::FlatRead32((r26 + 52));
    r4 = (r1 + 56);
    r0 = MemoryInline::FlatRead32((r26 + 56));
    r3 = 3;
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    MemoryInline::FlatWriteRam32((r1 + 56), r5);
    ctx->lr = 0x8082F520u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r26 + 60));
    r4 = (r1 + 28);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r3 = 0;
    ctx->lr = 0x8082F534u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r26 + 64));
    r4 = (r1 + 24);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r3 = 1;
    ctx->lr = 0x8082F548u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r26 + 68));
    r4 = (r1 + 20);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 2;
    ctx->lr = 0x8082F55Cu;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r26 + 72));
    r4 = (r1 + 16);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = 3;
    ctx->lr = 0x8082F570u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r8 = MemoryInline::FlatRead32((r26 + 76));
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(18));
    r0 = (r0_rot_25 & 1);
}

loc_8082F578:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8082F5E0;
    }
}

loc_8082F57C:
{
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(8));
    r0 = (r0_rot_26 & 15);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(27));
    r6 = (r6_rot_0 & 4);
    r4 = (r0 * 20);
    r5_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(26));
    r5 = (r5_rot_6 & 4);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(14));
    r3 = (r3_rot_1 & 60);
    r7 = MemoryInline::FlatRead32((r26 + 88));
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(9));
    r0 = (r0_rot_27 & 480);
    r3 = (r3 + r0);
    r0 = (r6 + r5);
    r23 = 0;
    r3 = (r4 + r3);
    r0 = (r7 + r0);
    r27 = (r3 + r0);
}

loc_8082F5B0:
{
    r0 = MemoryInline::FlatRead8(r27);
    r3 = r23;
    r4 = (r0 & 3);
    r5_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r5 = (r5_rot_8 & 3);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r6 = (r6_rot_2 & 3);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r7 = (r7_rot_2 & 3);
    ctx->lr = 0x8082F5CCu;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r23 = (r23 + 1);
    r27 = (r27 + 1);
}

loc_8082F5D8:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(4))) {
        goto loc_8082F5B0;
    }
}

loc_8082F5DC:
{
    goto loc_8082F640;
}

loc_8082F5E0:
{
    r3 = 0;
    r4 = 0;
    r5 = 1;
    r6 = 2;
    r7 = 3;
    ctx->lr = 0x8082F5F8u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 1;
    r4 = 0;
    r5 = 0;
    r6 = 0;
    r7 = 3;
    ctx->lr = 0x8082F610u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 2;
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 3;
    ctx->lr = 0x8082F628u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 3;
    r4 = 2;
    r5 = 2;
    r6 = 2;
    r7 = 3;
    ctx->lr = 0x8082F640u;
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
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8082F640:
{
    r0 = MemoryInline::FlatRead32((r26 + 80));
    r27 = 0;
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r27));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(23));
    r3 = (r3_rot_3 & 31);
}

loc_8082F650:
{
    MemoryInline::FlatWriteRam8((r1 + 45), static_cast<uint8_t>(r27));
    MemoryInline::FlatWriteRam8((r1 + 46), static_cast<uint8_t>(r27));
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8082F824;
    }
}

loc_8082F65C:
{
    ctx->lr = 0x8082F660u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r9 = MemoryInline::FlatRead32((r26 + 76));
    r29 = (r1 + 44);
    r10 = MemoryInline::FlatRead32((r26 + 88));
    r28 = 0;
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(14));
    r3 = (r3_rot_4 & 3);
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(8));
    r0 = (r0_rot_29 & 15);
    r0 = (r3 + r0);
    r5_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(26));
    r5 = (r5_rot_10 & 4);
    r8 = (r0 * 20);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(27));
    r3 = (r3_rot_5 & 4);
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(20));
    r0 = (r0_rot_30 & 4);
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(9));
    r7 = (r7_rot_4 & 480);
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(14));
    r6 = (r6_rot_5 & 60);
    r0 = (r3 + r0);
    r4_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(28));
    r4 = (r4_rot_10 & 4);
    r5 = (r8 + r5);
    r0 = (r4 + r0);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(29));
    r3 = (r3_rot_6 & 4);
    r6 = (r7 + r6);
    r4_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(19));
    r4 = (r4_rot_11 & 28);
    r3 = (r3 + r0);
    r31 = 1;
    r0 = (r6 + r5);
    r3 = (r4 + r3);
    r0 = (r10 + r0);
    r25 = (r3 + r0);
    goto loc_8082F80C;
}

loc_8082F6CC:
{
    r0 = MemoryInline::FlatRead8((r25 + 3));
    r3 = r28;
    r5 = MemoryInline::FlatRead8((r25 + 2));
    r4 = MemoryInline::FlatRead8(r25);
    r5_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r5_mrot_2 = (r5_rot_12 & 256);
    r5_mdest_2 = (r5 & -257);
    r5 = (r5_mdest_2 | r5_mrot_2);
    r6 = MemoryInline::FlatRead8((r25 + 1));
    ctx->lr = 0x8082F6E8u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r25 + 3));
    r3 = r28;
    r4_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r4 = (r4_rot_13 & 3);
    r5_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r5 = (r5_rot_13 & 3);
    ctx->lr = 0x8082F6FCu;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r25 + 5));
    r3 = r28;
    r5 = MemoryInline::FlatRead8((r25 + 4));
    r6 = (r0 & 15);
    r7_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r7 = (r7_rot_6 & 15);
    r4 = (r5 & 15);
    r5_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(28));
    r5 = (r5_rot_14 & 15);
    ctx->lr = 0x8082F71Cu;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r6 = MemoryInline::FlatRead8((r25 + 6));
    r3 = r28;
    r0 = MemoryInline::FlatRead8((r25 + 7));
    r4 = (r6 & 15);
    r5_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(28));
    r5 = (r5_rot_15 & 3);
    r6_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(26));
    r6 = (r6_rot_7 & 3);
    r7 = (r0 & 1);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r8 = (r8_rot_2 & 3);
    ctx->lr = 0x8082F740u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r25 + 7));
    r3 = r28;
    r4_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r4 = (r4_rot_14 & 31);
    ctx->lr = 0x8082F750u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r25 + 9));
    r3 = r28;
    r5 = MemoryInline::FlatRead8((r25 + 8));
    r6 = (r0 & 15);
    r7_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r7 = (r7_rot_7 & 15);
    r4 = (r5 & 15);
    r5_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(28));
    r5 = (r5_rot_16 & 15);
    ctx->lr = 0x8082F770u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r6 = MemoryInline::FlatRead8((r25 + 10));
    r3 = r28;
    r0 = MemoryInline::FlatRead8((r25 + 11));
    r4 = (r6 & 15);
    r5_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(28));
    r5 = (r5_rot_17 & 3);
    r6_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(26));
    r6 = (r6_rot_8 & 3);
    r7 = (r0 & 1);
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r8 = (r8_rot_3 & 3);
    ctx->lr = 0x8082F794u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r25 + 11));
    r3 = r28;
    r4_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r4 = (r4_rot_15 & 31);
    ctx->lr = 0x8082F7A4u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r10 = MemoryInline::FlatRead8((r25 + 15));
    r3 = r28;
    r6 = MemoryInline::FlatRead8((r25 + 13));
    r9 = MemoryInline::FlatRead8((r25 + 14));
    r4_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(29));
    r4 = (r4_rot_16 & 1);
    r24_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r24 = (r24_rot_2 & 15);
    r0_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(28));
    r0 = (r0_rot_33 & 3);
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
    ctx->lr = 0x8082F7E8u;
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
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8082F7EC:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(1))) {
        goto loc_8082F804;
    }
}

loc_8082F7F0:
{
}

loc_8082F7F4:
{
    if ((static_cast<int32_t>(r24) > static_cast<int32_t>(3))) {
        goto loc_8082F804;
    }
}

loc_8082F7F8:
{
    r3 = (r29 + r24);
    r27 = 1;
    MemoryInline::FlatWrite8((r3 + -1), static_cast<uint8_t>(r31));
}

loc_8082F804:
{
    r25 = (r25 + 16);
    r28 = (r28 + 1);
}

loc_8082F80C:
{
    r0 = MemoryInline::FlatRead32((r26 + 80));
    r0_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(23));
    r0 = (r0_rot_32 & 31);
}

loc_8082F818:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r0))) {
        goto loc_8082F6CC;
    }
}

loc_8082F81C:
{
    r29 = 1;
    goto loc_8082FBF0;
}

loc_8082F824:
{
    r0_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_34 & 15);
}

loc_8082F828:
{
    r28 = 0;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8082F880;
    }
}

loc_8082F830:
{
    r3 = 0;
    r4 = 255;
    r5 = 255;
    r6 = 4;
    ctx->lr = 0x8082F844u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    r4 = 15;
    r5 = 4;
    r6 = 10;
    r7 = 15;
    ctx->lr = 0x8082F85Cu;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    r4 = 7;
    r5 = 2;
    r6 = 5;
    r7 = 7;
    ctx->lr = 0x8082F874u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r29 = 1;
    r28 = 1;
    goto loc_8082FB78;
}

loc_8082F880:
{
}

loc_8082F884:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8082F8D4;
    }
}

loc_8082F888:
{
    r3 = 0;
    r4 = 0;
    r5 = 0;
    r6 = 255;
    ctx->lr = 0x8082F89Cu;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    r4 = 2;
    r5 = 4;
    r6 = 8;
    r7 = 15;
    ctx->lr = 0x8082F8B4u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    r4 = 1;
    r5 = 2;
    r6 = 4;
    r7 = 7;
    ctx->lr = 0x8082F8CCu;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = 1;
    goto loc_8082FB24;
}

loc_8082F8D4:
{
}

loc_8082F8D8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8082F98C;
    }
}

loc_8082F8DC:
{
    r3 = 0;
    r4 = 0;
    r5 = 0;
    r6 = 255;
    ctx->lr = 0x8082F8F0u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    r4 = 15;
    r5 = 15;
    r6 = 15;
    r7 = 8;
    ctx->lr = 0x8082F908u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    r4 = 7;
    r5 = 7;
    r6 = 7;
    r7 = 4;
    ctx->lr = 0x8082F920u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 1;
    r4 = 1;
    r5 = 1;
    r6 = 255;
    ctx->lr = 0x8082F934u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 1;
    r4 = 8;
    r5 = 0;
    r6 = 14;
    r7 = 15;
    ctx->lr = 0x8082F94Cu;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 1;
    r4 = 4;
    r5 = 0;
    r6 = 6;
    r7 = 7;
    ctx->lr = 0x8082F964u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x80840000u;
    r3 = 1;
    r4 = MemoryInline::FlatRead32((r4 + 25848));
    ctx->lr = 0x8082F974u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x80840000u;
    r3 = 1;
    r4 = MemoryInline::FlatRead32((r4 + 25880));
    ctx->lr = 0x8082F984u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = 2;
    goto loc_8082FA40;
}

loc_8082F98C:
{
    r24 = 0x80840000u;
    r25 = 0x80840000u;
    r24 = (r24 + 25848);
    r23 = 0;
    r25 = (r25 + 25880);
    goto loc_8082FA30;
}

loc_8082F9A4:
{
    r22 = (r28 & 255);
    r4 = r23;
    r3 = r22;
    r5 = r23;
    r6 = 255;
    ctx->lr = 0x8082F9BCu;
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
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8082F9C0:
{
    r7 = 0;
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(0))) {
        goto loc_8082F9CC;
    }
}

loc_8082F9C8:
{
    r7 = 15;
}

loc_8082F9CC:
{
}

loc_8082F9D0:
{
    r31 = 0;
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(0))) {
        goto loc_8082F9DC;
    }
}

loc_8082F9D8:
{
    r31 = 7;
}

loc_8082F9DC:
{
    r3 = r22;
    r4 = 15;
    r5 = 8;
    r6 = 14;
    ctx->lr = 0x8082F9F0u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r22;
    r7 = r31;
    r4 = 7;
    r5 = 4;
    r6 = 6;
    ctx->lr = 0x8082FA08u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32(r24);
    r3 = r22;
    ctx->lr = 0x8082FA14u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32(r25);
    r3 = r22;
    ctx->lr = 0x8082FA20u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = (r28 + 1);
    r24 = (r24 + 4);
    r25 = (r25 + 4);
    r23 = (r23 + 1);
}

loc_8082FA30:
{
    r0 = MemoryInline::FlatRead32((r26 + 80));
    r0_rot_36 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_36 & 15);
}

loc_8082FA3C:
{
    if ((static_cast<uint32_t>(r23) < static_cast<uint32_t>(r0))) {
        goto loc_8082F9A4;
    }
}

loc_8082FA40:
{
    r3 = 0x80840000u;
    guest_range_1 = MemoryInline::ResolveRangeHost((r26 + 36), 0, 16u, true, false);
    r4 = MemoryInline::ReadResolved16(guest_range_1, 0u, (r26 + 36));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r3 + 18584));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r5 = 0;
}

loc_8082FA54:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_8082FA90;
    }
}

loc_8082FA58:
{
    r4 = (r3 + 18584);
    r3 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r26 + 38));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8082FA68:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_8082FA90;
    }
}

loc_8082FA6C:
{
    r3 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r26 + 40));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8082FA78:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_8082FA90;
    }
}

loc_8082FA7C:
{
    r3 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r26 + 42));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r4 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8082FA88:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_8082FA90;
    }
}

loc_8082FA8C:
{
    r5 = 1;
}

loc_8082FA90:
{
}

loc_8082FA94:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8082FAD8;
    }
}

loc_8082FA98:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r26 + 44));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = 0;
}

loc_8082FAA4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(255))) {
        goto loc_8082FAD0;
    }
}

loc_8082FAA8:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r26 + 46));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8082FAB0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(255))) {
        goto loc_8082FAD0;
    }
}

loc_8082FAB4:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r26 + 48));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8082FABC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(255))) {
        goto loc_8082FAD0;
    }
}

loc_8082FAC0:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r26 + 50));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8082FAC8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(255))) {
        goto loc_8082FAD0;
    }
}

loc_8082FACC:
{
    r3 = 1;
}

loc_8082FAD0:
{
}

loc_8082FAD4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8082FB24;
    }
}

loc_8082FAD8:
{
    r22 = (r28 & 255);
    r4 = 255;
    r3 = r22;
    r5 = 255;
    r6 = 255;
    ctx->lr = 0x8082FAF0u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r22;
    r4 = 2;
    r5 = 4;
    r6 = 0;
    r7 = 15;
    ctx->lr = 0x8082FB08u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r22;
    r4 = 1;
    r5 = 2;
    r6 = 0;
    r7 = 7;
    ctx->lr = 0x8082FB20u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = (r28 + 1);
}

loc_8082FB24:
{
}

loc_8082FB28:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8082FB78;
    }
}

loc_8082FB2C:
{
    r22 = (r28 & 255);
    r4 = 255;
    r3 = r22;
    r5 = 255;
    r6 = 4;
    ctx->lr = 0x8082FB44u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r22;
    r4 = 15;
    r5 = 0;
    r6 = 10;
    r7 = 15;
    ctx->lr = 0x8082FB5Cu;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r22;
    r4 = 7;
    r5 = 0;
    r6 = 5;
    r7 = 7;
    ctx->lr = 0x8082FB74u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = (r28 + 1);
}

loc_8082FB78:
{
    r22 = (r28 & 255);
    r23 = 0;
    goto loc_8082FBDC;
}

loc_8082FB84:
{
    r24 = (r23 & 255);
    r4 = 0;
    r3 = r24;
    r5 = 0;
    r6 = 0;
    r7 = 1;
    r8 = 0;
    ctx->lr = 0x8082FBA4u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r24;
    r4 = 0;
    r5 = 0;
    r6 = 0;
    r7 = 1;
    r8 = 0;
    ctx->lr = 0x8082FBC0u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r24;
    ctx->lr = 0x8082FBC8u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r24;
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x8082FBD8u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r23 = (r23 + 1);
}

loc_8082FBDC:
{
    r0 = (r23 & 255);
}

loc_8082FBE4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r22))) {
        goto loc_8082FB84;
    }
}

loc_8082FBE8:
{
    r3 = r22;
    ctx->lr = 0x8082FBF0u;
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
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8082FBF0:
{
}

loc_8082FBF4:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_8082FCF4;
    }
}

loc_8082FBF8:
{
    r9 = MemoryInline::FlatRead32((r26 + 76));
    r3 = 0x80840000u;
    f30.d = MemoryInline::FlatReadFloat32((r3 + 18604));
    r31 = (r1 + 44);
    r0_rot_41 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(8));
    r0 = (r0_rot_41 & 15);
    r8_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(28));
    r8 = (r8_rot_5 & 4);
    r5 = (r0 * 20);
    r4_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(26));
    r4 = (r4_rot_18 & 4);
    r7_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(20));
    r7 = (r7_rot_9 & 4);
    r11 = MemoryInline::FlatRead32((r26 + 88));
    r6_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(27));
    r6 = (r6_rot_10 & 4);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(14));
    r3 = (r3_rot_8 & 60);
    r0_rot_42 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(9));
    r0 = (r0_rot_42 & 480);
    r10_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(19));
    r10 = (r10_rot_4 & 28);
    r3 = (r3 + r0);
    r9_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(29));
    r9 = (r9_rot_4 & 4);
    r0 = (r10 + r9);
    r6 = (r7 + r6);
    r4 = (r8 + r4);
    r3 = (r5 + r3);
    r4 = (r6 + r4);
    r0 = (r11 + r0);
    r3 = (r4 + r3);
    r27 = 0;
    r24 = (r3 + r0);
    goto loc_8082FCE4;
}

loc_8082FC60:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_8082FC68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8082FCD8;
    }
}

loc_8082FC6C:
{
    f0.d = MemoryInline::FlatReadFloat32((r24 + 8));
    f1.d = PpcFmulsInline(f30.d, f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x808367A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r24 + 8));
    f31.d = f1.d;
    f1.d = PpcFmulsInline(f30.d, f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80836720u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r24 + 12));
    f2.d = (-(f1.d));
    r3 = (r27 + 1);
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
    InvokeDirectCpu<0x8082C370u>(ctx);
}

loc_8082FCD8:
{
    r31 = (r31 + 1);
    r24 = (r24 + 20);
    r27 = (r27 + 1);
}

loc_8082FCE4:
{
    r0 = MemoryInline::FlatRead32((r26 + 80));
    r0_rot_44 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(14));
    r0 = (r0_rot_44 & 3);
}

loc_8082FCF0:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(r0))) {
        goto loc_8082FC60;
    }
}

loc_8082FCF4:
{
    r0 = MemoryInline::FlatRead32((r26 + 80));
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r3 = (r3_rot_10 & 7);
    ctx->lr = 0x8082FD00u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r26 + 80));
    r0_rot_46 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r0 = (r0_rot_46 & 7);
}

loc_8082FD08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8082FD98;
    }
}

loc_8082FD0C:
{
    r9 = MemoryInline::FlatRead32((r26 + 76));
    r27 = 0;
    r10 = MemoryInline::FlatRead32((r26 + 88));
    r0_rot_47 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(8));
    r0 = (r0_rot_47 & 15);
    r8_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(28));
    r8 = (r8_rot_7 & 4);
    r4 = (r0 * 20);
    r6_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(26));
    r6 = (r6_rot_12 & 4);
    r7_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(20));
    r7 = (r7_rot_11 & 4);
    r5_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(27));
    r5 = (r5_rot_19 & 4);
    r3_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(14));
    r3 = (r3_rot_11 & 60);
    r0_rot_48 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(9));
    r0 = (r0_rot_48 & 480);
    r0 = (r3 + r0);
    r5 = (r7 + r5);
    r3 = (r8 + r6);
    r6_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(29));
    r6 = (r6_rot_13 & 4);
    r3 = (r5 + r3);
    r0 = (r4 + r0);
    r3 = (r6 + r3);
    r0 = (r10 + r0);
    r24 = (r3 + r0);
    goto loc_8082FD88;
}

loc_8082FD60:
{
    r4 = MemoryInline::FlatRead8(r24);
    r3 = r27;
    r5 = MemoryInline::FlatRead8((r24 + 1));
    ctx->lr = 0x8082FD70u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead8((r24 + 2));
    r3 = r27;
    r5 = MemoryInline::FlatRead8((r24 + 3));
    ctx->lr = 0x8082FD80u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r24 = (r24 + 4);
    r27 = (r27 + 1);
}

loc_8082FD88:
{
    r0 = MemoryInline::FlatRead32((r26 + 80));
    r0_rot_50 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r0 = (r0_rot_50 & 7);
}

loc_8082FD94:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(r0))) {
        goto loc_8082FD60;
    }
}

loc_8082FD98:
{
    r7 = MemoryInline::FlatRead32((r26 + 76));
    r0_rot_52 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(26));
    r0 = (r0_rot_52 & 1);
}

loc_8082FDA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8082FDFC;
    }
}

loc_8082FDA4:
{
    r5_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(20));
    r5 = (r5_rot_21 & 4);
    r0_rot_53 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(27));
    r0 = (r0_rot_53 & 4);
    r0 = (r5 + r0);
    r4_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(26));
    r4 = (r4_rot_20 & 4);
    r3_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r3 = (r3_rot_13 & 15);
    r6_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(14));
    r6 = (r6_rot_15 & 60);
    r0 = (r4 + r0);
    r5_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(9));
    r5 = (r5_rot_22 & 480);
    r4 = (r3 * 20);
    r7 = MemoryInline::FlatRead32((r26 + 88));
    r3 = (r6 + r5);
    r0 = (r7 + r0);
    r3 = (r4 + r3);
    r6 = (r3 + r0);
    r3_addr_4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_4);
    r4 = MemoryInline::FlatRead8((r6 + 2));
    r5 = MemoryInline::FlatRead8((r6 + 1));
    r3 = (r0 & 15);
    r7 = MemoryInline::FlatRead8((r6 + 3));
    r6_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r6 = (r6_rot_16 & 15);
    ctx->lr = 0x8082FDF8u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8082FE14;
}

loc_8082FDFC:
{
    r3 = 7;
    r4 = 0;
    r5 = 0;
    r6 = 7;
    r7 = 0;
    ctx->lr = 0x8082FE14u;
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
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8082FE14:
{
    r3 = MemoryInline::FlatRead32((r26 + 76));
    r0_rot_55 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r0 = (r0_rot_55 & 1);
}

loc_8082FE1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8082FE78;
    }
}

loc_8082FE20:
{
    r4_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r4 = (r4_rot_22 & 15);
    r8_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(28));
    r8 = (r8_rot_9 & 4);
    r0_rot_56 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(26));
    r0 = (r0_rot_56 & 4);
    r7_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(20));
    r7 = (r7_rot_13 & 4);
    r6_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r6 = (r6_rot_18 & 4);
    r5_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(14));
    r5 = (r5_rot_24 & 60);
    r3_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(9));
    r3 = (r3_rot_15 & 480);
    r0 = (r8 + r0);
    r6 = (r7 + r6);
    r7 = MemoryInline::FlatRead32((r26 + 88));
    r0 = (r6 + r0);
    r3 = (r5 + r3);
    r4 = (r4 * 20);
    r0 = (r7 + r0);
    r3 = (r4 + r3);
    r6 = (r3 + r0);
    r3_addr_6 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_6);
    r4 = MemoryInline::FlatRead8((r6 + 1));
    r5 = MemoryInline::FlatRead8((r6 + 2));
    r6 = MemoryInline::FlatRead8((r6 + 3));
    ctx->lr = 0x8082FE74u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8082FE8C;
}

loc_8082FE78:
{
    r3 = 1;
    r4 = 4;
    r5 = 5;
    r6 = 15;
    ctx->lr = 0x8082FE8Cu;
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
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8082FE8C:
{
}

loc_8082FE90:
{
    r3 = 0;
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8082FEA4;
    }
}

loc_8082FE98:
{
}

loc_8082FE9C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8082FEA4;
    }
}

loc_8082FEA0:
{
    r3 = 1;
}

loc_8082FEA4:
{
    r11 = (r1 + 256);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 272));
    // psq_load w=0 quant=0 (using PPC_PsqL)
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

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8082F0B0 func_8082F0B0 preserves=true fpr_mask=0x00000000
