#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050684(CpuContext* ctx);
extern "C" uint64_t func_80050684_ra18_18_18_0(CpuContext*, uint32_t, uint32_t, double, double);
extern "C" void func_800515D8(CpuContext* ctx);
extern "C" uint64_t func_800515D8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800E0880(CpuContext* ctx);
extern "C" uint64_t func_800E0880_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801117B8(CpuContext* ctx);
extern "C" uint64_t func_801117B8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80112674(CpuContext* ctx);
extern "C" uint64_t func_80112674_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_802D29F4(CpuContext* ctx);
extern "C" uint64_t func_802D29F4_ra58_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_80111044_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
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
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;

    goto loc_80111044;

loc_80111044:
{
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    r11 = (r1 + 176);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r28 = r3;
    r3 = (r1 + 36);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 24);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 96);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 48);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r29 = MemoryInline::FlatRead32((r28 + 56));
    r3 = r28;
    r4 = 2;
    ctx->lr = 0x8011108Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x800F9358u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
}

loc_80111090:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801110AC;
    }
}

loc_80111094:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r28 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r28 + 5), static_cast<uint8_t>(r0));
    goto loc_80111390;
}

loc_801110AC:
{
    r30 = MemoryInline::FlatRead32((r28 + 48));
    r0 = MemoryInline::FlatRead8((r30 + 1));
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 420));
    MemoryInline::FlatWrite8((r28 + 68), static_cast<uint8_t>(r0));
    r3 = r30;
    // inline leaf 0x802D2A14 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 88));
    // end of inlined leaf 0x802D2A14
    r31 = r3;
    r0 = (r3 & 65535);
}

loc_801110D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_80111390;
    }
}

loc_801110D8:
{
    r3 = r30;
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28956));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -29212));
    ctx->lr = 0x801110ECu;
    if constexpr (KnownRegArgsCpuCall<0x802D29F4u>(&func_802D29F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        const auto regargs_result_802D29F4_1487 = func_802D29F4_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802D29F4_1487);
        r4 = static_cast<uint32_t>(regargs_result_802D29F4_1487 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x802D29F4u>(ctx);
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

loc_801110F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80111390;
    }
}

loc_801110F4:
{
    r3 = r28;
    r4 = 1;
    ctx->lr = 0x80111100u;
    if constexpr (KnownRegArgsCpuCall<0x801117B8u>(&func_801117B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_801117B8_1A37 = func_801117B8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801117B8_1A37);
        r4 = static_cast<uint32_t>(regargs_result_801117B8_1A37 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x801117B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r3 = (r1 + 36);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28896));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -29212));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -29044));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r4 = 8192;
    MemoryInline::FlatWrite32((r28 + 36), r4);
    r3 = 65536;
    r0 = (r3 + -16383);
    MemoryInline::FlatWrite32((r28 + 40), r0);
    MemoryInline::FlatWrite32((r28 + 44), r4);
    r0 = MemoryInline::FlatRead16((r30 + 962));
}

loc_80111134:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(27))) {
        goto loc_80111164;
    }
}

loc_80111138:
{
}

loc_8011113C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(26))) {
        goto loc_8011116C;
    }
}

loc_80111140:
{
}

loc_80111144:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(28))) {
        goto loc_801111C4;
    }
}

loc_80111148:
{
}

loc_8011114C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(30))) {
        goto loc_801111CC;
    }
}

loc_80111150:
{
}

loc_80111154:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(31))) {
        goto loc_801111D4;
    }
}

loc_80111158:
{
}

loc_8011115C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(32))) {
        goto loc_801111DC;
    }
}

loc_80111160:
{
    goto loc_801111E4;
}

loc_80111164:
{
    r27 = 1;
    goto loc_801111E8;
}

loc_8011116C:
{
    r27 = 2;
    r3 = r30;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29168));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -29212));
    ctx->lr = 0x80111184u;
    if constexpr (KnownRegArgsCpuCall<0x802D29F4u>(&func_802D29F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        const auto regargs_result_802D29F4_2574 = func_802D29F4_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802D29F4_2574);
        r4 = static_cast<uint32_t>(regargs_result_802D29F4_2574 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x802D29F4u>(ctx);
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

loc_80111188:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801111E8;
    }
}

loc_8011118C:
{
    r3 = (r1 + 24);
    r4 = (r28 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29164));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    r3 = (r1 + 24);
    r4 = MemoryInline::FlatRead8((r28 + 68));
    r5 = 27;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29160));
    f2.d = f1.d;
    ctx->lr = 0x801111C0u;
    if constexpr (KnownRegArgsCpuCall<0x80112674u>(&func_80112674)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_80112674_2D68 = func_80112674_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80112674_2D68);
        r4 = static_cast<uint32_t>(regargs_result_80112674_2D68 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x80112674u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
    }
    goto loc_801111E8;
}

loc_801111C4:
{
    r27 = 4;
    goto loc_801111E8;
}

loc_801111CC:
{
    r27 = 5;
    goto loc_801111E8;
}

loc_801111D4:
{
    r27 = 6;
    goto loc_801111E8;
}

loc_801111DC:
{
    r27 = 7;
    goto loc_801111E8;
}

loc_801111E4:
{
    r27 = 0;
}

loc_801111E8:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r0 - r27);
    r3 = 0x805A0000u;
    r3 = (r3 + -656);
    r3_addr_1 = (r3 + r4);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r0));
    r5 = (r4 + 1);
    r3_addr_2 = (r3 + r5);
    r0 = MemoryInline::FlatRead8(r3_addr_2);
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r0));
    r6 = (r4 + 2);
    r3_addr_3 = (r3 + r6);
    r0 = MemoryInline::FlatRead8(r3_addr_3);
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r0));
    r3 = 0x805A0000u;
    r3 = (r3 + -632);
    r3_addr_4 = (r3 + r4);
    r0 = MemoryInline::FlatRead8(r3_addr_4);
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r0));
    r3_addr_5 = (r3 + r5);
    r0 = MemoryInline::FlatRead8(r3_addr_5);
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r0));
    r3_addr_6 = (r3 + r6);
    r0 = MemoryInline::FlatRead8(r3_addr_6);
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = MemoryInline::FlatRead32((r29 + 16));
    r4 = 3;
    r5 = 4;
    r6 = (r1 + 12);
    r7 = 0;
    ctx->lr = 0x80111264u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x800E2950u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r0 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead32((r29 + 16));
    r4 = 4;
    r5 = 4;
    r6 = (r1 + 8);
    r7 = 0;
    ctx->lr = 0x80111284u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x800E2950u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r3 = (r30 + 8);
    r4 = 12;
    r5 = (r1 + 96);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0A78u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29192));
    MemoryInline::FlatWriteFloat32((r29 + 4), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 8), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 12), f0.d);
}

loc_801112AC:
{
    r0 = (r31 & 65535);
    MemoryInline::FlatWrite32((r29 + 48), r0);
    r3 = (r1 + 36);
    r4 = (r1 + 96);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800514A4u>(ctx);
    r3 = (r1 + 96);
    r4 = (r28 + 24);
    // inline leaf 0x80101470 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 28));
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 44));
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    // end of inlined leaf 0x80101470
    f1.d = MemoryInline::FlatReadFloat32((r28 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 24), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 28), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 32), f0.d);
    r3 = (r1 + 48);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    r3 = (r1 + 48);
    r4 = (r29 + 4);
    // inline leaf 0x800506D8 (37 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32(r3);
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 12u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 16), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 20), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 24));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 24), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 32), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 36), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 40));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 40), f0.d);
    // end of inlined leaf 0x800506D8
    r3 = (r28 + 36);
    r4 = (r1 + 48);
    ctx->lr = 0x8011131Cu;
    if constexpr (KnownRegArgsCpuCall<0x80050684u>(&func_80050684)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_80050684_4FC7 = func_80050684_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80050684_4FC7);
        r4 = static_cast<uint32_t>(regargs_result_80050684_4FC7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80050684u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r3 = (r1 + 96);
    r4 = (r1 + 48);
    ctx->lr = 0x80111328u;
    if constexpr (KnownRegArgsCpuCall<0x800515D8u>(&func_800515D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        const auto regargs_result_800515D8_54E9 = func_800515D8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800515D8_54E9);
        r4 = static_cast<uint32_t>(regargs_result_800515D8_54E9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x800515D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    f0.d = MemoryInline::FlatReadFloat32((r28 + 24));
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 28));
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 32));
    MemoryInline::FlatWriteRamFloat32((r1 + 140), f0.d);
    r27 = 0;
    r30 = r29;
    r31 = (r29 + 16);
    goto loc_80111384;
}

loc_80111350:
{
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r4 = (r1 + 96);
    r5 = 0;
    ctx->lr = 0x80111360u;
    if constexpr (KnownRegArgsCpuCall<0x800E0880u>(&func_800E0880)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        const auto regargs_result_800E0880_5C30 = func_800E0880_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E0880_5C30);
        r4 = static_cast<uint32_t>(regargs_result_800E0880_5C30 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x800E0880u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r3 = r28;
    r4 = r31;
    r5 = 2;
    r6 = 1;
    r7 = 0;
    ctx->lr = 0x80111378u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x800F943Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r30 = (r30 + 4);
    r31 = (r31 + 4);
    r27 = (r27 + 1);
}

loc_80111384:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_8011138C:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r0))) {
        goto loc_80111350;
    }
}

loc_80111390:
{
    r11 = (r1 + 176);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80111044(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80111044_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80111044 func_80111044 preserves=true fpr_mask=0x00000000
