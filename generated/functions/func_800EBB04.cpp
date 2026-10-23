#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800EBB04(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    goto loc_800EBB04;

loc_800EBB04:
{
    r8 = 0;
    r7 = r3;
    r5 = 1;
    goto loc_800EBB3C;
}

loc_800EBB14:
{
    r0 = MemoryInline::FlatRead32((r7 + 20));
}

loc_800EBB1C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_800EBB34;
    }
}

loc_800EBB20:
{
    r6 = MemoryInline::FlatRead32((r3 + 12));
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r8));
    r0 = ~(r0 | r0);
    r0 = (r6 & r0);
    MemoryInline::FlatWrite32((r3 + 12), r0);
}

loc_800EBB34:
{
    r7 = (r7 + 4);
    r8 = (r8 + 1);
}

loc_800EBB3C:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_800EBB44:
{
    if ((static_cast<uint32_t>(r8) < static_cast<uint32_t>(r0))) {
        goto loc_800EBB14;
    }
}

loc_800EBB48:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001E1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800EBB04 func_800EBB04 preserves=true fpr_mask=0x00000000
