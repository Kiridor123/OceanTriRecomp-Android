#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805020E4(CpuContext* ctx);
extern "C" void func_805020E4_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint32_t func_8055D28C_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_8055D28C;

loc_8055D28C:
{
    r3 = (r3 + 8);
    if constexpr (KnownRegArgsCpuCall<0x805020E4u>(&func_805020E4)) {
        func_805020E4_ra18_0_0_0(ctx, r3, r4);
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x805020E4u>(ctx);
    }
    return r3;
}

}

extern "C" void func_8055D28C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8055D28C_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8055D28C func_8055D28C preserves=true fpr_mask=0x00000000
