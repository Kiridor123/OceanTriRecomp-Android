#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F93E4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];

    goto loc_800F93E4;

loc_800F93E4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->lr = 0x800F93F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E3BA0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
}

loc_800F93F8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1024))) {
        goto loc_800F9410;
    }
}

loc_800F93FC:
{
}

loc_800F9400:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(2048))) {
        goto loc_800F9418;
    }
}

loc_800F9404:
{
}

loc_800F9408:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(8))) {
        goto loc_800F9420;
    }
}

loc_800F940C:
{
    goto loc_800F9428;
}

loc_800F9410:
{
    r3 = 8;
    goto loc_800F942C;
}

loc_800F9418:
{
    r3 = 16;
    goto loc_800F942C;
}

loc_800F9420:
{
    r3 = 4;
    goto loc_800F942C;
}

loc_800F9428:
{
    r3 = 0;
}

loc_800F942C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800F93E4 func_800F93E4 preserves=true fpr_mask=0x00000000
