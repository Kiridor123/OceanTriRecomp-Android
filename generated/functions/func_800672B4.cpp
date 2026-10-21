#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80064A30(CpuContext* ctx);
extern "C" uint64_t func_80064A30_ra38_1f0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double);
extern "C" void func_80064C88(CpuContext* ctx);
extern "C" uint64_t func_80064C88_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8006783C(CpuContext* ctx);
extern "C" uint64_t func_8006783C_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800672B4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

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
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x800672B4u);
    goto loc_800672B4;

loc_800672B4:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r6;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_80067304:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006731C;
    }
}

loc_80067308:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_80067314:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006731C;
    }
}

loc_80067318:
{
    r10 = 0;
}

loc_8006731C:
{
}

loc_80067320:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_80067338;
    }
}

loc_80067324:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_80067330:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80067338;
    }
}

loc_80067334:
{
    r9 = 0;
}

loc_80067338:
{
}

loc_8006733C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80067350;
    }
}

loc_80067340:
{
    r0 = (r11 + 1073741824);
}

loc_80067348:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80067350;
    }
}

loc_8006734C:
{
    r8 = 0;
}

loc_80067350:
{
}

loc_80067354:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8006736C;
    }
}

loc_80067358:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_80067364:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006736C;
    }
}

loc_80067368:
{
    r7 = 0;
}

loc_8006736C:
{
}

loc_80067370:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80067388;
    }
}

loc_80067374:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_80067380:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80067388;
    }
}

loc_80067384:
{
    r6 = 0;
}

loc_80067388:
{
}

loc_8006738C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800673A4;
    }
}

loc_80067390:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_8006739C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800673A4;
    }
}

loc_800673A0:
{
    r5 = 0;
}

loc_800673A4:
{
}

loc_800673A8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800673CC;
    }
}

loc_800673AC:
{
    r3 = 0x80590000u;
    r3 = (r3 + -13752);
    r4 = 1403;
    r5 = 0x80590000u;
    r5 = (r5 + -13672);
    r6 = r28;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800673CCu;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_800673CC:
{
    r3 = (r1 + 8);
    ctx->lr = 0x800673D4u;
    if constexpr (KnownRegArgsCpuCall<0x8006783Cu>(&func_8006783C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8006783C_1452 = func_8006783C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8006783C_1452);
        r4 = static_cast<uint32_t>(regargs_result_8006783C_1452 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8006783Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = r28;
    r4 = (r1 + 8);
    r5 = r31;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 132));
    ctr = r12;
    ctx->lr = 0x800673F0u;
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
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
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 4);
}

loc_80067400:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80067624;
    }
}

loc_80067404:
{
}

loc_80067408:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80067504;
    }
}

loc_8006740C:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r29 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_80067430:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80067448;
    }
}

loc_80067434:
{
    r3 = (r29 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_80067440:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80067448;
    }
}

loc_80067444:
{
    r9 = 0;
}

loc_80067448:
{
}

loc_8006744C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80067464;
    }
}

loc_80067450:
{
    r3 = (r29 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8006745C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80067464;
    }
}

loc_80067460:
{
    r8 = 0;
}

loc_80067464:
{
}

loc_80067468:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8006747C;
    }
}

loc_8006746C:
{
    r0 = (r10 + 1073741824);
}

loc_80067474:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006747C;
    }
}

loc_80067478:
{
    r7 = 0;
}

loc_8006747C:
{
}

loc_80067480:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80067498;
    }
}

loc_80067484:
{
    r3 = (r29 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_80067490:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80067498;
    }
}

loc_80067494:
{
    r6 = 0;
}

loc_80067498:
{
}

loc_8006749C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800674B4;
    }
}

loc_800674A0:
{
    r3 = (r29 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800674AC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800674B4;
    }
}

loc_800674B0:
{
    r5 = 0;
}

loc_800674B4:
{
}

loc_800674B8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800674D0;
    }
}

loc_800674BC:
{
    r3 = (r29 & -16384);
    r0 = (r3 + 536870912);
}

loc_800674C8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800674D0;
    }
}

loc_800674CC:
{
    r4 = 0;
}

loc_800674D0:
{
}

loc_800674D4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800674F8;
    }
}

loc_800674D8:
{
    r3 = 0x80590000u;
    r3 = (r3 + -13752);
    r4 = 1414;
    r5 = 0x80590000u;
    r5 = (r5 + -12916);
    r6 = r29;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800674F8u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_800674F8:
{
    r3 = r29;
    r4 = r31;
    ctx->lr = 0x80067504u;
    if constexpr (KnownRegArgsCpuCall<0x80064A30u>(&func_80064A30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80064A30_293C = func_80064A30_ra38_1f0_18_0(ctx, r3, r4, r5, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80064A30_293C);
        r4 = static_cast<uint32_t>(regargs_result_80064A30_293C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80064A30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_80067504:
{
}

loc_80067508:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8006781C;
    }
}

loc_8006750C:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r30 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_80067530:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80067548;
    }
}

loc_80067534:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_80067540:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80067548;
    }
}

loc_80067544:
{
    r9 = 0;
}

loc_80067548:
{
}

loc_8006754C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80067564;
    }
}

loc_80067550:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8006755C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80067564;
    }
}

loc_80067560:
{
    r8 = 0;
}

loc_80067564:
{
}

loc_80067568:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8006757C;
    }
}

loc_8006756C:
{
    r0 = (r10 + 1073741824);
}

loc_80067574:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006757C;
    }
}

loc_80067578:
{
    r7 = 0;
}

loc_8006757C:
{
}

loc_80067580:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80067598;
    }
}

loc_80067584:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_80067590:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80067598;
    }
}

loc_80067594:
{
    r6 = 0;
}

loc_80067598:
{
}

loc_8006759C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800675B4;
    }
}

loc_800675A0:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800675AC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800675B4;
    }
}

loc_800675B0:
{
    r5 = 0;
}

loc_800675B4:
{
}

loc_800675B8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800675D0;
    }
}

loc_800675BC:
{
    r3 = (r30 & -16384);
    r0 = (r3 + 536870912);
}

loc_800675C8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800675D0;
    }
}

loc_800675CC:
{
    r4 = 0;
}

loc_800675D0:
{
}

loc_800675D4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800675F8;
    }
}

loc_800675D8:
{
    r3 = 0x80590000u;
    r3 = (r3 + -13752);
    r4 = 1421;
    r5 = 0x80590000u;
    r5 = (r5 + -12864);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800675F8u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_800675F8:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r0 & 8);
}

loc_80067604:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80067618;
    }
}

loc_80067608:
{
    r3 = r30;
    r4 = r31;
    ctx->lr = 0x80067614u;
    if constexpr (KnownRegArgsCpuCall<0x80064C88u>(&func_80064C88)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80064C88_3E92 = func_80064C88_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80064C88_3E92);
        r4 = static_cast<uint32_t>(regargs_result_80064C88_3E92 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80064C88u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_8006781C;
}

loc_80067618:
{
    r3 = r30;
    // inline leaf 0x80065208 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 & -5);
    MemoryInline::FlatWrite32(r3, r0);
    // end of inlined leaf 0x80065208
    goto loc_8006781C;
}

loc_80067624:
{
}

loc_80067628:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80067720;
    }
}

loc_8006762C:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r29 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_80067650:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80067668;
    }
}

loc_80067654:
{
    r3 = (r29 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_80067660:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80067668;
    }
}

loc_80067664:
{
    r9 = 0;
}

loc_80067668:
{
}

loc_8006766C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80067684;
    }
}

loc_80067670:
{
    r3 = (r29 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8006767C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80067684;
    }
}

loc_80067680:
{
    r8 = 0;
}

loc_80067684:
{
}

loc_80067688:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8006769C;
    }
}

loc_8006768C:
{
    r0 = (r10 + 1073741824);
}

loc_80067694:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006769C;
    }
}

loc_80067698:
{
    r7 = 0;
}

loc_8006769C:
{
}

loc_800676A0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800676B8;
    }
}

loc_800676A4:
{
    r3 = (r29 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800676B0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800676B8;
    }
}

loc_800676B4:
{
    r6 = 0;
}

loc_800676B8:
{
}

loc_800676BC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800676D4;
    }
}

loc_800676C0:
{
    r3 = (r29 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800676CC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800676D4;
    }
}

loc_800676D0:
{
    r5 = 0;
}

loc_800676D4:
{
}

loc_800676D8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800676F0;
    }
}

loc_800676DC:
{
    r3 = (r29 & -16384);
    r0 = (r3 + 536870912);
}

loc_800676E8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800676F0;
    }
}

loc_800676EC:
{
    r4 = 0;
}

loc_800676F0:
{
}

loc_800676F4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80067718;
    }
}

loc_800676F8:
{
    r3 = 0x80590000u;
    r3 = (r3 + -13752);
    r4 = 1439;
    r5 = 0x80590000u;
    r5 = (r5 + -12916);
    r6 = r29;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80067718u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_80067718:
{
    r3 = r29;
    // inline leaf 0x80065208 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 & -5);
    MemoryInline::FlatWrite32(r3, r0);
    // end of inlined leaf 0x80065208
}

loc_80067720:
{
}

loc_80067724:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8006781C;
    }
}

loc_80067728:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r30 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_8006774C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80067764;
    }
}

loc_80067750:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8006775C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80067764;
    }
}

loc_80067760:
{
    r9 = 0;
}

loc_80067764:
{
}

loc_80067768:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80067780;
    }
}

loc_8006776C:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_80067778:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80067780;
    }
}

loc_8006777C:
{
    r8 = 0;
}

loc_80067780:
{
}

loc_80067784:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80067798;
    }
}

loc_80067788:
{
    r0 = (r10 + 1073741824);
}

loc_80067790:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80067798;
    }
}

loc_80067794:
{
    r7 = 0;
}

loc_80067798:
{
}

loc_8006779C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800677B4;
    }
}

loc_800677A0:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800677AC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800677B4;
    }
}

loc_800677B0:
{
    r6 = 0;
}

loc_800677B4:
{
}

loc_800677B8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800677D0;
    }
}

loc_800677BC:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800677C8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800677D0;
    }
}

loc_800677CC:
{
    r5 = 0;
}

loc_800677D0:
{
}

loc_800677D4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800677EC;
    }
}

loc_800677D8:
{
    r3 = (r30 & -16384);
    r0 = (r3 + 536870912);
}

loc_800677E4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800677EC;
    }
}

loc_800677E8:
{
    r4 = 0;
}

loc_800677EC:
{
}

loc_800677F0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80067814;
    }
}

loc_800677F4:
{
    r3 = 0x80590000u;
    r3 = (r3 + -13752);
    r4 = 1444;
    r5 = 0x80590000u;
    r5 = (r5 + -12864);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80067814u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_80067814:
{
    r3 = r30;
    // inline leaf 0x80065208 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 & -5);
    MemoryInline::FlatWrite32(r3, r0);
    // end of inlined leaf 0x80065208
}

loc_8006781C:
{
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800672B4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800672B4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800672B4 func_800672B4 preserves=true fpr_mask=0x00000000
