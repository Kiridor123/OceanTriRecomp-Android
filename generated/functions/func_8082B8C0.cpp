#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082B8C0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8082B8C0u);
    goto loc_8082B8C0;

loc_8082B8C0:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80457454 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    // end of inlined leaf 0x80457454
    r31 = r4;
    r4 = 1380712448;
    r30 = r3;
    r14 = r5;
    r4 = (r4 + 22868);
    r3 = r31;
    // inline leaf 0x80829E30 (13 guest instruction(s))
}

loc_inl1_0x80829E30:
{
    r0 = MemoryInline::FlatRead32(r3);
    r5 = 0;
}

loc_inl1_0x80829E3C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x80829E5C;
    }
}

loc_inl1_0x80829E40:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
}

loc_inl1_0x80829E48:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65279))) {
        goto loc_inl1_0x80829E5C;
    }
}

loc_inl1_0x80829E4C:
{
    r0 = MemoryInline::FlatRead16((r3 + 6));
}

loc_inl1_0x80829E54:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_inl1_0x80829E5C;
    }
}

loc_inl1_0x80829E58:
{
    r5 = 1;
}

loc_inl1_0x80829E5C:
{
    r3 = r5;
}

loc_inl1_cont_80829E30:
{
    // end of inlined leaf 0x80829E30
}

loc_8082B8F4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8082B900;
    }
}

loc_8082B8F8:
{
    r3 = 0;
    goto loc_8082BBAC;
}

loc_8082B900:
{
    r22 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r14);
    r27 = 1885405184;
    r20 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r22);
    r23 = (r27 + 25905);
    r19 = 0;
    r18 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r22);
    r17 = 0;
    r15 = 0;
    r28 = 1954021376;
    MemoryInline::FlatWriteRam32((r1 + 16), r22);
    r25 = 1651376128;
    r29 = 0x80870000u;
    r14 = 1819869184;
    r0 = MemoryInline::FlatRead16((r31 + 12));
    r26 = 1735524352;
    r24 = 1718484992;
    r16 = (r31 + r0);
    goto loc_8082BB9C;
}

loc_8082B954:
{
    r3 = MemoryInline::FlatRead32(r16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r23));
}

loc_8082B95C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082BACC;
    }
}

loc_8082B960:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8082B9D8;
    }
}

loc_8082B964:
{
    r0 = (r26 + 28721);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8082B96C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082BAD8;
    }
}

loc_8082B970:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8082B9A4;
    }
}

loc_8082B974:
{
    r0 = (r24 + 27697);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8082B97C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082BA70;
    }
}

loc_8082B980:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8082B994;
    }
}

loc_8082B984:
{
    r0 = (r25 + 25649);
}

loc_8082B98C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_8082BA80;
    }
}

loc_8082B990:
{
    goto loc_8082BB90;
}

loc_8082B994:
{
    r0 = (r26 + 25905);
}

loc_8082B99C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_8082BB8C;
    }
}

loc_8082B9A0:
{
    goto loc_8082BB90;
}

loc_8082B9A4:
{
    r0 = (r14 + 29745);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8082B9AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082BA40;
    }
}

loc_8082B9B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8082B9C4;
    }
}

loc_8082B9B4:
{
    r0 = (r26 + 29489);
}

loc_8082B9BC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_8082BB84;
    }
}

loc_8082B9C0:
{
    goto loc_8082BB90;
}

loc_8082B9C4:
{
    r4 = 1835073536;
    r0 = (r4 + 29745);
}

loc_8082B9D0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_8082BA78;
    }
}

loc_8082B9D4:
{
    goto loc_8082BB90;
}

loc_8082B9D8:
{
    r0 = (r28 + 27697);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8082B9E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082BA68;
    }
}

loc_8082B9E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8082BA1C;
    }
}

loc_8082B9E8:
{
    r0 = (r27 + 29489);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8082B9F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082BAC4;
    }
}

loc_8082B9F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8082BA08;
    }
}

loc_8082B9F8:
{
    r0 = (r27 + 28209);
}

loc_8082BA00:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_8082BA80;
    }
}

loc_8082BA04:
{
    goto loc_8082BB90;
}

loc_8082BA08:
{
    r4 = 1885929472;
    r0 = (r4 + 25393);
}

loc_8082BA14:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_8082BA80;
    }
}

loc_8082BA18:
{
    goto loc_8082BB90;
}

loc_8082BA1C:
{
    r4 = 2003697664;
    r0 = (r4 + 25649);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8082BA28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082BA80;
    }
}

loc_8082BA2C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8082BB90;
    }
}

loc_8082BA30:
{
    r0 = (r28 + 29745);
}

loc_8082BA38:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_8082BA80;
    }
}

loc_8082BA3C:
{
    goto loc_8082BB90;
}

loc_8082BA40:
{
    r3 = MemoryInline::FlatRead8((r16 + 8));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    MemoryInline::FlatWrite8((r30 + 32), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r16 + 12));
    MemoryInline::FlatWriteFloat32((r30 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r16 + 16));
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
    goto loc_8082BB90;
}

loc_8082BA68:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r16);
    goto loc_8082BB90;
}

loc_8082BA70:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r16);
    goto loc_8082BB90;
}

loc_8082BA78:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r16);
    goto loc_8082BB90;
}

loc_8082BA80:
{
    r4 = r16;
    r5 = (r1 + 8);
    ctx->lr = 0x8082BA8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8082C050u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8082BA90:
{
    r21 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8082BB90;
    }
}

loc_8082BA98:
{
    r0 = MemoryInline::FlatRead32((r30 + 16));
}

loc_8082BAA0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8082BAA8;
    }
}

loc_8082BAA4:
{
    MemoryInline::FlatWrite32((r30 + 16), r3);
}

loc_8082BAA8:
{
}

loc_8082BAAC:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_8082BABC;
    }
}

loc_8082BAB0:
{
    r3 = r20;
    r4 = r21;
    ctx->lr = 0x8082BABCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80830690u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
}

loc_8082BABC:
{
    r19 = r21;
    goto loc_8082BB90;
}

loc_8082BAC4:
{
    r20 = r19;
    goto loc_8082BB90;
}

loc_8082BACC:
{
    r19 = r20;
    r20 = MemoryInline::FlatRead32((r20 + 12));
    goto loc_8082BB90;
}

loc_8082BAD8:
{
}

loc_8082BADC:
{
    if ((static_cast<int32_t>(r18) != static_cast<int32_t>(0))) {
        goto loc_8082BB24;
    }
}

loc_8082BAE0:
{
    r3 = MemoryInline::FlatRead32((r29 + -32224));
    r18 = 1;
    r4 = 12;
    ctx->lr = 0x8082BAF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x804C2B00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8082BAF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082BB18;
    }
}

loc_8082BAF8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082BB1C;
    }
}

loc_8082BAFC:
{
    MemoryInline::FlatWrite32((r3 + 4), r22);
    r4 = (r3 + 4);
    MemoryInline::FlatWrite32((r3 + 8), r22);
    MemoryInline::FlatWrite32(r3, r22);
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite32((r3 + 8), r4);
    goto loc_8082BB1C;
}

loc_8082BB18:
{
    r3 = 0;
}

loc_8082BB1C:
{
    MemoryInline::FlatWrite32((r30 + 20), r3);
    goto loc_8082BB90;
}

loc_8082BB24:
{
    r0 = MemoryInline::FlatRead32((r30 + 20));
}

loc_8082BB2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8082BB90;
    }
}

loc_8082BB30:
{
}

loc_8082BB34:
{
    if ((static_cast<int32_t>(r17) != static_cast<int32_t>(1))) {
        goto loc_8082BB90;
    }
}

loc_8082BB38:
{
    r21 = MemoryInline::FlatRead32((r30 + 16));
    r4 = 44;
    r3 = MemoryInline::FlatRead32((r29 + -32224));
    ctx->lr = 0x8082BB48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x804C2B00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8082BB4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082BB6C;
    }
}

loc_8082BB50:
{
    r4 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082BB70;
    }
}

loc_8082BB58:
{
    r4 = r16;
    r5 = r21;
    ctx->lr = 0x8082BB64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8082B0D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_8082BB70;
}

loc_8082BB6C:
{
    r4 = 0;
}

loc_8082BB70:
{
}

loc_8082BB74:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8082BB90;
    }
}

loc_8082BB78:
{
    r3 = MemoryInline::FlatRead32((r30 + 20));
    ctx->lr = 0x8082BB80u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8082B450u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    goto loc_8082BB90;
}

loc_8082BB84:
{
    r17 = (r17 + 1);
    goto loc_8082BB90;
}

loc_8082BB8C:
{
    r17 = (r17 + -1);
}

loc_8082BB90:
{
    r0 = MemoryInline::FlatRead32((r16 + 4));
    r15 = (r15 + 1);
    r16 = (r16 + r0);
}

loc_8082BB9C:
{
    r0 = MemoryInline::FlatRead16((r31 + 14));
}

loc_8082BBA4:
{
    if ((static_cast<int32_t>(r15) < static_cast<int32_t>(r0))) {
        goto loc_8082B954;
    }
}

loc_8082BBA8:
{
    r3 = 1;
}

loc_8082BBAC:
{
    r11 = (r1 + 96);
    // inline leaf 0x804574A0 (19 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    // end of inlined leaf 0x804574A0
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8082B8C0 func_8082B8C0 preserves=true fpr_mask=0x00000000
