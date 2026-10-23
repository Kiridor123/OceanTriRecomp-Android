#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80071CA0(CpuContext* ctx);
extern "C" uint64_t func_80071CA0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800740D8(CpuContext* ctx);
extern "C" uint64_t func_800740D8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80077E98(CpuContext* ctx);
extern "C" uint32_t func_80077E98_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8007BB04(CpuContext* ctx);
extern "C" uint64_t func_8007BB04_ra98_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8007D468(CpuContext* ctx);
extern "C" uint64_t func_8007D468_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80080F9C(CpuContext* ctx);
extern "C" uint64_t func_80080F9C_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80080FA8(CpuContext* ctx);
extern "C" uint32_t func_80080FA8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80097DA4(CpuContext* ctx);
extern "C" uint64_t func_80097DA4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_80077E98_statefree(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80080CC4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;

    goto loc_80080CC4;

loc_80080CC4:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -24), r26);
    }
    // end of inlined leaf 0x80457478
    r28 = r3;
    r29 = r5;
    r23 = r6;
    r24 = r7;
    r25 = r8;
    r26 = r9;
    r27 = r10;
    r30 = MemoryInline::FlatRead32((r1 + 104));
    r31 = MemoryInline::FlatRead32((r1 + 108));
    ctx->lr = 0x80080D00u;
    if constexpr (KnownRegArgsCpuCall<0x8007BB04u>(&func_8007BB04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_8007BB04_11BA = func_8007BB04_ra98_0_18_0(ctx, r3, r4, r7);
        r3 = static_cast<uint32_t>(regargs_result_8007BB04_11BA);
        r4 = static_cast<uint32_t>(regargs_result_8007BB04_11BA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8007BB04u>(ctx);
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    r3 = 0x80590000u;
    r0 = (r3 + -1280);
    MemoryInline::FlatWrite32(r28, r0);
    r3 = (r28 + 232);
    r4 = r29;
    ctx->lr = 0x80080D18u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80077E98u) && KnownTranslatedCpuCall<0x80077E98u>::kAvailable && !KnownTranslatedCpuCall<0x80077E98u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80077E98u>()) {
        const auto state_free_result_80077E98_18C9 = func_80077E98_statefree(r1, r3, r4, 0x80080D18u);
        r0 = static_cast<uint32_t>(state_free_result_80077E98_18C9[0]);
        r1 = static_cast<uint32_t>(state_free_result_80077E98_18C9[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80077E98u>(ctx);
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
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    guest_range_2 = MemoryInline::ResolveRangeHost((r28 + 236), 0, 28u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, (r28 + 236), r23);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r28 + 240), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r28 + 244), r25);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r28 + 248), r26);
    }
    MemoryInline::WriteResolved32(guest_range_2, 16u, (r28 + 252), r27);
    r0 = (r30 & 255);
    MemoryInline::WriteResolved8(guest_range_2, 20u, (r28 + 256), static_cast<uint8_t>(r0));
    r27 = 0;
    MemoryInline::WriteResolved8(guest_range_2, 21u, (r28 + 257), static_cast<uint8_t>(r27));
    r0 = (r31 & 65535);
    MemoryInline::WriteResolved16(guest_range_2, 22u, (r28 + 258), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_2, 24u, (r28 + 260), r27);
    r3 = r29;
    r4 = 0x80590000u;
    r4 = (r4 + -1456);
    ctx->lr = 0x80080D58u;
    if constexpr (KnownRegArgsCpuCall<0x80097DA4u>(&func_80097DA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80097DA4_23B5 = func_80097DA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80097DA4_23B5);
        r4 = static_cast<uint32_t>(regargs_result_80097DA4_23B5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80097DA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite32((r28 + 264), r3);
    r3 = r29;
    r4 = (r13 + -31760);
    ctx->lr = 0x80080D68u;
    if constexpr (KnownRegArgsCpuCall<0x80097DA4u>(&func_80097DA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80097DA4_2831 = func_80097DA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80097DA4_2831);
        r4 = static_cast<uint32_t>(regargs_result_80097DA4_2831 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80097DA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite32((r28 + 268), r3);
    r3 = r29;
    r4 = (r13 + -31752);
    ctx->lr = 0x80080D78u;
    if constexpr (KnownRegArgsCpuCall<0x80097DA4u>(&func_80097DA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80097DA4_2CAD = func_80097DA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80097DA4_2CAD);
        r4 = static_cast<uint32_t>(regargs_result_80097DA4_2CAD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80097DA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite32((r28 + 272), r3);
    r3 = r29;
    r4 = (r13 + -31744);
    ctx->lr = 0x80080D88u;
    if constexpr (KnownRegArgsCpuCall<0x80097DA4u>(&func_80097DA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80097DA4_3129 = func_80097DA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80097DA4_3129);
        r4 = static_cast<uint32_t>(regargs_result_80097DA4_3129 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80097DA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    }
    guest_range_3 = MemoryInline::ResolveRangeHost((r28 + 276), 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r28 + 276), r3);
    r0 = 2;
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r28 + 280), r0);
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r28 + 284), r27);
    }
    MemoryInline::WriteResolved8(guest_range_3, 12u, (r28 + 288), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_3, 13u, (r28 + 289), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved16(guest_range_3, 14u, (r28 + 290), static_cast<uint16_t>(r27));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r28 + 292), r27);
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r28 + 296), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r28 + 300), r27);
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r28 + 304), r27);
    }
    MemoryInline::WriteResolved32(guest_range_3, 32u, (r28 + 308), r27);
    r0 = MemoryInline::FlatRead32((r28 + 244));
    r0 = (r0 & 31);
}

loc_80080DC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80080DDC;
    }
}

loc_80080DC8:
{
    r0 = MemoryInline::FlatRead32((r28 + 248));
    r0 = (r0 & 31);
}

loc_80080DD4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80080DDC;
    }
}

loc_80080DD8:
{
    r27 = 1;
}

loc_80080DDC:
{
}

loc_80080DE0:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_80080E00;
    }
}

loc_80080DE4:
{
    r3 = 0x80590000u;
    r3 = (r3 + -1952);
    r4 = 1009;
    r5 = 0x80590000u;
    r5 = (r5 + -1444);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80080E00u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_80080E00:
{
    r3 = r29;
    // inline leaf 0x8005D360 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8005D360
}

loc_80080E0C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80080E2C;
    }
}

loc_80080E10:
{
    r3 = 0x80590000u;
    r3 = (r3 + -1952);
    r4 = 1010;
    r5 = 0x80590000u;
    r5 = (r5 + -1352);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80080E2Cu;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_80080E2C:
{
    r0 = MemoryInline::FlatRead32((r28 + 272));
}

loc_80080E34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80080E4C;
    }
}

loc_80080E38:
{
    r3 = r28;
    r4 = 536870912;
    r5 = 0;
    // inline leaf 0x8007BA38 (11 guest instruction(s))
}

loc_inl2_0x8007BA38:
{
}

loc_inl2_0x8007BA3C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x8007BA50;
    }
}

loc_inl2_0x8007BA40:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32((r3 + 204), r0);
    goto loc_inl2_cont_8007BA38;
}

loc_inl2_0x8007BA50:
{
    r5 = MemoryInline::FlatRead32((r3 + 204));
    r0 = ~(r4 | r4);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite32((r3 + 204), r0);
}

loc_inl2_cont_8007BA38:
{
    // end of inlined leaf 0x8007BA38
    goto loc_80080E5C;
}

loc_80080E4C:
{
    r3 = r28;
    r4 = 536870912;
    r5 = 1;
    // inline leaf 0x8007BA38 (11 guest instruction(s))
}

loc_inl3_0x8007BA38:
{
}

loc_inl3_0x8007BA3C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x8007BA50;
    }
}

loc_inl3_0x8007BA40:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32((r3 + 204), r0);
    goto loc_inl3_cont_8007BA38;
}

loc_inl3_0x8007BA50:
{
    r5 = MemoryInline::FlatRead32((r3 + 204));
    r0 = ~(r4 | r4);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite32((r3 + 204), r0);
}

loc_inl3_cont_8007BA38:
{
    // end of inlined leaf 0x8007BA38
}

loc_80080E5C:
{
    r0 = MemoryInline::FlatRead32((r28 + 276));
}

loc_80080E64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80080E7C;
    }
}

loc_80080E68:
{
    r3 = r28;
    r4 = 1073741824;
    r5 = 0;
    // inline leaf 0x8007BA38 (11 guest instruction(s))
}

loc_inl4_0x8007BA38:
{
}

loc_inl4_0x8007BA3C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl4_0x8007BA50;
    }
}

loc_inl4_0x8007BA40:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32((r3 + 204), r0);
    goto loc_inl4_cont_8007BA38;
}

loc_inl4_0x8007BA50:
{
    r5 = MemoryInline::FlatRead32((r3 + 204));
    r0 = ~(r4 | r4);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite32((r3 + 204), r0);
}

loc_inl4_cont_8007BA38:
{
    // end of inlined leaf 0x8007BA38
    goto loc_80080E8C;
}

loc_80080E7C:
{
    r3 = r28;
    r4 = 1073741824;
    r5 = 1;
    // inline leaf 0x8007BA38 (11 guest instruction(s))
}

loc_inl5_0x8007BA38:
{
}

loc_inl5_0x8007BA3C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl5_0x8007BA50;
    }
}

loc_inl5_0x8007BA40:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32((r3 + 204), r0);
    goto loc_inl5_cont_8007BA38;
}

loc_inl5_0x8007BA50:
{
    r5 = MemoryInline::FlatRead32((r3 + 204));
    r0 = ~(r4 | r4);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite32((r3 + 204), r0);
}

loc_inl5_cont_8007BA38:
{
    // end of inlined leaf 0x8007BA38
}

loc_80080E8C:
{
    r0 = MemoryInline::FlatRead32((r28 + 244));
}

loc_80080E94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80080EAC;
    }
}

loc_80080E98:
{
    r3 = (r31 * 48);
    // inline leaf 0x8007F474 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007F474
    r4 = (r30 * r3);
    r3 = MemoryInline::FlatRead32((r28 + 244));
    if constexpr (KnownRegArgsCpuCall<0x80071CA0u>(&func_80071CA0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80071CA0_52AD = func_80071CA0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80071CA0_52AD);
        r4 = static_cast<uint32_t>(regargs_result_80071CA0_52AD >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80071CA0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_80080EAC:
{
    r0 = MemoryInline::FlatRead32((r28 + 248));
}

loc_80080EB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80080ECC;
    }
}

loc_80080EB8:
{
    r3 = (r31 * 36);
    // inline leaf 0x8007F474 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007F474
    r4 = (r30 * r3);
    r3 = MemoryInline::FlatRead32((r28 + 248));
    if constexpr (KnownRegArgsCpuCall<0x80071CA0u>(&func_80071CA0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80071CA0_5748 = func_80071CA0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80071CA0_5748);
        r4 = static_cast<uint32_t>(regargs_result_80071CA0_5748 >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80071CA0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_80080ECC:
{
    r0 = MemoryInline::FlatRead32((r28 + 252));
}

loc_80080ED4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80080EEC;
    }
}

loc_80080ED8:
{
    r3 = (r31 * 48);
    // inline leaf 0x8007F474 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007F474
    r4 = (r30 * r3);
    r3 = MemoryInline::FlatRead32((r28 + 252));
    if constexpr (KnownRegArgsCpuCall<0x80071CA0u>(&func_80071CA0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80071CA0_5BE3 = func_80071CA0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80071CA0_5BE3);
        r4 = static_cast<uint32_t>(regargs_result_80071CA0_5BE3 >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80071CA0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_80080EEC:
{
    r3 = r29;
    ctx->lr = 0x80080EF4u;
    if constexpr (KnownRegArgsCpuCall<0x800740D8u>(&func_800740D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800740D8_5EFE = func_800740D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800740D8_5EFE);
        r4 = static_cast<uint32_t>(regargs_result_800740D8_5EFE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x800740D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    r3 = (r1 + 16);
    ctx->lr = 0x80080F00u;
    if constexpr (KnownRegArgsCpuCall<0x8007D468u>(&func_8007D468)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8007D468_6331 = func_8007D468_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007D468_6331);
        r4 = static_cast<uint32_t>(regargs_result_8007D468_6331 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8007D468u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead8((r3 + 34));
}

loc_80080F08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80080F80;
    }
}

loc_80080F0C:
{
    r3 = r29;
    ctx->lr = 0x80080F14u;
    if constexpr (KnownRegArgsCpuCall<0x800740D8u>(&func_800740D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800740D8_67ED = func_800740D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800740D8_67ED);
        r4 = static_cast<uint32_t>(regargs_result_800740D8_67ED >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x800740D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = (r1 + 12);
    ctx->lr = 0x80080F20u;
    if constexpr (KnownRegArgsCpuCall<0x8007D468u>(&func_8007D468)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8007D468_6C20 = func_8007D468_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007D468_6C20);
        r4 = static_cast<uint32_t>(regargs_result_8007D468_6C20 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8007D468u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r30 = r3;
    r3 = r29;
    ctx->lr = 0x80080F2Cu;
    if constexpr (KnownRegArgsCpuCall<0x800740D8u>(&func_800740D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800740D8_702A = func_800740D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800740D8_702A);
        r4 = static_cast<uint32_t>(regargs_result_800740D8_702A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x800740D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = (r1 + 8);
    ctx->lr = 0x80080F38u;
    if constexpr (KnownRegArgsCpuCall<0x8007D468u>(&func_8007D468)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8007D468_745B = func_8007D468_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007D468_745B);
        r4 = static_cast<uint32_t>(regargs_result_8007D468_745B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8007D468u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r29 = r3;
    r3 = (r1 + 24);
    ctx->lr = 0x80080F44u;
    if constexpr (KnownRegArgsCpuCall<0x80080FA8u>(&func_80080FA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80080FA8_7854 = func_80080FA8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80080FA8_7854;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80080FA8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    f0.d = MemoryInline::FlatReadFloat32((r30 + 40));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 44));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 48));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 52));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 56));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 60));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    r3 = r28;
    r4 = (r1 + 24);
    ctx->lr = 0x80080F80u;
    if constexpr (KnownRegArgsCpuCall<0x80080F9Cu>(&func_80080F9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80080F9C_7DB5 = func_80080F9C_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80080F9C_7DB5);
        r4 = static_cast<uint32_t>(regargs_result_80080F9C_7DB5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80080F9Cu>(ctx);
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
}

loc_80080F80:
{
    r3 = r28;
    r11 = (r1 + 96);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -24));
        }
    }
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->fpr[0] = f0;
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

extern "C" void func_80080CC4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80080CC4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x03803FFF gpr_write=0x03801FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80080CC4 func_80080CC4 preserves=true fpr_mask=0x00000000
