#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B7280(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
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
    uint32_t r12 = ctx->gpr[12];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804B7280u);
    goto loc_804B7280;

loc_804B7280:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
}

loc_804B7298:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 65534);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r7 = (r7_rot_0 & 65534);
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r4))) {
        goto loc_804B731C;
    }
}

loc_804B72A4:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 60u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 0u, r3);
            r23 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r3 + 4));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r3 + 8));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r3 + 12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r3 + 16));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r3 + 20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r3 + 24));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r3 + 28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r3 + 32));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r3 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r3 + 40));
            r11 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r3 + 44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r10 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r10 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r3 + 48));
            r9 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r3 + 52));
        }
    }
    r8 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r3 + 56));
    guest_range_3 = MemoryInline::ResolveRangeHost(r4, 0, 60u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_3, 0u, r4, r22);
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r4 + 4), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r4 + 8), r24);
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r4 + 12), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r4 + 16), r26);
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r4 + 20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r4 + 24), r28);
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r4 + 28), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_3, 32u, (r4 + 32), r30);
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r4 + 36), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r4 + 40), r12);
        MemoryInline::WriteResolved32(guest_range_3, 44u, (r4 + 44), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_3, 48u, (r4 + 48), r10);
        MemoryInline::WriteResolved32(guest_range_3, 52u, (r4 + 52), r9);
    }
    MemoryInline::WriteResolved32(guest_range_3, 56u, (r4 + 56), r8);
}

loc_804B731C:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 24u, true, false);
    r22 = MemoryInline::ReadResolved16(guest_range_2, 6u, (r3 + 6));
    r8 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r3 + 20));
    r10 = (r7 * r22);
    r11 = MemoryInline::ReadResolved16(guest_range_2, 4u, (r3 + 4));
    r9 = MemoryInline::ReadResolved16(guest_range_2, 8u, (r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_804B7334:
{
    r11 = (r11 - r0);
    r12 = MemoryInline::ReadResolved32(guest_range_2, 0u, r3);
    r8 = PPC_Divwu(static_cast<uint32_t>(r10), static_cast<uint32_t>(r9));
    guest_range_4 = MemoryInline::ResolveRangeHost((r4 + 4), 0, 14u, false, true);
    MemoryInline::WriteResolved16(guest_range_4, 0u, (r4 + 4), static_cast<uint16_t>(r11));
    r10 = (r12 & 3);
    r8 = (r22 - r8);
    MemoryInline::WriteResolved16(guest_range_4, 2u, (r4 + 6), static_cast<uint16_t>(r8));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804B736C;
    }
}

loc_804B7354:
{
}

loc_804B7358:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_804B736C;
    }
}

loc_804B735C:
{
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(31));
    r8 = (r8_rot_0 & 32767);
    r8 = (r9 - r8);
    MemoryInline::WriteResolved16(guest_range_4, 4u, (r4 + 8), static_cast<uint16_t>(r8));
    goto loc_804B7378;
}

loc_804B736C:
{
    r8 = MemoryInline::ReadResolved16(guest_range_2, 8u, (r3 + 8));
    r8 = (r8 - r7);
    MemoryInline::WriteResolved16(guest_range_4, 4u, (r4 + 8), static_cast<uint16_t>(r8));
}

loc_804B7378:
{
    r8 = MemoryInline::ReadResolved16(guest_range_2, 14u, (r3 + 14));
}

loc_804B7380:
{
    r0 = (r8 - r0);
    MemoryInline::WriteResolved16(guest_range_4, 10u, (r4 + 14), static_cast<uint16_t>(r0));
    if ((static_cast<uint32_t>(r10) != static_cast<uint32_t>(1))) {
        goto loc_804B73A0;
    }
}

loc_804B738C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_2, 16u, (r3 + 16));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_1 & 131070);
    r0 = (r0 - r7);
    MemoryInline::WriteResolved16(guest_range_4, 12u, (r4 + 16), static_cast<uint16_t>(r0));
    goto loc_804B73AC;
}

loc_804B73A0:
{
    r0 = MemoryInline::ReadResolved16(guest_range_2, 16u, (r3 + 16));
    r0 = (r0 - r7);
    MemoryInline::WriteResolved16(guest_range_4, 12u, (r4 + 16), static_cast<uint16_t>(r0));
}

loc_804B73AC:
{
    r0 = MemoryInline::ReadResolved16(guest_range_2, 12u, (r3 + 12));
    r11 = (r1 + 48);
    r7 = MemoryInline::ReadResolved16(guest_range_2, 10u, (r3 + 10));
    r0 = (r0 + r6);
    MemoryInline::WriteResolved16(guest_range_4, 8u, (r4 + 12), static_cast<uint16_t>(r0));
    r3 = (r7 + r5);
    MemoryInline::WriteResolved16(guest_range_4, 6u, (r4 + 10), static_cast<uint16_t>(r3));
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_5 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001F8B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B7280 func_804B7280 preserves=true fpr_mask=0x00000000
