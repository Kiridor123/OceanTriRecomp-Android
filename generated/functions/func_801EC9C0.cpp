#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801EC944(CpuContext* ctx);
extern "C" uint64_t func_801EC944_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8037695C(CpuContext* ctx);
extern "C" uint32_t func_8037695C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_801EC9C0_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x801EC9C0u);
    goto loc_801EC9C0;

loc_801EC9C0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = MemoryInline::FlatRead32((r3 + 16));
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_801EC9E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801ECA2C;
    }
}

loc_801EC9E8:
{
    r3 = 0x80660000u;
    r3 = (r3 + -18480);
    r0 = MemoryInline::FlatRead16((r3 + 712));
    r0 = (r0 & 15360);
}

loc_801EC9FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801ECA24;
    }
}

loc_801ECA00:
{
    ctx->lr = 0x801ECA04u;
    if constexpr (KnownRegArgsCpuCall<0x8037695Cu>(&func_8037695C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8037695C_601 = func_8037695C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8037695C_601;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8037695Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_801ECA08:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801ECA24;
    }
}

loc_801ECA0C:
{
    r0 = MemoryInline::FlatRead8((r30 + 39));
}

loc_801ECA14:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801ECA2C;
    }
}

loc_801ECA18:
{
    r3 = r31;
    ctx->lr = 0x801ECA20u;
    if constexpr (KnownRegArgsCpuCall<0x801EC944u>(&func_801EC944)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801EC944_96F = func_801EC944_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_801EC944_96F);
        r4 = static_cast<uint32_t>(regargs_result_801EC944_96F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x801EC944u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_801ECA2C;
}

loc_801ECA24:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 39), static_cast<uint8_t>(r0));
}

loc_801ECA2C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801EC9C0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801EC9C0_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801EC9C0 func_801EC9C0 preserves=true fpr_mask=0x00000000
