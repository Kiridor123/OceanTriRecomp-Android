#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027714C(CpuContext* ctx);
extern "C" uint32_t func_8027714C_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_8025687C_ra18_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];

    goto loc_8025687C;

loc_8025687C:
{
    r0 = MemoryInline::FlatRead8((r3 + 24));
}

loc_80256884:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802568B4;
    }
}

loc_80256888:
{
    r0 = (r4 & 255);
}

loc_80256890:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802568A4;
    }
}

loc_80256894:
{
    r4 = 0x805C0000u;
    r4 = (r4 + -5416);
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8027714Cu>(&func_8027714C)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_8027714C_445 = func_8027714C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8027714C_445;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027714Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r4;
}

loc_802568A4:
{
    r4 = 0x805C0000u;
    r4 = (r4 + -4968);
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8027714Cu>(&func_8027714C)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_8027714C_6F5 = func_8027714C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8027714C_6F5;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027714Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r4;
}

loc_802568B4:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_802568BC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802568EC;
    }
}

loc_802568C0:
{
    r0 = (r4 & 255);
}

loc_802568C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802568DC;
    }
}

loc_802568CC:
{
    r4 = 0x805C0000u;
    r4 = (r4 + -5260);
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8027714Cu>(&func_8027714C)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_8027714C_B10 = func_8027714C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8027714C_B10;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027714Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r4;
}

loc_802568DC:
{
    r4 = 0x805C0000u;
    r4 = (r4 + -4812);
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8027714Cu>(&func_8027714C)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_8027714C_DC0 = func_8027714C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8027714C_DC0;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027714Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r4;
}

loc_802568EC:
{
    r0 = (r4 & 255);
}

loc_802568F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80256908;
    }
}

loc_802568F8:
{
    r4 = 0x805C0000u;
    r4 = (r4 + -5328);
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8027714Cu>(&func_8027714C)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_8027714C_1119 = func_8027714C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8027714C_1119;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027714Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r4;
}

loc_80256908:
{
    r4 = 0x805C0000u;
    r4 = (r4 + -4880);
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8027714Cu>(&func_8027714C)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_8027714C_13CB = func_8027714C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8027714C_13CB;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027714Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r4;
}

}

extern "C" void func_8025687C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8025687C_ra18_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8025687C func_8025687C preserves=true fpr_mask=0x00000000
