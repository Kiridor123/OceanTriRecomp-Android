#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80457440(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r11 = ctx->gpr[11];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    MKW_GUEST_ENTER(0x80457440u);
    goto loc_80457440;

loc_80457440:
{
    f28.d = MemoryInline::FlatReadFloat64((r11 + -32));
    f29.d = MemoryInline::FlatReadFloat64((r11 + -24));
    f30.d = MemoryInline::FlatReadFloat64((r11 + -16));
    f31.d = MemoryInline::FlatReadFloat64((r11 + -8));
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000800 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0xF0000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80457440 func_80457440 preserves=false fpr_mask=0xF0000000
