#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804352A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_804352A4;

loc_804352A4:
{
    r3 = 0x806D0000u;
    r3 = (r3 + 27520);
    r0 = MemoryInline::FlatRead32((r3 + 176));
}

loc_804352B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804352C0;
    }
}

loc_804352B8:
{
    r3 = MemoryInline::FlatRead32((r3 + 112));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_804352C0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804352A4 func_804352A4 preserves=true fpr_mask=0x00000000
