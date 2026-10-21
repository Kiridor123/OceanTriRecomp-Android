#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8004750C_ra58_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[6] = arg_r6;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8004750Cu);
    goto loc_8004750C;

loc_8004750C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x90CD0000u;
    r30 = (r3 + -28672);
    r31 = 0x80670000u;
    r3 = (r31 + -18072);
    r4 = 0;
    r5 = 1232;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r31 + -18072);
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80047548:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80047550;
    }
}

loc_8004754C:
{
    MemoryInline::FlatWriteRam32((r3 + 4), r30);
}

loc_80047550:
{
    r30 = (r30 + 65536);
    r30 = (r30 + -32576);
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_80047560:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80047568;
    }
}

loc_80047564:
{
    MemoryInline::FlatWriteRam32((r3 + 8), r30);
}

loc_80047568:
{
    r30 = (r30 + 65536);
    r30 = (r30 + -32576);
    r3 = 0x80670000u;
    r3 = (r3 + -18072);
    MemoryInline::FlatWriteRam32((r3 + 12), r30);
    r30 = (r30 + 196608);
    r30 = (r30 + 9312);
    r4 = 0;
    r0 = 2;
    ctr = r0;
}

loc_80047590:
{
    r0 = MemoryInline::FlatRead32((r3 + 1120));
}

loc_80047598:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800475A0;
    }
}

loc_8004759C:
{
    MemoryInline::FlatWrite32((r3 + 1120), r30);
}

loc_800475A0:
{
    r0 = MemoryInline::FlatRead32((r3 + 1160));
}

loc_800475A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800475B4;
    }
}

loc_800475AC:
{
    r0 = (r30 + 65536);
    MemoryInline::FlatWrite32((r3 + 1160), r0);
}

loc_800475B4:
{
    r30 = (r30 + 131072);
    r0 = MemoryInline::FlatRead32((r3 + 1124));
}

loc_800475C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800475C8;
    }
}

loc_800475C4:
{
    MemoryInline::FlatWrite32((r3 + 1124), r30);
}

loc_800475C8:
{
    r0 = MemoryInline::FlatRead32((r3 + 1164));
}

loc_800475D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800475DC;
    }
}

loc_800475D4:
{
    r0 = (r30 + 65536);
    MemoryInline::FlatWrite32((r3 + 1164), r0);
}

loc_800475DC:
{
    r30 = (r30 + 131072);
    r0 = MemoryInline::FlatRead32((r3 + 1128));
}

loc_800475E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800475F0;
    }
}

loc_800475EC:
{
    MemoryInline::FlatWrite32((r3 + 1128), r30);
}

loc_800475F0:
{
    r0 = MemoryInline::FlatRead32((r3 + 1168));
}

loc_800475F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80047604;
    }
}

loc_800475FC:
{
    r0 = (r30 + 65536);
    MemoryInline::FlatWrite32((r3 + 1168), r0);
}

loc_80047604:
{
    r30 = (r30 + 131072);
    r0 = MemoryInline::FlatRead32((r3 + 1132));
}

loc_80047610:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80047618;
    }
}

loc_80047614:
{
    MemoryInline::FlatWrite32((r3 + 1132), r30);
}

loc_80047618:
{
    r0 = MemoryInline::FlatRead32((r3 + 1172));
}

loc_80047620:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8004762C;
    }
}

loc_80047624:
{
    r0 = (r30 + 65536);
    MemoryInline::FlatWrite32((r3 + 1172), r0);
}

loc_8004762C:
{
    r30 = (r30 + 131072);
    r0 = MemoryInline::FlatRead32((r3 + 1136));
}

loc_80047638:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80047640;
    }
}

loc_8004763C:
{
    MemoryInline::FlatWrite32((r3 + 1136), r30);
}

loc_80047640:
{
    r0 = MemoryInline::FlatRead32((r3 + 1176));
}

loc_80047648:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80047654;
    }
}

loc_8004764C:
{
    r0 = (r30 + 65536);
    MemoryInline::FlatWrite32((r3 + 1176), r0);
}

loc_80047654:
{
    r30 = (r30 + 131072);
    r3 = (r3 + 20);
    r4 = (r4 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80047590;
    }
}

loc_80047664:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8004750C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004750C_ra58_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004750C func_8004750C preserves=true fpr_mask=0x00000000
