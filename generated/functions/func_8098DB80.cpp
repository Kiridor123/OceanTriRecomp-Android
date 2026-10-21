#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045FFFC(CpuContext* ctx);
extern "C" uint32_t func_8045FFFC_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8098DB80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    MKW_GUEST_ENTER(0x8098DB80u);
    goto loc_8098DB80;

loc_8098DB80:
{
    if constexpr (KnownRegArgsCpuCall<0x8045FFFCu>(&func_8045FFFC)) {
        const auto regargs_result_8045FFFC_22E = func_8045FFFC_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8045FFFC_22E;
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8045FFFCu>(ctx);
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8098DB80 func_8098DB80 preserves=true fpr_mask=0x00000000
