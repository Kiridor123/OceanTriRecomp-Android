#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F45C4(CpuContext* ctx);
extern "C" uint64_t func_800F45C4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8012D0D8(CpuContext* ctx);
extern "C" uint32_t func_8012D0D8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8012E6A8(CpuContext* ctx);
extern "C" uint64_t func_8012E6A8_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8012E6B8(CpuContext* ctx);
extern "C" uint64_t func_8012E6B8_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8012E8E8(CpuContext* ctx);
extern "C" uint64_t func_8012E8E8_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_801359B4(CpuContext* ctx);
extern "C" uint64_t func_801359B4_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8027BCAC(CpuContext* ctx);
extern "C" uint32_t func_8027BCAC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8028F118(CpuContext* ctx);
extern "C" uint64_t func_8028F118_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802BC5C8(CpuContext* ctx);
extern "C" uint64_t func_802BC5C8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802BEEA0(CpuContext* ctx);
extern "C" uint64_t func_802BEEA0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_803A880C(CpuContext* ctx);
extern "C" uint32_t func_803A880C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B1E1C(CpuContext* ctx);
extern "C" uint32_t func_803B1E1C_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803B4BD8(CpuContext* ctx);
extern "C" uint32_t func_803B4BD8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B4C50(CpuContext* ctx);
extern "C" uint32_t func_803B4C50_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B4CC8(CpuContext* ctx);
extern "C" uint32_t func_803B4CC8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B4D4C(CpuContext* ctx);
extern "C" uint32_t func_803B4D4C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B4DC4(CpuContext* ctx);
extern "C" uint32_t func_803B4DC4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B5208(CpuContext* ctx);
extern "C" uint32_t func_803B5208_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B6558(CpuContext* ctx);
extern "C" uint64_t func_803B6558_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803B6864(CpuContext* ctx);
extern "C" uint64_t func_803B6864_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803B6954(CpuContext* ctx);
extern "C" uint64_t func_803B6954_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_803A9728_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    const uint32_t r21_entry = r21;
    uint32_t ctr = ctx->ctr;

    goto loc_803A9728;

loc_803A9728:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457470 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    // end of inlined leaf 0x80457470
    r21 = r3;
    r24 = r4;
    r23 = r5;
    r30 = 0;
    ctx->lr = 0x803A9750u;
    if constexpr (KnownRegArgsCpuCall<0x803A880Cu>(&func_803A880C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803A880C_14E7 = func_803A880C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803A880C_14E7;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803A880Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = r3;
}

loc_803A9758:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803A9BC8;
    }
}

loc_803A975C:
{
    r22 = 0;
    r28 = 0;
    r25 = 0;
    r0 = (r23 & 255);
}

loc_803A9770:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803A97D8;
    }
}

loc_803A9774:
{
    r30 = r24;
    r29 = MemoryInline::FlatRead16((r24 + 26));
    r23 = MemoryInline::FlatRead8((r24 + 13));
    r27 = MemoryInline::FlatRead8((r24 + 3));
    r3 = r24;
    ctx->lr = 0x803A978Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012E8E8u>(&func_8012E8E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012E8E8_1990 = func_8012E8E8_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8012E8E8_1990);
        r4 = static_cast<uint32_t>(regargs_result_8012E8E8_1990 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012E8E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r26 = r3;
    r3 = r24;
    if constexpr (KnownRegArgsCpuCall<0x8012E6A8u>(&func_8012E6A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012E6A8_1C5C = func_8012E6A8_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8012E6A8_1C5C);
        r4 = static_cast<uint32_t>(regargs_result_8012E6A8_1C5C >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012E6A8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = MemoryInline::FlatRead32((r24 + 456));
    r0 = (r0 & 1);
}

loc_803A97A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A97D0;
    }
}

loc_803A97A8:
{
    r25 = 1;
    r3 = r24;
    ctx->lr = 0x803A97B4u;
    if constexpr (KnownRegArgsCpuCall<0x801359B4u>(&func_801359B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_801359B4_2036 = func_801359B4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801359B4_2036);
        r4 = static_cast<uint32_t>(regargs_result_801359B4_2036 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x801359B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5604));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5608));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r28 = fctiwzword0;
}

loc_803A97D0:
{
    r24 = MemoryInline::FlatRead8((r24 + 19));
    goto loc_803A97FC;
}

loc_803A97D8:
{
    r29 = MemoryInline::FlatRead16((r24 + 22));
    r23 = MemoryInline::FlatRead8((r24 + 13));
    r27 = MemoryInline::FlatRead8((r24 + 2));
    r3 = r24;
    // inline leaf 0x8012E924 (7 guest instruction(s))
    r4 = MemoryInline::FlatRead8((r3 + 20));
    r3 = (r4 + -2);
    r0 = (2 - r4);
    r0 = ~(r3 | r0);
    r0 = (static_cast<int32_t>(r0) >> 31);
    r3 = (r0 & 2);
    // end of inlined leaf 0x8012E924
    r26 = r3;
    r3 = r24;
    if constexpr (KnownRegArgsCpuCall<0x8012E6B8u>(&func_8012E6B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012E6B8_2797 = func_8012E6B8_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8012E6B8_2797);
        r4 = static_cast<uint32_t>(regargs_result_8012E6B8_2797 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012E6B8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r24 = MemoryInline::FlatRead8((r24 + 29));
}

loc_803A97FC:
{
    r0 = (r26 & 255);
}

loc_803A9804:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803A9830;
    }
}

loc_803A9808:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r4 = (r31 + r0);
    r3 = MemoryInline::FlatRead16((r4 + 1168));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r4 + 1168), static_cast<uint16_t>(r0));
    r3 = 1;
    r4 = r27;
    r4 = (r4 & 65535);
    r5 = 1;
    if constexpr (KnownRegArgsCpuCall<0x803B1E1Cu>(&func_803B1E1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B1E1C_2C56 = func_803B1E1C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_803B1E1C_2C56;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803B1E1Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_803A9830:
{
    r0 = (r26 & 255);
}

loc_803A9838:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803A9850;
    }
}

loc_803A983C:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r4 = (r31 + r0);
    r3 = MemoryInline::FlatRead16((r4 + 1250));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r4 + 1250), static_cast<uint16_t>(r0));
}

loc_803A9850:
{
}

loc_803A9854:
{
    if ((static_cast<uint32_t>(r25) != static_cast<uint32_t>(1))) {
        goto loc_803A98AC;
    }
}

loc_803A9858:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r3 = (r31 + r4);
    r5 = MemoryInline::FlatRead16((r3 + 1332));
}

loc_803A9868:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_803A9874;
    }
}

loc_803A986C:
{
    MemoryInline::FlatWrite16((r3 + 1332), static_cast<uint16_t>(r28));
    goto loc_803A9884;
}

loc_803A9874:
{
    r0 = (r28 & 65535);
}

loc_803A987C:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r0))) {
        goto loc_803A9884;
    }
}

loc_803A9880:
{
    MemoryInline::FlatWrite16((r3 + 1332), static_cast<uint16_t>(r28));
}

loc_803A9884:
{
    r3 = (r31 + r4);
    r4 = MemoryInline::FlatRead16((r3 + 1334));
}

loc_803A9890:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_803A989C;
    }
}

loc_803A9894:
{
    MemoryInline::FlatWrite16((r3 + 1334), static_cast<uint16_t>(r28));
    goto loc_803A98AC;
}

loc_803A989C:
{
    r0 = (r28 & 65535);
}

loc_803A98A4:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_803A98AC;
    }
}

loc_803A98A8:
{
    MemoryInline::FlatWrite16((r3 + 1334), static_cast<uint16_t>(r28));
}

loc_803A98AC:
{
    r3 = r29;
    r4 = (r24 & 255);
    ctx->lr = 0x803A98B8u;
    if constexpr (KnownRegArgsCpuCall<0x8028F118u>(&func_8028F118)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_8028F118_368A = func_8028F118_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8028F118_368A);
        r4 = static_cast<uint32_t>(regargs_result_8028F118_368A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8028F118u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
}

loc_803A98BC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803A98D4;
    }
}

loc_803A98C0:
{
    r4 = MemoryInline::FlatRead16((r3 + 4));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_803A98C8:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_803A98D4;
    }
}

loc_803A98CC:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
}

loc_803A98D4:
{
}

loc_803A98D8:
{
    if ((static_cast<uint32_t>(r23) <= static_cast<uint32_t>(2))) {
        goto loc_803A9934;
    }
}

loc_803A98DC:
{
}

loc_803A98E0:
{
    if ((static_cast<uint32_t>(r25) != static_cast<uint32_t>(1))) {
        goto loc_803A9BC8;
    }
}

loc_803A98E4:
{
    r3 = 0;
    ctx->lr = 0x803A98ECu;
    if constexpr (KnownRegArgsCpuCall<0x8027BCACu>(&func_8027BCAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8027BCAC_3D54 = func_8027BCAC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8027BCAC_3D54;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027BCACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803A98F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803A9BC8;
    }
}

loc_803A98F4:
{
    r4 = 3;
    r3 = (r21 + 48);
    r0 = 3;
    ctr = r0;
}

loc_803A9904:
{
    r0 = MemoryInline::FlatRead16((r3 + 8826));
}

loc_803A990C:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(r0))) {
        goto loc_803A9924;
    }
}

loc_803A9910:
{
    r4 = (r31 + r4);
    r3 = MemoryInline::FlatRead8((r4 + 27005));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r4 + 27005), static_cast<uint8_t>(r0));
    goto loc_803A9BC8;
}

loc_803A9924:
{
    r3 = (r3 + 16);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803A9904;
    }
}

loc_803A9930:
{
    goto loc_803A9BC8;
}

loc_803A9934:
{
    r3 = 0;
    ctx->lr = 0x803A993Cu;
    if constexpr (KnownRegArgsCpuCall<0x803B4DC4u>(&func_803B4DC4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B4DC4_4340 = func_803B4DC4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4DC4_4340;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B4DC4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803A9940:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803A9954;
    }
}

loc_803A9944:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 26999), static_cast<uint8_t>(r0));
    r0 = (2 - r23);
    r23 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803A9954:
{
    r3 = 0;
    ctx->lr = 0x803A995Cu;
    if constexpr (KnownRegArgsCpuCall<0x803B4D4Cu>(&func_803B4D4C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B4D4C_473E = func_803B4D4C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4D4C_473E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B4D4Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803A9960:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803A996C;
    }
}

loc_803A9964:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 26999), static_cast<uint8_t>(r0));
}

loc_803A996C:
{
    r3 = r27;
    r3 = (r3 & 65535);
    r4 = (r26 & 255);
    r5 = (r1 + 8);
    ctx->lr = 0x803A9980u;
    if constexpr (KnownRegArgsCpuCall<0x803B6558u>(&func_803B6558)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_803B6558_4B66 = func_803B6558_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803B6558_4B66);
        r4 = static_cast<uint32_t>(regargs_result_803B6558_4B66 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
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
        ctr = ctx->ctr;
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
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803B6558u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
        ctr = ctx->ctr;
    }
}

loc_803A9984:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803A9BC8;
    }
}

loc_803A9988:
{
    r3 = 0;
    ctx->lr = 0x803A9990u;
    if constexpr (KnownRegArgsCpuCall<0x803B4BD8u>(&func_803B4BD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B4BD8_532A = func_803B4BD8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4BD8_532A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B4BD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803A9994:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_803A9BC8;
    }
}

loc_803A9998:
{
    r3 = 0;
    ctx->lr = 0x803A99A0u;
    if constexpr (KnownRegArgsCpuCall<0x803B4C50u>(&func_803B4C50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B4C50_566B = func_803B4C50_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4C50_566B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B4C50u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803A99A4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803A9B44;
    }
}

loc_803A99A8:
{
    r3 = 0;
    ctx->lr = 0x803A99B0u;
    if constexpr (KnownRegArgsCpuCall<0x803B4DC4u>(&func_803B4DC4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B4DC4_59AA = func_803B4DC4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4DC4_59AA;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B4DC4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803A99B4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803A99D0;
    }
}

loc_803A99B8:
{
    r0 = (r23 + -1);
    r0 = (r0 & 255);
}

loc_803A99C4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_803A9AF8;
    }
}

loc_803A99C8:
{
    r22 = 1;
    goto loc_803A9AF8;
}

loc_803A99D0:
{
    r3 = 0;
    ctx->lr = 0x803A99D8u;
    if constexpr (KnownRegArgsCpuCall<0x803B4CC8u>(&func_803B4CC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B4CC8_5DE8 = func_803B4CC8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4CC8_5DE8;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B4CC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803A99DC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_803A99F0;
    }
}

loc_803A99E0:
{
    r3 = 0;
    ctx->lr = 0x803A99E8u;
    if constexpr (KnownRegArgsCpuCall<0x803B4D4Cu>(&func_803B4D4C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B4D4C_6129 = func_803B4D4C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4D4C_6129;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B4D4Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803A99EC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803A9A80;
    }
}

loc_803A99F0:
{
    r0 = MemoryInline::FlatRead32((r31 + 148));
    r3 = (r0 & 9);
}

loc_803A99F8:
{
}

loc_803A99FC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(9))) {
        goto loc_803A9A64;
    }
}

loc_803A9A00:
{
    r0 = MemoryInline::FlatRead32((r31 + 244));
    r0 = (r0 & 9);
}

loc_803A9A08:
{
}

loc_803A9A0C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(9))) {
        goto loc_803A9A64;
    }
}

loc_803A9A10:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r23)));
}

loc_803A9A18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803A9A3C;
    }
}

loc_803A9A1C:
{
    r3 = r31;
    r4 = 1;
    r5 = 0;
    ctx->lr = 0x803A9A2Cu;
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x803AA0C4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    ctr = ctx->ctr;
}

loc_803A9A30:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803A9AF8;
    }
}

loc_803A9A34:
{
    r22 = 1;
    goto loc_803A9AF8;
}

loc_803A9A3C:
{
}

loc_803A9A40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_803A9AF8;
    }
}

loc_803A9A44:
{
    r3 = r31;
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x803A9A54u;
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x803AA0C4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    ctr = ctx->ctr;
}

loc_803A9A58:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803A9AF8;
    }
}

loc_803A9A5C:
{
    r22 = 1;
    goto loc_803A9AF8;
}

loc_803A9A64:
{
}

loc_803A9A68:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(9))) {
        goto loc_803A9AF8;
    }
}

loc_803A9A6C:
{
    r0 = MemoryInline::FlatRead16((r31 + 154));
}

loc_803A9A74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A9AF8;
    }
}

loc_803A9A78:
{
    r22 = 1;
    goto loc_803A9AF8;
}

loc_803A9A80:
{
    r3 = 0;
    ctx->lr = 0x803A9A88u;
    if constexpr (KnownRegArgsCpuCall<0x803B5208u>(&func_803B5208)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B5208_7150 = func_803B5208_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B5208_7150;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B5208u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803A9A8C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803A9AD8;
    }
}

loc_803A9A90:
{
    r21 = 0;
}

loc_803A9A94:
{
    r3 = r31;
    r4 = r21;
    // inline leaf 0x803AA324 (12 guest instruction(s))
}

loc_inl2_0x803AA324:
{
    r0 = (r4 * 96);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 148));
}

loc_inl2_0x803AA334:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x803AA340;
    }
}

loc_inl2_0x803AA338:
{
    r3 = 0;
    goto loc_inl2_cont_803AA324;
}

loc_inl2_0x803AA340:
{
    r3 = (r0 & 8);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
}

loc_inl2_cont_803AA324:
{
    // end of inlined leaf 0x803AA324
}

loc_803A9AA4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803A9AC8;
    }
}

loc_803A9AA8:
{
    r3 = r31;
    r4 = r21;
    r5 = 0;
    ctx->lr = 0x803A9AB8u;
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x803AA0C4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    ctr = ctx->ctr;
}

loc_803A9ABC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803A9AC8;
    }
}

loc_803A9AC0:
{
    r22 = 1;
    goto loc_803A9AF8;
}

loc_803A9AC8:
{
    r21 = (r21 + 1);
}

loc_803A9AD0:
{
    if ((static_cast<int32_t>(r21) < static_cast<int32_t>(3))) {
        goto loc_803A9A94;
    }
}

loc_803A9AD4:
{
    goto loc_803A9AF8;
}

loc_803A9AD8:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r23)));
}

loc_803A9AE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803A9AF4;
    }
}

loc_803A9AE4:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803A9AF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A9AF8;
    }
}

loc_803A9AF4:
{
    r22 = 1;
}

loc_803A9AF8:
{
}

loc_803A9AFC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_803A9BC8;
    }
}

loc_803A9B00:
{
}

loc_803A9B04:
{
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(0))) {
        goto loc_803A9BC8;
    }
}

loc_803A9B08:
{
    // inline leaf 0x800470BC (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    r3 = MemoryInline::FlatRead8((r3 + 26));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
    // end of inlined leaf 0x800470BC
}

loc_803A9B10:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803A9B24;
    }
}

loc_803A9B14:
{
    r3 = 1;
    r4 = r30;
    ctx->lr = 0x803A9B20u;
    if constexpr (KnownRegArgsCpuCall<0x802BEEA0u>(&func_802BEEA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_802BEEA0_820C = func_802BEEA0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802BEEA0_820C);
        r4 = static_cast<uint32_t>(regargs_result_802BEEA0_820C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802BEEA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    goto loc_803A9BC8;
}

loc_803A9B24:
{
    r3 = r30;
    ctx->lr = 0x803A9B2Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012D0D8u>(&func_8012D0D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012D0D8_85BB = func_8012D0D8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8012D0D8_85BB;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8012D0D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_803A9B30:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803A9BC8;
    }
}

loc_803A9B34:
{
    r3 = 1;
    r4 = r30;
    ctx->lr = 0x803A9B40u;
    if constexpr (KnownRegArgsCpuCall<0x802BC5C8u>(&func_802BC5C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802BC5C8_889F = func_802BC5C8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802BC5C8_889F);
        r4 = static_cast<uint32_t>(regargs_result_802BC5C8_889F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802BC5C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_803A9BC8;
}

loc_803A9B44:
{
    r22 = 0;
    r21 = 0;
}

loc_803A9B4C:
{
    r3 = r21;
    ctx->lr = 0x803A9B54u;
    if constexpr (KnownRegArgsCpuCall<0x803B6954u>(&func_803B6954)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B6954_8BDF = func_803B6954_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803B6954_8BDF);
        r4 = static_cast<uint32_t>(regargs_result_803B6954_8BDF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B6954u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = r21;
    ctx->lr = 0x803A9B5Cu;
    if constexpr (KnownRegArgsCpuCall<0x803B6864u>(&func_803B6864)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_803B6864_8ED6 = func_803B6864_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803B6864_8ED6);
        r4 = static_cast<uint32_t>(regargs_result_803B6864_8ED6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803B6864u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
}

loc_803A9B60:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_803A9B68;
    }
}

loc_803A9B64:
{
    r22 = (r22 + r3);
}

loc_803A9B68:
{
    r21 = (r21 + 1);
}

loc_803A9B70:
{
    if ((static_cast<int32_t>(r21) < static_cast<int32_t>(3))) {
        goto loc_803A9B4C;
    }
}

loc_803A9B74:
{
}

loc_803A9B78:
{
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(0))) {
        goto loc_803A9BC0;
    }
}

loc_803A9B7C:
{
}

loc_803A9B80:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_803A9BC8;
    }
}

loc_803A9B84:
{
    // inline leaf 0x800470BC (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    r3 = MemoryInline::FlatRead8((r3 + 26));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
    // end of inlined leaf 0x800470BC
}

loc_803A9B8C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803A9BA0;
    }
}

loc_803A9B90:
{
    r3 = 1;
    r4 = r30;
    ctx->lr = 0x803A9B9Cu;
    if constexpr (KnownRegArgsCpuCall<0x802BEEA0u>(&func_802BEEA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_802BEEA0_9711 = func_802BEEA0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802BEEA0_9711);
        r4 = static_cast<uint32_t>(regargs_result_802BEEA0_9711 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802BEEA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    goto loc_803A9BC8;
}

loc_803A9BA0:
{
    r3 = r30;
    ctx->lr = 0x803A9BA8u;
    if constexpr (KnownRegArgsCpuCall<0x8012D0D8u>(&func_8012D0D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012D0D8_9AC0 = func_8012D0D8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8012D0D8_9AC0;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8012D0D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_803A9BAC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803A9BC8;
    }
}

loc_803A9BB0:
{
    r3 = 1;
    r4 = r30;
    ctx->lr = 0x803A9BBCu;
    if constexpr (KnownRegArgsCpuCall<0x802BC5C8u>(&func_802BC5C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802BC5C8_9DA4 = func_802BC5C8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802BC5C8_9DA4);
        r4 = static_cast<uint32_t>(regargs_result_802BC5C8_9DA4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802BC5C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_803A9BC8;
}

loc_803A9BC0:
{
    r3 = 0;
    ctx->lr = 0x803A9BC8u;
    if constexpr (KnownRegArgsCpuCall<0x800F45C4u>(&func_800F45C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[21] = r21;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_800F45C4_A11D = func_800F45C4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F45C4_A11D);
        r4 = static_cast<uint32_t>(regargs_result_800F45C4_A11D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r21 = ctx->gpr[21];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->gpr[21] = r21;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800F45C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r21 = ctx->gpr[21];
        f0 = ctx->fpr[0];
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
}

loc_803A9BC8:
{
    r11 = (r1 + 80);
    // inline leaf 0x804574BC (12 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    // end of inlined leaf 0x804574BC
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    ctx->gpr[21] = r21_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803A9728(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803A9728_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x001FFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803A9728 func_803A9728 preserves=true fpr_mask=0x00000000
