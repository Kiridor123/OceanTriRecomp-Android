#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80831AF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;

    goto loc_80831AF0;

loc_80831AF0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r31 = r3;
    r29 = r4;
    r5 = MemoryInline::FlatRead32((r3 + 40));
    r0 = MemoryInline::FlatRead32((r5 + 80));
    r3 = MemoryInline::FlatRead32((r5 + 76));
    r28_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r28 = (r28_rot_0 & 15);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & 15);
}

loc_80831B2C:
{
    if ((static_cast<uint32_t>(r28) >= static_cast<uint32_t>(r0))) {
        goto loc_80831C40;
    }
}

loc_80831B30:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(12));
    r0 = (r0_rot_1 & 15);
}

loc_80831B38:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r0))) {
        goto loc_80831B40;
    }
}

loc_80831B3C:
{
    goto loc_80831C40;
}

loc_80831B40:
{
    r0 = (r28 + 1);
    r3 = r5;
    r4 = (r0 & 255);
    ctx->lr = 0x80831B50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8082E5C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r31 + 40));
    r4 = r28;
    r5 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8082EC50u>(ctx);
    r3 = MemoryInline::FlatRead32((r31 + 40));
    r0 = MemoryInline::FlatRead32((r3 + 80));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r4 = (r4_rot_1 & 15);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8082E650u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r29 = 0;
    r30 = 1;
    r4 = 4;
    r0 = 60;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r29));
    r3 = MemoryInline::FlatRead32((r31 + 40));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r30));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    // inline leaf 0x8082E110 (8 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r3 + 76));
    r5 = MemoryInline::FlatRead32((r3 + 88));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & 15);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(9));
    r3 = (r3_rot_1 & 480);
    r0 = (r0 * 20);
    r0 = (r5 + r0);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8082E110
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & 1020);
    r4 = MemoryInline::FlatRead8((r1 + 12));
    r5 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r1 + 13));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r4));
    r3 = (r31 + 228);
    r4 = MemoryInline::FlatRead8((r1 + 14));
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 15));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r31 + 40));
    r0 = MemoryInline::FlatRead32((r4 + 80));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r4 = (r4_rot_2 & 15);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80829F70u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r3 = 0x80840000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 76));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 18664));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80831BF0:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80831C08;
    }
}

loc_80831BF8:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 80));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80831C00:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80831C08;
    }
}

loc_80831C04:
{
    r29 = r30;
}

loc_80831C08:
{
}

loc_80831C0C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80831C40;
    }
}

loc_80831C10:
{
    r4 = MemoryInline::FlatRead32((r31 + 40));
    r0 = MemoryInline::FlatRead32((r4 + 80));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & 15);
}

loc_80831C20:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80831C40;
    }
}

loc_80831C24:
{
    r3 = (r1 + 16);
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x808300B0u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r31 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    MemoryInline::FlatWriteFloat32((r31 + 80), f0.d);
}

loc_80831C40:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x000000FF fpr_write=0x000000FF fpr_return=0x00000002 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80831AF0 func_80831AF0 preserves=true fpr_mask=0x00000000
