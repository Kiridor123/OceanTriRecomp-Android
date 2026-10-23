#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80827D60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_80827D60;

loc_80827D60:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80827D68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(18))) {
        goto loc_80827D74;
    }
}

loc_80827D6C:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_80827D74:
{
    r3 = MemoryInline::FlatRead32((r3 + 184));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80827D60 func_80827D60 preserves=true fpr_mask=0x00000000
