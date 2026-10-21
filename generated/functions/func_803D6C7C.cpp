#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803D6C80(CpuContext* ctx);
extern "C" uint32_t func_803D6C80_ra8_0_10_0(CpuContext*, uint32_t);

extern "C" uint32_t func_803D6C7C_ra8_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x803D6C7Cu);
    goto loc_803D6C7C;

loc_803D6C7C:
{
    if constexpr (KnownRegArgsCpuCall<0x803D6C80u>(&func_803D6C80)) {
        const auto regargs_result_803D6C80_216 = func_803D6C80_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_803D6C80_216;
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803D6C80u>(ctx);
        r4 = ctx->gpr[4];
    }
    return r4;
}

}

extern "C" void func_803D6C7C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803D6C7C_ra8_0_10_0(ctx, ctx->gpr[3]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803D6C7C func_803D6C7C preserves=true fpr_mask=0x00000000
