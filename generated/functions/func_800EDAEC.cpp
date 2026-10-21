#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800EDAEC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    MKW_GUEST_ENTER(0x800EDAECu);
    goto loc_800EDAEC;

loc_800EDAEC:
{
    r5 = 0;
    MemoryInline::FlatWrite32((r4 + 12), r5);
    MemoryInline::FlatWrite32((r4 + 16), r5);
    r0 = 255;
    MemoryInline::FlatWrite8((r4 + 24), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r4 + 20), r5);
    MemoryInline::FlatWrite8((r4 + 25), static_cast<uint8_t>(r5));
    InvokeDirectCpu<0x800EDB0Cu>(ctx);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800EDAEC func_800EDAEC preserves=true fpr_mask=0x00000000
