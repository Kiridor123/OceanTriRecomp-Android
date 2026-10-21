#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8003FE88(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x8003FE88u);
    goto loc_8003FE88;

loc_8003FE88:
{
    r3 = 0x80040000u;
    r3 = (r3 + -380);
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x804B6B30u>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FF7 gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8003FE88 func_8003FE88 preserves=true fpr_mask=0x00000000
