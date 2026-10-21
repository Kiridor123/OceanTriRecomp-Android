#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80831C60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x80831C60u);
    goto loc_80831C60;

loc_80831C60:
{
    r3 = (r3 + 228);
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80829EE0u>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002FDF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80831C60 func_80831C60 preserves=true fpr_mask=0x00000000
