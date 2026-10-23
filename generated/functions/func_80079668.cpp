#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80079668(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_ca_0 = 0;
    uint32_t r5_ca_1 = 0;
    uint32_t r5_ca_2 = 0;
    uint32_t r5_ca_3 = 0;
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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80079668;

loc_80079668:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r28 = r3;
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    r27 = 715849728;
    r3 = 1717960704;
    r31 = (r3 + 26215);
    r30 = (r27 + -21845);
}

loc_80079698:
{
    r0 = (r29 - r28);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r30)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 1);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r7 = (r0 + r3);
}

loc_800796B0:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(1))) {
        goto loc_80079984;
    }
}

loc_800796B4:
{
}

loc_800796B8:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(20))) {
        goto loc_800796D0;
    }
}

loc_800796BC:
{
    r3 = r28;
    r4 = r29;
    r5 = (r1 + 8);
    ctx->lr = 0x800796CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8007999Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80079984;
}

loc_800796D0:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r7) >> 2);
    r5_ca_2 = (xer >> 29) & 1u;
    r5 = (r0 + r5_ca_2);
    r4 = MemoryInline::FlatRead32((r13 + -31784));
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r31)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 1);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 5);
    r0 = (r4 - r0);
    r0 = (r5 + r0);
    r0 = (r0 * 12);
    r3 = (r28 + r0);
    r6 = (r4 + 1);
}

loc_80079708:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(5))) {
        goto loc_80079710;
    }
}

loc_8007970C:
{
    r6 = -4;
}

loc_80079710:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r0 = (r0 - r7);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 2);
    r5_ca_3 = (xer >> 29) & 1u;
    r5 = (r0 + r5_ca_3);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r31)) * static_cast<int64_t>(static_cast<int32_t>(r6))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 1);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
    r0 = (r0 + r4);
    r0 = (r0 * 5);
    r0 = (r6 - r0);
    r0 = (r5 + r0);
    r0 = (r0 * 12);
    r4 = (r28 + r0);
    r0 = (r6 + 1);
    MemoryInline::FlatWrite32((r13 + -31784), r0);
}

loc_80079750:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(5))) {
        goto loc_8007975C;
    }
}

loc_80079754:
{
    r6 = -4;
    MemoryInline::FlatWrite32((r13 + -31784), r6);
}

loc_8007975C:
{
    r24 = (r29 + -12);
    r5 = r24;
    r6 = (r1 + 8);
    ctx->lr = 0x8007976Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80079AACu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    xer = ctx->xer;
    r26 = r28;
    r25 = r24;
    goto loc_8007977C;
}

loc_80079778:
{
    r26 = (r26 + 12);
}

loc_8007977C:
{
    r3 = r26;
    r4 = r24;
    r12 = MemoryInline::FlatRead32((r1 + 8));
    ctr = r12;
    ctx->lr = 0x80079790u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80079794:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80079778;
    }
}

loc_80079798:
{
    r25 = (r25 + -12);
}

loc_800797A0:
{
    if ((static_cast<uint32_t>(r26) == static_cast<uint32_t>(r25))) {
        goto loc_800797C0;
    }
}

loc_800797A4:
{
    r3 = r25;
    r4 = r24;
    r12 = MemoryInline::FlatRead32((r1 + 8));
    ctr = r12;
    ctx->lr = 0x800797B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800797BC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80079798;
    }
}

loc_800797C0:
{
}

loc_800797C4:
{
    if ((static_cast<uint32_t>(r26) >= static_cast<uint32_t>(r25))) {
        goto loc_80079838;
    }
}

loc_800797C8:
{
    r3 = r26;
    r4 = r25;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80079ED0u>(ctx);
    r26 = (r26 + 12);
    goto loc_800797E0;
}

loc_800797DC:
{
    r26 = (r26 + 12);
}

loc_800797E0:
{
    r3 = r26;
    r4 = r24;
    r12 = MemoryInline::FlatRead32((r1 + 8));
    ctr = r12;
    ctx->lr = 0x800797F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800797F8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800797DC;
    }
}

loc_800797FC:
{
    r25 = (r25 + -12);
    r3 = r25;
    r4 = r24;
    r12 = MemoryInline::FlatRead32((r1 + 8));
    ctr = r12;
    ctx->lr = 0x80079814u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80079818:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800797FC;
    }
}

loc_8007981C:
{
}

loc_80079820:
{
    if ((static_cast<uint32_t>(r26) >= static_cast<uint32_t>(r25))) {
        goto loc_80079838;
    }
}

loc_80079824:
{
    r3 = r26;
    r4 = r25;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80079ED0u>(ctx);
    r26 = (r26 + 12);
    goto loc_800797E0;
}

loc_80079838:
{
}

loc_8007983C:
{
    if ((static_cast<uint32_t>(r26) != static_cast<uint32_t>(r28))) {
        goto loc_80079920;
    }
}

loc_80079840:
{
    r3 = r26;
    r4 = r24;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80079ED0u>(ctx);
    r26 = (r26 + 12);
    r3 = r28;
    r25 = (r29 + -12);
    r4 = r25;
    r12 = MemoryInline::FlatRead32((r1 + 8));
    ctr = r12;
    ctx->lr = 0x80079868u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8007986C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800798B0;
    }
}

loc_80079870:
{
    goto loc_80079878;
}

loc_80079874:
{
    r26 = (r26 + 12);
}

loc_80079878:
{
}

loc_8007987C:
{
    if ((static_cast<uint32_t>(r26) == static_cast<uint32_t>(r29))) {
        goto loc_8007989C;
    }
}

loc_80079880:
{
    r3 = r28;
    r4 = r26;
    r12 = MemoryInline::FlatRead32((r1 + 8));
    ctr = r12;
    ctx->lr = 0x80079894u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80079898:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80079874;
    }
}

loc_8007989C:
{
}

loc_800798A0:
{
    if ((static_cast<uint32_t>(r26) >= static_cast<uint32_t>(r25))) {
        goto loc_800798B0;
    }
}

loc_800798A4:
{
    r3 = r26;
    r4 = r25;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80079ED0u>(ctx);
}

loc_800798B0:
{
}

loc_800798B4:
{
    if ((static_cast<uint32_t>(r26) >= static_cast<uint32_t>(r25))) {
        goto loc_80079918;
    }
}

loc_800798B8:
{
    goto loc_800798C0;
}

loc_800798BC:
{
    r26 = (r26 + 12);
}

loc_800798C0:
{
    r3 = r28;
    r4 = r26;
    r12 = MemoryInline::FlatRead32((r1 + 8));
    ctr = r12;
    ctx->lr = 0x800798D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800798D8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800798BC;
    }
}

loc_800798DC:
{
    r3 = r28;
    r25 = (r25 + -12);
    r4 = r25;
    r12 = MemoryInline::FlatRead32((r1 + 8));
    ctr = r12;
    ctx->lr = 0x800798F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800798F8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800798DC;
    }
}

loc_800798FC:
{
}

loc_80079900:
{
    if ((static_cast<uint32_t>(r26) >= static_cast<uint32_t>(r25))) {
        goto loc_80079918;
    }
}

loc_80079904:
{
    r3 = r26;
    r4 = r25;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80079ED0u>(ctx);
    r26 = (r26 + 12);
    goto loc_800798C0;
}

loc_80079918:
{
    r28 = r26;
    goto loc_80079698;
}

loc_80079920:
{
    r0 = (r26 - r28);
    r5 = (r27 + -21845);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r5)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 1);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    r4 = (r0 + r3);
    r0 = (r29 - r26);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r5)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 1);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
    r0 = (r0 + r3);
}

loc_80079950:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_8007996C;
    }
}

loc_80079954:
{
    r3 = r28;
    r4 = r26;
    r5 = (r1 + 8);
    ctx->lr = 0x80079964u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80079B9Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    xer = ctx->xer;
    r28 = r26;
    goto loc_80079698;
}

loc_8007996C:
{
    r3 = r26;
    r4 = r29;
    r5 = (r1 + 8);
    ctx->lr = 0x8007997Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80079B9Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    xer = ctx->xer;
    r29 = r26;
    goto loc_80079698;
}

loc_80079984:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80079668 func_80079668 preserves=true fpr_mask=0x00000000
