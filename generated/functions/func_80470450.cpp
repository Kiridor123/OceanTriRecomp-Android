#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80470450(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];

    goto loc_80470450;

loc_80470450:
{
}

loc_80470454:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(32768))) {
        goto loc_80470460;
    }
}

loc_80470458:
{
    r3 = 65536;
    r3 = (r3 + -32768);
}

loc_80470460:
{
    MemoryInline::FlatWrite16((r13 + -16122), static_cast<uint16_t>(r3));
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80470450 func_80470450 preserves=true fpr_mask=0x00000000
