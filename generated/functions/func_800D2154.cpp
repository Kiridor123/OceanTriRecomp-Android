#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E4EA0(CpuContext* ctx);
extern "C" uint64_t func_800E4EA0_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint32_t func_800D2154_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x800D2154u);
    goto loc_800D2154;

loc_800D2154:
{
}

loc_800D2158:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800D2164;
    }
}

loc_800D215C:
{
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x800E4EA0u>(&func_800E4EA0)) {
        const auto regargs_result_800E4EA0_2C2 = func_800E4EA0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800E4EA0_2C2);
        r4 = static_cast<uint32_t>(regargs_result_800E4EA0_2C2 >> 32);
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E4EA0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    ctx->gpr[4] = r4;
    return r3;
}

loc_800D2164:
{
    r3 = 127;
    if constexpr (KnownRegArgsCpuCall<0x800E4EA0u>(&func_800E4EA0)) {
        const auto regargs_result_800E4EA0_4D0 = func_800E4EA0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800E4EA0_4D0);
        r4 = static_cast<uint32_t>(regargs_result_800E4EA0_4D0 >> 32);
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E4EA0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    ctx->gpr[4] = r4;
    return r3;
}

}

extern "C" void func_800D2154(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800D2154_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800D2154 func_800D2154 preserves=true fpr_mask=0x00000000
