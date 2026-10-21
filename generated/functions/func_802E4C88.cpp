#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802E4C88(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x802E4C88u);
    goto loc_802E4C88;

loc_802E4C88:
{
    r3 = 0x806C0000u;
    r4 = (r3 + 1136);
    r3 = MemoryInline::FlatRead32((r4 + 120));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r4 + 120), r0);
    r3 = 0x806C0000u;
    r4 = (r3 + 328);
    r3 = MemoryInline::FlatRead32((r4 + 400));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r4 + 400), r0);
    r3 = MemoryInline::FlatRead32((r4 + 804));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r4 + 804), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802E4C88 func_802E4C88 preserves=true fpr_mask=0x00000000
