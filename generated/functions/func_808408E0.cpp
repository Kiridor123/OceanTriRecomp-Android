#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808408E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lhax_80840868_loc_0 = 0;
    uint32_t addr_lhax_80840878_loc_0 = 0;
    uint32_t addr_lhax_80840890_loc_0 = 0;
    uint32_t addr_lhax_80840898_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_808408E0;

loc_808408E0:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r27 = 0x80870000u;
    r27 = (r27 + -32112);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8046EB60u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80840904:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80840AC8;
    }
}

loc_80840908:
{
    r0 = MemoryInline::FlatRead32((r27 + 1720));
}

loc_80840910:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80840AC8;
    }
}

loc_80840914:
{
    r5 = (r27 + 0);
    r3 = -1;
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 16u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r5, static_cast<uint8_t>(r3));
    r0 = 2;
    r4 = (r27 + 16);
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r5 + 1), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r5 + 2), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r5 + 3), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r5 + 4), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r5 + 5), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r5 + 6), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r5 + 7), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r5 + 8), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r5 + 9), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r5 + 10), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r5 + 11), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r5 + 12), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r5 + 13), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r5 + 14), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r5 + 15), static_cast<uint8_t>(r3));
    ctr = r0;
}

loc_80840968:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 48u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r4, static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r4 + 1), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r4 + 2), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r4 + 3), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r4 + 4), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r4 + 5), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r4 + 6), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r4 + 7), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r4 + 8), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r4 + 9), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r4 + 10), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r4 + 11), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r4 + 12), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r4 + 13), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r4 + 14), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r4 + 15), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r4 + 16), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 17u, (r4 + 17), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r4 + 18), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 19u, (r4 + 19), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r4 + 20), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r4 + 21), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 22u, (r4 + 22), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 23u, (r4 + 23), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 24u, (r4 + 24), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 25u, (r4 + 25), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 26u, (r4 + 26), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 27u, (r4 + 27), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 28u, (r4 + 28), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 29u, (r4 + 29), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 30u, (r4 + 30), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 31u, (r4 + 31), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 32u, (r4 + 32), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 33u, (r4 + 33), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 34u, (r4 + 34), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 35u, (r4 + 35), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 36u, (r4 + 36), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 37u, (r4 + 37), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 38u, (r4 + 38), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 39u, (r4 + 39), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 40u, (r4 + 40), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 41u, (r4 + 41), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 42u, (r4 + 42), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 43u, (r4 + 43), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 44u, (r4 + 44), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 45u, (r4 + 45), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 46u, (r4 + 46), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 47u, (r4 + 47), static_cast<uint8_t>(r3));
    r4 = (r4 + 48);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80840968;
    }
}

loc_80840A30:
{
    r0 = (r27 + 120);
    MemoryInline::FlatWriteRam32((r27 + 116), r0);
    r25 = 0;
    r26 = 0;
    r28 = 0;
    r29 = 1342177280;
    r30 = -960;
    r31 = 64;
}

loc_80840A50:
{
    r3 = MemoryInline::FlatRead32((r27 + 116));
    r3_addr_2 = (r3 + r26);
    MemoryInline::FlatWrite32(r3_addr_2, r28);
    r0 = MemoryInline::FlatRead32((r27 + 116));
    r3 = (r0 + r26);
    guest_range_3 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 94u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_3, 0u, (r3 + 4), r29);
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r3 + 8), r28);
    }
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r3 + 12), r30);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r3 + 20), r28);
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r3 + 16), r31);
    }
    MemoryInline::WriteResolved16(guest_range_3, 92u, (r3 + 96), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved16(guest_range_3, 88u, (r3 + 92), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved16(guest_range_3, 84u, (r3 + 88), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved16(guest_range_3, 80u, (r3 + 84), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved16(guest_range_3, 76u, (r3 + 80), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved16(guest_range_3, 72u, (r3 + 76), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved16(guest_range_3, 68u, (r3 + 72), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved16(guest_range_3, 64u, (r3 + 68), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved16(guest_range_3, 60u, (r3 + 64), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved16(guest_range_3, 56u, (r3 + 60), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved16(guest_range_3, 52u, (r3 + 56), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved16(guest_range_3, 48u, (r3 + 52), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved16(guest_range_3, 44u, (r3 + 48), static_cast<uint16_t>(r28));
    // inline leaf 0x80840840 (40 guest instruction(s))
}

loc_inl1_0x80840840:
{
    r4 = 0x80870000u;
    r6 = 0x80840000u;
    r0 = MemoryInline::FlatRead32((r4 + -32000));
    r6 = (r6 + 32032);
    r5 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_inl1_0x80840858:
{
    r4 = (127 - r5);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl1_0x808408A4;
    }
}

loc_inl1_0x80840860:
{
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r8 = (r8_rot_2 & -2);
    r5 = (r6 + 2448);
    addr_lhax_80840868_loc_0 = (r5 + r8);
    r0 = MemoryInline::FlatRead16(addr_lhax_80840868_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r7 = (r7_rot_2 & -2);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    r4 = (r6 + 2704);
    addr_lhax_80840878_loc_0 = (r5 + r7);
    r0 = MemoryInline::FlatRead16(addr_lhax_80840878_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 28), r0);
    r0 = MemoryInline::FlatRead16((r6 + 2448));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    r0 = MemoryInline::FlatRead16((r5 + 254));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 36), r0);
    addr_lhax_80840890_loc_0 = (r4 + r7);
    r0 = MemoryInline::FlatRead16(addr_lhax_80840890_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 40), r0);
    addr_lhax_80840898_loc_0 = (r4 + r8);
    r0 = MemoryInline::FlatRead16(addr_lhax_80840898_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 44), r0);
    goto loc_inl1_cont_80840840;
}

loc_inl1_0x808408A4:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r5 = (r6 + 1936);
    r5_addr_2 = (r5 + r0);
    r0 = MemoryInline::FlatRead32(r5_addr_2);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_2 & -4);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    r0 = 0;
    r5_addr_3 = (r5 + r4);
    r4 = MemoryInline::FlatRead32(r5_addr_3);
    MemoryInline::FlatWrite32((r3 + 28), r4);
    r4 = MemoryInline::FlatRead32((r6 + 1936));
    MemoryInline::FlatWrite32((r3 + 32), r4);
    r4 = MemoryInline::FlatRead32((r5 + 508));
    MemoryInline::FlatWrite32((r3 + 36), r4);
    MemoryInline::FlatWrite32((r3 + 40), r0);
    MemoryInline::FlatWrite32((r3 + 44), r0);
}

loc_inl1_cont_80840840:
{
    // end of inlined leaf 0x80840840
    r25 = (r25 + 1);
    r26 = (r26 + 100);
}

loc_80840AB8:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(16))) {
        goto loc_80840A50;
    }
}

loc_80840ABC:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r27 + 112), r0);
    MemoryInline::FlatWriteRam32((r27 + 1720), r0);
}

loc_80840AC8:
{
    r11 = (r1 + 48);
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
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x808408E0 func_808408E0 preserves=true fpr_mask=0x00000000
