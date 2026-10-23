#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CBAA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];

    goto loc_804CBAA0;

loc_804CBAA0:
{
    r0 = MemoryInline::FlatRead32((r13 + -15192));
}

loc_804CBAA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804CBAB4;
    }
}

loc_804CBAAC:
{
    r3 = 64;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_804CBAB4:
{
    r3 = 0x80000000u;
    r3 = MemoryInline::FlatRead8((r3 + 12676));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002000 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804CBAA0 func_804CBAA0 preserves=true fpr_mask=0x00000000
