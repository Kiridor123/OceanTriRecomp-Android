#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80055EC8(CpuContext* ctx);
extern "C" uint64_t func_80055EC8_ra28_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80055EBC_ra20_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r5)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;

    MKW_GUEST_ENTER(0x80055EBCu);
    goto loc_80055EBC;

loc_80055EBC:
{
    r3 = 0x80670000u;
    r3 = (r3 + -12896);
    if constexpr (KnownRegArgsCpuCall<0x80055EC8u>(&func_80055EC8)) {
        const auto regargs_result_80055EC8_26F = func_80055EC8_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_80055EC8_26F);
        r4 = static_cast<uint32_t>(regargs_result_80055EC8_26F >> 32);
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80055EC8u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80055EBC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80055EBC_ra20_0_18_0(ctx, ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000022 gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80055EBC func_80055EBC preserves=true fpr_mask=0x00000000
