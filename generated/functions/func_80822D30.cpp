#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80822D30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t ctr = ctx->ctr;

    goto loc_80822D30;

loc_80822D30:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r5 = MemoryInline::FlatRead8((r3 + 142));
}

loc_80822D4C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80822DB8;
    }
}

loc_80822D50:
{
    r4 = MemoryInline::FlatRead32((r3 + 1048));
    r0 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80822D5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80822DB8;
    }
}

loc_80822D60:
{
    r6 = MemoryInline::FlatRead32((r3 + 568));
    r3 = 0x80840000u;
    r4 = MemoryInline::FlatRead32((r3 + 24072));
    r5 = 1;
    r3 = MemoryInline::FlatRead32((r6 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x80822D84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    ctr = ctx->ctr;
    r4 = MemoryInline::FlatRead8((r3 + 207));
    r0 = 2;
    r4 = (r4 & 254);
    r4 = (r4 | 1);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r31 + 1048));
    MemoryInline::FlatWrite32((r3 + 24), r0);
    r31 = MemoryInline::FlatRead32((r31 + 1048));
    r3 = r31;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl0_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl0_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl0_0x8081AA24;
    }
}

loc_inl0_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl0_0x8081AA28;
}

loc_inl0_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl0_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl0_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 20), r0);
    goto loc_80822DFC;
}

loc_80822DB8:
{
}

loc_80822DBC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80822DFC;
    }
}

loc_80822DC0:
{
    r6 = MemoryInline::FlatRead32((r3 + 568));
    r3 = 0x80840000u;
    r4 = MemoryInline::FlatRead32((r3 + 24072));
    r5 = 1;
    r3 = MemoryInline::FlatRead32((r6 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x80822DE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    ctr = ctx->ctr;
    r4 = MemoryInline::FlatRead8((r3 + 207));
    r0 = 0;
    r4 = (r4 & 254);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r31 + 1048));
    MemoryInline::FlatWrite32((r3 + 20), r0);
}

loc_80822DFC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80822D30 func_80822D30 preserves=true fpr_mask=0x00000000
