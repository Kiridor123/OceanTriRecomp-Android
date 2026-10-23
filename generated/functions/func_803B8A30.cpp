#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004E644(CpuContext* ctx);
extern "C" uint32_t func_8004E644_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800F45C4(CpuContext* ctx);
extern "C" uint64_t func_800F45C4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8012E6A8(CpuContext* ctx);
extern "C" uint64_t func_8012E6A8_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8012E6B8(CpuContext* ctx);
extern "C" uint64_t func_8012E6B8_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8012E8E8(CpuContext* ctx);
extern "C" uint64_t func_8012E8E8_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_801359B4(CpuContext* ctx);
extern "C" uint64_t func_801359B4_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8028EFE0(CpuContext* ctx);
extern "C" uint64_t func_8028EFE0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802EF3A4(CpuContext* ctx);
extern "C" uint64_t func_802EF3A4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803AAEE0(CpuContext* ctx);
extern "C" uint32_t func_803AAEE0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B89A4(CpuContext* ctx);
extern "C" uint64_t func_803B89A4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803B9298(CpuContext* ctx);
extern "C" uint32_t func_803B9298_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_803B8A30_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_10 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r5_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_803B8A30;

loc_803B8A30:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r30 = r3;
    r22 = r4;
    r28 = 0;
    r27 = 0;
    // inline leaf 0x8004D184 (5 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead32((r3 + 2396));
    MemoryInline::FlatWrite32((r13 + -17824), r3);
    // end of inlined leaf 0x8004D184
    r26 = 0;
    r23 = 0;
    r0 = (r22 & 255);
}

loc_803B8A68:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803B8AC4;
    }
}

loc_803B8A6C:
{
    r27 = r30;
    r29 = MemoryInline::FlatRead16((r30 + 26));
    r25 = MemoryInline::FlatRead8((r30 + 3));
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x8012E6A8u>(&func_8012E6A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012E6A8_12C3 = func_8012E6A8_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8012E6A8_12C3);
        r4 = static_cast<uint32_t>(regargs_result_8012E6A8_12C3 >> 32);
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
    r22 = r3;
    r3 = r30;
    ctx->lr = 0x803B8A8Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012E8E8u>(&func_8012E8E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012E8E8_1575 = func_8012E8E8_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8012E8E8_1575);
        r4 = static_cast<uint32_t>(regargs_result_8012E8E8_1575 >> 32);
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
    r24 = r3;
    r0 = MemoryInline::FlatRead32((r30 + 456));
    r0 = (r0 & 1);
}

loc_803B8A9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B8AE4;
    }
}

loc_803B8AA0:
{
    r23 = 1;
    r3 = r30;
    ctx->lr = 0x803B8AACu;
    if constexpr (KnownRegArgsCpuCall<0x801359B4u>(&func_801359B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_801359B4_1994 = func_801359B4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801359B4_1994);
        r4 = static_cast<uint32_t>(regargs_result_801359B4_1994 >> 32);
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
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5356));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r26 = fctiwzword0;
    goto loc_803B8AE4;
}

loc_803B8AC4:
{
    r29 = MemoryInline::FlatRead16((r30 + 22));
    r25 = MemoryInline::FlatRead8((r30 + 2));
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x8012E6B8u>(&func_8012E6B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012E6B8_1ED1 = func_8012E6B8_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8012E6B8_1ED1);
        r4 = static_cast<uint32_t>(regargs_result_8012E6B8_1ED1 >> 32);
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
    r22 = r3;
    r3 = r30;
    // inline leaf 0x8012E924 (7 guest instruction(s))
    r4 = MemoryInline::FlatRead8((r3 + 20));
    r3 = (r4 + -2);
    r0 = (2 - r4);
    r0 = ~(r3 | r0);
    r0 = (static_cast<int32_t>(r0) >> 31);
    r3 = (r0 & 2);
    // end of inlined leaf 0x8012E924
    r24 = r3;
}

loc_803B8AE4:
{
    r3 = r29;
    ctx->lr = 0x803B8AECu;
    if constexpr (KnownRegArgsCpuCall<0x8028EFE0u>(&func_8028EFE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8028EFE0_22C4 = func_8028EFE0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8028EFE0_22C4);
        r4 = static_cast<uint32_t>(regargs_result_8028EFE0_22C4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8028EFE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803B8AF0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803B8B08;
    }
}

loc_803B8AF4:
{
    r4 = MemoryInline::FlatRead16((r3 + 4));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_803B8AFC:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_803B8B08;
    }
}

loc_803B8B00:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
}

loc_803B8B08:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = 0x80600000u;
    r3 = (r3 + -30448);
    r3_addr_0 = (r3 + r0);
    r29 = MemoryInline::FlatRead32(r3_addr_0);
    r31 = 0;
    r30 = 0;
}

loc_803B8B24:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_803B8C30;
    }
}

loc_803B8B28:
{
    r4 = MemoryInline::FlatRead32((r13 + -22424));
    r3 = MemoryInline::FlatRead8((r4 + 15));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r4 + 15), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -22424));
    r0 = MemoryInline::FlatRead8((r3 + 15));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803B8B48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803B8B54;
    }
}

loc_803B8B4C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 26068), r0);
}

loc_803B8B54:
{
    r0 = (r24 & 255);
}

loc_803B8B5C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803B8BA8;
    }
}

loc_803B8B60:
{
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & -2);
    r0 = MemoryInline::FlatRead32((r13 + -22424));
    r4 = (r0 + r5);
    r3 = MemoryInline::FlatRead16((r4 + 872));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r4 + 872), static_cast<uint16_t>(r0));
    r28 = 2;
    r0 = MemoryInline::FlatRead32((r13 + -22424));
    r3 = (r0 + r5);
    r30 = MemoryInline::FlatRead16((r3 + 872));
    r31 = 1;
}

loc_803B8B90:
{
    if ((static_cast<uint32_t>(r30) <= static_cast<uint32_t>(99))) {
        goto loc_803B8B9C;
    }
}

loc_803B8B94:
{
    r0 = 99;
    MemoryInline::FlatWrite16((r3 + 872), static_cast<uint16_t>(r0));
}

loc_803B8B9C:
{
    r3 = r25;
    r4 = 1;
    // inline leaf 0x8004E5CC (15 guest instruction(s))
}

loc_inl3_0x8004E5CC:
{
    r0 = (r3 & 255);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & -2);
    r0 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = (r0 + r5);
    r0 = MemoryInline::FlatRead16((r3 + 14784));
    r0 = (r0 + r4);
    MemoryInline::FlatWrite16((r3 + 14784), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = (r0 + r5);
    r0 = MemoryInline::FlatRead16((r3 + 14784));
}

loc_inl3_0x8004E5F8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(9999))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x8004E5FC:
{
    r0 = 9999;
    MemoryInline::FlatWrite16((r3 + 14784), static_cast<uint16_t>(r0));
    goto loc_inl3_cont_8004E5CC;
}

loc_inl3_return:
{
}

loc_inl3_cont_8004E5CC:
{
    // end of inlined leaf 0x8004E5CC
}

loc_803B8BA8:
{
    r0 = (r24 & 255);
}

loc_803B8BB0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803B8C08;
    }
}

loc_803B8BB4:
{
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(1));
    r5 = (r5_rot_4 & -2);
    r0 = MemoryInline::FlatRead32((r13 + -22424));
    r4 = (r0 + r5);
    r3 = MemoryInline::FlatRead16((r4 + 954));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r4 + 954), static_cast<uint16_t>(r0));
}

loc_803B8BD0:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_803B8BD8;
    }
}

loc_803B8BD4:
{
    r29 = (r29 + 12);
}

loc_803B8BD8:
{
    r28 = 4;
    r0 = MemoryInline::FlatRead32((r13 + -22424));
    r3 = (r0 + r5);
    r30 = MemoryInline::FlatRead16((r3 + 954));
    r31 = 2;
}

loc_803B8BF0:
{
    if ((static_cast<uint32_t>(r30) <= static_cast<uint32_t>(99))) {
        goto loc_803B8BFC;
    }
}

loc_803B8BF4:
{
    r0 = 99;
    MemoryInline::FlatWrite16((r3 + 954), static_cast<uint16_t>(r0));
}

loc_803B8BFC:
{
    r3 = r25;
    r4 = 1;
    // inline leaf 0x8004E608 (15 guest instruction(s))
}

loc_inl4_0x8004E608:
{
    r0 = (r3 & 255);
    r5_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_5 & -2);
    r0 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = (r0 + r5);
    r0 = MemoryInline::FlatRead16((r3 + 15040));
    r0 = (r0 + r4);
    MemoryInline::FlatWrite16((r3 + 15040), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = (r0 + r5);
    r0 = MemoryInline::FlatRead16((r3 + 15040));
}

loc_inl4_0x8004E634:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(9999))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x8004E638:
{
    r0 = 9999;
    MemoryInline::FlatWrite16((r3 + 15040), static_cast<uint16_t>(r0));
    goto loc_inl4_cont_8004E608;
}

loc_inl4_return:
{
}

loc_inl4_cont_8004E608:
{
    // end of inlined leaf 0x8004E608
}

loc_803B8C08:
{
    r3 = r25;
    r4 = (r26 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x8004E644u>(&func_8004E644)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8004E644_3B4C = func_8004E644_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8004E644_3B4C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8004E644u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_803B8C18:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_803B8C24;
    }
}

loc_803B8C1C:
{
    r3 = r27;
    if constexpr (KnownRegArgsCpuCall<0x803B9298u>(&func_803B9298)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B9298_3E96 = func_803B9298_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_803B9298_3E96;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B9298u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
}

loc_803B8C24:
{
    r3 = 0;
    ctx->lr = 0x803B8C2Cu;
    if constexpr (KnownRegArgsCpuCall<0x800F45C4u>(&func_800F45C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_800F45C4_412B = func_800F45C4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F45C4_412B);
        r4 = static_cast<uint32_t>(regargs_result_800F45C4_412B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
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
        ctx->gpr[6] = r6;
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
        InvokeDirectCpu<0x800F45C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
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
    goto loc_803B8CC0;
}

loc_803B8C30:
{
    r0 = (r24 & 255);
}

loc_803B8C38:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_803B8E68;
    }
}

loc_803B8C3C:
{
    r4 = MemoryInline::FlatRead32((r13 + -22424));
    r3 = MemoryInline::FlatRead16((r4 + 1118));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r4 + 1118), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -22424));
    r0 = MemoryInline::FlatRead16((r3 + 1118));
}

loc_803B8C58:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(99))) {
        goto loc_803B8C64;
    }
}

loc_803B8C5C:
{
    r0 = 99;
    MemoryInline::FlatWrite16((r3 + 1118), static_cast<uint16_t>(r0));
}

loc_803B8C64:
{
}

loc_803B8C68:
{
    if ((static_cast<uint32_t>(r22) != static_cast<uint32_t>(1))) {
        goto loc_803B8C78;
    }
}

loc_803B8C6C:
{
}

loc_803B8C70:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_803B8C78;
    }
}

loc_803B8C74:
{
    r29 = (r29 + 12);
}

loc_803B8C78:
{
    r5_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(1));
    r5 = (r5_rot_7 & -2);
    r0 = MemoryInline::FlatRead32((r13 + -22424));
    r4 = (r0 + r5);
    r3 = MemoryInline::FlatRead16((r4 + 872));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r4 + 872), static_cast<uint16_t>(r0));
    r28 = 1;
    r0 = MemoryInline::FlatRead32((r13 + -22424));
    r3 = (r0 + r5);
    r30 = MemoryInline::FlatRead16((r3 + 872));
    r31 = 0;
}

loc_803B8CA8:
{
    if ((static_cast<uint32_t>(r30) <= static_cast<uint32_t>(99))) {
        goto loc_803B8CB4;
    }
}

loc_803B8CAC:
{
    r0 = 99;
    MemoryInline::FlatWrite16((r3 + 872), static_cast<uint16_t>(r0));
}

loc_803B8CB4:
{
    r3 = r25;
    r4 = 1;
    // inline leaf 0x8004E5CC (15 guest instruction(s))
}

loc_inl5_0x8004E5CC:
{
    r0 = (r3 & 255);
    r5_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_8 & -2);
    r0 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = (r0 + r5);
    r0 = MemoryInline::FlatRead16((r3 + 14784));
    r0 = (r0 + r4);
    MemoryInline::FlatWrite16((r3 + 14784), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = (r0 + r5);
    r0 = MemoryInline::FlatRead16((r3 + 14784));
}

loc_inl5_0x8004E5F8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(9999))) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x8004E5FC:
{
    r0 = 9999;
    MemoryInline::FlatWrite16((r3 + 14784), static_cast<uint16_t>(r0));
    goto loc_inl5_cont_8004E5CC;
}

loc_inl5_return:
{
}

loc_inl5_cont_8004E5CC:
{
    // end of inlined leaf 0x8004E5CC
}

loc_803B8CC0:
{
}

loc_803B8CC4:
{
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(99))) {
        goto loc_803B8CD4;
    }
}

loc_803B8CC8:
{
    r30 = 99;
    r26 = 1;
    goto loc_803B8CD8;
}

loc_803B8CD4:
{
    r26 = 0;
}

loc_803B8CD8:
{
    ctx->lr = 0x803B8CDCu;
    if constexpr (KnownRegArgsCpuCall<0x803AAEE0u>(&func_803AAEE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803AAEE0_54B9 = func_803AAEE0_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803AAEE0_54B9;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803AAEE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803B8CE0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803B8E68;
    }
}

loc_803B8CE4:
{
}

loc_803B8CE8:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_803B8D90;
    }
}

loc_803B8CEC:
{
    r4 = MemoryInline::FlatRead32((r13 + -22424));
    r5 = (r4 + 26072);
    goto loc_803B8D64;
}

loc_803B8CF8:
{
    r0 = (r3 & 255);
}

loc_803B8D00:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r25))) {
        goto loc_803B8D60;
    }
}

loc_803B8D04:
{
}

loc_803B8D08:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_803B8D4C;
    }
}

loc_803B8D0C:
{
    r0 = (r24 & 255);
}

loc_803B8D14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803B8D28;
    }
}

loc_803B8D18:
{
    r3 = MemoryInline::FlatRead32((r4 + 1240));
    r0 = MemoryInline::FlatRead16((r5 + 2));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r4 + 1240), r0);
}

loc_803B8D28:
{
    r0 = (r24 & 255);
}

loc_803B8D30:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803B8D74;
    }
}

loc_803B8D34:
{
    r4 = MemoryInline::FlatRead32((r13 + -22424));
    r3 = MemoryInline::FlatRead32((r4 + 1240));
    r0 = MemoryInline::FlatRead16((r5 + 4));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r4 + 1240), r0);
    goto loc_803B8D74;
}

loc_803B8D4C:
{
    r3 = MemoryInline::FlatRead32((r4 + 1240));
    r0 = MemoryInline::FlatRead16((r5 + 2));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r4 + 1240), r0);
    goto loc_803B8D74;
}

loc_803B8D60:
{
    r5 = (r5 + 6);
}

loc_803B8D64:
{
    r3 = MemoryInline::FlatRead16(r5);
    r0 = (r3 & 255);
}

loc_803B8D70:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803B8CF8;
    }
}

loc_803B8D74:
{
    r5 = MemoryInline::FlatRead32((r13 + -22424));
    r4 = MemoryInline::FlatRead32((r5 + 1240));
    r3 = 983040;
    r0 = (r3 + 16959);
}

loc_803B8D88:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_803B8D90;
    }
}

loc_803B8D8C:
{
    MemoryInline::FlatWrite32((r5 + 1240), r0);
}

loc_803B8D90:
{
    r3 = r25;
    r4 = r30;
    r5 = r31;
    ctx->lr = 0x803B8DA0u;
    if constexpr (KnownRegArgsCpuCall<0x802EF3A4u>(&func_802EF3A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_802EF3A4_60DA = func_802EF3A4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802EF3A4_60DA);
        r4 = static_cast<uint32_t>(regargs_result_802EF3A4_60DA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        InvokeDirectCpu<0x802EF3A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
}

loc_803B8DA4:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_803B8E68;
    }
}

loc_803B8DA8:
{
}

loc_803B8DAC:
{
    if ((static_cast<uint32_t>(r26) != static_cast<uint32_t>(1))) {
        goto loc_803B8DB4;
    }
}

loc_803B8DB0:
{
    goto loc_803B8E68;
}

loc_803B8DB4:
{
    r23 = 0;
    r3 = 1374420992;
    r22 = (r3 + -31457);
    goto loc_803B8E60;
}

loc_803B8DC4:
{
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl6_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl6_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl6_0x800CEF40;
    }
}

loc_inl6_0x800CEF3C:
{
    r0 = 1;
}

loc_inl6_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_3 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_2 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl6_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r4 = (r3 & 65535);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r22)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 100);
    r5 = (r4 - r0);
    r3 = 0;
    r0 = MemoryInline::FlatRead8(r29);
    r4 = r0;
}

loc_803B8DF8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r5))) {
        goto loc_803B8E3C;
    }
}

loc_803B8DFC:
{
    r3 = 1;
    r0 = MemoryInline::FlatRead8((r29 + 1));
    r4 = (r4 + r0);
}

loc_803B8E0C:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r5))) {
        goto loc_803B8E3C;
    }
}

loc_803B8E10:
{
    r3 = 2;
    r0 = MemoryInline::FlatRead8((r29 + 2));
    r4 = (r4 + r0);
}

loc_803B8E20:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r5))) {
        goto loc_803B8E3C;
    }
}

loc_803B8E24:
{
    r3 = 3;
    r0 = MemoryInline::FlatRead8((r29 + 3));
    r4 = (r4 + r0);
}

loc_803B8E34:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r5))) {
        goto loc_803B8E3C;
    }
}

loc_803B8E38:
{
    r3 = 4;
}

loc_803B8E3C:
{
}

loc_803B8E40:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(4))) {
        goto loc_803B8E5C;
    }
}

loc_803B8E44:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r3 = (r29 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 4));
}

loc_803B8E54:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803B8E5C;
    }
}

loc_803B8E58:
{
    if constexpr (KnownRegArgsCpuCall<0x803B89A4u>(&func_803B89A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_803B89A4_7201 = func_803B89A4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803B89A4_7201);
        r4 = static_cast<uint32_t>(regargs_result_803B89A4_7201 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x803B89A4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_803B8E5C:
{
    r23 = (r23 + 1);
}

loc_803B8E60:
{
}

loc_803B8E64:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(r28))) {
        goto loc_803B8DC4;
    }
}

loc_803B8E68:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803B8A30(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803B8A30_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x003FFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803B8A30 func_803B8A30 preserves=true fpr_mask=0x00000000
