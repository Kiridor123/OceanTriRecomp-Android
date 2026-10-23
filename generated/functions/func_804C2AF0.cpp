#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804C2AF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];

    goto loc_804C2AF0;

loc_804C2AF0:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x804C2930u>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804C2AF0 func_804C2AF0 preserves=true fpr_mask=0x00000000
