#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80834860(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_80834860;

loc_80834860:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r31 = r3;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x80834884u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r5 = MemoryInline::FlatRead8((r31 + 256));
    r4 = r31;
    r6 = MemoryInline::FlatRead32((r31 + 252));
    r3 = (r1 + 24);
    ctx->lr = 0x80834898u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x808365B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r6 = MemoryInline::FlatRead32((r1 + 24));
    r3 = r31;
    r5 = MemoryInline::FlatRead32((r1 + 28));
    r4 = MemoryInline::FlatRead32((r1 + 32));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    MemoryInline::FlatWriteRam32((r1 + 40), r6);
    MemoryInline::FlatWriteRam32((r1 + 44), r5);
    MemoryInline::FlatWriteRam32((r1 + 48), r4);
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x808314C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    r5 = (r1 + 40);
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    r12 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 108));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r4 = (r1 + 16);
    r6 = MemoryInline::FlatRead8((r31 + 206));
    ctr = r12;
    ctx->lr = 0x808348F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 257u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 256u, (r31 + 256));
}

loc_808348F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80834910;
    }
}

loc_808348FC:
{
}

loc_80834900:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80834938;
    }
}

loc_80834904:
{
}

loc_80834908:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_80834960;
    }
}

loc_8083490C:
{
    goto loc_80834984;
}

loc_80834910:
{
    r12 = MemoryInline::ReadResolved32(guest_range_0, 0u, r31);
    r3 = r31;
    r4 = (r1 + 16);
    r6 = (r1 + 40);
    r12 = MemoryInline::FlatRead32((r12 + 112));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 252u, (r31 + 252));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 206u, (r31 + 206));
    ctr = r12;
    ctx->lr = 0x80834934u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_80834984;
}

loc_80834938:
{
    r12 = MemoryInline::ReadResolved32(guest_range_0, 0u, r31);
    r3 = r31;
    r4 = (r1 + 16);
    r6 = (r1 + 40);
    r12 = MemoryInline::FlatRead32((r12 + 116));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 252u, (r31 + 252));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 206u, (r31 + 206));
    ctr = r12;
    ctx->lr = 0x8083495Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_80834984;
}

loc_80834960:
{
    r12 = MemoryInline::ReadResolved32(guest_range_0, 0u, r31);
    r3 = r31;
    r4 = (r1 + 16);
    r6 = (r1 + 40);
    r12 = MemoryInline::FlatRead32((r12 + 120));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 252u, (r31 + 252));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 206u, (r31 + 206));
    ctr = r12;
    ctx->lr = 0x80834984u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_80834984:
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
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80834860 func_80834860 preserves=true fpr_mask=0x00000000
