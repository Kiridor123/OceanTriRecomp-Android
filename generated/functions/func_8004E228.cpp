#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004DE38(CpuContext* ctx);
extern "C" uint64_t func_8004DE38_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8004DEE0(CpuContext* ctx);
extern "C" uint64_t func_8004DEE0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8004E060(CpuContext* ctx);
extern "C" uint64_t func_8004E060_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8004E1F0(CpuContext* ctx);
extern "C" uint64_t func_8004E1F0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8004E228(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_8004E228;

loc_8004E228:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r31 = r3;
    r28 = MemoryInline::FlatRead16((r3 + 15844));
    r27 = 0;
}

loc_8004E24C:
{
    r5 = r4;
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_8004E258;
    }
}

loc_8004E254:
{
    r5 = (0 - r4);
}

loc_8004E258:
{
}

loc_8004E25C:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_8004E27C;
    }
}

loc_8004E260:
{
    r0 = MemoryInline::FlatRead32((r3 + 15840));
}

loc_8004E268:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r5))) {
        goto loc_8004E27C;
    }
}

loc_8004E26C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 15840), r0);
    r27 = 1;
    goto loc_8004E288;
}

loc_8004E27C:
{
    r0 = MemoryInline::FlatRead32((r3 + 15840));
    r0 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + 15840), r0);
}

loc_8004E288:
{
    r5 = MemoryInline::FlatRead32((r3 + 15840));
    r4 = 10027008;
    r0 = (r4 + -27009);
}

loc_8004E298:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r0))) {
        goto loc_8004E2A0;
    }
}

loc_8004E29C:
{
    MemoryInline::FlatWrite32((r3 + 15840), r0);
}

loc_8004E2A0:
{
    r3 = r28;
    if constexpr (KnownRegArgsCpuCall<0x8004DE38u>(&func_8004DE38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004DE38_D22 = func_8004DE38_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004DE38_D22);
        r4 = static_cast<uint32_t>(regargs_result_8004DE38_D22 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004DE38u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead32((r31 + 15840));
}

loc_8004E2B0:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r3))) {
        goto loc_8004E2D4;
    }
}

loc_8004E2B4:
{
    MemoryInline::FlatWrite32((r31 + 15840), r3);
    r3 = r31;
    ctx->lr = 0x8004E2C0u;
    if constexpr (KnownRegArgsCpuCall<0x8004DEE0u>(&func_8004DEE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004DEE0_1118 = func_8004DEE0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004DEE0_1118);
        r4 = static_cast<uint32_t>(regargs_result_8004DEE0_1118 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004DEE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite16((r31 + 15844), static_cast<uint16_t>(r3));
    r3 = (r3 & 65535);
    ctx->lr = 0x8004E2CCu;
    if constexpr (KnownRegArgsCpuCall<0x8004E060u>(&func_8004E060)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004E060_149E = func_8004E060_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004E060_149E);
        r4 = static_cast<uint32_t>(regargs_result_8004E060_149E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004E060u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 1;
    goto loc_8004E470;
}

loc_8004E2D4:
{
}

loc_8004E2D8:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(999))) {
        goto loc_8004E2EC;
    }
}

loc_8004E2DC:
{
    r3 = MemoryInline::FlatRead16((r31 + 15844));
    ctx->lr = 0x8004E2E4u;
    if constexpr (KnownRegArgsCpuCall<0x8004E060u>(&func_8004E060)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004E060_18C8 = func_8004E060_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004E060_18C8);
        r4 = static_cast<uint32_t>(regargs_result_8004E060_18C8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004E060u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 2;
    goto loc_8004E470;
}

loc_8004E2EC:
{
    r30 = 0x80580000u;
}

loc_8004E2F0:
{
    r3 = (r28 & 65535);
    r29 = (r3 + 1);
    r3 = (r29 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x8004DE38u>(&func_8004DE38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004DE38_1C82 = func_8004DE38_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004DE38_1C82);
        r4 = static_cast<uint32_t>(regargs_result_8004DE38_1C82 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004DE38u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead32((r31 + 15840));
}

loc_8004E308:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r3))) {
        goto loc_8004E328;
    }
}

loc_8004E30C:
{
    r3 = r31;
    ctx->lr = 0x8004E314u;
    if constexpr (KnownRegArgsCpuCall<0x8004DEE0u>(&func_8004DEE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004DEE0_2048 = func_8004DEE0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004DEE0_2048);
        r4 = static_cast<uint32_t>(regargs_result_8004DEE0_2048 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004DEE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite16((r31 + 15844), static_cast<uint16_t>(r3));
    r3 = (r3 & 65535);
    ctx->lr = 0x8004E320u;
    if constexpr (KnownRegArgsCpuCall<0x8004E060u>(&func_8004E060)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004E060_23CE = func_8004E060_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004E060_23CE);
        r4 = static_cast<uint32_t>(regargs_result_8004E060_23CE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004E060u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r27;
    goto loc_8004E470;
}

loc_8004E328:
{
    r0 = (r29 + -8);
}

loc_8004E330:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(43))) {
        goto loc_8004E44C;
    }
}

loc_8004E334:
{
    r3 = (r30 + 7748);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8004E348u:
        goto loc_8004E348;
        break;
    case 0x8004E350u:
        goto loc_8004E350;
        break;
    case 0x8004E44Cu:
        goto loc_8004E44C;
        break;
    case 0x8004E37Cu:
        goto loc_8004E37C;
        break;
    case 0x8004E384u:
        goto loc_8004E384;
        break;
    case 0x8004E3B0u:
        goto loc_8004E3B0;
        break;
    case 0x8004E3B8u:
        goto loc_8004E3B8;
        break;
    case 0x8004E3E4u:
        goto loc_8004E3E4;
        break;
    case 0x8004E3ECu:
        goto loc_8004E3EC;
        break;
    case 0x8004E418u:
        goto loc_8004E418;
        break;
    case 0x8004E420u:
        goto loc_8004E420;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_8004E348:
{
    r28 = (r28 + 1);
    goto loc_8004E450;
}

loc_8004E350:
{
    r3 = 14000;
    ctx->lr = 0x8004E358u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8004D770u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
}

loc_8004E35C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8004E368;
    }
}

loc_8004E360:
{
    r28 = (r28 + 1);
    goto loc_8004E450;
}

loc_8004E368:
{
    r3 = r31;
    r4 = 9;
    ctx->lr = 0x8004E374u;
    if constexpr (KnownRegArgsCpuCall<0x8004E1F0u>(&func_8004E1F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004E1F0_3037 = func_8004E1F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004E1F0_3037);
        r4 = static_cast<uint32_t>(regargs_result_8004E1F0_3037 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004E1F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r27 = 3;
    goto loc_8004E450;
}

loc_8004E37C:
{
    r28 = (r28 + 1);
    goto loc_8004E450;
}

loc_8004E384:
{
    r3 = 14001;
    ctx->lr = 0x8004E38Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8004D770u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
}

loc_8004E390:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8004E39C;
    }
}

loc_8004E394:
{
    r28 = (r28 + 1);
    goto loc_8004E450;
}

loc_8004E39C:
{
    r3 = r31;
    r4 = 18;
    ctx->lr = 0x8004E3A8u;
    if constexpr (KnownRegArgsCpuCall<0x8004E1F0u>(&func_8004E1F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004E1F0_3654 = func_8004E1F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004E1F0_3654);
        r4 = static_cast<uint32_t>(regargs_result_8004E1F0_3654 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004E1F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r27 = 4;
    goto loc_8004E450;
}

loc_8004E3B0:
{
    r28 = (r28 + 1);
    goto loc_8004E450;
}

loc_8004E3B8:
{
    r3 = 14002;
    ctx->lr = 0x8004E3C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8004D770u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
}

loc_8004E3C4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8004E3D0;
    }
}

loc_8004E3C8:
{
    r28 = (r28 + 1);
    goto loc_8004E450;
}

loc_8004E3D0:
{
    r3 = r31;
    r4 = 31;
    ctx->lr = 0x8004E3DCu;
    if constexpr (KnownRegArgsCpuCall<0x8004E1F0u>(&func_8004E1F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004E1F0_3C71 = func_8004E1F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004E1F0_3C71);
        r4 = static_cast<uint32_t>(regargs_result_8004E1F0_3C71 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004E1F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r27 = 5;
    goto loc_8004E450;
}

loc_8004E3E4:
{
    r28 = (r28 + 1);
    goto loc_8004E450;
}

loc_8004E3EC:
{
    r3 = 19000;
    ctx->lr = 0x8004E3F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8004D770u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
}

loc_8004E3F8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8004E404;
    }
}

loc_8004E3FC:
{
    r28 = (r28 + 1);
    goto loc_8004E450;
}

loc_8004E404:
{
    r3 = r31;
    r4 = 40;
    ctx->lr = 0x8004E410u;
    if constexpr (KnownRegArgsCpuCall<0x8004E1F0u>(&func_8004E1F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004E1F0_428E = func_8004E1F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004E1F0_428E);
        r4 = static_cast<uint32_t>(regargs_result_8004E1F0_428E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004E1F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r27 = 6;
    goto loc_8004E450;
}

loc_8004E418:
{
    r28 = (r28 + 1);
    goto loc_8004E450;
}

loc_8004E420:
{
    r3 = 19001;
    ctx->lr = 0x8004E428u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8004D770u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
}

loc_8004E42C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8004E438;
    }
}

loc_8004E430:
{
    r28 = (r28 + 1);
    goto loc_8004E450;
}

loc_8004E438:
{
    r3 = r31;
    r4 = 51;
    ctx->lr = 0x8004E444u;
    if constexpr (KnownRegArgsCpuCall<0x8004E1F0u>(&func_8004E1F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004E1F0_48AB = func_8004E1F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004E1F0_48AB);
        r4 = static_cast<uint32_t>(regargs_result_8004E1F0_48AB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004E1F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r27 = 7;
    goto loc_8004E450;
}

loc_8004E44C:
{
    r28 = (r28 + 1);
}

loc_8004E450:
{
}

loc_8004E454:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_8004E2F0;
    }
}

loc_8004E458:
{
    r3 = r31;
    ctx->lr = 0x8004E460u;
    if constexpr (KnownRegArgsCpuCall<0x8004DEE0u>(&func_8004DEE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004DEE0_4CDC = func_8004DEE0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004DEE0_4CDC);
        r4 = static_cast<uint32_t>(regargs_result_8004DEE0_4CDC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004DEE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite16((r31 + 15844), static_cast<uint16_t>(r3));
    r3 = (r3 & 65535);
    ctx->lr = 0x8004E46Cu;
    if constexpr (KnownRegArgsCpuCall<0x8004E060u>(&func_8004E060)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004E060_5062 = func_8004E060_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004E060_5062);
        r4 = static_cast<uint32_t>(regargs_result_8004E060_5062 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004E060u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r27;
}

loc_8004E470:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8004E228 func_8004E228 preserves=true fpr_mask=0x00000000
