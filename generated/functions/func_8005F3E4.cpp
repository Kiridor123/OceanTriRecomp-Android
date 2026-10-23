#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045C058(CpuContext* ctx);
extern "C" uint64_t func_8045C058_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8005F3E4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f31 = ctx->fpr[31];
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    goto loc_8005F3E4;

loc_8005F3E4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f31.d);
    r31 = r3;
    f31.d = f1.d;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_8005F42C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005F444;
    }
}

loc_8005F430:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_8005F43C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005F444;
    }
}

loc_8005F440:
{
    r10 = 0;
}

loc_8005F444:
{
}

loc_8005F448:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8005F460;
    }
}

loc_8005F44C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_8005F458:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005F460;
    }
}

loc_8005F45C:
{
    r9 = 0;
}

loc_8005F460:
{
}

loc_8005F464:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8005F478;
    }
}

loc_8005F468:
{
    r0 = (r11 + 1073741824);
}

loc_8005F470:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005F478;
    }
}

loc_8005F474:
{
    r8 = 0;
}

loc_8005F478:
{
}

loc_8005F47C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8005F494;
    }
}

loc_8005F480:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_8005F48C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005F494;
    }
}

loc_8005F490:
{
    r7 = 0;
}

loc_8005F494:
{
}

loc_8005F498:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8005F4B0;
    }
}

loc_8005F49C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_8005F4A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005F4B0;
    }
}

loc_8005F4AC:
{
    r6 = 0;
}

loc_8005F4B0:
{
}

loc_8005F4B4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8005F4CC;
    }
}

loc_8005F4B8:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_8005F4C4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005F4CC;
    }
}

loc_8005F4C8:
{
    r5 = 0;
}

loc_8005F4CC:
{
}

loc_8005F4D0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8005F4F4;
    }
}

loc_8005F4D4:
{
    r3 = 0x80590000u;
    r3 = (r3 + -17456);
    r4 = 367;
    r5 = 0x80590000u;
    r5 = (r5 + -17356);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8005F4F4u;
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

loc_8005F4F4:
{
    r30 = 0;
    f1.d = f31.d;
    if constexpr (KnownRegArgsCpuCall<0x8045C058u>(&func_8045C058)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8045C058_1490 = func_8045C058_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8045C058_1490);
        r4 = static_cast<uint32_t>(regargs_result_8045C058_1490 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x8045C058u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8005F504:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(2))) {
        goto loc_8005F51C;
    }
}

loc_8005F508:
{
    f1.d = f31.d;
    if constexpr (KnownRegArgsCpuCall<0x8045C058u>(&func_8045C058)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8045C058_1866 = func_8045C058_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8045C058_1866);
        r4 = static_cast<uint32_t>(regargs_result_8045C058_1866 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x8045C058u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8005F514:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8005F51C;
    }
}

loc_8005F518:
{
    r30 = 1;
}

loc_8005F51C:
{
}

loc_8005F520:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_8005F544;
    }
}

loc_8005F524:
{
    r3 = 0x80590000u;
    r3 = (r3 + -17456);
    r4 = 368;
    r5 = 0x80590000u;
    r5 = (r5 + -16508);
    f1.d = f31.d;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(5), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8005F544u;
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

loc_8005F544:
{
    r29 = 0;
    r30 = 0;
    goto loc_8005F57C;
}

loc_8005F550:
{
    r3 = MemoryInline::FlatRead32((r31 + 28));
    r3_addr_2 = (r3 + r30);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
}

loc_8005F55C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8005F574;
    }
}

loc_8005F560:
{
    f1.d = f31.d;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x8005F574u;
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
    ctx->fpr[1] = f1;
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
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_8005F574:
{
    r30 = (r30 + 4);
    r29 = (r29 + 1);
}

loc_8005F57C:
{
    r0 = MemoryInline::FlatRead32((r31 + 24));
}

loc_8005F584:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r0))) {
        goto loc_8005F550;
    }
}

loc_8005F588:
{
    f31.d = MemoryInline::FlatReadFloat64((r1 + 24));
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
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8005F3E4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8005F3E4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8005F3E4 func_8005F3E4 preserves=true fpr_mask=0x00000000
