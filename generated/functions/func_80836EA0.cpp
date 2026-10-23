#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80836EA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r9_rot_0 = 0;

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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80836EA0;

loc_80836EA0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r4 = 0x80840000u;
    r6 = -1;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 18776));
    r5 = 0x80870000u;
    r0 = 255;
    r4 = (r5 + -32176);
    r29 = 0;
    r28 = (r3 + 24);
    MemoryInline::FlatWrite32(r3, r6);
    MemoryInline::FlatWriteRam32((r1 + 8), r29);
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    r30 = MemoryInline::FlatRead8((r1 + 8));
    MemoryInline::FlatWrite32((r3 + 4), r6);
    r31 = MemoryInline::FlatRead8((r1 + 9));
    MemoryInline::FlatWrite32((r3 + 8), r6);
    r12 = MemoryInline::FlatRead8((r1 + 10));
    MemoryInline::FlatWrite32((r3 + 12), r6);
    r11 = MemoryInline::FlatRead8((r1 + 11));
    MemoryInline::FlatWrite32((r3 + 16), r6);
    r10 = MemoryInline::FlatRead8((r1 + 12));
    MemoryInline::FlatWrite32((r3 + 20), r6);
    r9 = MemoryInline::FlatRead8((r1 + 13));
    MemoryInline::FlatWrite32((r3 + 24), r6);
    r8 = MemoryInline::FlatRead8((r1 + 14));
    MemoryInline::FlatWrite32((r3 + 28), r6);
    r7 = MemoryInline::FlatRead8((r1 + 15));
    MemoryInline::FlatWrite8((r3 + 66), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 67), static_cast<uint8_t>(r29));
    MemoryInline::FlatWriteFloat32((r3 + 68), f0.d);
    MemoryInline::FlatWrite32((r3 + 72), r29);
    MemoryInline::FlatWriteRam32((r5 + -32176), r0);
    MemoryInline::FlatWriteRam32((r4 + 4), r29);
    r6 = MemoryInline::FlatRead8((r3 + 24));
    r5 = MemoryInline::FlatRead8((r3 + 25));
    r4 = MemoryInline::FlatRead8((r3 + 26));
    r0 = MemoryInline::FlatRead8((r3 + 27));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r12));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r11));
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r10));
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r9));
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite32((r3 + 32), r29);
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 9), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8(r28);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r4 = MemoryInline::FlatRead8((r28 + 1));
    MemoryInline::FlatWrite8((r3 + 13), static_cast<uint8_t>(r4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80836F90:
{
    r0 = MemoryInline::FlatRead8((r28 + 2));
    MemoryInline::FlatWrite8((r3 + 14), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r28 + 3));
    MemoryInline::FlatWrite8((r3 + 15), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80836FAC;
    }
}

loc_80836FA4:
{
    r5 = (r3 + 24);
    goto loc_80836FB0;
}

loc_80836FAC:
{
    r5 = (r3 + 28);
}

loc_80836FB0:
{
    r0 = MemoryInline::FlatRead8(r5);
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r4 = MemoryInline::FlatRead8((r5 + 1));
    MemoryInline::FlatWrite8((r3 + 17), static_cast<uint8_t>(r4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80836FC8:
{
    r0 = MemoryInline::FlatRead8((r5 + 2));
    MemoryInline::FlatWrite8((r3 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 3));
    MemoryInline::FlatWrite8((r3 + 19), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80836FE4;
    }
}

loc_80836FDC:
{
    r6 = (r3 + 24);
    goto loc_80836FE8;
}

loc_80836FE4:
{
    r6 = (r3 + 28);
}

loc_80836FE8:
{
    r0 = MemoryInline::FlatRead8(r6);
    r5 = 0x80810000u;
    MemoryInline::FlatWrite8((r3 + 20), static_cast<uint8_t>(r0));
    r12 = (r5 + -32639);
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r4 = -1;
    r5 = MemoryInline::FlatRead8((r6 + 1));
    MemoryInline::FlatWrite8((r3 + 21), static_cast<uint8_t>(r5));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8083700C:
{
    r5 = MemoryInline::FlatRead8((r3 + 11));
    r0 = MemoryInline::FlatRead8((r6 + 2));
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r0));
    r11 = MemoryInline::FlatRead8((r3 + 66));
    r0 = MemoryInline::FlatRead8((r3 + 15));
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    r10 = (r5 * r11);
    r31 = MemoryInline::FlatRead8((r6 + 3));
    r5 = MemoryInline::FlatRead8((r1 + 17));
    r7 = MemoryInline::FlatRead8((r3 + 19));
    MemoryInline::FlatWrite8((r3 + 25), static_cast<uint8_t>(r5));
    r9 = (r0 * r11);
    r0 = MemoryInline::FlatRead8((r1 + 19));
    r4 = MemoryInline::FlatRead8((r1 + 18));
    MemoryInline::FlatWrite8((r3 + 9), static_cast<uint8_t>(r5));
    r6 = MemoryInline::FlatRead8((r1 + 16));
    r8 = (r7 * r11);
    MemoryInline::FlatWrite8((r3 + 27), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 11), static_cast<uint8_t>(r0));
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r12)) * static_cast<int64_t>(static_cast<int32_t>(r9))) >> 32));
    MemoryInline::FlatWrite8((r3 + 26), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 24), static_cast<uint8_t>(r6));
    r5 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r12)) * static_cast<int64_t>(static_cast<int32_t>(r10))) >> 32));
    r0 = (r0 + r9);
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r6));
    r4 = (r5 + r10);
    r4 = (static_cast<int32_t>(r4) >> 7);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r12)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r5 = (static_cast<int32_t>(r0) >> 7);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r6 = (r6_rot_0 & 1);
    r5 = (r5 + r6);
    MemoryInline::FlatWrite8((r3 + 15), static_cast<uint8_t>(r5));
    r7 = (r31 * r11);
    r4 = (r4 + r8);
    r5 = (static_cast<int32_t>(r4) >> 7);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r12)) * static_cast<int64_t>(static_cast<int32_t>(r7))) >> 32));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r6 = (r6_rot_1 & 1);
    r5 = (r5 + r6);
    MemoryInline::FlatWrite8((r3 + 19), static_cast<uint8_t>(r5));
    r0 = (r0 + r7);
    r0 = (static_cast<int32_t>(r0) >> 7);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
    r0 = (r0 + r4);
    MemoryInline::FlatWrite8((r3 + 23), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808370CC;
    }
}

loc_808370C4:
{
    r5 = (r3 + 24);
    goto loc_808370D0;
}

loc_808370CC:
{
    r5 = (r3 + 28);
}

loc_808370D0:
{
    r0 = MemoryInline::FlatRead8(r5);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r4 = MemoryInline::FlatRead8((r5 + 1));
    MemoryInline::FlatWrite8((r3 + 13), static_cast<uint8_t>(r4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_808370E8:
{
    r0 = MemoryInline::FlatRead8((r5 + 2));
    MemoryInline::FlatWrite8((r3 + 14), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 3));
    MemoryInline::FlatWrite8((r3 + 15), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80837104;
    }
}

loc_808370FC:
{
    r5 = (r3 + 24);
    goto loc_80837108;
}

loc_80837104:
{
    r5 = (r3 + 28);
}

loc_80837108:
{
    r0 = MemoryInline::FlatRead8(r5);
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r4 = MemoryInline::FlatRead8((r5 + 1));
    MemoryInline::FlatWrite8((r3 + 17), static_cast<uint8_t>(r4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80837120:
{
    r0 = MemoryInline::FlatRead8((r5 + 2));
    MemoryInline::FlatWrite8((r3 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 3));
    MemoryInline::FlatWrite8((r3 + 19), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8083713C;
    }
}

loc_80837134:
{
    r11 = (r3 + 24);
    goto loc_80837140;
}

loc_8083713C:
{
    r11 = (r3 + 28);
}

loc_80837140:
{
    r0 = MemoryInline::FlatRead8(r11);
    r6 = 0x80810000u;
    MemoryInline::FlatWrite8((r3 + 20), static_cast<uint8_t>(r0));
    r5 = 0x80840000u;
    r7 = MemoryInline::FlatRead8((r3 + 11));
    r4 = 0x80840000u;
    r9 = MemoryInline::FlatRead8((r3 + 66));
    r10 = (r6 + -32639);
    r0 = MemoryInline::FlatRead8((r11 + 1));
    MemoryInline::FlatWrite8((r3 + 21), static_cast<uint8_t>(r0));
    r8 = (r7 * r9);
    r7 = MemoryInline::FlatRead8((r3 + 15));
    r0 = 1;
    r6 = MemoryInline::FlatRead8((r11 + 2));
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead8((r3 + 19));
    r11 = MemoryInline::FlatRead8((r11 + 3));
    r7 = (r7 * r9);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 18776));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 18780));
    MemoryInline::FlatWrite32((r3 + 56), r0);
    r5 = (r6 * r9);
    MemoryInline::FlatWrite32((r3 + 60), r0);
    MemoryInline::FlatWriteFloat32((r3 + 36), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 40), f1.d);
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r10)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    MemoryInline::FlatWriteFloat32((r3 + 44), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 48), f0.d);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r10)) * static_cast<int64_t>(static_cast<int32_t>(r7))) >> 32));
    MemoryInline::FlatWriteFloat32((r3 + 52), f0.d);
    r6 = (r6 + r8);
    r8 = (static_cast<int32_t>(r6) >> 7);
    r4 = (r11 * r9);
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_0 & 1);
    r0 = (r0 + r7);
    r7 = (r8 + r9);
    MemoryInline::FlatWrite8((r3 + 11), static_cast<uint8_t>(r7));
    r7 = (static_cast<int32_t>(r0) >> 7);
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r10)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    r5 = (r6 + r5);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r10)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r6 = (r6_rot_2 & 1);
    r5 = (static_cast<int32_t>(r5) >> 7);
    r6 = (r7 + r6);
    MemoryInline::FlatWrite8((r3 + 15), static_cast<uint8_t>(r6));
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r6 = (r6_rot_3 & 1);
    r0 = (r0 + r4);
    r5 = (r5 + r6);
    r0 = (static_cast<int32_t>(r0) >> 7);
    MemoryInline::FlatWrite8((r3 + 19), static_cast<uint8_t>(r5));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r0 = (r0 + r4);
    MemoryInline::FlatWrite8((r3 + 23), static_cast<uint8_t>(r0));
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000107A gpr_write=0x00001FF3 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80836EA0 func_80836EA0 preserves=true fpr_mask=0x00000000
