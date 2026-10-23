#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800EAF10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_800EAF10;

loc_800EAF10:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r4;
    r30 = MemoryInline::FlatRead32((r4 + 20));
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800EA840u>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_800EAF44:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r29))) {
        goto loc_800EAF50;
    }
}

loc_800EAF48:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 4), r0);
}

loc_800EAF50:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_800EAF58:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r29))) {
        goto loc_800EAF64;
    }
}

loc_800EAF5C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 8), r0);
}

loc_800EAF64:
{
    r3 = r30;
    r4 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E5F8Cu>(ctx);
    r3 = r30;
    r4 = 1024;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E5F7Cu>(ctx);
    MemoryInline::FlatWrite32((r31 + 56), r30);
    r3 = (r31 + 12);
    r4 = 0x800F0000u;
    r4 = (r4 + -21636);
    ctx->lr = 0x800EAF90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804AAE90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800EAF10 func_800EAF10 preserves=true fpr_mask=0x00000000
