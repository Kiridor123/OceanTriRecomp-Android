#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804E6680(CpuContext* ctx);
extern "C" uint64_t func_804E6680_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80525160(CpuContext* ctx);
extern "C" uint64_t func_80525160_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80526C20(CpuContext* ctx);
extern "C" uint64_t func_80526C20_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_805253F0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r20_rot_0 = 0;
    uint32_t r20_rot_1 = 0;
    uint32_t r20_rot_2 = 0;
    uint32_t r20_rot_3 = 0;
    uint32_t r20_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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

    MKW_GUEST_ENTER(0x805253F0u);
    goto loc_805253F0;

loc_805253F0:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
    r0 = MemoryInline::FlatRead32((r13 + -13544));
    r26 = r3;
    r27 = r4;
}

loc_80525414:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(7))) {
        goto loc_80525664;
    }
}

loc_80525418:
{
    r0 = MemoryInline::FlatRead32((r13 + -13488));
}

loc_80525420:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_80525664;
    }
}

loc_80525424:
{
}

loc_80525428:
{
    r31 = 0;
    r30 = 0;
    r29 = 0;
    r28 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80525458;
    }
}

loc_8052543C:
{
}

loc_80525440:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-7008))) {
        goto loc_80525458;
    }
}

loc_80525444:
{
}

loc_80525448:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-7009))) {
        goto loc_80525458;
    }
}

loc_8052544C:
{
    r0 = (r3 + 7015);
}

loc_80525454:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8052551C;
    }
}

loc_80525458:
{
    r21 = 0;
    r22 = 0;
    r23 = 0;
    r25 = 0;
    r24 = 32;
}

loc_8052546C:
{
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r3_addr_2 = (r3 + r23);
    r0 = MemoryInline::FlatRead16(r3_addr_2);
    r4 = (r0 & 4095);
    r20_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
    r20 = (r20_rot_2 & 15);
}

loc_80525480:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(32))) {
        goto loc_8052548C;
    }
}

loc_80525484:
{
}

loc_80525488:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_805254BC;
    }
}

loc_8052548C:
{
}

loc_80525490:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(22))) {
        goto loc_8052549C;
    }
}

loc_80525494:
{
}

loc_80525498:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(9))) {
        goto loc_805254BC;
    }
}

loc_8052549C:
{
}

loc_805254A0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(24))) {
        goto loc_805254AC;
    }
}

loc_805254A4:
{
}

loc_805254A8:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(9))) {
        goto loc_805254BC;
    }
}

loc_805254AC:
{
}

loc_805254B0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(16))) {
        goto loc_805254CC;
    }
}

loc_805254B4:
{
}

loc_805254B8:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(9))) {
        goto loc_805254CC;
    }
}

loc_805254BC:
{
    r0 = MemoryInline::FlatRead32(r27);
    r3 = (r0 + r21);
    ctx->lr = 0x805254C8u;
    if constexpr (KnownRegArgsCpuCall<0x80526C20u>(&func_80526C20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_80526C20_155B = func_80526C20_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80526C20_155B);
        r4 = static_cast<uint32_t>(regargs_result_80526C20_155B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80526C20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
    goto loc_805254D0;
}

loc_805254CC:
{
    r31 = 1;
}

loc_805254D0:
{
    r3 = MemoryInline::FlatRead32((r27 + 8));
}

loc_805254D8:
{
    r21 = (r21 + 32);
    r3_addr_3 = (r3 + r23);
    MemoryInline::FlatWrite16(r3_addr_3, static_cast<uint16_t>(r24));
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_80525508;
    }
}

loc_805254E4:
{
}

loc_805254E8:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(8))) {
        goto loc_80525508;
    }
}

loc_805254EC:
{
}

loc_805254F0:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(9))) {
        goto loc_80525508;
    }
}

loc_805254F4:
{
}

loc_805254F8:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(14))) {
        goto loc_80525508;
    }
}

loc_805254FC:
{
}

loc_80525500:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(15))) {
        goto loc_80525508;
    }
}

loc_80525504:
{
    MemoryInline::FlatWrite32((r13 + -13492), r25);
}

loc_80525508:
{
    r22 = (r22 + 1);
    r23 = (r23 + 2);
}

loc_80525514:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(8))) {
        goto loc_8052546C;
    }
}

loc_80525518:
{
    goto loc_8052554C;
}

loc_8052551C:
{
}

loc_80525520:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-6))) {
        goto loc_8052552C;
    }
}

loc_80525524:
{
}

loc_80525528:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-7022))) {
        goto loc_80525534;
    }
}

loc_8052552C:
{
    r30 = 1;
    goto loc_8052554C;
}

loc_80525534:
{
    r0 = MemoryInline::FlatRead32((r13 + -13492));
}

loc_8052553C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80525548;
    }
}

loc_80525540:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -13492), r0);
}

loc_80525548:
{
    r31 = 1;
}

loc_8052554C:
{
    r3 = MemoryInline::FlatRead32((r13 + -13492));
}

loc_80525554:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_8052556C;
    }
}

loc_80525558:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r13 + -13492), r0);
}

loc_80525564:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(200))) {
        goto loc_8052556C;
    }
}

loc_80525568:
{
    r28 = 1;
}

loc_8052556C:
{
}

loc_80525570:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_805255A4;
    }
}

loc_80525574:
{
}

loc_80525578:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_805255A4;
    }
}

loc_8052557C:
{
    r6 = 0x80520000u;
    r3 = MemoryInline::FlatRead32((r13 + -13404));
    r5 = r27;
    r4 = 129;
    r6 = (r6 + 21488);
    r7 = 0;
    ctx->lr = 0x80525598u;
    if constexpr (KnownRegArgsCpuCall<0x804E6680u>(&func_804E6680)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_804E6680_244F = func_804E6680_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804E6680_244F);
        r4 = static_cast<uint32_t>(regargs_result_804E6680_244F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->gpr[7] = r7;
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
        InvokeDirectCpu<0x804E6680u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
}

loc_8052559C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_805255A4;
    }
}

loc_805255A0:
{
    r29 = 1;
}

loc_805255A4:
{
}

loc_805255A8:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_805255BC;
    }
}

loc_805255AC:
{
}

loc_805255B0:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_805255BC;
    }
}

loc_805255B4:
{
}

loc_805255B8:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_805255C8;
    }
}

loc_805255BC:
{
    r3 = MemoryInline::FlatRead32((r13 + -13488));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r13 + -13488), r0);
}

loc_805255C8:
{
}

loc_805255CC:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_805255F8;
    }
}

loc_805255D0:
{
    r12 = MemoryInline::FlatRead32((r13 + -13500));
}

loc_805255D8:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_805255EC;
    }
}

loc_805255DC:
{
    r4 = MemoryInline::FlatRead32((r13 + -13504));
    r3 = -100;
    ctr = r12;
    ctx->lr = 0x805255ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    r7 = ctx->gpr[7];
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

loc_805255EC:
{
    r0 = -3;
    MemoryInline::FlatWrite32((r13 + -13544), r0);
    goto loc_80525670;
}

loc_805255F8:
{
}

loc_805255FC:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80525628;
    }
}

loc_80525600:
{
    r12 = MemoryInline::FlatRead32((r13 + -13500));
}

loc_80525608:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_8052561C;
    }
}

loc_8052560C:
{
    r4 = MemoryInline::FlatRead32((r13 + -13504));
    r3 = -6;
    ctr = r12;
    ctx->lr = 0x8052561Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    r7 = ctx->gpr[7];
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

loc_8052561C:
{
    r0 = 6;
    MemoryInline::FlatWrite32((r13 + -13544), r0);
    goto loc_80525670;
}

loc_80525628:
{
}

loc_8052562C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8052563C;
    }
}

loc_80525630:
{
    r0 = 6;
    MemoryInline::FlatWrite32((r13 + -13544), r0);
    goto loc_80525670;
}

loc_8052563C:
{
}

loc_80525640:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80525670;
    }
}

loc_80525644:
{
    r12 = MemoryInline::FlatRead32((r13 + -13500));
}

loc_8052564C:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80525670;
    }
}

loc_80525650:
{
    r4 = MemoryInline::FlatRead32((r13 + -13504));
    r3 = -7;
    ctr = r12;
    ctx->lr = 0x80525660u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    r7 = ctx->gpr[7];
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
    goto loc_80525670;
}

loc_80525664:
{
    r3 = MemoryInline::FlatRead32((r13 + -13488));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r13 + -13488), r0);
}

loc_80525670:
{
    r0 = MemoryInline::FlatRead32((r13 + -13488));
}

loc_80525678:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80525684;
    }
}

loc_8052567C:
{
    r3 = r26;
    ctx->lr = 0x80525684u;
    if constexpr (KnownRegArgsCpuCall<0x80525160u>(&func_80525160)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_80525160_40D0 = func_80525160_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80525160_40D0);
        r4 = static_cast<uint32_t>(regargs_result_80525160_40D0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->gpr[7] = r7;
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
        InvokeDirectCpu<0x80525160u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
}

loc_80525684:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574B8 (13 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    // end of inlined leaf 0x804574B8
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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

extern "C" void func_805253F0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_805253F0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x805253F0 func_805253F0 preserves=true fpr_mask=0x00000000
