#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CF80C(CpuContext* ctx);
extern "C" uint64_t func_800CF80C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800D076C(CpuContext* ctx);
extern "C" uint32_t func_800D076C_ra0_0_8_0(CpuContext*);
extern "C" void func_802A8F78(CpuContext* ctx);
extern "C" uint64_t func_802A8F78_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80320404(CpuContext* ctx);
extern "C" uint64_t func_80320404_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80323E14(CpuContext* ctx);
extern "C" uint64_t func_80323E14_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80323F70(CpuContext* ctx);
extern "C" uint64_t func_80323F70_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803B1E8C(CpuContext* ctx);
extern "C" uint64_t func_803B1E8C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_803B1EBC(CpuContext* ctx);
extern "C" uint64_t func_803B1EBC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803B1F10(CpuContext* ctx);
extern "C" uint64_t func_803B1F10_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803B5094(CpuContext* ctx);
extern "C" uint32_t func_803B5094_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" MkwStateFreeResult2 func_800D076C_statefree();

extern "C" uint64_t func_80321194_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t r25_rot_1 = 0;
    uint32_t r25_rot_2 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r31_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
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
    const uint32_t r23_entry = r23;
    const uint32_t r24_entry = r24;
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;

    goto loc_80321194;

loc_80321194:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r26 = r3;
    r27 = r4;
    r28 = r5;
    // inline leaf 0x800D076C (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2003));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    // end of inlined leaf 0x800D076C
}

loc_803211BC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803211E0;
    }
}

loc_803211C0:
{
    r0 = MemoryInline::FlatRead8((r26 + 8));
}

loc_803211C8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803211E0;
    }
}

loc_803211CC:
{
    r0 = MemoryInline::FlatRead16((r26 + 32));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803211D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_803211E0;
    }
}

loc_803211D8:
{
    r24 = 6;
    goto loc_80321344;
}

loc_803211E0:
{
    r0 = (r28 & 255);
}

loc_803211E8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80321254;
    }
}

loc_803211EC:
{
    r0 = 1;
    MemoryInline::FlatWrite16((r26 + 58), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite16((r26 + 38), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r26 + 36), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r26 + 56), static_cast<uint16_t>(r0));
    r25 = 0;
    // inline leaf 0x80321140 (21 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + 1440);
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 238), 0, 34u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 0u, (r3 + 238), r0);
        MemoryInline::WriteResolved16(guest_range_1, 2u, (r3 + 240), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 4u, (r3 + 242), r0);
        MemoryInline::WriteResolved16(guest_range_1, 6u, (r3 + 244), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 8u, (r3 + 246), r0);
        MemoryInline::WriteResolved16(guest_range_1, 10u, (r3 + 248), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 12u, (r3 + 250), r0);
        MemoryInline::WriteResolved16(guest_range_1, 14u, (r3 + 252), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 16u, (r3 + 254), r0);
        MemoryInline::WriteResolved16(guest_range_1, 18u, (r3 + 256), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 20u, (r3 + 258), r0);
        MemoryInline::WriteResolved16(guest_range_1, 22u, (r3 + 260), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 24u, (r3 + 262), r0);
        MemoryInline::WriteResolved16(guest_range_1, 26u, (r3 + 264), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 28u, (r3 + 266), r0);
        MemoryInline::WriteResolved16(guest_range_1, 30u, (r3 + 268), r0);
    }
    MemoryInline::WriteResolved16(guest_range_1, 32u, (r3 + 270), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80321140
    r24 = 0;
}

loc_80321210:
{
    r3 = (r24 & 255);
    r4 = 1;
    ctx->lr = 0x8032121Cu;
    if constexpr (KnownRegArgsCpuCall<0x80320404u>(&func_80320404)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80320404_2256 = func_80320404_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80320404_2256);
        r4 = static_cast<uint32_t>(regargs_result_80320404_2256 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80320404u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r4 = (r3 & 65535);
}

loc_80321224:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80321234;
    }
}

loc_80321228:
{
    r3 = (r25 & 65535);
    // inline leaf 0x8032111C (9 guest instruction(s))
    r5 = 0x806C0000u;
    r5 = (r5 + 1440);
    r0 = (r3 & 65535);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r5 = (r5 + r0);
    MemoryInline::FlatWrite16((r5 + 238), static_cast<uint16_t>(r4));
    r0 = (r3 + 1);
    r3 = (r0 & 65535);
    // end of inlined leaf 0x8032111C
    r25 = r3;
}

loc_80321234:
{
    r24 = (r24 + 1);
}

loc_8032123C:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(10))) {
        goto loc_80321210;
    }
}

loc_80321240:
{
    r0 = (r25 & 65535);
}

loc_80321248:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80321490;
    }
}

loc_8032124C:
{
    r24 = 8;
    goto loc_80321344;
}

loc_80321254:
{
    r3 = MemoryInline::FlatRead16((r26 + 32));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8032125C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(7))) {
        goto loc_80321314;
    }
}

loc_80321260:
{
    r0 = 1;
    MemoryInline::FlatWrite16((r26 + 58), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite16((r26 + 38), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r26 + 36), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r26 + 56), static_cast<uint16_t>(r0));
    r29 = 0;
    r0 = (r3 + 1);
    r24 = (r0 & 255);
    // inline leaf 0x800D076C (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2003));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x800D076C
}

loc_8032128C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80321490;
    }
}

loc_80321290:
{
    // inline leaf 0x80321140 (21 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + 1440);
    r0 = 0;
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 238), 0, 34u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 0u, (r3 + 238), r0);
        MemoryInline::WriteResolved16(guest_range_2, 2u, (r3 + 240), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 4u, (r3 + 242), r0);
        MemoryInline::WriteResolved16(guest_range_2, 6u, (r3 + 244), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 8u, (r3 + 246), r0);
        MemoryInline::WriteResolved16(guest_range_2, 10u, (r3 + 248), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 12u, (r3 + 250), r0);
        MemoryInline::WriteResolved16(guest_range_2, 14u, (r3 + 252), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 16u, (r3 + 254), r0);
        MemoryInline::WriteResolved16(guest_range_2, 18u, (r3 + 256), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 20u, (r3 + 258), r0);
        MemoryInline::WriteResolved16(guest_range_2, 22u, (r3 + 260), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 24u, (r3 + 262), r0);
        MemoryInline::WriteResolved16(guest_range_2, 26u, (r3 + 264), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 28u, (r3 + 266), r0);
        MemoryInline::WriteResolved16(guest_range_2, 30u, (r3 + 268), r0);
    }
    MemoryInline::WriteResolved16(guest_range_2, 32u, (r3 + 270), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80321140
    // inline leaf 0x802FBA40 (7 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r3 = MemoryInline::FlatRead8((r3 + 351));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 134217727);
    // end of inlined leaf 0x802FBA40
}

loc_8032129C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803212D0;
    }
}

loc_803212A0:
{
    r3 = 0;
    r4 = 16000;
    // inline leaf 0x8032111C (9 guest instruction(s))
    r5 = 0x806C0000u;
    r5 = (r5 + 1440);
    r0 = (r3 & 65535);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r5 = (r5 + r0);
    MemoryInline::FlatWriteRam16((r5 + 238), static_cast<uint16_t>(r4));
    r0 = (r3 + 1);
    r3 = (r0 & 65535);
    // end of inlined leaf 0x8032111C
    r29 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004DDD8u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r3 & 255);
}

loc_803212BC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_803212D0;
    }
}

loc_803212C0:
{
    r3 = (r29 & 65535);
    r4 = 16001;
    // inline leaf 0x8032111C (9 guest instruction(s))
    r5 = 0x806C0000u;
    r5 = (r5 + 1440);
    r0 = (r3 & 65535);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r5 = (r5 + r0);
    MemoryInline::FlatWriteRam16((r5 + 238), static_cast<uint16_t>(r4));
    r0 = (r3 + 1);
    r3 = (r0 & 65535);
    // end of inlined leaf 0x8032111C
    r29 = r3;
}

loc_803212D0:
{
    r31 = 0;
}

loc_803212D4:
{
    r3 = (r31 & 255);
    r4 = 0;
    ctx->lr = 0x803212E0u;
    if constexpr (KnownRegArgsCpuCall<0x80320404u>(&func_80320404)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80320404_401A = func_80320404_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80320404_401A);
        r4 = static_cast<uint32_t>(regargs_result_80320404_401A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80320404u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r4 = (r3 & 65535);
}

loc_803212E8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_803212F8;
    }
}

loc_803212EC:
{
    r3 = (r29 & 65535);
    // inline leaf 0x8032111C (9 guest instruction(s))
    r5 = 0x806C0000u;
    r5 = (r5 + 1440);
    r0 = (r3 & 65535);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & -2);
    r5 = (r5 + r0);
    MemoryInline::FlatWrite16((r5 + 238), static_cast<uint16_t>(r4));
    r0 = (r3 + 1);
    r3 = (r0 & 65535);
    // end of inlined leaf 0x8032111C
    r29 = r3;
}

loc_803212F8:
{
    r31 = (r31 + 1);
}

loc_80321300:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(10))) {
        goto loc_803212D4;
    }
}

loc_80321304:
{
    r0 = (r29 & 65535);
}

loc_8032130C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80321344;
    }
}

loc_80321310:
{
    goto loc_80321490;
}

loc_80321314:
{
}

loc_80321318:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(6))) {
        goto loc_8032133C;
    }
}

loc_8032131C:
{
    r27 = 1;
    MemoryInline::FlatWrite16((r26 + 58), static_cast<uint16_t>(r27));
    ctx->lr = 0x80321328u;
    if constexpr (KnownRegArgsCpuCall<0x80323E14u>(&func_80323E14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80323E14_47DF = func_80323E14_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80323E14_47DF);
        r4 = static_cast<uint32_t>(regargs_result_80323E14_47DF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80323E14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite16((r26 + 38), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r26 + 36), static_cast<uint16_t>(r27));
    r0 = 0;
    MemoryInline::FlatWrite16((r26 + 56), static_cast<uint16_t>(r0));
    goto loc_80321490;
}

loc_8032133C:
{
    r0 = (r3 + 1);
    r24 = (r0 & 255);
}

loc_80321344:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800D076Cu) && KnownTranslatedCpuCall<0x800D076Cu>::kAvailable && !KnownTranslatedCpuCall<0x800D076Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800D076Cu>()) {
        const auto state_free_result_800D076C_4CB6 = func_800D076C_statefree();
        r0 = static_cast<uint32_t>(state_free_result_800D076C_4CB6[0]);
        r3 = static_cast<uint32_t>(state_free_result_800D076C_4CB6[1]);
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
        InvokeDirectCpu<0x800D076Cu>(ctx);
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
    }
}

loc_8032134C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80321368;
    }
}

loc_80321350:
{
    r0 = (r24 + -1);
    r4 = (r0 * 34);
    r3 = 0x806C0000u;
    r0 = (r3 + 1440);
    r29 = (r0 + r4);
    goto loc_803213A0;
}

loc_80321368:
{
    r3 = r24;
    if constexpr (KnownRegArgsCpuCall<0x803B1E8Cu>(&func_803B1E8C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B1E8C_5291 = func_803B1E8C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803B1E8C_5291);
        r4 = static_cast<uint32_t>(regargs_result_803B1E8C_5291 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B1E8Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 + 1);
    r31_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r31 = (r31_rot_1 & -2);
    r3 = r31;
    ctx->lr = 0x80321380u;
    if constexpr (KnownRegArgsCpuCall<0x800CF80Cu>(&func_800CF80C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        const auto regargs_result_800CF80C_568C = func_800CF80C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CF80C_568C);
        r4 = static_cast<uint32_t>(regargs_result_800CF80C_568C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
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
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800CF80Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r29 = r3;
    r30 = r29;
    r4 = 0;
    r5 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r24;
    r4 = r29;
    if constexpr (KnownRegArgsCpuCall<0x803B1EBCu>(&func_803B1EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B1EBC_5FA3 = func_803B1EBC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803B1EBC_5FA3);
        r4 = static_cast<uint32_t>(regargs_result_803B1EBC_5FA3 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803B1EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_803213A0:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r27)));
    r25_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r25 = (r25_rot_1 & -8);
    r24 = (r25 + 7);
    r0 = 0;
    MemoryInline::FlatWrite16((r26 + 36), static_cast<uint16_t>(r0));
    r3 = (r26 + 38);
    r4 = 0;
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r31 = 0;
    goto loc_80321440;
}

loc_803213CC:
{
    ctx->lr = 0x803213D0u;
    if constexpr (KnownRegArgsCpuCall<0x803B1F10u>(&func_803B1F10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B1F10_64CC = func_803B1F10_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803B1F10_64CC);
        r4 = static_cast<uint32_t>(regargs_result_803B1F10_64CC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803B1F10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r23 = r3;
    r3 = MemoryInline::FlatRead16(r29);
    r0 = MemoryInline::FlatRead16((r26 + 32));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (r0 & 255);
    ctx->lr = 0x803213E4u;
    if constexpr (KnownRegArgsCpuCall<0x80323F70u>(&func_80323F70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80323F70_68B0 = func_80323F70_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80323F70_68B0);
        r4 = static_cast<uint32_t>(regargs_result_80323F70_68B0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80323F70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_803213E8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8032143C;
    }
}

loc_803213EC:
{
    r0 = (r28 & 255);
}

loc_803213F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80321408;
    }
}

loc_803213F8:
{
    r3 = r23;
    ctx->lr = 0x80321400u;
    if constexpr (KnownRegArgsCpuCall<0x803B5094u>(&func_803B5094)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B5094_6D3F = func_803B5094_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B5094_6D3F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B5094u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80321404:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8032143C;
    }
}

loc_80321408:
{
}

loc_8032140C:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r25))) {
        goto loc_80321438;
    }
}

loc_80321410:
{
}

loc_80321414:
{
    if ((static_cast<int32_t>(r31) > static_cast<int32_t>(r24))) {
        goto loc_80321438;
    }
}

loc_80321418:
{
    r4 = MemoryInline::FlatRead16(r29);
    r0 = MemoryInline::FlatRead16((r26 + 36));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_12 & -2);
    r3 = (r26 + r0);
    MemoryInline::FlatWrite16((r3 + 38), static_cast<uint16_t>(r4));
    r3 = MemoryInline::FlatRead16((r26 + 36));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r26 + 36), static_cast<uint16_t>(r0));
}

loc_80321438:
{
    r31 = (r31 + 1);
}

loc_8032143C:
{
    r29 = (r29 + 2);
}

loc_80321440:
{
    r3 = MemoryInline::FlatRead16(r29);
}

loc_80321448:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803213CC;
    }
}

loc_8032144C:
{
    r3 = MemoryInline::FlatRead16((r26 + 36));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r26 + 34));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80321458:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_80321468;
    }
}

loc_8032145C:
{
    r0 = (r3 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r26 + 34), static_cast<uint16_t>(r0));
}

loc_80321468:
{
    MemoryInline::FlatWrite16((r26 + 56), static_cast<uint16_t>(r27));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r4 = 8;
    if constexpr (KnownRegArgsCpuCall<0x802A8F78u>(&func_802A8F78)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802A8F78_7782 = func_802A8F78_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802A8F78_7782);
        r4 = static_cast<uint32_t>(regargs_result_802A8F78_7782 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802A8F78u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite16((r26 + 58), static_cast<uint16_t>(r3));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800D076Cu) && KnownTranslatedCpuCall<0x800D076Cu>::kAvailable && !KnownTranslatedCpuCall<0x800D076Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800D076Cu>()) {
        const auto state_free_result_800D076C_7B16 = func_800D076C_statefree();
        r0 = static_cast<uint32_t>(state_free_result_800D076C_7B16[0]);
        r3 = static_cast<uint32_t>(state_free_result_800D076C_7B16[1]);
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
        InvokeDirectCpu<0x800D076Cu>(ctx);
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
    }
}

loc_80321484:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80321490;
    }
}

loc_80321488:
{
    r3 = r30;
    ctx->lr = 0x80321490u;
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
    InvokeDirectCpu<0x800CF878u>(ctx);
    r0 = ctx->gpr[0];
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
}

loc_80321490:
{
    r11 = (r1 + 48);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
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
    ctx->gpr[23] = r23_entry;
    ctx->gpr[24] = r24_entry;
    ctx->gpr[25] = r25_entry;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80321194(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80321194_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x007FFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80321194 func_80321194 preserves=true fpr_mask=0x00000000
