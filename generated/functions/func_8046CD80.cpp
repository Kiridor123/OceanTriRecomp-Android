#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8046CCC8(CpuContext* ctx);
extern "C" uint64_t func_8046CCC8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8046CD80_ra70_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4, uint32_t arg_r5, uint32_t arg_r6, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r29_mtcrf_preserve_0 = 0;
    uint32_t r29_mtcrf_src_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = arg_r6;
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

    MKW_GUEST_ENTER(0x8046CD80u);
    goto loc_8046CD80;

loc_8046CD80:
{
    r3 = 0x806F0000u;
    r3 = (r3 | 38040);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 152u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r1)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r1);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r2)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r2);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r4);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r6);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r8);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r10);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 44), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r13)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 48), r12);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 52), r13);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r14)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 56), r14);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r3 + 60), r15);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r3 + 64), r16);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r3 + 68), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r3 + 72), r18);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r3 + 76), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r3 + 80), r20);
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r3 + 84), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r3 + 88), r22);
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r3 + 92), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r3 + 96), r24);
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r3 + 100), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 104u, (r3 + 104), r26);
        MemoryInline::WriteResolved32(guest_range_0, 108u, (r3 + 108), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r3 + 112), r28);
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r3 + 116), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r3 + 120), r30);
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r3 + 124), r31);
    }
    r0 = ctx->msr;
    MemoryInline::WriteResolved32(guest_range_0, 140u, (r3 + 140), r0);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 128u, (r3 + 128), r0);
    r0 = ctr;
    MemoryInline::WriteResolved32(guest_range_0, 132u, (r3 + 132), r0);
    r0 = xer;
    MemoryInline::WriteResolved32(guest_range_0, 136u, (r3 + 136), r0);
    // mfspr 18 unsupported @ 0x8046CDAC
    r0 = PPC_ReadSpr(18);
    MemoryInline::WriteResolved32(guest_range_0, 148u, (r3 + 148), r0);
    // mfspr 19 unsupported @ 0x8046CDB4
    r0 = PPC_ReadSpr(19);
    MemoryInline::WriteResolved32(guest_range_0, 144u, (r3 + 144), r0);
    r1 = -32766;
    r1 = ~(r1 | r1);
    r3 = ctx->msr;
    r3 = (r3 & r1);
    ctx->msr = r3;
    r2 = 0x806F0000u;
    r2 = (r2 | 38040);
    r2 = MemoryInline::FlatRead32((r2 + 160));
    r2 = MemoryInline::FlatRead8(r2);
}

loc_8046CDE4:
{
    if ((static_cast<int32_t>(r2) == static_cast<int32_t>(0))) {
        goto loc_8046CDFC;
    }
}

loc_8046CDE8:
{
    r2 = 0x806F0000u;
    r2 = (r2 | 38040);
    r3 = 1;
    MemoryInline::FlatWriteRam8((r2 + 156), static_cast<uint8_t>(r3));
    goto loc_8046CE44;
}

loc_8046CDFC:
{
    r2 = 0x80610000u;
    r2 = (r2 | 208);
    r3 = 0;
    MemoryInline::FlatWriteRam8((r2 + 12), static_cast<uint8_t>(r3));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[2] = r2;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8046A788u>(ctx);
    r0 = ctx->gpr[0];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r14 = ctx->gpr[14];
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
    cr = ctx->cr;
    r2 = 0x806F0000u;
    r2 = (r2 | 38208);
    guest_range_1 = MemoryInline::ResolveRangeHost(r2, 0, 148u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 128u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 128u, (r2 + 128));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 132u, (r2 + 132));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 136u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 136u, (r2 + 136));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 140u, (r2 + 140));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 144u, (r2 + 144));
    ctx->srr0 = r27;
    ctx->lr = r28;
    r29_mtcrf_src_0 = (r29 & -1);
    r29_mtcrf_preserve_0 = (cr & 0);
    cr = (r29_mtcrf_preserve_0 | r29_mtcrf_src_0);
    ctr = r30;
    xer = r31;
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

loc_8046CE44:
{
    r2 = 0x806F0000u;
    r2 = (r2 | 38040);
    guest_range_2 = MemoryInline::ResolveRangeHost(r2, 0, 152u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 140u, (r2 + 140));
    // sync @ 0x8046CE50 (no-op)
    ctx->msr = r0;
    // sync @ 0x8046CE58 (no-op)
    r0 = MemoryInline::ReadResolved32(guest_range_2, 128u, (r2 + 128));
    ctx->lr = r0;
    r0 = MemoryInline::ReadResolved32(guest_range_2, 132u, (r2 + 132));
    ctr = r0;
    r0 = MemoryInline::ReadResolved32(guest_range_2, 136u, (r2 + 136));
    xer = r0;
    r0 = MemoryInline::ReadResolved32(guest_range_2, 148u, (r2 + 148));
    // mtspr 18 (unknown SPR) @ 0x8046CE78
    PPC_WriteSpr(18, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 144u, (r2 + 144));
    // mtspr 19 (unknown SPR) @ 0x8046CE80
    PPC_WriteSpr(19, r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 12u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r2 + 12));
            r4 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r2 + 16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 20u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r2 + 20));
            r6 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r2 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 28u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r2 + 28));
            r8 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r2 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 36u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r2 + 36));
            r10 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r2 + 40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 44u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r2 + 44));
            r12 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r2 + 48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 52u);
        if (resolved_pair.valid) {
            r13 = resolved_pair.first;
            r14 = resolved_pair.second;
        } else {
            r13 = MemoryInline::ReadResolved32(guest_range_2, 52u, (r2 + 52));
            r14 = MemoryInline::ReadResolved32(guest_range_2, 56u, (r2 + 56));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 60u);
        if (resolved_pair.valid) {
            r15 = resolved_pair.first;
            r16 = resolved_pair.second;
        } else {
            r15 = MemoryInline::ReadResolved32(guest_range_2, 60u, (r2 + 60));
            r16 = MemoryInline::ReadResolved32(guest_range_2, 64u, (r2 + 64));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 68u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_2, 68u, (r2 + 68));
            r18 = MemoryInline::ReadResolved32(guest_range_2, 72u, (r2 + 72));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 76u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_2, 76u, (r2 + 76));
            r20 = MemoryInline::ReadResolved32(guest_range_2, 80u, (r2 + 80));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 84u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_2, 84u, (r2 + 84));
            r22 = MemoryInline::ReadResolved32(guest_range_2, 88u, (r2 + 88));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 92u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_2, 92u, (r2 + 92));
            r24 = MemoryInline::ReadResolved32(guest_range_2, 96u, (r2 + 96));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 100u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 100u, (r2 + 100));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 104u, (r2 + 104));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 108u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 108u, (r2 + 108));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 112u, (r2 + 112));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 116u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 116u, (r2 + 116));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 120u, (r2 + 120));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 124u, (r2 + 124));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r1 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 0u, r2);
            r1 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r2 + 4));
        }
    }
    r2 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r2 + 8));
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
        const auto regargs_result_8046CCC8_6412 = func_8046CCC8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8046CCC8_6412);
        r4 = static_cast<uint32_t>(regargs_result_8046CCC8_6412 >> 32);
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

}

extern "C" void func_8046CD80(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8046CD80_ra70_1fe_18_0(ctx, ctx->gpr[4], ctx->gpr[5], ctx->gpr[6], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFF7 gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8046CD80 func_8046CD80 preserves=true fpr_mask=0x00000000
