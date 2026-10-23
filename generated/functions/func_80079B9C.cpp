#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80079B9C(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r23 = ctx->gpr[23];
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

    goto loc_80079B9C;

loc_80079B9C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r25 = 715849728;
    r3 = 1717960704;
    r31 = (r3 + 26215);
    r30 = (r25 + -21845);
}

loc_80079BCC:
{
    r0 = (r27 - r26);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r30)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 1);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r7 = (r0 + r3);
}

loc_80079BE4:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(1))) {
        goto loc_80079EB8;
    }
}

loc_80079BE8:
{
}

loc_80079BEC:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(20))) {
        goto loc_80079C04;
    }
}

loc_80079BF0:
{
    r3 = r26;
    r4 = r27;
    r5 = r28;
    ctx->lr = 0x80079C00u;
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
    goto loc_80079EB8;
}

loc_80079C04:
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
    r4 = MemoryInline::FlatRead32((r13 + -31780));
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r31)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 1);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 5);
    r0 = (r4 - r0);
    r0 = (r5 + r0);
    r0 = (r0 * 12);
    r3 = (r26 + r0);
    r6 = (r4 + 1);
}

loc_80079C3C:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(5))) {
        goto loc_80079C44;
    }
}

loc_80079C40:
{
    r6 = -4;
}

loc_80079C44:
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
    r4 = (r26 + r0);
    r0 = (r6 + 1);
    MemoryInline::FlatWrite32((r13 + -31780), r0);
}

loc_80079C84:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(5))) {
        goto loc_80079C90;
    }
}

loc_80079C88:
{
    r6 = -4;
    MemoryInline::FlatWrite32((r13 + -31780), r6);
}

loc_80079C90:
{
    r23 = (r27 + -12);
    r5 = r23;
    r6 = r28;
    ctx->lr = 0x80079CA0u;
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
    r29 = r26;
    r24 = r23;
    goto loc_80079CB0;
}

loc_80079CAC:
{
    r29 = (r29 + 12);
}

loc_80079CB0:
{
    r3 = r29;
    r4 = r23;
    r12 = MemoryInline::FlatRead32(r28);
    ctr = r12;
    ctx->lr = 0x80079CC4u;
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

loc_80079CC8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80079CAC;
    }
}

loc_80079CCC:
{
    r24 = (r24 + -12);
}

loc_80079CD4:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(r24))) {
        goto loc_80079CF4;
    }
}

loc_80079CD8:
{
    r3 = r24;
    r4 = r23;
    r12 = MemoryInline::FlatRead32(r28);
    ctr = r12;
    ctx->lr = 0x80079CECu;
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

loc_80079CF0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80079CCC;
    }
}

loc_80079CF4:
{
}

loc_80079CF8:
{
    if ((static_cast<uint32_t>(r29) >= static_cast<uint32_t>(r24))) {
        goto loc_80079D6C;
    }
}

loc_80079CFC:
{
    r3 = r29;
    r4 = r24;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80079ED0u>(ctx);
    r29 = (r29 + 12);
    goto loc_80079D14;
}

loc_80079D10:
{
    r29 = (r29 + 12);
}

loc_80079D14:
{
    r3 = r29;
    r4 = r23;
    r12 = MemoryInline::FlatRead32(r28);
    ctr = r12;
    ctx->lr = 0x80079D28u;
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

loc_80079D2C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80079D10;
    }
}

loc_80079D30:
{
    r24 = (r24 + -12);
    r3 = r24;
    r4 = r23;
    r12 = MemoryInline::FlatRead32(r28);
    ctr = r12;
    ctx->lr = 0x80079D48u;
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

loc_80079D4C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80079D30;
    }
}

loc_80079D50:
{
}

loc_80079D54:
{
    if ((static_cast<uint32_t>(r29) >= static_cast<uint32_t>(r24))) {
        goto loc_80079D6C;
    }
}

loc_80079D58:
{
    r3 = r29;
    r4 = r24;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80079ED0u>(ctx);
    r29 = (r29 + 12);
    goto loc_80079D14;
}

loc_80079D6C:
{
}

loc_80079D70:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(r26))) {
        goto loc_80079E54;
    }
}

loc_80079D74:
{
    r3 = r29;
    r4 = r23;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80079ED0u>(ctx);
    r29 = (r29 + 12);
    r3 = r26;
    r24 = (r27 + -12);
    r4 = r24;
    r12 = MemoryInline::FlatRead32(r28);
    ctr = r12;
    ctx->lr = 0x80079D9Cu;
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

loc_80079DA0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80079DE4;
    }
}

loc_80079DA4:
{
    goto loc_80079DAC;
}

loc_80079DA8:
{
    r29 = (r29 + 12);
}

loc_80079DAC:
{
}

loc_80079DB0:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(r27))) {
        goto loc_80079DD0;
    }
}

loc_80079DB4:
{
    r3 = r26;
    r4 = r29;
    r12 = MemoryInline::FlatRead32(r28);
    ctr = r12;
    ctx->lr = 0x80079DC8u;
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

loc_80079DCC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80079DA8;
    }
}

loc_80079DD0:
{
}

loc_80079DD4:
{
    if ((static_cast<uint32_t>(r29) >= static_cast<uint32_t>(r24))) {
        goto loc_80079DE4;
    }
}

loc_80079DD8:
{
    r3 = r29;
    r4 = r24;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80079ED0u>(ctx);
}

loc_80079DE4:
{
}

loc_80079DE8:
{
    if ((static_cast<uint32_t>(r29) >= static_cast<uint32_t>(r24))) {
        goto loc_80079E4C;
    }
}

loc_80079DEC:
{
    goto loc_80079DF4;
}

loc_80079DF0:
{
    r29 = (r29 + 12);
}

loc_80079DF4:
{
    r3 = r26;
    r4 = r29;
    r12 = MemoryInline::FlatRead32(r28);
    ctr = r12;
    ctx->lr = 0x80079E08u;
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

loc_80079E0C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80079DF0;
    }
}

loc_80079E10:
{
    r3 = r26;
    r24 = (r24 + -12);
    r4 = r24;
    r12 = MemoryInline::FlatRead32(r28);
    ctr = r12;
    ctx->lr = 0x80079E28u;
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

loc_80079E2C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80079E10;
    }
}

loc_80079E30:
{
}

loc_80079E34:
{
    if ((static_cast<uint32_t>(r29) >= static_cast<uint32_t>(r24))) {
        goto loc_80079E4C;
    }
}

loc_80079E38:
{
    r3 = r29;
    r4 = r24;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80079ED0u>(ctx);
    r29 = (r29 + 12);
    goto loc_80079DF4;
}

loc_80079E4C:
{
    r26 = r29;
    goto loc_80079BCC;
}

loc_80079E54:
{
    r0 = (r29 - r26);
    r5 = (r25 + -21845);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r5)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 1);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    r4 = (r0 + r3);
    r0 = (r27 - r29);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r5)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 1);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
    r0 = (r0 + r3);
}

loc_80079E84:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_80079EA0;
    }
}

loc_80079E88:
{
    r3 = r26;
    r4 = r29;
    r5 = r28;
    ctx->lr = 0x80079E98u;
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
    r26 = r29;
    goto loc_80079BCC;
}

loc_80079EA0:
{
    r3 = r29;
    r4 = r27;
    r5 = r28;
    ctx->lr = 0x80079EB0u;
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
    r27 = r29;
    goto loc_80079BCC;
}

loc_80079EB8:
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
// RECOMP_REGISTRATION base 0x80079B9C func_80079B9C preserves=true fpr_mask=0x00000000
