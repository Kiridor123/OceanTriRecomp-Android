#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CBA00(CpuContext* ctx);
extern "C" uint64_t func_804CBA00_ra68_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804D1740(CpuContext* ctx);
extern "C" uint64_t func_804D1740_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_804D2870(CpuContext* ctx);
extern "C" uint32_t func_804D2870_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804DD0C0(CpuContext* ctx);
extern "C" double func_804DD0C0_rae0_1e_0_2(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_804DD220(CpuContext* ctx);
extern "C" double func_804DD220_rae0_1e_0_2(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_804E77E0(CpuContext* ctx);
extern "C" uint64_t func_804E77E0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804E7900(CpuContext* ctx);
extern "C" uint64_t func_804E7900_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804EB400(CpuContext* ctx);
extern "C" uint32_t func_804EB400_ra608_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804E7B00_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r27_rot_3 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_10 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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
    const uint32_t r24_entry = r24;
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x804E7B00u);
    goto loc_804E7B00;

loc_804E7B00:
{
    MemoryHw::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryHw::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryHw::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r0 = MemoryHw::FlatRead32((r13 + -14408));
}

loc_804E7B1C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804E8030;
    }
}

loc_804E7B20:
{
    r3 = MemoryHw::FlatRead32((r13 + -19640));
    ctx->lr = 0x804E7B28u;
    if constexpr (KnownRegArgsCpuCall<0x804CBA00u>(&func_804CBA00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_804CBA00_1523 = func_804CBA00_ra68_1fe_18_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804CBA00_1523);
        r4 = static_cast<uint32_t>(regargs_result_804CBA00_1523 >> 32);
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
        ctr = ctx->ctr;
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CBA00u>(ctx);
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
        ctr = ctx->ctr;
    }
    r0 = 1;
    MemoryHw::FlatWrite32((r13 + -14408), r0);
    r3 = -872415232;
    r0 = MemoryHw::FlatRead16((r3 + 8194));
    r0 = (r0 & 1);
}

loc_804E7B3C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804E7B48;
    }
}

loc_804E7B40:
{
    r3 = 0;
    ctx->lr = 0x804E7B48u;
    if constexpr (KnownRegArgsCpuCall<0x804E7900u>(&func_804E7900)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->ctr = ctr;
        const auto regargs_result_804E7900_1F15 = func_804E7900_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804E7900_1F15);
        r4 = static_cast<uint32_t>(regargs_result_804E7900_1F15 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804E7900u>(ctx);
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
        ctr = ctx->ctr;
    }
}

loc_804E7B48:
{
    r4 = 0x80630000u;
    r29 = 0;
    r3 = (r4 + -16780);
    guest_range_3 = MemoryHw::ResolveRangeHost((r13 + -14360), 0, 128u, false, true);
    MemoryHw::WriteResolved32(guest_range_3, 124u, (r13 + -14236), r29);
    guest_range_1 = MemoryHw::ResolveRangeHost((r3 + 2), 0, 48u, true, false);
    r6 = MemoryHw::ReadResolved16(guest_range_1, 0u, (r3 + 2));
    r30 = -872415232;
    r5 = MemoryHw::FlatRead16((r4 + -16780));
    MemoryHw::WriteResolved32(guest_range_3, 12u, (r13 + -14348), r29);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(10));
    r0 = (r0_rot_1 & 64512);
    r0 = (r5 | r0);
    r4 = (static_cast<int32_t>(r6) >> 6);
    MemoryHw::WriteResolved32(guest_range_3, 8u, (r13 + -14352), r29);
    if (!MemoryHw::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryHw::WriteResolved32(guest_range_3, 28u, (r13 + -14332), r29);
        MemoryHw::WriteResolved32(guest_range_3, 24u, (r13 + -14336), r29);
    }
    MemoryHw::WriteResolved32(guest_range_3, 0u, (r13 + -14360), r29);
    MemoryHw::WriteResolved32(guest_range_3, 16u, (r13 + -14344), r29);
    if (!MemoryHw::WriteResolvedPair32(guest_range_3, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryHw::WriteResolved32(guest_range_3, 120u, (r13 + -14240), r29);
        MemoryHw::WriteResolved32(guest_range_3, 116u, (r13 + -14244), r29);
    }
    MemoryHw::FlatWrite16((r30 + 8270), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_1, 2u, (r3 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r0 = (r4 | r0);
    MemoryHw::FlatWrite16((r30 + 8268), static_cast<uint16_t>(r0));
    {
        const auto resolved_pair = MemoryHw::ReadResolvedPair16(guest_range_1, 4u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r4 = MemoryHw::ReadResolved16(guest_range_1, 6u, (r3 + 8));
            r5 = MemoryHw::ReadResolved16(guest_range_1, 4u, (r3 + 6));
        }
    }
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(10));
    r0 = (r0_rot_3 & 64512);
    r4 = (static_cast<int32_t>(r4) >> 6);
    r0 = (r5 | r0);
    MemoryHw::FlatWrite16((r30 + 8274), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_1, 8u, (r3 + 10));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & -16);
    r0 = (r4 | r0);
    MemoryHw::FlatWrite16((r30 + 8272), static_cast<uint16_t>(r0));
    {
        const auto resolved_pair = MemoryHw::ReadResolvedPair16(guest_range_1, 10u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r4 = MemoryHw::ReadResolved16(guest_range_1, 12u, (r3 + 14));
            r5 = MemoryHw::ReadResolved16(guest_range_1, 10u, (r3 + 12));
        }
    }
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(10));
    r0 = (r0_rot_5 & 64512);
    r4 = (static_cast<int32_t>(r4) >> 6);
    r0 = (r5 | r0);
    MemoryHw::FlatWrite16((r30 + 8278), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_1, 14u, (r3 + 16));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_6 & -16);
    r0 = (r4 | r0);
    MemoryHw::FlatWrite16((r30 + 8276), static_cast<uint16_t>(r0));
    {
        const auto resolved_pair = MemoryHw::ReadResolvedPair16(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r4 = resolved_pair.first;
        } else {
            r0 = MemoryHw::ReadResolved16(guest_range_1, 18u, (r3 + 20));
            r4 = MemoryHw::ReadResolved16(guest_range_1, 16u, (r3 + 18));
        }
    }
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_7 & -256);
    r0 = (r4 | r0);
    MemoryHw::FlatWrite16((r30 + 8282), static_cast<uint16_t>(r0));
    {
        const auto resolved_pair = MemoryHw::ReadResolvedPair16(guest_range_1, 20u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r4 = resolved_pair.first;
        } else {
            r0 = MemoryHw::ReadResolved16(guest_range_1, 22u, (r3 + 24));
            r4 = MemoryHw::ReadResolved16(guest_range_1, 20u, (r3 + 22));
        }
    }
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_8 & -256);
    r0 = (r4 | r0);
    MemoryHw::FlatWrite16((r30 + 8280), static_cast<uint16_t>(r0));
    r4 = MemoryHw::ReadResolved16(guest_range_1, 26u, (r3 + 28));
    r0 = 640;
    r5 = MemoryHw::ReadResolved16(guest_range_1, 24u, (r3 + 26));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r4 = (r4_rot_1 & -256);
    r4 = (r5 | r4);
    MemoryHw::FlatWrite16((r30 + 8286), static_cast<uint16_t>(r4));
    {
        const auto resolved_pair = MemoryHw::ReadResolvedPair16(guest_range_1, 28u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r4 = MemoryHw::ReadResolved16(guest_range_1, 30u, (r3 + 32));
            r5 = MemoryHw::ReadResolved16(guest_range_1, 28u, (r3 + 30));
        }
    }
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r4 = (r4_rot_2 & -256);
    r4 = (r5 | r4);
    MemoryHw::FlatWrite16((r30 + 8284), static_cast<uint16_t>(r4));
    {
        const auto resolved_pair = MemoryHw::ReadResolvedPair16(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r4 = MemoryHw::ReadResolved16(guest_range_1, 34u, (r3 + 36));
            r5 = MemoryHw::ReadResolved16(guest_range_1, 32u, (r3 + 34));
        }
    }
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r4 = (r4_rot_3 & -256);
    r4 = (r5 | r4);
    MemoryHw::FlatWrite16((r30 + 8290), static_cast<uint16_t>(r4));
    {
        const auto resolved_pair = MemoryHw::ReadResolvedPair16(guest_range_1, 36u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r4 = MemoryHw::ReadResolved16(guest_range_1, 38u, (r3 + 40));
            r5 = MemoryHw::ReadResolved16(guest_range_1, 36u, (r3 + 38));
        }
    }
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r4 = (r4_rot_4 & -256);
    r4 = (r5 | r4);
    MemoryHw::FlatWrite16((r30 + 8288), static_cast<uint16_t>(r4));
    {
        const auto resolved_pair = MemoryHw::ReadResolvedPair16(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r4 = MemoryHw::ReadResolved16(guest_range_1, 42u, (r3 + 44));
            r5 = MemoryHw::ReadResolved16(guest_range_1, 40u, (r3 + 42));
        }
    }
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r4 = (r4_rot_5 & -256);
    r4 = (r5 | r4);
    MemoryHw::FlatWrite16((r30 + 8294), static_cast<uint16_t>(r4));
    {
        const auto resolved_pair = MemoryHw::ReadResolvedPair16(guest_range_1, 44u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r4 = MemoryHw::ReadResolved16(guest_range_1, 46u, (r3 + 48));
            r5 = MemoryHw::ReadResolved16(guest_range_1, 44u, (r3 + 46));
        }
    }
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r3 = (r3_rot_1 & -256);
    r3 = (r5 | r3);
    MemoryHw::FlatWrite16((r30 + 8292), static_cast<uint16_t>(r3));
    MemoryHw::FlatWrite16((r30 + 8304), static_cast<uint16_t>(r0));
    ctx->lr = 0x804E7CA0u;
    if constexpr (KnownRegArgsCpuCall<0x804DD0C0u>(&func_804DD0C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_804DD0C0_45A2 = func_804DD0C0_rae0_1e_0_2(ctx, r5, r6, r7, f1.d, f2.d, f3.d, f4.d);
        f1.d = regargs_result_804DD0C0_45A2;
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
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804DD0C0u>(ctx);
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
        ctr = ctx->ctr;
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryHw::FlatWrite16((r13 + -14364), static_cast<uint16_t>(r0));
    r3 = 0x80000000u;
    MemoryHw::FlatWrite16((r13 + -14362), static_cast<uint16_t>(r29));
    r24 = MemoryHw::FlatRead32((r3 + 204));
    r29 = MemoryHw::FlatRead16((r30 + 8194));
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x804D12F0
    r0 = MemoryHw::FlatRead16((r30 + 8300));
    r0 = (r0 & 1);
}

loc_804E7CC8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804E7CD4;
    }
}

loc_804E7CCC:
{
    r27 = 2;
    goto loc_804E7CE8;
}

loc_804E7CD4:
{
    r0 = MemoryHw::FlatRead16((r30 + 8194));
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r4 = (r4_rot_6 & 1);
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r27_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r27 = (r27_rot_1 & 1);
}

loc_804E7CE8:
{
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
    r3 = 0x80760000u;
}

loc_804E7CF4:
{
    r3 = (r3 + -10560);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(24));
    r0 = (r0_rot_9 & 3);
    MemoryHw::FlatWriteRam32((r3 + 36), r27);
    MemoryHw::FlatWriteRam32((r3 + 40), r0);
    if ((static_cast<uint32_t>(r24) == static_cast<uint32_t>(5))) {
        goto loc_804E7D18;
    }
}

loc_804E7D08:
{
}

loc_804E7D0C:
{
    if ((static_cast<uint32_t>(r24) != static_cast<uint32_t>(1))) {
        goto loc_804E7D28;
    }
}

loc_804E7D10:
{
}

loc_804E7D14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804E7D28;
    }
}

loc_804E7D18:
{
    r3 = 0x80760000u;
    r0 = 5;
    r3 = (r3 + -10560);
    MemoryHw::FlatWriteRam32((r3 + 40), r0);
}

loc_804E7D28:
{
    r30 = 0x80760000u;
    r31 = (r30 + -10560);
    r5 = MemoryHw::FlatRead32((r31 + 40));
    r0 = MemoryHw::FlatRead32((r31 + 36));
    r4 = (r5 + -3);
    r3 = (3 - r5);
    r3 = ~(r4 | r3);
    r3 = (static_cast<int32_t>(r3) >> 31);
    r3 = (r5 & ~r3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_4 & -4);
    r3 = (r3 + r0);
    if constexpr (KnownRegArgsCpuCall<0x804E77E0u>(&func_804E77E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_804E77E0_57C8 = func_804E77E0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804E77E0_57C8);
        r4 = static_cast<uint32_t>(regargs_result_804E77E0_57C8 >> 32);
        r0 = ctx->gpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804E77E0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        ctr = ctx->ctr;
    }
    r7 = 640;
    r6 = 0x80760000u;
    r5 = (720 - r7);
    r8 = MemoryHw::FlatRead32((r31 + 40));
    r4_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r4 = (r4_rot_8 & 1);
    r6 = (r6 + -10680);
    r4 = (r4 + r5);
    MemoryHw::FlatWriteRam16((r6 + 2), static_cast<uint16_t>(r29));
    r6 = (static_cast<int32_t>(r4) >> 1);
    r0 = MemoryHw::FlatRead16((r13 + -14364));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    MemoryHw::FlatWriteRam32((r31 + 84), r3);
    r4 = (r4 + r0);
    r9 = (720 - r7);
    MemoryHw::FlatWrite32((r13 + -14292), r3);
    r5 = 0;
}

loc_804E7D9C:
{
    MemoryHw::FlatWrite32((r13 + -14296), r8);
    MemoryHw::FlatWriteRam16((r31 + 4), static_cast<uint16_t>(r7));
    r0 = MemoryHw::FlatRead16((r3 + 2));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & 65534);
    MemoryHw::FlatWriteRam16((r31 + 6), static_cast<uint16_t>(r0));
    MemoryHw::FlatWriteRam16((r30 + -10560), static_cast<uint16_t>(r6));
    MemoryHw::FlatWriteRam16((r31 + 2), static_cast<uint16_t>(r5));
    r7 = MemoryHw::FlatRead16((r3 + 2));
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r9))) {
        goto loc_804E7DC4;
    }
}

loc_804E7DC0:
{
    goto loc_804E7DCC;
}

loc_804E7DC4:
{
    r0 = (static_cast<int32_t>(r4) >> 31);
    r9 = (r4 & ~r0);
}

loc_804E7DCC:
{
    r5 = 0x80760000u;
    r8 = MemoryHw::FlatRead16((r13 + -14362));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r5 = (r5 + -10560);
    r6 = MemoryHw::FlatRead16((r5 + 2));
    r4 = MemoryHw::FlatRead32((r5 + 32));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r6 = (r6 & 1);
    r10 = (r0 + r8);
    MemoryHw::FlatWriteRam16((r5 + 8), static_cast<uint16_t>(r9));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r4));
    r4_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r4 = (r4_rot_9 & 134217727);
}

loc_804E7DFC:
{
    r0 = r6;
    r5 = (r4 + 1);
    if ((static_cast<int32_t>(r10) <= static_cast<int32_t>(r6))) {
        goto loc_804E7E0C;
    }
}

loc_804E7E08:
{
    r0 = r10;
}

loc_804E7E0C:
{
    r4 = 0x80760000u;
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r4 = (r4 + -10560);
    r9 = 640;
    r10 = MemoryHw::FlatRead16((r4 + 2));
    r30_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r30 = (r30_rot_1 & -2);
    r7 = MemoryHw::FlatRead16((r4 + 6));
    r26 = (r30 - r6);
    r10 = (static_cast<int32_t>(static_cast<int16_t>(r10)));
    r11 = MemoryHw::FlatRead16((r4 + 2));
    r11 = (r11 << 16);
    r11 = (static_cast<int32_t>(r11) >> 16);
    r27 = (r8 + r10);
    r12 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r12 = (r12 + r27);
    r10 = MemoryHw::FlatRead16((r4 + 6));
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
    r11 = (r11 + r8);
    r25 = (r27 - r6);
    r8 = (r12 - r26);
    r10 = (r10 + r27);
    r12 = (0 - r8);
    MemoryHw::FlatWriteRam16((r4 + 10), static_cast<uint16_t>(r0));
    r12 = (r12 & ~r8);
    r24 = (r10 - r26);
    r27 = (static_cast<int32_t>(r12) >> 31);
    r26 = (r11 - r6);
    r10 = (static_cast<int32_t>(r25) >> 31);
    r6 = (0 - r24);
    r12 = (static_cast<int32_t>(r26) >> 31);
    r8 = (r8 & r27);
    r31 = (r25 & r10);
    r6 = (r6 & ~r24);
    r10 = (static_cast<int32_t>(r6) >> 31);
    r30 = (r26 & r12);
    r6 = (static_cast<int32_t>(r25) >> 31);
    r7 = (r7 + r31);
    r0 = (r7 - r8);
    r26 = (r24 & r10);
    r6 = (r25 & r6);
    MemoryHw::FlatWriteRam16((r4 + 12), static_cast<uint16_t>(r0));
    r10 = PPC_Divw(static_cast<int32_t>(r6), static_cast<int32_t>(r5));
    r11 = MemoryHw::FlatRead16((r4 + 28));
    r12 = MemoryHw::FlatRead16((r4 + 24));
    r29 = 0;
    MemoryHw::FlatWriteRam16((r4 + 18), static_cast<uint16_t>(r9));
    r6 = 40;
    r8 = PPC_Divw(static_cast<int32_t>(r30), static_cast<int32_t>(r5));
    r7 = (r11 + r10);
    r0 = 1;
    r5 = PPC_Divw(static_cast<int32_t>(r26), static_cast<int32_t>(r5));
    r8 = (r12 - r8);
    MemoryHw::FlatWriteRam16((r4 + 14), static_cast<uint16_t>(r8));
    r5 = (r7 - r5);
    MemoryHw::FlatWriteRam16((r4 + 16), static_cast<uint16_t>(r5));
    r5 = MemoryHw::FlatRead16((r3 + 2));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & 65534);
    MemoryHw::FlatWriteRam16((r4 + 20), static_cast<uint16_t>(r5));
    MemoryHw::FlatWriteRam16((r4 + 22), static_cast<uint16_t>(r29));
    MemoryHw::FlatWriteRam16((r4 + 24), static_cast<uint16_t>(r29));
    MemoryHw::FlatWriteRam16((r4 + 26), static_cast<uint16_t>(r9));
    r5 = MemoryHw::FlatRead16((r3 + 2));
    r3 = (r13 + -14272);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & 65534);
    MemoryHw::FlatWriteRam16((r4 + 28), static_cast<uint16_t>(r5));
    MemoryHw::FlatWriteRam32((r4 + 32), r29);
    MemoryHw::FlatWriteRam8((r4 + 44), static_cast<uint8_t>(r6));
    MemoryHw::FlatWriteRam8((r4 + 45), static_cast<uint8_t>(r6));
    MemoryHw::FlatWriteRam8((r4 + 46), static_cast<uint8_t>(r6));
    MemoryHw::FlatWriteRam8((r4 + 60), static_cast<uint8_t>(r29));
    MemoryHw::FlatWriteRam32((r4 + 64), r0);
    MemoryHw::FlatWriteRam32((r4 + 68), r29);
    // inline leaf 0x804D3FE0 (4 guest instruction(s))
    r0 = 0;
    MemoryHw::FlatWrite32((r3 + 4), r0);
    MemoryHw::FlatWrite32(r3, r0);
    // end of inlined leaf 0x804D3FE0
    r5 = -872415232;
    r4 = 0x804E0000u;
    r0 = MemoryHw::FlatRead16((r5 + 8240));
    r4 = (r4 + 28464);
    r3 = 24;
    r0 = (r0 & 32767);
    MemoryHw::FlatWrite16((r5 + 8240), static_cast<uint16_t>(r0));
    r0 = MemoryHw::FlatRead16((r5 + 8244));
    r0 = (r0 & 32767);
    MemoryHw::FlatWrite16((r5 + 8244), static_cast<uint16_t>(r0));
    MemoryHw::FlatWrite32((r13 + -14280), r29);
    MemoryHw::FlatWrite32((r13 + -14284), r29);
    // inline leaf 0x804D1360 (5 guest instruction(s))
    r5 = MemoryHw::FlatRead32((r13 + -15032));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r5_addr_1 = (r5 + r0);
    r3 = MemoryHw::FlatRead32(r5_addr_1);
    r5_addr_2 = (r5 + r0);
    MemoryHw::FlatWrite32(r5_addr_2, r4);
    // end of inlined leaf 0x804D1360
    r3 = 128;
    ctx->lr = 0x804E7F60u;
    if constexpr (KnownRegArgsCpuCall<0x804D1740u>(&func_804D1740)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804D1740_7490 = func_804D1740_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804D1740_7490);
        r4 = static_cast<uint32_t>(regargs_result_804D1740_7490 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804D1740u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 0x80630000u;
    r3 = (r3 + -16544);
    if constexpr (KnownRegArgsCpuCall<0x804D2870u>(&func_804D2870)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804D2870_77A7 = func_804D2870_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804D2870_77A7;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804D2870u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_5 & 1);
    // end of inlined leaf 0x804D12F0
    r5 = MemoryHw::FlatRead32((r13 + -14296));
}

loc_804E7F78:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(8))) {
        goto loc_804E7FA8;
    }
}

loc_804E7F7C:
{
    r4 = 0x80630000u;
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r4 = (r4 + -16352);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryHw::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x804E7F94u:
        goto loc_804E7F94;
        break;
    case 0x804E7F9Cu:
        goto loc_804E7F9C;
        break;
    case 0x804E7FA4u:
        goto loc_804E7FA4;
        break;
    default:
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
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_804E7F94:
{
    r28 = 0;
    goto loc_804E7FA8;
}

loc_804E7F9C:
{
    r28 = 1;
    goto loc_804E7FA8;
}

loc_804E7FA4:
{
    r28 = r5;
}

loc_804E7FA8:
{
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl6_0x804D1330:
{
}

loc_inl6_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl6_0x804D1344;
    }
}

loc_inl6_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl6_0x804D1348;
}

loc_inl6_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl6_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_6 & 1);
}

loc_inl6_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_804E7FB0:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(1))) {
        goto loc_804E7FD0;
    }
}

loc_804E7FB4:
{
    r3 = 65536;
    r4 = 15000;
    MemoryHw::FlatWrite32((r13 + -14392), r4);
    r0 = (r3 + 24464);
    MemoryHw::FlatWrite32((r13 + -14388), r4);
    MemoryHw::FlatWrite32((r13 + -14384), r0);
    goto loc_804E7FE8;
}

loc_804E7FD0:
{
    r3 = 131072;
    r4 = 18000;
    MemoryHw::FlatWrite32((r13 + -14392), r4);
    r0 = (r3 + -23072);
    MemoryHw::FlatWrite32((r13 + -14388), r4);
    MemoryHw::FlatWrite32((r13 + -14384), r0);
}

loc_804E7FE8:
{
    r3 = 0;
    MemoryHw::FlatWrite32((r13 + -14380), r3);
    r0 = 1;
    r27 = 1;
    MemoryHw::FlatWrite32((r13 + -14376), r3);
    MemoryHw::FlatWrite32((r13 + -14256), r3);
    MemoryHw::FlatWrite32((r13 + -14396), r0);
    MemoryHw::FlatWrite32((r13 + -14372), r3);
    r0 = MemoryHw::FlatRead32((r13 + -14248));
    ctx->lr = 0x804E8010u;
    if constexpr (KnownRegArgsCpuCall<0x804DD220u>(&func_804DD220)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_804DD220_88B3 = func_804DD220_rae0_1e_0_2(ctx, r5, r6, r7, f1.d, f2.d, f3.d, f4.d);
        f1.d = regargs_result_804DD220_88B3;
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
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804DD220u>(ctx);
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
        ctr = ctx->ctr;
    }
    r0 = (r3 & 255);
}

loc_804E8014:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804E801C;
    }
}

loc_804E8018:
{
    r27 = 0;
}

loc_804E801C:
{
    MemoryHw::FlatWrite32((r13 + -14248), r27);
    r0 = 0;
    r3 = MemoryHw::FlatRead32((r13 + -14252));
    MemoryHw::FlatWrite32((r13 + -14252), r0);
    ctx->lr = 0x804E8030u;
    if constexpr (KnownRegArgsCpuCall<0x804EB400u>(&func_804EB400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_804EB400_917E = func_804EB400_ra608_0_8_0(ctx, r3, r9, r10);
        r3 = regargs_result_804EB400_917E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804EB400u>(ctx);
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
        ctr = ctx->ctr;
    }
}

loc_804E8030:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_2 = MemoryHw::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryHw::FlatRead32((r1 + 52));
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    ctx->gpr[24] = r24_entry;
    ctx->gpr[25] = r25_entry;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804E7B00(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804E7B00_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804E7B00 func_804E7B00 preserves=true fpr_mask=0x00000000
