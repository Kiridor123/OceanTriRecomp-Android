#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80822E10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r30_addic_src_0 = 0;
    uint32_t r30_addic_src_1 = 0;
    uint32_t r30_addic_src_2 = 0;
    uint32_t r30_addic_src_3 = 0;
    uint32_t r3_rot_0 = 0;

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
    uint32_t ctr = ctx->ctr;

    goto loc_80822E10;

loc_80822E10:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r29 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8081ED60u>(ctx);
    r3 = MemoryInline::FlatRead32((r29 + 568));
    r4 = (r29 + 600);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x80822E48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    ctr = ctx->ctr;
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 32));
}

loc_80822E54:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80822E84;
    }
}

loc_80822E58:
{
    r31 = (r29 + 12);
    r30 = 3;
}

loc_80822E60:
{
    r3 = MemoryInline::FlatRead32((r31 + 572));
    r4 = (r29 + 600);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x80822E78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    ctr = ctx->ctr;
    r30_addic_src_2 = r30;
    r30 = (r30_addic_src_2 + -1);
}

loc_80822E7C:
{
    r31 = (r31 + -4);
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(0))) {
        goto loc_80822E60;
    }
}

loc_80822E84:
{
    r4 = MemoryInline::FlatRead32((r29 + 1108));
    r0 = MemoryInline::FlatRead32((r29 + 1112));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r3 = (r3_rot_0 & -256);
    r3 = (r3 - r4);
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r0));
    r31 = (r0 & 255);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8081ED60u>(ctx);
    r0 = MemoryInline::FlatRead8((r29 + 1120));
}

loc_80822EA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80822ED0;
    }
}

loc_80822EAC:
{
    r4 = MemoryInline::FlatRead8((r29 + 1121));
    r3 = MemoryInline::FlatRead8((r29 + 1122));
    r0 = MemoryInline::FlatRead8((r29 + 1123));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r31));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    goto loc_80822EE0;
}

loc_80822ED0:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r31));
    r0 = MemoryInline::FlatRead32((r1 + 12));
}

loc_80822EE0:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r4 = (r1 + 16);
    r3 = 1;
    ctx->lr = 0x80822EF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804B9BC0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    ctr = ctx->ctr;
    r3 = 128;
    r4 = 0;
    r5 = 4;
    ctx->lr = 0x80822F00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804B6EF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    ctr = ctx->ctr;
    r5 = 0x80840000u;
    r4 = -872349696;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 18416));
    r3 = 0x80840000u;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 18416));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 18416));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 18472));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 18472));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 18472));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 18472));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 18416));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80822E10 func_80822E10 preserves=true fpr_mask=0x00000000
