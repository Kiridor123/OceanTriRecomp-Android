#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80004000(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t cr5_0 = 0;
    uint32_t r12_stbu_ea_0 = 0;
    uint32_t r12_stbu_ea_1 = 0;
    uint32_t r12_stbu_ea_10 = 0;
    uint32_t r12_stbu_ea_11 = 0;
    uint32_t r12_stbu_ea_12 = 0;
    uint32_t r12_stbu_ea_13 = 0;
    uint32_t r12_stbu_ea_2 = 0;
    uint32_t r12_stbu_ea_3 = 0;
    uint32_t r12_stbu_ea_4 = 0;
    uint32_t r12_stbu_ea_5 = 0;
    uint32_t r12_stbu_ea_6 = 0;
    uint32_t r12_stbu_ea_7 = 0;
    uint32_t r12_stbu_ea_8 = 0;
    uint32_t r12_stbu_ea_9 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r8_stbu_ea_0 = 0;
    uint32_t r8_stbu_ea_1 = 0;
    uint32_t r8_stbu_ea_2 = 0;
    uint32_t r8_stbu_ea_3 = 0;
    uint32_t r8_stbu_ea_4 = 0;
    uint32_t r8_stbu_ea_5 = 0;
    uint32_t r8_stbu_ea_6 = 0;

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
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80004000;

loc_80004000:
{
}

loc_80004004:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(0))) {
        goto loc_return;
    }
}

loc_80004008:
{
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r4), static_cast<uint32_t>(r3));
}

loc_8000400C:
{
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80004178;
    }
}

loc_80004010:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_return;
    }
}

loc_80004014:
{
    r6 = 128;
}

loc_8000401C:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r6))) {
        goto loc_800040C0;
    }
}

loc_80004020:
{
    r9 = (r4 & 7);
    r10 = (r3 & 7);
    r8 = (r3 - r10);
    // dcbt @ 0x8000402C (no-op)
    r11 = (r10 ^ r9);
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_8000415C;
    }
}

loc_80004038:
{
    r10 = (r10 & 7);
}

loc_8000403C:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_80004068;
    }
}

loc_80004040:
{
    r6 = 8;
    r9 = (r6 - r9);
    r8 = (r3 + 0);
    ctr = r9;
    r5 = (r5 - r9);
}

loc_80004054:
{
    r9 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r9));
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80004054;
    }
}

loc_80004068:
{
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r6 = (r6_rot_1 & 134217727);
    ctr = r6;
}

loc_80004070:
{
    f1.d = MemoryInline::FlatReadFloat64(r4);
    f2.d = MemoryInline::FlatReadFloat64((r4 + 8));
    f3.d = MemoryInline::FlatReadFloat64((r4 + 16));
    f4.d = MemoryInline::FlatReadFloat64((r4 + 24));
    r4 = (r4 + 32);
    MemoryInline::FlatWriteFloat64(r8, f1.d);
    MemoryInline::FlatWriteFloat64((r8 + 8), f2.d);
    MemoryInline::FlatWriteFloat64((r8 + 16), f3.d);
    MemoryInline::FlatWriteFloat64((r8 + 24), f4.d);
    r8 = (r8 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80004070;
    }
}

loc_8000409C:
{
    r6 = (r5 & 31);
}

loc_800040A0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_800040A4:
{
    r4 = (r4 + -1);
    ctr = r6;
    r8 = (r8 + -1);
}

loc_800040B0:
{
    r4 = (r4 + 1);
    r9 = MemoryInline::FlatRead8(r4);
    r8_stbu_ea_2 = (r8 + 1);
    MemoryInline::FlatWrite8(r8_stbu_ea_2, static_cast<uint8_t>(r9));
    r8 = r8_stbu_ea_2;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800040B0;
    }
}

loc_800040BC:
{
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_800040C0:
{
    r6 = 20;
}

loc_800040C8:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r6))) {
        goto loc_8000415C;
    }
}

loc_800040CC:
{
    r9 = (r4 & 3);
    r10 = (r3 & 3);
    r11 = (r10 ^ r9);
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_8000415C;
    }
}

loc_800040DC:
{
    r6 = 4;
    r9 = (r6 - r9);
    r8 = (r3 + 0);
    r5 = (r5 - r9);
    ctr = r9;
}

loc_800040F0:
{
    r9 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r9));
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800040F0;
    }
}

loc_80004104:
{
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(28));
    r6 = (r6_rot_2 & 268435455);
    ctr = r6;
}

loc_8000410C:
{
    r9 = MemoryInline::FlatRead32(r4);
    r10 = MemoryInline::FlatRead32((r4 + 4));
    r11 = MemoryInline::FlatRead32((r4 + 8));
    r12 = MemoryInline::FlatRead32((r4 + 12));
    r4 = (r4 + 16);
    MemoryInline::FlatWrite32(r8, r9);
    MemoryInline::FlatWrite32((r8 + 4), r10);
    MemoryInline::FlatWrite32((r8 + 8), r11);
    MemoryInline::FlatWrite32((r8 + 12), r12);
    r8 = (r8 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8000410C;
    }
}

loc_80004138:
{
    r6 = (r5 & 15);
}

loc_8000413C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80004140:
{
    r4 = (r4 + -1);
    ctr = r6;
    r8 = (r8 + -1);
}

loc_8000414C:
{
    r4 = (r4 + 1);
    r9 = MemoryInline::FlatRead8(r4);
    r8_stbu_ea_4 = (r8 + 1);
    MemoryInline::FlatWrite8(r8_stbu_ea_4, static_cast<uint8_t>(r9));
    r8 = r8_stbu_ea_4;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8000414C;
    }
}

loc_80004158:
{
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8000415C:
{
    r7 = (r4 + -1);
    r8 = (r3 + -1);
    ctr = r5;
}

loc_80004168:
{
    r7 = (r7 + 1);
    r9 = MemoryInline::FlatRead8(r7);
    r8_stbu_ea_6 = (r8 + 1);
    MemoryInline::FlatWrite8(r8_stbu_ea_6, static_cast<uint8_t>(r9));
    r8 = r8_stbu_ea_6;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80004168;
    }
}

loc_80004174:
{
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80004178:
{
    r4 = (r4 + r5);
    r12 = (r3 + r5);
    r6 = 128;
}

loc_80004188:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r6))) {
        goto loc_80004204;
    }
}

loc_8000418C:
{
    r9 = (r4 & 7);
    r10 = (r12 & 7);
    r11 = (r10 ^ r9);
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_80004288;
    }
}

loc_8000419C:
{
    r10 = (r10 & 7);
}

loc_800041A0:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_800041B4;
    }
}

loc_800041A4:
{
    ctr = r10;
}

loc_800041A8:
{
    r4 = (r4 + -1);
    r9 = MemoryInline::FlatRead8(r4);
    r12_stbu_ea_2 = (r12 + -1);
    MemoryInline::FlatWrite8(r12_stbu_ea_2, static_cast<uint8_t>(r9));
    r12 = r12_stbu_ea_2;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800041A8;
    }
}

loc_800041B4:
{
    r5 = (r5 - r10);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r6 = (r6_rot_3 & 134217727);
    ctr = r6;
}

loc_800041C0:
{
    f1.d = MemoryInline::FlatReadFloat64((r4 + -8));
    f2.d = MemoryInline::FlatReadFloat64((r4 + -16));
    f3.d = MemoryInline::FlatReadFloat64((r4 + -24));
    f4.d = MemoryInline::FlatReadFloat64((r4 + -32));
    r4 = (r4 + -32);
    MemoryInline::FlatWriteFloat64((r12 + -8), f1.d);
    MemoryInline::FlatWriteFloat64((r12 + -16), f2.d);
    MemoryInline::FlatWriteFloat64((r12 + -24), f3.d);
    r12 = (r12 + -32);
    MemoryInline::FlatWriteFloat64(r12, f4.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800041C0;
    }
}

loc_800041E8:
{
    r6 = (r5 & 31);
}

loc_800041EC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_800041F0:
{
    ctr = r6;
}

loc_800041F4:
{
    r4 = (r4 + -1);
    r9 = MemoryInline::FlatRead8(r4);
    r12_stbu_ea_5 = (r12 + -1);
    MemoryInline::FlatWrite8(r12_stbu_ea_5, static_cast<uint8_t>(r9));
    r12 = r12_stbu_ea_5;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800041F4;
    }
}

loc_80004200:
{
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80004204:
{
    r6 = 20;
}

loc_8000420C:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r6))) {
        goto loc_80004288;
    }
}

loc_80004210:
{
    r9 = (r4 & 3);
    r10 = (r12 & 3);
    r11 = (r10 ^ r9);
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_80004288;
    }
}

loc_80004220:
{
    r10 = (r10 & 7);
}

loc_80004224:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_80004238;
    }
}

loc_80004228:
{
    ctr = r10;
}

loc_8000422C:
{
    r4 = (r4 + -1);
    r9 = MemoryInline::FlatRead8(r4);
    r12_stbu_ea_7 = (r12 + -1);
    MemoryInline::FlatWrite8(r12_stbu_ea_7, static_cast<uint8_t>(r9));
    r12 = r12_stbu_ea_7;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8000422C;
    }
}

loc_80004238:
{
    r5 = (r5 - r10);
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(28));
    r6 = (r6_rot_4 & 268435455);
    ctr = r6;
}

loc_80004244:
{
    r9 = MemoryInline::FlatRead32((r4 + -4));
    r10 = MemoryInline::FlatRead32((r4 + -8));
    r11 = MemoryInline::FlatRead32((r4 + -12));
    r8 = MemoryInline::FlatRead32((r4 + -16));
    r4 = (r4 + -16);
    MemoryInline::FlatWrite32((r12 + -4), r9);
    MemoryInline::FlatWrite32((r12 + -8), r10);
    MemoryInline::FlatWrite32((r12 + -12), r11);
    MemoryInline::FlatWrite32((r12 + -16), r8);
    r12 = (r12 + -16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80004244;
    }
}

loc_8000426C:
{
    r6 = (r5 & 15);
}

loc_80004270:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80004274:
{
    ctr = r6;
}

loc_80004278:
{
    r4 = (r4 + -1);
    r9 = MemoryInline::FlatRead8(r4);
    r12_stbu_ea_10 = (r12 + -1);
    MemoryInline::FlatWrite8(r12_stbu_ea_10, static_cast<uint8_t>(r9));
    r12 = r12_stbu_ea_10;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80004278;
    }
}

loc_80004284:
{
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80004288:
{
    ctr = r5;
}

loc_8000428C:
{
    r4 = (r4 + -1);
    r9 = MemoryInline::FlatRead8(r4);
    r12_stbu_ea_12 = (r12 + -1);
    MemoryInline::FlatWrite8(r12_stbu_ea_12, static_cast<uint8_t>(r9));
    r12 = r12_stbu_ea_12;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8000428C;
    }
}

loc_80004298:
{
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001F78 gpr_write=0x00001FF0 gpr_return=0x00000010 fpr_read=0x0000001E fpr_write=0x0000001E fpr_return=0x00000002 cr_read=0x23 cr_write=0x23 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80004000 func_80004000 preserves=true fpr_mask=0x00000000
