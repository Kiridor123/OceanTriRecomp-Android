#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808365B0(CpuContext* MKW_RESTRICT ctx)
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_808365B0;

loc_808365B0:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
}

loc_808365BC:
{
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r0 = 0;
    r31 = r6;
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(1))) {
        goto loc_808365FC;
    }
}

loc_808365E8:
{
}

loc_808365EC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(4))) {
        goto loc_80836628;
    }
}

loc_808365F0:
{
}

loc_808365F4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(8))) {
        goto loc_80836628;
    }
}

loc_808365F8:
{
    goto loc_80836670;
}

loc_808365FC:
{
    r4 = MemoryInline::FlatRead32((r6 + 4));
    r3 = (r1 + 24);
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x808300B0u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    goto loc_80836670;
}

loc_80836628:
{
    r4 = MemoryInline::FlatRead32((r6 + 4));
    r3 = (r1 + 16);
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x808300B0u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    r3 = (r1 + 8);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r5 = 0;
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f1.d);
    r4 = MemoryInline::FlatRead32((r31 + 28));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x808300B0u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
}

loc_80836670:
{
    r5 = MemoryInline::FlatRead32((r1 + 32));
    r4 = MemoryInline::FlatRead32((r1 + 36));
    r3 = MemoryInline::FlatRead32((r1 + 40));
    r0 = MemoryInline::FlatRead32((r1 + 44));
    MemoryInline::FlatWrite32(r30, r5);
    MemoryInline::FlatWrite32((r30 + 4), r4);
    MemoryInline::FlatWrite32((r30 + 8), r3);
    MemoryInline::FlatWrite32((r30 + 12), r0);
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x808365B0 func_808365B0 preserves=true fpr_mask=0x00000000
