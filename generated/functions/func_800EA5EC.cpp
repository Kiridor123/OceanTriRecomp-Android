#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800EA5EC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x800EA5ECu);
    goto loc_800EA5EC;

loc_800EA5EC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r6 = MemoryInline::FlatRead32((r3 + 144));
}

loc_800EA610:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800EA6C8;
    }
}

loc_800EA614:
{
    r5 = MemoryInline::FlatRead8((r3 + 137));
    r4 = (r5 + -2);
    r0 = (2 - r5);
    r0 = ~(r4 | r0);
    r4 = (static_cast<int32_t>(r0) >> 31);
    r0 = (r5 + 1);
    r4 = (r0 & ~r4);
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_800EA638:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800EA69C;
    }
}

loc_800EA63C:
{
    r0 = MemoryInline::FlatRead32((r13 + -17416));
    r0 = (r4 * r0);
    r4 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r13 + -17420));
    r30 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r3);
    r4 = (r4 + -2147483648);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EE8CCu>(ctx);
    r3 = ctx->gpr[3];
    r29 = r3;
    r3 = MemoryInline::FlatRead32(r31);
    r4 = (r30 + -2147483648);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EE8CCu>(ctx);
    r3 = ctx->gpr[3];
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r31 + 4));
}

loc_800EA678:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800EA684;
    }
}

loc_800EA67C:
{
    r4 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80471D00u>(ctx);
}

loc_800EA684:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
}

loc_800EA68C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800EA6C8;
    }
}

loc_800EA690:
{
    r4 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80471D00u>(ctx);
    goto loc_800EA6C8;
}

loc_800EA69C:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r31 + 148));
    r4 = (r4 * r0);
    r4 = (r4 + -2147483648);
    r4 = (r6 + r4);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EE8CCu>(ctx);
    r3 = ctx->gpr[3];
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r31 + 4));
}

loc_800EA6C0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800EA6C8;
    }
}

loc_800EA6C4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80471D00u>(ctx);
}

loc_800EA6C8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800EA5EC func_800EA5EC preserves=true fpr_mask=0x00000000
