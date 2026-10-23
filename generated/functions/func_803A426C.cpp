#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80385B38(CpuContext* ctx);
extern "C" uint32_t func_80385B38_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_803A426C_ra8_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_803A426C;

loc_803A426C:
{
    r4 = 0;
    r5 = 1;
    if constexpr (KnownRegArgsCpuCall<0x80385B38u>(&func_80385B38)) {
        const auto regargs_result_80385B38_256 = func_80385B38_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80385B38_256;
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80385B38u>(ctx);
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[5] = r5;
    return r4;
}

}

extern "C" void func_803A426C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803A426C_ra8_0_10_0(ctx, ctx->gpr[3]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803A426C func_803A426C preserves=true fpr_mask=0x00000000
