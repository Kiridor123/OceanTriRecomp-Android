#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_800FCF2C_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t r3 = arg_r3;
    ctx->gpr[4] = arg_r4;

    MKW_GUEST_ENTER(0x800FCF2Cu);
    goto loc_800FCF2C;

loc_800FCF2C:
{
}

loc_800FCF30:
{
    r3 = (r3 + 88);
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800AA7C0u>(ctx);
    r3 = ctx->gpr[3];
    return r3;
}

}

extern "C" void func_800FCF2C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800FCF2C_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800FCF2C func_800FCF2C preserves=true fpr_mask=0x00000000
