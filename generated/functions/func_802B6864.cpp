#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027A304(CpuContext* ctx);
extern "C" uint64_t func_8027A304_ra58_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_802B6C30(CpuContext* ctx);
extern "C" uint32_t func_802B6C30_ra8_7e_8_0(CpuContext*, uint32_t, double, double, double, double, double, double);
extern "C" void func_802BE2F0(CpuContext* ctx);
extern "C" uint64_t func_802BE2F0_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_803BED04(CpuContext* ctx);
extern "C" uint64_t func_803BED04_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80457360(CpuContext* ctx);
extern "C" uint32_t func_80457360_ra8_1e_8_0(CpuContext*, uint32_t, double, double, double, double);

extern "C" void func_802B6864(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword11 = 0;
    uint32_t stackword12 = 0;
    uint32_t stackword13 = 0;
    uint32_t stackword14 = 0;
    uint32_t stackword9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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

    MKW_GUEST_ENTER(0x802B6864u);
    goto loc_802B6864;

loc_802B6864:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r30 = 0;
    r29 = 0;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 42));
}

loc_802B689C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802B6C18;
    }
}

loc_802B68A0:
{
    r25 = 1035;
    r0 = MemoryInline::FlatRead8((r4 + 136));
}

loc_802B68AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B68B8;
    }
}

loc_802B68B0:
{
    r25 = 843;
    goto loc_802B68C8;
}

loc_802B68B8:
{
    r0 = MemoryInline::FlatRead8((r4 + 181));
}

loc_802B68C0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802B68C8;
    }
}

loc_802B68C4:
{
    r25 = 747;
}

loc_802B68C8:
{
    r31 = MemoryInline::FlatRead32((r4 + 104));
    r3 = r28;
    r4 = 9;
    // inline leaf 0x8026A758 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r3 + 220));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8026A758
}

loc_802B68DC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B69F8;
    }
}

loc_802B68E0:
{
    r3 = r28;
    r4 = 6;
    // inline leaf 0x8026A758 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r3 + 220));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x8026A758
}

loc_802B68F0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_802B6908;
    }
}

loc_802B68F4:
{
    r3 = r28;
    r4 = 8;
    // inline leaf 0x8026A758 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r3 + 220));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x8026A758
}

loc_802B6904:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B69F8;
    }
}

loc_802B6908:
{
    r3 = r28;
    ctx->lr = 0x802B6910u;
    if constexpr (KnownRegArgsCpuCall<0x802BE2F0u>(&func_802BE2F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_802BE2F0_153B = func_802BE2F0_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802BE2F0_153B);
        r4 = static_cast<uint32_t>(regargs_result_802BE2F0_153B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x802BE2F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
}

loc_802B6914:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B69F8;
    }
}

loc_802B6918:
{
    r0 = MemoryInline::FlatRead8((r28 + 9));
}

loc_802B6920:
{
    r4 = 5;
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802B692C;
    }
}

loc_802B6928:
{
    r4 = 10;
}

loc_802B692C:
{
    r3 = MemoryInline::FlatRead8((r27 + 161));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_802B6938:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r4))) {
        goto loc_802B6944;
    }
}

loc_802B693C:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r27 + 161), static_cast<uint8_t>(r0));
}

loc_802B6944:
{
    f3.d = MemoryInline::FlatReadFloat64((r2 + -13664));
    stackword9 = r25;
    MemoryInline::FlatWriteRam32((r1 + 12), r25);
    r3 = 1127219200;
    stackword10 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword10), static_cast<uint32_t>(stackword9));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r0 = MemoryInline::FlatRead8((r27 + 161));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -13688));
    r0 = (r0 ^ -2147483648);
    stackword11 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    stackword12 = r3;
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword12), static_cast<uint32_t>(stackword11));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    stackword13 = r4;
    MemoryInline::FlatWriteRam32((r1 + 28), r4);
    stackword14 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword14), static_cast<uint32_t>(stackword13));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f1.d = PpcFmulsInline(f2.d, f0.d);
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        const auto regargs_result_80457360_21D3 = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_21D3;
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
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r25 = (r3 & 65535);
    r0 = MemoryInline::FlatRead8((r26 + 1180));
    r0 = (r0 & 1);
}

loc_802B69A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B69B4;
    }
}

loc_802B69AC:
{
    r0 = (0 - r25);
    r25 = (r0 & 65535);
}

loc_802B69B4:
{
    r3 = r28;
    r4 = 6;
    // inline leaf 0x8026A758 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r3 + 220));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
    // end of inlined leaf 0x8026A758
}

loc_802B69C4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B69D0;
    }
}

loc_802B69C8:
{
    r31 = (r31 + r25);
    goto loc_802B69E8;
}

loc_802B69D0:
{
    r3 = r28;
    r4 = 8;
    // inline leaf 0x8026A758 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r3 + 220));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
    // end of inlined leaf 0x8026A758
}

loc_802B69E0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B69E8;
    }
}

loc_802B69E4:
{
    r31 = (r31 - r25);
}

loc_802B69E8:
{
    MemoryInline::FlatWrite32((r27 + 104), r31);
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 145), static_cast<uint8_t>(r0));
    goto loc_802B6C10;
}

loc_802B69F8:
{
    r0 = MemoryInline::FlatRead8((r28 + 9));
}

loc_802B6A00:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802B6A10;
    }
}

loc_802B6A04:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 161), static_cast<uint8_t>(r0));
    goto loc_802B6A28;
}

loc_802B6A10:
{
    r3 = MemoryInline::FlatRead8((r27 + 161));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_802B6A1C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802B6A28;
    }
}

loc_802B6A20:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r27 + 161), static_cast<uint8_t>(r0));
}

loc_802B6A28:
{
    r3 = r27;
    ctx->lr = 0x802B6A30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x802B7880u>(ctx);
    r0 = ctx->gpr[0];
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
}

loc_802B6A34:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B6B40;
    }
}

loc_802B6A38:
{
    r0 = MemoryInline::FlatRead8((r27 + 156));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802B6A44:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_802B6B40;
    }
}

loc_802B6A48:
{
    r3 = MemoryInline::FlatRead8((r28 + 8));
    r4 = 11;
    ctx->lr = 0x802B6A54u;
    if constexpr (KnownRegArgsCpuCall<0x803BED04u>(&func_803BED04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_803BED04_32AA = func_803BED04_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803BED04_32AA);
        r4 = static_cast<uint32_t>(regargs_result_803BED04_32AA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803BED04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
}

loc_802B6A5C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_802B6B40;
    }
}

loc_802B6A60:
{
    r30 = 1;
    r0 = MemoryInline::FlatRead8((r27 + 158));
}

loc_802B6A6C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802B6AA8;
    }
}

loc_802B6A70:
{
    r0 = MemoryInline::FlatRead8((r27 + 156));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802B6A7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_802B6AA8;
    }
}

loc_802B6A80:
{
    r3 = MemoryInline::FlatRead32((r28 + 88));
    r3 = (r3 + 65536);
    r0 = (r3 + -32768);
    r3 = (r0 & 65535);
    MemoryInline::FlatWrite32((r27 + 104), r3);
    r0 = 10;
    MemoryInline::FlatWrite8((r27 + 161), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r27 + 173), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r27 + 174), static_cast<uint16_t>(r3));
}

loc_802B6AA8:
{
    r3 = MemoryInline::FlatRead32((r27 + 104));
    r0 = MemoryInline::FlatRead32((r28 + 88));
    r0 = (r0 & 65535);
    r0 = (r0 ^ 32768);
    r0 = (r0 - r3);
    r3 = (r0 & 65535);
    r0 = MemoryInline::FlatRead8((r27 + 156));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r4 + -2);
}

loc_802B6AD0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_802B6AE8;
    }
}

loc_802B6AD4:
{
}

loc_802B6AD8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_802B6AE8;
    }
}

loc_802B6ADC:
{
}

loc_802B6AE0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_802B6B20;
    }
}

loc_802B6AE4:
{
    goto loc_802B6C10;
}

loc_802B6AE8:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13680));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -13676));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -13672));
    if constexpr (KnownRegArgsCpuCall<0x802B6C30u>(&func_802B6C30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_802B6C30_3D4C = func_802B6C30_ra8_7e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d);
        r3 = regargs_result_802B6C30_3D4C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x802B6C30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
    }
    r0 = MemoryInline::FlatRead32((r27 + 104));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r27 + 104), r0);
    r3 = MemoryInline::FlatRead8((r27 + 156));
    r0 = (r3 + -2);
    r0 = (r0 & 255);
}

loc_802B6B14:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_802B6C10;
    }
}

loc_802B6B18:
{
    r30 = 0;
    goto loc_802B6C10;
}

loc_802B6B20:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -13676));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -13672));
    if constexpr (KnownRegArgsCpuCall<0x802B6C30u>(&func_802B6C30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_802B6C30_439D = func_802B6C30_ra8_7e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d);
        r3 = regargs_result_802B6C30_439D;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x802B6C30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
    }
    r0 = MemoryInline::FlatRead32((r27 + 104));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r27 + 104), r0);
    goto loc_802B6C10;
}

loc_802B6B40:
{
    r3 = r28;
    r4 = 0;
    ctx->lr = 0x802B6B4Cu;
    if constexpr (KnownRegArgsCpuCall<0x8027A304u>(&func_8027A304)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        const auto regargs_result_8027A304_48A4 = func_8027A304_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8027A304_48A4);
        r4 = static_cast<uint32_t>(regargs_result_8027A304_48A4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8027A304u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
}

loc_802B6B50:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B6BC0;
    }
}

loc_802B6B54:
{
    r0 = MemoryInline::FlatRead8((r27 + 159));
}

loc_802B6B5C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802B6B88;
    }
}

loc_802B6B60:
{
    r3 = MemoryInline::FlatRead32((r28 + 88));
    r3 = (r3 + 65536);
    r0 = (r3 + -32768);
    r3 = (r0 & 65535);
    MemoryInline::FlatWrite32((r27 + 104), r3);
    r0 = 10;
    MemoryInline::FlatWrite8((r27 + 161), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r27 + 173), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r27 + 174), static_cast<uint16_t>(r3));
}

loc_802B6B88:
{
    r3 = MemoryInline::FlatRead32((r27 + 104));
    r0 = MemoryInline::FlatRead32((r28 + 88));
    r0 = (r0 & 65535);
    r0 = (r0 ^ 32768);
    r0 = (r0 - r3);
    r3 = (r0 & 65535);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -13676));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -13672));
    if constexpr (KnownRegArgsCpuCall<0x802B6C30u>(&func_802B6C30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_802B6C30_5174 = func_802B6C30_ra8_7e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d);
        r3 = regargs_result_802B6C30_5174;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x802B6C30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
    }
    r0 = MemoryInline::FlatRead32((r27 + 104));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r27 + 104), r0);
    goto loc_802B6C10;
}

loc_802B6BC0:
{
    r3 = r28;
    r4 = 0;
    // inline leaf 0x8026A758 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r3 + 220));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_9 & 1);
    // end of inlined leaf 0x8026A758
}

loc_802B6BD0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B6C10;
    }
}

loc_802B6BD4:
{
    r3 = r28;
    ctx->lr = 0x802B6BDCu;
    if constexpr (KnownRegArgsCpuCall<0x802BE2F0u>(&func_802BE2F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_802BE2F0_5896 = func_802BE2F0_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802BE2F0_5896);
        r4 = static_cast<uint32_t>(regargs_result_802BE2F0_5896 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x802BE2F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
}

loc_802B6BE0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B6C10;
    }
}

loc_802B6BE4:
{
    r3 = MemoryInline::FlatRead32((r28 + 88));
    r3 = (r3 + 65536);
    r0 = (r3 + -32768);
    r3 = (r0 & 65535);
    MemoryInline::FlatWrite32((r27 + 104), r3);
    r0 = 10;
    MemoryInline::FlatWrite8((r27 + 161), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r27 + 173), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r27 + 174), static_cast<uint16_t>(r3));
    r29 = 1;
}

loc_802B6C10:
{
    MemoryInline::FlatWrite8((r27 + 158), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r27 + 159), static_cast<uint8_t>(r29));
}

loc_802B6C18:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802B6864 func_802B6864 preserves=true fpr_mask=0x00000000
