#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80464114(CpuContext* ctx);
extern "C" uint64_t func_80464114_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_8083E430(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r1_addr_0 = 0;
    uint32_t r1_addr_1 = 0;
    uint32_t r1_addr_2 = 0;
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    const uint32_t r15_entry = r15;
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
    uint32_t cr = ctx->cr;

    goto loc_8083E430;

loc_8083E430:
{
    MemoryInline::FlatWriteRam32((r1 + -288), r1);
    r1 = (r1 + -288);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 292), r0);
    r11 = (r1 + 288);
    // inline leaf 0x80457458 (18 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -68), 0, 68u, false, true);
    // end of inlined leaf 0x80457458
    r31 = r1;
    r30 = r3;
    r18 = r4;
    if (((cr & 0x02000000u) == 0)) {
        goto loc_8083E474;
    }
}

loc_8083E454:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r31 + 40), 0, 64u, false, true);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 0u, (r31 + 40), f1.d);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 8u, (r31 + 48), f2.d);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 16u, (r31 + 56), f3.d);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 24u, (r31 + 64), f4.d);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 32u, (r31 + 72), f5.d);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 40u, (r31 + 80), f6.d);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 48u, (r31 + 88), f7.d);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 56u, (r31 + 96), f8.d);
}

loc_8083E474:
{
    r11 = 0x80870000u;
    r12 = (r31 + 296);
    r15 = MemoryInline::FlatRead32((r11 + -32128));
    r0 = (r31 + 8);
    r11 = 50331648;
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 8), 0, 108u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r31 + 8), r3);
}

loc_8083E490:
{
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r31 + 12), r4);
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r31 + 16), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r31 + 20), r6);
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r31 + 24), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r31 + 28), r8);
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r31 + 32), r9);
    }
    MemoryInline::WriteResolved32(guest_range_2, 28u, (r31 + 36), r10);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_2, 96u, (r31 + 104), r11);
        MemoryInline::WriteResolved32(guest_range_2, 100u, (r31 + 108), r12);
    }
    MemoryInline::WriteResolved32(guest_range_2, 104u, (r31 + 112), r0);
    if ((static_cast<int32_t>(r15) == static_cast<int32_t>(0))) {
        goto loc_8083E4C0;
    }
}

loc_8083E4BC:
{
    goto loc_8083E4DC;
}

loc_8083E4C0:
{
    r3 = 0x80840000u;
    r0 = MemoryInline::FlatRead32(r1);
    r3 = MemoryInline::FlatRead32((r3 + 32028));
    r15 = (0 - r3);
    r15 = (r15 & -8);
    r1_addr_1 = (r1 + r15);
    MemoryInline::FlatWrite32(r1_addr_1, r0);
    r1 = r1_addr_1;
    r15 = (r1 + 8);
}

loc_8083E4DC:
{
    r4 = 0x80840000u;
    r3 = r15;
    r4 = MemoryInline::FlatRead32((r4 + 32028));
    r6 = (r31 + 104);
    ctx->lr = 0x8083E4F0u;
    if constexpr (KnownRegArgsCpuCall<0x80464114u>(&func_80464114)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        const auto regargs_result_80464114_197E = func_80464114_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80464114_197E);
        r4 = static_cast<uint32_t>(regargs_result_80464114_197E >> 32);
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x80464114u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    guest_range_4 = MemoryInline::ResolveRangeHost(r30, 0, 96u, true, false);
    r16 = MemoryInline::ReadResolved32(guest_range_4, 0u, r30);
    r4 = r18;
    r17 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r30 + 4));
    r5 = r15;
    r18 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r30 + 8));
    r6 = r3;
    r19 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r30 + 12));
    r3 = (r31 + 120);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r30 + 16));
            r21 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r30 + 20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 24u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r30 + 24));
            r23 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r30 + 28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 32u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r30 + 32));
            r25 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r30 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 40u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r30 + 40));
            r27 = MemoryInline::ReadResolved32(guest_range_4, 44u, (r30 + 44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 48u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_4, 48u, (r30 + 48));
            r29 = MemoryInline::ReadResolved32(guest_range_4, 52u, (r30 + 52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 56u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_4, 56u, (r30 + 56));
            r11 = MemoryInline::ReadResolved32(guest_range_4, 60u, (r30 + 60));
        }
    }
    r10 = MemoryInline::ReadResolved16(guest_range_4, 64u, (r30 + 64));
    r9 = MemoryInline::ReadResolved8(guest_range_4, 66u, (r30 + 66));
    r8 = MemoryInline::ReadResolved8(guest_range_4, 67u, (r30 + 67));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 68u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            r7 = resolved_pair.second;
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 68u, (r30 + 68));
            r7 = MemoryInline::ReadResolved32(guest_range_4, 72u, (r30 + 72));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 76u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 76u, (r30 + 76));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 80u, (r30 + 80));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 84u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_4, 84u, (r30 + 84));
            r15 = MemoryInline::ReadResolved32(guest_range_4, 88u, (r30 + 88));
        }
    }
    r30 = MemoryInline::ReadResolved32(guest_range_4, 92u, (r30 + 92));
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 120), 0, 96u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r31 + 120), r16);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r31 + 124), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r31 + 128), r18);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r31 + 132), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r31 + 136), r20);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r31 + 140), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r31 + 144), r22);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r31 + 148), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r31 + 152), r24);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r31 + 156), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r31 + 160), r26);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r31 + 164), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r31 + 168), r28);
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r31 + 172), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r31 + 176), r12);
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r31 + 180), r11);
    }
    MemoryInline::WriteResolved16(guest_range_1, 64u, (r31 + 184), static_cast<uint16_t>(r10));
    MemoryInline::WriteResolved8(guest_range_1, 66u, (r31 + 186), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_1, 67u, (r31 + 187), static_cast<uint8_t>(r8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 68u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, (r31 + 188), f2.d);
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r31 + 192), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 76u, (r31 + 196), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 80u, (r31 + 200), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_1, 84u, (r31 + 204), r0);
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r31 + 208), r15);
    }
    MemoryInline::WriteResolved32(guest_range_1, 92u, (r31 + 212), r30);
    ctx->lr = 0x8083E5D4u;
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
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    r3 = (r31 + 120);
    r4 = 0;
    ctx->lr = 0x8083E5E0u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    r10 = r31;
    r11 = (r10 + 288);
    // inline leaf 0x804574A4 (18 guest instruction(s))
    guest_range_5 = MemoryInline::ResolveRangeHost((r11 + -68), 0, 68u, true, false);
    // end of inlined leaf 0x804574A4
    r10 = MemoryInline::FlatRead32(r1);
    r0 = MemoryInline::FlatRead32((r10 + 4));
    r1 = r10;
    ctx->lr = r0;
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
    ctx->gpr[15] = r15_entry;
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

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00007FFF gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8083E430 func_8083E430 preserves=true fpr_mask=0x00000000
