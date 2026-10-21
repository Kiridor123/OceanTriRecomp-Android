#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80A06AE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];

    MKW_GUEST_ENTER(0x80A06AE0u);
    goto loc_80A06AE0;

loc_80A06AE0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r31 = MemoryInline::FlatRead32((r3 + 256));
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_80A06B08:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80A06B18;
    }
}

loc_80A06B0C:
{
    r5 = 75;
    r30 = 135;
    goto loc_80A06B20;
}

loc_80A06B18:
{
    r5 = 45;
    r30 = 105;
}

loc_80A06B20:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
}

loc_80A06B28:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r30))) {
        goto loc_80A06B38;
    }
}

loc_80A06B2C:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    goto loc_80A06C38;
}

loc_80A06B38:
{
    r4 = MemoryInline::FlatRead8((r3 + 7));
}

loc_80A06B40:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80A06B60;
    }
}

loc_80A06B44:
{
}

loc_80A06B48:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_80A06B80;
    }
}

loc_80A06B4C:
{
}

loc_80A06B50:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_80A06BDC;
    }
}

loc_80A06B54:
{
}

loc_80A06B58:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(3))) {
        goto loc_80A06C1C;
    }
}

loc_80A06B5C:
{
    goto loc_80A06C38;
}

loc_80A06B60:
{
    r0 = MemoryInline::FlatRead16((r31 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80A06B68:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r5))) {
        goto loc_80A06C38;
    }
}

loc_80A06B6C:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 10), static_cast<uint16_t>(r0));
    goto loc_80A06C38;
}

loc_80A06B80:
{
    r3 = r29;
    ctx->lr = 0x80A06B88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x802AB3A8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    r3 = (r29 + 48);
    r4 = (r29 + 60);
    ctx->lr = 0x80A06B94u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x809EA800u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    r0 = MemoryInline::FlatRead16((r31 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80A06B9C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(4))) {
        goto loc_80A06C38;
    }
}

loc_80A06BA0:
{
    r3 = MemoryInline::FlatRead8((r29 + 7));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 7), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 10), static_cast<uint16_t>(r0));
    r3 = (r29 + 60);
    r4 = r3;
    ctx->lr = 0x80A06BC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x809F8A00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    r3 = (r29 + 60);
    r4 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + -5360));
    ctx->lr = 0x80A06BD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x809F0D3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r3 = r29;
    ctx->lr = 0x80A06BD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80A06C54u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    goto loc_80A06C38;
}

loc_80A06BDC:
{
    r3 = r29;
    ctx->lr = 0x80A06BE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80A06C54u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    r3 = r29;
    ctx->lr = 0x80A06BECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x802AB3A8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    r3 = (r29 + 48);
    r4 = (r29 + 60);
    ctx->lr = 0x80A06BF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x809EA800u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    r0 = MemoryInline::FlatRead16((r31 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80A06C00:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(4))) {
        goto loc_80A06C38;
    }
}

loc_80A06C04:
{
    r3 = MemoryInline::FlatRead8((r29 + 7));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 7), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 10), static_cast<uint16_t>(r0));
    goto loc_80A06C38;
}

loc_80A06C1C:
{
    r3 = r29;
    ctx->lr = 0x80A06C24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80A06C54u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    r0 = MemoryInline::FlatRead16((r31 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80A06C2C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r30))) {
        goto loc_80A06C38;
    }
}

loc_80A06C30:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r29 + 4), static_cast<uint8_t>(r0));
}

loc_80A06C38:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80A06AE0 func_80A06AE0 preserves=true fpr_mask=0x00000000
