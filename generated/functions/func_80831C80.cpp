#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80831C80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];

    goto loc_80831C80;

loc_80831C80:
{
    r3 = (r3 + 228);
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80829F70u>(ctx);
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000001E9 gpr_return=0x00000008 fpr_read=0x000000FF fpr_write=0x000000FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80831C80 func_80831C80 preserves=true fpr_mask=0x00000000
