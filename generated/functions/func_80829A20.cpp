#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80829A20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80829A20u);
    goto loc_80829A20;

loc_80829A20:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = (r3 + 8);
    r31 = MemoryInline::FlatRead32((r3 + 8));
    goto loc_80829A68;
}

loc_80829A40:
{
    r5 = MemoryInline::FlatRead32((r31 + 8));
}

loc_80829A48:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r5))) {
        goto loc_80829A64;
    }
}

loc_80829A4C:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r31);
    r3 = (r3 + 4);
    r4 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80839950u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r3 = r31;
    goto loc_80829A74;
}

loc_80829A64:
{
    r31 = MemoryInline::FlatRead32(r31);
}

loc_80829A68:
{
}

loc_80829A6C:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r0))) {
        goto loc_80829A40;
    }
}

loc_80829A70:
{
    r3 = 0;
}

loc_80829A74:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80829A20 func_80829A20 preserves=true fpr_mask=0x00000000
