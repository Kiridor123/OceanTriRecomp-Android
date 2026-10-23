#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804F9FD0(CpuContext* ctx);
extern "C" uint64_t func_804F9FD0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8004F634_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    goto loc_8004F634;

loc_8004F634:
{
    if constexpr (KnownRegArgsCpuCall<0x804F9FD0u>(&func_804F9FD0)) {
        const auto regargs_result_804F9FD0_255 = func_804F9FD0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804F9FD0_255);
        r4 = static_cast<uint32_t>(regargs_result_804F9FD0_255 >> 32);
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804F9FD0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8004F634(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004F634_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004F634 func_8004F634 preserves=true fpr_mask=0x00000000
