#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808292B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_808292B0;

loc_808292B0:
{
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r3 + 4);
    goto loc_808292D8;
}

loc_808292C0:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
}

loc_808292C8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r3))) {
        goto loc_808292D4;
    }
}

loc_808292CC:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    return;
}

loc_808292D4:
{
    r5 = MemoryInline::FlatRead32(r5);
}

loc_808292D8:
{
}

loc_808292DC:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_808292C0;
    }
}

loc_808292E0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x808292B0 func_808292B0 preserves=true fpr_mask=0x00000000
