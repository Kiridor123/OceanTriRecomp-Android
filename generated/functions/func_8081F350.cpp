#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081F350(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8081F350;

loc_8081F350:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
}

loc_8081F35C:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r4;
    r30 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8081F38C;
    }
}

loc_8081F374:
{
    r4 = 0;
    ctx->lr = 0x8081F37Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80839880u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
}

loc_8081F380:
{
    if ((static_cast<int32_t>(r31) <= static_cast<int32_t>(0))) {
        goto loc_8081F38C;
    }
}

loc_8081F384:
{
    r3 = r30;
    ctx->lr = 0x8081F38Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80040564u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
}

loc_8081F38C:
{
    r3 = r30;
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

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x1FFFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8081F350 func_8081F350 preserves=true fpr_mask=0x00000000
