#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8050CC30(CpuContext* ctx);
extern "C" uint64_t func_8050CC30_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8050B420_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
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
    uint32_t ctr = ctx->ctr;

    goto loc_8050B420;

loc_8050B420:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r6 = MemoryInline::FlatRead32(r3);
    r29 = r3;
    r28 = MemoryInline::FlatRead32((r3 + 8));
    r30 = r4;
    r31 = MemoryInline::FlatRead32((r3 + 20));
    r24 = r5;
    r26 = (r6 + -1);
    r25 = 0;
    goto loc_8050B490;
}

loc_8050B458:
{
    r0 = (r25 + r26);
    r12 = r24;
    r27 = (static_cast<int32_t>(r0) >> 1);
    r4 = r30;
    r0 = (r27 * r28);
    r3 = (r31 + r0);
    ctr = r12;
    ctx->lr = 0x8050B478u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
}

loc_8050B47C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_8050B484;
    }
}

loc_8050B480:
{
    r25 = (r27 + 1);
}

loc_8050B484:
{
}

loc_8050B488:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_8050B490;
    }
}

loc_8050B48C:
{
    r26 = (r27 + -1);
}

loc_8050B490:
{
}

loc_8050B494:
{
    if ((static_cast<int32_t>(r25) <= static_cast<int32_t>(r26))) {
        goto loc_8050B458;
    }
}

loc_8050B498:
{
    r6 = (r25 * r28);
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5 = MemoryInline::FlatRead32((r29 + 8));
    r0 = MemoryInline::FlatRead32(r29);
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r6 = (r31 + r6);
    r6 = (r6 - r3);
}

loc_8050B4B8:
{
    r31 = PPC_Divw(static_cast<int32_t>(r6), static_cast<int32_t>(r5));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r4))) {
        goto loc_8050B4D8;
    }
}

loc_8050B4C0:
{
    r0 = MemoryInline::FlatRead32((r29 + 12));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r29 + 4), r0);
    r4 = (r0 * r5);
    ctx->lr = 0x8050B4D4u;
    if constexpr (KnownRegArgsCpuCall<0x8050CC30u>(&func_8050CC30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8050CC30_11BA = func_8050CC30_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8050CC30_11BA);
        r4 = static_cast<uint32_t>(regargs_result_8050CC30_11BA >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8050CC30u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    MemoryInline::FlatWrite32((r29 + 20), r3);
}

loc_8050B4D8:
{
    r3 = MemoryInline::FlatRead32(r29);
    r5 = (r3 + 1);
    MemoryInline::FlatWrite32(r29, r5);
    r6 = (r5 + -1);
}

loc_8050B4EC:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(r6))) {
        goto loc_8050B550;
    }
}

loc_8050B4F0:
{
    r4 = (r31 + 1);
}

loc_8050B4F4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_8050B500;
    }
}

loc_8050B4F8:
{
}

loc_8050B4FC:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r5))) {
        goto loc_8050B508;
    }
}

loc_8050B500:
{
    r3 = 0;
    goto loc_8050B518;
}

loc_8050B508:
{
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r0 = (r0 * r4);
    r3 = (r3 + r0);
}

loc_8050B518:
{
}

loc_8050B51C:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(0))) {
        goto loc_8050B528;
    }
}

loc_8050B520:
{
}

loc_8050B524:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r5))) {
        goto loc_8050B530;
    }
}

loc_8050B528:
{
    r4 = 0;
    goto loc_8050B540;
}

loc_8050B530:
{
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r4 = MemoryInline::FlatRead32((r29 + 20));
    r0 = (r0 * r31);
    r4 = (r4 + r0);
}

loc_8050B540:
{
    r5 = MemoryInline::FlatRead32((r29 + 8));
    r0 = (r6 - r31);
    r5 = (r5 * r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8045BC18u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8050B550:
{
}

loc_8050B554:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(0))) {
        goto loc_8050B564;
    }
}

loc_8050B558:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_8050B560:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r0))) {
        goto loc_8050B56C;
    }
}

loc_8050B564:
{
    r3 = 0;
    goto loc_8050B57C;
}

loc_8050B56C:
{
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r0 = (r0 * r31);
    r3 = (r3 + r0);
}

loc_8050B57C:
{
    r5 = MemoryInline::FlatRead32((r29 + 8));
    r4 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r11 = (r1 + 48);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8050B420(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8050B420_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8050B420 func_8050B420 preserves=true fpr_mask=0x00000000
