#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CCCC0(CpuContext* ctx);
extern "C" uint64_t func_804CCCC0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804E6680(CpuContext* ctx);
extern "C" uint64_t func_804E6680_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80525160(CpuContext* ctx);
extern "C" uint64_t func_80525160_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80526B80(CpuContext* ctx);
extern "C" uint64_t func_80526B80_ra80_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80526D20(CpuContext* ctx);
extern "C" uint64_t func_80526D20_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_805256A0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint8_t* guest_range_2 = nullptr;

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

    goto loc_805256A0;

loc_805256A0:
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

loc_805256C4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(7))) {
        goto loc_805259B0;
    }
}

loc_805256C8:
{
    r0 = MemoryInline::FlatRead32((r13 + -13488));
}

loc_805256D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_805259B0;
    }
}

loc_805256D4:
{
}

loc_805256D8:
{
    r31 = 0;
    r30 = 0;
    r29 = 0;
    r28 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80525708;
    }
}

loc_805256EC:
{
}

loc_805256F0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-7008))) {
        goto loc_80525708;
    }
}

loc_805256F4:
{
}

loc_805256F8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-7009))) {
        goto loc_80525708;
    }
}

loc_805256FC:
{
    r0 = (r3 + 7015);
}

loc_80525704:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80525794;
    }
}

loc_80525708:
{
    r21 = 0;
    r22 = 0;
    r23 = 0;
    r25 = 0;
    r24 = 64;
}

loc_8052571C:
{
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r4 = 64;
    r0 = MemoryInline::FlatRead32(r27);
    r3_addr_2 = (r3 + r23);
    r5 = MemoryInline::FlatRead16(r3_addr_2);
    r3 = (r0 + r21);
    r20_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(20));
    r20 = (r20_rot_2 & 15);
    ctx->lr = 0x80525738u;
    if constexpr (KnownRegArgsCpuCall<0x80526D20u>(&func_80526D20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_80526D20_12B6 = func_80526D20_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80526D20_12B6);
        r4 = static_cast<uint32_t>(regargs_result_80526D20_12B6 >> 32);
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
        InvokeDirectCpu<0x80526D20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
}

loc_8052573C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80525744;
    }
}

loc_80525740:
{
    r31 = 1;
}

loc_80525744:
{
    r3 = MemoryInline::FlatRead32((r27 + 8));
}

loc_8052574C:
{
    r21 = (r21 + 64);
    r3_addr_3 = (r3 + r23);
    MemoryInline::FlatWrite16(r3_addr_3, static_cast<uint16_t>(r24));
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_80525780;
    }
}

loc_80525758:
{
}

loc_8052575C:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(8))) {
        goto loc_8052577C;
    }
}

loc_80525760:
{
}

loc_80525764:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(9))) {
        goto loc_8052577C;
    }
}

loc_80525768:
{
}

loc_8052576C:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(14))) {
        goto loc_8052577C;
    }
}

loc_80525770:
{
}

loc_80525774:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(15))) {
        goto loc_8052577C;
    }
}

loc_80525778:
{
    MemoryInline::FlatWrite32((r13 + -13496), r25);
}

loc_8052577C:
{
    r31 = 1;
}

loc_80525780:
{
    r22 = (r22 + 1);
    r23 = (r23 + 2);
}

loc_8052578C:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(8))) {
        goto loc_8052571C;
    }
}

loc_80525790:
{
    goto loc_805257C4;
}

loc_80525794:
{
}

loc_80525798:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-6))) {
        goto loc_805257A4;
    }
}

loc_8052579C:
{
}

loc_805257A0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-7022))) {
        goto loc_805257AC;
    }
}

loc_805257A4:
{
    r30 = 1;
    goto loc_805257C4;
}

loc_805257AC:
{
    r0 = MemoryInline::FlatRead32((r13 + -13496));
}

loc_805257B4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_805257C0;
    }
}

loc_805257B8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -13496), r0);
}

loc_805257C0:
{
    r31 = 1;
}

loc_805257C4:
{
    r3 = MemoryInline::FlatRead32((r13 + -13496));
}

loc_805257CC:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_805257E4;
    }
}

loc_805257D0:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r13 + -13496), r0);
}

loc_805257DC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(200))) {
        goto loc_805257E4;
    }
}

loc_805257E0:
{
    r28 = 1;
}

loc_805257E4:
{
}

loc_805257E8:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_80525830;
    }
}

loc_805257EC:
{
}

loc_805257F0:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_80525830;
    }
}

loc_805257F4:
{
    r0 = 8;
    MemoryInline::FlatWrite8((r27 + 4), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32(r27);
    r4 = 512;
    if constexpr (KnownRegArgsCpuCall<0x804CCCC0u>(&func_804CCCC0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_804CCCC0_2290 = func_804CCCC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCCC0_2290);
        r4 = static_cast<uint32_t>(regargs_result_804CCCC0_2290 >> 32);
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CCCC0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    r6 = 0x80520000u;
    r3 = MemoryInline::FlatRead32((r13 + -13404));
    r5 = r27;
    r4 = 3;
    r6 = (r6 + 22176);
    r7 = 0;
    ctx->lr = 0x80525824u;
    if constexpr (KnownRegArgsCpuCall<0x804E6680u>(&func_804E6680)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_804E6680_2689 = func_804E6680_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804E6680_2689);
        r4 = static_cast<uint32_t>(regargs_result_804E6680_2689 >> 32);
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

loc_80525828:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_80525830;
    }
}

loc_8052582C:
{
    r29 = 1;
}

loc_80525830:
{
}

loc_80525834:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_80525848;
    }
}

loc_80525838:
{
}

loc_8052583C:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_80525848;
    }
}

loc_80525840:
{
}

loc_80525844:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80525854;
    }
}

loc_80525848:
{
    r3 = MemoryInline::FlatRead32((r13 + -13488));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r13 + -13488), r0);
}

loc_80525854:
{
}

loc_80525858:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80525884;
    }
}

loc_8052585C:
{
    r12 = MemoryInline::FlatRead32((r13 + -13500));
}

loc_80525864:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80525878;
    }
}

loc_80525868:
{
    r4 = MemoryInline::FlatRead32((r13 + -13504));
    r3 = -100;
    ctr = r12;
    ctx->lr = 0x80525878u;
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

loc_80525878:
{
    r0 = -3;
    MemoryInline::FlatWrite32((r13 + -13544), r0);
    goto loc_805259BC;
}

loc_80525884:
{
}

loc_80525888:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_805258B4;
    }
}

loc_8052588C:
{
    r12 = MemoryInline::FlatRead32((r13 + -13500));
}

loc_80525894:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_805258A8;
    }
}

loc_80525898:
{
    r4 = MemoryInline::FlatRead32((r13 + -13504));
    r3 = -6;
    ctr = r12;
    ctx->lr = 0x805258A8u;
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

loc_805258A8:
{
    r0 = 6;
    MemoryInline::FlatWrite32((r13 + -13544), r0);
    goto loc_805259BC;
}

loc_805258B4:
{
}

loc_805258B8:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_805258C8;
    }
}

loc_805258BC:
{
    r0 = 6;
    MemoryInline::FlatWrite32((r13 + -13544), r0);
    goto loc_805259BC;
}

loc_805258C8:
{
}

loc_805258CC:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_805259BC;
    }
}

loc_805258D0:
{
    r3 = MemoryInline::FlatRead32((r13 + -13528));
    r5 = 0;
}

loc_805258DC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805258EC;
    }
}

loc_805258E0:
{
    r0 = MemoryInline::FlatRead32(r3);
    r5 = r3;
    MemoryInline::FlatWrite32((r13 + -13528), r0);
}

loc_805258EC:
{
}

loc_805258F0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80525988;
    }
}

loc_805258F4:
{
    r4 = 65536;
    r3 = 0x80520000u;
    r0 = (r4 + -26092);
    guest_range_1 = MemoryInline::ResolveRangeHost(r5, 0, 52u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r5 + 4), static_cast<uint16_t>(r0));
    r0 = 1;
    r3 = (r3 + 25600);
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r5 + 6), static_cast<uint16_t>(r0));
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r5 + 24), r3);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r5 + 28), r0);
    }
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r5 + 32), r0);
    MemoryInline::WriteResolved8(guest_range_1, 36u, (r5 + 36), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_1, 48u, (r5 + 48), r0);
    r3 = MemoryInline::FlatRead32((r13 + -13532));
}

loc_80525930:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8052594C;
    }
}

loc_80525934:
{
    MemoryInline::FlatWrite32((r13 + -13532), r5);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r5, r0);
    goto loc_80525964;
}

loc_80525948:
{
    r3 = r0;
}

loc_8052594C:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_80525954:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80525948;
    }
}

loc_80525958:
{
    MemoryInline::FlatWrite32(r3, r5);
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 0u, r5, r0);
}

loc_80525964:
{
    ctx->lr = 0x80525968u;
    if constexpr (KnownRegArgsCpuCall<0x80526B80u>(&func_80526B80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        const auto regargs_result_80526B80_466C = func_80526B80_ra80_0_18_0(ctx, r7);
        r3 = static_cast<uint32_t>(regargs_result_80526B80_466C);
        r4 = static_cast<uint32_t>(regargs_result_80526B80_466C >> 32);
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
        InvokeDirectCpu<0x80526B80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r12 = MemoryInline::FlatRead32((r13 + -13500));
}

loc_80525970:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_805259BC;
    }
}

loc_80525974:
{
    r4 = MemoryInline::FlatRead32((r13 + -13504));
    r3 = -7;
    ctr = r12;
    ctx->lr = 0x80525984u;
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
    goto loc_805259BC;
}

loc_80525988:
{
    r12 = MemoryInline::FlatRead32((r13 + -13500));
}

loc_80525990:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_805259A4;
    }
}

loc_80525994:
{
    r4 = MemoryInline::FlatRead32((r13 + -13504));
    r3 = -6;
    ctr = r12;
    ctx->lr = 0x805259A4u;
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

loc_805259A4:
{
    r0 = 6;
    MemoryInline::FlatWrite32((r13 + -13544), r0);
    goto loc_805259BC;
}

loc_805259B0:
{
    r3 = MemoryInline::FlatRead32((r13 + -13488));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r13 + -13488), r0);
}

loc_805259BC:
{
    r0 = MemoryInline::FlatRead32((r13 + -13488));
}

loc_805259C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805259D0;
    }
}

loc_805259C8:
{
    r3 = r26;
    ctx->lr = 0x805259D0u;
    if constexpr (KnownRegArgsCpuCall<0x80525160u>(&func_80525160)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_80525160_55D7 = func_80525160_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80525160_55D7);
        r4 = static_cast<uint32_t>(regargs_result_80525160_55D7 >> 32);
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

loc_805259D0:
{
    r3 = MemoryInline::FlatRead32((r13 + -13400));
    r11 = (r1 + 64);
    r0 = (r3 + 8);
    MemoryInline::FlatWrite32((r13 + -13400), r0);
    // inline leaf 0x804574B8 (13 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
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

extern "C" void func_805256A0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_805256A0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x805256A0 func_805256A0 preserves=true fpr_mask=0x00000000
