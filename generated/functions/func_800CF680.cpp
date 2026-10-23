#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CF680(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r4 = ctx->gpr[4];

    goto loc_800CF680;

loc_800CF680:
{
    r4 = 4;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804C2A00u>(ctx);
    r4 = ctx->gpr[4];
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FEF gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800CF680 func_800CF680 preserves=true fpr_mask=0x00000000
