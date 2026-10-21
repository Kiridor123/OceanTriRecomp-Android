#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80279F20(CpuContext* ctx);
extern "C" uint64_t func_80279F20_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_8027A0A8(CpuContext* ctx);
extern "C" void func_8027A0A8_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027A0F0(CpuContext* ctx);
extern "C" uint32_t func_8027A0F0_ra18_2_10_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_8027A3A4(CpuContext* ctx);
extern "C" uint32_t func_8027A3A4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802872A8(CpuContext* ctx);
extern "C" uint64_t func_802872A8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802B97A4(CpuContext* ctx);
extern "C" uint32_t func_802B97A4_ra38_2_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_803BED04(CpuContext* ctx);
extern "C" uint64_t func_803BED04_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_8027A5E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t r0_addze_src_0 = 0;
    uint32_t r0_addze_src_1 = 0;
    uint32_t r0_addze_src_10 = 0;
    uint32_t r0_addze_src_11 = 0;
    uint32_t r0_addze_src_12 = 0;
    uint32_t r0_addze_src_13 = 0;
    uint32_t r0_addze_src_14 = 0;
    uint32_t r0_addze_src_15 = 0;
    uint32_t r0_addze_src_16 = 0;
    uint32_t r0_addze_src_17 = 0;
    uint32_t r0_addze_src_2 = 0;
    uint32_t r0_addze_src_3 = 0;
    uint32_t r0_addze_src_4 = 0;
    uint32_t r0_addze_src_5 = 0;
    uint32_t r0_addze_src_6 = 0;
    uint32_t r0_addze_src_7 = 0;
    uint32_t r0_addze_src_8 = 0;
    uint32_t r0_addze_src_9 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_10 = 0;
    uint32_t r0_ca_11 = 0;
    uint32_t r0_ca_12 = 0;
    uint32_t r0_ca_13 = 0;
    uint32_t r0_ca_14 = 0;
    uint32_t r0_ca_15 = 0;
    uint32_t r0_ca_16 = 0;
    uint32_t r0_ca_17 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r0_ca_5 = 0;
    uint32_t r0_ca_6 = 0;
    uint32_t r0_ca_7 = 0;
    uint32_t r0_ca_8 = 0;
    uint32_t r0_ca_9 = 0;
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
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_14 = 0;
    uint32_t r3_rot_15 = 0;
    uint32_t r3_rot_16 = 0;
    uint32_t r3_rot_17 = 0;
    uint32_t r3_rot_18 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8027A5E0u);
    goto loc_8027A5E0;

loc_8027A5E0:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80457470 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    // end of inlined leaf 0x80457470
    r21 = r3;
    r22 = r4;
    r23 = r5;
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r27 = 0;
    r26 = 0;
    r25 = 0;
    r24 = 0;
    r31 = 0;
    r30 = 0;
    r28 = 0;
    r29 = MemoryInline::FlatRead32((r3 + 168));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8027A638:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8027AC4C;
    }
}

loc_8027A63C:
{
    r3 = r21;
    // inline leaf 0x8026A36C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    r3 = MemoryInline::FlatRead16((r3 + 84));
    // end of inlined leaf 0x8026A36C
    r3 = (r3 & 65535);
    r0 = (r22 & 65535);
}

loc_8027A650:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8027AC4C;
    }
}

loc_8027A654:
{
    r0 = MemoryInline::FlatRead8((r21 + 874));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8027A660:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8027AC4C;
    }
}

loc_8027A664:
{
    r0 = MemoryInline::FlatRead8((r21 + 1509));
}

loc_8027A66C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8027A67C;
    }
}

loc_8027A670:
{
    r0 = MemoryInline::FlatRead8((r21 + 1510));
}

loc_8027A678:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027A684;
    }
}

loc_8027A67C:
{
    r0 = 10;
    MemoryInline::FlatWrite8((r21 + 1509), static_cast<uint8_t>(r0));
}

loc_8027A684:
{
    r0 = MemoryInline::FlatRead8((r21 + 1509));
}

loc_8027A68C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8027A6FC;
    }
}

loc_8027A690:
{
    r0 = MemoryInline::FlatRead8((r21 + 1510));
}

loc_8027A698:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8027A6FC;
    }
}

loc_8027A69C:
{
    r3 = r21;
    r4 = 11;
    // inline leaf 0x8026A758 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r3 + 220));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8026A758
}

loc_8027A6AC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8027AB7C;
    }
}

loc_8027A6B0:
{
    r0 = (r23 & 255);
}

loc_8027A6B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027A6C8;
    }
}

loc_8027A6BC:
{
}

loc_8027A6C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8027A6E8;
    }
}

loc_8027A6C4:
{
    goto loc_8027A6FC;
}

loc_8027A6C8:
{
    r0 = MemoryInline::FlatRead8((r21 + 10));
}

loc_8027A6D0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(4))) {
        goto loc_8027A6FC;
    }
}

loc_8027A6D4:
{
    r3 = r21;
    ctx->lr = 0x8027A6DCu;
    if constexpr (KnownRegArgsCpuCall<0x8027A3A4u>(&func_8027A3A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        const auto regargs_result_8027A3A4_2013 = func_8027A3A4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8027A3A4_2013;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027A3A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    }
}

loc_8027A6E0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8027AB7C;
    }
}

loc_8027A6E4:
{
    goto loc_8027A6FC;
}

loc_8027A6E8:
{
    r3 = r21;
    r4 = 55;
    // inline leaf 0x8026A6A8 (13 guest instruction(s))
    r5 = 1;
    r0 = (r4 & 31);
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_1 = r0;
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_1 + r0_ca_1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 224));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x8026A6A8
}

loc_8027A6F8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8027AB7C;
    }
}

loc_8027A6FC:
{
    r0 = (r23 & 255);
}

loc_8027A704:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027A714;
    }
}

loc_8027A708:
{
}

loc_8027A70C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8027A824;
    }
}

loc_8027A710:
{
    goto loc_8027A910;
}

loc_8027A714:
{
    r3 = r21;
    ctx->lr = 0x8027A71Cu;
    if constexpr (KnownRegArgsCpuCall<0x8027A3A4u>(&func_8027A3A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        const auto regargs_result_8027A3A4_2AB6 = func_8027A3A4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8027A3A4_2AB6;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027A3A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    }
}

loc_8027A720:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8027A744;
    }
}

loc_8027A724:
{
    r0 = MemoryInline::FlatRead8((r21 + 1510));
}

loc_8027A72C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8027A910;
    }
}

loc_8027A730:
{
    r3 = r21;
    r4 = 0;
    ctx->lr = 0x8027A73Cu;
    if constexpr (KnownRegArgsCpuCall<0x802872A8u>(&func_802872A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_802872A8_2F2E = func_802872A8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802872A8_2F2E);
        r4 = static_cast<uint32_t>(regargs_result_802872A8_2F2E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x802872A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        xer = ctx->xer;
    }
}

loc_8027A740:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8027A910;
    }
}

loc_8027A744:
{
    r3 = r21;
    r4 = 0;
    // inline leaf 0x8026A708 (13 guest instruction(s))
    r5 = 1;
    r0 = (r4 & 31);
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_9 = r0;
    r0_ca_9 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_9 + r0_ca_9);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 240));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_10 & 1);
    // end of inlined leaf 0x8026A708
}

loc_8027A754:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8027A760;
    }
}

loc_8027A758:
{
    r25 = 1;
    goto loc_8027A778;
}

loc_8027A760:
{
    r3 = r21;
    r4 = 1;
    // inline leaf 0x8026A708 (13 guest instruction(s))
    r5 = 1;
    r0 = (r4 & 31);
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_10 = r0;
    r0_ca_10 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_10 + r0_ca_10);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 240));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_11 & 1);
    // end of inlined leaf 0x8026A708
}

loc_8027A770:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8027A778;
    }
}

loc_8027A774:
{
    r24 = 1;
}

loc_8027A778:
{
    r3 = r21;
    r4 = 2;
    // inline leaf 0x8026A708 (13 guest instruction(s))
    r5 = 1;
    r0 = (r4 & 31);
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_12 = r0;
    r0_ca_12 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_12 + r0_ca_12);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 240));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_13 & 1);
    // end of inlined leaf 0x8026A708
}

loc_8027A788:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8027A794;
    }
}

loc_8027A78C:
{
    r27 = 1;
    goto loc_8027A7AC;
}

loc_8027A794:
{
    r3 = r21;
    r4 = 3;
    // inline leaf 0x8026A708 (13 guest instruction(s))
    r5 = 1;
    r0 = (r4 & 31);
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_13 = r0;
    r0_ca_13 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_13 + r0_ca_13);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 240));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_14 & 1);
    // end of inlined leaf 0x8026A708
}

loc_8027A7A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8027A7AC;
    }
}

loc_8027A7A8:
{
    r26 = 1;
}

loc_8027A7AC:
{
    r3 = MemoryInline::FlatRead8((r21 + 8));
    r4 = 2;
    ctx->lr = 0x8027A7B8u;
    if constexpr (KnownRegArgsCpuCall<0x803BED04u>(&func_803BED04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        const auto regargs_result_803BED04_48EE = func_803BED04_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803BED04_48EE);
        r4 = static_cast<uint32_t>(regargs_result_803BED04_48EE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x803BED04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
}

loc_8027A7C0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8027A7CC;
    }
}

loc_8027A7C4:
{
}

loc_8027A7C8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8027A7D8;
    }
}

loc_8027A7CC:
{
    r0 = r25;
    r25 = r24;
    r24 = r0;
}

loc_8027A7D8:
{
    r0 = (r3 + 254);
    r0 = (r0 & 255);
}

loc_8027A7E4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8027A7F4;
    }
}

loc_8027A7E8:
{
    r0 = r27;
    r27 = r26;
    r26 = r0;
}

loc_8027A7F4:
{
    r5 = (r26 & 255);
    r3 = (r24 & 255);
    r4 = (r27 & 255);
    r0 = (r25 & 255);
    r3 = (r5 + r3);
    r0 = (r4 + r0);
    r0 = (r3 + r0);
}

loc_8027A814:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027AB7C;
    }
}

loc_8027A818:
{
    r31 = 5;
    r28 = 384;
    goto loc_8027AAAC;
}

loc_8027A824:
{
    r0 = MemoryInline::FlatRead8((r21 + 1510));
}

loc_8027A82C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8027A910;
    }
}

loc_8027A830:
{
    r3 = r21;
    r4 = 56;
    // inline leaf 0x8026A6A8 (13 guest instruction(s))
    r5 = 1;
    r0 = (r4 & 31);
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_3 = r0;
    r0_ca_3 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_3 + r0_ca_3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 224));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    // end of inlined leaf 0x8026A6A8
}

loc_8027A840:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8027A84C;
    }
}

loc_8027A844:
{
    r25 = 1;
    goto loc_8027A864;
}

loc_8027A84C:
{
    r3 = r21;
    r4 = 57;
    // inline leaf 0x8026A6A8 (13 guest instruction(s))
    r5 = 1;
    r0 = (r4 & 31);
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_4 = r0;
    r0_ca_4 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_4 + r0_ca_4);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 224));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
    // end of inlined leaf 0x8026A6A8
}

loc_8027A85C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8027A864;
    }
}

loc_8027A860:
{
    r24 = 1;
}

loc_8027A864:
{
    r3 = r21;
    r4 = 58;
    // inline leaf 0x8026A6A8 (13 guest instruction(s))
    r5 = 1;
    r0 = (r4 & 31);
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_6 = r0;
    r0_ca_6 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_6 + r0_ca_6);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 224));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_7 & 1);
    // end of inlined leaf 0x8026A6A8
}

loc_8027A874:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8027A880;
    }
}

loc_8027A878:
{
    r27 = 1;
    goto loc_8027A898;
}

loc_8027A880:
{
    r3 = r21;
    r4 = 59;
    // inline leaf 0x8026A6A8 (13 guest instruction(s))
    r5 = 1;
    r0 = (r4 & 31);
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_7 = r0;
    r0_ca_7 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_7 + r0_ca_7);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 224));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_8 & 1);
    // end of inlined leaf 0x8026A6A8
}

loc_8027A890:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8027A898;
    }
}

loc_8027A894:
{
    r26 = 1;
}

loc_8027A898:
{
    r3 = MemoryInline::FlatRead8((r21 + 8));
    r4 = 2;
    ctx->lr = 0x8027A8A4u;
    if constexpr (KnownRegArgsCpuCall<0x803BED04u>(&func_803BED04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        const auto regargs_result_803BED04_669E = func_803BED04_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803BED04_669E);
        r4 = static_cast<uint32_t>(regargs_result_803BED04_669E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x803BED04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
}

loc_8027A8AC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8027A8B8;
    }
}

loc_8027A8B0:
{
}

loc_8027A8B4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8027A8C4;
    }
}

loc_8027A8B8:
{
    r0 = r25;
    r25 = r24;
    r24 = r0;
}

loc_8027A8C4:
{
    r0 = (r3 + 254);
    r0 = (r0 & 255);
}

loc_8027A8D0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8027A8E0;
    }
}

loc_8027A8D4:
{
    r0 = r27;
    r27 = r26;
    r26 = r0;
}

loc_8027A8E0:
{
    r5 = (r26 & 255);
    r3 = (r24 & 255);
    r4 = (r27 & 255);
    r0 = (r25 & 255);
    r3 = (r5 + r3);
    r0 = (r4 + r0);
    r0 = (r3 + r0);
}

loc_8027A900:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027AB7C;
    }
}

loc_8027A904:
{
    r31 = 5;
    r28 = 512;
    goto loc_8027AAAC;
}

loc_8027A910:
{
    r0 = MemoryInline::FlatRead8((r21 + 1509));
}

loc_8027A918:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8027A928;
    }
}

loc_8027A91C:
{
    r0 = MemoryInline::FlatRead8((r21 + 1510));
}

loc_8027A924:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027AAAC;
    }
}

loc_8027A928:
{
    r3 = MemoryInline::FlatRead16((r21 + 200));
    r0 = (r3 & 15360);
}

loc_8027A934:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027AAAC;
    }
}

loc_8027A938:
{
    r0 = MemoryInline::FlatRead16((r21 + 212));
}

loc_8027A940:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(50))) {
        goto loc_8027AAAC;
    }
}

loc_8027A944:
{
    r0 = (r3 & 8192);
}

loc_8027A94C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027A958;
    }
}

loc_8027A950:
{
    r25 = 1;
    goto loc_8027A968;
}

loc_8027A958:
{
    r0 = (r3 & 4096);
}

loc_8027A960:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027A968;
    }
}

loc_8027A964:
{
    r24 = 1;
}

loc_8027A968:
{
    r0 = (r3 & 2048);
}

loc_8027A970:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027A97C;
    }
}

loc_8027A974:
{
    r27 = 1;
    goto loc_8027A98C;
}

loc_8027A97C:
{
    r0 = (r3 & 1024);
}

loc_8027A984:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027A98C;
    }
}

loc_8027A988:
{
    r26 = 1;
}

loc_8027A98C:
{
    r3 = MemoryInline::FlatRead8((r21 + 8));
    r4 = 9;
    ctx->lr = 0x8027A998u;
    if constexpr (KnownRegArgsCpuCall<0x803BED04u>(&func_803BED04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        const auto regargs_result_803BED04_7403 = func_803BED04_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803BED04_7403);
        r4 = static_cast<uint32_t>(regargs_result_803BED04_7403 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x803BED04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
}

loc_8027A9A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8027A9AC;
    }
}

loc_8027A9A4:
{
}

loc_8027A9A8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8027A9B8;
    }
}

loc_8027A9AC:
{
    r0 = r25;
    r25 = r24;
    r24 = r0;
}

loc_8027A9B8:
{
    r0 = (r3 + 254);
    r0 = (r0 & 255);
}

loc_8027A9C4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8027A9D4;
    }
}

loc_8027A9C8:
{
    r0 = r27;
    r27 = r26;
    r26 = r0;
}

loc_8027A9D4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14880));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    r3 = r21;
    r4 = (r1 + 9);
    r5 = (r1 + 8);
    r6 = (r1 + 12);
    ctx->lr = 0x8027A9F0u;
    if constexpr (KnownRegArgsCpuCall<0x802B97A4u>(&func_802B97A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->xer = xer;
        const auto regargs_result_802B97A4_7A81 = func_802B97A4_ra38_2_8_0(ctx, r3, r4, r5, f1.d);
        r3 = regargs_result_802B97A4_7A81;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->xer = xer;
        InvokeDirectCpu<0x802B97A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r31 = 1;
    r28 = 76;
    r3 = 0x805C0000u;
    r4 = (r3 + 26840);
    goto loc_8027AAA0;
}

loc_8027AA04:
{
    r0 = MemoryInline::FlatRead16((r21 + 212));
}

loc_8027AA0C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_8027AA9C;
    }
}

loc_8027AA10:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -14848));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r31 = fctiwzword0;
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    r0 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f0.d);
    r28 = fctiwzword1;
    goto loc_8027AAAC;
}

loc_8027AA9C:
{
    r4 = (r4 + 20);
}

loc_8027AAA0:
{
    r3 = MemoryInline::FlatRead32(r4);
}

loc_8027AAA8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-1))) {
        goto loc_8027AA04;
    }
}

loc_8027AAAC:
{
    r3 = (r25 & 255);
    r0 = (r24 & 255);
    r4 = (r3 + r0);
}

loc_8027AABC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8027AB28;
    }
}

loc_8027AAC0:
{
    r3 = (r27 & 255);
    r0 = (r26 & 255);
    r0 = (r3 + r0);
}

loc_8027AAD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027AB28;
    }
}

loc_8027AAD4:
{
    f2.d = MemoryInline::FlatReadFloat64((r2 + -14848));
    r0 = (r28 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14768));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f0.d);
    r28 = fctiwzword2;
    r0 = (r31 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r31 = fctiwzword3;
}

loc_8027AB20:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(1))) {
        goto loc_8027AB28;
    }
}

loc_8027AB24:
{
    r31 = 1;
}

loc_8027AB28:
{
}

loc_8027AB2C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8027AB4C;
    }
}

loc_8027AB30:
{
    r30 = r31;
    r0 = (r25 & 255);
}

loc_8027AB3C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8027AB44;
    }
}

loc_8027AB40:
{
    r30 = (0 - r31);
}

loc_8027AB44:
{
    r0 = 5;
    MemoryInline::FlatWrite8((r21 + 1509), static_cast<uint8_t>(r0));
}

loc_8027AB4C:
{
    r0 = (r27 & 255);
}

loc_8027AB54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027AB64;
    }
}

loc_8027AB58:
{
    r0 = 10;
    MemoryInline::FlatWrite8((r21 + 1509), static_cast<uint8_t>(r0));
    r29 = (r29 + r28);
}

loc_8027AB64:
{
    r0 = (r26 & 255);
}

loc_8027AB6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027AB7C;
    }
}

loc_8027AB70:
{
    r0 = 10;
    MemoryInline::FlatWrite8((r21 + 1509), static_cast<uint8_t>(r0));
    r29 = (r29 - r28);
}

loc_8027AB7C:
{
    r0 = (r23 & 255);
}

loc_8027AB84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027AB9C;
    }
}

loc_8027AB88:
{
}

loc_8027AB8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8027ABEC;
    }
}

loc_8027AB90:
{
}

loc_8027AB94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8027AC04;
    }
}

loc_8027AB98:
{
    goto loc_8027AC4C;
}

loc_8027AB9C:
{
    MemoryInline::FlatWrite32((r21 + 168), r29);
    r3 = r21;
    r4 = r30;
    // inline leaf 0x8027A064 (17 guest instruction(s))
}

loc_inl12_0x8027A064:
{
    r5 = MemoryInline::FlatRead8((r3 + 1615));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r0 = (r5 + r0);
    MemoryInline::FlatWrite8((r3 + 1615), static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_inl12_0x8027A080:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(100))) {
        goto loc_inl12_0x8027A08C;
    }
}

loc_inl12_0x8027A084:
{
    r0 = 100;
    MemoryInline::FlatWrite8((r3 + 1615), static_cast<uint8_t>(r0));
}

loc_inl12_0x8027A08C:
{
    r0 = MemoryInline::FlatRead8((r3 + 1615));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_inl12_0x8027A098:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(-100))) {
        goto loc_inl12_return;
    }
}

loc_inl12_0x8027A09C:
{
    r0 = -100;
    MemoryInline::FlatWrite8((r3 + 1615), static_cast<uint8_t>(r0));
    goto loc_inl12_cont_8027A064;
}

loc_inl12_return:
{
}

loc_inl12_cont_8027A064:
{
    // end of inlined leaf 0x8027A064
    r0 = (r22 & 65535);
}

loc_8027ABB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1001))) {
        goto loc_8027ABC4;
    }
}

loc_8027ABB8:
{
}

loc_8027ABBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1050))) {
        goto loc_8027ABD8;
    }
}

loc_8027ABC0:
{
    goto loc_8027AC4C;
}

loc_8027ABC4:
{
    r3 = r21;
    r4 = 1030;
    r5 = 1031;
    ctx->lr = 0x8027ABD4u;
    if constexpr (KnownRegArgsCpuCall<0x80279F20u>(&func_80279F20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->xer = xer;
        const auto regargs_result_80279F20_991E = func_80279F20_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80279F20_991E);
        r4 = static_cast<uint32_t>(regargs_result_80279F20_991E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->xer = xer;
        InvokeDirectCpu<0x80279F20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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
    goto loc_8027AC4C;
}

loc_8027ABD8:
{
    r3 = r21;
    r4 = 1080;
    r5 = 1081;
    ctx->lr = 0x8027ABE8u;
    if constexpr (KnownRegArgsCpuCall<0x80279F20u>(&func_80279F20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->xer = xer;
        const auto regargs_result_80279F20_A069 = func_80279F20_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80279F20_A069);
        r4 = static_cast<uint32_t>(regargs_result_80279F20_A069 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->xer = xer;
        InvokeDirectCpu<0x80279F20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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
    goto loc_8027AC4C;
}

loc_8027ABEC:
{
    MemoryInline::FlatWrite32((r21 + 168), r29);
    r3 = r21;
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(6));
    r0 = (r0_rot_17 & -64);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if constexpr (KnownRegArgsCpuCall<0x8027A0A8u>(&func_8027A0A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        func_8027A0A8_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027A0A8u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    }
    goto loc_8027AC4C;
}

loc_8027AC04:
{
    MemoryInline::FlatWrite32((r21 + 168), r29);
    r3 = MemoryInline::FlatRead16((r21 + 56));
    r0 = (r29 - r3);
    r4 = (r0 & 65535);
    r0 = (r4 + -16385);
}

loc_8027AC1C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(16383))) {
        goto loc_8027AC2C;
    }
}

loc_8027AC20:
{
    r0 = (r3 + 16384);
    MemoryInline::FlatWrite32((r21 + 168), r0);
    goto loc_8027AC40;
}

loc_8027AC2C:
{
    r0 = (r4 + -32768);
}

loc_8027AC34:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(16383))) {
        goto loc_8027AC40;
    }
}

loc_8027AC38:
{
    r0 = (r3 + -16384);
    MemoryInline::FlatWrite32((r21 + 168), r0);
}

loc_8027AC40:
{
    r3 = r21;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    if constexpr (KnownRegArgsCpuCall<0x8027A0F0u>(&func_8027A0F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->xer = xer;
        const auto regargs_result_8027A0F0_AD0A = func_8027A0F0_ra18_2_10_0(ctx, r3, r4, f1.d);
        r4 = regargs_result_8027A0F0_AD0A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027A0F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
}

loc_8027AC4C:
{
    r11 = (r1 + 96);
    // inline leaf 0x804574BC (12 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    // end of inlined leaf 0x804574BC
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000038FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8027A5E0 func_8027A5E0 preserves=true fpr_mask=0x00000000
