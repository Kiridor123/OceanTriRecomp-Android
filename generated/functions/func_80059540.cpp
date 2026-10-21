#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005954C(CpuContext* ctx);
extern "C" uint32_t func_8005954C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint32_t func_80059540_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x80059540u);
    goto loc_80059540;

loc_80059540:
{
    r3 = 0x80670000u;
    r3 = (r3 + -11912);
    if constexpr (KnownRegArgsCpuCall<0x8005954Cu>(&func_8005954C)) {
        const auto regargs_result_8005954C_217 = func_8005954C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8005954C_217;
    } else {
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8005954Cu>(ctx);
        r3 = ctx->gpr[3];
    }
    return r3;
}

}

extern "C" void func_80059540(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80059540_ra0_0_8_0(ctx);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000002 gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80059540 func_80059540 preserves=true fpr_mask=0x00000000
