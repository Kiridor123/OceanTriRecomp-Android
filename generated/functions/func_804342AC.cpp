#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804342B8(CpuContext* ctx);
extern "C" uint32_t func_804342B8_ra28_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint32_t func_804342AC_ra20_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r5)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = arg_r5;

    MKW_GUEST_ENTER(0x804342ACu);
    goto loc_804342AC;

loc_804342AC:
{
    r3 = 0x806D0000u;
    r3 = (r3 + 24520);
    if constexpr (KnownRegArgsCpuCall<0x804342B8u>(&func_804342B8)) {
        const auto regargs_result_804342B8_24D = func_804342B8_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_804342B8_24D;
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804342B8u>(ctx);
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[5] = r5;
    return r3;
}

}

extern "C" void func_804342AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804342AC_ra20_0_8_0(ctx, ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000022 gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804342AC func_804342AC preserves=true fpr_mask=0x00000000
