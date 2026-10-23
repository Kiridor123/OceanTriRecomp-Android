#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80456D8C(CpuContext* ctx);
extern "C" uint64_t func_80456D8C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80457C1C(CpuContext* ctx);
extern "C" uint64_t func_80457C1C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80457F7C(CpuContext* ctx);
extern "C" uint64_t func_80457F7C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804584D0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_lhax_804587AC_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_26 = 0;
    uint32_t r0_rot_27 = 0;
    uint32_t r0_rot_28 = 0;
    uint32_t r0_rot_29 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_30 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_16 = 0;
    uint32_t r3_addr_17 = 0;
    uint32_t r3_addr_18 = 0;
    uint32_t r3_addr_19 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_20 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r12 = ctx->gpr[12];
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
    const uint32_t r22_entry = r22;
    const uint32_t r23_entry = r23;
    const uint32_t r24_entry = r24;
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_804584D0;

loc_804584D0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r31 = 0x80610000u;
    r25 = 0;
}

loc_804584F4:
{
    r30 = MemoryInline::FlatRead32((r27 + 8));
}

loc_804584FC:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_80458548;
    }
}

loc_80458500:
{
    r3 = r26;
    r4 = r27;
    ctx->lr = 0x8045850Cu;
    if constexpr (KnownRegArgsCpuCall<0x80457F7Cu>(&func_80457F7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_80457F7C_125B = func_80457F7C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80457F7C_125B);
        r4 = static_cast<uint32_t>(regargs_result_80457F7C_125B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80457F7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        ctr = ctx->ctr;
    }
    r4 = r27;
    ctx->lr = 0x80458514u;
    if constexpr (KnownRegArgsCpuCall<0x80457C1Cu>(&func_80457C1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80457C1C_1649 = func_80457C1C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80457C1C_1649);
        r4 = static_cast<uint32_t>(regargs_result_80457C1C_1649 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80457C1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead32(r27);
}

loc_8045851C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80458524;
    }
}

loc_80458520:
{
    ctx->lr = 0x80458524u;
    if constexpr (KnownRegArgsCpuCall<0x80456D8Cu>(&func_80456D8C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_80456D8C_1AAA = func_80456D8C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80456D8C_1AAA);
        r4 = static_cast<uint32_t>(regargs_result_80456D8C_1AAA >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x80456D8Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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

loc_80458524:
{
    r3 = MemoryInline::FlatRead32(r27);
    r0 = MemoryInline::FlatRead16(r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_2 & 1);
}

loc_80458530:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045853C;
    }
}

loc_80458534:
{
    r0 = MemoryInline::FlatRead32((r26 + 636));
    goto loc_80458540;
}

loc_8045853C:
{
    r0 = MemoryInline::FlatRead32((r26 + 644));
}

loc_80458540:
{
    MemoryInline::FlatWrite32((r26 + 648), r0);
    goto loc_804584F4;
}

loc_80458548:
{
    r29 = MemoryInline::FlatRead8(r30);
    r0 = (r29 & 127);
}

loc_80458554:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(16))) {
        goto loc_804589B4;
    }
}

loc_80458558:
{
    r3 = (r31 + -3676);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x804589B4u:
        goto loc_804589B4;
        break;
    case 0x8045856Cu:
        goto loc_8045856C;
        break;
    case 0x80458580u:
        goto loc_80458580;
        break;
    case 0x804585ACu:
        goto loc_804585AC;
        break;
    case 0x80458610u:
        goto loc_80458610;
        break;
    case 0x8045865Cu:
        goto loc_8045865C;
        break;
    case 0x804586B0u:
        goto loc_804586B0;
        break;
    case 0x80458704u:
        goto loc_80458704;
        break;
    case 0x80458758u:
        goto loc_80458758;
        break;
    case 0x804587E0u:
        goto loc_804587E0;
        break;
    case 0x8045885Cu:
        goto loc_8045885C;
        break;
    case 0x804588A4u:
        goto loc_804588A4;
        break;
    case 0x80458920u:
        goto loc_80458920;
        break;
    case 0x80458948u:
        goto loc_80458948;
        break;
    case 0x80458994u:
        goto loc_80458994;
        break;
    case 0x80458934u:
        goto loc_80458934;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
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
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_8045856C:
{
    r3 = MemoryInline::FlatRead32(r27);
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r27 + 8), r0);
    goto loc_804589B8;
}

loc_80458580:
{
    r3 = MemoryInline::FlatRead32((r26 + 648));
    r4 = -1;
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r12 = MemoryInline::FlatRead32((r30 + 4));
    r3 = (r3 + r0);
    ctr = r12;
    ctx->lr = 0x8045859Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r0 = (r3 + 8);
    MemoryInline::FlatWrite32((r27 + 8), r0);
    goto loc_804589B8;
}

loc_804585AC:
{
    r0 = MemoryInline::FlatRead8((r30 + 1));
    r0 = (static_cast<int32_t>(r0) >> 7);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804585D0;
    }
}

loc_804585B8:
{
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r26 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 512));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    goto loc_804585DC;
}

loc_804585D0:
{
    r3 = MemoryInline::FlatRead32((r26 + 648));
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3_addr_3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_3);
}

loc_804585DC:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80458600;
    }
}

loc_804585E4:
{
    r3 = MemoryInline::FlatRead32((r26 + 648));
    r4 = -1;
    r0 = MemoryInline::FlatRead16((r30 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r12 = MemoryInline::FlatRead32((r30 + 8));
    r3 = (r3 + r0);
    ctr = r12;
    ctx->lr = 0x80458600u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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

loc_80458600:
{
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r0 = (r3 + 12);
    MemoryInline::FlatWrite32((r27 + 8), r0);
    goto loc_804589B8;
}

loc_80458610:
{
    r0 = MemoryInline::FlatRead8((r30 + 1));
    r0 = (static_cast<int32_t>(r0) >> 7);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80458630;
    }
}

loc_8045861C:
{
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r26 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 512));
    goto loc_8045863C;
}

loc_80458630:
{
    r3 = MemoryInline::FlatRead32((r26 + 648));
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3_addr_5 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_5);
}

loc_8045863C:
{
    r12 = MemoryInline::FlatRead32((r30 + 4));
    r4 = -1;
    ctr = r12;
    ctx->lr = 0x8045864Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r0 = (r3 + 8);
    MemoryInline::FlatWrite32((r27 + 8), r0);
    goto loc_804589B8;
}

loc_8045865C:
{
    r23 = MemoryInline::FlatRead16((r30 + 4));
    r24 = MemoryInline::FlatRead16((r30 + 6));
    r4 = MemoryInline::FlatRead32((r26 + 648));
    r0 = (r24 * r23);
    r3 = MemoryInline::FlatRead16((r30 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r22 = (r4 + r3);
    r22 = (r22 + r0);
    goto loc_80458698;
}

loc_8045867C:
{
    r12 = MemoryInline::FlatRead32((r30 + 8));
    r22 = (r22 - r24);
    r3 = r22;
    r4 = -1;
    ctr = r12;
    ctx->lr = 0x80458694u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r23 = (r23 + -1);
}

loc_80458698:
{
}

loc_8045869C:
{
    if ((static_cast<int32_t>(r23) > static_cast<int32_t>(0))) {
        goto loc_8045867C;
    }
}

loc_804586A0:
{
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r0 = (r3 + 12);
    MemoryInline::FlatWrite32((r27 + 8), r0);
    goto loc_804589B8;
}

loc_804586B0:
{
    r0 = MemoryInline::FlatRead8((r30 + 1));
    r0 = (static_cast<int32_t>(r0) >> 7);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804586D0;
    }
}

loc_804586BC:
{
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = (r26 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 512));
    goto loc_804586DC;
}

loc_804586D0:
{
    r3 = MemoryInline::FlatRead32((r26 + 648));
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3_addr_7 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_7);
}

loc_804586DC:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r4 = 0;
    r12 = MemoryInline::FlatRead32((r30 + 8));
    r3 = (r3 + r0);
    ctr = r12;
    ctx->lr = 0x804586F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r0 = (r3 + 12);
    MemoryInline::FlatWrite32((r27 + 8), r0);
    goto loc_804589B8;
}

loc_80458704:
{
    r0 = MemoryInline::FlatRead8((r30 + 1));
    r0 = (static_cast<int32_t>(r0) >> 7);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80458724;
    }
}

loc_80458710:
{
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3 = (r26 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 512));
    goto loc_80458730;
}

loc_80458724:
{
    r3 = MemoryInline::FlatRead32((r26 + 648));
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3_addr_9 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_9);
}

loc_80458730:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r4 = -1;
    r12 = MemoryInline::FlatRead32((r30 + 8));
    r3 = (r3 + r0);
    ctr = r12;
    ctx->lr = 0x80458748u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r0 = (r3 + 12);
    MemoryInline::FlatWrite32((r27 + 8), r0);
    goto loc_804589B8;
}

loc_80458758:
{
    r4 = MemoryInline::FlatRead8((r30 + 1));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(26));
    r0 = (r0_rot_12 & 1);
}

loc_80458760:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80458778;
    }
}

loc_80458764:
{
    r0 = MemoryInline::FlatRead16((r30 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r3 = (r26 + r0);
    r5 = MemoryInline::FlatRead32((r3 + 512));
    goto loc_80458784;
}

loc_80458778:
{
    r3 = MemoryInline::FlatRead32((r26 + 648));
    r0 = MemoryInline::FlatRead16((r30 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3_addr_11 = (r3 + r0);
    r5 = MemoryInline::FlatRead32(r3_addr_11);
}

loc_80458784:
{
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(25));
    r0 = (r0_rot_15 & 1);
}

loc_80458788:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804587A4;
    }
}

loc_8045878C:
{
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_16 & -4);
    r3 = (r26 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 512));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_804587B0;
}

loc_804587A4:
{
    r3 = MemoryInline::FlatRead32((r26 + 648));
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    addr_lhax_804587AC_loc_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_804587AC_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_804587B0:
{
}

loc_804587B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804587D0;
    }
}

loc_804587B8:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r4 = 0;
    r12 = MemoryInline::FlatRead32((r30 + 12));
    r3 = (r5 + r0);
    ctr = r12;
    ctx->lr = 0x804587D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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

loc_804587D0:
{
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r0 = (r3 + 16);
    MemoryInline::FlatWrite32((r27 + 8), r0);
    goto loc_804589B8;
}

loc_804587E0:
{
    r0 = MemoryInline::FlatRead8((r30 + 1));
    r0 = (static_cast<int32_t>(r0) >> 7);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80458800;
    }
}

loc_804587EC:
{
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_18 & -4);
    r3 = (r26 + r0);
    r24 = MemoryInline::FlatRead32((r3 + 512));
    goto loc_8045880C;
}

loc_80458800:
{
    r3 = MemoryInline::FlatRead32((r26 + 648));
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3_addr_13 = (r3 + r0);
    r24 = MemoryInline::FlatRead32(r3_addr_13);
}

loc_8045880C:
{
    r23 = MemoryInline::FlatRead32((r30 + 8));
    r22 = MemoryInline::FlatRead32((r30 + 12));
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r22 * r23);
    r24 = (r24 + r3);
    r24 = (r24 + r0);
    goto loc_80458844;
}

loc_80458828:
{
    r12 = MemoryInline::FlatRead32((r30 + 16));
    r24 = (r24 - r22);
    r3 = r24;
    r4 = -1;
    ctr = r12;
    ctx->lr = 0x80458840u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r23 = (r23 + -1);
}

loc_80458844:
{
}

loc_80458848:
{
    if ((static_cast<int32_t>(r23) > static_cast<int32_t>(0))) {
        goto loc_80458828;
    }
}

loc_8045884C:
{
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r0 = (r3 + 20);
    MemoryInline::FlatWrite32((r27 + 8), r0);
    goto loc_804589B8;
}

loc_8045885C:
{
    r0 = MemoryInline::FlatRead8((r30 + 1));
    r0 = (static_cast<int32_t>(r0) >> 7);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045887C;
    }
}

loc_80458868:
{
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_20 & -4);
    r3 = (r26 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 512));
    goto loc_80458888;
}

loc_8045887C:
{
    r3 = MemoryInline::FlatRead32((r26 + 648));
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3_addr_15 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_15);
}

loc_80458888:
{
    r12 = MemoryInline::FlatRead32((r30 + 4));
    ctr = r12;
    ctx->lr = 0x80458894u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r0 = (r3 + 8);
    MemoryInline::FlatWrite32((r27 + 8), r0);
    goto loc_804589B8;
}

loc_804588A4:
{
    r4 = MemoryInline::FlatRead8((r30 + 1));
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(26));
    r0 = (r0_rot_22 & 1);
}

loc_804588AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804588C4;
    }
}

loc_804588B0:
{
    r0 = MemoryInline::FlatRead16((r30 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_23 & -4);
    r3 = (r26 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 512));
    goto loc_804588D0;
}

loc_804588C4:
{
    r3 = MemoryInline::FlatRead32((r26 + 648));
    r0 = MemoryInline::FlatRead16((r30 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3_addr_17 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_17);
}

loc_804588D0:
{
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(25));
    r0 = (r0_rot_25 & 1);
}

loc_804588D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804588F0;
    }
}

loc_804588D8:
{
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_26 & -4);
    r4 = (r26 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 512));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    goto loc_804588FC;
}

loc_804588F0:
{
    r4 = MemoryInline::FlatRead32((r26 + 648));
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4_addr_2 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_2);
}

loc_804588FC:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80458910;
    }
}

loc_80458904:
{
    r12 = MemoryInline::FlatRead32((r30 + 8));
    ctr = r12;
    ctx->lr = 0x80458910u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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

loc_80458910:
{
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r0 = (r3 + 12);
    MemoryInline::FlatWrite32((r27 + 8), r0);
    goto loc_804589B8;
}

loc_80458920:
{
}

loc_80458924:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(r30))) {
        goto loc_804589C8;
    }
}

loc_80458928:
{
    r0 = (r30 + 12);
    MemoryInline::FlatWrite32((r27 + 8), r0);
    goto loc_804589B8;
}

loc_80458934:
{
}

loc_80458938:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(r30))) {
        goto loc_804589C8;
    }
}

loc_8045893C:
{
    r0 = (r30 + 16);
    MemoryInline::FlatWrite32((r27 + 8), r0);
    goto loc_804589B8;
}

loc_80458948:
{
    r3 = MemoryInline::FlatRead32((r26 + 648));
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r3 + r0);
    r12 = MemoryInline::FlatRead32((r3 + 8));
}

loc_8045895C:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80458984;
    }
}

loc_80458960:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r26 + 664));
}

loc_8045896C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80458978;
    }
}

loc_80458970:
{
    MemoryInline::FlatWrite32((r26 + 668), r12);
    goto loc_80458984;
}

loc_80458978:
{
    r4 = -1;
    ctr = r12;
    ctx->lr = 0x80458984u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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

loc_80458984:
{
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r0 = (r3 + 4);
    MemoryInline::FlatWrite32((r27 + 8), r0);
    goto loc_804589B8;
}

loc_80458994:
{
}

loc_80458998:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(r30))) {
        goto loc_804589C8;
    }
}

loc_8045899C:
{
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_28 & -4);
    r3 = (r0 + r30);
    r0 = (r3 + 12);
    MemoryInline::FlatWrite32((r27 + 8), r0);
    goto loc_804589B8;
}

loc_804589B4:
{
    ctx->lr = 0x804589B8u;
    if constexpr (KnownRegArgsCpuCall<0x80456D8Cu>(&func_80456D8C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_80456D8C_88D1 = func_80456D8C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80456D8C_88D1);
        r4 = static_cast<uint32_t>(regargs_result_80456D8C_88D1 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x80456D8Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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

loc_804589B8:
{
    r0 = (r29 & 128);
}

loc_804589BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804584F4;
    }
}

loc_804589C0:
{
    MemoryInline::FlatWrite32((r27 + 8), r25);
    goto loc_804584F4;
}

loc_804589C8:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 48u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
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
    ctx->gpr[22] = r22_entry;
    ctx->gpr[23] = r23_entry;
    ctx->gpr[24] = r24_entry;
    ctx->gpr[25] = r25_entry;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804584D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804584D0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804584D0 func_804584D0 preserves=true fpr_mask=0x00000000
