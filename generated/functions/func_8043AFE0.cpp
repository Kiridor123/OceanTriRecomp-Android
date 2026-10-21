#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802693F8(CpuContext* ctx);
extern "C" uint64_t func_802693F8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8043AFE0_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x8043AFE0u);
    goto loc_8043AFE0;

loc_8043AFE0:
{
    r4 = MemoryInline::FlatRead32((r13 + -17144));
    r4 = MemoryInline::FlatRead32((r4 + 16));
    r0 = MemoryInline::FlatRead8((r3 + 24));
    r0 = (r0 * 332);
    r3 = (r4 + r0);
    if constexpr (KnownRegArgsCpuCall<0x802693F8u>(&func_802693F8)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_802693F8_332 = func_802693F8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802693F8_332);
        r4 = static_cast<uint32_t>(regargs_result_802693F8_332 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802693F8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8043AFE0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8043AFE0_ra8_0_18_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8043AFE0 func_8043AFE0 preserves=true fpr_mask=0x00000000
