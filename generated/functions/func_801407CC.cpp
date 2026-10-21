#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80140744(CpuContext* ctx);
extern "C" uint32_t func_80140744_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_801407CC_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x801407CCu);
    goto loc_801407CC;

loc_801407CC:
{
    r4 = r3;
    r3 = MemoryInline::FlatRead8(r3);
    r4 = MemoryInline::FlatRead8((r4 + 1));
    if constexpr (KnownRegArgsCpuCall<0x80140744u>(&func_80140744)) {
        const auto regargs_result_80140744_27F = func_80140744_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80140744_27F;
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80140744u>(ctx);
        r3 = ctx->gpr[3];
    }
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801407CC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801407CC_ra8_0_18_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801407CC func_801407CC preserves=true fpr_mask=0x00000000
