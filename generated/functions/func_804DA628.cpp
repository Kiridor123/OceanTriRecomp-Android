#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CDCA0(CpuContext* ctx);
extern "C" uint64_t func_804CDCA0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804DA628_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_804DA628;

loc_804DA628:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r17), static_cast<uint32_t>(13));
}

loc_804DA630:
{
    r16 = (r0 + r18);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_804DA6E8;
    }
}

loc_804DA638:
{
    r3 = (r21 + -23352);
    r3_addr_0 = (r3 + r15);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    ctr = r3;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
}

loc_804DA6E8:
{
    r5 = MemoryInline::FlatRead32((r16 + 4));
}

loc_804DA6F0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804DA704;
    }
}

loc_804DA6F4:
{
    r4 = r17;
    r3 = (r19 + 80);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x804DA704u;
    if constexpr (KnownRegArgsCpuCall<0x804CDCA0u>(&func_804CDCA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CDCA0_1127 = func_804CDCA0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804CDCA0_1127);
        r4 = static_cast<uint32_t>(regargs_result_804CDCA0_1127 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CDCA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_804DA704:
{
    MemoryInline::FlatWrite32(r16, r20);
    r18 = (r18 + 8);
    r17 = (r17 + 1);
    r15 = (r15 + 4);
    r0 = MemoryInline::FlatRead32((r31 + 8));
}

loc_804DA71C:
{
    if ((static_cast<uint32_t>(r17) < static_cast<uint32_t>(r0))) {
        goto loc_804DA628;
    }
}

loc_804DA720:
{
    r3 = -1431633920;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 56), 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r31 + 60));
    r3 = (r3 + -21845);
    r4 = 0;
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r3) * static_cast<uint64_t>(r0)) >> 32));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r5 = (r5_rot_0 & 536870911);
}

loc_804DA738:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804DA834;
    }
}

loc_804DA73C:
{
}

loc_804DA740:
{
    r6 = (r5 + -8);
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(8))) {
        goto loc_804DA808;
    }
}

loc_804DA748:
{
    r0 = (r6 + 7);
    r3 = 0;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_804DA75C:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(0))) {
        goto loc_804DA808;
    }
}

loc_804DA760:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 56));
    r4 = (r4 + 8);
    r6_addr_2 = (r6 + r3);
    r0 = MemoryInline::FlatRead32(r6_addr_2);
    r0 = (r0 + r31);
    r6_addr_3 = (r6 + r3);
    MemoryInline::FlatWrite32(r6_addr_3, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 56));
    r6 = (r0 + r3);
    r0 = MemoryInline::FlatRead32((r6 + 12));
    r0 = (r0 + r31);
    MemoryInline::FlatWrite32((r6 + 12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 56));
    r6 = (r0 + r3);
    r0 = MemoryInline::FlatRead32((r6 + 24));
    r0 = (r0 + r31);
    MemoryInline::FlatWrite32((r6 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 56));
    r6 = (r0 + r3);
    r0 = MemoryInline::FlatRead32((r6 + 36));
    r0 = (r0 + r31);
    MemoryInline::FlatWrite32((r6 + 36), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 56));
    r6 = (r0 + r3);
    r0 = MemoryInline::FlatRead32((r6 + 48));
    r0 = (r0 + r31);
    MemoryInline::FlatWrite32((r6 + 48), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 56));
    r6 = (r0 + r3);
    r0 = MemoryInline::FlatRead32((r6 + 60));
    r0 = (r0 + r31);
    MemoryInline::FlatWrite32((r6 + 60), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 56));
    r6 = (r0 + r3);
    r0 = MemoryInline::FlatRead32((r6 + 72));
    r0 = (r0 + r31);
    MemoryInline::FlatWrite32((r6 + 72), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 56));
    r6 = (r0 + r3);
    r3 = (r3 + 96);
    r0 = MemoryInline::FlatRead32((r6 + 84));
    r0 = (r0 + r31);
    MemoryInline::FlatWrite32((r6 + 84), r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804DA760;
    }
}

loc_804DA808:
{
    r0 = (r5 - r4);
    r6 = (r4 * 12);
    ctr = r0;
}

loc_804DA818:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r5))) {
        goto loc_804DA834;
    }
}

loc_804DA81C:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 56));
    r3_addr_3 = (r3 + r6);
    r0 = MemoryInline::FlatRead32(r3_addr_3);
    r0 = (r0 + r31);
    r3_addr_4 = (r3 + r6);
    MemoryInline::FlatWrite32(r3_addr_4, r0);
    r6 = (r6 + 12);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804DA81C;
    }
}

loc_804DA834:
{
    r11 = (r1 + 80);
    r3 = 1;
    // inline leaf 0x804574A4 (18 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -68), 0, 68u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r15 = resolved_pair.first;
            r16 = resolved_pair.second;
        } else {
            r15 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -68));
            r16 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -64));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -60));
            r18 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -56));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -52));
            r20 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r11 + -4));
    // end of inlined leaf 0x804574A4
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804DA628(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804DA628_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x803FBFFF gpr_write=0xFFFF9FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804DA628 func_804DA628 preserves=true fpr_mask=0x00000000
