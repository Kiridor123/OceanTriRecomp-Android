#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80838C00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_80838C00;

loc_80838C00:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    r9 = MemoryInline::FlatRead32(r4);
    r10 = r4;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r6 = 0x80870000u;
    r4 = 0;
    r31 = r5;
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r6 + -32176));
    r8 = MemoryInline::FlatRead32((r3 + 56));
    r7 = MemoryInline::FlatRead32((r3 + 60));
}

loc_80838C3C:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    MemoryInline::FlatWriteRam32((r1 + 12), r9);
    MemoryInline::FlatWriteRam32((r1 + 16), r8);
    MemoryInline::FlatWriteRam32((r1 + 20), r7);
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_80838C78;
    }
}

loc_80838C50:
{
    r3 = (r6 + -32176);
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80838C5C:
{
    if ((static_cast<uint32_t>(r9) != static_cast<uint32_t>(r0))) {
        goto loc_80838C78;
    }
}

loc_80838C60:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_80838C68:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(r0))) {
        goto loc_80838C78;
    }
}

loc_80838C6C:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_80838C74:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(r0))) {
        goto loc_80838C7C;
    }
}

loc_80838C78:
{
    r4 = 1;
}

loc_80838C7C:
{
}

loc_80838C80:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80838D08;
    }
}

loc_80838C84:
{
    r5 = MemoryInline::FlatRead16((r10 + 12));
    r4 = r9;
    r6 = MemoryInline::FlatRead16((r10 + 14));
    r3 = (r1 + 24);
    r7 = MemoryInline::FlatRead32((r10 + 8));
    r8 = 0;
    r9 = 0;
    r10 = 0;
    ctx->lr = 0x80838CA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x804B86A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r3 = 0x80840000u;
    r4 = MemoryInline::FlatRead32((r30 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 18776));
    r3 = (r1 + 24);
    r5 = MemoryInline::FlatRead32((r30 + 60));
    r6 = 0;
    f2.d = f1.d;
    r7 = 0;
    f3.d = f1.d;
    r8 = 0;
    ctx->lr = 0x80838CD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x804B8900u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r4 = r31;
    r3 = (r1 + 24);
    ctx->lr = 0x80838CE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x804B8DA0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r6 = 0x80870000u;
    r7 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r6 + -32176);
    r5 = MemoryInline::FlatRead32((r1 + 12));
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWriteRam32((r6 + -32176), r7);
    MemoryInline::FlatWriteRam32((r4 + 4), r5);
    MemoryInline::FlatWriteRam32((r4 + 8), r3);
    MemoryInline::FlatWriteRam32((r4 + 12), r0);
}

loc_80838D08:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80838C00 func_80838C00 preserves=true fpr_mask=0x00000000
