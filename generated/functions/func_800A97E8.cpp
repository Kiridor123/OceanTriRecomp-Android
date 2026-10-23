#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A97E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r7 = ctx->gpr[7];

    goto loc_800A97E8;

loc_800A97E8:
{
    r7 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 188));
    ctx->gpr[3] = r3;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x800A5348u>(ctx);
    r3 = ctx->gpr[3];
    r7 = ctx->gpr[7];
    ctx->gpr[3] = r3;
    ctx->gpr[7] = r7;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003F7F gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800A97E8 func_800A97E8 preserves=true fpr_mask=0x00000000
