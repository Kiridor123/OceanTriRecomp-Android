#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80560354_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
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

    goto loc_80560354;

loc_80560354:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    r11 = (r1 + 144);
    // inline leaf 0x80457454 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    // end of inlined leaf 0x80457454
    r3 = 0x80650000u;
    r17 = (r3 + 31912);
    r16 = MemoryInline::FlatRead32((r3 + 31912));
    guest_range_1 = MemoryInline::ResolveRangeHost((r17 + 4), 0, 156u, true, false);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r17 + 52));
    r3 = 0x80650000u;
    r19 = (r3 + 32560);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r17 + 48));
    MemoryInline::FlatWriteRam32((r1 + 56), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 128u, (r17 + 132));
    guest_range_2 = MemoryInline::ResolveRangeHost((r19 + 4), 0, 308u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 188u, (r19 + 192), r0);
    r0 = MemoryInline::FlatRead32((r1 + 56));
    MemoryInline::FlatWriteRam32((r1 + 8), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r17 + 56));
    MemoryInline::WriteResolved32(guest_range_2, 204u, (r19 + 208), r0);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 12), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 132u, (r17 + 136));
    MemoryInline::WriteResolved32(guest_range_2, 208u, (r19 + 212), r0);
    r0 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWriteRam32((r1 + 16), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r17 + 60));
    MemoryInline::WriteResolved32(guest_range_2, 220u, (r19 + 224), r0);
    r0 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 20), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 136u, (r17 + 140));
    MemoryInline::WriteResolved32(guest_range_2, 224u, (r19 + 228), r0);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWriteRam32((r1 + 24), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r17 + 64));
    MemoryInline::WriteResolved32(guest_range_2, 236u, (r19 + 240), r0);
    r0 = MemoryInline::FlatRead32((r1 + 24));
    MemoryInline::FlatWriteRam32((r1 + 28), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 140u, (r17 + 144));
    MemoryInline::WriteResolved32(guest_range_2, 240u, (r19 + 244), r0);
    r0 = MemoryInline::FlatRead32((r1 + 28));
    MemoryInline::FlatWriteRam32((r1 + 32), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r17 + 68));
    MemoryInline::WriteResolved32(guest_range_2, 252u, (r19 + 256), r0);
    r0 = MemoryInline::FlatRead32((r1 + 32));
    MemoryInline::FlatWriteRam32((r1 + 36), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 144u, (r17 + 148));
    MemoryInline::WriteResolved32(guest_range_2, 256u, (r19 + 260), r0);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    MemoryInline::FlatWriteRam32((r1 + 40), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 68u, (r17 + 72));
    MemoryInline::WriteResolved32(guest_range_2, 268u, (r19 + 272), r0);
    r0 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 44), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 148u, (r17 + 152));
    MemoryInline::WriteResolved32(guest_range_2, 272u, (r19 + 276), r0);
    r0 = MemoryInline::FlatRead32((r1 + 44));
    MemoryInline::FlatWriteRam32((r1 + 48), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 72u, (r17 + 76));
    MemoryInline::WriteResolved32(guest_range_2, 284u, (r19 + 288), r0);
    r0 = MemoryInline::FlatRead32((r1 + 48));
    MemoryInline::FlatWriteRam32((r1 + 52), r15);
    r15 = 0x80650000u;
    r18 = MemoryInline::ReadResolved32(guest_range_1, 76u, (r17 + 80));
    r20 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r17 + 4));
    r21 = MemoryInline::ReadResolved32(guest_range_1, 80u, (r17 + 84));
    r22 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r17 + 8));
    r23 = MemoryInline::ReadResolved32(guest_range_1, 84u, (r17 + 88));
    r24 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r17 + 12));
    r25 = MemoryInline::ReadResolved32(guest_range_1, 88u, (r17 + 92));
    r26 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r17 + 16));
    r27 = MemoryInline::ReadResolved32(guest_range_1, 92u, (r17 + 96));
    r28 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r17 + 20));
    r29 = MemoryInline::ReadResolved32(guest_range_1, 96u, (r17 + 100));
    r30 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r17 + 24));
    r31 = MemoryInline::ReadResolved32(guest_range_1, 100u, (r17 + 104));
    r12 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r17 + 28));
    r11 = MemoryInline::ReadResolved32(guest_range_1, 104u, (r17 + 108));
    r10 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r17 + 32));
    r9 = MemoryInline::ReadResolved32(guest_range_1, 108u, (r17 + 112));
    r8 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r17 + 36));
    r7 = MemoryInline::ReadResolved32(guest_range_1, 112u, (r17 + 116));
    r6 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r17 + 40));
    r5 = MemoryInline::ReadResolved32(guest_range_1, 116u, (r17 + 120));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r17 + 44));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 120u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r14 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 120u, (r17 + 124));
            r14 = MemoryInline::ReadResolved32(guest_range_1, 124u, (r17 + 128));
        }
    }
    r17 = MemoryInline::ReadResolved32(guest_range_1, 152u, (r17 + 156));
    MemoryInline::WriteResolved32(guest_range_2, 288u, (r19 + 292), r0);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    MemoryInline::FlatWriteRam32((r15 + 32560), r16);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r19 + 4), r18);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r19 + 16), r20);
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r19 + 20), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r19 + 32), r22);
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r19 + 36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_2, 44u, (r19 + 48), r24);
        MemoryInline::WriteResolved32(guest_range_2, 48u, (r19 + 52), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_2, 60u, (r19 + 64), r26);
        MemoryInline::WriteResolved32(guest_range_2, 64u, (r19 + 68), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 76u, (r19 + 80), r28);
        MemoryInline::WriteResolved32(guest_range_2, 80u, (r19 + 84), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_2, 92u, (r19 + 96), r30);
        MemoryInline::WriteResolved32(guest_range_2, 96u, (r19 + 100), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_2, 108u, (r19 + 112), r12);
        MemoryInline::WriteResolved32(guest_range_2, 112u, (r19 + 116), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 124u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_2, 124u, (r19 + 128), r10);
        MemoryInline::WriteResolved32(guest_range_2, 128u, (r19 + 132), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 140u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_2, 140u, (r19 + 144), r8);
        MemoryInline::WriteResolved32(guest_range_2, 144u, (r19 + 148), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 156u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_2, 156u, (r19 + 160), r6);
        MemoryInline::WriteResolved32(guest_range_2, 160u, (r19 + 164), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 172u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 172u, (r19 + 176), r4);
        MemoryInline::WriteResolved32(guest_range_2, 176u, (r19 + 180), r3);
    }
    MemoryInline::WriteResolved32(guest_range_2, 192u, (r19 + 196), r14);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 300u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_2, 300u, (r19 + 304), r0);
        MemoryInline::WriteResolved32(guest_range_2, 304u, (r19 + 308), r17);
    }
    r11 = (r1 + 144);
    // inline leaf 0x804574A0 (19 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    // end of inlined leaf 0x804574A0
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80560354(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80560354_ra0_0_18_0(ctx);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000002 gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80560354 func_80560354 preserves=true fpr_mask=0x00000000
