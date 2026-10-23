#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808414A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r5_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_808414A0;

loc_808414A0:
{
    r5 = 0x80870000u;
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r5 = (r5 + -32096);
    r3 = 0x80870000u;
    r5_addr_0 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_0);
    r3 = MemoryInline::FlatRead32((r3 + -31996));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 100);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 8), r4);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 | 268435456);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x808414A0 func_808414A0 preserves=true fpr_mask=0x00000000
