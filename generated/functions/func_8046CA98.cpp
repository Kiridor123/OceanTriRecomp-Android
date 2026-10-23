#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8046CCC8(CpuContext* ctx);
extern "C" uint64_t func_8046CCC8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8046CA98_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_mtcrf_preserve_0 = 0;
    uint32_t r3_mtcrf_preserve_1 = 0;
    uint32_t r3_mtcrf_src_0 = 0;
    uint32_t r3_mtcrf_src_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8046CA98;

loc_8046CA98:
{
    ctx->srr0 = r2;
    ctx->srr1 = r4;
    // mfspr 275 unsupported @ 0x8046CAA0
    r4 = PPC_ReadSpr(275);
    r2 = cr;
    // mtspr 275 (privileged/OS register) @ 0x8046CAA8
    PPC_WriteSpr(275, r2);
    r2 = 0x806F0000u;
    r2 = (r2 | 38040);
    r2 = MemoryInline::FlatRead32((r2 + 140));
    r2 = (r2 | 32770);
    r2 = (r2 ^ 32770);
    // sync @ 0x8046CAC0 (no-op)
    ctx->msr = r2;
    // sync @ 0x8046CAC8 (no-op)
    r2 = 0x80790000u;
    r2 = (r2 | 29496);
    MemoryInline::FlatWriteRam16(r2, static_cast<uint16_t>(r3));
}

loc_8046CADC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1280))) {
        goto loc_8046CB60;
    }
}

loc_8046CAE0:
{
    r2 = 0x806F0000u;
    r2 = (r2 | 38208);
    r3 = ctx->lr;
    MemoryInline::FlatWriteRam32((r2 + 1068), r3);
    // inline leaf 0x804698E8 (1 guest instruction(s))
    // end of inlined leaf 0x804698E8
    r2 = 0x806F0000u;
    r2 = (r2 | 38208);
    r3 = MemoryInline::FlatRead32((r2 + 1068));
    ctx->lr = r3;
    r2 = 0x806F0000u;
    r2 = (r2 | 38040);
    r2 = MemoryInline::FlatRead32((r2 + 160));
    r2 = MemoryInline::FlatRead8(r2);
}

loc_8046CB18:
{
    if ((static_cast<int32_t>(r2) == static_cast<int32_t>(0))) {
        goto loc_8046CB44;
    }
}

loc_8046CB1C:
{
    r2 = 0x80610000u;
    r2 = (r2 | 208);
    r2 = MemoryInline::FlatRead8((r2 + 12));
}

loc_8046CB2C:
{
    if ((static_cast<int32_t>(r2) == static_cast<int32_t>(1))) {
        goto loc_8046CB44;
    }
}

loc_8046CB30:
{
    r2 = 0x806F0000u;
    r2 = (r2 | 38040);
    r3 = 1;
    MemoryInline::FlatWriteRam8((r2 + 156), static_cast<uint8_t>(r3));
    goto loc_8046CB60;
}

loc_8046CB44:
{
    r2 = 0x806F0000u;
    r2 = (r2 | 37872);
    r3 = MemoryInline::FlatRead32((r2 + 136));
    r3_mtcrf_src_0 = (r3 & -1);
    r3_mtcrf_preserve_0 = (cr & 0);
    cr = (r3_mtcrf_preserve_0 | r3_mtcrf_src_0);
    r3 = MemoryInline::FlatRead32((r2 + 12));
    r2 = MemoryInline::FlatRead32((r2 + 8));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[2] = r2;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[13] = r13;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8046CB60:
{
    r2 = 0x80790000u;
    r2 = (r2 | 29496);
    r3 = MemoryInline::FlatRead16(r2);
    r2 = 0x80610000u;
    r2 = (r2 | 208);
    r2 = MemoryInline::FlatRead8((r2 + 12));
}

loc_8046CB7C:
{
    if ((static_cast<int32_t>(r2) != static_cast<int32_t>(0))) {
        goto loc_8046CC2C;
    }
}

loc_8046CB80:
{
    r2 = 0x806F0000u;
    r2 = (r2 | 38208);
    guest_range_0 = MemoryInline::ResolveRangeHost(r2, 0, 764u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r1)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r2, r0);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r2 + 4), r1);
    }
    // mfspr 273 unsupported @ 0x8046CB90
    r0 = PPC_ReadSpr(273);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r2 + 8), r0);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 760u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 760u, (r2 + 760), r3);
        MemoryInline::WriteResolved16(guest_range_0, 762u, (r2 + 762), r3);
    }
    // mfspr 274 unsupported @ 0x8046CBA0
    r0 = PPC_ReadSpr(274);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r2 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r2 + 16), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r2 + 20), r5);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r2 + 24), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r2 + 28), r7);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r2 + 32), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r2 + 36), r9);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r2 + 40), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r2 + 44), r11);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r2 + 48), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r13)) << 32) | static_cast<uint32_t>(r14)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r2 + 52), r13);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r2 + 56), r14);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r15)) << 32) | static_cast<uint32_t>(r16)))) {
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r2 + 60), r15);
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r2 + 64), r16);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r2 + 68), r17);
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r2 + 72), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r2 + 76), r19);
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r2 + 80), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r2 + 84), r21);
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r2 + 88), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r2 + 92), r23);
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r2 + 96), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r2 + 100), r25);
        MemoryInline::WriteResolved32(guest_range_0, 104u, (r2 + 104), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 108u, (r2 + 108), r27);
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r2 + 112), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r2 + 116), r29);
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r2 + 120), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 124u, (r2 + 124), r31);
    r27 = ctx->srr0;
    r28 = ctx->lr;
    // mfspr 275 unsupported @ 0x8046CBB4
    r29 = PPC_ReadSpr(275);
    r30 = ctr;
    r31 = xer;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 128u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 128u, (r2 + 128), r27);
        MemoryInline::WriteResolved32(guest_range_0, 132u, (r2 + 132), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 136u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 136u, (r2 + 136), r29);
        MemoryInline::WriteResolved32(guest_range_0, 140u, (r2 + 140), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 144u, (r2 + 144), r31);
    ctx->gpr[1] = r1;
    ctx->gpr[2] = r2;
    ctx->gpr[15] = r15;
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->xer = xer;
    InvokeDirectCpu<0x8046A5C4u>(ctx);
    r2 = ctx->gpr[2];
    r15 = ctx->gpr[15];
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r2 = 0x80610000u;
    r2 = (r2 | 208);
    r3 = 1;
    MemoryInline::FlatWriteRam8((r2 + 12), static_cast<uint8_t>(r3));
    r2 = 0x806F0000u;
    r2 = (r2 | 38040);
    guest_range_1 = MemoryInline::ResolveRangeHost(r2, 0, 152u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 140u, (r2 + 140));
    // sync @ 0x8046CBE4 (no-op)
    ctx->msr = r0;
    // sync @ 0x8046CBEC (no-op)
    r0 = MemoryInline::ReadResolved32(guest_range_1, 128u, (r2 + 128));
    ctx->lr = r0;
    r0 = MemoryInline::ReadResolved32(guest_range_1, 132u, (r2 + 132));
    ctr = r0;
    r0 = MemoryInline::ReadResolved32(guest_range_1, 136u, (r2 + 136));
    xer = r0;
    r0 = MemoryInline::ReadResolved32(guest_range_1, 148u, (r2 + 148));
    // mtspr 18 (unknown SPR) @ 0x8046CC0C
    PPC_WriteSpr(18, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 144u, (r2 + 144));
    // mtspr 19 (unknown SPR) @ 0x8046CC14
    PPC_WriteSpr(19, r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 12u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r2 + 12));
            r4 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r2 + 16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 20u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r2 + 20));
            r6 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r2 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 28u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r2 + 28));
            r8 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r2 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 36u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r2 + 36));
            r10 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r2 + 40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 44u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r2 + 44));
            r12 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r2 + 48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 52u);
        if (resolved_pair.valid) {
            r13 = resolved_pair.first;
            r14 = resolved_pair.second;
        } else {
            r13 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r2 + 52));
            r14 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r2 + 56));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 60u);
        if (resolved_pair.valid) {
            r15 = resolved_pair.first;
            r16 = resolved_pair.second;
        } else {
            r15 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r2 + 60));
            r16 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r2 + 64));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 68u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_1, 68u, (r2 + 68));
            r18 = MemoryInline::ReadResolved32(guest_range_1, 72u, (r2 + 72));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 76u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_1, 76u, (r2 + 76));
            r20 = MemoryInline::ReadResolved32(guest_range_1, 80u, (r2 + 80));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 84u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_1, 84u, (r2 + 84));
            r22 = MemoryInline::ReadResolved32(guest_range_1, 88u, (r2 + 88));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 92u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 92u, (r2 + 92));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 96u, (r2 + 96));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 100u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 100u, (r2 + 100));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 104u, (r2 + 104));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 108u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 108u, (r2 + 108));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 112u, (r2 + 112));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 116u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 116u, (r2 + 116));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 120u, (r2 + 120));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 124u, (r2 + 124));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r1 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, r2);
            r1 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r2 + 4));
        }
    }
    r2 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r2 + 8));
    if constexpr (KnownRegArgsCpuCall<0x8046CCC8u>(&func_8046CCC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[2] = r2;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[13] = r13;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8046CCC8_50D7 = func_8046CCC8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8046CCC8_50D7);
        r4 = static_cast<uint32_t>(regargs_result_8046CCC8_50D7 >> 32);
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[2] = r2;
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
        ctx->gpr[13] = r13;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8046CCC8u>(ctx);
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[2] = r2;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[13] = r13;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8046CC2C:
{
    r2 = 0x80610000u;
    r2 = (r2 | 208);
    MemoryInline::FlatWriteRam16((r2 + 8), static_cast<uint16_t>(r3));
    r3 = ctx->srr0;
    MemoryInline::FlatWriteRam32(r2, r3);
    r3 = MemoryInline::FlatRead16((r2 + 8));
}

loc_8046CC48:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(512))) {
        goto loc_8046CC98;
    }
}

loc_8046CC4C:
{
}

loc_8046CC50:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(768))) {
        goto loc_8046CC98;
    }
}

loc_8046CC54:
{
}

loc_8046CC58:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1024))) {
        goto loc_8046CC98;
    }
}

loc_8046CC5C:
{
}

loc_8046CC60:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1536))) {
        goto loc_8046CC98;
    }
}

loc_8046CC64:
{
}

loc_8046CC68:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1792))) {
        goto loc_8046CC98;
    }
}

loc_8046CC6C:
{
}

loc_8046CC70:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2048))) {
        goto loc_8046CC98;
    }
}

loc_8046CC74:
{
}

loc_8046CC78:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4096))) {
        goto loc_8046CC98;
    }
}

loc_8046CC7C:
{
}

loc_8046CC80:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4352))) {
        goto loc_8046CC98;
    }
}

loc_8046CC84:
{
}

loc_8046CC88:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4608))) {
        goto loc_8046CC98;
    }
}

loc_8046CC8C:
{
}

loc_8046CC90:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4864))) {
        goto loc_8046CC98;
    }
}

loc_8046CC94:
{
    goto loc_8046CCA4;
}

loc_8046CC98:
{
    r3 = ctx->srr0;
    r3 = (r3 + 4);
    ctx->srr0 = r3;
}

loc_8046CCA4:
{
    r2 = 0x80610000u;
    r2 = (r2 | 208);
    r3 = 1;
    MemoryInline::FlatWriteRam8((r2 + 13), static_cast<uint8_t>(r3));
    // mfspr 275 unsupported @ 0x8046CCB4
    r3 = PPC_ReadSpr(275);
    r3_mtcrf_src_1 = (r3 & -1);
    r3_mtcrf_preserve_1 = (cr & 0);
    cr = (r3_mtcrf_preserve_1 | r3_mtcrf_src_1);
    // mfspr 273 unsupported @ 0x8046CCBC
    r2 = PPC_ReadSpr(273);
    // mfspr 274 unsupported @ 0x8046CCC0
    r3 = PPC_ReadSpr(274);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[2] = r2;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[13] = r13;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8046CA98(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8046CA98_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8046CA98 func_8046CA98 preserves=true fpr_mask=0x00000000
