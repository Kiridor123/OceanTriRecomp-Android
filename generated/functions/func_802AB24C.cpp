#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8029F618(CpuContext* ctx);
extern "C" double func_8029F618_ra18_0_0_2(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802AB24C_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_802AB24C;

loc_802AB24C:
{
    r3 = (r3 + 92);
    r4 = 100;
    if constexpr (KnownRegArgsCpuCall<0x8029F618u>(&func_8029F618)) {
        const auto regargs_result_8029F618_252 = func_8029F618_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8029F618_252;
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8029F618u>(ctx);
        f1 = ctx->fpr[1];
    }
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802AB24C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802AB24C_ra8_0_18_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802AB24C func_802AB24C preserves=true fpr_mask=0x00000000
