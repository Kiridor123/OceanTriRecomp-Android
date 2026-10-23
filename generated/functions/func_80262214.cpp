#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8026F96C(CpuContext* ctx);
extern "C" uint64_t func_8026F96C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8026FA08(CpuContext* ctx);
extern "C" uint64_t func_8026FA08_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8026FB84(CpuContext* ctx);
extern "C" uint64_t func_8026FB84_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8026FCA4(CpuContext* ctx);
extern "C" uint64_t func_8026FCA4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80262214_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addze_src_0 = 0;
    uint32_t r0_addze_src_1 = 0;
    uint32_t r0_addze_src_10 = 0;
    uint32_t r0_addze_src_11 = 0;
    uint32_t r0_addze_src_2 = 0;
    uint32_t r0_addze_src_3 = 0;
    uint32_t r0_addze_src_4 = 0;
    uint32_t r0_addze_src_5 = 0;
    uint32_t r0_addze_src_6 = 0;
    uint32_t r0_addze_src_7 = 0;
    uint32_t r0_addze_src_8 = 0;
    uint32_t r0_addze_src_9 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_10 = 0;
    uint32_t r0_ca_11 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r0_ca_5 = 0;
    uint32_t r0_ca_6 = 0;
    uint32_t r0_ca_7 = 0;
    uint32_t r0_ca_8 = 0;
    uint32_t r0_ca_9 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
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
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80262214;

loc_80262214:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 6), 0, 6u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r4 + 6));
    r0 = (r0 & 16383);
}

loc_8026223C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(31))) {
        goto loc_802626D0;
    }
}

loc_80262240:
{
    r5 = 0x805C0000u;
    r5 = (r5 + 24232);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5_addr_1 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_1);
    ctr = r5;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80262258u:
        goto loc_80262258;
        break;
    case 0x80262268u:
        goto loc_80262268;
        break;
    case 0x802622BCu:
        goto loc_802622BC;
        break;
    case 0x802622DCu:
        goto loc_802622DC;
        break;
    case 0x80262314u:
        goto loc_80262314;
        break;
    case 0x80262344u:
        goto loc_80262344;
        break;
    case 0x80262360u:
        goto loc_80262360;
        break;
    case 0x80262390u:
        goto loc_80262390;
        break;
    case 0x802623C0u:
        goto loc_802623C0;
        break;
    case 0x802623DCu:
        goto loc_802623DC;
        break;
    case 0x80262430u:
        goto loc_80262430;
        break;
    case 0x80262460u:
        goto loc_80262460;
        break;
    case 0x80262494u:
        goto loc_80262494;
        break;
    case 0x802624B0u:
        goto loc_802624B0;
        break;
    case 0x802624CCu:
        goto loc_802624CC;
        break;
    case 0x802624ECu:
        goto loc_802624EC;
        break;
    case 0x8026250Cu:
        goto loc_8026250C;
        break;
    case 0x8026252Cu:
        goto loc_8026252C;
        break;
    case 0x802622F8u:
        goto loc_802622F8;
        break;
    case 0x80262288u:
        goto loc_80262288;
        break;
    case 0x802623F8u:
        goto loc_802623F8;
        break;
    case 0x80262414u:
        goto loc_80262414;
        break;
    case 0x8026254Cu:
        goto loc_8026254C;
        break;
    case 0x80262564u:
        goto loc_80262564;
        break;
    case 0x80262594u:
        goto loc_80262594;
        break;
    case 0x802625C4u:
        goto loc_802625C4;
        break;
    case 0x802625DCu:
        goto loc_802625DC;
        break;
    case 0x80262638u:
        goto loc_80262638;
        break;
    case 0x802626A0u:
        goto loc_802626A0;
        break;
    case 0x80262608u:
        goto loc_80262608;
        break;
    case 0x8026266Cu:
        goto loc_8026266C;
        break;
    case 0x80262260u:
        goto loc_80262260;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_80262258:
{
    r3 = 1;
    goto loc_802626D4;
}

loc_80262260:
{
    r3 = 0;
    goto loc_802626D4;
}

loc_80262268:
{
    r4 = 1;
    r5 = MemoryInline::FlatRead16((r31 + 8));
    r6 = MemoryInline::FlatRead16((r31 + 10));
    ctx->lr = 0x80262278u;
    if constexpr (KnownRegArgsCpuCall<0x8026FA08u>(&func_8026FA08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026FA08_1A18 = func_8026FA08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FA08_1A18);
        r4 = static_cast<uint32_t>(regargs_result_8026FA08_1A18 >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FA08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8026227C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802626D0;
    }
}

loc_80262280:
{
    r3 = 1;
    goto loc_802626D4;
}

loc_80262288:
{
    r4 = 1;
    r5 = MemoryInline::FlatRead16((r31 + 8));
    r6 = MemoryInline::FlatRead16((r31 + 10));
    ctx->lr = 0x80262298u;
    if constexpr (KnownRegArgsCpuCall<0x8026FA08u>(&func_8026FA08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026FA08_1F17 = func_8026FA08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FA08_1F17);
        r4 = static_cast<uint32_t>(regargs_result_8026FA08_1F17 >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FA08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8026229C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802626D0;
    }
}

loc_802622A0:
{
    r3 = MemoryInline::FlatRead16((r30 + 200));
    r0 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r3 & r0);
}

loc_802622B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802626D0;
    }
}

loc_802622B4:
{
    r3 = 1;
    goto loc_802626D4;
}

loc_802622BC:
{
    r4 = 0;
    r5 = MemoryInline::FlatRead16((r31 + 8));
    r6 = MemoryInline::FlatRead16((r31 + 10));
    ctx->lr = 0x802622CCu;
    if constexpr (KnownRegArgsCpuCall<0x8026FA08u>(&func_8026FA08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026FA08_251F = func_8026FA08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FA08_251F);
        r4 = static_cast<uint32_t>(regargs_result_8026FA08_251F >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FA08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_802622D0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802626D0;
    }
}

loc_802622D4:
{
    r3 = 1;
    goto loc_802626D4;
}

loc_802622DC:
{
    r3 = MemoryInline::FlatRead16((r3 + 188));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r4 + 8));
    r0 = (r3 & r0);
}

loc_802622EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802626D0;
    }
}

loc_802622F0:
{
    r3 = 1;
    goto loc_802626D4;
}

loc_802622F8:
{
    r3 = MemoryInline::FlatRead16((r3 + 184));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r4 + 8));
    r0 = (r3 & r0);
}

loc_80262308:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802626D0;
    }
}

loc_8026230C:
{
    r3 = 1;
    goto loc_802626D4;
}

loc_80262314:
{
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_2C55 = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_2C55);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_2C55 >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = (r3 & 255);
}

loc_80262324:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_802626D0;
    }
}

loc_80262328:
{
    r3 = MemoryInline::FlatRead16((r30 + 188));
    r0 = MemoryInline::FlatRead16((r31 + 8));
    r0 = (r3 & r0);
}

loc_80262338:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802626D0;
    }
}

loc_8026233C:
{
    r3 = 1;
    goto loc_802626D4;
}

loc_80262344:
{
    r3 = MemoryInline::FlatRead16((r3 + 204));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r4 + 8));
    r0 = (r3 & r0);
}

loc_80262354:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802626D0;
    }
}

loc_80262358:
{
    r3 = 1;
    goto loc_802626D4;
}

loc_80262360:
{
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_3319 = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_3319);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_3319 >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = (r3 & 255);
}

loc_80262370:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802626D0;
    }
}

loc_80262374:
{
    r3 = MemoryInline::FlatRead16((r30 + 188));
    r0 = MemoryInline::FlatRead16((r31 + 8));
    r0 = (r3 & r0);
}

loc_80262384:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802626D0;
    }
}

loc_80262388:
{
    r3 = 1;
    goto loc_802626D4;
}

loc_80262390:
{
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_3883 = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_3883);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_3883 >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = (r3 & 255);
}

loc_802623A0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_802626D0;
    }
}

loc_802623A4:
{
    r3 = MemoryInline::FlatRead16((r30 + 184));
    r0 = MemoryInline::FlatRead16((r31 + 8));
    r0 = (r3 & r0);
}

loc_802623B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802626D0;
    }
}

loc_802623B8:
{
    r3 = 1;
    goto loc_802626D4;
}

loc_802623C0:
{
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_3DEE = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_3DEE);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_3DEE >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = (r3 & 255);
}

loc_802623D0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_802626D0;
    }
}

loc_802623D4:
{
    r3 = 1;
    goto loc_802626D4;
}

loc_802623DC:
{
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_4251 = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_4251);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_4251 >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = (r3 & 255);
}

loc_802623EC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(3))) {
        goto loc_802626D0;
    }
}

loc_802623F0:
{
    r3 = 1;
    goto loc_802626D4;
}

loc_802623F8:
{
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_46B4 = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_46B4);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_46B4 >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = (r3 & 255);
}

loc_80262408:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_802626D0;
    }
}

loc_8026240C:
{
    r3 = 1;
    goto loc_802626D4;
}

loc_80262414:
{
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_4B17 = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_4B17);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_4B17 >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = (r3 & 255);
}

loc_80262424:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(3))) {
        goto loc_802626D0;
    }
}

loc_80262428:
{
    r3 = 1;
    goto loc_802626D4;
}

loc_80262430:
{
    r5 = MemoryInline::FlatRead16((r3 + 184));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r4 + 8));
    r0 = (r5 & r0);
}

loc_80262440:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802626D0;
    }
}

loc_80262444:
{
    r3 = MemoryInline::FlatRead16((r3 + 188));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r4 + 10));
    r0 = (r3 & r0);
}

loc_80262454:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802626D0;
    }
}

loc_80262458:
{
    r3 = 1;
    goto loc_802626D4;
}

loc_80262460:
{
    r4 = 0;
    r5 = MemoryInline::FlatRead16((r31 + 8));
    r6 = MemoryInline::FlatRead16((r31 + 10));
    ctx->lr = 0x80262470u;
    if constexpr (KnownRegArgsCpuCall<0x8026FCA4u>(&func_8026FCA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026FCA4_526C = func_8026FCA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FCA4_526C);
        r4 = static_cast<uint32_t>(regargs_result_8026FCA4_526C >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FCA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_80262474:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802626D0;
    }
}

loc_80262478:
{
    r3 = MemoryInline::FlatRead16((r30 + 188));
    r0 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r3 & r0);
}

loc_80262488:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802626D0;
    }
}

loc_8026248C:
{
    r3 = 1;
    goto loc_802626D4;
}

loc_80262494:
{
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_57F9 = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_57F9);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_57F9 >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = (r3 & 255);
}

loc_802624A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802626D0;
    }
}

loc_802624A8:
{
    r3 = 1;
    goto loc_802626D4;
}

loc_802624B0:
{
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_5C5B = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_5C5B);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_5C5B >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = (r3 & 255);
}

loc_802624C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802626D0;
    }
}

loc_802624C4:
{
    r3 = 1;
    goto loc_802626D4;
}

loc_802624CC:
{
    r4 = 1;
    r5 = MemoryInline::FlatRead16((r31 + 8));
    r6 = MemoryInline::FlatRead16((r31 + 10));
    ctx->lr = 0x802624DCu;
    if constexpr (KnownRegArgsCpuCall<0x8026FCA4u>(&func_8026FCA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026FCA4_6138 = func_8026FCA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FCA4_6138);
        r4 = static_cast<uint32_t>(regargs_result_8026FCA4_6138 >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FCA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_802624E0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802626D0;
    }
}

loc_802624E4:
{
    r3 = 1;
    goto loc_802626D4;
}

loc_802624EC:
{
    r4 = 0;
    r5 = MemoryInline::FlatRead16((r31 + 8));
    r6 = MemoryInline::FlatRead16((r31 + 10));
    ctx->lr = 0x802624FCu;
    if constexpr (KnownRegArgsCpuCall<0x8026FCA4u>(&func_8026FCA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026FCA4_6637 = func_8026FCA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FCA4_6637);
        r4 = static_cast<uint32_t>(regargs_result_8026FCA4_6637 >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FCA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_80262500:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802626D0;
    }
}

loc_80262504:
{
    r3 = 1;
    goto loc_802626D4;
}

loc_8026250C:
{
    r4 = 1;
    r5 = MemoryInline::FlatRead16((r31 + 8));
    r6 = MemoryInline::FlatRead16((r31 + 10));
    ctx->lr = 0x8026251Cu;
    if constexpr (KnownRegArgsCpuCall<0x8026FCA4u>(&func_8026FCA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026FCA4_6B36 = func_8026FCA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FCA4_6B36);
        r4 = static_cast<uint32_t>(regargs_result_8026FCA4_6B36 >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FCA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_80262520:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802626D0;
    }
}

loc_80262524:
{
    r3 = 1;
    goto loc_802626D4;
}

loc_8026252C:
{
    r4 = 0;
    r5 = MemoryInline::FlatRead16((r31 + 8));
    r6 = MemoryInline::FlatRead16((r31 + 10));
    ctx->lr = 0x8026253Cu;
    if constexpr (KnownRegArgsCpuCall<0x8026FCA4u>(&func_8026FCA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026FCA4_7033 = func_8026FCA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FCA4_7033);
        r4 = static_cast<uint32_t>(regargs_result_8026FCA4_7033 >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FCA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_80262540:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802626D0;
    }
}

loc_80262544:
{
    r3 = 1;
    goto loc_802626D4;
}

loc_8026254C:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r4 + 8));
    // inline leaf 0x8026A6A8 (13 guest instruction(s))
    r5 = 1;
    r0 = (r4 & 31);
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_1 = r0;
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_1 + r0_ca_1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 224));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8026A6A8
}

loc_80262558:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802626D0;
    }
}

loc_8026255C:
{
    r3 = 1;
    goto loc_802626D4;
}

loc_80262564:
{
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_7A82 = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_7A82);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_7A82 >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = (r3 & 255);
}

loc_80262574:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_802626D0;
    }
}

loc_80262578:
{
    r3 = r30;
    r4 = MemoryInline::FlatRead16((r31 + 8));
    // inline leaf 0x8026A6A8 (13 guest instruction(s))
    r5 = 1;
    r0 = (r4 & 31);
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_2 = r0;
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_2 + r0_ca_2);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 224));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x8026A6A8
}

loc_80262588:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802626D0;
    }
}

loc_8026258C:
{
    r3 = 1;
    goto loc_802626D4;
}

loc_80262594:
{
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_846F = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_846F);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_846F >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = (r3 & 255);
}

loc_802625A4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_802626D0;
    }
}

loc_802625A8:
{
    r3 = r30;
    r4 = MemoryInline::FlatRead16((r31 + 8));
    // inline leaf 0x8026A6A8 (13 guest instruction(s))
    r5 = 1;
    r0 = (r4 & 31);
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_3 = r0;
    r0_ca_3 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_3 + r0_ca_3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 224));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x8026A6A8
}

loc_802625B8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802626D0;
    }
}

loc_802625BC:
{
    r3 = 1;
    goto loc_802626D4;
}

loc_802625C4:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r4 + 8));
    // inline leaf 0x8026A708 (13 guest instruction(s))
    r5 = 1;
    r0 = (r4 & 31);
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_4 = r0;
    r0_ca_4 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_4 + r0_ca_4);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 240));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    // end of inlined leaf 0x8026A708
}

loc_802625D0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802626D0;
    }
}

loc_802625D4:
{
    r3 = 1;
    goto loc_802626D4;
}

loc_802625DC:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r4 + 8));
    // inline leaf 0x8026A708 (13 guest instruction(s))
    r5 = 1;
    r0 = (r4 & 31);
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_5 = r0;
    r0_ca_5 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_5 + r0_ca_5);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 240));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
    // end of inlined leaf 0x8026A708
}

loc_802625E8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802626D0;
    }
}

loc_802625EC:
{
    r3 = r30;
    r4 = MemoryInline::FlatRead16((r31 + 12));
    ctx->lr = 0x802625F8u;
    if constexpr (KnownRegArgsCpuCall<0x8026FB84u>(&func_8026FB84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026FB84_9A21 = func_8026FB84_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8026FB84_9A21);
        r4 = static_cast<uint32_t>(regargs_result_8026FB84_9A21 >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FB84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_802625FC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802626D0;
    }
}

loc_80262600:
{
    r3 = 1;
    goto loc_802626D4;
}

loc_80262608:
{
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_9EA1 = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_9EA1);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_9EA1 >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = (r3 & 255);
}

loc_80262618:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_802626D0;
    }
}

loc_8026261C:
{
    r3 = r30;
    r4 = MemoryInline::FlatRead16((r31 + 8));
    // inline leaf 0x8026A708 (13 guest instruction(s))
    r5 = 1;
    r0 = (r4 & 31);
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_6 = r0;
    r0_ca_6 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_6 + r0_ca_6);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 240));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
    // end of inlined leaf 0x8026A708
}

loc_8026262C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802626D0;
    }
}

loc_80262630:
{
    r3 = 1;
    goto loc_802626D4;
}

loc_80262638:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r4 + 8));
    // inline leaf 0x8026A6A8 (13 guest instruction(s))
    r5 = 1;
    r0 = (r4 & 31);
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_7 = r0;
    r0_ca_7 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_7 + r0_ca_7);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 224));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_7 & 1);
    // end of inlined leaf 0x8026A6A8
}

loc_80262644:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802626D0;
    }
}

loc_80262648:
{
    r3 = r30;
    r4 = 0;
    r5 = MemoryInline::FlatRead16((r31 + 10));
    r6 = MemoryInline::FlatRead16((r31 + 12));
    ctx->lr = 0x8026265Cu;
    if constexpr (KnownRegArgsCpuCall<0x8026FCA4u>(&func_8026FCA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026FCA4_AEAA = func_8026FCA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FCA4_AEAA);
        r4 = static_cast<uint32_t>(regargs_result_8026FCA4_AEAA >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FCA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_80262660:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802626D0;
    }
}

loc_80262664:
{
    r3 = 1;
    goto loc_802626D4;
}

loc_8026266C:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r4 + 8));
    // inline leaf 0x8026A6A8 (13 guest instruction(s))
    r5 = 1;
    r0 = (r4 & 31);
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_8 = r0;
    r0_ca_8 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_8 + r0_ca_8);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 224));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_8 & 1);
    // end of inlined leaf 0x8026A6A8
}

loc_80262678:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802626D0;
    }
}

loc_8026267C:
{
    r3 = r30;
    r4 = 0;
    r5 = MemoryInline::FlatRead16((r31 + 10));
    r6 = MemoryInline::FlatRead16((r31 + 12));
    // inline leaf 0x8026FD30 (16 guest instruction(s))
}

loc_inl8_0x8026FD30:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & -2);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 212));
}

loc_inl8_0x8026FD40:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(50))) {
        goto loc_inl8_0x8026FD68;
    }
}

loc_inl8_0x8026FD44:
{
    r0 = MemoryInline::FlatRead16((r3 + 208));
    r0 = (r0 - r5);
    r3 = (r0 & 65535);
    r0 = (r6 - r5);
    r0 = (r0 & 65535);
}

loc_inl8_0x8026FD5C:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r0))) {
        goto loc_inl8_0x8026FD68;
    }
}

loc_inl8_0x8026FD60:
{
    r3 = 1;
    goto loc_inl8_cont_8026FD30;
}

loc_inl8_0x8026FD68:
{
    r3 = 0;
}

loc_inl8_cont_8026FD30:
{
    // end of inlined leaf 0x8026FD30
}

loc_80262694:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802626D0;
    }
}

loc_80262698:
{
    r3 = 1;
    goto loc_802626D4;
}

loc_802626A0:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r4 + 8));
    // inline leaf 0x8026A6A8 (13 guest instruction(s))
    r5 = 1;
    r0 = (r4 & 31);
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_9 = r0;
    r0_ca_9 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_9 + r0_ca_9);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 224));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_9 & 1);
    // end of inlined leaf 0x8026A6A8
}

loc_802626AC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802626D0;
    }
}

loc_802626B0:
{
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_C33D = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_C33D);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_C33D >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = (r3 & 255);
}

loc_802626C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802626D0;
    }
}

loc_802626C8:
{
    r3 = 1;
    goto loc_802626D4;
}

loc_802626D0:
{
    r3 = 0;
}

loc_802626D4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    ctx->xer = xer;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80262214(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80262214_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80262214 func_80262214 preserves=true fpr_mask=0x00000000
