#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80829E00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_80829E00;

loc_80829E00:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r4 = 0;
}

loc_80829E0C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65279))) {
        goto loc_80829E20;
    }
}

loc_80829E10:
{
    r0 = MemoryInline::FlatRead16((r3 + 6));
}

loc_80829E18:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_80829E20;
    }
}

loc_80829E1C:
{
    r4 = 1;
}

loc_80829E20:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80829E00 func_80829E00 preserves=true fpr_mask=0x00000000
