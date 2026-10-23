#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80831D20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_80831D20;

loc_80831D20:
{
    r6 = (r4 & -4);
    r0 = (r4 & 3);
    r3 = (r3 + r6);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 212), static_cast<uint8_t>(r5));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000049 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80831D20 func_80831D20 preserves=true fpr_mask=0x00000000
