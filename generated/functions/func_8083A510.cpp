#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8083A510(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8083A510u);
    goto loc_8083A510;

loc_8083A510:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r4;
    r30 = r3;
    r6 = MemoryInline::FlatRead32((r3 + 20));
    r4 = MemoryInline::FlatRead32((r6 + 16));
    goto loc_8083A564;
}

loc_8083A538:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_8083A540:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r5))) {
        goto loc_8083A560;
    }
}

loc_8083A544:
{
    r0 = MemoryInline::FlatRead16((r4 + 2));
}

loc_8083A54C:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(r0))) {
        goto loc_8083A560;
    }
}

loc_8083A550:
{
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8083A6B0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r5 = r3;
    goto loc_8083A574;
}

loc_8083A560:
{
    r4 = MemoryInline::FlatRead32((r4 + 8));
}

loc_8083A564:
{
}

loc_8083A568:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8083A538;
    }
}

loc_8083A56C:
{
    r3 = 65536;
    r5 = (r3 + -1);
}

loc_8083A574:
{
    r0 = (r5 & 65535);
    r3 = r30;
}

loc_8083A580:
{
    r4 = r31;
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_8083A58C;
    }
}

loc_8083A588:
{
    goto loc_8083A594;
}

loc_8083A58C:
{
    r5 = MemoryInline::FlatRead32((r30 + 20));
    r5 = MemoryInline::FlatRead16((r5 + 2));
}

loc_8083A594:
{
    r5 = (r5 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8083A800u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000013FB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8083A510 func_8083A510 preserves=true fpr_mask=0x00000000
