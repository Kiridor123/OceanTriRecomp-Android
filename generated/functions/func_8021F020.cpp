#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8021F02C(CpuContext* ctx);
extern "C" uint32_t func_8021F02C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint32_t func_8021F020_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];

    goto loc_8021F020;

loc_8021F020:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -12984);
    if constexpr (KnownRegArgsCpuCall<0x8021F02Cu>(&func_8021F02C)) {
        const auto regargs_result_8021F02C_209 = func_8021F02C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8021F02C_209;
    } else {
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8021F02Cu>(ctx);
        r3 = ctx->gpr[3];
    }
    return r3;
}

}

extern "C" void func_8021F020(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8021F020_ra0_0_8_0(ctx);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000002 gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8021F020 func_8021F020 preserves=true fpr_mask=0x00000000
