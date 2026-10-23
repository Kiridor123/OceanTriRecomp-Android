#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802B0A1C(CpuContext* ctx);
extern "C" uint64_t func_802B0A1C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80339548_ra30_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    goto loc_80339548;

loc_80339548:
{
    r3 = MemoryInline::FlatRead8((r4 + 4));
    r4 = MemoryInline::FlatRead8((r4 + 5));
    if constexpr (KnownRegArgsCpuCall<0x802B0A1Cu>(&func_802B0A1C)) {
        const auto regargs_result_802B0A1C_2A3 = func_802B0A1C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802B0A1C_2A3);
        r4 = static_cast<uint32_t>(regargs_result_802B0A1C_2A3 >> 32);
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802B0A1Cu>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80339548(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80339548_ra30_0_18_0(ctx, ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000033 gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80339548 func_80339548 preserves=true fpr_mask=0x00000000
