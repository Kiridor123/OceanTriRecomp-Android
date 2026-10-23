#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80831CA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];

    goto loc_80831CA0;

loc_80831CA0:
{
    r3 = (r3 + 228);
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8082A0C0u>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000059 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80831CA0 func_80831CA0 preserves=true fpr_mask=0x00000000
