#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803444C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x803444C4u);
    goto loc_803444C4;

loc_803444C4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r0 = MemoryInline::FlatRead8(r4);
}

loc_803444EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803445A8;
    }
}

loc_803444F0:
{
    r0 = MemoryInline::FlatRead8((r4 + 8));
}

loc_803444F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803445A8;
    }
}

loc_803444FC:
{
    r31 = MemoryInline::FlatRead8(r3);
    r3 = MemoryInline::FlatRead8((r4 + 2));
    r4 = MemoryInline::FlatRead8((r4 + 3));
    ctx->lr = 0x8034450Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80343A38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r0 = (r3 & 255);
}

loc_80344514:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r0))) {
        goto loc_80344538;
    }
}

loc_80344518:
{
    r3 = MemoryInline::FlatRead8((r30 + 9));
    r0 = MemoryInline::FlatRead8((r29 + 1));
}

loc_80344524:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80344538;
    }
}

loc_80344528:
{
}

loc_8034452C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(255))) {
        goto loc_80344538;
    }
}

loc_80344530:
{
    r3 = 1;
    goto loc_803445AC;
}

loc_80344538:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead8((r30 + 9));
    ctx->lr = 0x80344544u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80343948u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = r3;
}

loc_8034454C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803445A8;
    }
}

loc_80344550:
{
    r3 = MemoryInline::FlatRead8((r3 + 23));
    r0 = MemoryInline::FlatRead8((r29 + 23));
}

loc_8034455C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80344578;
    }
}

loc_80344560:
{
}

loc_80344564:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_80344578;
    }
}

loc_80344568:
{
}

loc_8034456C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(255))) {
        goto loc_80344578;
    }
}

loc_80344570:
{
    r3 = 1;
    goto loc_803445AC;
}

loc_80344578:
{
    r3 = r29;
    ctx->lr = 0x80344580u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80343AD0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r0 = (r3 & 255);
    r0 = (r0 & 8);
}

loc_8034458C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803445A8;
    }
}

loc_80344590:
{
    r3 = MemoryInline::FlatRead8((r29 + 20));
    r0 = MemoryInline::FlatRead8((r31 + 20));
}

loc_8034459C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_803445A8;
    }
}

loc_803445A0:
{
    r3 = 1;
    goto loc_803445AC;
}

loc_803445A8:
{
    r3 = 0;
}

loc_803445AC:
{
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
// RECOMP_REGISTRATION base 0x803444C4 func_803444C4 preserves=true fpr_mask=0x00000000
