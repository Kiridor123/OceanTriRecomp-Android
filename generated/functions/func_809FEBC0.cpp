#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809FEBC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_809FEBC0;

loc_809FEBC0:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_809FEBC8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_809FEBD0;
    }
}

loc_809FEBCC:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x809FEBD4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

loc_809FEBD0:
{
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x809FEEBCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809FEBC0 func_809FEBC0 preserves=true fpr_mask=0x00000000
