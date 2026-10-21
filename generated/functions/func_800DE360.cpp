#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D84A0(CpuContext* ctx);
extern "C" uint32_t func_800D84A0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800D8DF0(CpuContext* ctx);
extern "C" uint64_t func_800D8DF0_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_800D8EBC(CpuContext* ctx);
extern "C" uint32_t func_800D8EBC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800DDE74(CpuContext* ctx);
extern "C" uint32_t func_800DDE74_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800DDF14(CpuContext* ctx);
extern "C" uint32_t func_800DDF14_ra70_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800DDFA8(CpuContext* ctx);
extern "C" uint32_t func_800DDFA8_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800DE360_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
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
    uint32_t r0_rot_8 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_10 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r5_rot_9 = 0;

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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x800DE360u);
    goto loc_800DE360;

loc_800DE360:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r3 = (r5 & 255);
    r0 = (r3 + -15);
}

loc_800DE390:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(5))) {
        goto loc_800DE3A0;
    }
}

loc_800DE394:
{
    r3 = MemoryInline::FlatRead32((r13 + -17576));
    r3 = (r3 + 196608);
    r27 = MemoryInline::FlatRead32((r3 + -27936));
}

loc_800DE3A0:
{
}

loc_800DE3A4:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DE3A8:
{
    ctx->lr = 0x800DE3ACu;
    if constexpr (KnownRegArgsCpuCall<0x800D84A0u>(&func_800D84A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_800D84A0_E77 = func_800D84A0_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D84A0_E77;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800D84A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_800DE3B0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_800DF994;
    }
}

loc_800DE3B4:
{
    r4 = (r29 & 255);
}

loc_800DE3BC:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(38))) {
        goto loc_800DF994;
    }
}

loc_800DE3C0:
{
    r3 = 0x805A0000u;
    r3 = (r3 + -31836);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800DE3F8u:
        goto loc_800DE3F8;
        break;
    case 0x800DE3D8u:
        goto loc_800DE3D8;
        break;
    case 0x800DE4A8u:
        goto loc_800DE4A8;
        break;
    case 0x800DE4FCu:
        goto loc_800DE4FC;
        break;
    case 0x800DE5BCu:
        goto loc_800DE5BC;
        break;
    case 0x800DE67Cu:
        goto loc_800DE67C;
        break;
    case 0x800DE728u:
        goto loc_800DE728;
        break;
    case 0x800DF994u:
        goto loc_800DF994;
        break;
    case 0x800DE7F8u:
        goto loc_800DE7F8;
        break;
    case 0x800DE8A4u:
        goto loc_800DE8A4;
        break;
    case 0x800DE950u:
        goto loc_800DE950;
        break;
    case 0x800DE9FCu:
        goto loc_800DE9FC;
        break;
    case 0x800DEAA8u:
        goto loc_800DEAA8;
        break;
    case 0x800DEB54u:
        goto loc_800DEB54;
        break;
    case 0x800DEBF8u:
        goto loc_800DEBF8;
        break;
    case 0x800DEC9Cu:
        goto loc_800DEC9C;
        break;
    case 0x800DED50u:
        goto loc_800DED50;
        break;
    case 0x800DEDE4u:
        goto loc_800DEDE4;
        break;
    case 0x800DEE6Cu:
        goto loc_800DEE6C;
        break;
    case 0x800DEEF8u:
        goto loc_800DEEF8;
        break;
    case 0x800DEF48u:
        goto loc_800DEF48;
        break;
    case 0x800DEFD0u:
        goto loc_800DEFD0;
        break;
    case 0x800DF074u:
        goto loc_800DF074;
        break;
    case 0x800DF120u:
        goto loc_800DF120;
        break;
    case 0x800DF1CCu:
        goto loc_800DF1CC;
        break;
    case 0x800DF28Cu:
        goto loc_800DF28C;
        break;
    case 0x800DF340u:
        goto loc_800DF340;
        break;
    case 0x800DF3ECu:
        goto loc_800DF3EC;
        break;
    case 0x800DF498u:
        goto loc_800DF498;
        break;
    case 0x800DF544u:
        goto loc_800DF544;
        break;
    case 0x800DF5F0u:
        goto loc_800DF5F0;
        break;
    case 0x800DF69Cu:
        goto loc_800DF69C;
        break;
    case 0x800DF748u:
        goto loc_800DF748;
        break;
    case 0x800DF754u:
        goto loc_800DF754;
        break;
    case 0x800DF804u:
        goto loc_800DF804;
        break;
    case 0x800DF810u:
        goto loc_800DF810;
        break;
    case 0x800DF8C0u:
        goto loc_800DF8C0;
        break;
    default:
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_800DE3D8:
{
    r30 = (r30 + r4);
    r31 = 37;
    r3 = r28;
    ctx->lr = 0x800DE3E8u;
    if constexpr (KnownRegArgsCpuCall<0x800D8DF0u>(&func_800D8DF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_800D8DF0_1F60 = func_800D8DF0_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800D8DF0_1F60);
        r4 = static_cast<uint32_t>(regargs_result_800D8DF0_1F60 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8DF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_800DE3EC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800DE400;
    }
}

loc_800DE3F0:
{
    r31 = 237;
    goto loc_800DE400;
}

loc_800DE3F8:
{
    r30 = (r30 + r4);
    r31 = 37;
}

loc_800DE400:
{
    r3 = r27;
    r4 = r30;
    r5 = r31;
    if constexpr (KnownRegArgsCpuCall<0x800DDFA8u>(&func_800DDFA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_800DDFA8_2474 = func_800DDFA8_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDFA8_2474;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DDFA8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r29 = r3;
}

loc_800DE418:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DE470;
    }
}

loc_800DE41C:
{
    r4 = MemoryInline::FlatRead16((r3 + 72));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148394012);
}

loc_800DE424:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(-1))) {
        goto loc_800DF994;
    }
}

loc_800DE428:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 72), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DE438:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DE448;
    }
}

loc_800DE43C:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_800DE470;
}

loc_800DE448:
{
    r3 = (r3 + 4);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    MemoryInline::FlatWriteFloat32((r29 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    MemoryInline::FlatWriteFloat32((r29 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 12));
    MemoryInline::FlatWriteFloat32((r29 + 24), f0.d);
    goto loc_800DF994;
}

loc_800DE470:
{
    r3 = r27;
    r4 = r31;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800D8EBC_2D55 = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_2D55;
        r0 = ctx->gpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        ctr = ctx->ctr;
    }
    r6 = r3;
}

loc_800DE484:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DE488:
{
    r3 = r27;
    r4 = r28;
    r5 = r30;
    r7 = r31;
    r8 = 15;
    r9 = 0;
    ctx->lr = 0x800DE4A4u;
    if constexpr (KnownRegArgsCpuCall<0x800DDE74u>(&func_800DDE74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DDE74_30F3 = func_800DDE74_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDE74_30F3;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DDE74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
    goto loc_800DF994;
}

loc_800DE4A8:
{
    r30 = (r30 + r4);
    r3 = r28;
    ctx->lr = 0x800DE4B4u;
    if constexpr (KnownRegArgsCpuCall<0x800D8DF0u>(&func_800D8DF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_800D8DF0_3488 = func_800D8DF0_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800D8DF0_3488);
        r4 = static_cast<uint32_t>(regargs_result_800D8DF0_3488 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8DF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    r29 = (r3 + 30);
    r3 = r27;
    r4 = r29;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800D8EBC_391C = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_391C;
        r0 = ctx->gpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        ctr = ctx->ctr;
    }
    r6 = r3;
}

loc_800DE4D8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DE4DC:
{
    r3 = r27;
    r4 = r28;
    r5 = r30;
    r7 = r29;
    r8 = 15;
    r9 = 0;
    ctx->lr = 0x800DE4F8u;
    if constexpr (KnownRegArgsCpuCall<0x800DDE74u>(&func_800DDE74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DDE74_3CBA = func_800DDE74_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDE74_3CBA;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DDE74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
    goto loc_800DF994;
}

loc_800DE4FC:
{
    r30 = (r30 + r4);
    r3 = 0;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl1_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB10;
    }
}

loc_inl1_0x800CFB08:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB24;
    }
}

loc_inl1_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB24:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl1_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r29 = r3;
}

loc_800DE510:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DE514:
{
    r3 = MemoryInline::FlatRead32((r3 + 312));
    r4 = r30;
    r5 = 25;
    if constexpr (KnownRegArgsCpuCall<0x800DDFA8u>(&func_800DDFA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_800DDFA8_44C7 = func_800DDFA8_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDFA8_44C7;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DDFA8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r27 = r3;
}

loc_800DE52C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DE584;
    }
}

loc_800DE530:
{
    r4 = MemoryInline::FlatRead16((r3 + 72));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148394288);
}

loc_800DE538:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(-1))) {
        goto loc_800DF994;
    }
}

loc_800DE53C:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 72), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DE54C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DE55C;
    }
}

loc_800DE550:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_800DE584;
}

loc_800DE55C:
{
    r3 = (r3 + 4);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 4));
    MemoryInline::FlatWriteFloat32((r27 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 8));
    MemoryInline::FlatWriteFloat32((r27 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 12));
    MemoryInline::FlatWriteFloat32((r27 + 24), f0.d);
    goto loc_800DF994;
}

loc_800DE584:
{
    r3 = MemoryInline::FlatRead32((r29 + 312));
    r4 = 25;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800D8EBC_4DC9 = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_4DC9;
        r0 = ctx->gpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        ctr = ctx->ctr;
    }
    r6 = r3;
}

loc_800DE598:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DE59C:
{
    r3 = MemoryInline::FlatRead32((r29 + 312));
    r4 = r28;
    r5 = r30;
    r7 = 25;
    r8 = 12;
    r9 = 0;
    ctx->lr = 0x800DE5B8u;
    if constexpr (KnownRegArgsCpuCall<0x800DDE74u>(&func_800DDE74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DDE74_5188 = func_800DDE74_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDE74_5188;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DDE74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
    goto loc_800DF994;
}

loc_800DE5BC:
{
    r30 = (r30 + r4);
    r3 = 0;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl2_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl2_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CFB10;
    }
}

loc_inl2_0x800CFB08:
{
    r3 = 0;
    goto loc_inl2_cont_800CFAF4;
}

loc_inl2_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl2_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl2_0x800CFB24;
    }
}

loc_inl2_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl2_cont_800CFAF4;
}

loc_inl2_0x800CFB24:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl2_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r29 = r3;
}

loc_800DE5D0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DE5D4:
{
    r3 = MemoryInline::FlatRead32((r3 + 312));
    r4 = r30;
    r5 = 66;
    if constexpr (KnownRegArgsCpuCall<0x800DDFA8u>(&func_800DDFA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_800DDFA8_5995 = func_800DDFA8_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDFA8_5995;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DDFA8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r27 = r3;
}

loc_800DE5EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DE644;
    }
}

loc_800DE5F0:
{
    r4 = MemoryInline::FlatRead16((r3 + 72));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148394480);
}

loc_800DE5F8:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(-1))) {
        goto loc_800DF994;
    }
}

loc_800DE5FC:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 72), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DE60C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DE61C;
    }
}

loc_800DE610:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_800DE644;
}

loc_800DE61C:
{
    r3 = (r3 + 4);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 4));
    MemoryInline::FlatWriteFloat32((r27 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 8));
    MemoryInline::FlatWriteFloat32((r27 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 12));
    MemoryInline::FlatWriteFloat32((r27 + 24), f0.d);
    goto loc_800DF994;
}

loc_800DE644:
{
    r3 = MemoryInline::FlatRead32((r29 + 312));
    r4 = 66;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800D8EBC_6297 = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_6297;
        r0 = ctx->gpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        ctr = ctx->ctr;
    }
    r6 = r3;
}

loc_800DE658:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DE65C:
{
    r3 = MemoryInline::FlatRead32((r29 + 312));
    r4 = r28;
    r5 = r30;
    r7 = 66;
    r8 = 15;
    r9 = 0;
    ctx->lr = 0x800DE678u;
    if constexpr (KnownRegArgsCpuCall<0x800DDE74u>(&func_800DDE74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DDE74_6656 = func_800DDE74_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDE74_6656;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DDE74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
    goto loc_800DF994;
}

loc_800DE67C:
{
    r30 = (r30 + r4);
    r3 = r27;
    r4 = r30;
    r5 = 40;
    if constexpr (KnownRegArgsCpuCall<0x800DDFA8u>(&func_800DDFA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_800DDFA8_6A1F = func_800DDFA8_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDFA8_6A1F;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DDFA8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r29 = r3;
}

loc_800DE698:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DE6F0;
    }
}

loc_800DE69C:
{
    r4 = MemoryInline::FlatRead16((r3 + 72));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148394652);
}

loc_800DE6A4:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(-1))) {
        goto loc_800DF994;
    }
}

loc_800DE6A8:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 72), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DE6B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DE6C8;
    }
}

loc_800DE6BC:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_800DE6F0;
}

loc_800DE6C8:
{
    r3 = (r3 + 4);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    MemoryInline::FlatWriteFloat32((r29 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    MemoryInline::FlatWriteFloat32((r29 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 12));
    MemoryInline::FlatWriteFloat32((r29 + 24), f0.d);
    goto loc_800DF994;
}

loc_800DE6F0:
{
    r3 = r27;
    r4 = 40;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800D8EBC_72FF = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_72FF;
        r0 = ctx->gpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        ctr = ctx->ctr;
    }
    r6 = r3;
}

loc_800DE704:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DE708:
{
    r3 = r27;
    r4 = r28;
    r5 = r30;
    r7 = 40;
    r8 = 30;
    r9 = 0;
    ctx->lr = 0x800DE724u;
    if constexpr (KnownRegArgsCpuCall<0x800DDE74u>(&func_800DDE74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DDE74_769C = func_800DDE74_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDE74_769C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DDE74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
    goto loc_800DF994;
}

loc_800DE728:
{
    r3 = r27;
    r4 = r30;
    r5 = r30;
    if constexpr (KnownRegArgsCpuCall<0x800DDFA8u>(&func_800DDFA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_800DDFA8_7A50 = func_800DDFA8_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDFA8_7A50;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DDFA8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r29 = r3;
}

loc_800DE740:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DE798;
    }
}

loc_800DE744:
{
    r4 = MemoryInline::FlatRead16((r3 + 72));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148394820);
}

loc_800DE74C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(-1))) {
        goto loc_800DF994;
    }
}

loc_800DE750:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 72), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DE760:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DE770;
    }
}

loc_800DE764:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_800DE798;
}

loc_800DE770:
{
    r3 = (r3 + 4);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    MemoryInline::FlatWriteFloat32((r29 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    MemoryInline::FlatWriteFloat32((r29 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 12));
    MemoryInline::FlatWriteFloat32((r29 + 24), f0.d);
    goto loc_800DF994;
}

loc_800DE798:
{
    r3 = r27;
    r4 = r30;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800D8EBC_8331 = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_8331;
        r0 = ctx->gpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        ctr = ctx->ctr;
    }
    r6 = r3;
}

loc_800DE7AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DE7B0:
{
}

loc_800DE7B4:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_800DE7D8;
    }
}

loc_800DE7B8:
{
    r3 = r27;
    r4 = r28;
    r5 = r30;
    r7 = r30;
    r8 = 81;
    r9 = 0;
    ctx->lr = 0x800DE7D4u;
    if constexpr (KnownRegArgsCpuCall<0x800DDE74u>(&func_800DDE74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DDE74_8758 = func_800DDE74_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDE74_8758;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DDE74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
    goto loc_800DF994;
}

loc_800DE7D8:
{
    r3 = r27;
    r4 = r28;
    r5 = r30;
    r7 = r30;
    r8 = 80;
    r9 = 0;
    ctx->lr = 0x800DE7F4u;
    if constexpr (KnownRegArgsCpuCall<0x800DDE74u>(&func_800DDE74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DDE74_8B6A = func_800DDE74_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDE74_8B6A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DDE74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
    goto loc_800DF994;
}

loc_800DE7F8:
{
    r30 = (r30 + r4);
    r3 = r27;
    r4 = r30;
    r5 = 38;
    if constexpr (KnownRegArgsCpuCall<0x800DDFA8u>(&func_800DDFA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_800DDFA8_8F33 = func_800DDFA8_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDFA8_8F33;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DDFA8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r29 = r3;
}

loc_800DE814:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DE86C;
    }
}

loc_800DE818:
{
    r4 = MemoryInline::FlatRead16((r3 + 72));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148395032);
}

loc_800DE820:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(-1))) {
        goto loc_800DF994;
    }
}

loc_800DE824:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 72), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DE834:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DE844;
    }
}

loc_800DE838:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_800DE86C;
}

loc_800DE844:
{
    r3 = (r3 + 4);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    MemoryInline::FlatWriteFloat32((r29 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    MemoryInline::FlatWriteFloat32((r29 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 12));
    MemoryInline::FlatWriteFloat32((r29 + 24), f0.d);
    goto loc_800DF994;
}

loc_800DE86C:
{
    r3 = r27;
    r4 = 38;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800D8EBC_9813 = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_9813;
        r0 = ctx->gpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        ctr = ctx->ctr;
    }
    r6 = r3;
}

loc_800DE880:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DE884:
{
    r3 = r27;
    r4 = r28;
    r5 = r30;
    r7 = 38;
    r8 = 12;
    r9 = 0;
    ctx->lr = 0x800DE8A0u;
    if constexpr (KnownRegArgsCpuCall<0x800DDE74u>(&func_800DDE74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DDE74_9BB0 = func_800DDE74_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDE74_9BB0;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DDE74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
    goto loc_800DF994;
}

loc_800DE8A4:
{
    r30 = (r30 + r4);
    r3 = r27;
    r4 = r30;
    r5 = 44;
    if constexpr (KnownRegArgsCpuCall<0x800DDFA8u>(&func_800DDFA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_800DDFA8_9F79 = func_800DDFA8_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDFA8_9F79;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DDFA8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r29 = r3;
}

loc_800DE8C0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DE918;
    }
}

loc_800DE8C4:
{
    r4 = MemoryInline::FlatRead16((r3 + 72));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148395204);
}

loc_800DE8CC:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(-1))) {
        goto loc_800DF994;
    }
}

loc_800DE8D0:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 72), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DE8E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DE8F0;
    }
}

loc_800DE8E4:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_800DE918;
}

loc_800DE8F0:
{
    r3 = (r3 + 4);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    MemoryInline::FlatWriteFloat32((r29 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    MemoryInline::FlatWriteFloat32((r29 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 12));
    MemoryInline::FlatWriteFloat32((r29 + 24), f0.d);
    goto loc_800DF994;
}

loc_800DE918:
{
    r3 = r27;
    r4 = 44;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800D8EBC_A859 = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_A859;
        r0 = ctx->gpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        ctr = ctx->ctr;
    }
    r6 = r3;
}

loc_800DE92C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DE930:
{
    r3 = r27;
    r4 = r28;
    r5 = r30;
    r7 = 44;
    r8 = 14;
    r9 = 0;
    ctx->lr = 0x800DE94Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DDE74u>(&func_800DDE74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DDE74_ABF6 = func_800DDE74_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDE74_ABF6;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DDE74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
    goto loc_800DF994;
}

loc_800DE950:
{
    r30 = (r30 + r4);
    r3 = r27;
    r4 = r30;
    r5 = 61;
    if constexpr (KnownRegArgsCpuCall<0x800DDFA8u>(&func_800DDFA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_800DDFA8_AFBF = func_800DDFA8_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDFA8_AFBF;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DDFA8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r29 = r3;
}

loc_800DE96C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DE9C4;
    }
}

loc_800DE970:
{
    r4 = MemoryInline::FlatRead16((r3 + 72));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148395376);
}

loc_800DE978:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(-1))) {
        goto loc_800DF994;
    }
}

loc_800DE97C:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 72), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DE98C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DE99C;
    }
}

loc_800DE990:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_800DE9C4;
}

loc_800DE99C:
{
    r3 = (r3 + 4);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    MemoryInline::FlatWriteFloat32((r29 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    MemoryInline::FlatWriteFloat32((r29 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 12));
    MemoryInline::FlatWriteFloat32((r29 + 24), f0.d);
    goto loc_800DF994;
}

loc_800DE9C4:
{
    r3 = r27;
    r4 = 61;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800D8EBC_B89F = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_B89F;
        r0 = ctx->gpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        ctr = ctx->ctr;
    }
    r6 = r3;
}

loc_800DE9D8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DE9DC:
{
    r3 = r27;
    r4 = r28;
    r5 = r30;
    r7 = 61;
    r8 = 9;
    r9 = 0;
    ctx->lr = 0x800DE9F8u;
    if constexpr (KnownRegArgsCpuCall<0x800DDE74u>(&func_800DDE74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DDE74_BC3B = func_800DDE74_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDE74_BC3B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DDE74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
    goto loc_800DF994;
}

loc_800DE9FC:
{
    r30 = (r30 + r4);
    r3 = r27;
    r4 = r30;
    r5 = 35;
    if constexpr (KnownRegArgsCpuCall<0x800DDFA8u>(&func_800DDFA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_800DDFA8_C004 = func_800DDFA8_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDFA8_C004;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DDFA8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r29 = r3;
}

loc_800DEA18:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DEA70;
    }
}

loc_800DEA1C:
{
    r4 = MemoryInline::FlatRead16((r3 + 72));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148395548);
}

loc_800DEA24:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(-1))) {
        goto loc_800DF994;
    }
}

loc_800DEA28:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 72), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DEA38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DEA48;
    }
}

loc_800DEA3C:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_800DEA70;
}

loc_800DEA48:
{
    r3 = (r3 + 4);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    MemoryInline::FlatWriteFloat32((r29 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    MemoryInline::FlatWriteFloat32((r29 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 12));
    MemoryInline::FlatWriteFloat32((r29 + 24), f0.d);
    goto loc_800DF994;
}

loc_800DEA70:
{
    r3 = r27;
    r4 = 35;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800D8EBC_C8E4 = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_C8E4;
        r0 = ctx->gpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        ctr = ctx->ctr;
    }
    r6 = r3;
}

loc_800DEA84:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DEA88:
{
    r3 = r27;
    r4 = r28;
    r5 = r30;
    r7 = 35;
    r8 = 15;
    r9 = 0;
    ctx->lr = 0x800DEAA4u;
    if constexpr (KnownRegArgsCpuCall<0x800DDE74u>(&func_800DDE74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DDE74_CC81 = func_800DDE74_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDE74_CC81;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DDE74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
    goto loc_800DF994;
}

loc_800DEAA8:
{
    r30 = (r30 + r4);
    r3 = r27;
    r4 = r30;
    r5 = 19;
    if constexpr (KnownRegArgsCpuCall<0x800DDFA8u>(&func_800DDFA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_800DDFA8_D04A = func_800DDFA8_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDFA8_D04A;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DDFA8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r29 = r3;
}

loc_800DEAC4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DEB1C;
    }
}

loc_800DEAC8:
{
    r4 = MemoryInline::FlatRead16((r3 + 72));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148395720);
}

loc_800DEAD0:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(-1))) {
        goto loc_800DF994;
    }
}

loc_800DEAD4:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 72), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DEAE4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DEAF4;
    }
}

loc_800DEAE8:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_800DF994;
}

loc_800DEAF4:
{
    r3 = (r3 + 4);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    MemoryInline::FlatWriteFloat32((r29 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    MemoryInline::FlatWriteFloat32((r29 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 12));
    MemoryInline::FlatWriteFloat32((r29 + 24), f0.d);
    goto loc_800DF994;
}

loc_800DEB1C:
{
    r3 = r27;
    r4 = 19;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800D8EBC_D92A = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_D92A;
        r0 = ctx->gpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        ctr = ctx->ctr;
    }
    r6 = r3;
}

loc_800DEB30:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DEB34:
{
    r3 = r27;
    r4 = r28;
    r5 = r30;
    r7 = 19;
    r8 = 150;
    r9 = 0;
    ctx->lr = 0x800DEB50u;
    if constexpr (KnownRegArgsCpuCall<0x800DDE74u>(&func_800DDE74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DDE74_DCC8 = func_800DDE74_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDE74_DCC8;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DDE74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
    goto loc_800DF994;
}

loc_800DEB54:
{
    r3 = r28;
    ctx->lr = 0x800DEB5Cu;
    if constexpr (KnownRegArgsCpuCall<0x800D8DF0u>(&func_800D8DF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_800D8DF0_E047 = func_800D8DF0_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800D8DF0_E047);
        r4 = static_cast<uint32_t>(regargs_result_800D8DF0_E047 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8DF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_800DEB60:
{
    r31 = 8;
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800DEB6C;
    }
}

loc_800DEB68:
{
    r31 = 18;
}

loc_800DEB6C:
{
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & -2);
    r3 = MemoryInline::FlatRead32((r13 + -17576));
    r0 = (r3 + 196608);
    r3 = (r0 + r5);
    r4 = (r3 + -27148);
    r3 = MemoryInline::FlatRead16(r4);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = MH3_TickLoad(r3, 2148395904);
}

loc_800DEB88:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_800DEBB0;
    }
}

loc_800DEB8C:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -17576));
    r0 = (r3 + 196608);
    r3 = (r0 + r5);
    r4 = (r3 + -27148);
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DEBAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DEBB0:
{
    r0 = 18;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r0 = (r29 & 255);
    r30 = (r30 + r0);
    r3 = r27;
    r4 = r31;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800D8EBC_E8E9 = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_E8E9;
        r0 = ctx->gpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        ctr = ctx->ctr;
    }
    r6 = r3;
}

loc_800DEBD4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DEBD8:
{
    r3 = r27;
    r4 = r28;
    r5 = r30;
    r7 = r31;
    r8 = 18;
    r9 = 1;
    ctx->lr = 0x800DEBF4u;
    if constexpr (KnownRegArgsCpuCall<0x800DDE74u>(&func_800DDE74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DDE74_EC87 = func_800DDE74_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDE74_EC87;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DDE74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
    goto loc_800DF994;
}

loc_800DEBF8:
{
    r3 = r28;
    ctx->lr = 0x800DEC00u;
    if constexpr (KnownRegArgsCpuCall<0x800D8DF0u>(&func_800D8DF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_800D8DF0_F006 = func_800D8DF0_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800D8DF0_F006);
        r4 = static_cast<uint32_t>(regargs_result_800D8DF0_F006 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8DF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_800DEC04:
{
    r31 = 9;
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800DEC10;
    }
}

loc_800DEC0C:
{
    r31 = 19;
}

loc_800DEC10:
{
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & -2);
    r3 = MemoryInline::FlatRead32((r13 + -17576));
    r0 = (r3 + 196608);
    r3 = (r0 + r5);
    r4 = (r3 + -27148);
    r3 = MemoryInline::FlatRead16(r4);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = MH3_TickLoad(r3, 2148396068);
}

loc_800DEC2C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_800DEC54;
    }
}

loc_800DEC30:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -17576));
    r0 = (r3 + 196608);
    r3 = (r0 + r5);
    r4 = (r3 + -27148);
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DEC50:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DEC54:
{
    r0 = 12;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r0 = (r29 & 255);
    r30 = (r30 + r0);
    r3 = r27;
    r4 = r31;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800D8EBC_F8A8 = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_F8A8;
        r0 = ctx->gpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        ctr = ctx->ctr;
    }
    r6 = r3;
}

loc_800DEC78:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DEC7C:
{
    r3 = r27;
    r4 = r28;
    r5 = r30;
    r7 = r31;
    r8 = 12;
    r9 = 1;
    ctx->lr = 0x800DEC98u;
    if constexpr (KnownRegArgsCpuCall<0x800DDE74u>(&func_800DDE74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DDE74_FC46 = func_800DDE74_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDE74_FC46;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DDE74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
    goto loc_800DF994;
}

loc_800DEC9C:
{
    r3 = (r30 & 3);
    r31 = (r3 + 20);
    r30 = (r30 + r4);
    r3 = r27;
    r4 = r30;
    r5 = r31;
    if constexpr (KnownRegArgsCpuCall<0x800DDFA8u>(&func_800DDFA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_800DDFA8_10039 = func_800DDFA8_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDFA8_10039;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DDFA8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r29 = r3;
}

loc_800DECC0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DED18;
    }
}

loc_800DECC4:
{
    r4 = MemoryInline::FlatRead16((r3 + 72));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148396228);
}

loc_800DECCC:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(-1))) {
        goto loc_800DF994;
    }
}

loc_800DECD0:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 72), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DECE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DECF0;
    }
}

loc_800DECE4:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_800DED18;
}

loc_800DECF0:
{
    r3 = (r3 + 4);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    MemoryInline::FlatWriteFloat32((r29 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    MemoryInline::FlatWriteFloat32((r29 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 12));
    MemoryInline::FlatWriteFloat32((r29 + 24), f0.d);
    goto loc_800DF994;
}

loc_800DED18:
{
    r3 = r27;
    r4 = r31;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800D8EBC_1091C = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_1091C;
        r0 = ctx->gpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        ctr = ctx->ctr;
    }
    r6 = r3;
}

loc_800DED2C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DED30:
{
    r3 = r27;
    r4 = r28;
    r5 = r30;
    r7 = r31;
    r8 = 70;
    r9 = 0;
    ctx->lr = 0x800DED4Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DDE74u>(&func_800DDE74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DDE74_10CBC = func_800DDE74_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDE74_10CBC;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DDE74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
    goto loc_800DF994;
}

loc_800DED50:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r30));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 134217727);
    r29 = (r3 + 3);
    r0 = (r30 & 15);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_3 & -2);
    r3 = MemoryInline::FlatRead32((r13 + -17576));
    r0 = (r3 + 196608);
    r3 = (r0 + r5);
    r4 = (r3 + -27140);
    r3 = MemoryInline::FlatRead16(r4);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = MH3_TickLoad(r3, 2148396404);
}

loc_800DED7C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_800DEDA4;
    }
}

loc_800DED80:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -17576));
    r0 = (r3 + 196608);
    r3 = (r0 + r5);
    r4 = (r3 + -27140);
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DEDA0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DEDA4:
{
    r0 = 30;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r3 = r27;
    r4 = r29;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800D8EBC_114EC = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_114EC;
        r0 = ctx->gpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        ctr = ctx->ctr;
    }
    r6 = r3;
}

loc_800DEDC0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DEDC4:
{
    r3 = r27;
    r4 = r28;
    r5 = r30;
    r7 = r29;
    r8 = 30;
    r9 = 0;
    ctx->lr = 0x800DEDE0u;
    if constexpr (KnownRegArgsCpuCall<0x800DDE74u>(&func_800DDE74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DDE74_1188C = func_800DDE74_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDE74_1188C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DDE74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
    goto loc_800DF994;
}

loc_800DEDE4:
{
    r0 = (r30 & 15);
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_4 & -2);
    r3 = MemoryInline::FlatRead32((r13 + -17576));
    r0 = (r3 + 196608);
    r3 = (r0 + r5);
    r4 = (r3 + -27140);
    r3 = MemoryInline::FlatRead16(r4);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = MH3_TickLoad(r3, 2148396540);
}

loc_800DEE04:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_800DEE2C;
    }
}

loc_800DEE08:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -17576));
    r0 = (r3 + 196608);
    r3 = (r0 + r5);
    r4 = (r3 + -27140);
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DEE28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DEE2C:
{
    r0 = 63;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r3 = r27;
    r4 = 18;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800D8EBC_11FF9 = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_11FF9;
        r0 = ctx->gpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        ctr = ctx->ctr;
    }
    r6 = r3;
}

loc_800DEE48:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DEE4C:
{
    r3 = r27;
    r4 = r28;
    r5 = r30;
    r7 = 18;
    r8 = 63;
    r9 = 0;
    ctx->lr = 0x800DEE68u;
    if constexpr (KnownRegArgsCpuCall<0x800DDE74u>(&func_800DDE74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DDE74_12398 = func_800DDE74_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDE74_12398;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DDE74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
    goto loc_800DF994;
}

loc_800DEE6C:
{
    r31 = 46;
    r0 = (r30 & 15);
    r5_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_5 & -2);
    r3 = MemoryInline::FlatRead32((r13 + -17576));
    r0 = (r3 + 196608);
    r3 = (r0 + r5);
    r4 = (r3 + -27140);
    r3 = MemoryInline::FlatRead16(r4);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = MH3_TickLoad(r3, 2148396680);
}

loc_800DEE90:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_800DEEB8;
    }
}

loc_800DEE94:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -17576));
    r0 = (r3 + 196608);
    r3 = (r0 + r5);
    r4 = (r3 + -27140);
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DEEB4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DEEB8:
{
    r0 = 9;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r3 = r27;
    r4 = r31;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800D8EBC_12B13 = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_12B13;
        r0 = ctx->gpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        ctr = ctx->ctr;
    }
    r6 = r3;
}

loc_800DEED4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DEED8:
{
    r3 = r27;
    r4 = r28;
    r5 = r30;
    r7 = r31;
    r8 = 9;
    r9 = 0;
    ctx->lr = 0x800DEEF4u;
    if constexpr (KnownRegArgsCpuCall<0x800DDE74u>(&func_800DDE74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DDE74_12EB2 = func_800DDE74_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDE74_12EB2;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DDE74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
    goto loc_800DF994;
}

loc_800DEEF8:
{
    r31 = 48;
    r0 = (r30 & 15);
    r5_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_7 & -2);
    r3 = MemoryInline::FlatRead32((r13 + -17576));
    r0 = (r3 + 196608);
    r3 = (r0 + r5);
    r4 = (r3 + -27140);
    r3 = MemoryInline::FlatRead16(r4);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = MH3_TickLoad(r3, 2148396820);
}

loc_800DEF1C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_800DEEB8;
    }
}

loc_800DEF20:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -17576));
    r0 = (r3 + 196608);
    r3 = (r0 + r5);
    r4 = (r3 + -27140);
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DEF40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800DEEB8;
    }
}

loc_800DEF44:
{
    goto loc_800DF994;
}

loc_800DEF48:
{
    r0 = (r30 & 15);
    r5_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_8 & -2);
    r3 = MemoryInline::FlatRead32((r13 + -17576));
    r0 = (r3 + 196608);
    r3 = (r0 + r5);
    r4 = (r3 + -27140);
    r3 = MemoryInline::FlatRead16(r4);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = MH3_TickLoad(r3, 2148396896);
}

loc_800DEF68:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_800DEF90;
    }
}

loc_800DEF6C:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -17576));
    r0 = (r3 + 196608);
    r3 = (r0 + r5);
    r4 = (r3 + -27140);
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DEF8C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DEF90:
{
    r0 = 10;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r3 = r27;
    r4 = 17;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800D8EBC_13A20 = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_13A20;
        r0 = ctx->gpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        ctr = ctx->ctr;
    }
    r6 = r3;
}

loc_800DEFAC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DEFB0:
{
    r3 = r27;
    r4 = r28;
    r5 = r30;
    r7 = 17;
    r8 = 10;
    r9 = 0;
    ctx->lr = 0x800DEFCCu;
    if constexpr (KnownRegArgsCpuCall<0x800DDE74u>(&func_800DDE74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DDE74_13DBF = func_800DDE74_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDE74_13DBF;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DDE74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
    goto loc_800DF994;
}

loc_800DEFD0:
{
    r3 = r28;
    ctx->lr = 0x800DEFD8u;
    if constexpr (KnownRegArgsCpuCall<0x800D8DF0u>(&func_800D8DF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_800D8DF0_14140 = func_800D8DF0_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800D8DF0_14140);
        r4 = static_cast<uint32_t>(regargs_result_800D8DF0_14140 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8DF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_800DEFDC:
{
    r31 = 7;
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800DEFE8;
    }
}

loc_800DEFE4:
{
    r31 = 17;
}

loc_800DEFE8:
{
    r5_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r5 = (r5_rot_9 & -2);
    r3 = MemoryInline::FlatRead32((r13 + -17576));
    r0 = (r3 + 196608);
    r3 = (r0 + r5);
    r4 = (r3 + -27148);
    r3 = MemoryInline::FlatRead16(r4);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = MH3_TickLoad(r3, 2148397052);
}

loc_800DF004:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_800DF02C;
    }
}

loc_800DF008:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -17576));
    r0 = (r3 + 196608);
    r3 = (r0 + r5);
    r4 = (r3 + -27148);
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DF028:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DF02C:
{
    r0 = 17;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r0 = (r29 & 255);
    r30 = (r30 + r0);
    r3 = r27;
    r4 = r31;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800D8EBC_149E5 = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_149E5;
        r0 = ctx->gpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        ctr = ctx->ctr;
    }
    r6 = r3;
}

loc_800DF050:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DF054:
{
    r3 = r27;
    r4 = r28;
    r5 = r30;
    r7 = r31;
    r8 = 17;
    r9 = 1;
    ctx->lr = 0x800DF070u;
    if constexpr (KnownRegArgsCpuCall<0x800DDE74u>(&func_800DDE74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DDE74_14D85 = func_800DDE74_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDE74_14D85;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DDE74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
    goto loc_800DF994;
}

loc_800DF074:
{
    r30 = (r30 + r4);
    r3 = r27;
    r4 = r30;
    r5 = 63;
    if constexpr (KnownRegArgsCpuCall<0x800DDFA8u>(&func_800DDFA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_800DDFA8_15150 = func_800DDFA8_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDFA8_15150;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DDFA8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r29 = r3;
}

loc_800DF090:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF0E8;
    }
}

loc_800DF094:
{
    r4 = MemoryInline::FlatRead16((r3 + 72));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148397204);
}

loc_800DF09C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(-1))) {
        goto loc_800DF994;
    }
}

loc_800DF0A0:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 72), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DF0B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DF0C0;
    }
}

loc_800DF0B4:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_800DF0E8;
}

loc_800DF0C0:
{
    r3 = (r3 + 4);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    MemoryInline::FlatWriteFloat32((r29 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    MemoryInline::FlatWriteFloat32((r29 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 12));
    MemoryInline::FlatWriteFloat32((r29 + 24), f0.d);
    goto loc_800DF994;
}

loc_800DF0E8:
{
    r3 = r27;
    r4 = 63;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800D8EBC_15A32 = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_15A32;
        r0 = ctx->gpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        ctr = ctx->ctr;
    }
    r6 = r3;
}

loc_800DF0FC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DF100:
{
    r3 = r27;
    r4 = r28;
    r5 = r30;
    r7 = 63;
    r8 = 15;
    r9 = 0;
    ctx->lr = 0x800DF11Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DDE74u>(&func_800DDE74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DDE74_15DD1 = func_800DDE74_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDE74_15DD1;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DDE74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
    goto loc_800DF994;
}

loc_800DF120:
{
    r30 = (r30 + r4);
    r3 = r27;
    r4 = r30;
    r5 = 3;
    if constexpr (KnownRegArgsCpuCall<0x800DDFA8u>(&func_800DDFA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_800DDFA8_1619B = func_800DDFA8_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDFA8_1619B;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DDFA8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r29 = r3;
}

loc_800DF13C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF194;
    }
}

loc_800DF140:
{
    r4 = MemoryInline::FlatRead16((r3 + 72));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148397376);
}

loc_800DF148:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(-1))) {
        goto loc_800DF994;
    }
}

loc_800DF14C:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 72), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DF15C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DF16C;
    }
}

loc_800DF160:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_800DF194;
}

loc_800DF16C:
{
    r3 = (r3 + 4);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    MemoryInline::FlatWriteFloat32((r29 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    MemoryInline::FlatWriteFloat32((r29 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 12));
    MemoryInline::FlatWriteFloat32((r29 + 24), f0.d);
    goto loc_800DF994;
}

loc_800DF194:
{
    r3 = r27;
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800D8EBC_16A7C = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_16A7C;
        r0 = ctx->gpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        ctr = ctx->ctr;
    }
    r6 = r3;
}

loc_800DF1A8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DF1AC:
{
    r3 = r27;
    r4 = r28;
    r5 = r30;
    r7 = 3;
    r8 = 15;
    r9 = 0;
    ctx->lr = 0x800DF1C8u;
    if constexpr (KnownRegArgsCpuCall<0x800DDE74u>(&func_800DDE74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DDE74_16E1A = func_800DDE74_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDE74_16E1A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DDE74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
    goto loc_800DF994;
}

loc_800DF1CC:
{
    r0 = (0 - r30);
    r0 = (r0 | r30);
    r31_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r31 = (r31_rot_1 & 1);
    r3 = r27;
    r4 = 0;
    r5 = r31;
    if constexpr (KnownRegArgsCpuCall<0x800DDFA8u>(&func_800DDFA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_800DDFA8_17268 = func_800DDFA8_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDFA8_17268;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DDFA8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r29 = r3;
}

loc_800DF1F0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF248;
    }
}

loc_800DF1F4:
{
    r4 = MemoryInline::FlatRead16((r3 + 72));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148397556);
}

loc_800DF1FC:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(-1))) {
        goto loc_800DF994;
    }
}

loc_800DF200:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 72), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DF210:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DF220;
    }
}

loc_800DF214:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_800DF248;
}

loc_800DF220:
{
    r3 = (r3 + 4);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    MemoryInline::FlatWriteFloat32((r29 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    MemoryInline::FlatWriteFloat32((r29 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 12));
    MemoryInline::FlatWriteFloat32((r29 + 24), f0.d);
    goto loc_800DF994;
}

loc_800DF248:
{
    r3 = r27;
    r4 = r31;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800D8EBC_17B4B = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_17B4B;
        r0 = ctx->gpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        ctr = ctx->ctr;
    }
    r29 = r3;
}

loc_800DF25C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DF260:
{
    // inline leaf 0x800EF5B8 (2 guest instruction(s))
    r3 = 36;
    // end of inlined leaf 0x800EF5B8
    r10 = r3;
    r3 = r27;
    r4 = r28;
    r5 = r30;
    r6 = r29;
    r7 = r31;
    r8 = 15;
    r9 = 0;
    ctx->lr = 0x800DF288u;
    if constexpr (KnownRegArgsCpuCall<0x800DDF14u>(&func_800DDF14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[10] = r10;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DDF14_17F5A = func_800DDF14_ra70_0_8_0(ctx, r4, r5, r6);
        r3 = regargs_result_800DDF14_17F5A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[10] = r10;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DDF14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
    goto loc_800DF994;
}

loc_800DF28C:
{
    r3 = r27;
    r4 = 0;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x800DDFA8u>(&func_800DDFA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_800DDFA8_1830E = func_800DDFA8_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDFA8_1830E;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DDFA8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r29 = r3;
}

loc_800DF2A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF2FC;
    }
}

loc_800DF2A8:
{
    r4 = MemoryInline::FlatRead16((r3 + 72));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148397736);
}

loc_800DF2B0:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(-1))) {
        goto loc_800DF994;
    }
}

loc_800DF2B4:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 72), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DF2C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DF2D4;
    }
}

loc_800DF2C8:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_800DF2FC;
}

loc_800DF2D4:
{
    r3 = (r3 + 4);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    MemoryInline::FlatWriteFloat32((r29 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    MemoryInline::FlatWriteFloat32((r29 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 12));
    MemoryInline::FlatWriteFloat32((r29 + 24), f0.d);
    goto loc_800DF994;
}

loc_800DF2FC:
{
    r3 = r27;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800D8EBC_18BEF = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_18BEF;
        r0 = ctx->gpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        ctr = ctx->ctr;
    }
    r29 = r3;
}

loc_800DF310:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DF314:
{
    // inline leaf 0x800EF5B8 (2 guest instruction(s))
    r3 = 36;
    // end of inlined leaf 0x800EF5B8
    r10 = r3;
    r3 = r27;
    r4 = r28;
    r5 = r30;
    r6 = r29;
    r7 = 0;
    r8 = 27;
    r9 = 0;
    ctx->lr = 0x800DF33Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DDF14u>(&func_800DDF14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[10] = r10;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DDF14_18FFC = func_800DDF14_ra70_0_8_0(ctx, r4, r5, r6);
        r3 = regargs_result_800DDF14_18FFC;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[10] = r10;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DDF14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
    goto loc_800DF994;
}

loc_800DF340:
{
    r30 = (r30 + r4);
    r3 = r27;
    r4 = r30;
    r5 = 142;
    if constexpr (KnownRegArgsCpuCall<0x800DDFA8u>(&func_800DDFA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_800DDFA8_193CA = func_800DDFA8_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDFA8_193CA;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DDFA8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r29 = r3;
}

loc_800DF35C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF3B4;
    }
}

loc_800DF360:
{
    r4 = MemoryInline::FlatRead16((r3 + 72));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148397920);
}

loc_800DF368:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(-1))) {
        goto loc_800DF994;
    }
}

loc_800DF36C:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 72), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DF37C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DF38C;
    }
}

loc_800DF380:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_800DF3B4;
}

loc_800DF38C:
{
    r3 = (r3 + 4);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    MemoryInline::FlatWriteFloat32((r29 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    MemoryInline::FlatWriteFloat32((r29 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 12));
    MemoryInline::FlatWriteFloat32((r29 + 24), f0.d);
    goto loc_800DF994;
}

loc_800DF3B4:
{
    r3 = r27;
    r4 = 142;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800D8EBC_19CAD = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_19CAD;
        r0 = ctx->gpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        ctr = ctx->ctr;
    }
    r6 = r3;
}

loc_800DF3C8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DF3CC:
{
    r3 = r27;
    r4 = r28;
    r5 = r30;
    r7 = 142;
    r8 = 36;
    r9 = 0;
    ctx->lr = 0x800DF3E8u;
    if constexpr (KnownRegArgsCpuCall<0x800DDE74u>(&func_800DDE74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DDE74_1A04D = func_800DDE74_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDE74_1A04D;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DDE74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
    goto loc_800DF994;
}

loc_800DF3EC:
{
    r30 = (r30 + r4);
    r3 = r27;
    r4 = r30;
    r5 = 144;
    if constexpr (KnownRegArgsCpuCall<0x800DDFA8u>(&func_800DDFA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_800DDFA8_1A419 = func_800DDFA8_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDFA8_1A419;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DDFA8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r29 = r3;
}

loc_800DF408:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF460;
    }
}

loc_800DF40C:
{
    r4 = MemoryInline::FlatRead16((r3 + 72));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148398092);
}

loc_800DF414:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(-1))) {
        goto loc_800DF994;
    }
}

loc_800DF418:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 72), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DF428:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DF438;
    }
}

loc_800DF42C:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_800DF460;
}

loc_800DF438:
{
    r3 = (r3 + 4);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    MemoryInline::FlatWriteFloat32((r29 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    MemoryInline::FlatWriteFloat32((r29 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 12));
    MemoryInline::FlatWriteFloat32((r29 + 24), f0.d);
    goto loc_800DF994;
}

loc_800DF460:
{
    r3 = r27;
    r4 = 144;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800D8EBC_1ACFC = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_1ACFC;
        r0 = ctx->gpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        ctr = ctx->ctr;
    }
    r6 = r3;
}

loc_800DF474:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DF478:
{
    r3 = r27;
    r4 = r28;
    r5 = r30;
    r7 = 144;
    r8 = 25;
    r9 = 0;
    ctx->lr = 0x800DF494u;
    if constexpr (KnownRegArgsCpuCall<0x800DDE74u>(&func_800DDE74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DDE74_1B09C = func_800DDE74_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDE74_1B09C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DDE74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
    goto loc_800DF994;
}

loc_800DF498:
{
    r30 = (r30 + r4);
    r3 = r27;
    r4 = r30;
    r5 = 146;
    if constexpr (KnownRegArgsCpuCall<0x800DDFA8u>(&func_800DDFA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_800DDFA8_1B468 = func_800DDFA8_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDFA8_1B468;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DDFA8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r29 = r3;
}

loc_800DF4B4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF50C;
    }
}

loc_800DF4B8:
{
    r4 = MemoryInline::FlatRead16((r3 + 72));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148398264);
}

loc_800DF4C0:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(-1))) {
        goto loc_800DF994;
    }
}

loc_800DF4C4:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 72), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DF4D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DF4E4;
    }
}

loc_800DF4D8:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_800DF50C;
}

loc_800DF4E4:
{
    r3 = (r3 + 4);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    MemoryInline::FlatWriteFloat32((r29 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    MemoryInline::FlatWriteFloat32((r29 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 12));
    MemoryInline::FlatWriteFloat32((r29 + 24), f0.d);
    goto loc_800DF994;
}

loc_800DF50C:
{
    r3 = r27;
    r4 = 146;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800D8EBC_1BD4B = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_1BD4B;
        r0 = ctx->gpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        ctr = ctx->ctr;
    }
    r6 = r3;
}

loc_800DF520:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DF524:
{
    r3 = r27;
    r4 = r28;
    r5 = r30;
    r7 = 146;
    r8 = 23;
    r9 = 0;
    ctx->lr = 0x800DF540u;
    if constexpr (KnownRegArgsCpuCall<0x800DDE74u>(&func_800DDE74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DDE74_1C0EB = func_800DDE74_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDE74_1C0EB;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DDE74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
    goto loc_800DF994;
}

loc_800DF544:
{
    r30 = (r30 + r4);
    r3 = r27;
    r4 = r30;
    r5 = 158;
    if constexpr (KnownRegArgsCpuCall<0x800DDFA8u>(&func_800DDFA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_800DDFA8_1C4B7 = func_800DDFA8_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDFA8_1C4B7;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DDFA8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r29 = r3;
}

loc_800DF560:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF5B8;
    }
}

loc_800DF564:
{
    r4 = MemoryInline::FlatRead16((r3 + 72));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148398436);
}

loc_800DF56C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(-1))) {
        goto loc_800DF994;
    }
}

loc_800DF570:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 72), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DF580:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DF590;
    }
}

loc_800DF584:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_800DF5B8;
}

loc_800DF590:
{
    r3 = (r3 + 4);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    MemoryInline::FlatWriteFloat32((r29 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    MemoryInline::FlatWriteFloat32((r29 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 12));
    MemoryInline::FlatWriteFloat32((r29 + 24), f0.d);
    goto loc_800DF994;
}

loc_800DF5B8:
{
    r3 = r27;
    r4 = 158;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800D8EBC_1CD9A = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_1CD9A;
        r0 = ctx->gpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        ctr = ctx->ctr;
    }
    r6 = r3;
}

loc_800DF5CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DF5D0:
{
    r3 = r27;
    r4 = r28;
    r5 = r30;
    r7 = 158;
    r8 = 42;
    r9 = 0;
    ctx->lr = 0x800DF5ECu;
    if constexpr (KnownRegArgsCpuCall<0x800DDE74u>(&func_800DDE74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DDE74_1D13A = func_800DDE74_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDE74_1D13A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DDE74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
    goto loc_800DF994;
}

loc_800DF5F0:
{
    r30 = (r30 + r4);
    r3 = r27;
    r4 = r30;
    r5 = 163;
    if constexpr (KnownRegArgsCpuCall<0x800DDFA8u>(&func_800DDFA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_800DDFA8_1D506 = func_800DDFA8_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDFA8_1D506;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DDFA8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r29 = r3;
}

loc_800DF60C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF664;
    }
}

loc_800DF610:
{
    r4 = MemoryInline::FlatRead16((r3 + 72));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148398608);
}

loc_800DF618:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(-1))) {
        goto loc_800DF994;
    }
}

loc_800DF61C:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 72), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DF62C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DF63C;
    }
}

loc_800DF630:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_800DF664;
}

loc_800DF63C:
{
    r3 = (r3 + 4);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    MemoryInline::FlatWriteFloat32((r29 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    MemoryInline::FlatWriteFloat32((r29 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 12));
    MemoryInline::FlatWriteFloat32((r29 + 24), f0.d);
    goto loc_800DF994;
}

loc_800DF664:
{
    r3 = r27;
    r4 = 163;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800D8EBC_1DDE9 = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_1DDE9;
        r0 = ctx->gpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        ctr = ctx->ctr;
    }
    r6 = r3;
}

loc_800DF678:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DF67C:
{
    r3 = r27;
    r4 = r28;
    r5 = r30;
    r7 = 163;
    r8 = 16;
    r9 = 0;
    ctx->lr = 0x800DF698u;
    if constexpr (KnownRegArgsCpuCall<0x800DDE74u>(&func_800DDE74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DDE74_1E189 = func_800DDE74_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDE74_1E189;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DDE74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
    goto loc_800DF994;
}

loc_800DF69C:
{
    r30 = (r30 + r4);
    r3 = r27;
    r4 = r30;
    r5 = 184;
    if constexpr (KnownRegArgsCpuCall<0x800DDFA8u>(&func_800DDFA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_800DDFA8_1E555 = func_800DDFA8_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDFA8_1E555;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DDFA8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r29 = r3;
}

loc_800DF6B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF710;
    }
}

loc_800DF6BC:
{
    r4 = MemoryInline::FlatRead16((r3 + 72));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148398780);
}

loc_800DF6C4:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(-1))) {
        goto loc_800DF994;
    }
}

loc_800DF6C8:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 72), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DF6D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DF6E8;
    }
}

loc_800DF6DC:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_800DF710;
}

loc_800DF6E8:
{
    r3 = (r3 + 4);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    MemoryInline::FlatWriteFloat32((r29 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    MemoryInline::FlatWriteFloat32((r29 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 12));
    MemoryInline::FlatWriteFloat32((r29 + 24), f0.d);
    goto loc_800DF994;
}

loc_800DF710:
{
    r3 = r27;
    r4 = 184;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800D8EBC_1EE38 = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_1EE38;
        r0 = ctx->gpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        ctr = ctx->ctr;
    }
    r6 = r3;
}

loc_800DF724:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DF728:
{
    r3 = r27;
    r4 = r28;
    r5 = r30;
    r7 = 184;
    r8 = 30;
    r9 = 0;
    ctx->lr = 0x800DF744u;
    if constexpr (KnownRegArgsCpuCall<0x800DDE74u>(&func_800DDE74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DDE74_1F1D8 = func_800DDE74_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDE74_1F1D8;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DDE74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
    goto loc_800DF994;
}

loc_800DF748:
{
    r30 = (r30 + r4);
    r31 = 38;
    goto loc_800DF75C;
}

loc_800DF754:
{
    r30 = (r30 + r4);
    r31 = 39;
}

loc_800DF75C:
{
    r3 = r27;
    r4 = r30;
    r5 = r31;
    if constexpr (KnownRegArgsCpuCall<0x800DDFA8u>(&func_800DDFA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_800DDFA8_1F613 = func_800DDFA8_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDFA8_1F613;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DDFA8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r29 = r3;
}

loc_800DF774:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF7CC;
    }
}

loc_800DF778:
{
    r4 = MemoryInline::FlatRead16((r3 + 72));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148398968);
}

loc_800DF780:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(-1))) {
        goto loc_800DF994;
    }
}

loc_800DF784:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 72), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DF794:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DF7A4;
    }
}

loc_800DF798:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_800DF7CC;
}

loc_800DF7A4:
{
    r3 = (r3 + 4);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    MemoryInline::FlatWriteFloat32((r29 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    MemoryInline::FlatWriteFloat32((r29 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 12));
    MemoryInline::FlatWriteFloat32((r29 + 24), f0.d);
    goto loc_800DF994;
}

loc_800DF7CC:
{
    r3 = r27;
    r4 = r31;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800D8EBC_1FEF6 = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_1FEF6;
        r0 = ctx->gpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        ctr = ctx->ctr;
    }
    r6 = r3;
}

loc_800DF7E0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DF7E4:
{
    r3 = r27;
    r4 = r28;
    r5 = r30;
    r7 = r31;
    r8 = 15;
    r9 = 0;
    ctx->lr = 0x800DF800u;
    if constexpr (KnownRegArgsCpuCall<0x800DDE74u>(&func_800DDE74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DDE74_20296 = func_800DDE74_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDE74_20296;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DDE74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
    goto loc_800DF994;
}

loc_800DF804:
{
    r30 = (r30 + r4);
    r31 = 50;
    goto loc_800DF818;
}

loc_800DF810:
{
    r30 = (r30 + r4);
    r31 = 52;
}

loc_800DF818:
{
    r3 = r27;
    r4 = r30;
    r5 = r31;
    if constexpr (KnownRegArgsCpuCall<0x800DDFA8u>(&func_800DDFA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_800DDFA8_206D1 = func_800DDFA8_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDFA8_206D1;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DDFA8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r29 = r3;
}

loc_800DF830:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF888;
    }
}

loc_800DF834:
{
    r4 = MemoryInline::FlatRead16((r3 + 72));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148399156);
}

loc_800DF83C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(-1))) {
        goto loc_800DF994;
    }
}

loc_800DF840:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 72), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DF850:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DF860;
    }
}

loc_800DF854:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_800DF888;
}

loc_800DF860:
{
    r3 = (r3 + 4);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    MemoryInline::FlatWriteFloat32((r29 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    MemoryInline::FlatWriteFloat32((r29 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 12));
    MemoryInline::FlatWriteFloat32((r29 + 24), f0.d);
    goto loc_800DF994;
}

loc_800DF888:
{
    r3 = r27;
    r4 = r31;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800D8EBC_20FB4 = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_20FB4;
        r0 = ctx->gpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        ctr = ctx->ctr;
    }
    r6 = r3;
}

loc_800DF89C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DF8A0:
{
    r3 = r27;
    r4 = r28;
    r5 = r30;
    r7 = r31;
    r8 = 10;
    r9 = 0;
    ctx->lr = 0x800DF8BCu;
    if constexpr (KnownRegArgsCpuCall<0x800DDE74u>(&func_800DDE74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DDE74_21354 = func_800DDE74_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDE74_21354;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DDE74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
    goto loc_800DF994;
}

loc_800DF8C0:
{
    r30 = (r30 + r4);
    r3 = 0;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl5_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl5_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl5_0x800CFB10;
    }
}

loc_inl5_0x800CFB08:
{
    r3 = 0;
    goto loc_inl5_cont_800CFAF4;
}

loc_inl5_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl5_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl5_0x800CFB24;
    }
}

loc_inl5_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl5_cont_800CFAF4;
}

loc_inl5_0x800CFB24:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl5_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r29 = r3;
}

loc_800DF8D4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DF8D8:
{
    r3 = r28;
    ctx->lr = 0x800DF8E0u;
    if constexpr (KnownRegArgsCpuCall<0x800D8DF0u>(&func_800D8DF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_800D8DF0_21B0E = func_800D8DF0_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800D8DF0_21B0E);
        r4 = static_cast<uint32_t>(regargs_result_800D8DF0_21B0E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8DF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
}

loc_800DF8E4:
{
    r31 = 29;
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800DF8F0;
    }
}

loc_800DF8EC:
{
    r31 = 129;
}

loc_800DF8F0:
{
    r3 = MemoryInline::FlatRead32((r29 + 312));
    r4 = r30;
    r5 = r31;
    if constexpr (KnownRegArgsCpuCall<0x800DDFA8u>(&func_800DDFA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_800DDFA8_22007 = func_800DDFA8_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDFA8_22007;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DDFA8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r27 = r3;
}

loc_800DF908:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF960;
    }
}

loc_800DF90C:
{
    r4 = MemoryInline::FlatRead16((r3 + 72));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148399372);
}

loc_800DF914:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(-1))) {
        goto loc_800DF994;
    }
}

loc_800DF918:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 72), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800DF928:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DF938;
    }
}

loc_800DF92C:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_800DF960;
}

loc_800DF938:
{
    r3 = (r3 + 4);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 4));
    MemoryInline::FlatWriteFloat32((r27 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 8));
    MemoryInline::FlatWriteFloat32((r27 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 12));
    MemoryInline::FlatWriteFloat32((r27 + 24), f0.d);
    goto loc_800DF994;
}

loc_800DF960:
{
    r3 = MemoryInline::FlatRead32((r29 + 312));
    r4 = r31;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800D8EBC_2290C = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_2290C;
        r0 = ctx->gpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        ctr = ctx->ctr;
    }
    r6 = r3;
}

loc_800DF974:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DF994;
    }
}

loc_800DF978:
{
    r3 = MemoryInline::FlatRead32((r29 + 312));
    r4 = r28;
    r5 = r30;
    r7 = r31;
    r8 = 12;
    r9 = 0;
    ctx->lr = 0x800DF994u;
    if constexpr (KnownRegArgsCpuCall<0x800DDE74u>(&func_800DDE74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DDE74_22CCE = func_800DDE74_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800DDE74_22CCE;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DDE74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
}

loc_800DF994:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800DE360(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800DE360_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800DE360 func_800DE360 preserves=true fpr_mask=0x00000000
