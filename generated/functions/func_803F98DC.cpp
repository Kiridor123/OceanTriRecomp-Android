#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803F98DC_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];

    goto loc_803F98DC;

loc_803F98DC:
{
    r3 = 23;
    return r3;
}

}

extern "C" void func_803F98DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803F98DC_ra0_0_8_0(ctx);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803F98DC func_803F98DC preserves=true fpr_mask=0x00000000
