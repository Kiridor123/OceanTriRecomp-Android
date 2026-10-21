#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800404C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x800404C4u);
    goto loc_800404C4;

loc_800404C4:
{
    r4 = r3;
}

loc_800404CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_800404D0:
{
    r3 = MemoryInline::FlatRead32((r13 + -18072));
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804C2930u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

loc_return:
{
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800404C4 func_800404C4 preserves=true fpr_mask=0x00000000
