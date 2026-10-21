#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005D374(CpuContext* ctx);
extern "C" uint64_t func_8005D374_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8005E2A4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

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
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x8005E2A4u);
    goto loc_8005E2A4;

loc_8005E2A4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r7;
    r27 = r8;
    ctx->lr = 0x8005E2D0u;
    if constexpr (KnownRegArgsCpuCall<0x8005D374u>(&func_8005D374)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8005D374_90C = func_8005D374_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005D374_90C);
        r4 = static_cast<uint32_t>(regargs_result_8005D374_90C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005D374u>(ctx);
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r3 = 0x80590000u;
    r0 = (r3 + -15080);
    MemoryInline::FlatWrite32(r28, r0);
    MemoryInline::FlatWrite32((r28 + 24), r27);
    MemoryInline::FlatWrite32((r28 + 28), r31);
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r29 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_8005E308:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005E320;
    }
}

loc_8005E30C:
{
    r3 = (r29 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8005E318:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005E320;
    }
}

loc_8005E31C:
{
    r9 = 0;
}

loc_8005E320:
{
}

loc_8005E324:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8005E33C;
    }
}

loc_8005E328:
{
    r3 = (r29 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8005E334:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005E33C;
    }
}

loc_8005E338:
{
    r8 = 0;
}

loc_8005E33C:
{
}

loc_8005E340:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8005E354;
    }
}

loc_8005E344:
{
    r0 = (r10 + 1073741824);
}

loc_8005E34C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005E354;
    }
}

loc_8005E350:
{
    r7 = 0;
}

loc_8005E354:
{
}

loc_8005E358:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8005E370;
    }
}

loc_8005E35C:
{
    r3 = (r29 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8005E368:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005E370;
    }
}

loc_8005E36C:
{
    r6 = 0;
}

loc_8005E370:
{
}

loc_8005E374:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8005E38C;
    }
}

loc_8005E378:
{
    r3 = (r29 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8005E384:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005E38C;
    }
}

loc_8005E388:
{
    r5 = 0;
}

loc_8005E38C:
{
}

loc_8005E390:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8005E3A8;
    }
}

loc_8005E394:
{
    r3 = (r29 & -16384);
    r0 = (r3 + 536870912);
}

loc_8005E3A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005E3A8;
    }
}

loc_8005E3A4:
{
    r4 = 0;
}

loc_8005E3A8:
{
}

loc_8005E3AC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8005E3D0;
    }
}

loc_8005E3B0:
{
    r3 = 0x80590000u;
    r3 = (r3 + -17456);
    r4 = 212;
    r5 = 0x80590000u;
    r5 = (r5 + -16864);
    r6 = r29;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8005E3D0u;
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

loc_8005E3D0:
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

loc_8005E3F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005E40C;
    }
}

loc_8005E3F8:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8005E404:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005E40C;
    }
}

loc_8005E408:
{
    r9 = 0;
}

loc_8005E40C:
{
}

loc_8005E410:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8005E428;
    }
}

loc_8005E414:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8005E420:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005E428;
    }
}

loc_8005E424:
{
    r8 = 0;
}

loc_8005E428:
{
}

loc_8005E42C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8005E440;
    }
}

loc_8005E430:
{
    r0 = (r10 + 1073741824);
}

loc_8005E438:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005E440;
    }
}

loc_8005E43C:
{
    r7 = 0;
}

loc_8005E440:
{
}

loc_8005E444:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8005E45C;
    }
}

loc_8005E448:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8005E454:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005E45C;
    }
}

loc_8005E458:
{
    r6 = 0;
}

loc_8005E45C:
{
}

loc_8005E460:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8005E478;
    }
}

loc_8005E464:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8005E470:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005E478;
    }
}

loc_8005E474:
{
    r5 = 0;
}

loc_8005E478:
{
}

loc_8005E47C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8005E494;
    }
}

loc_8005E480:
{
    r3 = (r30 & -16384);
    r0 = (r3 + 536870912);
}

loc_8005E48C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005E494;
    }
}

loc_8005E490:
{
    r4 = 0;
}

loc_8005E494:
{
}

loc_8005E498:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8005E4BC;
    }
}

loc_8005E49C:
{
    r3 = 0x80590000u;
    r3 = (r3 + -17456);
    r4 = 213;
    r5 = 0x80590000u;
    r5 = (r5 + -16812);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8005E4BCu;
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

loc_8005E4BC:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r31 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_8005E4E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005E4F8;
    }
}

loc_8005E4E4:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8005E4F0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005E4F8;
    }
}

loc_8005E4F4:
{
    r9 = 0;
}

loc_8005E4F8:
{
}

loc_8005E4FC:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8005E514;
    }
}

loc_8005E500:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8005E50C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005E514;
    }
}

loc_8005E510:
{
    r8 = 0;
}

loc_8005E514:
{
}

loc_8005E518:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8005E52C;
    }
}

loc_8005E51C:
{
    r0 = (r10 + 1073741824);
}

loc_8005E524:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005E52C;
    }
}

loc_8005E528:
{
    r7 = 0;
}

loc_8005E52C:
{
}

loc_8005E530:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8005E548;
    }
}

loc_8005E534:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8005E540:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005E548;
    }
}

loc_8005E544:
{
    r6 = 0;
}

loc_8005E548:
{
}

loc_8005E54C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8005E564;
    }
}

loc_8005E550:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8005E55C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005E564;
    }
}

loc_8005E560:
{
    r5 = 0;
}

loc_8005E564:
{
}

loc_8005E568:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8005E580;
    }
}

loc_8005E56C:
{
    r3 = (r31 & -16384);
    r0 = (r3 + 536870912);
}

loc_8005E578:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005E580;
    }
}

loc_8005E57C:
{
    r4 = 0;
}

loc_8005E580:
{
}

loc_8005E584:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8005E5A8;
    }
}

loc_8005E588:
{
    r3 = 0x80590000u;
    r3 = (r3 + -17456);
    r4 = 214;
    r5 = 0x80590000u;
    r5 = (r5 + -16748);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8005E5A8u;
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

loc_8005E5A8:
{
    r6 = 0;
    r5 = 0;
    r4 = 0;
    goto loc_8005E5C8;
}

loc_8005E5B8:
{
    r3 = MemoryInline::FlatRead32((r28 + 28));
    r3_addr_2 = (r3 + r5);
    MemoryInline::FlatWrite32(r3_addr_2, r4);
    r5 = (r5 + 4);
    r6 = (r6 + 1);
}

loc_8005E5C8:
{
    r0 = MemoryInline::FlatRead32((r28 + 24));
}

loc_8005E5D0:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r0))) {
        goto loc_8005E5B8;
    }
}

loc_8005E5D4:
{
    r3 = r28;
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8005E2A4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8005E2A4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000037FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8005E2A4 func_8005E2A4 preserves=true fpr_mask=0x00000000
