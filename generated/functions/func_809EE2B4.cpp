#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809EE2B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_809EE2B4;

loc_809EE2B4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r4;
    r31 = MemoryInline::FlatRead32((r3 + 256));
    r30 = 1;
}

loc_809EE2D8:
{
}

loc_809EE2DC:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r29))) {
        goto loc_809EE2F4;
    }
}

loc_809EE2E0:
{
    r3 = MemoryInline::FlatRead32(r31);
    r4 = r30;
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    goto loc_809EE304;
}

loc_809EE2F4:
{
    r3 = MemoryInline::FlatRead32(r31);
    r4 = r30;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
}

loc_809EE304:
{
    r30 = (r30 + 1);
}

loc_809EE30C:
{
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(8))) {
        goto loc_809EE2D8;
    }
}

loc_809EE310:
{
    r0 = 0;
    r3 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWrite8((r3 + 53), static_cast<uint8_t>(r0));
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

// RECOMP_GUEST_ABI gpr_read=0x0000003A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x809EE2B4 func_809EE2B4 preserves=true fpr_mask=0x00000000
