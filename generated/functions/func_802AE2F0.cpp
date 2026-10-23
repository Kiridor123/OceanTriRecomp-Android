#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80055010(CpuContext* ctx);
extern "C" uint32_t func_80055010_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8005504C(CpuContext* ctx);
extern "C" uint64_t func_8005504C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800D4E3C(CpuContext* ctx);
extern "C" uint64_t func_800D4E3C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800D530C(CpuContext* ctx);
extern "C" uint64_t func_800D530C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800D55B4(CpuContext* ctx);
extern "C" uint64_t func_800D55B4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800E05C4(CpuContext* ctx);
extern "C" uint64_t func_800E05C4_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800E228C(CpuContext* ctx);
extern "C" uint64_t func_800E228C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802AFFDC(CpuContext* ctx);
extern "C" uint32_t func_802AFFDC_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802B0C24(CpuContext* ctx);
extern "C" uint64_t func_802B0C24_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802AE2F0_ra38_1fc_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_802AE2F0;

loc_802AE2F0:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    r11 = (r1 + 160);
    // inline leaf 0x80457464 (15 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, false, true);
    // end of inlined leaf 0x80457464
    r31 = r3;
    r22 = r4;
    r18 = r6;
    r3 = (r1 + 12);
    r4 = 0;
    ctx->lr = 0x802AE31Cu;
    if constexpr (KnownRegArgsCpuCall<0x8005504Cu>(&func_8005504C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005504C_DAC = func_8005504C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005504C_DAC);
        r4 = static_cast<uint32_t>(regargs_result_8005504C_DAC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8005504Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 0x806C0000u;
    r28 = (r3 + -21440);
    r24 = 1;
    r23 = 0;
    r0 = MemoryInline::FlatRead32(r18);
    r27 = (r0 & 255);
    r0 = MemoryInline::FlatRead32((r18 + 4));
    r26 = (r0 & 255);
    r0 = MemoryInline::FlatRead32((r18 + 12));
    r25 = (r0 & 255);
    r3 = r31;
    r4 = r22;
    ctx->lr = 0x802AE350u;
    if constexpr (KnownRegArgsCpuCall<0x800D55B4u>(&func_800D55B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_800D55B4_1220 = func_800D55B4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800D55B4_1220);
        r4 = static_cast<uint32_t>(regargs_result_800D55B4_1220 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x800D55B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = MemoryInline::FlatRead32((r18 + 8));
    r0 = (r0 * 1488);
    r3 = (r28 + r0);
    r29 = (r3 + 36);
    r3 = r31;
    ctx->lr = 0x802AE368u;
    if constexpr (KnownRegArgsCpuCall<0x800D530Cu>(&func_800D530C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_800D530C_1631 = func_800D530C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800D530C_1631);
        r4 = static_cast<uint32_t>(regargs_result_800D530C_1631 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x800D530Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r30 = r3;
    r3 = r31;
    ctx->lr = 0x802AE374u;
    if constexpr (KnownRegArgsCpuCall<0x800D4E3Cu>(&func_800D4E3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_800D4E3C_19DF = func_800D4E3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800D4E3C_19DF);
        r4 = static_cast<uint32_t>(regargs_result_800D4E3C_19DF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x800D4E3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r31 = r3;
    r3 = (r1 + 16);
    r4 = MemoryInline::FlatRead32((r13 + -17584));
    r0 = (r31 * 76);
    r4 = (r4 + r0);
    r4 = (r4 + 12400);
    // inline leaf 0x80140E10 (39 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 76u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 76u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, r3, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_2, 4u, (r3 + 4), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r4 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r3 + 8), r5);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r3 + 12), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r4 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r4 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r3 + 16), r5);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r3 + 20), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r4 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r4 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r3 + 24), r5);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r3 + 28), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r4 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r4 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r3 + 32), r5);
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r3 + 36), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r4 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r4 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r3 + 40), r5);
        MemoryInline::WriteResolved32(guest_range_2, 44u, (r3 + 44), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r4 + 48));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r4 + 52));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 48u, (r3 + 48), r5);
        MemoryInline::WriteResolved32(guest_range_2, 52u, (r3 + 52), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r4 + 56));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r4 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 56u, (r3 + 56), r5);
        MemoryInline::WriteResolved32(guest_range_2, 60u, (r3 + 60), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 64u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r4 + 64));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 68u, (r4 + 68));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 64u, (r3 + 64), r5);
        MemoryInline::WriteResolved32(guest_range_2, 68u, (r3 + 68), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 72u, (r4 + 72));
    MemoryInline::WriteResolved32(guest_range_2, 72u, (r3 + 72), r0);
    // end of inlined leaf 0x80140E10
}

loc_802AE394:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(0))) {
        goto loc_802AE3D8;
    }
}

loc_802AE398:
{
    r3 = r27;
    r4 = r26;
    ctx->lr = 0x802AE3A4u;
    if constexpr (KnownRegArgsCpuCall<0x802B0C24u>(&func_802B0C24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802B0C24_379D = func_802B0C24_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802B0C24_379D);
        r4 = static_cast<uint32_t>(regargs_result_802B0C24_379D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802B0C24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802AE3A8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802AE3D8;
    }
}

loc_802AE3AC:
{
    r3 = r27;
    r4 = r26;
    if constexpr (KnownRegArgsCpuCall<0x802AFFDCu>(&func_802AFFDC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802AFFDC_3B03 = func_802AFFDC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_802AFFDC_3B03;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802AFFDCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r0 = (r3 & 255);
}

loc_802AE3C0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802AE3D8;
    }
}

loc_802AE3C4:
{
    r24 = 2;
    r23 = 3;
    r0 = 1;
    MemoryInline::FlatWriteRam8((r28 + 12176), static_cast<uint8_t>(r0));
    goto loc_802AE400;
}

loc_802AE3D8:
{
}

loc_802AE3DC:
{
    if ((static_cast<uint32_t>(r25) != static_cast<uint32_t>(1))) {
        goto loc_802AE400;
    }
}

loc_802AE3E0:
{
    r3 = r27;
    r4 = r26;
    if constexpr (KnownRegArgsCpuCall<0x802AFFDCu>(&func_802AFFDC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802AFFDC_3F06 = func_802AFFDC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_802AFFDC_3F06;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802AFFDCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r0 = (r3 & 255);
}

loc_802AE3F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802AE400;
    }
}

loc_802AE3F8:
{
    r24 = 2;
    r23 = 2;
}

loc_802AE400:
{
}

loc_802AE404:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_802AE4B4;
    }
}

loc_802AE408:
{
    r28 = 0;
    r21 = 1;
    r20 = 0;
    goto loc_802AE4AC;
}

loc_802AE418:
{
}

loc_802AE41C:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(1))) {
        goto loc_802AE424;
    }
}

loc_802AE420:
{
    r25 = r23;
}

loc_802AE424:
{
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r30 + 68));
    ctx->lr = 0x802AE430u;
    if constexpr (KnownRegArgsCpuCall<0x8005504Cu>(&func_8005504C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005504C_43ED = func_8005504C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005504C_43ED);
        r4 = static_cast<uint32_t>(regargs_result_8005504C_43ED >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8005504Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = r3;
    r3 = (r1 + 12);
    ctx->lr = 0x802AE43Cu;
    if constexpr (KnownRegArgsCpuCall<0x80055010u>(&func_80055010)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80055010_4734 = func_80055010_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80055010_4734;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80055010u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r0 = (r25 & 255);
    r19 = (r0 * 356);
    r3 = (r29 + r19);
    r18 = (r3 + 4);
    r3 = r18;
    ctx->lr = 0x802AE454u;
    if constexpr (KnownRegArgsCpuCall<0x800E05C4u>(&func_800E05C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E05C4_49F0 = func_800E05C4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800E05C4_49F0);
        r4 = static_cast<uint32_t>(regargs_result_800E05C4_49F0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E05C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    r3 = r18;
    r4 = (r1 + 12);
    r5 = 47;
    r6 = 2;
    ctx->lr = 0x802AE468u;
    if constexpr (KnownRegArgsCpuCall<0x800E228Cu>(&func_800E228C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_800E228C_4D67 = func_800E228C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800E228C_4D67);
        r4 = static_cast<uint32_t>(regargs_result_800E228C_4D67 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800E228Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = (r29 + r19);
    MemoryInline::FlatWrite32((r3 + 68), r20);
    r3 = MemoryInline::FlatRead32((r3 + 272));
}

loc_802AE478:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802AE480;
    }
}

loc_802AE47C:
{
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r21));
}

loc_802AE480:
{
    r0 = (r25 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r29 + r0);
    MemoryInline::FlatWrite32((r3 + 1436), r22);
    r0 = MemoryInline::FlatRead32((r30 + 64));
    MemoryInline::FlatWrite32((r3 + 1452), r0);
    MemoryInline::FlatWrite32((r3 + 1468), r31);
    r3 = MemoryInline::FlatRead8((r29 + 1484));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 1484), static_cast<uint8_t>(r0));
    r28 = (r28 + 1);
}

loc_802AE4AC:
{
}

loc_802AE4B0:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r24))) {
        goto loc_802AE418;
    }
}

loc_802AE4B4:
{
    MemoryInline::FlatWrite8((r29 + 1428), static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite8((r29 + 1429), static_cast<uint8_t>(r26));
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r26));
    r0 = 2;
    MemoryInline::FlatWrite8((r29 + 1), static_cast<uint8_t>(r0));
    r11 = (r1 + 160);
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802AE2F0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802AE2F0_ra38_1fc_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFC fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802AE2F0 func_802AE2F0 preserves=true fpr_mask=0x00000000
