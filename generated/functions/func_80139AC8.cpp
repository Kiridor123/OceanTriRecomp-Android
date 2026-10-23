#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80071070(CpuContext* ctx);
extern "C" uint64_t func_80071070_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80139AC8_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_80139AC8;

loc_80139AC8:
{
}

loc_80139ACC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80139AD8;
    }
}

loc_80139AD0:
{
    r3 = MemoryInline::FlatRead32(r3);
    if constexpr (KnownRegArgsCpuCall<0x80071070u>(&func_80071070)) {
        const auto regargs_result_80071070_2F5 = func_80071070_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80071070_2F5);
        r4 = static_cast<uint32_t>(regargs_result_80071070_2F5 >> 32);
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80071070u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80139AD8:
{
    r3 = MemoryInline::FlatRead32(r3);
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80139AC8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80139AC8_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80139AC8 func_80139AC8 preserves=true fpr_mask=0x00000000
