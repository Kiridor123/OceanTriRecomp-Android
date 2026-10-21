#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8083EA00(CpuContext* MKW_RESTRICT ctx)
{
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
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
    const uint32_t r16_entry = r16;
    const uint32_t r17_entry = r17;
    const uint32_t r18_entry = r18;
    const uint32_t r19_entry = r19;
    const uint32_t r20_entry = r20;
    const uint32_t r21_entry = r21;
    const uint32_t r22_entry = r22;
    const uint32_t r23_entry = r23;
    const uint32_t r24_entry = r24;
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;

    MKW_GUEST_ENTER(0x8083EA00u);
    goto loc_8083EA00;

loc_8083EA00:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -192), 0, 200u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_3, 196u, (r1 + 196), r0);
    r11 = (r1 + 192);
    // inline leaf 0x8045745C (17 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, false, true);
    // end of inlined leaf 0x8045745C
    r6 = 0x80840000u;
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 96u, true, false);
    r16 = MemoryInline::ReadResolved32(guest_range_1, 0u, r3);
    f3.d = MemoryInline::FlatReadFloat32((r6 + 18816));
    r6 = r5;
    r17 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r3 + 4));
    r5 = r4;
    r18 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r3 + 8));
    r4 = (r1 + 8);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 12u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r3 + 12));
            r20 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r3 + 16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 20u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r3 + 20));
            r22 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r3 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 28u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r3 + 28));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r3 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 36u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r3 + 36));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r3 + 40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 44u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r3 + 44));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r3 + 48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 52u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r3 + 52));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r3 + 56));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r3 + 60));
    r12 = MemoryInline::ReadResolved16(guest_range_1, 64u, (r3 + 64));
    r11 = MemoryInline::ReadResolved8(guest_range_1, 66u, (r3 + 66));
    r10 = MemoryInline::ReadResolved8(guest_range_1, 67u, (r3 + 67));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 68u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            r9 = resolved_pair.second;
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 68u, (r3 + 68));
            r9 = MemoryInline::ReadResolved32(guest_range_1, 72u, (r3 + 72));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 76u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r3 + 76));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r3 + 80));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 84u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_1, 84u, (r3 + 84));
            r7 = MemoryInline::ReadResolved32(guest_range_1, 88u, (r3 + 88));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 92u, (r3 + 92));
    r3 = (r1 + 24);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r1 + 8), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r1 + 12), f3.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r1 + 16), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r1 + 20), f3.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r1 + 24), r16);
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r1 + 28), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_3, 32u, (r1 + 32), r18);
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r1 + 36), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r1 + 40), r20);
        MemoryInline::WriteResolved32(guest_range_3, 44u, (r1 + 44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_3, 48u, (r1 + 48), r22);
        MemoryInline::WriteResolved32(guest_range_3, 52u, (r1 + 52), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_3, 56u, (r1 + 56), r24);
        MemoryInline::WriteResolved32(guest_range_3, 60u, (r1 + 60), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_3, 64u, (r1 + 64), r26);
        MemoryInline::WriteResolved32(guest_range_3, 68u, (r1 + 68), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_3, 72u, (r1 + 72), r28);
        MemoryInline::WriteResolved32(guest_range_3, 76u, (r1 + 76), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_3, 80u, (r1 + 80), r30);
        MemoryInline::WriteResolved32(guest_range_3, 84u, (r1 + 84), r31);
    }
    MemoryInline::WriteResolved16(guest_range_3, 88u, (r1 + 88), static_cast<uint16_t>(r12));
    MemoryInline::WriteResolved8(guest_range_3, 90u, (r1 + 90), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_3, 91u, (r1 + 91), static_cast<uint8_t>(r10));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 92u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 92u, (r1 + 92), f2.d);
        MemoryInline::WriteResolved32(guest_range_3, 96u, (r1 + 96), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 100u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 100u, (r1 + 100), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 104u, (r1 + 104), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_3, 108u, (r1 + 108), r8);
        MemoryInline::WriteResolved32(guest_range_3, 112u, (r1 + 112), r7);
    }
    MemoryInline::WriteResolved32(guest_range_3, 116u, (r1 + 116), r0);
    ctx->lr = 0x8083EB10u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x8083FB90u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r3 = (r1 + 24);
    r4 = 0;
    ctx->lr = 0x8083EB1Cu;
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
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x80837230u>(ctx);
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
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r11 = (r1 + 192);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    // inline leaf 0x804574A8 (17 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, true, false);
    // end of inlined leaf 0x804574A8
    r0 = MemoryInline::FlatRead32((r1 + 196));
    ctx->lr = r0;
    r1 = (r1 + 192);
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->gpr[16] = r16_entry;
    ctx->gpr[17] = r17_entry;
    ctx->gpr[18] = r18_entry;
    ctx->gpr[19] = r19_entry;
    ctx->gpr[20] = r20_entry;
    ctx->gpr[21] = r21_entry;
    ctx->gpr[22] = r22_entry;
    ctx->gpr[23] = r23_entry;
    ctx->gpr[24] = r24_entry;
    ctx->gpr[25] = r25_entry;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000203E gpr_write=0x0000FFFF gpr_return=0x00000018 fpr_read=0xF0003FF0 fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8083EA00 func_8083EA00 preserves=true fpr_mask=0x00000000
