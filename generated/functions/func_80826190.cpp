#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804EF6B0(CpuContext* ctx);
extern "C" uint64_t func_804EF6B0_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" void func_80826190(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
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
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_80826190;

loc_80826190:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r1 + 100), r0);
    r11 = (r1 + 64);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 80u, (r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r0 = 1127219200;
    r30 = 0x80840000u;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r0);
    r29 = r3;
    r30 = (r30 + 17656);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r0);
    ctx->lr = 0x808261D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80827C00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32((r29 + 20));
    r31 = r3;
}

loc_808261DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_808273C0;
    }
}

loc_808261E0:
{
}

loc_808261E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_808273C0;
    }
}

loc_808261E8:
{
    r4 = MemoryInline::FlatRead32(r29);
}

loc_808261F0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8082645C;
    }
}

loc_808261F4:
{
    r0 = MemoryInline::FlatRead32((r29 + 12));
}

loc_808261FC:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_8082645C;
    }
}

loc_80826200:
{
    r6 = MemoryInline::FlatRead32((r29 + 16));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 184), r0);
    r5 = (r30 + 8);
    r3 = (r3 + 4);
    r4 = 0;
    ctr = r6;
}

loc_80826220:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(0))) {
        goto loc_80826250;
    }
}

loc_80826224:
{
    // nop
}

loc_80826228:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_80826230:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80826244;
    }
}

loc_80826234:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8082623C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80826244;
    }
}

loc_80826240:
{
    goto loc_80826254;
}

loc_80826244:
{
    r5 = (r5 + 8);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80826228;
    }
}

loc_80826250:
{
    r4 = -1;
}

loc_80826254:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    MemoryInline::FlatWrite32((r29 + 24), r4);
    r3 = (r29 + r0);
    r30 = MemoryInline::FlatRead32((r3 + 704));
    r3 = r30;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl1_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl1_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl1_0x8081AA24;
    }
}

loc_inl1_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl1_0x8081AA28;
}

loc_inl1_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl1_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl1_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 20), r0);
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80826284:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80826298;
    }
}

loc_80826288:
{
    r3 = 5;
    r4 = 5;
    ctr = r12;
    ctx->lr = 0x80826298u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
}

loc_80826298:
{
}

loc_8082629C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808262A8;
    }
}

loc_808262A0:
{
    r3 = 5;
    ctx->lr = 0x808262A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    ctr = ctx->ctr;
}

loc_808262A8:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r29 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 160));
}

loc_808262B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80826450;
    }
}

loc_808262BC:
{
    r3 = 11;
    r0 = 2;
    MemoryInline::FlatWrite32((r29 + 20), r3);
    r4 = 0x80840000u;
    r3 = MemoryInline::FlatRead32((r29 + 568));
    r4 = (r4 + 24300);
    MemoryInline::FlatWrite32(r29, r0);
    r5 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x808262F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
    r12 = MemoryInline::FlatRead32(r3);
    r28 = 0x80870000u;
    r30 = r3;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    r28 = (r28 + -32200);
    ctr = r12;
    ctx->lr = 0x80826310u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
    goto loc_8082632C;
}

loc_80826318:
{
}

loc_8082631C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r28))) {
        goto loc_80826328;
    }
}

loc_80826320:
{
    r0 = 1;
    goto loc_80826338;
}

loc_80826328:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8082632C:
{
}

loc_80826330:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80826318;
    }
}

loc_80826334:
{
    r0 = 0;
}

loc_80826338:
{
}

loc_8082633C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80826344;
    }
}

loc_80826340:
{
    goto loc_80826348;
}

loc_80826344:
{
    r30 = 0;
}

loc_80826348:
{
    r5 = MemoryInline::FlatRead32((r29 + 4));
    r0 = (r31 + 1);
    r3 = MemoryInline::FlatRead32((r5 + 36));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808263A0;
    }
}

loc_8082635C:
{
    r3 = MemoryInline::FlatRead32((r5 + 28));
    r0 = (r31 + 2);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r7 = (r7_rot_1 & -4);
    r6 = 0;
    r0 = (r3 * 24);
    r0 = (r29 + r0);
    r3 = (r0 + r7);
    r3 = MemoryInline::FlatRead32((r3 + 188));
    // nop
}

loc_80826380:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 131070);
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_2);
}

loc_8082638C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65311))) {
        goto loc_808263DC;
    }
}

loc_80826390:
{
}

loc_80826394:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(63))) {
        goto loc_808263DC;
    }
}

loc_80826398:
{
    r6 = (r6 + 1);
    goto loc_80826380;
}

loc_808263A0:
{
    r0 = MemoryInline::FlatRead32((r5 + 28));
    r3 = (r31 + 2);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r7 = (r7_rot_2 & -4);
    r6 = 0;
    r3 = (r0 * 24);
    r0 = (r7 + r29);
    r3 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r3 + 188));
}

loc_808263C0:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & 131070);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 2));
}

loc_808263D0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(34))) {
        goto loc_808263DC;
    }
}

loc_808263D4:
{
    r6 = (r6 + 1);
    goto loc_808263C0;
}

loc_808263DC:
{
    r0 = MemoryInline::FlatRead32((r5 + 28));
    r4 = (r6 & 65535);
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r6 = (r0 * 24);
    r0 = (r4 + 1);
    r12 = MemoryInline::FlatRead32((r12 + 112));
    r5 = 0;
    r4 = (r29 + r6);
    r4 = (r4 + r7);
    r6 = (r0 & 65535);
    r4 = MemoryInline::FlatRead32((r4 + 188));
    ctr = r12;
    ctx->lr = 0x80826414u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
    r3 = MemoryInline::FlatRead32((r29 + 568));
    r4 = 0x80840000u;
    r4 = (r4 + 24300);
    r5 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x8082643Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r0 = (r0 & 254);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
    goto loc_808273C0;
}

loc_80826450:
{
    r0 = 15;
    MemoryInline::FlatWrite32((r29 + 20), r0);
    goto loc_808273C0;
}

loc_8082645C:
{
    r0 = MemoryInline::FlatRead32((r29 + 12));
    r0 = (r3 - r0);
}

loc_80826468:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(9))) {
        goto loc_808273C0;
    }
}

loc_8082646C:
{
    r3 = 0x80840000u;
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = (r3 + 24840);
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80826484u:
        goto loc_80826484;
        break;
    case 0x80826518u:
        goto loc_80826518;
        break;
    case 0x80826670u:
        goto loc_80826670;
        break;
    case 0x8082693Cu:
        goto loc_8082693C;
        break;
    case 0x80826C0Cu:
        goto loc_80826C0C;
        break;
    case 0x80826E40u:
        goto loc_80826E40;
        break;
    case 0x80826FCCu:
        goto loc_80826FCC;
        break;
    case 0x80827190u:
        goto loc_80827190;
        break;
    case 0x808272F8u:
        goto loc_808272F8;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_80826484:
{
    r3 = MemoryInline::FlatRead32((r29 + 1096));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80826490:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8082649C;
    }
}

loc_80826494:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 20), r0);
}

loc_8082649C:
{
    r3 = MemoryInline::FlatRead32((r29 + 1060));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_808264A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_808264B4;
    }
}

loc_808264AC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 20), r0);
}

loc_808264B4:
{
    r3 = 0;
    r0 = 4;
    MemoryInline::FlatWrite32((r29 + 184), r3);
    MemoryInline::FlatWrite32((r29 + 24), r0);
    r28 = MemoryInline::FlatRead32((r29 + 1064));
    r3 = r28;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl2_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl2_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl2_0x8081AA24;
    }
}

loc_inl2_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl2_0x8081AA28;
}

loc_inl2_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl2_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl2_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r0 = 14;
    r3 = 0;
    MemoryInline::FlatWrite32((r29 + 20), r0);
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_808264F0:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80826504;
    }
}

loc_808264F4:
{
    r3 = 5;
    r4 = 1;
    ctr = r12;
    ctx->lr = 0x80826504u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
}

loc_80826504:
{
}

loc_80826508:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808273C0;
    }
}

loc_8082650C:
{
    r3 = 1;
    ctx->lr = 0x80826514u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    ctr = ctx->ctr;
    goto loc_808273C0;
}

loc_80826518:
{
}

loc_8082651C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_808265A4;
    }
}

loc_80826520:
{
    r28 = MemoryInline::FlatRead32((r29 + 1064));
    r3 = r28;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl3_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl3_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl3_0x8081AA24;
    }
}

loc_inl3_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl3_0x8081AA28;
}

loc_inl3_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl3_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl3_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r30 = 1;
    MemoryInline::FlatWrite32((r28 + 20), r30);
    r28 = MemoryInline::FlatRead32((r29 + 1092));
    r3 = r28;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl4_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl4_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl4_0x8081AA24;
    }
}

loc_inl4_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl4_0x8081AA28;
}

loc_inl4_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl4_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl4_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    MemoryInline::FlatWrite32((r28 + 20), r30);
    r0 = 2;
    MemoryInline::FlatWrite32((r29 + 24), r0);
    r28 = MemoryInline::FlatRead32((r29 + 1056));
    r3 = r28;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl5_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl5_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl5_0x8081AA24;
    }
}

loc_inl5_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl5_0x8081AA28;
}

loc_inl5_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl5_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl5_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    MemoryInline::FlatWrite32((r28 + 20), r30);
    r3 = 10;
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 20), r3);
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite32(r29, r0);
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_8082657C:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80826590;
    }
}

loc_80826580:
{
    r3 = 5;
    r4 = 8;
    ctr = r12;
    ctx->lr = 0x80826590u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
}

loc_80826590:
{
}

loc_80826594:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808273C0;
    }
}

loc_80826598:
{
    r3 = 8;
    ctx->lr = 0x808265A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    ctr = ctx->ctr;
    goto loc_808273C0;
}

loc_808265A4:
{
}

loc_808265A8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_808273C0;
    }
}

loc_808265AC:
{
    r28 = MemoryInline::FlatRead32((r29 + 1052));
    r3 = r28;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl6_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl6_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl6_0x8081AA24;
    }
}

loc_inl6_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl6_0x8081AA28;
}

loc_inl6_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl6_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl6_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r30 = 1;
    MemoryInline::FlatWrite32((r28 + 20), r30);
    r0 = 9;
    MemoryInline::FlatWrite32((r29 + 24), r0);
    r28 = MemoryInline::FlatRead32((r29 + 1084));
    r3 = r28;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl7_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl7_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl7_0x8081AA24;
    }
}

loc_inl7_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl7_0x8081AA28;
}

loc_inl7_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl7_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl7_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    MemoryInline::FlatWrite32((r28 + 20), r30);
    r3 = 0x80840000u;
    r3 = (r3 + 24224);
    r0 = 10;
    MemoryInline::FlatWrite32((r29 + 20), r0);
    r28 = (r3 + 8);
    r30 = 2;
}

loc_808265F0:
{
    r3 = MemoryInline::FlatRead32((r29 + 568));
    r5 = 1;
    r4 = MemoryInline::FlatRead32(r28);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x80826610u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r30 = (r30 + 1);
}

loc_8082661C:
{
    r28 = (r28 + 4);
    r0 = (r0 & 254);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(7))) {
        goto loc_808265F0;
    }
}

loc_80826630:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r29, r0);
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80826648:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_8082665C;
    }
}

loc_8082664C:
{
    r3 = 5;
    r4 = 5;
    ctr = r12;
    ctx->lr = 0x8082665Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
}

loc_8082665C:
{
}

loc_80826660:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808273C0;
    }
}

loc_80826664:
{
    r3 = 5;
    ctx->lr = 0x8082666Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    ctr = ctx->ctr;
    goto loc_808273C0;
}

loc_80826670:
{
    r3 = MemoryInline::FlatRead32((r29 + 132));
}

loc_80826678:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80826904;
    }
}

loc_8082667C:
{
    r3 = (r3 + -1);
    r0 = 37;
    MemoryInline::FlatWrite32((r29 + 132), r3);
    r3 = (r3 + 21);
    r5 = (r30 + 104);
    r4 = 0;
    ctr = r0;
}

loc_80826698:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_808266A0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_808266B4;
    }
}

loc_808266A4:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_808266AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_808266B4;
    }
}

loc_808266B0:
{
    goto loc_808266E4;
}

loc_808266B4:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r4 = (r4 + 1);
}

loc_808266C0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_808266D4;
    }
}

loc_808266C4:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_808266CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_808266D4;
    }
}

loc_808266D0:
{
    goto loc_808266E4;
}

loc_808266D4:
{
    r5 = (r5 + 16);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80826698;
    }
}

loc_808266E0:
{
    r4 = -1;
}

loc_808266E4:
{
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r4 = 0;
    r3 = (r29 + r0);
    r6 = (r30 + 104);
    r3 = MemoryInline::FlatRead32((r3 + 752));
    r0 = 37;
    r5 = 0;
    MemoryInline::FlatWrite32((r3 + 20), r4);
    r3 = MemoryInline::FlatRead32((r29 + 132));
    r3 = (r3 + 21);
    ctr = r0;
}

loc_80826710:
{
    r0 = MemoryInline::FlatRead32(r6);
}

loc_80826718:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_8082672C;
    }
}

loc_8082671C:
{
    r0 = MemoryInline::FlatRead32((r6 + 4));
}

loc_80826724:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(9))) {
        goto loc_8082672C;
    }
}

loc_80826728:
{
    goto loc_8082675C;
}

loc_8082672C:
{
    r0 = MemoryInline::FlatRead32((r6 + 8));
    r5 = (r5 + 1);
}

loc_80826738:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_8082674C;
    }
}

loc_8082673C:
{
    r0 = MemoryInline::FlatRead32((r6 + 12));
}

loc_80826744:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(9))) {
        goto loc_8082674C;
    }
}

loc_80826748:
{
    goto loc_8082675C;
}

loc_8082674C:
{
    r6 = (r6 + 16);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80826710;
    }
}

loc_80826758:
{
    r5 = -1;
}

loc_8082675C:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3 = (r29 + r0);
    r28 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r28;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl8_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl8_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl8_0x8081AA24;
    }
}

loc_inl8_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl8_0x8081AA28;
}

loc_inl8_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl8_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl8_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r0 = MemoryInline::FlatRead32((r29 + 132));
}

loc_80826780:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80826808;
    }
}

loc_80826784:
{
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80826794:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_808267A8;
    }
}

loc_80826798:
{
    r3 = 5;
    r4 = 12;
    ctr = r12;
    ctx->lr = 0x808267A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
}

loc_808267A8:
{
}

loc_808267AC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808267B8;
    }
}

loc_808267B0:
{
    r3 = 12;
    ctx->lr = 0x808267B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    ctr = ctx->ctr;
}

loc_808267B8:
{
    f31.d = MemoryInline::FlatReadFloat64((r30 + 784));
    r28 = r29;
    f30.d = MemoryInline::FlatReadFloat32((r30 + 780));
    r31 = 0;
}

loc_808267C8:
{
    r0 = MemoryInline::FlatRead32((r29 + 132));
    r3 = MemoryInline::FlatRead32((r28 + 684));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f30.d));
    // inline leaf 0x8081CC30 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    // end of inlined leaf 0x8081CC30
    r3 = MemoryInline::FlatRead32((r28 + 684));
    r4 = 1;
    ctx->lr = 0x808267F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8081CC50u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r31 = (r31 + 1);
    r28 = (r28 + 4);
}

loc_80826800:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(4))) {
        goto loc_808267C8;
    }
}

loc_80826804:
{
    goto loc_80826888;
}

loc_80826808:
{
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80826818:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_8082682C;
    }
}

loc_8082681C:
{
    r3 = 5;
    r4 = 10;
    ctr = r12;
    ctx->lr = 0x8082682Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
}

loc_8082682C:
{
}

loc_80826830:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8082683C;
    }
}

loc_80826834:
{
    r3 = 10;
    ctx->lr = 0x8082683Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    ctr = ctx->ctr;
}

loc_8082683C:
{
    f31.d = MemoryInline::FlatReadFloat64((r30 + 784));
    r28 = r29;
    f30.d = MemoryInline::FlatReadFloat32((r30 + 780));
    r31 = 0;
}

loc_8082684C:
{
    r0 = MemoryInline::FlatRead32((r29 + 132));
    r3 = MemoryInline::FlatRead32((r28 + 684));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f30.d));
    // inline leaf 0x8081CC30 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    // end of inlined leaf 0x8081CC30
    r3 = MemoryInline::FlatRead32((r28 + 684));
    r4 = 1;
    ctx->lr = 0x80826878u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8081CC50u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r31 = (r31 + 1);
    r28 = (r28 + 4);
}

loc_80826884:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(4))) {
        goto loc_8082684C;
    }
}

loc_80826888:
{
    r0 = 37;
    r4 = (r30 + 104);
    r3 = 0;
    ctr = r0;
}

loc_80826898:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_808268A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(11))) {
        goto loc_808268B4;
    }
}

loc_808268A4:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_808268AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_808268B4;
    }
}

loc_808268B0:
{
    goto loc_808268E4;
}

loc_808268B4:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_808268C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(11))) {
        goto loc_808268D4;
    }
}

loc_808268C4:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_808268CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_808268D4;
    }
}

loc_808268D0:
{
    goto loc_808268E4;
}

loc_808268D4:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80826898;
    }
}

loc_808268E0:
{
    r3 = -1;
}

loc_808268E4:
{
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3 = (r29 + r0);
    r28 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r28;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl11_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl11_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl11_0x8081AA24;
    }
}

loc_inl11_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl11_0x8081AA28;
}

loc_inl11_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl11_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl11_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    goto loc_808273C0;
}

loc_80826904:
{
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80826914:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80826928;
    }
}

loc_80826918:
{
    r3 = 5;
    r4 = 13;
    ctr = r12;
    ctx->lr = 0x80826928u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
}

loc_80826928:
{
}

loc_8082692C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808273C0;
    }
}

loc_80826930:
{
    r3 = 13;
    ctx->lr = 0x80826938u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    ctr = ctx->ctr;
    goto loc_808273C0;
}

loc_8082693C:
{
    r3 = MemoryInline::FlatRead32((r29 + 132));
}

loc_80826944:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(10))) {
        goto loc_80826BD4;
    }
}

loc_80826948:
{
    r0 = 37;
    r3 = (r3 + 21);
    r5 = (r30 + 104);
    r4 = 0;
    ctr = r0;
    // nop
}

loc_80826960:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_80826968:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_8082697C;
    }
}

loc_8082696C:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_80826974:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(9))) {
        goto loc_8082697C;
    }
}

loc_80826978:
{
    goto loc_808269AC;
}

loc_8082697C:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r4 = (r4 + 1);
}

loc_80826988:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_8082699C;
    }
}

loc_8082698C:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_80826994:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(9))) {
        goto loc_8082699C;
    }
}

loc_80826998:
{
    goto loc_808269AC;
}

loc_8082699C:
{
    r5 = (r5 + 16);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80826960;
    }
}

loc_808269A8:
{
    r4 = -1;
}

loc_808269AC:
{
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r4 = 0;
    r3 = (r29 + r0);
    r6 = (r30 + 104);
    r3 = MemoryInline::FlatRead32((r3 + 752));
    r0 = 37;
    r5 = 0;
    MemoryInline::FlatWrite32((r3 + 20), r4);
    r3 = MemoryInline::FlatRead32((r29 + 132));
    r3 = (r3 + 21);
    ctr = r0;
}

loc_808269D8:
{
    r0 = MemoryInline::FlatRead32(r6);
}

loc_808269E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_808269F4;
    }
}

loc_808269E4:
{
    r0 = MemoryInline::FlatRead32((r6 + 4));
}

loc_808269EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_808269F4;
    }
}

loc_808269F0:
{
    goto loc_80826A24;
}

loc_808269F4:
{
    r0 = MemoryInline::FlatRead32((r6 + 8));
    r5 = (r5 + 1);
}

loc_80826A00:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80826A14;
    }
}

loc_80826A04:
{
    r0 = MemoryInline::FlatRead32((r6 + 12));
}

loc_80826A0C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_80826A14;
    }
}

loc_80826A10:
{
    goto loc_80826A24;
}

loc_80826A14:
{
    r6 = (r6 + 16);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808269D8;
    }
}

loc_80826A20:
{
    r5 = -1;
}

loc_80826A24:
{
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r3 = (r29 + r0);
    r28 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r28;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl12_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl12_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl12_0x8081AA24;
    }
}

loc_inl12_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl12_0x8081AA28;
}

loc_inl12_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl12_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl12_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r3 = MemoryInline::FlatRead32((r29 + 132));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 132), r0);
}

loc_80826A50:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_80826AD8;
    }
}

loc_80826A54:
{
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80826A64:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80826A78;
    }
}

loc_80826A68:
{
    r3 = 5;
    r4 = 11;
    ctr = r12;
    ctx->lr = 0x80826A78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
}

loc_80826A78:
{
}

loc_80826A7C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80826A88;
    }
}

loc_80826A80:
{
    r3 = 11;
    ctx->lr = 0x80826A88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    ctr = ctx->ctr;
}

loc_80826A88:
{
    f31.d = MemoryInline::FlatReadFloat64((r30 + 784));
    r28 = r29;
    f30.d = MemoryInline::FlatReadFloat32((r30 + 780));
    r31 = 0;
}

loc_80826A98:
{
    r0 = MemoryInline::FlatRead32((r29 + 132));
    r3 = MemoryInline::FlatRead32((r28 + 684));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f30.d));
    // inline leaf 0x8081CC30 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    // end of inlined leaf 0x8081CC30
    r3 = MemoryInline::FlatRead32((r28 + 684));
    r4 = 1;
    ctx->lr = 0x80826AC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8081CC50u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r31 = (r31 + 1);
    r28 = (r28 + 4);
}

loc_80826AD0:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(4))) {
        goto loc_80826A98;
    }
}

loc_80826AD4:
{
    goto loc_80826B58;
}

loc_80826AD8:
{
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80826AE8:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80826AFC;
    }
}

loc_80826AEC:
{
    r3 = 5;
    r4 = 9;
    ctr = r12;
    ctx->lr = 0x80826AFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
}

loc_80826AFC:
{
}

loc_80826B00:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80826B0C;
    }
}

loc_80826B04:
{
    r3 = 9;
    ctx->lr = 0x80826B0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    ctr = ctx->ctr;
}

loc_80826B0C:
{
    f30.d = MemoryInline::FlatReadFloat64((r30 + 784));
    r28 = r29;
    f31.d = MemoryInline::FlatReadFloat32((r30 + 780));
    r31 = 0;
}

loc_80826B1C:
{
    r0 = MemoryInline::FlatRead32((r29 + 132));
    r3 = MemoryInline::FlatRead32((r28 + 684));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f31.d));
    // inline leaf 0x8081CC30 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    // end of inlined leaf 0x8081CC30
    r3 = MemoryInline::FlatRead32((r28 + 684));
    r4 = 1;
    ctx->lr = 0x80826B48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8081CC50u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r31 = (r31 + 1);
    r28 = (r28 + 4);
}

loc_80826B54:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(4))) {
        goto loc_80826B1C;
    }
}

loc_80826B58:
{
    r0 = 37;
    r4 = (r30 + 104);
    r3 = 0;
    ctr = r0;
}

loc_80826B68:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80826B70:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_80826B84;
    }
}

loc_80826B74:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80826B7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_80826B84;
    }
}

loc_80826B80:
{
    goto loc_80826BB4;
}

loc_80826B84:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80826B90:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_80826BA4;
    }
}

loc_80826B94:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80826B9C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_80826BA4;
    }
}

loc_80826BA0:
{
    goto loc_80826BB4;
}

loc_80826BA4:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80826B68;
    }
}

loc_80826BB0:
{
    r3 = -1;
}

loc_80826BB4:
{
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_14 & -4);
    r3 = (r29 + r0);
    r28 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r28;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl15_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl15_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl15_0x8081AA24;
    }
}

loc_inl15_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl15_0x8081AA28;
}

loc_inl15_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl15_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl15_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    goto loc_808273C0;
}

loc_80826BD4:
{
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80826BE4:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80826BF8;
    }
}

loc_80826BE8:
{
    r3 = 5;
    r4 = 13;
    ctr = r12;
    ctx->lr = 0x80826BF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
}

loc_80826BF8:
{
}

loc_80826BFC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808273C0;
    }
}

loc_80826C00:
{
    r3 = 13;
    ctx->lr = 0x80826C08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    ctr = ctx->ctr;
    goto loc_808273C0;
}

loc_80826C0C:
{
    r0 = MemoryInline::FlatRead8((r29 + 140));
}

loc_80826C14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80826D54;
    }
}

loc_80826C18:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 140), static_cast<uint8_t>(r0));
    r3 = 1;
    ctx->lr = 0x80826C28u;
    if constexpr (KnownRegArgsCpuCall<0x804EF6B0u>(&func_804EF6B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804EF6B0_E829 = func_804EF6B0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804EF6B0_E829);
        r4 = static_cast<uint32_t>(regargs_result_804EF6B0_E829 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804EF6B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = 37;
    r4 = (r30 + 104);
    r3 = 0;
    ctr = r0;
}

loc_80826C38:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80826C40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(14))) {
        goto loc_80826C54;
    }
}

loc_80826C44:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80826C4C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_80826C54;
    }
}

loc_80826C50:
{
    goto loc_80826C84;
}

loc_80826C54:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80826C60:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(14))) {
        goto loc_80826C74;
    }
}

loc_80826C64:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80826C6C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_80826C74;
    }
}

loc_80826C70:
{
    goto loc_80826C84;
}

loc_80826C74:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80826C38;
    }
}

loc_80826C80:
{
    r3 = -1;
}

loc_80826C84:
{
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_15 & -4);
    r3 = (r29 + r0);
    r28 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r28;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl16_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl16_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl16_0x8081AA24;
    }
}

loc_inl16_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl16_0x8081AA28;
}

loc_inl16_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl16_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl16_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 37;
    r3 = 1;
    MemoryInline::FlatWrite32((r28 + 20), r3);
    r4 = (r30 + 104);
    r3 = 0;
    ctr = r0;
}

loc_80826CB0:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80826CB8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(16))) {
        goto loc_80826CCC;
    }
}

loc_80826CBC:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80826CC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_80826CCC;
    }
}

loc_80826CC8:
{
    goto loc_80826CFC;
}

loc_80826CCC:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80826CD8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(16))) {
        goto loc_80826CEC;
    }
}

loc_80826CDC:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80826CE4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_80826CEC;
    }
}

loc_80826CE8:
{
    goto loc_80826CFC;
}

loc_80826CEC:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80826CB0;
    }
}

loc_80826CF8:
{
    r3 = -1;
}

loc_80826CFC:
{
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_16 & -4);
    MemoryInline::FlatWrite32((r29 + 24), r3);
    r3 = (r29 + r0);
    r28 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r28;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl17_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl17_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl17_0x8081AA24;
    }
}

loc_inl17_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl17_0x8081AA28;
}

loc_inl17_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl17_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl17_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80826D2C:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80826D40;
    }
}

loc_80826D30:
{
    r3 = 5;
    r4 = 14;
    ctr = r12;
    ctx->lr = 0x80826D40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
}

loc_80826D40:
{
}

loc_80826D44:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80826E08;
    }
}

loc_80826D48:
{
    r3 = 14;
    ctx->lr = 0x80826D50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    ctr = ctx->ctr;
    goto loc_80826E08;
}

loc_80826D54:
{
    r0 = 37;
    r4 = (r30 + 104);
    r3 = 0;
    ctr = r0;
    // nop
}

loc_80826D68:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80826D70:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(16))) {
        goto loc_80826D84;
    }
}

loc_80826D74:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80826D7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(14))) {
        goto loc_80826D84;
    }
}

loc_80826D80:
{
    goto loc_80826DB4;
}

loc_80826D84:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80826D90:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(16))) {
        goto loc_80826DA4;
    }
}

loc_80826D94:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80826D9C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(14))) {
        goto loc_80826DA4;
    }
}

loc_80826DA0:
{
    goto loc_80826DB4;
}

loc_80826DA4:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80826D68;
    }
}

loc_80826DB0:
{
    r3 = -1;
}

loc_80826DB4:
{
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_17 & -4);
    MemoryInline::FlatWrite32((r29 + 24), r3);
    r3 = (r29 + r0);
    r28 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r28;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl18_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl18_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl18_0x8081AA24;
    }
}

loc_inl18_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl18_0x8081AA28;
}

loc_inl18_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl18_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl18_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80826DE4:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80826DF8;
    }
}

loc_80826DE8:
{
    r3 = 5;
    r4 = 13;
    ctr = r12;
    ctx->lr = 0x80826DF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
}

loc_80826DF8:
{
}

loc_80826DFC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80826E08;
    }
}

loc_80826E00:
{
    r3 = 13;
    ctx->lr = 0x80826E08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    ctr = ctx->ctr;
}

loc_80826E08:
{
    f31.d = MemoryInline::FlatReadFloat32((r30 + 736));
    r28 = r29;
    r30 = 0;
}

loc_80826E14:
{
    r3 = MemoryInline::FlatRead32((r28 + 684));
    ctx->lr = 0x80826E1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8081D0F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = (r30 + 1);
    MemoryInline::FlatWriteFloat32((r28 + 528), f31.d);
}

loc_80826E28:
{
    MemoryInline::FlatWriteFloat32((r28 + 544), f31.d);
    r28 = (r28 + 4);
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(4))) {
        goto loc_80826E14;
    }
}

loc_80826E34:
{
    r0 = 9;
    MemoryInline::FlatWrite32((r29 + 20), r0);
    goto loc_808273C0;
}

loc_80826E40:
{
    r0 = MemoryInline::FlatRead8((r29 + 140));
}

loc_80826E48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80826F8C;
    }
}

loc_80826E4C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 140), static_cast<uint8_t>(r0));
    r3 = 0;
    ctx->lr = 0x80826E5Cu;
    if constexpr (KnownRegArgsCpuCall<0x804EF6B0u>(&func_804EF6B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804EF6B0_116AD = func_804EF6B0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804EF6B0_116AD);
        r4 = static_cast<uint32_t>(regargs_result_804EF6B0_116AD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804EF6B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = 37;
    r4 = (r30 + 104);
    r3 = 0;
    ctr = r0;
    // nop
}

loc_80826E70:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80826E78:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(14))) {
        goto loc_80826E8C;
    }
}

loc_80826E7C:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80826E84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_80826E8C;
    }
}

loc_80826E88:
{
    goto loc_80826EBC;
}

loc_80826E8C:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80826E98:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(14))) {
        goto loc_80826EAC;
    }
}

loc_80826E9C:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80826EA4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_80826EAC;
    }
}

loc_80826EA8:
{
    goto loc_80826EBC;
}

loc_80826EAC:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80826E70;
    }
}

loc_80826EB8:
{
    r3 = -1;
}

loc_80826EBC:
{
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_19 & -4);
    r3 = (r29 + r0);
    r28 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r28;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl19_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl19_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl19_0x8081AA24;
    }
}

loc_inl19_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl19_0x8081AA28;
}

loc_inl19_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl19_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl19_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 37;
    r3 = 1;
    MemoryInline::FlatWrite32((r28 + 20), r3);
    r4 = (r30 + 104);
    r3 = 0;
    ctr = r0;
}

loc_80826EE8:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80826EF0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_80826F04;
    }
}

loc_80826EF4:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80826EFC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_80826F04;
    }
}

loc_80826F00:
{
    goto loc_80826F34;
}

loc_80826F04:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80826F10:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_80826F24;
    }
}

loc_80826F14:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80826F1C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_80826F24;
    }
}

loc_80826F20:
{
    goto loc_80826F34;
}

loc_80826F24:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80826EE8;
    }
}

loc_80826F30:
{
    r3 = -1;
}

loc_80826F34:
{
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_20 & -4);
    MemoryInline::FlatWrite32((r29 + 24), r3);
    r3 = (r29 + r0);
    r28 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r28;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl20_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl20_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl20_0x8081AA24;
    }
}

loc_inl20_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl20_0x8081AA28;
}

loc_inl20_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl20_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl20_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80826F64:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80826F78;
    }
}

loc_80826F68:
{
    r3 = 5;
    r4 = 15;
    ctr = r12;
    ctx->lr = 0x80826F78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
}

loc_80826F78:
{
}

loc_80826F7C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80826FC0;
    }
}

loc_80826F80:
{
    r3 = 15;
    ctx->lr = 0x80826F88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    ctr = ctx->ctr;
    goto loc_80826FC0;
}

loc_80826F8C:
{
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80826F9C:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80826FB0;
    }
}

loc_80826FA0:
{
    r3 = 5;
    r4 = 13;
    ctr = r12;
    ctx->lr = 0x80826FB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
}

loc_80826FB0:
{
}

loc_80826FB4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80826FC0;
    }
}

loc_80826FB8:
{
    r3 = 13;
    ctx->lr = 0x80826FC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    ctr = ctx->ctr;
}

loc_80826FC0:
{
    r0 = 9;
    MemoryInline::FlatWrite32((r29 + 20), r0);
    goto loc_808273C0;
}

loc_80826FCC:
{
    r0 = 37;
    r4 = (r30 + 104);
    r3 = 0;
    ctr = r0;
    // nop
}

loc_80826FE0:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80826FE8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(15))) {
        goto loc_80826FFC;
    }
}

loc_80826FEC:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80826FF4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_80826FFC;
    }
}

loc_80826FF8:
{
    goto loc_8082702C;
}

loc_80826FFC:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80827008:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(15))) {
        goto loc_8082701C;
    }
}

loc_8082700C:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80827014:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_8082701C;
    }
}

loc_80827018:
{
    goto loc_8082702C;
}

loc_8082701C:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80826FE0;
    }
}

loc_80827028:
{
    r3 = -1;
}

loc_8082702C:
{
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_22 & -4);
    MemoryInline::FlatWrite32((r29 + 24), r3);
    r3 = (r29 + r0);
    r28 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r28;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl21_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl21_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl21_0x8081AA24;
    }
}

loc_inl21_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl21_0x8081AA28;
}

loc_inl21_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl21_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl21_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r3 = 1;
    MemoryInline::FlatWrite32((r28 + 20), r3);
    r0 = 3;
    f31.d = MemoryInline::FlatReadFloat32((r30 + 736));
    MemoryInline::FlatWrite32((r29 + 20), r0);
    r28 = r29;
    r27 = 0;
    r31 = 0;
    MemoryInline::FlatWrite8((r29 + 144), static_cast<uint8_t>(r3));
}

loc_80827068:
{
    MemoryInline::FlatWriteFloat32((r28 + 528), f31.d);
    MemoryInline::FlatWriteFloat32((r28 + 544), f31.d);
    r3 = MemoryInline::FlatRead32((r28 + 684));
    ctx->lr = 0x80827078u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8081D160u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r3 = MemoryInline::FlatRead32((r28 + 684));
    r27 = (r27 + 1);
}

loc_80827084:
{
    r28 = (r28 + 4);
    MemoryInline::FlatWrite8((r3 + 68), static_cast<uint8_t>(r31));
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(4))) {
        goto loc_80827068;
    }
}

loc_80827090:
{
    r3 = 0x80870000u;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 768));
    r4 = MemoryInline::FlatRead32((r3 + -32304));
    r30 = 0x80840000u;
    r3 = MemoryInline::FlatRead32((r29 + 568));
    r5 = 1;
    r4 = MemoryInline::FlatRead32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite32((r29 + 560), r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r4 = MemoryInline::FlatRead32((r30 + 24300));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x808270DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r4 = (r30 + 24300);
    r5 = 1;
    r0 = (r0 & 254);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r29 + 568));
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x80827110u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r4 = 0;
    r0 = (r0 & 254);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r12 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80827130:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80827148;
    }
}

loc_80827134:
{
    r3 = 5;
    r4 = 5;
    ctr = r12;
    ctx->lr = 0x80827144u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
    r4 = r3;
}

loc_80827148:
{
}

loc_8082714C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80827158;
    }
}

loc_80827150:
{
    r3 = 5;
    ctx->lr = 0x80827158u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    ctr = ctx->ctr;
}

loc_80827158:
{
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80827168:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_8082717C;
    }
}

loc_8082716C:
{
    r3 = 5;
    r4 = 16;
    ctr = r12;
    ctx->lr = 0x8082717Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
}

loc_8082717C:
{
}

loc_80827180:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808273C0;
    }
}

loc_80827184:
{
    r3 = 16;
    ctx->lr = 0x8082718Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    ctr = ctx->ctr;
    goto loc_808273C0;
}

loc_80827190:
{
    r0 = 37;
    r4 = (r30 + 104);
    r3 = 0;
    ctr = r0;
}

loc_808271A0:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_808271A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(19))) {
        goto loc_808271BC;
    }
}

loc_808271AC:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_808271B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_808271BC;
    }
}

loc_808271B8:
{
    goto loc_808271EC;
}

loc_808271BC:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_808271C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(19))) {
        goto loc_808271DC;
    }
}

loc_808271CC:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_808271D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_808271DC;
    }
}

loc_808271D8:
{
    goto loc_808271EC;
}

loc_808271DC:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808271A0;
    }
}

loc_808271E8:
{
    r3 = -1;
}

loc_808271EC:
{
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_23 & -4);
    MemoryInline::FlatWrite32((r29 + 24), r3);
    r3 = (r29 + r0);
    r28 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r28;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl22_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl22_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl22_0x8081AA24;
    }
}

loc_inl22_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl22_0x8081AA28;
}

loc_inl22_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl22_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl22_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r3 = 13;
    r4 = MemoryInline::FlatRead32((r29 + 184));
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 20), r3);
}

loc_80827220:
{
    MemoryInline::FlatWrite32(r29, r0);
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_80827268;
    }
}

loc_80827228:
{
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80827238:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_8082724C;
    }
}

loc_8082723C:
{
    r3 = 5;
    r4 = 2;
    ctr = r12;
    ctx->lr = 0x8082724Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
}

loc_8082724C:
{
}

loc_80827250:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8082725C;
    }
}

loc_80827254:
{
    r3 = 2;
    ctx->lr = 0x8082725Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    ctr = ctx->ctr;
}

loc_8082725C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 1120), static_cast<uint8_t>(r0));
    goto loc_808273C0;
}

loc_80827268:
{
}

loc_8082726C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_808272B0;
    }
}

loc_80827270:
{
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80827280:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80827294;
    }
}

loc_80827284:
{
    r3 = 5;
    r4 = 3;
    ctr = r12;
    ctx->lr = 0x80827294u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
}

loc_80827294:
{
}

loc_80827298:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808272A4;
    }
}

loc_8082729C:
{
    r3 = 3;
    ctx->lr = 0x808272A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    ctr = ctx->ctr;
}

loc_808272A4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 1120), static_cast<uint8_t>(r0));
    goto loc_808273C0;
}

loc_808272B0:
{
}

loc_808272B4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(4))) {
        goto loc_808273C0;
    }
}

loc_808272B8:
{
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_808272C8:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_808272DC;
    }
}

loc_808272CC:
{
    r3 = 5;
    r4 = 3;
    ctr = r12;
    ctx->lr = 0x808272DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
}

loc_808272DC:
{
}

loc_808272E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808272EC;
    }
}

loc_808272E4:
{
    r3 = 3;
    ctx->lr = 0x808272ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    ctr = ctx->ctr;
}

loc_808272EC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 1120), static_cast<uint8_t>(r0));
    goto loc_808273C0;
}

loc_808272F8:
{
    r0 = 37;
    r4 = (r30 + 104);
    r3 = 0;
    ctr = r0;
}

loc_80827308:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80827310:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(20))) {
        goto loc_80827324;
    }
}

loc_80827314:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8082731C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_80827324;
    }
}

loc_80827320:
{
    goto loc_80827354;
}

loc_80827324:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80827330:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(20))) {
        goto loc_80827344;
    }
}

loc_80827334:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8082733C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_80827344;
    }
}

loc_80827340:
{
    goto loc_80827354;
}

loc_80827344:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80827308;
    }
}

loc_80827350:
{
    r3 = -1;
}

loc_80827354:
{
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_24 & -4);
    MemoryInline::FlatWrite32((r29 + 24), r3);
    r3 = (r29 + r0);
    r28 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r28;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl23_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl23_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl23_0x8081AA24;
    }
}

loc_inl23_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl23_0x8081AA28;
}

loc_inl23_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl23_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl23_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r3 = 13;
    r5 = -1;
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 20), r3);
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 0;
    MemoryInline::FlatWrite32((r29 + 184), r5);
    MemoryInline::FlatWrite32(r29, r0);
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_8082739C:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_808273B0;
    }
}

loc_808273A0:
{
    r3 = 5;
    r4 = 6;
    ctr = r12;
    ctx->lr = 0x808273B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
}

loc_808273B0:
{
}

loc_808273B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808273C0;
    }
}

loc_808273B8:
{
    r3 = 6;
    ctx->lr = 0x808273C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    ctr = ctx->ctr;
}

loc_808273C0:
{
    r11 = (r1 + 64);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 44), 0, 60u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 36u, (r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 20u, (r1 + 64));
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80826190 func_80826190 preserves=true fpr_mask=0x00000000
