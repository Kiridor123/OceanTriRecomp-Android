#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80114C84(CpuContext* ctx);
extern "C" uint64_t func_80114C84_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802791B8(CpuContext* ctx);
extern "C" uint32_t func_802791B8_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802791F8(CpuContext* ctx);
extern "C" uint64_t func_802791F8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8027D138_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    const uint32_t r23_entry = r23;
    const uint32_t r24_entry = r24;
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_8027D138;

loc_8027D138:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r27 = r3;
    r28 = r4;
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl1_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB10;
    }
}

loc_inl1_0x800CFB08:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB24;
    }
}

loc_inl1_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl1_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r29 = r3;
    r3 = 2;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl2_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl2_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CFB50;
    }
}

loc_inl2_0x800CFB48:
{
    r3 = 0;
    goto loc_inl2_cont_800CFB34;
}

loc_inl2_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl2_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl2_0x800CFB64;
    }
}

loc_inl2_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl2_cont_800CFB34;
}

loc_inl2_0x800CFB64:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl2_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r30 = (r3 & 65535);
    r31 = 0;
    r26 = 5400;
    r25 = 0;
    r24 = 9000;
    r23 = 0x805C0000u;
    goto loc_8027D434;
}

loc_8027D184:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_8027D18C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027D42C;
    }
}

loc_8027D190:
{
    r3 = MemoryInline::FlatRead8((r29 + 22));
    r0 = (r27 & 255);
}

loc_8027D19C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8027D42C;
    }
}

loc_8027D1A0:
{
    r4 = (r28 & 255);
}

loc_8027D1A8:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(14))) {
        goto loc_8027D42C;
    }
}

loc_8027D1AC:
{
    r3 = (r23 + 27064);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8027D1C0u:
        goto loc_8027D1C0;
        break;
    case 0x8027D1DCu:
        goto loc_8027D1DC;
        break;
    case 0x8027D200u:
        goto loc_8027D200;
        break;
    case 0x8027D22Cu:
        goto loc_8027D22C;
        break;
    case 0x8027D260u:
        goto loc_8027D260;
        break;
    case 0x8027D2A0u:
        goto loc_8027D2A0;
        break;
    case 0x8027D2F4u:
        goto loc_8027D2F4;
        break;
    case 0x8027D308u:
        goto loc_8027D308;
        break;
    case 0x8027D328u:
        goto loc_8027D328;
        break;
    case 0x8027D348u:
        goto loc_8027D348;
        break;
    case 0x8027D368u:
        goto loc_8027D368;
        break;
    case 0x8027D398u:
        goto loc_8027D398;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_8027D1C0:
{
    r3 = r29;
    r4 = 50;
    ctx->lr = 0x8027D1CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x802762F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
    r3 = r29;
    r4 = 0;
    ctx->lr = 0x8027D1D8u;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80114C84_1D19 = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_1D19);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_1D19 >> 32);
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
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    goto loc_8027D42C;
}

loc_8027D1DC:
{
    r3 = r29;
    r4 = 1;
    r5 = 10;
    if constexpr (KnownRegArgsCpuCall<0x802791B8u>(&func_802791B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802791B8_20C5 = func_802791B8_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802791B8_20C5;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802791B8u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWrite16((r29 + 1098), static_cast<uint16_t>(r26));
    r3 = r29;
    r4 = 1;
    ctx->lr = 0x8027D1FCu;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80114C84_2381 = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_2381);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_2381 >> 32);
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
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    goto loc_8027D42C;
}

loc_8027D200:
{
    r3 = r29;
    r4 = 1;
    r5 = 20;
    if constexpr (KnownRegArgsCpuCall<0x802791F8u>(&func_802791F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802791F8_272D = func_802791F8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802791F8_272D);
        r4 = static_cast<uint32_t>(regargs_result_802791F8_272D >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802791F8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8027D214:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8027D21C;
    }
}

loc_8027D218:
{
    MemoryInline::FlatWrite16((r29 + 1102), static_cast<uint16_t>(r26));
}

loc_8027D21C:
{
    r3 = r29;
    r4 = 2;
    ctx->lr = 0x8027D228u;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80114C84_2B10 = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_2B10);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_2B10 >> 32);
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
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    goto loc_8027D42C;
}

loc_8027D22C:
{
}

loc_8027D230:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(3))) {
        goto loc_8027D244;
    }
}

loc_8027D234:
{
    r3 = r29;
    r4 = 20;
    ctx->lr = 0x8027D240u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x802762F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
    goto loc_8027D250;
}

loc_8027D244:
{
    r3 = r29;
    r4 = 50;
    ctx->lr = 0x8027D250u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x802762F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
}

loc_8027D250:
{
    r3 = r29;
    r4 = 0;
    ctx->lr = 0x8027D25Cu;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80114C84_32D6 = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_32D6);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_32D6 >> 32);
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
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    goto loc_8027D42C;
}

loc_8027D260:
{
}

loc_8027D264:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(4))) {
        goto loc_8027D27C;
    }
}

loc_8027D268:
{
    r3 = r29;
    r4 = 1;
    r5 = 3;
    if constexpr (KnownRegArgsCpuCall<0x802791B8u>(&func_802791B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802791B8_3716 = func_802791B8_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802791B8_3716;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802791B8u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    goto loc_8027D28C;
}

loc_8027D27C:
{
    r3 = r29;
    r4 = 1;
    r5 = 5;
    if constexpr (KnownRegArgsCpuCall<0x802791B8u>(&func_802791B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802791B8_398F = func_802791B8_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802791B8_398F;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802791B8u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
}

loc_8027D28C:
{
    MemoryInline::FlatWrite16((r29 + 1098), static_cast<uint16_t>(r26));
    r3 = r29;
    r4 = 1;
    ctx->lr = 0x8027D29Cu;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80114C84_3C62 = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_3C62);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_3C62 >> 32);
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
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    goto loc_8027D42C;
}

loc_8027D2A0:
{
}

loc_8027D2A4:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(5))) {
        goto loc_8027D2C8;
    }
}

loc_8027D2A8:
{
    r3 = r29;
    r4 = 1;
    r5 = 10;
    if constexpr (KnownRegArgsCpuCall<0x802791F8u>(&func_802791F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802791F8_40A3 = func_802791F8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802791F8_40A3);
        r4 = static_cast<uint32_t>(regargs_result_802791F8_40A3 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802791F8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8027D2BC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8027D2E4;
    }
}

loc_8027D2C0:
{
    MemoryInline::FlatWrite16((r29 + 1102), static_cast<uint16_t>(r26));
    goto loc_8027D2E4;
}

loc_8027D2C8:
{
    r3 = r29;
    r4 = 1;
    r5 = 20;
    if constexpr (KnownRegArgsCpuCall<0x802791F8u>(&func_802791F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802791F8_4477 = func_802791F8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802791F8_4477);
        r4 = static_cast<uint32_t>(regargs_result_802791F8_4477 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802791F8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8027D2DC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8027D2E4;
    }
}

loc_8027D2E0:
{
    MemoryInline::FlatWrite16((r29 + 1102), static_cast<uint16_t>(r26));
}

loc_8027D2E4:
{
    r3 = r29;
    r4 = 2;
    ctx->lr = 0x8027D2F0u;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80114C84_485A = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_485A);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_485A >> 32);
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
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    goto loc_8027D42C;
}

loc_8027D2F4:
{
    MemoryInline::FlatWrite16((r29 + 1002), static_cast<uint16_t>(r25));
    r3 = r29;
    r4 = 4;
    ctx->lr = 0x8027D304u;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80114C84_4C77 = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_4C77);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_4C77 >> 32);
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
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    goto loc_8027D42C;
}

loc_8027D308:
{
    r0 = MemoryInline::FlatRead16((r29 + 1126));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8027D310:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(9000))) {
        goto loc_8027D318;
    }
}

loc_8027D314:
{
    MemoryInline::FlatWrite16((r29 + 1126), static_cast<uint16_t>(r24));
}

loc_8027D318:
{
    r3 = r29;
    r4 = 7;
    ctx->lr = 0x8027D324u;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80114C84_51B5 = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_51B5);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_51B5 >> 32);
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
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    goto loc_8027D42C;
}

loc_8027D328:
{
    r0 = MemoryInline::FlatRead16((r29 + 1124));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8027D330:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(9000))) {
        goto loc_8027D338;
    }
}

loc_8027D334:
{
    MemoryInline::FlatWrite16((r29 + 1124), static_cast<uint16_t>(r24));
}

loc_8027D338:
{
    r3 = r29;
    r4 = 6;
    ctx->lr = 0x8027D344u;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80114C84_56F3 = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_56F3);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_56F3 >> 32);
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
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    goto loc_8027D42C;
}

loc_8027D348:
{
    r0 = MemoryInline::FlatRead16((r29 + 1042));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8027D350:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(5400))) {
        goto loc_8027D358;
    }
}

loc_8027D354:
{
    MemoryInline::FlatWrite16((r29 + 1042), static_cast<uint16_t>(r26));
}

loc_8027D358:
{
    r3 = r29;
    r4 = 5;
    ctx->lr = 0x8027D364u;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80114C84_5C31 = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_5C31);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_5C31 >> 32);
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
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    goto loc_8027D42C;
}

loc_8027D368:
{
    r3 = r29;
    r4 = 1;
    r5 = 5400;
    // inline leaf 0x8027D708 (7 guest instruction(s))
}

loc_inl3_0x8027D708:
{
    MemoryInline::FlatWrite8((r3 + 1104), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead16((r3 + 1108));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
}

loc_inl3_0x8027D718:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x8027D71C:
{
    MemoryInline::FlatWrite16((r3 + 1108), static_cast<uint16_t>(r5));
    goto loc_inl3_cont_8027D708;
}

loc_inl3_return:
{
}

loc_inl3_cont_8027D708:
{
    // end of inlined leaf 0x8027D708
    r3 = r29;
    r4 = 1;
    r5 = 5400;
    // inline leaf 0x8027D724 (7 guest instruction(s))
}

loc_inl4_0x8027D724:
{
    MemoryInline::FlatWrite8((r3 + 1105), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead16((r3 + 1110));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
}

loc_inl4_0x8027D734:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x8027D738:
{
    MemoryInline::FlatWrite16((r3 + 1110), static_cast<uint16_t>(r5));
    goto loc_inl4_cont_8027D724;
}

loc_inl4_return:
{
}

loc_inl4_cont_8027D724:
{
    // end of inlined leaf 0x8027D724
    r3 = r29;
    r4 = 9;
    ctx->lr = 0x8027D394u;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80114C84_65D4 = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_65D4);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_65D4 >> 32);
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
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    goto loc_8027D42C;
}

loc_8027D398:
{
    MemoryInline::FlatWrite16((r29 + 1070), static_cast<uint16_t>(r25));
    r0 = MemoryInline::FlatRead16((r29 + 1080));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8027D3A4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(5400))) {
        goto loc_8027D3AC;
    }
}

loc_8027D3A8:
{
    MemoryInline::FlatWrite16((r29 + 1080), static_cast<uint16_t>(r26));
}

loc_8027D3AC:
{
    MemoryInline::FlatWrite16((r29 + 1072), static_cast<uint16_t>(r25));
    r0 = MemoryInline::FlatRead16((r29 + 1082));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8027D3B8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(5400))) {
        goto loc_8027D3C0;
    }
}

loc_8027D3BC:
{
    MemoryInline::FlatWrite16((r29 + 1082), static_cast<uint16_t>(r26));
}

loc_8027D3C0:
{
    MemoryInline::FlatWrite16((r29 + 1074), static_cast<uint16_t>(r25));
    r0 = MemoryInline::FlatRead16((r29 + 1084));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8027D3CC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(5400))) {
        goto loc_8027D3D4;
    }
}

loc_8027D3D0:
{
    MemoryInline::FlatWrite16((r29 + 1084), static_cast<uint16_t>(r26));
}

loc_8027D3D4:
{
    MemoryInline::FlatWrite16((r29 + 1076), static_cast<uint16_t>(r25));
    r0 = MemoryInline::FlatRead16((r29 + 1086));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8027D3E0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(5400))) {
        goto loc_8027D3E8;
    }
}

loc_8027D3E4:
{
    MemoryInline::FlatWrite16((r29 + 1086), static_cast<uint16_t>(r26));
}

loc_8027D3E8:
{
    MemoryInline::FlatWrite16((r29 + 1078), static_cast<uint16_t>(r25));
    r0 = MemoryInline::FlatRead16((r29 + 1088));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8027D3F4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(5400))) {
        goto loc_8027D3FC;
    }
}

loc_8027D3F8:
{
    MemoryInline::FlatWrite16((r29 + 1088), static_cast<uint16_t>(r26));
}

loc_8027D3FC:
{
    r31 = 5;
    MemoryInline::FlatWrite16((r29 + 1028), static_cast<uint16_t>(r25));
    MemoryInline::FlatWrite16((r29 + 1032), static_cast<uint16_t>(r25));
    MemoryInline::FlatWrite16((r29 + 1030), static_cast<uint16_t>(r25));
    MemoryInline::FlatWrite16((r29 + 1034), static_cast<uint16_t>(r25));
    MemoryInline::FlatWrite16((r29 + 1036), static_cast<uint16_t>(r25));
    r0 = MemoryInline::FlatRead32((r29 + 988));
    r0 = (r0 & -1024);
    MemoryInline::FlatWrite32((r29 + 988), r0);
    r3 = r29;
    r4 = 9;
    ctx->lr = 0x8027D42Cu;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80114C84_742A = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_742A);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_742A >> 32);
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
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
}

loc_8027D42C:
{
    r31 = (r31 + 1);
    r29 = (r29 + 2848);
}

loc_8027D434:
{
}

loc_8027D438:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r30))) {
        goto loc_8027D184;
    }
}

loc_8027D43C:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    ctx->gpr[23] = r23_entry;
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

extern "C" void func_8027D138(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8027D138_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8027D138 func_8027D138 preserves=true fpr_mask=0x00000000
