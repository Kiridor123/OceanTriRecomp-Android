#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081B820(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8081B820u);
    goto loc_8081B820;

loc_8081B820:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
}

loc_8081B82C:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r4;
    r29 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8081B954;
    }
}

loc_8081B848:
{
    r5 = 0x80840000u;
    r4 = 0;
    r5 = (r5 + 20304);
    MemoryInline::FlatWrite32(r3, r5);
    r3 = (r3 + 24);
    // inline leaf 0x80839DA0 (8 guest instruction(s))
}

loc_inl0_0x80839DA0:
{
}

loc_inl0_0x80839DA4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x80839DB0;
    }
}

loc_inl0_0x80839DA8:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl0_cont_80839DA0;
}

loc_inl0_0x80839DB0:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl0_cont_80839DA0:
{
    // end of inlined leaf 0x80839DA0
    r31 = r3;
    goto loc_8081B8D0;
}

loc_8081B868:
{
    r4 = r31;
    r3 = (r29 + 24);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80839D30u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r3 = MemoryInline::FlatRead32((r29 + 20));
}

loc_8081B87C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8081B898;
    }
}

loc_8081B880:
{
    r4 = MemoryInline::FlatRead32((r31 + 4));
    ctx->lr = 0x8081B888u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804C2B10u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = r31;
    ctx->lr = 0x8081B894u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804C2B10u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_8081B8C0;
}

loc_8081B898:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
}

loc_8081B8A0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8081B8B8;
    }
}

loc_8081B8A4:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 1;
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x8081B8B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8081B8B8:
{
    r3 = r31;
    ctx->lr = 0x8081B8C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80040564u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8081B8C0:
{
    r3 = (r29 + 24);
    r4 = 0;
    // inline leaf 0x80839DA0 (8 guest instruction(s))
}

loc_inl1_0x80839DA0:
{
}

loc_inl1_0x80839DA4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x80839DB0;
    }
}

loc_inl1_0x80839DA8:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl1_cont_80839DA0;
}

loc_inl1_0x80839DB0:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl1_cont_80839DA0:
{
    // end of inlined leaf 0x80839DA0
    r31 = r3;
}

loc_8081B8D0:
{
}

loc_8081B8D4:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8081B868;
    }
}

loc_8081B8D8:
{
}

loc_8081B8DC:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8081B944;
    }
}

loc_8081B8E0:
{
    r4 = 0x80840000u;
    r3 = (r29 + 8);
    r4 = (r4 + 20464);
    MemoryInline::FlatWrite32(r29, r4);
    r4 = 0;
    // inline leaf 0x80839DA0 (8 guest instruction(s))
}

loc_inl2_0x80839DA0:
{
}

loc_inl2_0x80839DA4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x80839DB0;
    }
}

loc_inl2_0x80839DA8:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl2_cont_80839DA0;
}

loc_inl2_0x80839DB0:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl2_cont_80839DA0:
{
    // end of inlined leaf 0x80839DA0
    r31 = r3;
    goto loc_8081B93C;
}

loc_8081B900:
{
    r4 = r31;
    r3 = (r29 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80839D30u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r3 = MemoryInline::FlatRead32((r29 + 20));
}

loc_8081B914:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8081B924;
    }
}

loc_8081B918:
{
    r4 = r31;
    ctx->lr = 0x8081B920u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804C2B10u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_8081B92C;
}

loc_8081B924:
{
    r3 = r31;
    ctx->lr = 0x8081B92Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80040564u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8081B92C:
{
    r3 = (r29 + 8);
    r4 = 0;
    // inline leaf 0x80839DA0 (8 guest instruction(s))
}

loc_inl3_0x80839DA0:
{
}

loc_inl3_0x80839DA4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x80839DB0;
    }
}

loc_inl3_0x80839DA8:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl3_cont_80839DA0;
}

loc_inl3_0x80839DB0:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl3_cont_80839DA0:
{
    // end of inlined leaf 0x80839DA0
    r31 = r3;
}

loc_8081B93C:
{
}

loc_8081B940:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8081B900;
    }
}

loc_8081B944:
{
}

loc_8081B948:
{
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(0))) {
        goto loc_8081B954;
    }
}

loc_8081B94C:
{
    r3 = r29;
    ctx->lr = 0x8081B954u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80040564u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8081B954:
{
    r3 = r29;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8081B820 func_8081B820 preserves=true fpr_mask=0x00000000
