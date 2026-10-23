#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CEA98(CpuContext* ctx);
extern "C" uint64_t func_800CEA98_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80125FB8(CpuContext* ctx);
extern "C" uint32_t func_80125FB8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80142444(CpuContext* ctx);
extern "C" uint64_t func_80142444_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80142D4C(CpuContext* ctx);
extern "C" uint64_t func_80142D4C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80144644(CpuContext* ctx);
extern "C" uint64_t func_80144644_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80146B80(CpuContext* ctx);
extern "C" uint64_t func_80146B80_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803397B4(CpuContext* ctx);
extern "C" uint64_t func_803397B4_ra380_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80451350(CpuContext* ctx);
extern "C" uint64_t func_80451350_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_803B17E0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
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
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_803B17E0;

loc_803B17E0:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    r11 = (r1 + 112);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r28 = r3;
    r30 = MemoryInline::FlatRead32((r13 + -16864));
}

loc_803B1800:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_803B1E04;
    }
}

loc_803B1804:
{
    r4 = MemoryInline::FlatRead8((r30 + 27000));
}

loc_803B180C:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(13))) {
        goto loc_803B1E04;
    }
}

loc_803B1810:
{
    r3 = 0x80600000u;
    r3 = (r3 + -31888);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x803B1828u:
        goto loc_803B1828;
        break;
    case 0x803B1840u:
        goto loc_803B1840;
        break;
    case 0x803B1890u:
        goto loc_803B1890;
        break;
    case 0x803B18B4u:
        goto loc_803B18B4;
        break;
    case 0x803B1AD4u:
        goto loc_803B1AD4;
        break;
    case 0x803B1E04u:
        goto loc_803B1E04;
        break;
    case 0x803B1B30u:
        goto loc_803B1B30;
        break;
    case 0x803B1B58u:
        goto loc_803B1B58;
        break;
    case 0x803B1B80u:
        goto loc_803B1B80;
        break;
    case 0x803B1DACu:
        goto loc_803B1DAC;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
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

loc_803B1828:
{
    r0 = MemoryInline::FlatRead8((r30 + 26999));
}

loc_803B1830:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803B1E04;
    }
}

loc_803B1834:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r30 + 27000), static_cast<uint8_t>(r0));
    goto loc_803B1E04;
}

loc_803B1840:
{
    r0 = MemoryInline::FlatRead8((r30 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r28 = (r30 + r0);
    r3 = MemoryInline::FlatRead8((r28 + 793));
    ctx->lr = 0x803B1858u;
    if constexpr (KnownRegArgsCpuCall<0x80146B80u>(&func_80146B80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80146B80_1C55 = func_80146B80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80146B80_1C55);
        r4 = static_cast<uint32_t>(regargs_result_80146B80_1C55 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80146B80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
}

loc_803B185C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803B1E04;
    }
}

loc_803B1860:
{
    r3 = MemoryInline::FlatRead8((r28 + 793));
    ctx->lr = 0x803B1868u;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801410B4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    // inline leaf 0x8045169C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16440));
    r3 = MemoryInline::FlatRead8((r3 + 17));
    r0 = (r3 + -7);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x8045169C
}

loc_803B1870:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803B1884;
    }
}

loc_803B1874:
{
    r3 = MemoryInline::FlatRead8((r30 + 27000));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 27000), static_cast<uint8_t>(r0));
    goto loc_803B1E04;
}

loc_803B1884:
{
    r0 = 10;
    MemoryInline::FlatWrite8((r30 + 27000), static_cast<uint8_t>(r0));
    goto loc_803B1E04;
}

loc_803B1890:
{
    r3 = 0;
    r4 = 0;
    ctx->lr = 0x803B189Cu;
    if constexpr (KnownRegArgsCpuCall<0x800CEA98u>(&func_800CEA98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800CEA98_276F = func_800CEA98_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800CEA98_276F);
        r4 = static_cast<uint32_t>(regargs_result_800CEA98_276F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800CEA98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
}

loc_803B18A0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_803B1E04;
    }
}

loc_803B18A4:
{
    r3 = MemoryInline::FlatRead8((r30 + 27000));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 27000), static_cast<uint8_t>(r0));
    goto loc_803B1E04;
}

loc_803B18B4:
{
    r0 = MemoryInline::FlatRead8((r30 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & -8);
    r31 = (r30 + r0);
    r3 = (r1 + 56);
    ctx->lr = 0x803B18CCu;
    if constexpr (KnownRegArgsCpuCall<0x80125FB8u>(&func_80125FB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80125FB8_2DA4 = func_80125FB8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80125FB8_2DA4;
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
    r0 = MemoryInline::FlatRead8((r31 + 793));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = 0x805F0000u;
    r3 = (r3 + 32352);
    r3_addr_2 = (r3 + r0);
    r29 = MemoryInline::FlatRead32(r3_addr_2);
}

loc_803B18E4:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_803B1E04;
    }
}

loc_803B18E8:
{
    goto loc_803B1908;
}

loc_803B18EC:
{
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r3 = (r3 & 255);
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl3_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_2 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_2);
}

loc_inl3_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x802B06E4:
{
    r3 = r0;
    goto loc_inl3_cont_802B06CC;
}

loc_inl3_return:
{
}

loc_inl3_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_803B1900:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(r0))) {
        goto loc_803B1914;
    }
}

loc_803B1904:
{
    r29 = (r29 + 8);
}

loc_803B1908:
{
    r27 = MemoryInline::FlatRead8(r29);
}

loc_803B1910:
{
    if ((static_cast<uint32_t>(r27) != static_cast<uint32_t>(255))) {
        goto loc_803B18EC;
    }
}

loc_803B1914:
{
    r0 = (r27 & 255);
}

loc_803B191C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_803B1E04;
    }
}

loc_803B1920:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 60), 0, 717u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 60));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 716u, (r30 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & -8);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 788));
    MemoryInline::FlatWrite8((r31 + 793), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 60));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 716u, (r30 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_6 & -8);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 789));
    MemoryInline::FlatWrite8((r31 + 794), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 60));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 716u, (r30 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_7 & -8);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 790));
    MemoryInline::FlatWrite8((r31 + 795), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 60));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 716u, (r30 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_8 & -8);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 792));
    MemoryInline::FlatWrite8((r31 + 797), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 60));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 716u, (r30 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_9 & -8);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 793));
    MemoryInline::FlatWrite8((r31 + 798), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 60));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 716u, (r30 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_10 & -8);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 794));
    MemoryInline::FlatWrite8((r31 + 799), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 60));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 716u, (r30 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_11 & -8);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 795));
    MemoryInline::FlatWrite8((r31 + 800), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 716u, (r30 + 776));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_12 & -2);
    r3 = (r30 + r0);
    MemoryInline::FlatWrite16((r3 + 1132), static_cast<uint16_t>(r4));
    r4 = MemoryInline::FlatRead8((r31 + 797));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 716u, (r30 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 1144), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r31 + 798));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 716u, (r30 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 1150), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r31 + 799));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 716u, (r30 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 1156), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r31 + 800));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 716u, (r30 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 1162), static_cast<uint8_t>(r4));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 716u, (r30 + 776));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r0 = (r0_rot_13 & -16);
    r4 = (r28 + r0);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_14 & -2);
    r3 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 1132));
    MemoryInline::FlatWrite32((r4 + 8820), r0);
    r0 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite32((r4 + 8828), r0);
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r4 + 8824), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 793));
    MemoryInline::FlatWrite16((r4 + 8826), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r4 + 8832), r0);
    r3 = (r1 + 56);
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r0 = MemoryInline::FlatRead8((r31 + 794));
    r0 = (r0 * 48);
    r4 = (r4 + r0);
    r4 = (r4 + 8);
    ctx->lr = 0x803B1AACu;
    if constexpr (KnownRegArgsCpuCall<0x80142444u>(&func_80142444)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80142444_4E40 = func_80142444_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80142444_4E40);
        r4 = static_cast<uint32_t>(regargs_result_80142444_4E40 >> 32);
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
    r3 = MemoryInline::FlatRead8((r31 + 793));
    r4 = (r1 + 56);
    r5 = MemoryInline::FlatRead8((r30 + 776));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r5 = (r5 & 65535);
    ctx->lr = 0x803B1AC4u;
    if constexpr (KnownRegArgsCpuCall<0x80142D4Cu>(&func_80142D4C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_80142D4C_5300 = func_80142D4C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80142D4C_5300);
        r4 = static_cast<uint32_t>(regargs_result_80142D4C_5300 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
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
        InvokeDirectCpu<0x80142D4Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
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
    r3 = MemoryInline::FlatRead8((r30 + 27000));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 27000), static_cast<uint8_t>(r0));
    goto loc_803B1E04;
}

loc_803B1AD4:
{
    r28 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r28);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r3 = MemoryInline::FlatRead8((r30 + 776));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r3 = (r3 & 65535);
    r4 = (r1 + 20);
    r5 = (r1 + 16);
    ctx->lr = 0x803B1AF8u;
    if constexpr (KnownRegArgsCpuCall<0x80144644u>(&func_80144644)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80144644_5C53 = func_80144644_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80144644_5C53);
        r4 = static_cast<uint32_t>(regargs_result_80144644_5C53 >> 32);
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
        InvokeDirectCpu<0x80144644u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    r0 = (r3 & 255);
}

loc_803B1B00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B1E04;
    }
}

loc_803B1B04:
{
    r3 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead8((r30 + 776));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // inline leaf 0x80137668 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 13), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x80137668
    MemoryInline::FlatWrite8((r30 + 27000), static_cast<uint8_t>(r28));
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 26999), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r30 + 776));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 776), static_cast<uint8_t>(r0));
    goto loc_803B1E04;
}

loc_803B1B30:
{
    r3 = 0;
    r4 = 0;
    ctx->lr = 0x803B1B3Cu;
    if constexpr (KnownRegArgsCpuCall<0x800CEA98u>(&func_800CEA98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800CEA98_6332 = func_800CEA98_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800CEA98_6332);
        r4 = static_cast<uint32_t>(regargs_result_800CEA98_6332 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800CEA98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
}

loc_803B1B40:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_803B1E04;
    }
}

loc_803B1B44:
{
    ctx->lr = 0x803B1B48u;
    if constexpr (KnownRegArgsCpuCall<0x803397B4u>(&func_803397B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_803397B4_67F3 = func_803397B4_ra380_1fe_18_0(ctx, r7, r8, r9, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803397B4_67F3);
        r4 = static_cast<uint32_t>(regargs_result_803397B4_67F3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x803397B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
    r3 = MemoryInline::FlatRead8((r30 + 27000));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 27000), static_cast<uint8_t>(r0));
    goto loc_803B1E04;
}

loc_803B1B58:
{
    if constexpr (KnownRegArgsCpuCall<0x80451350u>(&func_80451350)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80451350_6FB7 = func_80451350_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80451350_6FB7);
        r4 = static_cast<uint32_t>(regargs_result_80451350_6FB7 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80451350u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = MemoryInline::FlatRead8((r30 + 27044));
}

loc_803B1B68:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_803B1E04;
    }
}

loc_803B1B6C:
{
    r0 = 12;
    MemoryInline::FlatWrite8((r30 + 27000), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 27044), static_cast<uint8_t>(r0));
    goto loc_803B1E04;
}

loc_803B1B80:
{
    r0 = MemoryInline::FlatRead8((r30 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_15 & -8);
    r31 = (r30 + r0);
    r3 = (r1 + 24);
    ctx->lr = 0x803B1B98u;
    if constexpr (KnownRegArgsCpuCall<0x80125FB8u>(&func_80125FB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80125FB8_7534 = func_80125FB8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80125FB8_7534;
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
    r0 = MemoryInline::FlatRead8((r31 + 793));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_16 & -4);
    r3 = 0x805F0000u;
    r3 = (r3 + 32352);
    r3_addr_3 = (r3 + r0);
    r29 = MemoryInline::FlatRead32(r3_addr_3);
}

loc_803B1BB0:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_803B1E04;
    }
}

loc_803B1BB4:
{
    goto loc_803B1BD4;
}

loc_803B1BB8:
{
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r3 = (r3 & 255);
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl6_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_5 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_5);
}

loc_inl6_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x802B06E4:
{
    r3 = r0;
    goto loc_inl6_cont_802B06CC;
}

loc_inl6_return:
{
}

loc_inl6_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_803B1BCC:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(r0))) {
        goto loc_803B1BE0;
    }
}

loc_803B1BD0:
{
    r29 = (r29 + 8);
}

loc_803B1BD4:
{
    r27 = MemoryInline::FlatRead8(r29);
}

loc_803B1BDC:
{
    if ((static_cast<uint32_t>(r27) != static_cast<uint32_t>(255))) {
        goto loc_803B1BB8;
    }
}

loc_803B1BE0:
{
    r0 = (r27 & 255);
}

loc_803B1BE8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_803B1E04;
    }
}

loc_803B1BEC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 60), 0, 717u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 60));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 716u, (r30 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_17 & -8);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 788));
    MemoryInline::FlatWrite8((r31 + 793), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 60));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 716u, (r30 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_18 & -8);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 789));
    MemoryInline::FlatWrite8((r31 + 794), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 60));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 716u, (r30 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_19 & -8);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 790));
    MemoryInline::FlatWrite8((r31 + 795), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 60));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 716u, (r30 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_20 & -8);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 792));
    MemoryInline::FlatWrite8((r31 + 797), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 60));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 716u, (r30 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_21 & -8);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 793));
    MemoryInline::FlatWrite8((r31 + 798), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 60));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 716u, (r30 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_22 & -8);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 794));
    MemoryInline::FlatWrite8((r31 + 799), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 60));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 716u, (r30 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_23 & -8);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 795));
    MemoryInline::FlatWrite8((r31 + 800), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 716u, (r30 + 776));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_24 & -2);
    r3 = (r30 + r0);
    MemoryInline::FlatWrite16((r3 + 1132), static_cast<uint16_t>(r4));
    r4 = MemoryInline::FlatRead8((r31 + 797));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 716u, (r30 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 1144), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r31 + 798));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 716u, (r30 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 1150), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r31 + 799));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 716u, (r30 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 1156), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r31 + 800));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 716u, (r30 + 776));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 1162), static_cast<uint8_t>(r4));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 716u, (r30 + 776));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r0 = (r0_rot_25 & -16);
    r4 = (r28 + r0);
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_26 & -2);
    r3 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 1132));
    MemoryInline::FlatWrite32((r4 + 8820), r0);
    r0 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite32((r4 + 8828), r0);
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r4 + 8824), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 793));
    MemoryInline::FlatWrite16((r4 + 8826), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r4 + 8832), r0);
    // inline leaf 0x80451720 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16440));
    r3 = MemoryInline::FlatRead32((r3 + 68));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 134217727);
    // end of inlined leaf 0x80451720
}

loc_803B1D64:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803B1DAC;
    }
}

loc_803B1D68:
{
    r3 = (r1 + 24);
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r0 = MemoryInline::FlatRead8((r31 + 794));
    r0 = (r0 * 48);
    r4 = (r4 + r0);
    r4 = (r4 + 8);
    ctx->lr = 0x803B1D84u;
    if constexpr (KnownRegArgsCpuCall<0x80142444u>(&func_80142444)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80142444_97F8 = func_80142444_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80142444_97F8);
        r4 = static_cast<uint32_t>(regargs_result_80142444_97F8 >> 32);
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
    r3 = MemoryInline::FlatRead8((r31 + 793));
    r4 = (r1 + 24);
    r5 = MemoryInline::FlatRead8((r30 + 776));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r5 = (r5 & 65535);
    ctx->lr = 0x803B1D9Cu;
    if constexpr (KnownRegArgsCpuCall<0x80142D4Cu>(&func_80142D4C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_80142D4C_9CB8 = func_80142D4C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80142D4C_9CB8);
        r4 = static_cast<uint32_t>(regargs_result_80142D4C_9CB8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
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
        InvokeDirectCpu<0x80142D4Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
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
    r3 = MemoryInline::FlatRead8((r30 + 27000));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 27000), static_cast<uint8_t>(r0));
    goto loc_803B1E04;
}

loc_803B1DAC:
{
    r28 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r28);
    MemoryInline::FlatWriteRam32((r1 + 8), r28);
    r3 = MemoryInline::FlatRead8((r30 + 776));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r3 = (r3 & 65535);
    r4 = (r1 + 12);
    r5 = (r1 + 8);
    ctx->lr = 0x803B1DD0u;
    if constexpr (KnownRegArgsCpuCall<0x80144644u>(&func_80144644)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80144644_A609 = func_80144644_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80144644_A609);
        r4 = static_cast<uint32_t>(regargs_result_80144644_A609 >> 32);
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
        InvokeDirectCpu<0x80144644u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    r0 = (r3 & 255);
}

loc_803B1DD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B1E04;
    }
}

loc_803B1DDC:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead8((r30 + 776));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // inline leaf 0x80137668 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 13), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x80137668
    MemoryInline::FlatWrite8((r30 + 27000), static_cast<uint8_t>(r28));
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 26999), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r30 + 776));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 776), static_cast<uint8_t>(r0));
}

loc_803B1E04:
{
    r11 = (r1 + 112);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
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
    ctx->ctr = ctr;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803B17E0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803B17E0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x07FFFFFF gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803B17E0 func_803B17E0 preserves=true fpr_mask=0x00000000
