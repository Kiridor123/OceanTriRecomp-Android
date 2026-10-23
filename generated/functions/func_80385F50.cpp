#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80385F44(CpuContext* ctx);
extern "C" uint32_t func_80385F44_ra8_0_10_0(CpuContext*, uint32_t);

extern "C" uint32_t func_80385F50_ra8_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];

    goto loc_80385F50;

loc_80385F50:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    if constexpr (KnownRegArgsCpuCall<0x80385F44u>(&func_80385F44)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_80385F44_292 = func_80385F44_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_80385F44_292;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80385F44u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    ctx->gpr[0] = r0;
    return r4;
}

}

extern "C" void func_80385F50(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80385F50_ra8_0_10_0(ctx, ctx->gpr[3]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80385F50 func_80385F50 preserves=true fpr_mask=0x00000000
