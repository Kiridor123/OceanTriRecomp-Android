#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8007A540_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x8007A540u);
    goto loc_8007A540;

loc_8007A540:
{
    r3 = 4;
    r3 = (r3 | 262144);
    ctx->gqr[2] = r3;
    r3 = 5;
    r3 = (r3 | 327680);
    ctx->gqr[3] = r3;
    r3 = 6;
    r3 = (r3 | 393216);
    ctx->gqr[4] = r3;
    r3 = 7;
    r3 = (r3 | 458752);
    ctx->gqr[5] = r3;
    return r3;
}

}

extern "C" void func_8007A540(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8007A540_ra0_0_8_0(ctx);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8007A540 func_8007A540 preserves=true fpr_mask=0x00000000
