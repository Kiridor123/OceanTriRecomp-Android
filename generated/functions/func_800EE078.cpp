#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80457360(CpuContext* ctx);
extern "C" uint32_t func_80457360_ra8_1e_8_0(CpuContext*, uint32_t, double, double, double, double);
extern "C" void func_804685F8(CpuContext* ctx);
extern "C" uint64_t func_804685F8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_800EE078(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t stackword19 = 0;
    uint32_t stackword20 = 0;
    uint32_t stackword21 = 0;
    uint32_t stackword22 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
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

    MKW_GUEST_ENTER(0x800EE078u);
    goto loc_800EE078;

loc_800EE078:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 116u, (r1 + 116), r0);
    r11 = (r1 + 112);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r25 = r3;
    r26 = r4;
    r27 = r6;
    r30 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 24), r30);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 28), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 32), r30);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 40), r30);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r1 + 44), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r1 + 48), r30);
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r1 + 56), r30);
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r1 + 60), r30);
    }
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30024));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -29992));
    r0 = (r0 ^ -2147483648);
    stackword19 = r0;
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 68), r0);
    r28 = 1127219200;
    stackword20 = r28;
    MemoryInline::WriteResolved32(guest_range_1, 64u, (r1 + 64), r28);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword20), static_cast<uint32_t>(stackword19));
    f2.d = (f0.d - f2.d);
    f0.d = MemoryInline::FlatReadFloat64((r2 + -30016));
    f2.d = (f2.d / f0.d);
    ctx->lr = 0x800EE0F4u;
    if constexpr (KnownRegArgsCpuCall<0x804685F8u>(&func_804685F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_804685F8_154C = func_804685F8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804685F8_154C);
        r4 = static_cast<uint32_t>(regargs_result_804685F8_154C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x804685F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = MemoryInline::FlatRead32((r25 + 4));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -29984));
    stackword21 = r0;
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    stackword22 = r28;
    MemoryInline::FlatWriteRam32((r1 + 72), r28);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword22), static_cast<uint32_t>(stackword21));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f1.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30008));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat64((r2 + -30000));
    f1.d = (f0.d * f1.d);
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        const auto regargs_result_80457360_1E1C = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_1E1C;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r31 = r3;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r29 = r3;
    r3 = r26;
    r4 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80471BD0u>(ctx);
    guest_range_0 = MemoryInline::ResolveRangeHost(r25, 0, 24u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r25);
}

loc_800EE148:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800EE178;
    }
}

loc_800EE14C:
{
}

loc_800EE150:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_800EE200;
    }
}

loc_800EE154:
{
}

loc_800EE158:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_800EE29C;
    }
}

loc_800EE15C:
{
}

loc_800EE160:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_800EE330;
    }
}

loc_800EE164:
{
}

loc_800EE168:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(4))) {
        goto loc_800EE3C8;
    }
}

loc_800EE16C:
{
}

loc_800EE170:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_800EE45C;
    }
}

loc_800EE174:
{
    goto loc_800EE4F0;
}

loc_800EE178:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r26 + 150), 0, 16u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_2, 0u, (r26 + 150), r30);
        MemoryInline::WriteResolved16(guest_range_2, 2u, (r26 + 152), r30);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r25 + 8));
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_21 & 65535);
    MemoryInline::WriteResolved16(guest_range_2, 4u, (r26 + 154), static_cast<uint16_t>(r0));
    r0 = (r3 & 65535);
    MemoryInline::WriteResolved16(guest_range_2, 6u, (r26 + 156), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r25 + 16));
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_22 & 65535);
    MemoryInline::WriteResolved16(guest_range_2, 8u, (r26 + 158), static_cast<uint16_t>(r0));
    r0 = (r3 & 65535);
    MemoryInline::WriteResolved16(guest_range_2, 10u, (r26 + 160), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r25 + 20));
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_23 & 65535);
    MemoryInline::WriteResolved16(guest_range_2, 12u, (r26 + 162), static_cast<uint16_t>(r0));
    r0 = (r3 & 65535);
    MemoryInline::WriteResolved16(guest_range_2, 14u, (r26 + 164), static_cast<uint16_t>(r0));
    r3 = (r26 + 166);
    r4 = (r25 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EE588u>(ctx);
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(16));
    r0 = (r0_rot_24 & 65535);
    MemoryInline::FlatWrite16((r26 + 206), static_cast<uint16_t>(r0));
    r0 = (r31 & 65535);
    MemoryInline::FlatWrite16((r26 + 208), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r26 + 210), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r26 + 212), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r26 + 214), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r26 + 216), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r26 + 218), static_cast<uint16_t>(r30));
    r0 = MemoryInline::FlatRead32((r26 + 28));
    r0 = (r0 | 65536);
    r0 = (r0 | 33792);
    MemoryInline::FlatWrite32((r26 + 28), r0);
    goto loc_800EE4F0;
}

loc_800EE200:
{
    r28 = (r25 + 24);
    r0 = 1;
    guest_range_3 = MemoryInline::ResolveRangeHost((r26 + 150), 0, 16u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_3, 0u, (r26 + 150), r0);
        MemoryInline::WriteResolved16(guest_range_3, 2u, (r26 + 152), r30);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r25 + 8));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_17 & 65535);
    MemoryInline::WriteResolved16(guest_range_3, 4u, (r26 + 154), static_cast<uint16_t>(r0));
    r0 = (r3 & 65535);
    MemoryInline::WriteResolved16(guest_range_3, 6u, (r26 + 156), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r25 + 12));
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_18 & 65535);
    MemoryInline::WriteResolved16(guest_range_3, 8u, (r26 + 158), static_cast<uint16_t>(r0));
    r0 = (r3 & 65535);
    MemoryInline::WriteResolved16(guest_range_3, 10u, (r26 + 160), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r25 + 20));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_19 & 65535);
    MemoryInline::WriteResolved16(guest_range_3, 12u, (r26 + 162), static_cast<uint16_t>(r0));
    r0 = (r3 & 65535);
    MemoryInline::WriteResolved16(guest_range_3, 14u, (r26 + 164), static_cast<uint16_t>(r0));
    r3 = (r26 + 166);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EE588u>(ctx);
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(16));
    r0 = (r0_rot_20 & 65535);
    MemoryInline::FlatWrite16((r26 + 206), static_cast<uint16_t>(r0));
    r0 = (r31 & 65535);
    MemoryInline::FlatWrite16((r26 + 208), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r26 + 210), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r26 + 212), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r26 + 214), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r26 + 216), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r26 + 218), static_cast<uint16_t>(r30));
    r3 = (r26 + 220);
    r4 = (r28 + 40);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EE56Cu>(ctx);
    r0 = MemoryInline::FlatRead32((r26 + 28));
    r0 = (r0 | 327680);
    r0 = (r0 | 33792);
    MemoryInline::FlatWrite32((r26 + 28), r0);
    goto loc_800EE4F0;
}

loc_800EE29C:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r26 + 150), 0, 16u, false, true);
    MemoryInline::WriteResolved16(guest_range_4, 0u, (r26 + 150), static_cast<uint16_t>(r30));
    r0 = 10;
    MemoryInline::WriteResolved16(guest_range_4, 2u, (r26 + 152), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r25 + 8));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_13 & 65535);
    MemoryInline::WriteResolved16(guest_range_4, 4u, (r26 + 154), static_cast<uint16_t>(r0));
    r0 = (r3 & 65535);
    MemoryInline::WriteResolved16(guest_range_4, 6u, (r26 + 156), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r25 + 16));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_14 & 65535);
    MemoryInline::WriteResolved16(guest_range_4, 8u, (r26 + 158), static_cast<uint16_t>(r0));
    r0 = (r3 & 65535);
    MemoryInline::WriteResolved16(guest_range_4, 10u, (r26 + 160), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r25 + 20));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_15 & 65535);
    MemoryInline::WriteResolved16(guest_range_4, 12u, (r26 + 162), static_cast<uint16_t>(r0));
    r0 = (r3 & 65535);
    MemoryInline::WriteResolved16(guest_range_4, 14u, (r26 + 164), static_cast<uint16_t>(r0));
    r3 = (r26 + 166);
    r4 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EE588u>(ctx);
    r0 = 2048;
    MemoryInline::FlatWrite16((r26 + 198), static_cast<uint16_t>(r0));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(16));
    r0 = (r0_rot_16 & 65535);
    MemoryInline::FlatWrite16((r26 + 206), static_cast<uint16_t>(r0));
    r0 = (r31 & 65535);
    MemoryInline::FlatWrite16((r26 + 208), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r26 + 210), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r26 + 212), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r26 + 214), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r26 + 216), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r26 + 218), static_cast<uint16_t>(r30));
    r0 = MemoryInline::FlatRead32((r26 + 28));
    r0 = (r0 | 65536);
    r0 = (r0 | 33792);
    MemoryInline::FlatWrite32((r26 + 28), r0);
    goto loc_800EE4F0;
}

loc_800EE330:
{
    r0 = 1;
    guest_range_5 = MemoryInline::ResolveRangeHost((r26 + 150), 0, 16u, false, true);
    MemoryInline::WriteResolved16(guest_range_5, 0u, (r26 + 150), static_cast<uint16_t>(r0));
    r0 = 10;
    MemoryInline::WriteResolved16(guest_range_5, 2u, (r26 + 152), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r25 + 8));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_9 & 65535);
    MemoryInline::WriteResolved16(guest_range_5, 4u, (r26 + 154), static_cast<uint16_t>(r0));
    r0 = (r3 & 65535);
    MemoryInline::WriteResolved16(guest_range_5, 6u, (r26 + 156), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r25 + 12));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_10 & 65535);
    MemoryInline::WriteResolved16(guest_range_5, 8u, (r26 + 158), static_cast<uint16_t>(r0));
    r0 = (r3 & 65535);
    MemoryInline::WriteResolved16(guest_range_5, 10u, (r26 + 160), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r25 + 20));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_11 & 65535);
    MemoryInline::WriteResolved16(guest_range_5, 12u, (r26 + 162), static_cast<uint16_t>(r0));
    r0 = (r3 & 65535);
    MemoryInline::WriteResolved16(guest_range_5, 14u, (r26 + 164), static_cast<uint16_t>(r0));
    r3 = (r26 + 166);
    r4 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EE588u>(ctx);
    r0 = 2048;
    MemoryInline::FlatWrite16((r26 + 198), static_cast<uint16_t>(r0));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(16));
    r0 = (r0_rot_12 & 65535);
    MemoryInline::FlatWrite16((r26 + 206), static_cast<uint16_t>(r0));
    r0 = (r31 & 65535);
    MemoryInline::FlatWrite16((r26 + 208), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r26 + 210), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r26 + 212), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r26 + 214), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r26 + 216), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r26 + 218), static_cast<uint16_t>(r30));
    r0 = MemoryInline::FlatRead32((r26 + 28));
    r0 = (r0 | 65536);
    r0 = (r0 | 33792);
    MemoryInline::FlatWrite32((r26 + 28), r0);
    goto loc_800EE4F0;
}

loc_800EE3C8:
{
    guest_range_6 = MemoryInline::ResolveRangeHost((r26 + 150), 0, 16u, false, true);
    MemoryInline::WriteResolved16(guest_range_6, 0u, (r26 + 150), static_cast<uint16_t>(r30));
    r0 = 25;
    MemoryInline::WriteResolved16(guest_range_6, 2u, (r26 + 152), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r25 + 8));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_5 & 65535);
    MemoryInline::WriteResolved16(guest_range_6, 4u, (r26 + 154), static_cast<uint16_t>(r0));
    r0 = (r3 & 65535);
    MemoryInline::WriteResolved16(guest_range_6, 6u, (r26 + 156), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r25 + 16));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_6 & 65535);
    MemoryInline::WriteResolved16(guest_range_6, 8u, (r26 + 158), static_cast<uint16_t>(r0));
    r0 = (r3 & 65535);
    MemoryInline::WriteResolved16(guest_range_6, 10u, (r26 + 160), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r25 + 20));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_7 & 65535);
    MemoryInline::WriteResolved16(guest_range_6, 12u, (r26 + 162), static_cast<uint16_t>(r0));
    r0 = (r3 & 65535);
    MemoryInline::WriteResolved16(guest_range_6, 14u, (r26 + 164), static_cast<uint16_t>(r0));
    r3 = (r26 + 166);
    r4 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EE588u>(ctx);
    r0 = 256;
    MemoryInline::FlatWrite16((r26 + 198), static_cast<uint16_t>(r0));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(16));
    r0 = (r0_rot_8 & 65535);
    MemoryInline::FlatWrite16((r26 + 206), static_cast<uint16_t>(r0));
    r0 = (r31 & 65535);
    MemoryInline::FlatWrite16((r26 + 208), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r26 + 210), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r26 + 212), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r26 + 214), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r26 + 216), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r26 + 218), static_cast<uint16_t>(r30));
    r0 = MemoryInline::FlatRead32((r26 + 28));
    r0 = (r0 | 65536);
    r0 = (r0 | 33792);
    MemoryInline::FlatWrite32((r26 + 28), r0);
    goto loc_800EE4F0;
}

loc_800EE45C:
{
    r0 = 1;
    guest_range_7 = MemoryInline::ResolveRangeHost((r26 + 150), 0, 16u, false, true);
    MemoryInline::WriteResolved16(guest_range_7, 0u, (r26 + 150), static_cast<uint16_t>(r0));
    r0 = 25;
    MemoryInline::WriteResolved16(guest_range_7, 2u, (r26 + 152), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r25 + 8));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & 65535);
    MemoryInline::WriteResolved16(guest_range_7, 4u, (r26 + 154), static_cast<uint16_t>(r0));
    r0 = (r3 & 65535);
    MemoryInline::WriteResolved16(guest_range_7, 6u, (r26 + 156), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r25 + 12));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & 65535);
    MemoryInline::WriteResolved16(guest_range_7, 8u, (r26 + 158), static_cast<uint16_t>(r0));
    r0 = (r3 & 65535);
    MemoryInline::WriteResolved16(guest_range_7, 10u, (r26 + 160), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r25 + 20));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_3 & 65535);
    MemoryInline::WriteResolved16(guest_range_7, 12u, (r26 + 162), static_cast<uint16_t>(r0));
    r0 = (r3 & 65535);
    MemoryInline::WriteResolved16(guest_range_7, 14u, (r26 + 164), static_cast<uint16_t>(r0));
    r3 = (r26 + 166);
    r4 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EE588u>(ctx);
    r0 = 256;
    MemoryInline::FlatWrite16((r26 + 198), static_cast<uint16_t>(r0));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(16));
    r0 = (r0_rot_4 & 65535);
    MemoryInline::FlatWrite16((r26 + 206), static_cast<uint16_t>(r0));
    r0 = (r31 & 65535);
    MemoryInline::FlatWrite16((r26 + 208), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r26 + 210), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r26 + 212), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r26 + 214), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r26 + 216), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r26 + 218), static_cast<uint16_t>(r30));
    r0 = MemoryInline::FlatRead32((r26 + 28));
    r0 = (r0 | 65536);
    r0 = (r0 | 33792);
    MemoryInline::FlatWrite32((r26 + 28), r0);
}

loc_800EE4F0:
{
    r3 = (r27 & 65535);
}

loc_800EE4F8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800EE514;
    }
}

loc_800EE4FC:
{
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 18), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 22), static_cast<uint16_t>(r0));
    goto loc_800EE540;
}

loc_800EE514:
{
    r4 = (r1 + 10);
    r5 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80471F10u>(ctx);
    r0 = 1;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 18), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 10));
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 8));
    MemoryInline::FlatWriteRam16((r1 + 22), static_cast<uint16_t>(r0));
}

loc_800EE540:
{
    r3 = r26;
    r4 = (r1 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80471E40u>(ctx);
    r3 = r29;
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
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
}

loc_inl2_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r11 = (r1 + 112);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_8 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_8, 32u, (r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000037FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFC003FF8 fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800EE078 func_800EE078 preserves=true fpr_mask=0x00000000
