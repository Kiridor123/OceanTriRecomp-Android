#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804E80B0(CpuContext* ctx);
extern "C" uint64_t func_804E80B0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804E8440(CpuContext* ctx);
extern "C" uint64_t func_804E8440_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804E8CB0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addze_src_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r7_addze_src_0 = 0;
    uint32_t r7_ca_0 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_804E8CB0;

loc_804E8CB0:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r29 = r3;
    r28 = r4;
    r27 = r5;
    r26 = r6;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r4 = 0x80760000u;
    r31 = r3;
    r4 = (r4 + -10560);
    r0 = MemoryInline::FlatRead32((r4 + 36));
    MemoryInline::FlatWriteRam16((r4 + 22), static_cast<uint16_t>(r29));
}

loc_804E8CF0:
{
    MemoryInline::FlatWriteRam16((r4 + 24), static_cast<uint16_t>(r28));
    MemoryInline::FlatWriteRam16((r4 + 26), static_cast<uint16_t>(r27));
    MemoryInline::FlatWriteRam16((r4 + 28), static_cast<uint16_t>(r26));
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_804E8D04;
    }
}

loc_804E8D00:
{
    goto loc_804E8D20;
}

loc_804E8D04:
{
}

loc_804E8D08:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_804E8D10;
    }
}

loc_804E8D0C:
{
    goto loc_804E8D20;
}

loc_804E8D10:
{
    r0 = MemoryInline::FlatRead32((r4 + 32));
}

loc_804E8D18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804E8D20;
    }
}

loc_804E8D1C:
{
    r26_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(1));
    r26 = (r26_rot_1 & 65534);
}

loc_804E8D20:
{
    r4 = 0x80760000u;
    r3 = MemoryInline::FlatRead16((r13 + -14364));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r5 = (r4 + -10560);
    r4 = MemoryInline::FlatRead16((r4 + -10560));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r5 + 4));
    MemoryInline::FlatWriteRam16((r5 + 6), static_cast<uint16_t>(r26));
    r3 = (r4 + r3);
    r6 = (720 - r0);
    r30 = MemoryInline::FlatRead32((r5 + 84));
}

loc_804E8D48:
{
    r5 = MemoryInline::FlatRead16((r30 + 2));
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r6))) {
        goto loc_804E8D54;
    }
}

loc_804E8D50:
{
    goto loc_804E8D5C;
}

loc_804E8D54:
{
    r0 = (static_cast<int32_t>(r3) >> 31);
    r6 = (r3 & ~r0);
}

loc_804E8D5C:
{
    r4 = 0x80760000u;
    r9 = MemoryInline::FlatRead16((r13 + -14362));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r4 = (r4 + -10560);
    r7 = MemoryInline::FlatRead16((r4 + 2));
    r3 = MemoryInline::FlatRead32((r4 + 32));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r12 = (r7 & 1);
    r7 = (r0 + r9);
    MemoryInline::FlatWriteRam16((r4 + 8), static_cast<uint16_t>(r6));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
}

loc_804E8D8C:
{
    r0 = r12;
    r4 = (r3 + 1);
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(r12))) {
        goto loc_804E8D9C;
    }
}

loc_804E8D98:
{
    r0 = r7;
}

loc_804E8D9C:
{
    r3 = 0x80760000u;
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r3 = (r3 + -10560);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 2), 0, 70u, true, false);
    r7 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 2));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r6 = (r6_rot_0 & -2);
    r5 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r3 + 6));
    r27 = (r6 - r12);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r8 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 2));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r11 = (r9 + r6);
    r7 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r3 + 6));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r9 = (r8 + r9);
    r6 = (r6 + r11);
    r26 = (r11 - r12);
    r6 = (r6 - r27);
    r7 = (r7 + r11);
    r8 = (0 - r6);
    r12 = (r9 - r12);
    r10 = (r8 & ~r6);
    r27 = (r7 - r27);
    r28 = (static_cast<int32_t>(r10) >> 31);
    r8 = MemoryInline::ReadResolved32(guest_range_0, 66u, (r3 + 68));
    r11 = (static_cast<int32_t>(r26) >> 31);
    r9 = (0 - r27);
    r10 = (static_cast<int32_t>(r12) >> 31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_804E8E08:
{
    r9 = (r9 & ~r27);
    r29 = (r26 & r11);
    r11 = (static_cast<int32_t>(r9) >> 31);
    r12 = (r12 & r10);
    r9 = (static_cast<int32_t>(r26) >> 31);
    r28 = (r6 & r28);
    r9 = (r26 & r9);
    r27 = (r27 & r11);
    r9 = PPC_Divw(static_cast<int32_t>(r9), static_cast<int32_t>(r4));
    MemoryInline::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r0));
    r0 = (r5 + r29);
    r10 = MemoryInline::ReadResolved16(guest_range_0, 26u, (r3 + 28));
    r11 = MemoryInline::ReadResolved16(guest_range_0, 22u, (r3 + 24));
    r0 = (r0 - r28);
    r6 = PPC_Divw(static_cast<int32_t>(r12), static_cast<int32_t>(r4));
    r7 = MemoryInline::ReadResolved16(guest_range_0, 24u, (r3 + 26));
    MemoryInline::FlatWriteRam16((r3 + 12), static_cast<uint16_t>(r0));
    r5 = (r10 + r9);
    r8 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r3 + 4));
    r0 = r7;
    r4 = PPC_Divw(static_cast<int32_t>(r27), static_cast<int32_t>(r4));
    r6 = (r11 - r6);
    MemoryInline::FlatWriteRam16((r3 + 14), static_cast<uint16_t>(r6));
    r4 = (r5 - r4);
    MemoryInline::FlatWriteRam16((r3 + 16), static_cast<uint16_t>(r4));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804E8E74;
    }
}

loc_804E8E70:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 131070);
}

loc_804E8E74:
{
    r6 = (r0 & 65535);
}

loc_804E8E7C:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r8))) {
        goto loc_804E8ED0;
    }
}

loc_804E8E80:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r0 = (r0_rot_3 & 16776960);
    r3 = MemoryInline::FlatRead32((r13 + -14352));
    r4 = (r8 + r0);
    r0 = MemoryInline::FlatRead32((r13 + -14348));
    r5 = (r4 + -1);
    r5 = PPC_Divwu(static_cast<uint32_t>(r5), static_cast<uint32_t>(r8));
    r0 = (r0 | 67108864);
    MemoryInline::FlatWrite32((r13 + -14348), r0);
    r4 = 0x80760000u;
    MemoryInline::FlatWrite32((r13 + -14352), r3);
    r4 = (r4 + -10680);
    r3 = MemoryInline::FlatRead32((r13 + -14352));
    r5 = (r5 | 4096);
    r0 = MemoryInline::FlatRead32((r13 + -14348));
    MemoryInline::FlatWriteRam16((r4 + 74), static_cast<uint16_t>(r5));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite32((r13 + -14348), r0);
    MemoryInline::FlatWriteRam16((r4 + 112), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite32((r13 + -14352), r3);
    goto loc_804E8EF4;
}

loc_804E8ED0:
{
    r3 = MemoryInline::FlatRead32((r13 + -14352));
    r4 = 0x80760000u;
    r0 = MemoryInline::FlatRead32((r13 + -14348));
    r4 = (r4 + -10680);
    r5 = 256;
    MemoryInline::FlatWriteRam16((r4 + 74), static_cast<uint16_t>(r5));
    r0 = (r0 | 67108864);
    MemoryInline::FlatWrite32((r13 + -14348), r0);
    MemoryInline::FlatWrite32((r13 + -14352), r3);
}

loc_804E8EF4:
{
    r4 = 0x80760000u;
    r4 = (r4 + -10560);
    r3 = MemoryInline::FlatRead16((r4 + 18));
    r5 = MemoryInline::FlatRead32((r4 + 32));
    r0 = (r3 + 15);
    r3 = MemoryInline::FlatRead16((r4 + 22));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_804E8F14:
{
    r0_addze_src_0 = r0;
    r0_ca_0 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_0 + r0_ca_0);
    MemoryInline::FlatWriteRam8((r4 + 44), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804E8F28;
    }
}

loc_804E8F20:
{
    r9 = (r0 & 255);
    goto loc_804E8F2C;
}

loc_804E8F28:
{
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r9 = (r9_rot_1 & 254);
}

loc_804E8F2C:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(28));
    r0 = (r0_rot_5 & -268435456);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
    r3 = (r0 - r4);
    r0 = MemoryInline::FlatRead32((r13 + -14328));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r3 = (r3_rot_2 & -1);
    r5 = MemoryInline::FlatRead32((r13 + -14352));
    r8 = (r3 + r4);
    r4 = MemoryInline::FlatRead32((r13 + -14348));
    r6 = (r8 & 255);
    r3 = 0x80760000u;
    r7 = (r7 + r6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_804E8F5C:
{
    r7 = (r7 + 15);
    r3 = (r3 + -10560);
    r6 = 0x80760000u;
    r4 = (r4 | 134217728);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r7 = (static_cast<int32_t>(r7) >> 4);
    MemoryInline::FlatWrite32((r13 + -14348), r4);
    r7_addze_src_0 = r7;
    r7_ca_0 = (xer >> 29) & 1u;
    r7 = (r7_addze_src_0 + r7_ca_0);
    r0 = r9;
    r6 = (r6 + -10680);
    MemoryInline::FlatWriteRam8((r3 + 45), static_cast<uint8_t>(r9));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r0_mrot_0 = (r0_rot_6 & 65280);
    r0_mdest_0 = (r0 & -65281);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryInline::FlatWriteRam8((r3 + 60), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r3 + 46), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam16((r6 + 72), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r13 + -14352), r5);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804E8FB0;
    }
}

loc_804E8F9C:
{
    r4 = (r3 + 52);
    r5 = (r3 + 56);
    r6 = (r3 + 76);
    r7 = (r3 + 80);
    if constexpr (KnownRegArgsCpuCall<0x804E80B0u>(&func_804E80B0)) {
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
        ctx->xer = xer;
        const auto regargs_result_804E80B0_363C = func_804E80B0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804E80B0_363C);
        r4 = static_cast<uint32_t>(regargs_result_804E80B0_363C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804E80B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        cr = ctx->cr;
    }
}

loc_804E8FB0:
{
    r4 = 0x80760000u;
    r4 = (r4 + -10560);
    r0 = MemoryInline::FlatRead32((r4 + 64));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead16((r4 + 10));
    r4 = MemoryInline::FlatRead16((r4 + 6));
    r5 = MemoryInline::FlatRead8(r30);
    r6 = MemoryInline::FlatRead16((r30 + 2));
    r7 = MemoryInline::FlatRead16((r30 + 4));
    r8 = MemoryInline::FlatRead16((r30 + 6));
    r9 = MemoryInline::FlatRead16((r30 + 8));
    r10 = MemoryInline::FlatRead16((r30 + 10));
    if constexpr (KnownRegArgsCpuCall<0x804E8440u>(&func_804E8440)) {
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
        ctx->xer = xer;
        const auto regargs_result_804E8440_3EC1 = func_804E8440_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804E8440_3EC1);
        r4 = static_cast<uint32_t>(regargs_result_804E8440_3EC1 >> 32);
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
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804E8440u>(ctx);
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
        cr = ctx->cr;
    }
    r3 = r31;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl2_0x804D1330:
{
}

loc_inl2_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x804D1344;
    }
}

loc_inl2_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl2_0x804D1348;
}

loc_inl2_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl2_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_3 & 1);
}

loc_inl2_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r11 = (r1 + 48);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
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
    ctx->cr = cr;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804E8CB0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804E8CB0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804E8CB0 func_804E8CB0 preserves=true fpr_mask=0x00000000
