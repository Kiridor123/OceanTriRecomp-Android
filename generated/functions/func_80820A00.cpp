#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80820A00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80820A00u);
    goto loc_80820A00;

loc_80820A00:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
    r24 = r3;
    r28 = r4;
    r27 = r24;
    r26 = (r3 + 428);
    r25 = 0;
    r29 = 0x80840000u;
    r30 = 0x80840000u;
    r31 = 1;
    r21 = 0;
    r22 = 37;
    r23 = 37;
}

loc_80820A40:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_80820A48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80820B1C;
    }
}

loc_80820A4C:
{
    r3 = MemoryInline::FlatRead32((r24 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 32));
}

loc_80820A58:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80820A8C;
    }
}

loc_80820A5C:
{
    r3 = MemoryInline::FlatRead32((r27 + 572));
    r5 = 1;
    r4 = MemoryInline::FlatRead32((r29 + 21856));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x80820A7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r0 = (r0 & 254);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
}

loc_80820A8C:
{
    r5 = (r30 + 17760);
    r3 = (r25 + 31);
    r4 = 0;
    ctr = r22;
    // nop
}

loc_80820AA0:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_80820AA8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80820ABC;
    }
}

loc_80820AAC:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_80820AB4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(17))) {
        goto loc_80820ABC;
    }
}

loc_80820AB8:
{
    goto loc_80820AEC;
}

loc_80820ABC:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r4 = (r4 + 1);
}

loc_80820AC8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80820ADC;
    }
}

loc_80820ACC:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_80820AD4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(17))) {
        goto loc_80820ADC;
    }
}

loc_80820AD8:
{
    goto loc_80820AEC;
}

loc_80820ADC:
{
    r5 = (r5 + 16);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80820AA0;
    }
}

loc_80820AE8:
{
    r4 = -1;
}

loc_80820AEC:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r24 + r0);
    r20 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r20;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl1_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl1_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl1_0x8081AA24;
    }
}

loc_inl1_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl1_0x8081AA28;
}

loc_inl1_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl1_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl1_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    MemoryInline::FlatWrite32((r20 + 20), r31);
    r3 = (r24 + r25);
    r4 = r26;
    MemoryInline::FlatWrite8((r3 + 128), static_cast<uint8_t>(r31));
    r3 = MemoryInline::FlatRead32((r27 + 684));
    ctx->lr = 0x80820B18u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8081D190u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    goto loc_80820BD4;
}

loc_80820B1C:
{
    r3 = MemoryInline::FlatRead32((r24 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 32));
}

loc_80820B28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80820B58;
    }
}

loc_80820B2C:
{
    r3 = MemoryInline::FlatRead32((r27 + 572));
    r5 = 1;
    r4 = MemoryInline::FlatRead32((r29 + 21856));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x80820B4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
}

loc_80820B58:
{
    r5 = (r30 + 17760);
    r3 = (r25 + 31);
    r4 = 0;
    ctr = r23;
}

loc_80820B68:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_80820B70:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80820B84;
    }
}

loc_80820B74:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_80820B7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(16))) {
        goto loc_80820B84;
    }
}

loc_80820B80:
{
    goto loc_80820BB4;
}

loc_80820B84:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r4 = (r4 + 1);
}

loc_80820B90:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80820BA4;
    }
}

loc_80820B94:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_80820B9C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(16))) {
        goto loc_80820BA4;
    }
}

loc_80820BA0:
{
    goto loc_80820BB4;
}

loc_80820BA4:
{
    r5 = (r5 + 16);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80820B68;
    }
}

loc_80820BB0:
{
    r4 = -1;
}

loc_80820BB4:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r24 + r0);
    r20 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r20;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl2_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl2_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl2_0x8081AA24;
    }
}

loc_inl2_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl2_0x8081AA28;
}

loc_inl2_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl2_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl2_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    MemoryInline::FlatWrite32((r20 + 20), r31);
    r3 = (r24 + r25);
    MemoryInline::FlatWrite8((r3 + 128), static_cast<uint8_t>(r21));
}

loc_80820BD4:
{
    r25 = (r25 + 1);
    r27 = (r27 + 4);
}

loc_80820BE0:
{
    r26 = (r26 + 24);
    r28 = (r28 + 16);
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(4))) {
        goto loc_80820A40;
    }
}

loc_80820BEC:
{
    r22 = 0x80840000u;
    r21 = 0;
    r22 = (r22 + 24568);
}

loc_80820BF8:
{
    r23 = r22;
    r20 = 0;
}

loc_80820C00:
{
    r3 = MemoryInline::FlatRead32((r24 + 568));
    r5 = 1;
    r4 = MemoryInline::FlatRead32(r23);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x80820C20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r20 = (r20 + 1);
}

loc_80820C2C:
{
    r23 = (r23 + 4);
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r20) < static_cast<int32_t>(4))) {
        goto loc_80820C00;
    }
}

loc_80820C3C:
{
    r21 = (r21 + 1);
    r22 = (r22 + 16);
}

loc_80820C48:
{
    if ((static_cast<int32_t>(r21) < static_cast<int32_t>(4))) {
        goto loc_80820BF8;
    }
}

loc_80820C4C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r24 + 124), r0);
    r11 = (r1 + 64);
    // inline leaf 0x804574B8 (13 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    // end of inlined leaf 0x804574B8
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80820A00 func_80820A00 preserves=true fpr_mask=0x00000000
