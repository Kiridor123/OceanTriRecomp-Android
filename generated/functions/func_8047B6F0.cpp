#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804782B0(CpuContext* ctx);
extern "C" uint64_t func_804782B0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8047B6F0_ra88_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r7)
{
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    ctx->gpr[7] = arg_r7;

    goto loc_8047B6F0;

loc_8047B6F0:
{
    r4 = MemoryInline::FlatRead32((r13 + -20664));
    r6 = 0x80740000u;
    r6 = (r6 + -18792);
    r5 = r3;
    r3 = MemoryInline::FlatRead8((r6 + 125));
    r4 = MemoryInline::FlatRead8((r4 + 2));
    if constexpr (KnownRegArgsCpuCall<0x804782B0u>(&func_804782B0)) {
        ctx->gpr[6] = r6;
        const auto regargs_result_804782B0_394 = func_804782B0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804782B0_394);
        r4 = static_cast<uint32_t>(regargs_result_804782B0_394 >> 32);
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x804782B0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8047B6F0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8047B6F0_ra88_0_18_0(ctx, ctx->gpr[3], ctx->gpr[7]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000208B gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8047B6F0 func_8047B6F0 preserves=true fpr_mask=0x00000000
