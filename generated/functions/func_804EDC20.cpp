#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804FDA00(CpuContext* ctx);
extern "C" uint64_t func_804FDA00_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804EDC20_ra380_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r7, uint32_t arg_r8, uint32_t arg_r9)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    ctx->gpr[7] = arg_r7;
    ctx->gpr[8] = arg_r8;
    ctx->gpr[9] = arg_r9;

    MKW_GUEST_ENTER(0x804EDC20u);
    goto loc_804EDC20;

loc_804EDC20:
{
}

loc_804FDB50:
{
    r3 = 0;
    r4 = 3;
    r5 = 0;
    r6 = 0;
    if constexpr (KnownRegArgsCpuCall<0x804FDA00u>(&func_804FDA00)) {
        ctx->gpr[6] = r6;
        const auto regargs_result_804FDA00_33D = func_804FDA00_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804FDA00_33D);
        r4 = static_cast<uint32_t>(regargs_result_804FDA00_33D >> 32);
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x804FDA00u>(ctx);
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

extern "C" void func_804EDC20(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804EDC20_ra380_0_18_0(ctx, ctx->gpr[7], ctx->gpr[8], ctx->gpr[9]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002783 gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804EDC20 func_804EDC20 preserves=true fpr_mask=0x00000000
