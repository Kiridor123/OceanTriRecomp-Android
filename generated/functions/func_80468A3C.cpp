#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80468A3C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x80468A3Cu);
    goto loc_80468A3C;

loc_80468A3C:
{
    r0 = MemoryInline::FlatRead32((r13 + -16360));
}

loc_80468A44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80468A50;
    }
}

loc_80468A48:
{
    r3 = -10005;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_80468A50:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -16360), r0);
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002000 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80468A3C func_80468A3C preserves=true fpr_mask=0x00000000
