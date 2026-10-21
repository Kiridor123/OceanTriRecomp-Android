#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8047ABF0(CpuContext* ctx);
extern "C" uint64_t func_8047ABF0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804A13C4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
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

    MKW_GUEST_ENTER(0x804A13C4u);
    goto loc_804A13C4;

loc_804A13C4:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r27 = 0x80740000u;
    r25 = r3;
    r27 = (r27 + -2048);
    r26 = r4;
    r31 = (r27 + 4644);
    r3 = 0;
    r28 = 655360;
    r29 = 0x80620000u;
    goto loc_804A15D4;
}

loc_804A13FC:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_804A1404:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r25))) {
        goto loc_804A15CC;
    }
}

loc_804A1408:
{
    r0 = MemoryInline::FlatRead8((r27 + 17968));
    r30 = (r31 + 12);
}

loc_804A1414:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(3))) {
        goto loc_804A142C;
    }
}

loc_804A1418:
{
    r5 = r26;
    r6 = r25;
    r3 = (r28 + 2);
    r4 = (r29 + -30848);
    ctx->lr = 0x804A142Cu;
    if constexpr (KnownRegArgsCpuCall<0x8047ABF0u>(&func_8047ABF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_8047ABF0_BDF = func_8047ABF0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABF0_BDF);
        r4 = static_cast<uint32_t>(regargs_result_8047ABF0_BDF >> 32);
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
        InvokeDirectCpu<0x8047ABF0u>(ctx);
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

loc_804A142C:
{
    r4 = MemoryInline::FlatRead16((r31 + 8));
    r3 = 0;
    goto loc_804A15C0;
}

loc_804A1438:
{
    r0 = MemoryInline::FlatRead16((r30 + 8));
}

loc_804A1440:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r26))) {
        goto loc_804A15B8;
    }
}

loc_804A1444:
{
    r0 = MemoryInline::FlatRead32(r30);
    r4 = MemoryInline::FlatRead32((r30 + 4));
}

loc_804A1450:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804A1490;
    }
}

loc_804A1454:
{
    r7 = 0;
    goto loc_804A1480;
}

loc_804A145C:
{
    r5 = (r7 & 65535);
    r5 = (r5 * 12);
    r6 = (r31 + r5);
    r5 = MemoryInline::FlatRead32((r6 + 16));
}

loc_804A1470:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r4))) {
        goto loc_804A147C;
    }
}

loc_804A1474:
{
    r5 = (r5 - r0);
    MemoryInline::FlatWrite32((r6 + 16), r5);
}

loc_804A147C:
{
    r7 = (r7 + 1);
}

loc_804A1480:
{
    r5 = MemoryInline::FlatRead16((r31 + 8));
    r6 = (r7 & 65535);
}

loc_804A148C:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r5))) {
        goto loc_804A145C;
    }
}

loc_804A1490:
{
    r5 = MemoryInline::FlatRead16((r31 + 8));
    r5 = (r5 + -1);
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r5));
    goto loc_804A14C0;
}

loc_804A14A0:
{
    r6 = MemoryInline::FlatRead32((r30 + 12));
    r3 = (r3 + 1);
    r5 = MemoryInline::FlatRead32((r30 + 16));
    MemoryInline::FlatWrite32(r30, r6);
    MemoryInline::FlatWrite32((r30 + 4), r5);
    r5 = MemoryInline::FlatRead32((r30 + 20));
    MemoryInline::FlatWrite32((r30 + 8), r5);
    r30 = (r30 + 12);
}

loc_804A14C0:
{
    r5 = MemoryInline::FlatRead16((r31 + 8));
    r6 = (r3 & 65535);
}

loc_804A14CC:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r5))) {
        goto loc_804A14A0;
    }
}

loc_804A14D0:
{
}

loc_804A14D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804A15B0;
    }
}

loc_804A14D8:
{
    r5 = (r31 + 312);
    r6 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r5 = (r6 - r5);
    r7 = 0;
    r3 = (r3 - r5);
    r8 = (r3 & 65535);
}

loc_804A14F4:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_804A15A4;
    }
}

loc_804A14F8:
{
}

loc_804A14FC:
{
    r3 = (r8 + 65536);
    r3 = (r3 + -8);
    if ((static_cast<uint32_t>(r8) <= static_cast<uint32_t>(8))) {
        goto loc_804A1574;
    }
}

loc_804A1508:
{
    r5 = (r3 & 65535);
    r3 = (r5 + 7);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r3 = (r3_rot_1 & 536870911);
    ctr = r3;
}

loc_804A151C:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(0))) {
        goto loc_804A1574;
    }
}

loc_804A1520:
{
    r3 = MemoryInline::FlatRead8(r6);
    r5 = (r4 + r0);
    r7 = (r7 + 8);
    r6 = (r6 + 8);
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r4, static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r5 + 1));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r4 + 1), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r5 + 2));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r4 + 2), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r5 + 3));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r4 + 3), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r5 + 4));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r4 + 4), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r5 + 5));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r4 + 5), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r5 + 6));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r4 + 6), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r5 + 7));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r4 + 7), static_cast<uint8_t>(r3));
    r4 = (r4 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804A1520;
    }
}

loc_804A1574:
{
    r6 = (r7 & 65535);
    r5 = (r0 + r4);
    r3 = (r8 - r6);
    ctr = r3;
}

loc_804A1588:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r8))) {
        goto loc_804A15A4;
    }
}

loc_804A158C:
{
    r3 = MemoryInline::FlatRead8(r5);
    r7 = (r7 + 1);
    r5 = (r5 + 1);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r3));
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804A158C;
    }
}

loc_804A15A4:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r3 - r0);
    MemoryInline::FlatWrite32((r31 + 4), r0);
}

loc_804A15B0:
{
    r3 = 1;
    goto loc_804A15E8;
}

loc_804A15B8:
{
    r3 = (r3 + 1);
    r30 = (r30 + 12);
}

loc_804A15C0:
{
    r0 = (r3 & 65535);
}

loc_804A15C8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_804A1438;
    }
}

loc_804A15CC:
{
    r3 = (r3 + 1);
    r31 = (r31 + 664);
}

loc_804A15D4:
{
    r0 = MemoryInline::FlatRead16((r27 + 4642));
    r4 = (r3 & 65535);
}

loc_804A15E0:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_804A13FC;
    }
}

loc_804A15E4:
{
    r3 = 0;
}

loc_804A15E8:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804A13C4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804A13C4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804A13C4 func_804A13C4 preserves=true fpr_mask=0x00000000
