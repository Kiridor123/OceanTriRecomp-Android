#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8047ABB0(CpuContext* ctx);
extern "C" uint64_t func_8047ABB0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804A22E0(CpuContext* ctx);
extern "C" uint64_t func_804A22E0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804A23AC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
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
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804A23ACu);
    goto loc_804A23AC;

loc_804A23AC:
{
}

loc_804A23B0:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_804A245C;
    }
}

loc_804A23B4:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_804A23BC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_804A245C;
    }
}

loc_804A23C0:
{
    r4 = MemoryInline::FlatRead8(r3);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r4 = (r4_rot_1 & -256);
    r0 = (r4 + r0);
    r0 = (r0 & 65535);
}

loc_804A23D8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_804A245C;
    }
}

loc_804A23DC:
{
    r5 = MemoryInline::FlatRead32((r23 + 104));
}

loc_804A23E4:
{
    r4 = MemoryInline::FlatRead32((r23 + 4));
    r30 = 0;
    r5 = (r5 + 12);
    r0 = (r4 + -12);
    MemoryInline::FlatWrite32((r23 + 104), r5);
    MemoryInline::FlatWrite32((r23 + 4), r0);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r3 + r0);
    r21 = (r4 + 2);
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(5))) {
        goto loc_804A2434;
    }
}

loc_804A240C:
{
    r3 = 0x80740000u;
    r3 = (r3 + -2048);
    r0 = MemoryInline::FlatRead8((r3 + 17968));
}

loc_804A241C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_804A242C;
    }
}

loc_804A2420:
{
    r4 = (r31 + 216);
    r3 = 655360;
    ctx->lr = 0x804A242Cu;
    if constexpr (KnownRegArgsCpuCall<0x8047ABB0u>(&func_8047ABB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8047ABB0_101D = func_8047ABB0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABB0_101D);
        r4 = static_cast<uint32_t>(regargs_result_8047ABB0_101D >> 32);
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
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8047ABB0u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_804A242C:
{
    r3 = r21;
    goto loc_804A2860;
}

loc_804A2434:
{
    r0 = (r27 + 1);
    r4 = r23;
    r5 = r24;
    r7 = r29;
    r8 = (r0 & 255);
    r6 = 4;
    r3 = (r3 + 2);
    ctx->lr = 0x804A2454u;
    if constexpr (KnownRegArgsCpuCall<0x804A22E0u>(&func_804A22E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_804A22E0_18B9 = func_804A22E0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A22E0_18B9);
        r4 = static_cast<uint32_t>(regargs_result_804A22E0_18B9 >> 32);
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
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x804A22E0u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r22 = r3;
    goto loc_804A27E0;
}

loc_804A245C:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_804A2464:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804A24E8;
    }
}

loc_804A2468:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804A247C;
    }
}

loc_804A246C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_804A2470:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804A2488;
    }
}

loc_804A2474:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804A2498;
    }
}

loc_804A2478:
{
    goto loc_804A24E8;
}

loc_804A247C:
{
}

loc_804A2480:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(5))) {
        goto loc_804A24E8;
    }
}

loc_804A2484:
{
    goto loc_804A24B4;
}

loc_804A2488:
{
    r0 = MemoryInline::FlatRead8(r3);
    r22 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 8), static_cast<uint8_t>(r0));
    goto loc_804A27E0;
}

loc_804A2498:
{
    r4 = MemoryInline::FlatRead8(r3);
    r22 = (r3 + 2);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r3 = (r3_rot_1 & -256);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r0));
    goto loc_804A27E0;
}

loc_804A24B4:
{
    r5 = MemoryInline::FlatRead8(r3);
    r22 = (r3 + 4);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r4 = MemoryInline::FlatRead8((r3 + 1));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r6 = (r6_rot_1 & -16777216);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & -256);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r5 = (r5_rot_1 & -65536);
    r4 = MemoryInline::FlatRead8((r3 + 3));
    r3 = (r6 + r5);
    r0 = (r4 + r0);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r29 + 8), r0);
    goto loc_804A27E0;
}

loc_804A24E8:
{
    r3 = (r29 + 8);
    r4 = 0;
    goto loc_804A2508;
}

loc_804A24F4:
{
    r0 = MemoryInline::FlatRead8(r22);
    r4 = (r4 + 1);
    r22 = (r22 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
}

loc_804A2508:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_804A2510:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_804A24F4;
    }
}

loc_804A2514:
{
}

loc_804A27E0:
{
    r3 = MemoryInline::FlatRead32((r23 + 104));
}

loc_804A27E8:
{
    r0 = MemoryInline::FlatRead32((r23 + 4));
    r3 = (r3 + r30);
    r0 = (r0 - r30);
    MemoryInline::FlatWrite32((r23 + 104), r3);
    MemoryInline::FlatWrite32((r23 + 4), r0);
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_804A2830;
    }
}

loc_804A2800:
{
    r3 = MemoryInline::FlatRead32(r24);
}

loc_804A2808:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A281C;
    }
}

loc_804A280C:
{
    MemoryInline::FlatWrite32(r24, r29);
    goto loc_804A285C;
}

loc_804A2818:
{
    r3 = r0;
}

loc_804A281C:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_804A2824:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A2818;
    }
}

loc_804A2828:
{
    MemoryInline::FlatWrite32(r3, r29);
    goto loc_804A285C;
}

loc_804A2830:
{
    r3 = MemoryInline::FlatRead32((r26 + 8));
}

loc_804A2838:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A284C;
    }
}

loc_804A283C:
{
    MemoryInline::FlatWrite32((r26 + 8), r29);
    goto loc_804A285C;
}

loc_804A2848:
{
    r3 = r0;
}

loc_804A284C:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_804A2854:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A2848;
    }
}

loc_804A2858:
{
    MemoryInline::FlatWrite32(r3, r29);
}

loc_804A285C:
{
    r3 = r22;
}

loc_804A2860:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574BC (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r11 + -4));
    // end of inlined leaf 0x804574BC
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804A23AC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804A23AC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0xFDE027FF gpr_write=0xFFE01FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804A23AC func_804A23AC preserves=true fpr_mask=0x00000000
