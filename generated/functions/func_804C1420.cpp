#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804EF0D0(CpuContext* ctx);
extern "C" uint64_t func_804EF0D0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804C1420_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t ctr = ctx->ctr;

    goto loc_804C1420;

loc_804C1420:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r30 = 0x80750000u;
    r27 = r3;
    r30 = (r30 + -26112);
}

loc_804C1444:
{
    r3 = (r3 * 1400);
    r28 = r4;
    r0 = (r30 + 0);
    r29 = (r0 + r3);
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_804C14E0;
    }
}

loc_804C1458:
{
    r31 = 0;
    MemoryInline::FlatWrite32((r29 + 1392), r31);
    r0 = 1;
    r3 = 0;
    MemoryInline::FlatWrite8((r29 + 1396), static_cast<uint8_t>(r0));
    // inline leaf 0x804F3640 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r13 + -14144), r3);
    // end of inlined leaf 0x804F3640
    r4 = 0x804C0000u;
    r3 = r27;
    r4 = (r4 + 5744);
    ctx->lr = 0x804C1480u;
    if constexpr (KnownRegArgsCpuCall<0x804EF0D0u>(&func_804EF0D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_804EF0D0_ABD = func_804EF0D0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804EF0D0_ABD);
        r4 = static_cast<uint32_t>(regargs_result_804EF0D0_ABD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804EF0D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
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
    r3 = 1;
    // inline leaf 0x804F3640 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r13 + -14144), r3);
    // end of inlined leaf 0x804F3640
    MemoryInline::FlatWrite8((r29 + 1367), static_cast<uint8_t>(r31));
}

loc_804C1490:
{
    MemoryInline::FlatWrite8((r29 + 1369), static_cast<uint8_t>(r31));
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(3))) {
        goto loc_804C1550;
    }
}

loc_804C1498:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -2152));
    r4 = (r30 + 5648);
    r3 = (r30 + 5680);
    MemoryInline::FlatWrite8((r13 + -15250), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r13 + -15251), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r13 + -15252), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r13 + -15254), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite16((r13 + -15256), static_cast<uint16_t>(r31));
    MemoryInline::FlatWrite8((r13 + -15253), static_cast<uint8_t>(r31));
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 5648), 0, 64u, false, true);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 0u, (r30 + 5648), f0.d);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 32u, (r30 + 5680), f0.d);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 8u, (r4 + 8), f0.d);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 40u, (r3 + 8), f0.d);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 16u, (r4 + 16), f0.d);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 48u, (r3 + 16), f0.d);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 24u, (r4 + 24), f0.d);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 56u, (r3 + 24), f0.d);
    goto loc_804C1550;
}

loc_804C14E0:
{
    r4 = -1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 357), 0, 841u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r29 + 357), static_cast<uint8_t>(r4));
    r6 = 0;
    r5 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 56u, (r29 + 413), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 112u, (r29 + 469), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 168u, (r29 + 525), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 224u, (r29 + 581), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 280u, (r29 + 637), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 336u, (r29 + 693), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 392u, (r29 + 749), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 448u, (r29 + 805), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 504u, (r29 + 861), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 560u, (r29 + 917), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 616u, (r29 + 973), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 672u, (r29 + 1029), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 728u, (r29 + 1085), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 784u, (r29 + 1141), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 840u, (r29 + 1197), static_cast<uint8_t>(r4));
    goto loc_804C1544;
}

loc_804C1530:
{
    r0 = MemoryInline::FlatRead32((r29 + 1212));
    r6 = (r6 + 1);
    r3 = (r0 + r5);
    r5 = (r5 + 56);
    MemoryInline::FlatWrite8((r3 + 41), static_cast<uint8_t>(r4));
}

loc_804C1544:
{
    r0 = MemoryInline::FlatRead32((r29 + 1216));
}

loc_804C154C:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r0))) {
        goto loc_804C1530;
    }
}

loc_804C1550:
{
    r12 = MemoryInline::FlatRead32((r29 + 1360));
}

loc_804C1558:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_804C156C;
    }
}

loc_804C155C:
{
    r3 = r27;
    r4 = r28;
    ctr = r12;
    ctx->lr = 0x804C156Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
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
    f0 = ctx->fpr[0];
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

loc_804C156C:
{
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
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
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

extern "C" void func_804C1420(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804C1420_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804C1420 func_804C1420 preserves=true fpr_mask=0x00000000
