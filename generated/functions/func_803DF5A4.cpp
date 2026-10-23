#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803DF498(CpuContext* ctx);
extern "C" uint32_t func_803DF498_ra8_0_10_0(CpuContext*, uint32_t);

extern "C" uint32_t func_803DF5A4_ra8_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];

    goto loc_803DF5A4;

loc_803DF5A4:
{
    if constexpr (KnownRegArgsCpuCall<0x803DF498u>(&func_803DF498)) {
        const auto regargs_result_803DF498_207 = func_803DF498_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_803DF498_207;
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803DF498u>(ctx);
        r4 = ctx->gpr[4];
    }
    return r4;
}

}

extern "C" void func_803DF5A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803DF5A4_ra8_0_10_0(ctx, ctx->gpr[3]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803DF5A4 func_803DF5A4 preserves=true fpr_mask=0x00000000
