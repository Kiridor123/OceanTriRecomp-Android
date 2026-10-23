#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_801474D8_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_801474D8;

loc_801474D8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r5 = 0x806A0000u;
    r31 = (r5 + 27152);
    r0 = (r4 + 31);
    r30 = (r0 & -32);
    r3 = (r3 & 255);
    ctx->lr = 0x8014750Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80141538u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    ctr = ctx->ctr;
    r0 = (r3 & 255);
}

loc_80147514:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(255))) {
        goto loc_80147534;
    }
}

loc_80147518:
{
    r0 = (r0 * 24);
    r3 = (r31 + r0);
    r29 = MemoryInline::FlatRead8((r3 + 4));
}

loc_80147528:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_80147534;
    }
}

loc_8014752C:
{
    r3 = 0;
    goto loc_80147598;
}

loc_80147534:
{
    r4 = (r31 + 3624);
    r3 = (r29 & 255);
    r0 = 6;
    ctr = r0;
}

loc_80147544:
{
    r0 = MemoryInline::FlatRead8(r4);
}

loc_8014754C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8014758C;
    }
}

loc_80147550:
{
    r0 = MemoryInline::FlatRead8((r4 + 2));
}

loc_80147558:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8014758C;
    }
}

loc_8014755C:
{
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_80147564:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r30))) {
        goto loc_80147594;
    }
}

loc_80147568:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r3 = (r3 + r0);
    r0 = (r0 + r30);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r0 - r30);
    MemoryInline::FlatWrite32((r4 + 16), r0);
    goto loc_80147598;
}

loc_8014758C:
{
    r4 = (r4 + 20);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80147544;
    }
}

loc_80147594:
{
    r3 = 0;
}

loc_80147598:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801474D8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801474D8_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FDF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801474D8 func_801474D8 preserves=true fpr_mask=0x00000000
