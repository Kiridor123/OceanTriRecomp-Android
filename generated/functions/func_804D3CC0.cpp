#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804D3CC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];

    goto loc_804D3CC0;

loc_804D3CC0:
{
    r9 = ctx->hid0;
    r10 = (r9 | 8);
    ctx->hid0 = r10;
    // isync @ 0x804D3CCC (no-op)
    // sync @ 0x804D3CD0 (no-op)
    ctx->hid0 = r9;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000600 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804D3CC0 func_804D3CC0 preserves=true fpr_mask=0x00000000
