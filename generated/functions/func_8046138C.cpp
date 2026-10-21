#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8046138C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r12 = ctx->gpr[12];
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

    MKW_GUEST_ENTER(0x8046138Cu);
    goto loc_8046138C;

loc_8046138C:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
}

loc_80461398:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 68u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r1 + 84), r0);
    r27 = 0;
    r17 = r3;
    r18 = r4;
    r19 = r5;
    r20 = r6;
    r21 = r7;
    r22 = r8;
    r23 = r9;
    r28 = 1;
    r26 = 0;
    r25 = 0;
    r24 = 0;
    MemoryInline::FlatWrite32(r9, r27);
    MemoryInline::FlatWrite32(r8, r27);
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_804613F4;
    }
}

loc_804613DC:
{
}

loc_804613E0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_804613F4;
    }
}

loc_804613E4:
{
}

loc_804613E8:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(36))) {
        goto loc_804613F4;
    }
}

loc_804613EC:
{
}

loc_804613F0:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(1))) {
        goto loc_804613FC;
    }
}

loc_804613F4:
{
    r28 = 64;
    goto loc_8046141C;
}

loc_804613FC:
{
    r12 = r19;
    r3 = r20;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r27 = 1;
    ctx->lr = 0x80461418u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
}

loc_8046141C:
{
}

loc_80461420:
{
    if ((static_cast<int32_t>(r17) == static_cast<int32_t>(0))) {
        goto loc_8046142C;
    }
}

loc_80461424:
{
    r0 = -1;
    r24 = PPC_Divwu(static_cast<uint32_t>(r0), static_cast<uint32_t>(r17));
}

loc_8046142C:
{
    r3 = 0x80610000u;
    r30 = 1;
    r31 = -1;
    r29 = (r3 + -2448);
    goto loc_8046173C;
}

loc_80461440:
{
}

loc_80461444:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(1))) {
        goto loc_8046146C;
    }
}

loc_80461448:
{
}

loc_8046144C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(2))) {
        goto loc_8046152C;
    }
}

loc_80461450:
{
}

loc_80461454:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(4))) {
        goto loc_80461574;
    }
}

loc_80461458:
{
}

loc_8046145C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(8))) {
        goto loc_804615C4;
    }
}

loc_80461460:
{
}

loc_80461464:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(16))) {
        goto loc_804615C4;
    }
}

loc_80461468:
{
    goto loc_8046173C;
}

loc_8046146C:
{
}

loc_80461470:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_8046147C;
    }
}

loc_80461478:
{
    r0 = 0;
}

loc_8046147C:
{
}

loc_80461480:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8046148C;
    }
}

loc_80461484:
{
    r0 = 0;
    goto loc_804614A0;
}

loc_8046148C:
{
    r3 = MemoryInline::FlatRead32((r29 + 56));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_12 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_12);
    r0 = (r0 & 256);
}

loc_804614A0:
{
}

loc_804614A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804614CC;
    }
}

loc_804614A8:
{
    r12 = r19;
    r3 = r20;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    ctx->lr = 0x804614C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    r26 = (r26 + 1);
    goto loc_8046173C;
}

loc_804614CC:
{
}

loc_804614D0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(43))) {
        goto loc_804614F8;
    }
}

loc_804614D4:
{
    r12 = r19;
    r3 = r20;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r27 = (r27 + 1);
    ctx->lr = 0x804614F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80461524;
}

loc_804614F8:
{
}

loc_804614FC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(45))) {
        goto loc_80461524;
    }
}

loc_80461500:
{
    r12 = r19;
    r3 = r20;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r27 = (r27 + 1);
    ctx->lr = 0x8046151Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    MemoryInline::FlatWrite32(r22, r30);
}

loc_80461524:
{
    r28 = 2;
    goto loc_8046173C;
}

loc_8046152C:
{
}

loc_80461530:
{
    if ((static_cast<int32_t>(r17) == static_cast<int32_t>(0))) {
        goto loc_8046153C;
    }
}

loc_80461534:
{
}

loc_80461538:
{
    if ((static_cast<int32_t>(r17) != static_cast<int32_t>(16))) {
        goto loc_8046156C;
    }
}

loc_8046153C:
{
}

loc_80461540:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(48))) {
        goto loc_8046156C;
    }
}

loc_80461544:
{
    r12 = r19;
    r3 = r20;
    r28 = 4;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r27 = (r27 + 1);
    ctx->lr = 0x80461564u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_8046173C;
}

loc_8046156C:
{
    r28 = 8;
    goto loc_8046173C;
}

loc_80461574:
{
}

loc_80461578:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(88))) {
        goto loc_80461584;
    }
}

loc_8046157C:
{
}

loc_80461580:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(120))) {
        goto loc_804615B0;
    }
}

loc_80461584:
{
    r12 = r19;
    r3 = r20;
    r17 = 16;
    r28 = 8;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r27 = (r27 + 1);
    ctx->lr = 0x804615A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_8046173C;
}

loc_804615B0:
{
}

loc_804615B4:
{
    if ((static_cast<int32_t>(r17) != static_cast<int32_t>(0))) {
        goto loc_804615BC;
    }
}

loc_804615B8:
{
    r17 = 8;
}

loc_804615BC:
{
    r28 = 16;
    goto loc_8046173C;
}

loc_804615C4:
{
}

loc_804615C8:
{
    if ((static_cast<int32_t>(r17) != static_cast<int32_t>(0))) {
        goto loc_804615D0;
    }
}

loc_804615CC:
{
    r17 = 10;
}

loc_804615D0:
{
}

loc_804615D4:
{
    if ((static_cast<int32_t>(r24) != static_cast<int32_t>(0))) {
        goto loc_804615DC;
    }
}

loc_804615D8:
{
    r24 = PPC_Divwu(static_cast<uint32_t>(r31), static_cast<uint32_t>(r17));
}

loc_804615DC:
{
}

loc_804615E0:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_804615EC;
    }
}

loc_804615E8:
{
    r0 = 0;
}

loc_804615EC:
{
}

loc_804615F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804615FC;
    }
}

loc_804615F4:
{
    r0 = 0;
    goto loc_80461610;
}

loc_804615FC:
{
    r3 = MemoryInline::FlatRead32((r29 + 56));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_2);
    r0 = (r0 & 8);
}

loc_80461610:
{
}

loc_80461614:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8046163C;
    }
}

loc_80461618:
{
    r4 = (r4 + -48);
}

loc_80461620:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r17))) {
        goto loc_804616F4;
    }
}

loc_80461624:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(16));
}

loc_80461628:
{
    r28 = 64;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80461634;
    }
}

loc_80461630:
{
    r28 = 32;
}

loc_80461634:
{
    r4 = (r4 + 48);
    goto loc_8046173C;
}

loc_8046163C:
{
}

loc_80461640:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_8046164C;
    }
}

loc_80461648:
{
    r0 = 0;
}

loc_8046164C:
{
}

loc_80461650:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8046165C;
    }
}

loc_80461654:
{
    r0 = 0;
    goto loc_80461670;
}

loc_8046165C:
{
    r3 = MemoryInline::FlatRead32((r29 + 56));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_4 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_4);
    r0 = (r0 & 1);
}

loc_80461670:
{
}

loc_80461674:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804616B0;
    }
}

loc_80461678:
{
}

loc_8046167C:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_80461688;
    }
}

loc_80461684:
{
    r0 = 0;
}

loc_80461688:
{
}

loc_8046168C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80461698;
    }
}

loc_80461690:
{
    r3 = r4;
    goto loc_804616A4;
}

loc_80461698:
{
    r3 = MemoryInline::FlatRead32((r29 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_6 = (r3 + r4);
    r3 = MemoryInline::FlatRead8(r3_addr_6);
}

loc_804616A4:
{
    r0 = (r3 + -55);
}

loc_804616AC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r17))) {
        goto loc_804616C8;
    }
}

loc_804616B0:
{
}

loc_804616B4:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(16))) {
        goto loc_804616C0;
    }
}

loc_804616B8:
{
    r28 = 32;
    goto loc_8046173C;
}

loc_804616C0:
{
    r28 = 64;
    goto loc_8046173C;
}

loc_804616C8:
{
}

loc_804616CC:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_804616D8;
    }
}

loc_804616D4:
{
    r0 = 0;
}

loc_804616D8:
{
}

loc_804616DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804616E4;
    }
}

loc_804616E0:
{
    goto loc_804616F0;
}

loc_804616E4:
{
    r3 = MemoryInline::FlatRead32((r29 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_8 = (r3 + r4);
    r4 = MemoryInline::FlatRead8(r3_addr_8);
}

loc_804616F0:
{
    r4 = (r4 + -55);
}

loc_804616F4:
{
}

loc_804616F8:
{
    if ((static_cast<uint32_t>(r25) <= static_cast<uint32_t>(r24))) {
        goto loc_80461700;
    }
}

loc_804616FC:
{
    MemoryInline::FlatWrite32(r23, r30);
}

loc_80461700:
{
    r25 = (r25 * r17);
    r0 = (-1 - r25);
}

loc_8046170C:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_80461714;
    }
}

loc_80461710:
{
    MemoryInline::FlatWrite32(r23, r30);
}

loc_80461714:
{
    r12 = r19;
    r25 = (r25 + r4);
    r3 = r20;
    r28 = 16;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r27 = (r27 + 1);
    ctx->lr = 0x80461738u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
}

loc_8046173C:
{
}

loc_80461740:
{
    if ((static_cast<int32_t>(r27) > static_cast<int32_t>(r18))) {
        goto loc_80461754;
    }
}

loc_80461744:
{
}

loc_80461748:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(-1))) {
        goto loc_80461754;
    }
}

loc_8046174C:
{
    r0 = (r28 & 96);
}

loc_80461750:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80461440;
    }
}

loc_80461754:
{
    r0 = (r28 & 52);
}

loc_80461758:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80461768;
    }
}

loc_8046175C:
{
    r25 = 0;
    MemoryInline::FlatWrite32(r21, r25);
    goto loc_80461774;
}

loc_80461768:
{
    r3 = (r27 + r26);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32(r21, r0);
}

loc_80461774:
{
    r12 = r19;
    r3 = r20;
    r5 = 1;
    ctr = r12;
    ctx->lr = 0x80461788u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r25;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 68u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8046138C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8046138C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8046138C func_8046138C preserves=true fpr_mask=0x00000000
