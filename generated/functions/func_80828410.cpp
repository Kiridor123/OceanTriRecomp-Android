#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80828410(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_80828410;

loc_80828410:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r3 = (r3_rot_0 & -256);
    r3 = (r3 - r4);
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r0));
    r31 = (r0 & 255);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8081ED60u>(ctx);
    r0 = MemoryInline::FlatRead8((r30 + 12));
}

loc_8082844C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80828474;
    }
}

loc_80828450:
{
    r4 = MemoryInline::FlatRead8((r30 + 13));
    r3 = MemoryInline::FlatRead8((r30 + 14));
    r0 = MemoryInline::FlatRead8((r30 + 15));
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r31));
    r0 = MemoryInline::FlatRead32((r1 + 16));
    goto loc_80828484;
}

loc_80828474:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r31));
    r0 = MemoryInline::FlatRead32((r1 + 12));
}

loc_80828484:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = (r1 + 8);
    r3 = 1;
    ctx->lr = 0x80828494u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x804B9BC0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    r3 = 128;
    r4 = 0;
    r5 = 4;
    ctx->lr = 0x808284A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x804B6EF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
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
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FEE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80828410 func_80828410 preserves=true fpr_mask=0x00000000
