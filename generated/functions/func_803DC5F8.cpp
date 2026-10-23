#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803DEED0(CpuContext* ctx);
extern "C" uint64_t func_803DEED0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803FD840(CpuContext* ctx);
extern "C" uint64_t func_803FD840_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803DC5F8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_803DD794_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_803DC5F8;

loc_803DC5F8:
{
    r4 = 0;
    r0 = 3;
    ctr = r0;
}

loc_803DC604:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
}

loc_803DC60C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803DC67C;
    }
}

loc_803DC610:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_803DC61C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803DC67C;
    }
}

loc_803DC620:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_803DC62C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803DC67C;
    }
}

loc_803DC630:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead32((r3 + 28));
}

loc_803DC63C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803DC67C;
    }
}

loc_803DC640:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead32((r3 + 32));
}

loc_803DC64C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803DC67C;
    }
}

loc_803DC650:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead32((r3 + 36));
}

loc_803DC65C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803DC67C;
    }
}

loc_803DC660:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead32((r3 + 40));
}

loc_803DC66C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803DC67C;
    }
}

loc_803DC670:
{
    r3 = (r3 + 28);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803DC604;
    }
}

loc_803DC67C:
{
}

loc_803DC680:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(21))) {
        goto loc_803DC6B8;
    }
}

loc_803DC684:
{
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = 0x80050000u;
    r4 = (r4 + 49);
    r5 = (r1 + 140);
    ctx->lr = 0x803DC698u;
    if constexpr (KnownRegArgsCpuCall<0x803FD840u>(&func_803FD840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803FD840_102D = func_803FD840_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803FD840_102D);
        r4 = static_cast<uint32_t>(regargs_result_803FD840_102D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803FD840u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = r26;
    r4 = 3;
    r5 = 0;
    r6 = MemoryInline::FlatRead32((r1 + 140));
    r7 = 1;
    r8 = (r1 + 140);
    r9 = MemoryInline::FlatRead32((r26 + 8));
    ctx->lr = 0x803DC6B8u;
    if constexpr (KnownRegArgsCpuCall<0x803DEED0u>(&func_803DEED0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_803DEED0_1468 = func_803DEED0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803DEED0_1468);
        r4 = static_cast<uint32_t>(regargs_result_803DEED0_1468 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DEED0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
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
    mkw_gqr0 = ctx->gqr[0];
}

loc_803DC6B8:
{
    r0 = MemoryInline::FlatRead32((r26 + 780));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 780), r0);
    r0 = MemoryInline::FlatRead32((r26 + 784));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 784), r0);
    r0 = MemoryInline::FlatRead32((r26 + 788));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 788), r0);
    r0 = MemoryInline::FlatRead32((r26 + 792));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 792), r0);
    r0 = MemoryInline::FlatRead32((r26 + 796));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 796), r0);
    r0 = MemoryInline::FlatRead32((r26 + 800));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 800), r0);
    r0 = MemoryInline::FlatRead32((r26 + 804));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 804), r0);
    r0 = MemoryInline::FlatRead32((r26 + 808));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 808), r0);
    r0 = MemoryInline::FlatRead32((r26 + 812));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 812), r0);
    r0 = MemoryInline::FlatRead32((r26 + 816));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 816), r0);
    r0 = MemoryInline::FlatRead32((r26 + 820));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 820), r0);
    r0 = MemoryInline::FlatRead32((r26 + 824));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 824), r0);
    r0 = MemoryInline::FlatRead32((r26 + 828));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 828), r0);
    r0 = MemoryInline::FlatRead32((r26 + 832));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 832), r0);
    r0 = MemoryInline::FlatRead32((r26 + 836));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 836), r0);
    r0 = MemoryInline::FlatRead32((r26 + 840));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 840), r0);
    r0 = MemoryInline::FlatRead32((r26 + 844));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 844), r0);
    r0 = MemoryInline::FlatRead32((r26 + 848));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 848), r0);
    r0 = MemoryInline::FlatRead32((r26 + 852));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 852), r0);
    r0 = MemoryInline::FlatRead32((r26 + 856));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 856), r0);
    r0 = MemoryInline::FlatRead32((r26 + 860));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r26 + 860), r0);
}

loc_803DD790:
{
    r0 = 824;
    addr_psqx_803DD794_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803DD794_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 816));
    r11 = (r1 + 816);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 836));
    ctx->lr = r0;
    r1 = (r1 + 832);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803DC5F8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803DC5F8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x04002FFF gpr_write=0xFFC01FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803DC5F8 func_803DC5F8 preserves=false fpr_mask=0x80000000
