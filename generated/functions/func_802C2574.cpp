#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802C2574_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    MKW_GUEST_ENTER(0x802C2574u);
    goto loc_802C2574;

loc_802C2574:
{
}

loc_802C2578:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r4))) {
        goto loc_802C2584;
    }
}

loc_802C257C:
{
    r3 = r4;
    return r3;
}

loc_802C2584:
{
}

loc_802C2588:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r5))) {
        goto loc_return;
    }
}

loc_802C258C:
{
    r3 = r5;
    return r3;
}

loc_return:
{
    return r3;
}

}

extern "C" void func_802C2574(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802C2574_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802C2574 func_802C2574 preserves=true fpr_mask=0x00000000
