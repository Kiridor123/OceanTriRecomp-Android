#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808244E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r30_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x808244E0u);
    goto loc_808244E0;

loc_808244E0:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r30 = (r30_rot_0 & -4);
    r29 = r3;
    r3 = (r3 + r30);
    r3 = MemoryInline::FlatRead32((r3 + 684));
    // inline leaf 0x8081D0E0 (1 guest instruction(s))
    // end of inlined leaf 0x8081D0E0
    r4 = MemoryInline::FlatRead32((r29 + 568));
    r31 = r3;
    r3 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8082BE30u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    r3 = (r29 + r30);
    r4 = 0x80840000u;
    r3 = MemoryInline::FlatRead32((r3 + 572));
    r5 = 1;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    r12 = MemoryInline::FlatRead32(r3);
    f2.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    r12 = MemoryInline::FlatRead32((r12 + 60));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    r4 = MemoryInline::FlatRead32((r4 + 21856));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    ctr = r12;
    ctx->lr = 0x80824564u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    ctr = ctx->ctr;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r4 = 0x80840000u;
    MemoryInline::FlatWriteFloat32((r3 + 44), f2.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r3 + 48), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 18392));
    MemoryInline::FlatWriteFloat32((r3 + 52), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 68));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002FDE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FF8 fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x808244E0 func_808244E0 preserves=true fpr_mask=0x00000000
