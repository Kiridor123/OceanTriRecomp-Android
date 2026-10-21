#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803EBB54(CpuContext* ctx);
extern "C" uint64_t func_803EBB54_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803FD840(CpuContext* ctx);
extern "C" uint64_t func_803FD840_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803EBC44_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x803EBC44u);
    goto loc_803EBC44;

loc_803EBC44:
{
    r5 = 0;
    r4 = r31;
    r0 = 3;
    ctr = r0;
}

loc_803EBC54:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_803EBC5C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803EBCCC;
    }
}

loc_803EBC60:
{
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_803EBC6C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803EBCCC;
    }
}

loc_803EBC70:
{
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead32((r4 + 20));
}

loc_803EBC7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803EBCCC;
    }
}

loc_803EBC80:
{
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead32((r4 + 24));
}

loc_803EBC8C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803EBCCC;
    }
}

loc_803EBC90:
{
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead32((r4 + 28));
}

loc_803EBC9C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803EBCCC;
    }
}

loc_803EBCA0:
{
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead32((r4 + 32));
}

loc_803EBCAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803EBCCC;
    }
}

loc_803EBCB0:
{
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead32((r4 + 36));
}

loc_803EBCBC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803EBCCC;
    }
}

loc_803EBCC0:
{
    r4 = (r4 + 28);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803EBC54;
    }
}

loc_803EBCCC:
{
}

loc_803EBCD0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(21))) {
        goto loc_803EBD20;
    }
}

loc_803EBCD4:
{
    r4 = 0;
    r0 = MemoryInline::FlatRead32((r3 + 448));
}

loc_803EBCE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803EBCE8;
    }
}

loc_803EBCE4:
{
    r4 = 1;
}

loc_803EBCE8:
{
}

loc_803EBCEC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_803EBD20;
    }
}

loc_803EBCF0:
{
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = 0x80060000u;
    r4 = (r4 + 51);
    r5 = (r1 + 304);
    ctx->lr = 0x803EBD04u;
    if constexpr (KnownRegArgsCpuCall<0x803FD840u>(&func_803FD840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803FD840_10B1 = func_803FD840_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803FD840_10B1);
        r4 = static_cast<uint32_t>(regargs_result_803FD840_10B1 >> 32);
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
    r3 = r31;
    r4 = 3;
    r5 = MemoryInline::FlatRead32((r1 + 304));
    r6 = 1;
    r7 = (r1 + 304);
    r8 = MemoryInline::FlatRead32((r31 + 8));
    ctx->lr = 0x803EBD20u;
    if constexpr (KnownRegArgsCpuCall<0x803EBB54u>(&func_803EBB54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_803EBB54_14A4 = func_803EBB54_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EBB54_14A4);
        r4 = static_cast<uint32_t>(regargs_result_803EBB54_14A4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        InvokeDirectCpu<0x803EBB54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
}

loc_803EBD20:
{
    r0 = MemoryInline::FlatRead32((r31 + 784));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 784), r0);
    r0 = MemoryInline::FlatRead32((r31 + 788));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 788), r0);
    r0 = MemoryInline::FlatRead32((r31 + 792));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 792), r0);
    r0 = MemoryInline::FlatRead32((r31 + 796));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 796), r0);
    r0 = MemoryInline::FlatRead32((r31 + 800));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 800), r0);
    r0 = MemoryInline::FlatRead32((r31 + 804));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 804), r0);
    r0 = MemoryInline::FlatRead32((r31 + 808));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 808), r0);
    r0 = MemoryInline::FlatRead32((r31 + 812));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 812), r0);
    r0 = MemoryInline::FlatRead32((r31 + 816));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 816), r0);
    r0 = MemoryInline::FlatRead32((r31 + 820));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 820), r0);
    r0 = MemoryInline::FlatRead32((r31 + 824));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 824), r0);
    r0 = MemoryInline::FlatRead32((r31 + 828));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 828), r0);
    r0 = MemoryInline::FlatRead32((r31 + 832));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 832), r0);
    r0 = MemoryInline::FlatRead32((r31 + 836));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 836), r0);
    r0 = MemoryInline::FlatRead32((r31 + 840));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 840), r0);
    r0 = MemoryInline::FlatRead32((r31 + 844));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 844), r0);
    r0 = MemoryInline::FlatRead32((r31 + 848));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 848), r0);
    r0 = MemoryInline::FlatRead32((r31 + 852));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 852), r0);
    r0 = MemoryInline::FlatRead32((r31 + 856));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 856), r0);
    r0 = MemoryInline::FlatRead32((r31 + 860));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 860), r0);
    r0 = MemoryInline::FlatRead32((r31 + 864));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 864), r0);
    r0 = MemoryInline::FlatRead32((r31 + 868));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 868), r0);
}

loc_803EDEF8:
{
    r11 = (r1 + 2880);
    // inline leaf 0x804574B8 (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x804574B8
    r0 = MemoryInline::FlatRead32((r1 + 2884));
    ctx->lr = r0;
    r1 = (r1 + 2880);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
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
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803EBC44(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803EBC44_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x80002FFF gpr_write=0xFFF01FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803EBC44 func_803EBC44 preserves=true fpr_mask=0x00000000
