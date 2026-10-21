#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804EFAC0(CpuContext* ctx);
extern "C" uint64_t func_804EFAC0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8004378C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8004378Cu);
    goto loc_8004378C;

loc_8004378C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r5 = 0x80660000u;
    r5 = (r5 + -18480);
    r0 = (r3 * 848);
    r5 = (r5 + r0);
    MemoryInline::FlatWrite32((r5 + 52), r4);
}

loc_800437B8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800437E0;
    }
}

loc_800437BC:
{
}

loc_800437C0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_80043818;
    }
}

loc_800437C4:
{
}

loc_800437C8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_80043850;
    }
}

loc_800437CC:
{
}

loc_800437D0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(251))) {
        goto loc_80043888;
    }
}

loc_800437D4:
{
}

loc_800437D8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(252))) {
        goto loc_800438C0;
    }
}

loc_800437DC:
{
    goto loc_800438F4;
}

loc_800437E0:
{
    r4 = 0;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804F1B20u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r31;
    r4 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804EF2A0u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r31;
    r5 = (r31 * 4200);
    r4 = 0x80660000u;
    r0 = (r4 + 30536);
    r4 = (r0 + r5);
    r5 = 100;
    ctx->lr = 0x80043814u;
    if constexpr (KnownRegArgsCpuCall<0x804EFAC0u>(&func_804EFAC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804EFAC0_8D7 = func_804EFAC0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804EFAC0_8D7);
        r4 = static_cast<uint32_t>(regargs_result_804EFAC0_8D7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804EFAC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_800438F4;
}

loc_80043818:
{
    r4 = 0;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804F1B20u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r31;
    r4 = 5;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804EF2A0u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r31;
    r5 = (r31 * 5000);
    r4 = 0x80660000u;
    r0 = (r4 + 10536);
    r4 = (r0 + r5);
    r5 = 100;
    ctx->lr = 0x8004384Cu;
    if constexpr (KnownRegArgsCpuCall<0x804EFAC0u>(&func_804EFAC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804EFAC0_DC5 = func_804EFAC0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804EFAC0_DC5);
        r4 = static_cast<uint32_t>(regargs_result_804EFAC0_DC5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804EFAC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_800438F4;
}

loc_80043850:
{
    r4 = 0;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804F1B20u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r31;
    r4 = 8;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804EF2A0u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r31;
    r5 = (r31 * 5400);
    r4 = 0x80660000u;
    r0 = (r4 + -11064);
    r4 = (r0 + r5);
    r5 = 100;
    ctx->lr = 0x80043884u;
    if constexpr (KnownRegArgsCpuCall<0x804EFAC0u>(&func_804EFAC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804EFAC0_12B4 = func_804EFAC0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804EFAC0_12B4);
        r4 = static_cast<uint32_t>(regargs_result_804EFAC0_12B4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804EFAC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_800438F4;
}

loc_80043888:
{
    r4 = 0;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804F1B20u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r31;
    r4 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804EF2A0u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r31;
    r5 = (r31 * 4200);
    r4 = 0x80660000u;
    r0 = (r4 + 30536);
    r4 = (r0 + r5);
    r5 = 100;
    ctx->lr = 0x800438BCu;
    if constexpr (KnownRegArgsCpuCall<0x804EFAC0u>(&func_804EFAC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804EFAC0_17A5 = func_804EFAC0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804EFAC0_17A5);
        r4 = static_cast<uint32_t>(regargs_result_804EFAC0_17A5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804EFAC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_800438F4;
}

loc_800438C0:
{
    r4 = 0;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804F1B20u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r31;
    r4 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804EF2A0u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r31;
    r5 = (r31 * 4200);
    r4 = 0x80660000u;
    r0 = (r4 + 30536);
    r4 = (r0 + r5);
    r5 = 100;
    ctx->lr = 0x800438F4u;
    if constexpr (KnownRegArgsCpuCall<0x804EFAC0u>(&func_804EFAC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804EFAC0_1C96 = func_804EFAC0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804EFAC0_1C96);
        r4 = static_cast<uint32_t>(regargs_result_804EFAC0_1C96 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804EFAC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_800438F4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8004378C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004378C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8004378C func_8004378C preserves=true fpr_mask=0x00000000
