#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D55B4(CpuContext* ctx);
extern "C" uint64_t func_800D55B4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800D5758(CpuContext* ctx);
extern "C" uint64_t func_800D5758_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800F7CD8(CpuContext* ctx);
extern "C" uint64_t func_800F7CD8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_800F83BC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
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
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x800F83BCu);
    goto loc_800F83BC;

loc_800F83BC:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x8045745C (17 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, false, true);
    // end of inlined leaf 0x8045745C
    r19 = r4;
    r20 = r6;
    r3 = 0x806A0000u;
    r29 = (r3 + 17776);
    r3 = 0x806A0000u;
    r26 = (r3 + 20916);
    r21 = MemoryInline::FlatRead32(r6);
    // inline leaf 0x800B28DC (3 guest instruction(s))
    r3 = 0x80690000u;
    r3 = (r3 + 27160);
    // end of inlined leaf 0x800B28DC
    r28 = r3;
    r24 = MemoryInline::FlatRead32((r20 + 8));
    r3 = r19;
    // inline leaf 0x800CF6FC (12 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r3 = (r3_rot_0 & 255);
    r0 = (r5 & 16711680);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r4 = (r3 | r0);
    r0 = (r5 & 255);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r3 = (r3_rot_1 & -16777216);
    r0 = (r5 & 65280);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_0 & -256);
    r0 = (r3 | r0);
    r3 = (r4 | r0);
    // end of inlined leaf 0x800CF6FC
    r30 = r3;
    r22 = MemoryInline::FlatRead32((r20 + 12));
    r23 = 0;
    r31 = 0;
    r16 = 2;
    r3 = 0x80000000u;
    r17 = (r3 + -1);
    r18 = 128;
    goto loc_800F8678;
}

loc_800F8424:
{
    r0 = MemoryInline::FlatRead32((r20 + 4));
    r0 = (r0 & 65535);
    r0 = (r0 + r23);
    r4 = (r0 & 65535);
}

loc_800F8438:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(255))) {
        goto loc_800F8440;
    }
}

loc_800F843C:
{
    r4 = 0;
}

loc_800F8440:
{
    r5 = 0;
    ctr = r18;
}

loc_800F8448:
{
    r3 = (r4 & 65535);
}

loc_800F8450:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(255))) {
        goto loc_800F845C;
    }
}

loc_800F8454:
{
    r0 = (r3 + -256);
    r3 = (r0 & 65535);
}

loc_800F845C:
{
    r0 = (r3 * 24);
    r3 = (r26 + r0);
    r27 = (r3 + 4);
    r3 = MemoryInline::FlatRead8((r27 + 4));
    r0 = MemoryInline::FlatRead8(r21);
}

loc_800F8474:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_800F84A8;
    }
}

loc_800F8478:
{
    r0 = MemoryInline::FlatRead8(r27);
}

loc_800F8480:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800F84A8;
    }
}

loc_800F8484:
{
}

loc_800F8488:
{
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(3))) {
        goto loc_800F849C;
    }
}

loc_800F848C:
{
    r0 = MemoryInline::FlatRead8((r27 + 1));
}

loc_800F8494:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(r0))) {
        goto loc_800F851C;
    }
}

loc_800F8498:
{
    goto loc_800F84A8;
}

loc_800F849C:
{
    r0 = MemoryInline::FlatRead8((r27 + 1));
}

loc_800F84A4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_800F851C;
    }
}

loc_800F84A8:
{
    r4 = (r4 + 1);
    r5 = (r5 + 1);
    r3 = (r4 & 65535);
}

loc_800F84B8:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(255))) {
        goto loc_800F84C4;
    }
}

loc_800F84BC:
{
    r0 = (r3 + -256);
    r3 = (r0 & 65535);
}

loc_800F84C4:
{
    r0 = (r3 * 24);
    r3 = (r26 + r0);
    r27 = (r3 + 4);
    r3 = MemoryInline::FlatRead8((r27 + 4));
    r0 = MemoryInline::FlatRead8(r21);
}

loc_800F84DC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_800F8510;
    }
}

loc_800F84E0:
{
    r0 = MemoryInline::FlatRead8(r27);
}

loc_800F84E8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800F8510;
    }
}

loc_800F84EC:
{
}

loc_800F84F0:
{
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(3))) {
        goto loc_800F8504;
    }
}

loc_800F84F4:
{
    r0 = MemoryInline::FlatRead8((r27 + 1));
}

loc_800F84FC:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(r0))) {
        goto loc_800F851C;
    }
}

loc_800F8500:
{
    goto loc_800F8510;
}

loc_800F8504:
{
    r0 = MemoryInline::FlatRead8((r27 + 1));
}

loc_800F850C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_800F851C;
    }
}

loc_800F8510:
{
    r4 = (r4 + 1);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800F8448;
    }
}

loc_800F851C:
{
}

loc_800F8520:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(255))) {
        goto loc_800F8680;
    }
}

loc_800F8524:
{
    r3 = r19;
    r4 = r23;
    // inline leaf 0x800CF72C (15 guest instruction(s))
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r4 = (r3 + r0);
    r6 = MemoryInline::FlatRead32((r4 + 4));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r4 = (r4_rot_2 & 255);
    r0 = (r6 & 16711680);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r5 = (r4 | r0);
    r0 = (r6 & 255);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r4 = (r4_rot_3 & -16777216);
    r0 = (r6 & 65280);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_3 & -256);
    r0 = (r4 | r0);
    r0 = (r5 | r0);
    r3 = (r3 + r0);
    // end of inlined leaf 0x800CF72C
    r25 = r3;
    MemoryInline::FlatWrite32((r27 + 16), r31);
    MemoryInline::FlatWrite32((r27 + 20), r31);
    r0 = MemoryInline::FlatRead8((r27 + 1));
}

loc_800F8544:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_800F855C;
    }
}

loc_800F8548:
{
}

loc_800F854C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800F85A8;
    }
}

loc_800F8550:
{
}

loc_800F8554:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800F8604;
    }
}

loc_800F8558:
{
    goto loc_800F8664;
}

loc_800F855C:
{
    r0 = MemoryInline::FlatRead32((r29 + 56));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r27 + 6), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32(r24);
    r4 = r25;
    ctx->lr = 0x800F8574u;
    if constexpr (KnownRegArgsCpuCall<0x800D5758u>(&func_800D5758)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_800D5758_22F5 = func_800D5758_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800D5758_22F5);
        r4 = static_cast<uint32_t>(regargs_result_800D5758_22F5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D5758u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
    MemoryInline::FlatWrite32((r27 + 12), r3);
    r5 = MemoryInline::FlatRead32((r27 + 12));
    r4 = MemoryInline::FlatRead32((r29 + 56));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r29 + r0);
    MemoryInline::FlatWrite32((r3 + 2108), r5);
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r29 + 56), r0);
    r3 = MemoryInline::FlatRead8((r26 + 1));
    MemoryInline::FlatWrite8((r27 + 5), static_cast<uint8_t>(r3));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r26 + 1), static_cast<uint8_t>(r0));
    goto loc_800F8664;
}

loc_800F85A8:
{
    r0 = MemoryInline::FlatRead32((r29 + 48));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r27 + 6), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32(r24);
    r4 = r25;
    ctx->lr = 0x800F85C0u;
    if constexpr (KnownRegArgsCpuCall<0x800D55B4u>(&func_800D55B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_800D55B4_2A28 = func_800D55B4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800D55B4_2A28);
        r4 = static_cast<uint32_t>(regargs_result_800D55B4_2A28 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D55B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
    MemoryInline::FlatWrite32((r27 + 12), r3);
    r5 = MemoryInline::FlatRead32((r27 + 12));
    r4 = MemoryInline::FlatRead32((r29 + 48));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r29 + r0);
    MemoryInline::FlatWrite32((r3 + 60), r5);
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r29 + 48), r0);
    r3 = r28;
    r4 = r25;
    ctx->lr = 0x800F85ECu;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800B36D4u>(ctx);
    r0 = ctx->gpr[0];
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
    ctr = ctx->ctr;
    MemoryInline::FlatWrite32((r27 + 16), r3);
    r3 = MemoryInline::FlatRead8((r26 + 2));
    MemoryInline::FlatWrite8((r27 + 5), static_cast<uint8_t>(r3));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r26 + 2), static_cast<uint8_t>(r0));
    goto loc_800F8664;
}

loc_800F8604:
{
    r0 = MemoryInline::FlatRead32((r29 + 52));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r27 + 6), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32(r24);
    r4 = r25;
    ctx->lr = 0x800F861Cu;
    if constexpr (KnownRegArgsCpuCall<0x800D55B4u>(&func_800D55B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_800D55B4_3490 = func_800D55B4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800D55B4_3490);
        r4 = static_cast<uint32_t>(regargs_result_800D55B4_3490 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D55B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
    MemoryInline::FlatWrite32((r27 + 12), r3);
    r5 = MemoryInline::FlatRead32((r27 + 12));
    r4 = MemoryInline::FlatRead32((r29 + 52));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r29 + r0);
    MemoryInline::FlatWrite32((r3 + 1084), r5);
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r29 + 52), r0);
    r3 = r28;
    r4 = r25;
    ctx->lr = 0x800F8648u;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800B3EE4u>(ctx);
    r0 = ctx->gpr[0];
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
    ctr = ctx->ctr;
    MemoryInline::FlatWrite32((r27 + 20), r3);
    r3 = MemoryInline::FlatRead8((r26 + 3));
    MemoryInline::FlatWrite8((r27 + 5), static_cast<uint8_t>(r3));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r26 + 3), static_cast<uint8_t>(r0));
    r3 = 1;
    ctx->lr = 0x800F8664u;
    if constexpr (KnownRegArgsCpuCall<0x800F7CD8u>(&func_800F7CD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_800F7CD8_3E13 = func_800F7CD8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F7CD8_3E13);
        r4 = static_cast<uint32_t>(regargs_result_800F7CD8_3E13 >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800F7CD8u>(ctx);
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
        ctr = ctx->ctr;
    }
}

loc_800F8664:
{
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r16));
    MemoryInline::FlatWrite32((r27 + 8), r17);
    r24 = (r24 + 4);
    r23 = (r23 + 1);
    r21 = (r21 + 1);
}

loc_800F8678:
{
}

loc_800F867C:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(r30))) {
        goto loc_800F8424;
    }
}

loc_800F8680:
{
    r11 = (r1 + 80);
    // inline leaf 0x804574A8 (17 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, true, false);
    // end of inlined leaf 0x804574A8
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800F83BC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800F83BC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800F83BC func_800F83BC preserves=true fpr_mask=0x00000000
