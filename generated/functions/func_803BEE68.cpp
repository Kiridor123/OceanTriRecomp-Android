#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803BEC54(CpuContext* ctx);
extern "C" uint64_t func_803BEC54_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint32_t func_803BEE68_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_803BEE68;

loc_803BEE68:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 2224));
}

loc_803BEE78:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803BEE8C;
    }
}

loc_803BEE7C:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3 = MemoryInline::FlatRead8((r3 + 21));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return r3;
}

loc_803BEE8C:
{
    r3 = 0;
    r4 = 21;
    if constexpr (KnownRegArgsCpuCall<0x803BEC54u>(&func_803BEC54)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_803BEC54_41C = func_803BEC54_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803BEC54_41C);
        r4 = static_cast<uint32_t>(regargs_result_803BEC54_41C >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803BEC54u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return r3;
}

}

extern "C" void func_803BEE68(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803BEE68_ra0_0_8_0(ctx);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000003 gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803BEE68 func_803BEE68 preserves=true fpr_mask=0x00000000
