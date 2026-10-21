#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CEF20(CpuContext* ctx);
extern "C" uint32_t func_800CEF20_ra48_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80127E48(CpuContext* ctx);
extern "C" uint64_t func_80127E48_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint32_t func_801297F4_ra48_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r6 = arg_r6;
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x801297F4u);
    goto loc_801297F4;

loc_801297F4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r4 = MemoryInline::FlatRead8((r3 + 481));
    ctx->lr = 0x80129810u;
    if constexpr (KnownRegArgsCpuCall<0x80127E48u>(&func_80127E48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80127E48_458 = func_80127E48_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80127E48_458);
        r4 = static_cast<uint32_t>(regargs_result_80127E48_458 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80127E48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80129814:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80129834;
    }
}

loc_80129818:
{
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 1102), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 1104), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 1100), static_cast<uint16_t>(r0));
    goto loc_80129848;
}

loc_80129834:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 1102), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 1104), static_cast<uint16_t>(r0));
    r0 = 9000;
    MemoryInline::FlatWrite16((r31 + 1100), static_cast<uint16_t>(r0));
}

loc_80129848:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 1106), static_cast<uint16_t>(r0));
    r3 = 1;
    if constexpr (KnownRegArgsCpuCall<0x800CEF20u>(&func_800CEF20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_800CEF20_B46 = func_800CEF20_ra48_0_8_0(ctx, r3, r6);
        r3 = regargs_result_800CEF20_B46;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x800CEF20u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWrite16((r31 + 498), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    return r3;
}

}

extern "C" void func_801297F4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_801297F4_ra48_0_8_0(ctx, ctx->gpr[3], ctx->gpr[6]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000004A gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801297F4 func_801297F4 preserves=true fpr_mask=0x00000000
