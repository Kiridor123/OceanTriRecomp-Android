#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803FE2D4_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;

    goto loc_803FE2D4;

loc_803FE2D4:
{
    r0 = 1;
    r3 = (r3 + 65536);
    r3 = MemoryInline::FlatRead8((r3 + -30377));
}

loc_803FE2E4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(4))) {
        goto loc_803FE2F4;
    }
}

loc_803FE2E8:
{
}

loc_803FE2EC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(6))) {
        goto loc_803FE2F4;
    }
}

loc_803FE2F0:
{
    r0 = 0;
}

loc_803FE2F4:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_803FE2D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803FE2D4_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803FE2D4 func_803FE2D4 preserves=true fpr_mask=0x00000000
