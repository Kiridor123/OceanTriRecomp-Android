#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80125FB8(CpuContext* ctx);
extern "C" uint32_t func_80125FB8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80142444(CpuContext* ctx);
extern "C" uint64_t func_80142444_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80142C24(CpuContext* ctx);
extern "C" uint64_t func_80142C24_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801436B8(CpuContext* ctx);
extern "C" uint64_t func_801436B8_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_803AE094(CpuContext* ctx);
extern "C" uint64_t func_803AE094_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_803AE488_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_803AE488;

loc_803AE488:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r25 = r3;
    r3 = (r1 + 8);
    ctx->lr = 0x803AE4A8u;
    if constexpr (KnownRegArgsCpuCall<0x80125FB8u>(&func_80125FB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80125FB8_CEC = func_80125FB8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80125FB8_CEC;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80125FB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
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
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl1_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r26 = r3;
}

loc_803AE4B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803AE980;
    }
}

loc_803AE4BC:
{
    r5 = 0;
    r4 = MemoryInline::FlatRead32((r13 + -16864));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_803AE4C8:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_803AE4D8;
    }
}

loc_803AE4CC:
{
    r29 = MemoryInline::FlatRead32((r4 + 26460));
}

loc_803AE4D4:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_803AE4F0;
    }
}

loc_803AE4D8:
{
    r0 = MemoryInline::FlatRead32((r3 + 324));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r4 = 0x805F0000u;
    r4 = (r4 + 22336);
    r4_addr_1 = (r4 + r0);
    r29 = MemoryInline::FlatRead32(r4_addr_1);
    goto loc_803AE4F8;
}

loc_803AE4F0:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_803AE4F8;
    }
}

loc_803AE4F4:
{
    r5 = r29;
}

loc_803AE4F8:
{
}

loc_803AE4FC:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_803AE980;
    }
}

loc_803AE500:
{
}

loc_803AE504:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_803AE560;
    }
}

loc_803AE508:
{
    r3 = MemoryInline::FlatRead8((r3 + 233));
    r4 = r26;
    ctx->lr = 0x803AE514u;
    if constexpr (KnownRegArgsCpuCall<0x803AE094u>(&func_803AE094)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_803AE094_18BD = func_803AE094_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803AE094_18BD);
        r4 = static_cast<uint32_t>(regargs_result_803AE094_18BD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x803AE094u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
    r3 = MemoryInline::FlatRead32((r25 + 148));
    r0 = (r3 & 1);
}

loc_803AE520:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AE52C;
    }
}

loc_803AE524:
{
    r0 = (r3 | 8);
    MemoryInline::FlatWrite32((r25 + 148), r0);
}

loc_803AE52C:
{
    r3 = MemoryInline::FlatRead32((r25 + 244));
    r0 = (r3 & 1);
}

loc_803AE538:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AE544;
    }
}

loc_803AE53C:
{
    r0 = (r3 | 8);
    MemoryInline::FlatWrite32((r25 + 244), r0);
}

loc_803AE544:
{
    r3 = MemoryInline::FlatRead32((r25 + 340));
    r0 = (r3 & 1);
}

loc_803AE550:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AE980;
    }
}

loc_803AE554:
{
    r0 = (r3 | 8);
    MemoryInline::FlatWrite32((r25 + 340), r0);
    goto loc_803AE980;
}

loc_803AE560:
{
    r31 = 0;
    r24 = 1;
    goto loc_803AE794;
}

loc_803AE56C:
{
    r0 = MemoryInline::FlatRead8((r29 + 40));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803AE578:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_803AE790;
    }
}

loc_803AE57C:
{
    r30 = 0;
    goto loc_803AE784;
}

loc_803AE584:
{
    r4 = MemoryInline::FlatRead8((r25 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_803AE590:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(2))) {
        goto loc_803AE780;
    }
}

loc_803AE594:
{
    r5 = MemoryInline::FlatRead32((r13 + -16864));
}

loc_803AE59C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_803AE624;
    }
}

loc_803AE5A0:
{
    r0 = MemoryInline::FlatRead32((r5 + 26460));
}

loc_803AE5A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AE624;
    }
}

loc_803AE5AC:
{
    r27 = 0;
    r0 = MemoryInline::FlatRead32(r29);
    r3 = (r0 & 255);
    r0 = MemoryInline::FlatRead8((r5 + 793));
}

loc_803AE5C0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_803AE618;
    }
}

loc_803AE5C4:
{
    r27 = 1;
    r0 = MemoryInline::FlatRead8((r5 + 801));
}

loc_803AE5D0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_803AE618;
    }
}

loc_803AE5D4:
{
    r27 = 2;
    r0 = MemoryInline::FlatRead8((r5 + 809));
}

loc_803AE5E0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_803AE618;
    }
}

loc_803AE5E4:
{
    r27 = 3;
    r0 = MemoryInline::FlatRead8((r5 + 817));
}

loc_803AE5F0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_803AE618;
    }
}

loc_803AE5F4:
{
    r27 = 4;
    r0 = MemoryInline::FlatRead8((r5 + 825));
}

loc_803AE600:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_803AE618;
    }
}

loc_803AE604:
{
    r27 = 5;
    r0 = MemoryInline::FlatRead8((r5 + 833));
}

loc_803AE610:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_803AE618;
    }
}

loc_803AE614:
{
    r27 = 6;
}

loc_803AE618:
{
}

loc_803AE61C:
{
    if ((static_cast<int32_t>(r27) >= static_cast<int32_t>(6))) {
        goto loc_803AE790;
    }
}

loc_803AE620:
{
    goto loc_803AE62C;
}

loc_803AE624:
{
    r27 = MemoryInline::FlatRead8((r29 + 40));
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
}

loc_803AE62C:
{
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r3 = (r25 + r0);
    MemoryInline::FlatWrite16((r3 + 1132), static_cast<uint16_t>(r4));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r22 = (r26 + r0);
    r0 = MemoryInline::FlatRead8((r25 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite32((r22 + 8796), r0);
    r3 = (r1 + 8);
    r4 = (r29 + 8);
    ctx->lr = 0x803AE65Cu;
    if constexpr (KnownRegArgsCpuCall<0x80142444u>(&func_80142444)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80142444_3075 = func_80142444_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80142444_3075);
        r4 = static_cast<uint32_t>(regargs_result_80142444_3075 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80142444u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(4));
    r0 = (r0_rot_9 & -16);
    r23 = (r26 + r0);
    r0 = MemoryInline::FlatRead32((r22 + 8796));
    MemoryInline::FlatWrite32((r23 + 8820), r0);
    MemoryInline::FlatWrite32((r23 + 8828), r29);
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r23 + 8824), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32(r29);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r23 + 8826), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r23 + 8832), r31);
    r0 = MemoryInline::FlatRead8((r29 + 10));
}

loc_803AE694:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_803AE6CC;
    }
}

loc_803AE698:
{
    r0 = MemoryInline::FlatRead32(r29);
    r3 = (r0 & 255);
    r4 = (r1 + 8);
    r5 = MemoryInline::FlatRead8((r25 + 776));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r5 = (r5 & 65535);
    ctx->lr = 0x803AE6B4u;
    if constexpr (KnownRegArgsCpuCall<0x801436B8u>(&func_801436B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_801436B8_3897 = func_801436B8_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801436B8_3897);
        r4 = static_cast<uint32_t>(regargs_result_801436B8_3897 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x801436B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r28 = r3;
}

loc_803AE6BC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803AE780;
    }
}

loc_803AE6C0:
{
    r5 = MemoryInline::FlatRead32((r3 + 48));
    MemoryInline::FlatWrite32((r23 + 8832), r3);
    goto loc_803AE6F4;
}

loc_803AE6CC:
{
    r0 = MemoryInline::FlatRead32(r29);
    r3 = (r0 & 255);
    r4 = (r1 + 8);
    r5 = MemoryInline::FlatRead8((r25 + 776));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r5 = (r5 & 65535);
    ctx->lr = 0x803AE6E8u;
    if constexpr (KnownRegArgsCpuCall<0x80142C24u>(&func_80142C24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80142C24_3F1C = func_80142C24_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80142C24_3F1C);
        r4 = static_cast<uint32_t>(regargs_result_80142C24_3F1C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x80142C24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
    r5 = r3;
}

loc_803AE6F0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803AE780;
    }
}

loc_803AE6F4:
{
    r0 = MemoryInline::FlatRead8((r25 + 776));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & -2);
    r3 = (r25 + r0);
    MemoryInline::FlatWrite16((r3 + 1132), static_cast<uint16_t>(r4));
    r0 = MemoryInline::FlatRead8((r29 + 40));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803AE714:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_803AE780;
    }
}

loc_803AE718:
{
    r0 = (r27 * 96);
    r3 = (r25 + r0);
    r0 = MemoryInline::FlatRead32((r29 + 44));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r3 + 148), r0);
    r0 = MemoryInline::FlatRead32(r29);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r3 + 152), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 154), static_cast<uint16_t>(r24));
    r0 = MemoryInline::FlatRead8((r29 + 10));
}

loc_803AE744:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_803AE758;
    }
}

loc_803AE748:
{
    r3 = r28;
    r4 = r27;
    // inline leaf 0x80137670 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 13), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x80137670
    goto loc_803AE764;
}

loc_803AE758:
{
    r3 = r5;
    r4 = r27;
    // inline leaf 0x80137668 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 13), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x80137668
}

loc_803AE764:
{
    r0 = MemoryInline::FlatRead32(r29);
    r0 = (r0 & 255);
    r3 = (r25 + r27);
    MemoryInline::FlatWrite8((r3 + 724), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r25 + 776));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r25 + 776), static_cast<uint8_t>(r0));
}

loc_803AE780:
{
    r30 = (r30 + 1);
}

loc_803AE784:
{
    r0 = MemoryInline::FlatRead32((r29 + 4));
}

loc_803AE78C:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r0))) {
        goto loc_803AE584;
    }
}

loc_803AE790:
{
    r29 = (r29 + 48);
}

loc_803AE794:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_803AE79C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803AE56C;
    }
}

loc_803AE7A0:
{
    r3 = MemoryInline::FlatRead32((r13 + -16864));
}

loc_803AE7A8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803AE980;
    }
}

loc_803AE7AC:
{
    r29 = MemoryInline::FlatRead32((r3 + 26460));
}

loc_803AE7B4:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_803AE7BC;
    }
}

loc_803AE7B8:
{
    goto loc_803AE980;
}

loc_803AE7BC:
{
    r0 = MemoryInline::FlatRead8((r3 + 26464));
}

loc_803AE7C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AE980;
    }
}

loc_803AE7C8:
{
    r0 = MemoryInline::FlatRead8((r25 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803AE7D4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(2))) {
        goto loc_803AE980;
    }
}

loc_803AE7D8:
{
    r30 = 0;
    r0 = MemoryInline::FlatRead8((r3 + 793));
}

loc_803AE7E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AE83C;
    }
}

loc_803AE7E8:
{
    r30 = 1;
    r0 = MemoryInline::FlatRead8((r3 + 801));
}

loc_803AE7F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AE83C;
    }
}

loc_803AE7F8:
{
    r30 = 2;
    r0 = MemoryInline::FlatRead8((r3 + 809));
}

loc_803AE804:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AE83C;
    }
}

loc_803AE808:
{
    r30 = 3;
    r0 = MemoryInline::FlatRead8((r3 + 817));
}

loc_803AE814:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AE83C;
    }
}

loc_803AE818:
{
    r30 = 4;
    r0 = MemoryInline::FlatRead8((r3 + 825));
}

loc_803AE824:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AE83C;
    }
}

loc_803AE828:
{
    r30 = 5;
    r0 = MemoryInline::FlatRead8((r3 + 833));
}

loc_803AE834:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AE83C;
    }
}

loc_803AE838:
{
    r30 = 6;
}

loc_803AE83C:
{
}

loc_803AE840:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(3))) {
        goto loc_803AE980;
    }
}

loc_803AE844:
{
    goto loc_803AE974;
}

loc_803AE848:
{
    r0 = MemoryInline::FlatRead8((r29 + 40));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803AE854:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_803AE970;
    }
}

loc_803AE858:
{
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = MemoryInline::FlatRead8((r3 + 26464));
    r0 = (r4 & 255);
}

loc_803AE868:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_803AE970;
    }
}

loc_803AE86C:
{
    r22 = 0;
    goto loc_803AE964;
}

loc_803AE874:
{
    r3 = (r1 + 8);
    r4 = (r29 + 8);
    ctx->lr = 0x803AE880u;
    if constexpr (KnownRegArgsCpuCall<0x80142444u>(&func_80142444)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80142444_5BC0 = func_80142444_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80142444_5BC0);
        r4 = static_cast<uint32_t>(regargs_result_80142444_5BC0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80142444u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r0 = MemoryInline::FlatRead8((r29 + 10));
}

loc_803AE888:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_803AE8BC;
    }
}

loc_803AE88C:
{
    r0 = MemoryInline::FlatRead32(r29);
    r3 = (r0 & 255);
    r4 = (r1 + 8);
    r5 = MemoryInline::FlatRead8((r25 + 776));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r5 = (r5 & 65535);
    ctx->lr = 0x803AE8A8u;
    if constexpr (KnownRegArgsCpuCall<0x801436B8u>(&func_801436B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_801436B8_6150 = func_801436B8_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801436B8_6150);
        r4 = static_cast<uint32_t>(regargs_result_801436B8_6150 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x801436B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r28 = r3;
}

loc_803AE8B0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803AE960;
    }
}

loc_803AE8B4:
{
    r3 = MemoryInline::FlatRead32((r3 + 48));
    goto loc_803AE8E0;
}

loc_803AE8BC:
{
    r0 = MemoryInline::FlatRead32(r29);
    r3 = (r0 & 255);
    r4 = (r1 + 8);
    r5 = MemoryInline::FlatRead8((r25 + 776));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r5 = (r5 & 65535);
    ctx->lr = 0x803AE8D8u;
    if constexpr (KnownRegArgsCpuCall<0x80142C24u>(&func_80142C24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80142C24_67A3 = func_80142C24_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80142C24_67A3);
        r4 = static_cast<uint32_t>(regargs_result_80142C24_67A3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x80142C24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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

loc_803AE8DC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803AE960;
    }
}

loc_803AE8E0:
{
    r0 = MemoryInline::FlatRead8((r25 + 776));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_13 & -2);
    r4 = (r25 + r0);
    MemoryInline::FlatWrite16((r4 + 1132), static_cast<uint16_t>(r5));
    r0 = (r30 * 96);
    r4 = (r25 + r0);
    r0 = MemoryInline::FlatRead32((r29 + 44));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r4 + 148), r0);
    r0 = MemoryInline::FlatRead32(r29);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r4 + 152), static_cast<uint16_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite16((r4 + 154), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 10));
}

loc_803AE924:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_803AE938;
    }
}

loc_803AE928:
{
    r3 = r28;
    r4 = r30;
    // inline leaf 0x80137670 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 13), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x80137670
    goto loc_803AE940;
}

loc_803AE938:
{
    r4 = r30;
    // inline leaf 0x80137668 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 13), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x80137668
}

loc_803AE940:
{
    r0 = MemoryInline::FlatRead32(r29);
    r0 = (r0 & 255);
    r3 = (r25 + r30);
    MemoryInline::FlatWrite8((r3 + 724), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r25 + 776));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r25 + 776), static_cast<uint8_t>(r0));
    goto loc_803AE980;
}

loc_803AE960:
{
    r22 = (r22 + 1);
}

loc_803AE964:
{
    r0 = MemoryInline::FlatRead32((r29 + 4));
}

loc_803AE96C:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(r0))) {
        goto loc_803AE874;
    }
}

loc_803AE970:
{
    r29 = (r29 + 48);
}

loc_803AE974:
{
    r4 = MemoryInline::FlatRead32(r29);
}

loc_803AE97C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_803AE848;
    }
}

loc_803AE980:
{
    r11 = (r1 + 80);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803AE488(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803AE488_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803AE488 func_803AE488 preserves=true fpr_mask=0x00000000
