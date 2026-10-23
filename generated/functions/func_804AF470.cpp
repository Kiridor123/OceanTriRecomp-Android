#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804AEF00(CpuContext* ctx);
extern "C" uint64_t func_804AEF00_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804AF040(CpuContext* ctx);
extern "C" uint64_t func_804AF040_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804AF790(CpuContext* ctx);
extern "C" uint64_t func_804AF790_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804AF470_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r7_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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

    goto loc_804AF470;

loc_804AF470:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r24 = r5;
    r25 = r6;
    r5 = (0 - r3);
    r6 = -1;
    r9 = 1;
    r0 = (0 - r24);
    MemoryInline::FlatWriteRam32((r1 + 20), r6);
    r5 = (r5 | r3);
    r22 = r3;
    r0 = (r0 | r24);
    MemoryInline::FlatWriteRam32((r1 + 16), r6);
    r26 = r7;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r23 = r4;
    MemoryInline::FlatWriteRam32((r1 + 12), r9);
    r8 = r25;
    r5 = (r1 + 16);
    r6 = (r1 + 12);
    MemoryInline::FlatWriteRam32((r1 + 8), r9);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r7 = (r7_rot_0 & 1);
    r9 = (r1 + 20);
    r10 = (r1 + 8);
    r30 = 0;
    r29 = 0;
    ctx->lr = 0x804AF4E8u;
    if constexpr (KnownRegArgsCpuCall<0x804AEF00u>(&func_804AEF00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        const auto regargs_result_804AEF00_F4D = func_804AEF00_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804AEF00_F4D);
        r4 = static_cast<uint32_t>(regargs_result_804AEF00_F4D >> 32);
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
        InvokeDirectCpu<0x804AEF00u>(ctx);
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
    }
}

loc_804AF4EC:
{
    r28 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804AF4F8;
    }
}

loc_804AF4F4:
{
    goto loc_804AF76C;
}

loc_804AF4F8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
}

loc_804AF500:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_804AF510;
    }
}

loc_804AF504:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_804AF50C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804AF72C;
    }
}

loc_804AF510:
{
    r0 = MemoryInline::FlatRead8(r24);
}

loc_804AF518:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(239))) {
        goto loc_804AF72C;
    }
}

loc_804AF51C:
{
    r0 = MemoryInline::FlatRead8((r24 + 1));
}

loc_804AF524:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(187))) {
        goto loc_804AF72C;
    }
}

loc_804AF528:
{
    r0 = MemoryInline::FlatRead8((r24 + 2));
}

loc_804AF530:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(191))) {
        goto loc_804AF72C;
    }
}

loc_804AF534:
{
    r30 = 3;
    r24 = (r24 + 3);
    goto loc_804AF72C;
}

loc_804AF540:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
}

loc_804AF548:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r0))) {
        goto loc_804AF560;
    }
}

loc_804AF54C:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
}

loc_804AF554:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804AF560;
    }
}

loc_804AF558:
{
    r28 = -1;
    goto loc_804AF750;
}

loc_804AF560:
{
}

loc_804AF564:
{
    if ((static_cast<int32_t>(r26) <= static_cast<int32_t>(0))) {
        goto loc_804AF60C;
    }
}

loc_804AF568:
{
    r0 = (r3 - r30);
    r3 = r31;
}

loc_804AF574:
{
    r4 = 0;
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(1))) {
        goto loc_804AF588;
    }
}

loc_804AF57C:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_804AF584:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804AF58C;
    }
}

loc_804AF588:
{
    r4 = 1;
}

loc_804AF58C:
{
}

loc_804AF590:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804AF59C;
    }
}

loc_804AF594:
{
    r4 = MemoryInline::FlatRead8((r24 + 1));
    goto loc_804AF5A0;
}

loc_804AF59C:
{
    r4 = 0;
}

loc_804AF5A0:
{
    // inline leaf 0x804AF000 (13 guest instruction(s))
}

loc_inl1_0x804AF000:
{
}

loc_inl1_0x804AF004:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(10))) {
        goto loc_inl1_0x804AF010;
    }
}

loc_inl1_0x804AF008:
{
    r3 = 1;
    goto loc_inl1_cont_804AF000;
}

loc_inl1_0x804AF010:
{
}

loc_inl1_0x804AF014:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(13))) {
        goto loc_inl1_0x804AF02C;
    }
}

loc_inl1_0x804AF018:
{
    r0 = (r4 + -10);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 134217727);
    r3 = (r3 + 1);
    goto loc_inl1_cont_804AF000;
}

loc_inl1_0x804AF02C:
{
    r3 = 0;
}

loc_inl1_cont_804AF000:
{
    // end of inlined leaf 0x804AF000
}

loc_804AF5A8:
{
    r27 = r3;
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_804AF60C;
    }
}

loc_804AF5B0:
{
    r6 = MemoryInline::FlatRead32((r1 + 12));
    r3 = r22;
    r5 = r26;
    r4 = 2;
    ctx->lr = 0x804AF5C4u;
    if constexpr (KnownRegArgsCpuCall<0x804AF040u>(&func_804AF040)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804AF040_25B9 = func_804AF040_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804AF040_25B9);
        r4 = static_cast<uint32_t>(regargs_result_804AF040_25B9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x804AF040u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r0 = (r0 - r29);
}

loc_804AF5D0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_804AF5E8;
    }
}

loc_804AF5D4:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
}

loc_804AF5DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804AF5E8;
    }
}

loc_804AF5E0:
{
    r28 = -1;
    goto loc_804AF750;
}

loc_804AF5E8:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r24 = (r24 + r27);
    r30 = (r30 + r27);
    r29 = (r29 + r3);
}

loc_804AF5FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804AF72C;
    }
}

loc_804AF600:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r22 = (r22 + r0);
    goto loc_804AF72C;
}

loc_804AF60C:
{
}

loc_804AF610:
{
    if ((static_cast<uint32_t>(r31) >= static_cast<uint32_t>(128))) {
        goto loc_804AF638;
    }
}

loc_804AF614:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
}

loc_804AF61C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804AF628;
    }
}

loc_804AF620:
{
    MemoryInline::FlatWrite16(r22, static_cast<uint16_t>(r31));
    r22 = (r22 + 2);
}

loc_804AF628:
{
    r29 = (r29 + 1);
    r24 = (r24 + 1);
    r30 = (r30 + 1);
    goto loc_804AF72C;
}

loc_804AF638:
{
    r0 = (r31 & 224);
}

loc_804AF640:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(192))) {
        goto loc_804AF650;
    }
}

loc_804AF644:
{
    r31 = 2;
    r27 = 1;
    goto loc_804AF688;
}

loc_804AF650:
{
    r0 = (r31 & 240);
}

loc_804AF658:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(224))) {
        goto loc_804AF668;
    }
}

loc_804AF65C:
{
    r31 = 3;
    r27 = 1;
    goto loc_804AF688;
}

loc_804AF668:
{
    r0 = (r31 & 248);
}

loc_804AF670:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(240))) {
        goto loc_804AF680;
    }
}

loc_804AF674:
{
    r31 = 4;
    r27 = 2;
    goto loc_804AF688;
}

loc_804AF680:
{
    r28 = -4;
    goto loc_804AF750;
}

loc_804AF688:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r0 = (r0 - r30);
}

loc_804AF694:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r31))) {
        goto loc_804AF6A4;
    }
}

loc_804AF698:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_804AF6A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804AF750;
    }
}

loc_804AF6A4:
{
    r3 = r24;
    r4 = r31;
    if constexpr (KnownRegArgsCpuCall<0x804AF790u>(&func_804AF790)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804AF790_3417 = func_804AF790_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804AF790_3417);
        r4 = static_cast<uint32_t>(regargs_result_804AF790_3417 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804AF790u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_804AF6B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804AF6C0;
    }
}

loc_804AF6B8:
{
    r28 = -4;
    goto loc_804AF750;
}

loc_804AF6C0:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
}

loc_804AF6C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804AF720;
    }
}

loc_804AF6CC:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r0 = (r0 - r29);
}

loc_804AF6D8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r27))) {
        goto loc_804AF6E4;
    }
}

loc_804AF6DC:
{
    r28 = -1;
    goto loc_804AF750;
}

loc_804AF6E4:
{
}

loc_804AF6E8:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(1))) {
        goto loc_804AF6F0;
    }
}

loc_804AF6EC:
{
    MemoryInline::FlatWrite16(r22, static_cast<uint16_t>(r3));
}

loc_804AF6F0:
{
}

loc_804AF6F4:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(2))) {
        goto loc_804AF718;
    }
}

loc_804AF6F8:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(22));
    r4 = (r4_rot_2 & 4194303);
    r3 = (r3 & 1023);
    r4 = (r4 + 65536);
    r0 = (r4 + -10304);
    MemoryInline::FlatWrite16(r22, static_cast<uint16_t>(r0));
    r3 = (r3 + 65536);
    r0 = (r3 + -9216);
    MemoryInline::FlatWrite16((r22 + 2), static_cast<uint16_t>(r0));
}

loc_804AF718:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r22 = (r22 + r0);
}

loc_804AF720:
{
    r29 = (r29 + r27);
    r24 = (r24 + r31);
    r30 = (r30 + r31);
}

loc_804AF72C:
{
    r31 = MemoryInline::FlatRead8(r24);
}

loc_804AF734:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_804AF750;
    }
}

loc_804AF738:
{
    r3 = MemoryInline::FlatRead32((r1 + 20));
}

loc_804AF740:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r3))) {
        goto loc_804AF540;
    }
}

loc_804AF744:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_804AF74C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804AF540;
    }
}

loc_804AF750:
{
}

loc_804AF754:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_804AF75C;
    }
}

loc_804AF758:
{
    MemoryInline::FlatWrite32(r25, r30);
}

loc_804AF75C:
{
}

loc_804AF760:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_804AF768;
    }
}

loc_804AF764:
{
    MemoryInline::FlatWrite32(r23, r29);
}

loc_804AF768:
{
    r3 = r28;
}

loc_804AF76C:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804AF470(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804AF470_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804AF470 func_804AF470 preserves=true fpr_mask=0x00000000
