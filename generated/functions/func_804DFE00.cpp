#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804E02D0(CpuContext* ctx);
extern "C" uint64_t func_804E02D0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804E0590(CpuContext* ctx);
extern "C" uint64_t func_804E0590_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804E0C80(CpuContext* ctx);
extern "C" uint64_t func_804E0C80_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_804E0CA0(CpuContext* ctx);
extern "C" uint64_t func_804E0CA0_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_804E0F10(CpuContext* ctx);
extern "C" uint32_t func_804E0F10_ra8_0_10_0(CpuContext*, uint32_t);
extern "C" void func_804E0F70(CpuContext* ctx);
extern "C" uint64_t func_804E0F70_ra8_1a_18_0(CpuContext*, uint32_t, double, double, double);
extern "C" void func_804E14B0(CpuContext* ctx);
extern "C" uint32_t func_804E14B0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_804E15A0(CpuContext* ctx);
extern "C" uint64_t func_804E15A0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_804E0C80_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_804E0CA0_statefree(uint32_t, uint32_t);

extern "C" uint64_t func_804DFE00_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r25_addr_0 = 0;
    uint32_t r25_addr_1 = 0;
    uint32_t r25_addr_2 = 0;
    uint32_t r25_addr_3 = 0;
    uint32_t r25_addr_4 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t r25_rot_1 = 0;
    uint32_t r25_rot_2 = 0;
    uint32_t r25_rot_3 = 0;
    uint32_t r25_rot_4 = 0;
    uint32_t r25_rot_5 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r31_addr_5 = 0;
    uint32_t r31_addr_6 = 0;
    uint32_t r31_addr_7 = 0;
    uint32_t r31_addr_8 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804DFE00u);
    goto loc_804DFE00;

loc_804DFE00:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
}

loc_804DFE18:
{
    r27 = r3;
    r28 = r4;
    r23 = r5;
    r24 = r6;
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804E0074;
    }
}

loc_804DFE2C:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(9));
    r0 = (r0_rot_0 & 130560);
    r25_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r25 = (r25_rot_0 & 1020);
    r3 = (r3 + r0);
    r31 = (r3 + 4404);
    r31_addr_0 = (r31 + r25);
    r3 = MemoryInline::FlatRead32(r31_addr_0);
}

loc_804DFE44:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804DFE58;
    }
}

loc_804DFE48:
{
    r4 = MemoryInline::FlatRead32((r27 + 48));
    ctx->lr = 0x804DFE50u;
    if constexpr (KnownRegArgsCpuCall<0x804E15A0u>(&func_804E15A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->xer = xer;
        const auto regargs_result_804E15A0_15DB = func_804E15A0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804E15A0_15DB);
        r4 = static_cast<uint32_t>(regargs_result_804E15A0_15DB >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x804E15A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r0 = 0;
    r31_addr_1 = (r31 + r25);
    MemoryInline::FlatWrite32(r31_addr_1, r0);
}

loc_804DFE58:
{
    r4 = 0x804E0000u;
    r3 = MemoryInline::FlatRead32((r27 + 40));
    r5 = r27;
    r4 = (r4 + 5360);
    ctx->lr = 0x804DFE6Cu;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x8046EEE0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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
    xer = ctx->xer;
}

loc_804DFE70:
{
    r30 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804E00C4;
    }
}

loc_804DFE78:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r26 = 0;
    r4 = MemoryInline::FlatRead32((r13 + -14744));
    r0 = (r0 * 148);
    r29 = (r4 + r0);
    MemoryInline::FlatWrite32((r29 + 4), r3);
    r3 = r29;
    MemoryInline::FlatWrite32((r29 + 8), r27);
    MemoryInline::FlatWrite8((r29 + 12), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite8((r29 + 13), static_cast<uint8_t>(r23));
    MemoryInline::FlatWrite8((r29 + 14), static_cast<uint8_t>(r24));
    MemoryInline::FlatWrite32((r29 + 36), r26);
    // inline leaf 0x804E1710 (33 guest instruction(s))
}

loc_inl1_0x804E1710:
{
    r0 = MemoryInline::FlatRead8((r3 + 12));
    r6 = MemoryInline::FlatRead32((r3 + 8));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r0 = MemoryInline::FlatRead8((r3 + 13));
    r4 = (r6 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 52));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl1_0x804E1734:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_inl1_0x804E1740;
    }
}

loc_inl1_0x804E1738:
{
    r3 = 0;
    goto loc_inl1_cont_804E1710;
}

loc_inl1_0x804E1740:
{
    r0 = (r0 * 24);
    r4 = MemoryInline::FlatRead32((r6 + 12));
    r5 = (r4 + r0);
    MemoryInline::FlatWrite32((r3 + 20), r5);
    r0 = MemoryInline::FlatRead32((r5 + 16));
    r4 = MemoryInline::FlatRead32((r6 + 16));
    r0 = (r0 * 80);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    r0 = MemoryInline::FlatRead32((r5 + 20));
    r4 = MemoryInline::FlatRead32((r6 + 20));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r4 = (r4 + r0);
    MemoryInline::FlatWrite32((r3 + 28), r4);
    r0 = MemoryInline::FlatRead16((r4 + 12));
    r4 = MemoryInline::FlatRead32((r6 + 24));
    r0 = (r0 * 46);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    r3 = 1;
}

loc_inl1_cont_804E1710:
{
    // end of inlined leaf 0x804E1710
}

loc_804DFEB0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804E005C;
    }
}

loc_804DFEB4:
{
    r31_addr_3 = (r31 + r25);
    MemoryInline::FlatWrite32(r31_addr_3, r29);
    r3 = MemoryInline::FlatRead32((r27 + 3376));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r27 + 3376), r0);
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r0 = MemoryInline::FlatRead8((r3 + 1));
    MemoryInline::FlatWrite8((r29 + 16), static_cast<uint8_t>(r0));
}

loc_804DFED4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804DFF2C;
    }
}

loc_804DFED8:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(6));
    r3 = (r3_rot_1 & 16320);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 1020);
    r3 = (r27 + r3);
    r25 = (r3 + 3380);
    r25_addr_1 = (r25 + r0);
    r24 = MemoryInline::FlatRead32(r25_addr_1);
}

loc_804DFEF0:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_804DFF20;
    }
}

loc_804DFEF4:
{
    MemoryInline::FlatWrite32((r24 + 8), r26);
    r3 = MemoryInline::FlatRead32((r24 + 4));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x804C4590u>(ctx);
    r3 = MemoryInline::FlatRead32((r24 + 4));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x8046EE60u>(ctx);
    r0 = MemoryInline::FlatRead8((r24 + 13));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r31_addr_4 = (r31 + r0);
    MemoryInline::FlatWrite32(r31_addr_4, r26);
    r3 = MemoryInline::FlatRead32((r27 + 3376));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r27 + 3376), r0);
}

loc_804DFF20:
{
    r0 = MemoryInline::FlatRead8((r29 + 16));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r25_addr_2 = (r25 + r0);
    MemoryInline::FlatWrite32(r25_addr_2, r29);
}

loc_804DFF2C:
{
    r3 = r29;
    if constexpr (KnownRegArgsCpuCall<0x804E0F10u>(&func_804E0F10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->xer = xer;
        const auto regargs_result_804E0F10_2FEC = func_804E0F10_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_804E0F10_2FEC;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->xer = xer;
        InvokeDirectCpu<0x804E0F10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    r3 = r29;
    // inline leaf 0x804E0C10 (10 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 14));
    r4 = 0x80630000u;
    r5 = MemoryInline::FlatRead32((r3 + 20));
    r4 = (r4 + -21408);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r5 = MemoryInline::FlatRead32((r5 + 4));
    r4_addr_2 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_2);
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r3 + 52), r0);
    // end of inlined leaf 0x804E0C10
    r3 = r29;
    // inline leaf 0x804E0C40 (13 guest instruction(s))
}

loc_inl3_0x804E0C40:
{
    r0 = MemoryInline::FlatRead8((r3 + 12));
}

loc_inl3_0x804E0C48:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(9))) {
        goto loc_inl3_0x804E0C5C;
    }
}

loc_inl3_0x804E0C4C:
{
    r4 = MemoryInline::FlatRead32((r3 + 24));
    r0 = MemoryInline::FlatRead32((r4 + 76));
    MemoryInline::FlatWrite8((r3 + 15), static_cast<uint8_t>(r0));
    goto loc_inl3_cont_804E0C40;
}

loc_inl3_0x804E0C5C:
{
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
    r0 = (r0_rot_10 & 32640);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 130));
    MemoryInline::FlatWrite8((r3 + 15), static_cast<uint8_t>(r0));
}

loc_inl3_cont_804E0C40:
{
    // end of inlined leaf 0x804E0C40
    r3 = r29;
    // inline leaf 0x804E0AA0 (18 guest instruction(s))
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 56), 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 64), r0);
    r4 = MemoryInline::FlatRead32((r3 + 24));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 60), r0);
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 56), r0);
    }
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 68), r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 72), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 76), r0);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 80), r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + 84), r0);
    r0 = MemoryInline::FlatRead32((r4 + 20));
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r3 + 88), r0);
    // end of inlined leaf 0x804E0AA0
    r3 = r29;
    ctx->lr = 0x804DFF54u;
    if constexpr (KnownRegArgsCpuCall<0x804E02D0u>(&func_804E02D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->xer = xer;
        const auto regargs_result_804E02D0_3EB7 = func_804E02D0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804E02D0_3EB7);
        r4 = static_cast<uint32_t>(regargs_result_804E02D0_3EB7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
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
        ctx->xer = xer;
        InvokeDirectCpu<0x804E02D0u>(ctx);
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
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    r3 = r29;
    ctx->lr = 0x804DFF5Cu;
    if constexpr (KnownRegArgsCpuCall<0x804E0590u>(&func_804E0590)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->xer = xer;
        const auto regargs_result_804E0590_47C4 = func_804E0590_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804E0590_47C4);
        r4 = static_cast<uint32_t>(regargs_result_804E0590_47C4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
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
        ctx->xer = xer;
        InvokeDirectCpu<0x804E0590u>(ctx);
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
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
}

loc_804DFF60:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(9))) {
        goto loc_804DFFB4;
    }
}

loc_804DFF64:
{
    r3 = r29;
    r25_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r25 = (r25_rot_1 & 1020);
    // inline leaf 0x804E0CA0 (11 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 12));
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r3 = (r4 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 116));
    r0 = MemoryInline::FlatRead32((r3 + 2344));
    r3 = MemoryInline::FlatRead32((r3 + 2408));
    r0 = (r4 + r0);
    r0 = (r3 + r0);
    r3 = (static_cast<int32_t>(r0) >> 16);
    // end of inlined leaf 0x804E0CA0
    r31 = r3;
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x804E0C80u) && KnownTranslatedCpuCall<0x804E0C80u>::kAvailable && !KnownTranslatedCpuCall<0x804E0C80u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804E0C80u>()) {
        const auto state_free_result_804E0C80_53AD = func_804E0C80_statefree(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_804E0C80_53AD[0]);
        xer = static_cast<uint32_t>(state_free_result_804E0C80_53AD[1]);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x804E0C80u>(ctx);
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
        r12 = ctx->gpr[12];
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
        xer = ctx->xer;
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r31);
    r7 = (r27 + r25);
    r5 = r3;
    r3 = r30;
    r6 = MemoryInline::FlatRead32((r7 + 2472));
    r4 = 0;
    r0 = MemoryInline::FlatRead32((r7 + 2536));
    r8 = -960;
    r6 = (static_cast<int32_t>(r6) >> 16);
    r9 = MemoryInline::FlatRead8((r29 + 15));
    r7 = (static_cast<int32_t>(r0) >> 16);
    r10 = 127;
    ctx->lr = 0x804DFFB0u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x804C2EC0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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
    xer = ctx->xer;
    goto loc_804E0008;
}

loc_804DFFB4:
{
    r3 = r29;
    r25_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r25 = (r25_rot_2 & 1020);
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x804E0CA0u) && KnownTranslatedCpuCall<0x804E0CA0u>::kAvailable && !KnownTranslatedCpuCall<0x804E0CA0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804E0CA0u>()) {
        const auto state_free_result_804E0CA0_608A = func_804E0CA0_statefree(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_804E0CA0_608A[0]);
        xer = static_cast<uint32_t>(state_free_result_804E0CA0_608A[1]);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x804E0CA0u>(ctx);
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
        r12 = ctx->gpr[12];
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
        xer = ctx->xer;
    }
    r31 = r3;
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x804E0C80u) && KnownTranslatedCpuCall<0x804E0C80u>::kAvailable && !KnownTranslatedCpuCall<0x804E0C80u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804E0C80u>()) {
        const auto state_free_result_804E0C80_676E = func_804E0C80_statefree(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_804E0C80_676E[0]);
        xer = static_cast<uint32_t>(state_free_result_804E0C80_676E[1]);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x804E0C80u>(ctx);
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
        r12 = ctx->gpr[12];
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
        xer = ctx->xer;
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r31);
    r7 = (r27 + r25);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(7));
    r0 = (r0_rot_13 & 32640);
    r5 = r3;
    r6 = MemoryInline::FlatRead32((r7 + 2472));
    r4 = (r27 + r0);
    r0 = MemoryInline::FlatRead32((r7 + 2536));
    r3 = r30;
    r6 = (static_cast<int32_t>(r6) >> 16);
    r9 = MemoryInline::FlatRead8((r4 + 130));
    r7 = (static_cast<int32_t>(r0) >> 16);
    r4 = 0;
    r8 = -960;
    r10 = 127;
    ctx->lr = 0x804E0008u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x804C2EC0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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
    xer = ctx->xer;
}

loc_804E0008:
{
    r12 = MemoryInline::FlatRead32((r27 + 12596));
}

loc_804E0010:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_804E0028;
    }
}

loc_804E0014:
{
    r3 = r30;
    r4 = r27;
    r5 = r28;
    ctr = r12;
    ctx->lr = 0x804E0028u;
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
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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
    xer = ctx->xer;
}

loc_804E0028:
{
    r3 = r29;
    if constexpr (KnownRegArgsCpuCall<0x804E14B0u>(&func_804E14B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->xer = xer;
        const auto regargs_result_804E14B0_799F = func_804E14B0_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_804E14B0_799F;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
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
        ctx->xer = xer;
        InvokeDirectCpu<0x804E14B0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
    }
    r3 = r29;
    ctx->lr = 0x804E0038u;
    if constexpr (KnownRegArgsCpuCall<0x804E0F70u>(&func_804E0F70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[2] = f2;
        ctx->xer = xer;
        const auto regargs_result_804E0F70_7EFF = func_804E0F70_ra8_1a_18_0(ctx, r3, f1.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_804E0F70_7EFF);
        r4 = static_cast<uint32_t>(regargs_result_804E0F70_7EFF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->xer = xer;
        InvokeDirectCpu<0x804E0F70u>(ctx);
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        xer = ctx->xer;
    }
    r0 = 1;
    MemoryInline::FlatWrite16((r30 + 56), static_cast<uint16_t>(r0));
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r30 + 28));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32((r30 + 28), r0);
    r4 = MemoryInline::FlatRead32((r27 + 44));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x8046F070u>(ctx);
    goto loc_804E00C4;
}

loc_804E005C:
{
    MemoryInline::FlatWrite32((r29 + 8), r26);
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x804C4590u>(ctx);
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x8046EE60u>(ctx);
    goto loc_804E00C4;
}

loc_804E0074:
{
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(9));
    r6 = (r6_rot_1 & 130560);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_15 & 1020);
    r5 = (r3 + r6);
    r28 = (r5 + r0);
    r5 = MemoryInline::FlatRead32((r28 + 4404));
}

loc_804E008C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804E00C4;
    }
}

loc_804E0090:
{
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(7));
    r0 = (r0_rot_16 & 32640);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 184));
}

loc_804E00A0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(64))) {
        goto loc_804E00B0;
    }
}

loc_804E00A4:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r5 + 36), r0);
    goto loc_804E00C4;
}

loc_804E00B0:
{
    r4 = MemoryInline::FlatRead32((r27 + 48));
    r3 = r5;
    ctx->lr = 0x804E00BCu;
    if constexpr (KnownRegArgsCpuCall<0x804E15A0u>(&func_804E15A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->xer = xer;
        const auto regargs_result_804E15A0_8C01 = func_804E15A0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804E15A0_8C01);
        r4 = static_cast<uint32_t>(regargs_result_804E15A0_8C01 >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x804E15A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 4404), r0);
}

loc_804E00C4:
{
    r11 = (r1 + 64);
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
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804DFE00(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804DFE00_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804DFE00 func_804DFE00 preserves=true fpr_mask=0x00000000
