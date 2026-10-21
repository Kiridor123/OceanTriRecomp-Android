#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80300000_ra300_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r8, uint32_t arg_r9)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r8 = arg_r8;
    uint32_t r9 = arg_r9;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x80300000u);
    goto loc_80300000;

loc_80300000:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_803000DC;
    }
}

loc_80300004:
{
    r9 = r8;
}

loc_803000DC:
{
    r3 = r9;
    ctx->gpr[9] = r9;
    return r3;
}

}

extern "C" void func_80300000(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80300000_ra300_0_8_0(ctx, ctx->gpr[8], ctx->gpr[9]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000300 gpr_write=0x00000208 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80300000 func_80300000 preserves=true fpr_mask=0x00000000
