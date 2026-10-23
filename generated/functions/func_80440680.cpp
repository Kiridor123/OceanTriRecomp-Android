#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80440790(CpuContext* ctx);
extern "C" uint64_t func_80440790_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80440680_ra1c0_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r6, uint32_t arg_r7, uint32_t arg_r8)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    ctx->gpr[6] = arg_r6;
    ctx->gpr[7] = arg_r7;
    ctx->gpr[8] = arg_r8;

    goto loc_80440680;

loc_80440680:
{
    r3 = 0x80660000u;
    r4 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r4 + 2320));
    r4 = MemoryInline::FlatRead8((r4 + 2321));
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80440790u>(&func_80440790)) {
        const auto regargs_result_80440790_353 = func_80440790_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80440790_353);
        r4 = static_cast<uint32_t>(regargs_result_80440790_353 >> 32);
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80440790u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80440680(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80440680_ra1c0_0_18_0(ctx, ctx->gpr[6], ctx->gpr[7], ctx->gpr[8]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001C3 gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80440680 func_80440680 preserves=true fpr_mask=0x00000000
