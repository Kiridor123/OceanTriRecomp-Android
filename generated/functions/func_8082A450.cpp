#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082A450(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_8082A450;

loc_8082A450:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r31 = r7;
    r3 = 128;
    r4 = 0;
    r5 = 4;
    ctx->lr = 0x8082A488u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x804B6EF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    r3 = -872349696;
    f0.d = MemoryInline::FlatReadFloat32(r27);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
}

loc_8082A498:
{
    f0.d = MemoryInline::FlatReadFloat32((r27 + 4));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8082A4AC;
    }
}

loc_8082A4A4:
{
    r0 = MemoryInline::FlatRead32(r31);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_8082A4AC:
{
    r3 = -872349696;
    f0.d = MemoryInline::FlatReadFloat32(r29);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
}

loc_8082A4BC:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32(r28);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r27 + 4));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8082A4E0;
    }
}

loc_8082A4D8:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_8082A4E0:
{
    r3 = -872349696;
    f0.d = MemoryInline::FlatReadFloat32(r30);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
}

loc_8082A4F0:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32(r28);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8082A514;
    }
}

loc_8082A50C:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_8082A514:
{
    r3 = -872349696;
    f0.d = MemoryInline::FlatReadFloat32(r30);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
}

loc_8082A524:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32(r27);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8082A548;
    }
}

loc_8082A540:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_8082A548:
{
    r3 = -872349696;
    f0.d = MemoryInline::FlatReadFloat32(r29);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000037FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8082A450 func_8082A450 preserves=true fpr_mask=0x00000000
