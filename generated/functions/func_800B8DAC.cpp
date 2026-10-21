#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800B8DAC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x800B8DACu);
    goto loc_800B8DAC;

loc_800B8DAC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    // inline leaf 0x800B8E14 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 66));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x800B8E14
    r31 = r3;
    goto loc_800B8DE0;
}

loc_800B8DD0:
{
    r3 = r30;
    r4 = r31;
    // inline leaf 0x800B8E14 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 66));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x800B8E14
    r31 = r3;
}

loc_800B8DE0:
{
}

loc_800B8DE4:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_800B8DF8;
    }
}

loc_800B8DE8:
{
    r3 = r31;
    // inline leaf 0x800A52AC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 12));
    // end of inlined leaf 0x800A52AC
}

loc_800B8DF4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_800B8DD0;
    }
}

loc_800B8DF8:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800B8DAC func_800B8DAC preserves=true fpr_mask=0x00000000
