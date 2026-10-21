#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80554024_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
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
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80554024u);
    goto loc_80554024;

loc_80554024:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r5;
    r30 = r3;
    r29 = r6;
    r28 = r4;
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 248));
    ctr = r12;
    ctx->lr = 0x80554064u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80554068:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8055407C;
    }
}

loc_8055406C:
{
}

loc_80554070:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(1))) {
        goto loc_8055407C;
    }
}

loc_80554074:
{
}

loc_80554078:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8055470C;
    }
}

loc_8055407C:
{
    r3 = MemoryInline::FlatRead32((r30 + 12));
    r4 = 0x80650000u;
    r3 = (r3 + 6132);
    r12 = MemoryInline::FlatRead32(r3);
    r4 = (r4 + 7992);
    r12 = MemoryInline::FlatRead32((r12 + 92));
    ctr = r12;
    ctx->lr = 0x80554098u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x805540A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805540AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805540B8;
    }
}

loc_805540B0:
{
}

loc_805540B4:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(1))) {
        goto loc_8055470C;
    }
}

loc_805540B8:
{
    r3 = MemoryInline::FlatRead32((r30 + 12));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 68));
    ctr = r12;
    ctx->lr = 0x805540CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805540D0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8055470C;
    }
}

loc_805540D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(1));
}

loc_805540D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80554638;
    }
}

loc_805540DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805540EC;
    }
}

loc_805540E0:
{
}

loc_805540E4:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(0))) {
        goto loc_80554218;
    }
}

loc_805540E8:
{
    goto loc_8055470C;
}

loc_805540EC:
{
}

loc_805540F0:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(4))) {
        goto loc_805540F8;
    }
}

loc_805540F4:
{
    goto loc_8055470C;
}

loc_805540F8:
{
    r0 = MemoryInline::FlatRead32((r29 + 12));
}

loc_80554100:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(16))) {
        goto loc_8055470C;
    }
}

loc_80554104:
{
    r3 = MemoryInline::FlatRead32((r30 + 464));
    r0 = MemoryInline::FlatRead32((r30 + 484));
}

loc_80554110:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_8055411C;
    }
}

loc_80554114:
{
    r4 = -1;
    goto loc_80554188;
}

loc_8055411C:
{
    r0 = MemoryInline::FlatRead32((r30 + 488));
}

loc_80554124:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_80554130;
    }
}

loc_80554128:
{
    r4 = -1;
    goto loc_80554188;
}

loc_80554130:
{
    r0 = MemoryInline::FlatRead32((r30 + 472));
}

loc_80554138:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_80554148;
    }
}

loc_8055413C:
{
    r0 = (r0 - r3);
    r4 = (20 - r0);
    goto loc_8055414C;
}

loc_80554148:
{
    r4 = (r3 - r0);
}

loc_8055414C:
{
    r3 = (19 - r4);
    r0 = 20;
    r3 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    ctr = r3;
}

loc_80554160:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_8055416C;
    }
}

loc_80554164:
{
    r4 = (r4 + 20);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80554164;
    }
}

loc_8055416C:
{
    r0 = 20;
    r0 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    ctr = r0;
}

loc_8055417C:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(20))) {
        goto loc_80554188;
    }
}

loc_80554180:
{
    r4 = (r4 + -20);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80554180;
    }
}

loc_80554188:
{
    r0 = MemoryInline::FlatRead32((r30 + 468));
}

loc_80554190:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8055470C;
    }
}

loc_80554194:
{
}

loc_80554198:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_8055470C;
    }
}

loc_8055419C:
{
    r31_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r31 = (r31_rot_1 & -4);
    r3 = (r30 + r31);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x805541B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r30 + r31);
    r3 = MemoryInline::FlatRead32((r3 + 136));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x805541D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r30 + r31);
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 224));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x805541ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 16));
}

loc_805541F4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8055470C;
    }
}

loc_805541F8:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = r30;
    r5 = 257;
    r6 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x80554214u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8055470C;
}

loc_80554218:
{
    r0 = MemoryInline::FlatRead32((r30 + 216));
}

loc_80554220:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_805543CC;
    }
}

loc_80554224:
{
    r0 = 1;
    r31 = r30;
    MemoryInline::FlatWrite8((r30 + 504), static_cast<uint8_t>(r0));
    r29 = 0;
}

loc_80554234:
{
    r3 = MemoryInline::FlatRead32((r31 + 56));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80554248u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 136));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8055425Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r29 = (r29 + 1);
    r31 = (r31 + 4);
}

loc_80554268:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(20))) {
        goto loc_80554234;
    }
}

loc_8055426C:
{
    r3 = MemoryInline::FlatRead32((r30 + 464));
    r0 = MemoryInline::FlatRead32((r30 + 484));
}

loc_80554278:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_80554284;
    }
}

loc_8055427C:
{
    r4 = -1;
    goto loc_805542F0;
}

loc_80554284:
{
    r0 = MemoryInline::FlatRead32((r30 + 488));
}

loc_8055428C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_80554298;
    }
}

loc_80554290:
{
    r4 = -1;
    goto loc_805542F0;
}

loc_80554298:
{
    r0 = MemoryInline::FlatRead32((r30 + 472));
}

loc_805542A0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_805542B0;
    }
}

loc_805542A4:
{
    r0 = (r0 - r3);
    r4 = (20 - r0);
    goto loc_805542B4;
}

loc_805542B0:
{
    r4 = (r3 - r0);
}

loc_805542B4:
{
    r3 = (19 - r4);
    r0 = 20;
    r3 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    ctr = r3;
}

loc_805542C8:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_805542D4;
    }
}

loc_805542CC:
{
    r4 = (r4 + 20);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805542CC;
    }
}

loc_805542D4:
{
    r0 = 20;
    r0 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    ctr = r0;
}

loc_805542E4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(20))) {
        goto loc_805542F0;
    }
}

loc_805542E8:
{
    r4 = (r4 + -20);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805542E8;
    }
}

loc_805542F0:
{
}

loc_805542F4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_80554318;
    }
}

loc_805542F8:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = 2;
    r3 = (r30 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 224));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80554318u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80554318:
{
    r0 = MemoryInline::FlatRead32((r30 + 484));
}

loc_80554320:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(-1))) {
        goto loc_8055432C;
    }
}

loc_80554324:
{
    r4 = -1;
    goto loc_80554398;
}

loc_8055432C:
{
    r0 = MemoryInline::FlatRead32((r30 + 488));
}

loc_80554334:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(-1))) {
        goto loc_80554340;
    }
}

loc_80554338:
{
    r4 = -1;
    goto loc_80554398;
}

loc_80554340:
{
    r3 = MemoryInline::FlatRead32((r30 + 472));
}

loc_80554348:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(-1))) {
        goto loc_80554358;
    }
}

loc_8055434C:
{
    r0 = (r3 + 1);
    r4 = (20 - r0);
    goto loc_8055435C;
}

loc_80554358:
{
    r4 = (-1 - r3);
}

loc_8055435C:
{
    r3 = (19 - r4);
    r0 = 20;
    r3 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    ctr = r3;
}

loc_80554370:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_8055437C;
    }
}

loc_80554374:
{
    r4 = (r4 + 20);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80554374;
    }
}

loc_8055437C:
{
    r0 = 20;
    r0 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    ctr = r0;
}

loc_8055438C:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(20))) {
        goto loc_80554398;
    }
}

loc_80554390:
{
    r4 = (r4 + -20);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80554390;
    }
}

loc_80554398:
{
}

loc_8055439C:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_805543C0;
    }
}

loc_805543A0:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r4 = 1;
    r3 = (r30 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 224));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x805543C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805543C0:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r30 + 464), r0);
    goto loc_8055470C;
}

loc_805543CC:
{
    r0 = MemoryInline::FlatRead32((r30 + 468));
}

loc_805543D4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8055470C;
    }
}

loc_805543D8:
{
    r0 = MemoryInline::FlatRead8((r30 + 504));
}

loc_805543E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8055470C;
    }
}

loc_805543E4:
{
    r0 = 20;
    r3 = r30;
    r31 = 0;
    ctr = r0;
}

loc_805543F4:
{
    r0 = MemoryInline::FlatRead32((r3 + 136));
}

loc_805543FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r28))) {
        goto loc_80554628;
    }
}

loc_80554400:
{
    r0 = MemoryInline::FlatRead32((r30 + 472));
    r11 = MemoryInline::FlatRead32((r30 + 484));
    r6 = (r0 + r31);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r6), static_cast<int32_t>(r11));
}

loc_80554410:
{
    if (((cr & 0x08000000u) == 0)) {
        goto loc_80554590;
    }
}

loc_80554414:
{
    r3 = (r11 - r6);
    r4 = 1717960704;
    r0 = (r3 + 19);
    r4 = (r4 + 26215);
    r3 = (r11 + -160);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 3);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r0 = (r0 + r4);
}

loc_8055443C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_80554568;
    }
}

loc_80554440:
{
    r7 = 0;
    r8 = 0;
    r9 = 0;
    r10 = 0;
    r5 = 0;
    if (((cr & 0x04000000u) != 0)) {
        goto loc_8055446C;
    }
}

loc_80554458:
{
    r4 = 0x80000000u;
    r0 = (r4 + -21);
}

loc_80554464:
{
    if ((static_cast<int32_t>(r11) > static_cast<int32_t>(r0))) {
        goto loc_8055446C;
    }
}

loc_80554468:
{
    r5 = 1;
}

loc_8055446C:
{
}

loc_80554470:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80554490;
    }
}

loc_80554474:
{
    r5 = MemoryInline::FlatRead32((r30 + 472));
    r4 = 0x80000000u;
    r0 = (r4 + -21);
    r4 = (r5 + r31);
}

loc_80554488:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r0))) {
        goto loc_80554490;
    }
}

loc_8055448C:
{
    r10 = 1;
}

loc_80554490:
{
}

loc_80554494:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_805544B0;
    }
}

loc_80554498:
{
    r0 = MemoryInline::FlatRead32((r30 + 472));
    r4 = (r0 + r31);
    r0 = (r4 + -2147483648);
}

loc_805544A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_805544B0;
    }
}

loc_805544AC:
{
    r9 = 1;
}

loc_805544B0:
{
}

loc_805544B4:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_805544FC;
    }
}

loc_805544B8:
{
    r0 = MemoryInline::FlatRead32((r30 + 472));
    r4 = 1;
    r10 = MemoryInline::FlatRead32((r30 + 484));
    r5 = (r0 + r31);
    r0 = (0 - r5);
    r9 = (r10 & -2147483648);
    r0 = (r0 & -2147483648);
}

loc_805544D8:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(r0))) {
        goto loc_805544F0;
    }
}

loc_805544DC:
{
    r0 = (r10 - r5);
    r0 = (r0 & -2147483648);
}

loc_805544E8:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(r0))) {
        goto loc_805544F0;
    }
}

loc_805544EC:
{
    r4 = 0;
}

loc_805544F0:
{
}

loc_805544F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805544FC;
    }
}

loc_805544F8:
{
    r8 = 1;
}

loc_805544FC:
{
}

loc_80554500:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8055453C;
    }
}

loc_80554504:
{
    r4 = MemoryInline::FlatRead32((r30 + 472));
    r5 = 1;
    r0 = MemoryInline::FlatRead32((r30 + 484));
    r4 = (r4 + r31);
    r4 = (r0 - r4);
    r0 = (r4 & -2147483648);
}

loc_8055451C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80554530;
    }
}

loc_80554520:
{
    r0 = (r4 + 19);
    r0 = (r0 & -2147483648);
}

loc_80554528:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80554530;
    }
}

loc_8055452C:
{
    r5 = 0;
}

loc_80554530:
{
}

loc_80554534:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8055453C;
    }
}

loc_80554538:
{
    r7 = 1;
}

loc_8055453C:
{
}

loc_80554540:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80554568;
    }
}

loc_80554544:
{
    r4 = (r3 + 159);
    r0 = 160;
    r4 = (r4 - r6);
    r4 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    ctr = r4;
}

loc_8055455C:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r3))) {
        goto loc_80554568;
    }
}

loc_80554560:
{
    r6 = (r6 + 160);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80554560;
    }
}

loc_80554568:
{
    r4 = MemoryInline::FlatRead32((r30 + 484));
    r0 = 20;
    r3 = (r4 + 19);
    r3 = (r3 - r6);
    r3 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    ctr = r3;
}

loc_80554584:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r4))) {
        goto loc_80554590;
    }
}

loc_80554588:
{
    r6 = (r6 + 20);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80554588;
    }
}

loc_80554590:
{
    r4 = MemoryInline::FlatRead32((r30 + 488));
    r3 = (r6 + 19);
    r0 = 20;
    r3 = (r3 - r4);
    r3 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    ctr = r3;
}

loc_805545AC:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(r4))) {
        goto loc_805545B8;
    }
}

loc_805545B0:
{
    r6 = (r6 + -20);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805545B0;
    }
}

loc_805545B8:
{
    r3 = MemoryInline::FlatRead32((r30 + 16));
}

loc_805545C0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805545DC;
    }
}

loc_805545C4:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = r30;
    r5 = 258;
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x805545DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805545DC:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r4 = 1;
    r3 = (r30 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 224));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x805545FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 16));
}

loc_80554604:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8055470C;
    }
}

loc_80554608:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = r30;
    r5 = 0;
    r6 = 4;
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x80554624u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8055470C;
}

loc_80554628:
{
    r3 = (r3 + 4);
    r31 = (r31 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805543F4;
    }
}

loc_80554634:
{
    goto loc_8055470C;
}

loc_80554638:
{
    r0 = MemoryInline::FlatRead32((r30 + 216));
}

loc_80554640:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_8055467C;
    }
}

loc_80554644:
{
    r0 = 0;
    r31 = r30;
    MemoryInline::FlatWrite8((r30 + 504), static_cast<uint8_t>(r0));
    r29 = 0;
}

loc_80554654:
{
    r3 = MemoryInline::FlatRead32((r31 + 224));
    r4 = 2;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8055466Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r29 = (r29 + 1);
    r31 = (r31 + 4);
}

loc_80554678:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(20))) {
        goto loc_80554654;
    }
}

loc_8055467C:
{
    r0 = MemoryInline::FlatRead32((r30 + 468));
}

loc_80554684:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8055470C;
    }
}

loc_80554688:
{
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r0 = -1;
    MemoryInline::FlatWrite32((r30 + 468), r0);
}

loc_80554698:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805546B8;
    }
}

loc_8055469C:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = r30;
    r5 = 258;
    r6 = -1;
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x805546B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805546B8:
{
    r29 = 0;
}

loc_805546BC:
{
    r3 = MemoryInline::FlatRead32((r30 + 56));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x805546D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 136));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x805546E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 224));
    r4 = 2;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x805546FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r29 = (r29 + 1);
    r30 = (r30 + 4);
}

loc_80554708:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(20))) {
        goto loc_805546BC;
    }
}

loc_8055470C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80554024(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80554024_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80554024 func_80554024 preserves=true fpr_mask=0x00000000
