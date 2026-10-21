#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80323F70_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[5] = arg_r5;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80323F70u);
    goto loc_80323F70;

loc_80323F70:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    // inline leaf 0x800D076C (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2003));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    // end of inlined leaf 0x800D076C
}

loc_80323F94:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80323FC0;
    }
}

loc_80323F98:
{
    r0 = (r30 & 65535);
}

loc_80323FA0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(10000))) {
        goto loc_8032426C;
    }
}

loc_80323FA4:
{
}

loc_80323FA8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(60000))) {
        goto loc_80323FB8;
    }
}

loc_80323FAC:
{
    r0 = (r31 & 255);
}

loc_80323FB4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_8032426C;
    }
}

loc_80323FB8:
{
    r3 = 1;
    goto loc_80324270;
}

loc_80323FC0:
{
    r0 = (r30 & 65535);
}

loc_80323FC8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1000))) {
        goto loc_8032426C;
    }
}

loc_80323FCC:
{
}

loc_80323FD0:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(9000))) {
        goto loc_8032426C;
    }
}

loc_80323FD4:
{
}

loc_80323FD8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1044))) {
        goto loc_80324050;
    }
}

loc_80323FDC:
{
}

loc_80323FE0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1025))) {
        goto loc_8032401C;
    }
}

loc_80323FE4:
{
}

loc_80323FE8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1010))) {
        goto loc_80324004;
    }
}

loc_80323FEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1000));
}

loc_80323FF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803240B4;
    }
}

loc_80323FF4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80324264;
    }
}

loc_80323FF8:
{
}

loc_80323FFC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1006))) {
        goto loc_80324264;
    }
}

loc_80324000:
{
    goto loc_803240CC;
}

loc_80324004:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1014));
}

loc_80324008:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803240FC;
    }
}

loc_8032400C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_803240E4;
    }
}

loc_80324010:
{
}

loc_80324014:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1020))) {
        goto loc_8032412C;
    }
}

loc_80324018:
{
    goto loc_80324264;
}

loc_8032401C:
{
}

loc_80324020:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1036))) {
        goto loc_8032403C;
    }
}

loc_80324024:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1029));
}

loc_80324028:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80324264;
    }
}

loc_8032402C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80324174;
    }
}

loc_80324030:
{
}

loc_80324034:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1027))) {
        goto loc_8032415C;
    }
}

loc_80324038:
{
    goto loc_80324144;
}

loc_8032403C:
{
}

loc_80324040:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1040))) {
        goto loc_803241D4;
    }
}

loc_80324044:
{
}

loc_80324048:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1038))) {
        goto loc_803241BC;
    }
}

loc_8032404C:
{
    goto loc_803241A4;
}

loc_80324050:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2001));
}

loc_80324054:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80324114;
    }
}

loc_80324058:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80324090;
    }
}

loc_8032405C:
{
}

loc_80324060:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1051))) {
        goto loc_8032407C;
    }
}

loc_80324064:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1048));
}

loc_80324068:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80324234;
    }
}

loc_8032406C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80324204;
    }
}

loc_80324070:
{
}

loc_80324074:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1047))) {
        goto loc_80324204;
    }
}

loc_80324078:
{
    goto loc_803241EC;
}

loc_8032407C:
{
}

loc_80324080:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1066))) {
        goto loc_80324264;
    }
}

loc_80324084:
{
}

loc_80324088:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1060))) {
        goto loc_8032424C;
    }
}

loc_8032408C:
{
    goto loc_80324264;
}

loc_80324090:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2005));
}

loc_80324094:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8032421C;
    }
}

loc_80324098:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803240A8;
    }
}

loc_8032409C:
{
}

loc_803240A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2003))) {
        goto loc_8032418C;
    }
}

loc_803240A4:
{
    goto loc_80324264;
}

loc_803240A8:
{
}

loc_803240AC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(2007))) {
        goto loc_80324264;
    }
}

loc_803240B0:
{
    goto loc_8032424C;
}

loc_803240B4:
{
    r3 = 6;
    ctx->lr = 0x803240BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_803240C0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80324264;
    }
}

loc_803240C4:
{
    r3 = 0;
    goto loc_80324270;
}

loc_803240CC:
{
    r3 = 7;
    ctx->lr = 0x803240D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_803240D8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80324264;
    }
}

loc_803240DC:
{
    r3 = 0;
    goto loc_80324270;
}

loc_803240E4:
{
    r3 = 9;
    ctx->lr = 0x803240ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_803240F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80324264;
    }
}

loc_803240F4:
{
    r3 = 0;
    goto loc_80324270;
}

loc_803240FC:
{
    r3 = 10;
    ctx->lr = 0x80324104u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80324108:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80324264;
    }
}

loc_8032410C:
{
    r3 = 0;
    goto loc_80324270;
}

loc_80324114:
{
    r3 = 2001;
    ctx->lr = 0x8032411Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004D770u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80324120:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80324264;
    }
}

loc_80324124:
{
    r3 = 0;
    goto loc_80324270;
}

loc_8032412C:
{
    r3 = 12;
    ctx->lr = 0x80324134u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80324138:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80324264;
    }
}

loc_8032413C:
{
    r3 = 0;
    goto loc_80324270;
}

loc_80324144:
{
    r3 = 13;
    ctx->lr = 0x8032414Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80324150:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80324264;
    }
}

loc_80324154:
{
    r3 = 0;
    goto loc_80324270;
}

loc_8032415C:
{
    r3 = 14;
    ctx->lr = 0x80324164u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80324168:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80324264;
    }
}

loc_8032416C:
{
    r3 = 0;
    goto loc_80324270;
}

loc_80324174:
{
    r3 = 16;
    ctx->lr = 0x8032417Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80324180:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80324264;
    }
}

loc_80324184:
{
    r3 = 0;
    goto loc_80324270;
}

loc_8032418C:
{
    r3 = 2003;
    ctx->lr = 0x80324194u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004D770u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80324198:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80324264;
    }
}

loc_8032419C:
{
    r3 = 0;
    goto loc_80324270;
}

loc_803241A4:
{
    r3 = 18;
    ctx->lr = 0x803241ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_803241B0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80324264;
    }
}

loc_803241B4:
{
    r3 = 0;
    goto loc_80324270;
}

loc_803241BC:
{
    r3 = 19;
    ctx->lr = 0x803241C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_803241C8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80324264;
    }
}

loc_803241CC:
{
    r3 = 0;
    goto loc_80324270;
}

loc_803241D4:
{
    r3 = 20;
    ctx->lr = 0x803241DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_803241E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80324264;
    }
}

loc_803241E4:
{
    r3 = 0;
    goto loc_80324270;
}

loc_803241EC:
{
    r3 = 22;
    ctx->lr = 0x803241F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_803241F8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80324264;
    }
}

loc_803241FC:
{
    r3 = 0;
    goto loc_80324270;
}

loc_80324204:
{
    r3 = 24;
    ctx->lr = 0x8032420Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80324210:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80324264;
    }
}

loc_80324214:
{
    r3 = 0;
    goto loc_80324270;
}

loc_8032421C:
{
    r3 = 2005;
    ctx->lr = 0x80324224u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004D770u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80324228:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80324264;
    }
}

loc_8032422C:
{
    r3 = 0;
    goto loc_80324270;
}

loc_80324234:
{
    r3 = 25;
    ctx->lr = 0x8032423Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80324240:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80324264;
    }
}

loc_80324244:
{
    r3 = 0;
    goto loc_80324270;
}

loc_8032424C:
{
    r3 = 26;
    ctx->lr = 0x80324254u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80324258:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80324264;
    }
}

loc_8032425C:
{
    r3 = 0;
    goto loc_80324270;
}

loc_80324264:
{
    r3 = 1;
    goto loc_80324270;
}

loc_8032426C:
{
    r3 = 0;
}

loc_80324270:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80323F70(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80323F70_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80323F70 func_80323F70 preserves=true fpr_mask=0x00000000
