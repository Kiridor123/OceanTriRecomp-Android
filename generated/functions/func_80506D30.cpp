#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80502EA8(CpuContext* ctx);
extern "C" uint32_t func_80502EA8_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_80506D30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r5_addze_src_0 = 0;
    uint32_t r5_addze_src_1 = 0;
    uint32_t r5_addze_src_2 = 0;
    uint32_t r5_ca_0 = 0;
    uint32_t r5_ca_1 = 0;
    uint32_t r5_ca_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80506D30u);
    goto loc_80506D30;

loc_80506D30:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r27 = r3;
    r28 = r6;
    r29 = r7;
}

loc_80506D58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80506D64;
    }
}

loc_80506D5C:
{
    r3 = 0;
    goto loc_80506FE4;
}

loc_80506D64:
{
    r8 = 715849728;
    r30 = 24;
    r11 = (r8 + -21845);
    r9 = 3;
    r10 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r11)) * static_cast<int64_t>(static_cast<int32_t>(r6))) >> 32));
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -13984), 0, 48u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r13 + -13980), r5);
    r31 = 0;
    r8 = 100;
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r13 + -13984), r4);
    r0 = 1;
    r5 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r11)) * static_cast<int64_t>(static_cast<int32_t>(r7))) >> 32));
    r10 = (static_cast<int32_t>(r10) >> 2);
    r4 = 0x80760000u;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r13 + -13976), r30);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r7 = (r7_rot_1 & 1);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r13 + -13972), r30);
    r11 = (r10 + r7);
    r7 = (static_cast<int32_t>(r5) >> 2);
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r10 = (r10_rot_1 & 1);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r6);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r5 = (static_cast<int32_t>(r6) >> 3);
    r7 = (r7 + r10);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r13 + -13968), r31);
    r6 = (r11 * r7);
    r5_addze_src_1 = r5;
    r5_ca_1 = (xer >> 29) & 1u;
    r5 = (r5_addze_src_1 + r5_ca_1);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r13 + -13964), r11);
    r4 = (r4 + 13200);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r13 + -13960), r7);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r13 + -13952), r9);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r13 + -13956), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r13 + -13948), r9);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r13 + -13944), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r13 + -13940), r8);
    MemoryInline::FlatWrite16((r13 + -19504), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r3 + 16), r4);
    MemoryInline::FlatWrite8((r3 + 20), static_cast<uint8_t>(r31));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x80506E00u;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite8((r27 + 21), static_cast<uint8_t>(r3));
    r3 = r27;
    r12 = MemoryInline::FlatRead32(r27);
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x80506E18u;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite8((r27 + 22), static_cast<uint8_t>(r3));
    r3 = 65536;
    guest_range_1 = MemoryInline::ResolveRangeHost(r27, 0, 20u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r27 + 16));
    r5 = 2;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r6 = (r3 + -32448);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r5));
    r5 = (r3 + -26510);
    r0 = (r0 + r28);
    r4 = 32;
    r3 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r27 + 16));
    r0 = (static_cast<int32_t>(r0) >> 1);
    r7 = (r0 * r29);
    r12 = 28;
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r6));
    r11 = 131072;
    r10 = 21;
    r3 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r27 + 16));
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r5));
    r9 = 48;
    r8 = 3840;
    r6 = 85;
    r3 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r27 + 16));
    r5 = 170;
    r0 = 255;
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r4));
    r3 = r27;
    r4 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r27 + 16));
    MemoryInline::FlatWrite16((r4 + 8), static_cast<uint16_t>(r30));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r27 + 16));
    MemoryInline::FlatWrite16((r4 + 10), static_cast<uint16_t>(r31));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r27 + 16));
    MemoryInline::FlatWrite16((r4 + 12), static_cast<uint16_t>(r30));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r27 + 16));
    MemoryInline::FlatWrite16((r4 + 14), static_cast<uint16_t>(r12));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r27 + 16));
    MemoryInline::FlatWrite16((r4 + 16), static_cast<uint16_t>(r30));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r27 + 16));
    MemoryInline::FlatWrite16((r4 + 18), static_cast<uint16_t>(r30));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r27 + 16));
    MemoryInline::FlatWrite32((r4 + 20), r11);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r27 + 16));
    MemoryInline::FlatWrite16((r4 + 24), static_cast<uint16_t>(r31));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r27 + 16));
    MemoryInline::FlatWrite16((r4 + 26), static_cast<uint16_t>(r10));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r27 + 16));
    MemoryInline::FlatWrite16((r4 + 28), static_cast<uint16_t>(r10));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r27 + 16));
    MemoryInline::FlatWrite16((r4 + 30), static_cast<uint16_t>(r28));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r27 + 16));
    MemoryInline::FlatWrite16((r4 + 32), static_cast<uint16_t>(r29));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r27 + 16));
    MemoryInline::FlatWrite16((r4 + 34), static_cast<uint16_t>(r9));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r27 + 16));
    MemoryInline::FlatWrite16((r4 + 32), static_cast<uint16_t>(r29));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r27 + 16));
    MemoryInline::FlatWrite32((r4 + 36), r8);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r27 + 16));
    MemoryInline::FlatWrite32((r4 + 40), r7);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r27 + 16));
    MemoryInline::FlatWrite8((r4 + 44), static_cast<uint8_t>(r31));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r27 + 16));
    MemoryInline::FlatWrite8((r4 + 45), static_cast<uint8_t>(r6));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r27 + 16));
    MemoryInline::FlatWrite8((r4 + 46), static_cast<uint8_t>(r5));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r27 + 16));
    MemoryInline::FlatWrite8((r4 + 47), static_cast<uint8_t>(r0));
    r12 = MemoryInline::ReadResolved32(guest_range_1, 0u, r27);
    r12 = MemoryInline::FlatRead32((r12 + 88));
    ctr = r12;
    ctx->lr = 0x80506F34u;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    r3 = r27;
    if constexpr (KnownRegArgsCpuCall<0x80502EA8u>(&func_80502EA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_80502EA8_2D32 = func_80502EA8_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80502EA8_2D32;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x80502EA8u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 0x80760000u;
    r0 = 8;
    r3 = (r3 + 12688);
    ctr = r0;
}

loc_80506F50:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 64u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_2, 0u, r3, r31);
        MemoryInline::WriteResolved16(guest_range_2, 2u, (r3 + 2), r31);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_2, 4u, (r3 + 4), r31);
        MemoryInline::WriteResolved16(guest_range_2, 6u, (r3 + 6), r31);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_2, 8u, (r3 + 8), r31);
        MemoryInline::WriteResolved16(guest_range_2, 10u, (r3 + 10), r31);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_2, 12u, (r3 + 12), r31);
        MemoryInline::WriteResolved16(guest_range_2, 14u, (r3 + 14), r31);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_2, 16u, (r3 + 16), r31);
        MemoryInline::WriteResolved16(guest_range_2, 18u, (r3 + 18), r31);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_2, 20u, (r3 + 20), r31);
        MemoryInline::WriteResolved16(guest_range_2, 22u, (r3 + 22), r31);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_2, 24u, (r3 + 24), r31);
        MemoryInline::WriteResolved16(guest_range_2, 26u, (r3 + 26), r31);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_2, 28u, (r3 + 28), r31);
        MemoryInline::WriteResolved16(guest_range_2, 30u, (r3 + 30), r31);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_2, 32u, (r3 + 32), r31);
        MemoryInline::WriteResolved16(guest_range_2, 34u, (r3 + 34), r31);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 36u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_2, 36u, (r3 + 36), r31);
        MemoryInline::WriteResolved16(guest_range_2, 38u, (r3 + 38), r31);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 40u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_2, 40u, (r3 + 40), r31);
        MemoryInline::WriteResolved16(guest_range_2, 42u, (r3 + 42), r31);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 44u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_2, 44u, (r3 + 44), r31);
        MemoryInline::WriteResolved16(guest_range_2, 46u, (r3 + 46), r31);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 48u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_2, 48u, (r3 + 48), r31);
        MemoryInline::WriteResolved16(guest_range_2, 50u, (r3 + 50), r31);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 52u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_2, 52u, (r3 + 52), r31);
        MemoryInline::WriteResolved16(guest_range_2, 54u, (r3 + 54), r31);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 56u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_2, 56u, (r3 + 56), r31);
        MemoryInline::WriteResolved16(guest_range_2, 58u, (r3 + 58), r31);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 60u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_2, 60u, (r3 + 60), r31);
        MemoryInline::WriteResolved16(guest_range_2, 62u, (r3 + 62), r31);
    }
    r3 = (r3 + 64);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80506F50;
    }
}

loc_80506FD8:
{
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_80506FE4:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
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
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80506D30 func_80506D30 preserves=true fpr_mask=0x00000000
