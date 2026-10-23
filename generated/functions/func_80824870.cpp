#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80824870(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80824870;

loc_80824870:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r30 = 0x80840000u;
    r26 = r3;
    r27 = r5;
    r30 = (r30 + 17656);
    ctx->lr = 0x80824898u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80827C00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r26 + 20));
    r31 = r3;
    r28 = 0;
}

loc_808248A8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_808255E4;
    }
}

loc_808248AC:
{
}

loc_808248B0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_808255E4;
    }
}

loc_808248B4:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = (r26 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 32));
}

loc_808248C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_808255E4;
    }
}

loc_808248C8:
{
    r5 = MemoryInline::FlatRead32(r26);
}

loc_808248D0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(2))) {
        goto loc_8082499C;
    }
}

loc_808248D4:
{
    r0 = MemoryInline::FlatRead32((r26 + 12));
}

loc_808248DC:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_8082499C;
    }
}

loc_808248E0:
{
    r0 = MemoryInline::FlatRead32((r26 + 16));
    r5 = (r30 + 8);
    r4 = 0;
    ctr = r0;
}

loc_808248F4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80824920;
    }
}

loc_808248F8:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_80824900:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80824914;
    }
}

loc_80824904:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8082490C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80824914;
    }
}

loc_80824910:
{
    goto loc_80824924;
}

loc_80824914:
{
    r5 = (r5 + 8);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808248F8;
    }
}

loc_80824920:
{
    r4 = -1;
}

loc_80824924:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r26 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 704));
    r3 = r29;
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
    MemoryInline::FlatWrite32((r29 + 20), r0);
    r0 = MemoryInline::FlatRead32(r26);
}

loc_80824948:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_808255E4;
    }
}

loc_8082494C:
{
    r0 = MemoryInline::FlatRead32((r26 + 104));
}

loc_80824954:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(2))) {
        goto loc_80824994;
    }
}

loc_80824958:
{
    r4 = MemoryInline::FlatRead32((r26 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80824968:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_8082497C;
    }
}

loc_8082496C:
{
    r3 = 5;
    r4 = 4;
    ctr = r12;
    ctx->lr = 0x8082497Cu;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8082497C:
{
}

loc_80824980:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8082498C;
    }
}

loc_80824984:
{
    r3 = 4;
    ctx->lr = 0x8082498Cu;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8082498C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + 104), r0);
}

loc_80824994:
{
    r28 = 1;
    goto loc_808255E4;
}

loc_8082499C:
{
    r0 = MemoryInline::FlatRead32((r26 + 12));
    r0 = (r3 - r0);
}

loc_808249A8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(9))) {
        goto loc_808255E4;
    }
}

loc_808249AC:
{
    r3 = 0x80840000u;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r3 + 24760);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x808249C4u:
        goto loc_808249C4;
        break;
    case 0x80824A84u:
        goto loc_80824A84;
        break;
    case 0x80825038u:
        goto loc_80825038;
        break;
    case 0x80825108u:
        goto loc_80825108;
        break;
    case 0x808251D8u:
        goto loc_808251D8;
        break;
    case 0x808252A8u:
        goto loc_808252A8;
        break;
    case 0x80825378u:
        goto loc_80825378;
        break;
    case 0x80825448u:
        goto loc_80825448;
        break;
    case 0x80825518u:
        goto loc_80825518;
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
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_808249C4:
{
}

loc_808249C8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_808255E4;
    }
}

loc_808249CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_808249D0:
{
    r4 = 1;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808249F8;
    }
}

loc_808249D8:
{
    r3 = MemoryInline::FlatRead32((r26 + 1096));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_808249E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_808249F8;
    }
}

loc_808249E8:
{
    r3 = MemoryInline::FlatRead32((r26 + 1060));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_808249F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_808249FC;
    }
}

loc_808249F8:
{
    r4 = 0;
}

loc_808249FC:
{
}

loc_80824A00:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80824A78;
    }
}

loc_80824A04:
{
    r28 = MemoryInline::FlatRead32((r26 + 1060));
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
    r4 = 3;
    r3 = 0;
    r0 = MemoryInline::FlatRead32((r26 + 104));
    MemoryInline::FlatWrite32((r26 + 116), r4);
}

loc_80824A2C:
{
    MemoryInline::FlatWrite32((r26 + 108), r3);
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(2))) {
        goto loc_80824A70;
    }
}

loc_80824A34:
{
    r4 = MemoryInline::FlatRead32((r26 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80824A44:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80824A58;
    }
}

loc_80824A48:
{
    r3 = 5;
    r4 = 4;
    ctr = r12;
    ctx->lr = 0x80824A58u;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80824A58:
{
}

loc_80824A5C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80824A68;
    }
}

loc_80824A60:
{
    r3 = 4;
    ctx->lr = 0x80824A68u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80824A68:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + 104), r0);
}

loc_80824A70:
{
    r28 = 1;
    goto loc_808255E4;
}

loc_80824A78:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r26 + 108), r0);
    goto loc_808255E4;
}

loc_80824A84:
{
}

loc_80824A88:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80824D60;
    }
}

loc_80824A8C:
{
    r0 = 37;
    r3 = (r30 + 104);
    r29 = 0;
    ctr = r0;
    // nop
}

loc_80824AA0:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_80824AA8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_80824ABC;
    }
}

loc_80824AAC:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80824AB4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80824ABC;
    }
}

loc_80824AB8:
{
    goto loc_80824AEC;
}

loc_80824ABC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r29 = (r29 + 1);
}

loc_80824AC8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_80824ADC;
    }
}

loc_80824ACC:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_80824AD4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80824ADC;
    }
}

loc_80824AD8:
{
    goto loc_80824AEC;
}

loc_80824ADC:
{
    r3 = (r3 + 16);
    r29 = (r29 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80824AA0;
    }
}

loc_80824AE8:
{
    r29 = -1;
}

loc_80824AEC:
{
    r3 = 37;
    r5 = (r30 + 104);
    r0 = 1;
    r8 = 0;
    ctr = r3;
}

loc_80824B00:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_80824B08:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_80824B1C;
    }
}

loc_80824B0C:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
}

loc_80824B14:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_80824B1C;
    }
}

loc_80824B18:
{
    goto loc_80824B4C;
}

loc_80824B1C:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r8 = (r8 + 1);
}

loc_80824B28:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_80824B3C;
    }
}

loc_80824B2C:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_80824B34:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_80824B3C;
    }
}

loc_80824B38:
{
    goto loc_80824B4C;
}

loc_80824B3C:
{
    r5 = (r5 + 16);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80824B00;
    }
}

loc_80824B48:
{
    r8 = -1;
}

loc_80824B4C:
{
    r3 = 37;
    r5 = (r30 + 104);
    r7 = 0;
    ctr = r3;
    // nop
}

loc_80824B60:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_80824B68:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_80824B7C;
    }
}

loc_80824B6C:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
}

loc_80824B74:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_80824B7C;
    }
}

loc_80824B78:
{
    goto loc_80824BAC;
}

loc_80824B7C:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r7 = (r7 + 1);
}

loc_80824B88:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_80824B9C;
    }
}

loc_80824B8C:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_80824B94:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_80824B9C;
    }
}

loc_80824B98:
{
    goto loc_80824BAC;
}

loc_80824B9C:
{
    r5 = (r5 + 16);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80824B60;
    }
}

loc_80824BA8:
{
    r7 = -1;
}

loc_80824BAC:
{
    r3 = 37;
    r5 = (r30 + 104);
    r6 = 0;
    ctr = r3;
    // nop
}

loc_80824BC0:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_80824BC8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_80824BDC;
    }
}

loc_80824BCC:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
}

loc_80824BD4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(19))) {
        goto loc_80824BDC;
    }
}

loc_80824BD8:
{
    goto loc_80824C0C;
}

loc_80824BDC:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r6 = (r6 + 1);
}

loc_80824BE8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_80824BFC;
    }
}

loc_80824BEC:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_80824BF4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(19))) {
        goto loc_80824BFC;
    }
}

loc_80824BF8:
{
    goto loc_80824C0C;
}

loc_80824BFC:
{
    r5 = (r5 + 16);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80824BC0;
    }
}

loc_80824C08:
{
    r6 = -1;
}

loc_80824C0C:
{
    r3 = 37;
    r9 = (r30 + 104);
    r5 = 0;
    ctr = r3;
    // nop
}

loc_80824C20:
{
    r3 = MemoryInline::FlatRead32(r9);
}

loc_80824C28:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_80824C3C;
    }
}

loc_80824C2C:
{
    r3 = MemoryInline::FlatRead32((r9 + 4));
}

loc_80824C34:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(20))) {
        goto loc_80824C3C;
    }
}

loc_80824C38:
{
    goto loc_80824C6C;
}

loc_80824C3C:
{
    r3 = MemoryInline::FlatRead32((r9 + 8));
    r5 = (r5 + 1);
}

loc_80824C48:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_80824C5C;
    }
}

loc_80824C4C:
{
    r3 = MemoryInline::FlatRead32((r9 + 12));
}

loc_80824C54:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(20))) {
        goto loc_80824C5C;
    }
}

loc_80824C58:
{
    goto loc_80824C6C;
}

loc_80824C5C:
{
    r9 = (r9 + 16);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80824C20;
    }
}

loc_80824C68:
{
    r5 = -1;
}

loc_80824C6C:
{
}

loc_80824C70:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_80824CD4;
    }
}

loc_80824C74:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    r3 = (r26 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 752));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80824C88:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80824CD4;
    }
}

loc_80824C8C:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & -4);
    r3 = (r26 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 752));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80824CA0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80824CD4;
    }
}

loc_80824CA4:
{
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r3 = (r3_rot_3 & -4);
    r3 = (r26 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 752));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80824CB8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80824CD4;
    }
}

loc_80824CBC:
{
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r3 = (r3_rot_4 & -4);
    r3 = (r26 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 752));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80824CD0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80824CD8;
    }
}

loc_80824CD4:
{
    r0 = 0;
}

loc_80824CD8:
{
}

loc_80824CDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80824D58;
    }
}

loc_80824CE0:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r26 + r0);
    r28 = MemoryInline::FlatRead32((r3 + 752));
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
    r0 = 1;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r3 = 0;
    r0 = MemoryInline::FlatRead32((r26 + 104));
    MemoryInline::FlatWrite32((r26 + 120), r29);
}

loc_80824D0C:
{
    MemoryInline::FlatWrite32((r26 + 112), r3);
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(2))) {
        goto loc_80824D50;
    }
}

loc_80824D14:
{
    r4 = MemoryInline::FlatRead32((r26 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80824D24:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80824D38;
    }
}

loc_80824D28:
{
    r3 = 5;
    r4 = 4;
    ctr = r12;
    ctx->lr = 0x80824D38u;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80824D38:
{
}

loc_80824D3C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80824D48;
    }
}

loc_80824D40:
{
    r3 = 4;
    ctx->lr = 0x80824D48u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80824D48:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + 104), r0);
}

loc_80824D50:
{
    r28 = 1;
    goto loc_808255E4;
}

loc_80824D58:
{
    MemoryInline::FlatWrite32((r26 + 112), r29);
    goto loc_808255E4;
}

loc_80824D60:
{
}

loc_80824D64:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(1))) {
        goto loc_808255E4;
    }
}

loc_80824D68:
{
    r0 = 37;
    r3 = (r30 + 104);
    r29 = 0;
    ctr = r0;
}

loc_80824D78:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_80824D80:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_80824D94;
    }
}

loc_80824D84:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80824D8C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(19))) {
        goto loc_80824D94;
    }
}

loc_80824D90:
{
    goto loc_80824DC4;
}

loc_80824D94:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r29 = (r29 + 1);
}

loc_80824DA0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_80824DB4;
    }
}

loc_80824DA4:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_80824DAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(19))) {
        goto loc_80824DB4;
    }
}

loc_80824DB0:
{
    goto loc_80824DC4;
}

loc_80824DB4:
{
    r3 = (r3 + 16);
    r29 = (r29 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80824D78;
    }
}

loc_80824DC0:
{
    r29 = -1;
}

loc_80824DC4:
{
    r3 = 37;
    r5 = (r30 + 104);
    r0 = 1;
    r8 = 0;
    ctr = r3;
}

loc_80824DD8:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_80824DE0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_80824DF4;
    }
}

loc_80824DE4:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
}

loc_80824DEC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_80824DF4;
    }
}

loc_80824DF0:
{
    goto loc_80824E24;
}

loc_80824DF4:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r8 = (r8 + 1);
}

loc_80824E00:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_80824E14;
    }
}

loc_80824E04:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_80824E0C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_80824E14;
    }
}

loc_80824E10:
{
    goto loc_80824E24;
}

loc_80824E14:
{
    r5 = (r5 + 16);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80824DD8;
    }
}

loc_80824E20:
{
    r8 = -1;
}

loc_80824E24:
{
    r3 = 37;
    r5 = (r30 + 104);
    r7 = 0;
    ctr = r3;
    // nop
}

loc_80824E38:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_80824E40:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_80824E54;
    }
}

loc_80824E44:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
}

loc_80824E4C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_80824E54;
    }
}

loc_80824E50:
{
    goto loc_80824E84;
}

loc_80824E54:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r7 = (r7 + 1);
}

loc_80824E60:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_80824E74;
    }
}

loc_80824E64:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_80824E6C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_80824E74;
    }
}

loc_80824E70:
{
    goto loc_80824E84;
}

loc_80824E74:
{
    r5 = (r5 + 16);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80824E38;
    }
}

loc_80824E80:
{
    r7 = -1;
}

loc_80824E84:
{
    r3 = 37;
    r5 = (r30 + 104);
    r6 = 0;
    ctr = r3;
    // nop
}

loc_80824E98:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_80824EA0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_80824EB4;
    }
}

loc_80824EA4:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
}

loc_80824EAC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(19))) {
        goto loc_80824EB4;
    }
}

loc_80824EB0:
{
    goto loc_80824EE4;
}

loc_80824EB4:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r6 = (r6 + 1);
}

loc_80824EC0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_80824ED4;
    }
}

loc_80824EC4:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_80824ECC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(19))) {
        goto loc_80824ED4;
    }
}

loc_80824ED0:
{
    goto loc_80824EE4;
}

loc_80824ED4:
{
    r5 = (r5 + 16);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80824E98;
    }
}

loc_80824EE0:
{
    r6 = -1;
}

loc_80824EE4:
{
    r3 = 37;
    r9 = (r30 + 104);
    r5 = 0;
    ctr = r3;
    // nop
}

loc_80824EF8:
{
    r3 = MemoryInline::FlatRead32(r9);
}

loc_80824F00:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_80824F14;
    }
}

loc_80824F04:
{
    r3 = MemoryInline::FlatRead32((r9 + 4));
}

loc_80824F0C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(20))) {
        goto loc_80824F14;
    }
}

loc_80824F10:
{
    goto loc_80824F44;
}

loc_80824F14:
{
    r3 = MemoryInline::FlatRead32((r9 + 8));
    r5 = (r5 + 1);
}

loc_80824F20:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_80824F34;
    }
}

loc_80824F24:
{
    r3 = MemoryInline::FlatRead32((r9 + 12));
}

loc_80824F2C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(20))) {
        goto loc_80824F34;
    }
}

loc_80824F30:
{
    goto loc_80824F44;
}

loc_80824F34:
{
    r9 = (r9 + 16);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80824EF8;
    }
}

loc_80824F40:
{
    r5 = -1;
}

loc_80824F44:
{
}

loc_80824F48:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_80824FAC;
    }
}

loc_80824F4C:
{
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r3 = (r3_rot_7 & -4);
    r3 = (r26 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 752));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80824F60:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80824FAC;
    }
}

loc_80824F64:
{
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r3 = (r3_rot_8 & -4);
    r3 = (r26 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 752));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80824F78:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80824FAC;
    }
}

loc_80824F7C:
{
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r3 = (r3_rot_9 & -4);
    r3 = (r26 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 752));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80824F90:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80824FAC;
    }
}

loc_80824F94:
{
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r3 = (r3_rot_10 & -4);
    r3 = (r26 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 752));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80824FA8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80824FB0;
    }
}

loc_80824FAC:
{
    r0 = 0;
}

loc_80824FB0:
{
}

loc_80824FB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80825030;
    }
}

loc_80824FB8:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r26 + r0);
    r28 = MemoryInline::FlatRead32((r3 + 752));
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
    r0 = 1;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r3 = 0;
    r0 = MemoryInline::FlatRead32((r26 + 104));
    MemoryInline::FlatWrite32((r26 + 120), r29);
}

loc_80824FE4:
{
    MemoryInline::FlatWrite32((r26 + 112), r3);
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(2))) {
        goto loc_80825028;
    }
}

loc_80824FEC:
{
    r4 = MemoryInline::FlatRead32((r26 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80824FFC:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80825010;
    }
}

loc_80825000:
{
    r3 = 5;
    r4 = 4;
    ctr = r12;
    ctx->lr = 0x80825010u;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80825010:
{
}

loc_80825014:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80825020;
    }
}

loc_80825018:
{
    r3 = 4;
    ctx->lr = 0x80825020u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80825020:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + 104), r0);
}

loc_80825028:
{
    r28 = 1;
    goto loc_808255E4;
}

loc_80825030:
{
    MemoryInline::FlatWrite32((r26 + 112), r29);
    goto loc_808255E4;
}

loc_80825038:
{
}

loc_8082503C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(1))) {
        goto loc_808255E4;
    }
}

loc_80825040:
{
    r0 = 37;
    r4 = (r30 + 104);
    r3 = 0;
    ctr = r0;
}

loc_80825050:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80825058:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_8082506C;
    }
}

loc_8082505C:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80825064:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8082506C;
    }
}

loc_80825068:
{
    goto loc_8082509C;
}

loc_8082506C:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80825078:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_8082508C;
    }
}

loc_8082507C:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80825084:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8082508C;
    }
}

loc_80825088:
{
    goto loc_8082509C;
}

loc_8082508C:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80825050;
    }
}

loc_80825098:
{
    r3 = -1;
}

loc_8082509C:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r26 + r0);
    r28 = MemoryInline::FlatRead32((r3 + 752));
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
    r0 = 1;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r0 = MemoryInline::FlatRead32((r26 + 104));
}

loc_808250C0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(2))) {
        goto loc_80825100;
    }
}

loc_808250C4:
{
    r4 = MemoryInline::FlatRead32((r26 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_808250D4:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_808250E8;
    }
}

loc_808250D8:
{
    r3 = 5;
    r4 = 4;
    ctr = r12;
    ctx->lr = 0x808250E8u;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_808250E8:
{
}

loc_808250EC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808250F8;
    }
}

loc_808250F0:
{
    r3 = 4;
    ctx->lr = 0x808250F8u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_808250F8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + 104), r0);
}

loc_80825100:
{
    r28 = 1;
    goto loc_808255E4;
}

loc_80825108:
{
}

loc_8082510C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(1))) {
        goto loc_808255E4;
    }
}

loc_80825110:
{
    r0 = 37;
    r4 = (r30 + 104);
    r3 = 0;
    ctr = r0;
}

loc_80825120:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80825128:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_8082513C;
    }
}

loc_8082512C:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80825134:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8082513C;
    }
}

loc_80825138:
{
    goto loc_8082516C;
}

loc_8082513C:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80825148:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_8082515C;
    }
}

loc_8082514C:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80825154:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8082515C;
    }
}

loc_80825158:
{
    goto loc_8082516C;
}

loc_8082515C:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80825120;
    }
}

loc_80825168:
{
    r3 = -1;
}

loc_8082516C:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3 = (r26 + r0);
    r28 = MemoryInline::FlatRead32((r3 + 752));
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
    r0 = 1;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r0 = MemoryInline::FlatRead32((r26 + 104));
}

loc_80825190:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(2))) {
        goto loc_808251D0;
    }
}

loc_80825194:
{
    r4 = MemoryInline::FlatRead32((r26 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_808251A4:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_808251B8;
    }
}

loc_808251A8:
{
    r3 = 5;
    r4 = 4;
    ctr = r12;
    ctx->lr = 0x808251B8u;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_808251B8:
{
}

loc_808251BC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808251C8;
    }
}

loc_808251C0:
{
    r3 = 4;
    ctx->lr = 0x808251C8u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_808251C8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + 104), r0);
}

loc_808251D0:
{
    r28 = 1;
    goto loc_808255E4;
}

loc_808251D8:
{
}

loc_808251DC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(1))) {
        goto loc_808255E4;
    }
}

loc_808251E0:
{
    r0 = 37;
    r4 = (r30 + 104);
    r3 = 0;
    ctr = r0;
}

loc_808251F0:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_808251F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_8082520C;
    }
}

loc_808251FC:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80825204:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8082520C;
    }
}

loc_80825208:
{
    goto loc_8082523C;
}

loc_8082520C:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80825218:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_8082522C;
    }
}

loc_8082521C:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80825224:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8082522C;
    }
}

loc_80825228:
{
    goto loc_8082523C;
}

loc_8082522C:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808251F0;
    }
}

loc_80825238:
{
    r3 = -1;
}

loc_8082523C:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = (r26 + r0);
    r28 = MemoryInline::FlatRead32((r3 + 752));
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
    r0 = 1;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r0 = MemoryInline::FlatRead32((r26 + 104));
}

loc_80825260:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(2))) {
        goto loc_808252A0;
    }
}

loc_80825264:
{
    r4 = MemoryInline::FlatRead32((r26 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80825274:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80825288;
    }
}

loc_80825278:
{
    r3 = 5;
    r4 = 4;
    ctr = r12;
    ctx->lr = 0x80825288u;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80825288:
{
}

loc_8082528C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80825298;
    }
}

loc_80825290:
{
    r3 = 4;
    ctx->lr = 0x80825298u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80825298:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + 104), r0);
}

loc_808252A0:
{
    r28 = 1;
    goto loc_808255E4;
}

loc_808252A8:
{
}

loc_808252AC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(1))) {
        goto loc_808255E4;
    }
}

loc_808252B0:
{
    r0 = 37;
    r4 = (r30 + 104);
    r3 = 0;
    ctr = r0;
}

loc_808252C0:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_808252C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(9))) {
        goto loc_808252DC;
    }
}

loc_808252CC:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_808252D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_808252DC;
    }
}

loc_808252D8:
{
    goto loc_8082530C;
}

loc_808252DC:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_808252E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(9))) {
        goto loc_808252FC;
    }
}

loc_808252EC:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_808252F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_808252FC;
    }
}

loc_808252F8:
{
    goto loc_8082530C;
}

loc_808252FC:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808252C0;
    }
}

loc_80825308:
{
    r3 = -1;
}

loc_8082530C:
{
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3 = (r26 + r0);
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
    r0 = MemoryInline::FlatRead32((r26 + 104));
}

loc_80825330:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(2))) {
        goto loc_80825370;
    }
}

loc_80825334:
{
    r4 = MemoryInline::FlatRead32((r26 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80825344:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80825358;
    }
}

loc_80825348:
{
    r3 = 5;
    r4 = 4;
    ctr = r12;
    ctx->lr = 0x80825358u;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80825358:
{
}

loc_8082535C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80825368;
    }
}

loc_80825360:
{
    r3 = 4;
    ctx->lr = 0x80825368u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80825368:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + 104), r0);
}

loc_80825370:
{
    r28 = 1;
    goto loc_808255E4;
}

loc_80825378:
{
}

loc_8082537C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(1))) {
        goto loc_808255E4;
    }
}

loc_80825380:
{
    r0 = 37;
    r4 = (r30 + 104);
    r3 = 0;
    ctr = r0;
}

loc_80825390:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80825398:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_808253AC;
    }
}

loc_8082539C:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_808253A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_808253AC;
    }
}

loc_808253A8:
{
    goto loc_808253DC;
}

loc_808253AC:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_808253B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_808253CC;
    }
}

loc_808253BC:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_808253C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_808253CC;
    }
}

loc_808253C8:
{
    goto loc_808253DC;
}

loc_808253CC:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80825390;
    }
}

loc_808253D8:
{
    r3 = -1;
}

loc_808253DC:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3 = (r26 + r0);
    r28 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r28;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl9_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl9_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl9_0x8081AA24;
    }
}

loc_inl9_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl9_0x8081AA28;
}

loc_inl9_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl9_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl9_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r0 = MemoryInline::FlatRead32((r26 + 104));
}

loc_80825400:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(2))) {
        goto loc_80825440;
    }
}

loc_80825404:
{
    r4 = MemoryInline::FlatRead32((r26 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80825414:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80825428;
    }
}

loc_80825418:
{
    r3 = 5;
    r4 = 4;
    ctr = r12;
    ctx->lr = 0x80825428u;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80825428:
{
}

loc_8082542C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80825438;
    }
}

loc_80825430:
{
    r3 = 4;
    ctx->lr = 0x80825438u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80825438:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + 104), r0);
}

loc_80825440:
{
    r28 = 1;
    goto loc_808255E4;
}

loc_80825448:
{
}

loc_8082544C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(2))) {
        goto loc_808255E4;
    }
}

loc_80825450:
{
    r0 = 37;
    r4 = (r30 + 104);
    r3 = 0;
    ctr = r0;
}

loc_80825460:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80825468:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(17))) {
        goto loc_8082547C;
    }
}

loc_8082546C:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80825474:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(11))) {
        goto loc_8082547C;
    }
}

loc_80825478:
{
    goto loc_808254AC;
}

loc_8082547C:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80825488:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(17))) {
        goto loc_8082549C;
    }
}

loc_8082548C:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80825494:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(11))) {
        goto loc_8082549C;
    }
}

loc_80825498:
{
    goto loc_808254AC;
}

loc_8082549C:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80825460;
    }
}

loc_808254A8:
{
    r3 = -1;
}

loc_808254AC:
{
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3 = (r26 + r0);
    r28 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r28;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl10_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl10_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl10_0x8081AA24;
    }
}

loc_inl10_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl10_0x8081AA28;
}

loc_inl10_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl10_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl10_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r0 = MemoryInline::FlatRead32((r26 + 104));
}

loc_808254D0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(2))) {
        goto loc_80825510;
    }
}

loc_808254D4:
{
    r4 = MemoryInline::FlatRead32((r26 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_808254E4:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_808254F8;
    }
}

loc_808254E8:
{
    r3 = 5;
    r4 = 4;
    ctr = r12;
    ctx->lr = 0x808254F8u;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_808254F8:
{
}

loc_808254FC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80825508;
    }
}

loc_80825500:
{
    r3 = 4;
    ctx->lr = 0x80825508u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80825508:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + 104), r0);
}

loc_80825510:
{
    r28 = 1;
    goto loc_808255E4;
}

loc_80825518:
{
}

loc_8082551C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(2))) {
        goto loc_808255E4;
    }
}

loc_80825520:
{
    r0 = 37;
    r4 = (r30 + 104);
    r3 = 0;
    ctr = r0;
}

loc_80825530:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80825538:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(18))) {
        goto loc_8082554C;
    }
}

loc_8082553C:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80825544:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(11))) {
        goto loc_8082554C;
    }
}

loc_80825548:
{
    goto loc_8082557C;
}

loc_8082554C:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80825558:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(18))) {
        goto loc_8082556C;
    }
}

loc_8082555C:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80825564:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(11))) {
        goto loc_8082556C;
    }
}

loc_80825568:
{
    goto loc_8082557C;
}

loc_8082556C:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80825530;
    }
}

loc_80825578:
{
    r3 = -1;
}

loc_8082557C:
{
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r3 = (r26 + r0);
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
    r0 = MemoryInline::FlatRead32((r26 + 104));
}

loc_808255A0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(2))) {
        goto loc_808255E0;
    }
}

loc_808255A4:
{
    r4 = MemoryInline::FlatRead32((r26 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_808255B4:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_808255C8;
    }
}

loc_808255B8:
{
    r3 = 5;
    r4 = 4;
    ctr = r12;
    ctx->lr = 0x808255C8u;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_808255C8:
{
}

loc_808255CC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808255D8;
    }
}

loc_808255D0:
{
    r3 = 4;
    ctx->lr = 0x808255D8u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_808255D8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + 104), r0);
}

loc_808255E0:
{
    r28 = 1;
}

loc_808255E4:
{
    r3 = MemoryInline::FlatRead32((r26 + 12));
    r4 = (r3 + 1);
}

loc_808255F0:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(r4))) {
        goto loc_80825600;
    }
}

loc_808255F4:
{
    r0 = (r3 + 9);
}

loc_808255FC:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(r0))) {
        goto loc_80825634;
    }
}

loc_80825600:
{
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_15 & -4);
    r4 = (r26 + r0);
    r3 = MemoryInline::FlatRead32((r4 + 32));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 32), r0);
    r3 = MemoryInline::FlatRead32((r26 + 12));
    r0 = (r3 + 9);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_16 & -4);
    r4 = (r26 + r0);
    r3 = MemoryInline::FlatRead32((r4 + 32));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 32), r0);
    goto loc_80825648;
}

loc_80825634:
{
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_14 & -4);
    r4 = (r26 + r0);
    r3 = MemoryInline::FlatRead32((r4 + 32));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 32), r0);
}

loc_80825648:
{
}

loc_8082564C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_808256A4;
    }
}

loc_80825650:
{
}

loc_80825654:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_808256A4;
    }
}

loc_80825658:
{
    r0 = MemoryInline::FlatRead32(r27);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_18 & -4);
    r4 = (r26 + r0);
    r3 = MemoryInline::FlatRead32((r4 + 684));
    r0 = MemoryInline::FlatRead8((r3 + 28));
}

loc_80825670:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_808256A4;
    }
}

loc_80825674:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 544));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 736));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80825680:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808256A4;
    }
}

loc_80825688:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 844));
    MemoryInline::FlatWriteFloat32((r4 + 528), f0.d);
    r0 = MemoryInline::FlatRead32(r27);
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_19 & -4);
    r3 = (r26 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 684));
    ctx->lr = 0x808256A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081D0F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_808256A4:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80824870 func_80824870 preserves=true fpr_mask=0x00000000
