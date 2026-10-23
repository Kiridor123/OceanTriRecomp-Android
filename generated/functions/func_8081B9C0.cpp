#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081B9C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8081B9C0;

loc_8081B9C0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
}

loc_8081B9CC:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8081B9E8;
    }
}

loc_8081B9DC:
{
}

loc_8081B9E0:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_8081B9E8;
    }
}

loc_8081B9E4:
{
    ctx->lr = 0x8081B9E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80040564u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
}

loc_8081B9E8:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8081B9C0 func_8081B9C0 preserves=true fpr_mask=0x00000000
