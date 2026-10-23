#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D2E98(CpuContext* ctx);
extern "C" uint32_t func_800D2E98_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_801E68B4(CpuContext* ctx);
extern "C" void func_801E68B4_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80271A1C(CpuContext* ctx);
extern "C" uint64_t func_80271A1C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802723B0(CpuContext* ctx);
extern "C" uint64_t func_802723B0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80272590(CpuContext* ctx);
extern "C" uint64_t func_80272590_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027EB94(CpuContext* ctx);
extern "C" uint32_t func_8027EB94_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802DE3C4(CpuContext* ctx);
extern "C" uint64_t func_802DE3C4_ra38_1fa_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_802E05B4(CpuContext* ctx);
extern "C" uint64_t func_802E05B4_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_802E0714(CpuContext* ctx);
extern "C" uint64_t func_802E0714_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_802E09A8(CpuContext* ctx);
extern "C" uint64_t func_802E09A8_ra38_1fa_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_802E2344(CpuContext* ctx);
extern "C" uint64_t func_802E2344_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802E2360(CpuContext* ctx);
extern "C" uint64_t func_802E2360_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8034CC90(CpuContext* ctx);
extern "C" uint64_t func_8034CC90_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801E68B4_statefree(uint32_t, uint32_t);
extern "C" void func_801E68B4_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_80311270_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
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

    goto loc_80311270;

loc_80311270:
{
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    r11 = (r1 + 176);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
    r25 = r3;
    r26 = r4;
    r20 = r5;
    r0 = (r5 & 65535);
}

loc_80311298:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803112D8;
    }
}

loc_8031129C:
{
    r3 = 1;
    r4 = (r1 + 24);
    ctx->lr = 0x803112A8u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802E05B4_12D1 = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_12D1);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_12D1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r3 = (r20 & 65535);
    r4 = (r1 + 16);
    ctx->lr = 0x803112B4u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802E05B4_167A = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_167A);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_167A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r3 = MemoryInline::FlatRead16((r1 + 24));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r1 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 - r3);
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r1 + 26));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r1 + 18));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 - r3);
    MemoryInline::FlatWriteRam16((r1 + 18), static_cast<uint16_t>(r0));
    goto loc_803112E4;
}

loc_803112D8:
{
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 18), static_cast<uint16_t>(r0));
}

loc_803112E4:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = 1;
    r4 = (r1 + 24);
    r5 = (r1 + 12);
    ctx->lr = 0x803112FCu;
    if constexpr (KnownRegArgsCpuCall<0x802E0714u>(&func_802E0714)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802E0714_1DF2 = func_802E0714_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E0714_1DF2);
        r4 = static_cast<uint32_t>(regargs_result_802E0714_1DF2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802E0714u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r3 = 188;
    // inline leaf 0x8029F810 (6 guest instruction(s))
    r0 = (r3 & 65535);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = 0x806B0000u;
    r3 = (r3 + -3160);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    // end of inlined leaf 0x8029F810
    r4 = (r1 + 24);
    ctx->lr = 0x8031130Cu;
    if constexpr (KnownRegArgsCpuCall<0x802E09A8u>(&func_802E09A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[2] = f2;
        const auto regargs_result_802E09A8_2397 = func_802E09A8_ra38_1fa_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E09A8_2397);
        r4 = static_cast<uint32_t>(regargs_result_802E09A8_2397 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802E09A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
    }
    r3 = 12;
    r4 = (r1 + 24);
    ctx->lr = 0x80311318u;
    if constexpr (KnownRegArgsCpuCall<0x802DE3C4u>(&func_802DE3C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[2] = f2;
        const auto regargs_result_802DE3C4_2BD1 = func_802DE3C4_ra38_1fa_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802DE3C4_2BD1);
        r4 = static_cast<uint32_t>(regargs_result_802DE3C4_2BD1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802DE3C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
    }
    r3 = r26;
    r4 = (r1 + 64);
    r5 = (r1 + 40);
    r6 = (r1 + 32);
    ctx->lr = 0x8031132Cu;
    if constexpr (KnownRegArgsCpuCall<0x80272590u>(&func_80272590)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        const auto regargs_result_80272590_341B = func_80272590_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80272590_341B);
        r4 = static_cast<uint32_t>(regargs_result_80272590_341B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80272590u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
    }
    r3 = 0;
    r0 = MemoryInline::FlatRead16((r1 + 64));
}

loc_80311338:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80311340;
    }
}

loc_8031133C:
{
    r3 = 1;
}

loc_80311340:
{
    r0 = MemoryInline::FlatRead16((r1 + 66));
}

loc_80311348:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80311350;
    }
}

loc_8031134C:
{
    r3 = (r3 + 1);
}

loc_80311350:
{
    r0 = MemoryInline::FlatRead16((r1 + 68));
}

loc_80311358:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80311360;
    }
}

loc_8031135C:
{
    r3 = (r3 + 1);
}

loc_80311360:
{
    r0 = MemoryInline::FlatRead16((r1 + 70));
}

loc_80311368:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80311370;
    }
}

loc_8031136C:
{
    r3 = (r3 + 1);
}

loc_80311370:
{
    r0 = MemoryInline::FlatRead16((r1 + 72));
}

loc_80311378:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80311380;
    }
}

loc_8031137C:
{
    r3 = (r3 + 1);
}

loc_80311380:
{
    r0 = MemoryInline::FlatRead16((r1 + 74));
}

loc_80311388:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80311390;
    }
}

loc_8031138C:
{
    r3 = (r3 + 1);
}

loc_80311390:
{
    r0 = MemoryInline::FlatRead16((r1 + 76));
}

loc_80311398:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803113A0;
    }
}

loc_8031139C:
{
    r3 = (r3 + 1);
}

loc_803113A0:
{
    r0 = MemoryInline::FlatRead16((r1 + 78));
}

loc_803113A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803113B0;
    }
}

loc_803113AC:
{
    r3 = (r3 + 1);
}

loc_803113B0:
{
}

loc_803113B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803113DC;
    }
}

loc_803113B8:
{
    r3 = 46;
    ctx->lr = 0x803113C0u;
    if constexpr (KnownRegArgsCpuCall<0x800D2E98u>(&func_800D2E98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D2E98_40E9 = func_800D2E98_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D2E98_40E9;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800D2E98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r4 = r3;
    r3 = 3;
    r4 = MemoryInline::FlatRead32((r4 + 20));
    r5 = 0;
    r6 = (r1 + 24);
    ctx->lr = 0x803113D8u;
    if constexpr (KnownRegArgsCpuCall<0x802E2360u>(&func_802E2360)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        const auto regargs_result_802E2360_4411 = func_802E2360_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E2360_4411);
        r4 = static_cast<uint32_t>(regargs_result_802E2360_4411 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802E2360u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
    }
    goto loc_8031158C;
}

loc_803113DC:
{
    r3 = 189;
    // inline leaf 0x8029F810 (6 guest instruction(s))
    r0 = (r3 & 65535);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = 0x806B0000u;
    r3 = (r3 + -3160);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x8029F810
    r27 = 0;
    r30 = r3;
    r29 = (r1 + 64);
    r28 = (r1 + 32);
    r31 = -432603136;
    r24 = 0x87880000u;
}

loc_803113FC:
{
    r0 = MemoryInline::FlatRead32((r1 + 24));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead16(r30);
    r4 = (r1 + 20);
    r5 = (r1 + 8);
    ctx->lr = 0x80311414u;
    if constexpr (KnownRegArgsCpuCall<0x802E0714u>(&func_802E0714)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802E0714_4E6B = func_802E0714_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E0714_4E6B);
        r4 = static_cast<uint32_t>(regargs_result_802E0714_4E6B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802E0714u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r3 = 190;
    // inline leaf 0x8029F810 (6 guest instruction(s))
    r0 = (r3 & 65535);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = 0x806B0000u;
    r3 = (r3 + -3160);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    // end of inlined leaf 0x8029F810
    r4 = (r1 + 20);
    ctx->lr = 0x80311424u;
    if constexpr (KnownRegArgsCpuCall<0x802E09A8u>(&func_802E09A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[2] = f2;
        const auto regargs_result_802E09A8_5410 = func_802E09A8_ra38_1fa_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E09A8_5410);
        r4 = static_cast<uint32_t>(regargs_result_802E09A8_5410 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802E09A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
    }
    r0 = MemoryInline::FlatRead16(r29);
}

loc_8031142C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80311574;
    }
}

loc_80311430:
{
    r23 = 0;
    r3 = r26;
    r4 = MemoryInline::FlatRead8(r28);
    ctx->lr = 0x80311440u;
    if constexpr (KnownRegArgsCpuCall<0x802723B0u>(&func_802723B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_802723B0_5CA1 = func_802723B0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802723B0_5CA1);
        r4 = static_cast<uint32_t>(regargs_result_802723B0_5CA1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x802723B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80311448:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80311450;
    }
}

loc_8031144C:
{
    r23 = (r23 | 16);
}

loc_80311450:
{
    r3 = r25;
    r4 = (r26 + 72);
    r5 = (r26 + 84);
    r6 = MemoryInline::FlatRead16(r29);
    ctx->lr = 0x80311464u;
    if constexpr (KnownRegArgsCpuCall<0x80271A1Cu>(&func_80271A1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80271A1C_6197 = func_80271A1C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80271A1C_6197);
        r4 = static_cast<uint32_t>(regargs_result_80271A1C_6197 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80271A1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_80311468:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80311474;
    }
}

loc_8031146C:
{
    r0 = (r23 | 32);
    r23 = (r0 & 255);
}

loc_80311474:
{
    r3 = 14;
    r4 = 0;
    ctx->lr = 0x80311480u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802E05B4_65FE = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_65FE);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_65FE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r4 = r3;
    r3 = (r1 + 80);
    // inline leaf 0x801E68B4 (25 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 36u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, r3, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_3, 4u, (r3 + 4), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_2, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_3, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_3, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r4 + 12));
    MemoryInline::WriteResolved32(guest_range_3, 12u, (r3 + 12), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_2, 16u, (r4 + 16));
    MemoryInline::WriteResolved16(guest_range_3, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 18u, (r4 + 18));
    MemoryInline::WriteResolved8(guest_range_3, 18u, (r3 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 19u, (r4 + 19));
    MemoryInline::WriteResolved8(guest_range_3, 19u, (r3 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r4 + 20));
    MemoryInline::WriteResolved32(guest_range_3, 20u, (r3 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r4 + 24));
    MemoryInline::WriteResolved32(guest_range_3, 24u, (r3 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r4 + 28));
    MemoryInline::WriteResolved32(guest_range_3, 28u, (r3 + 28), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r4 + 32));
    MemoryInline::WriteResolved32(guest_range_3, 32u, (r3 + 32), r0);
    // end of inlined leaf 0x801E68B4
    r0 = (r23 & 255);
    r0 = (r0 & 16);
}

loc_80311498:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803114A4;
    }
}

loc_8031149C:
{
    r0 = (r31 + 14335);
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
}

loc_803114A4:
{
    r0 = (r23 & 255);
    r0 = (r0 & 32);
}

loc_803114B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803114BC;
    }
}

loc_803114B4:
{
    r0 = (r24 + -30721);
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
}

loc_803114BC:
{
    r3 = MemoryInline::FlatRead16(r29);
    ctx->lr = 0x803114C4u;
    if constexpr (KnownRegArgsCpuCall<0x8027EB94u>(&func_8027EB94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027EB94_7487 = func_8027EB94_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8027EB94_7487;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8027EB94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r4 = r3;
    r3 = (r1 + 80);
    r5 = 1;
    r6 = (r1 + 20);
    ctx->lr = 0x803114D8u;
    if constexpr (KnownRegArgsCpuCall<0x802E2344u>(&func_802E2344)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        const auto regargs_result_802E2344_7788 = func_802E2344_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E2344_7788);
        r4 = static_cast<uint32_t>(regargs_result_802E2344_7788 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802E2344u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
    }
    r3 = (r1 + 48);
    r4 = MemoryInline::FlatRead16(r29);
    // inline leaf 0x8034D2BC (11 guest instruction(s))
    r0 = 8;
    MemoryInline::FlatWriteRam32(r3, r0);
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r4));
    r0 = 0;
    MemoryInline::FlatWriteRam16((r3 + 6), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 12), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 14), static_cast<uint16_t>(r0));
    r3 = 8;
    // end of inlined leaf 0x8034D2BC
    r3 = 15;
    r4 = 0;
    ctx->lr = 0x803114F0u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802E05B4_81BF = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_81BF);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_81BF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r4 = r3;
    r3 = (r1 + 80);
    // inline leaf 0x801E68B4 (25 guest instruction(s))
    guest_range_4 = MemoryInline::ResolveRangeHost(r4, 0, 36u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 0u, r4);
    MemoryInline::FlatWriteRam32(r3, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r4 + 4));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_4, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_4, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r4 + 12));
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_4, 16u, (r4 + 16));
    MemoryInline::FlatWriteRam16((r3 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 18u, (r4 + 18));
    MemoryInline::FlatWriteRam8((r3 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 19u, (r4 + 19));
    MemoryInline::FlatWriteRam8((r3 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r4 + 20));
    MemoryInline::FlatWriteRam32((r3 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r4 + 24));
    MemoryInline::FlatWriteRam32((r3 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r4 + 28));
    MemoryInline::FlatWriteRam32((r3 + 28), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r4 + 32));
    MemoryInline::FlatWriteRam32((r3 + 32), r0);
    // end of inlined leaf 0x801E68B4
    r3 = MemoryInline::FlatRead16((r1 + 80));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r1 + 20));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 + r0);
    r23 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = MemoryInline::FlatRead16((r1 + 82));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r1 + 22));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 + r0);
    r22 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r21 = MemoryInline::FlatRead16((r1 + 88));
    r21 = (r21 << 16);
    r21 = (static_cast<int32_t>(r21) >> 16);
    r20 = MemoryInline::FlatRead16((r1 + 90));
    r20 = (r20 << 16);
    r20 = (static_cast<int32_t>(r20) >> 16);
    r3 = 16;
    r4 = 0;
    ctx->lr = 0x80311530u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802E05B4_9002 = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_9002);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_9002 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r4 = r3;
    r3 = (r1 + 80);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x801E68B4u) && KnownTranslatedCpuCall<0x801E68B4u>::kAvailable && !KnownTranslatedCpuCall<0x801E68B4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x801E68B4u>()) {
        func_801E68B4_statefree_v0(r3, r4);
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x801E68B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
    }
    r0 = MemoryInline::FlatRead16((r1 + 88));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80311544:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8031154C;
    }
}

loc_80311548:
{
    r0 = (0 - r0);
}

loc_8031154C:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r21 = (r21 + r0);
    r3 = (r1 + 48);
    r4 = r23;
    r5 = r22;
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r21)));
    r7 = r20;
    r8 = 12;
    r9 = 9;
    ctx->lr = 0x80311574u;
    if constexpr (KnownRegArgsCpuCall<0x8034CC90u>(&func_8034CC90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        const auto regargs_result_8034CC90_9B7B = func_8034CC90_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8034CC90_9B7B);
        r4 = static_cast<uint32_t>(regargs_result_8034CC90_9B7B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8034CC90u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
}

loc_80311574:
{
    r30 = (r30 + 2);
    r29 = (r29 + 2);
    r28 = (r28 + 1);
    r27 = (r27 + 1);
}

loc_80311588:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(8))) {
        goto loc_803113FC;
    }
}

loc_8031158C:
{
    r11 = (r1 + 176);
    // inline leaf 0x804574B8 (13 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    // end of inlined leaf 0x804574B8
    r0 = MemoryInline::FlatRead32((r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80311270(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80311270_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF80FFFF fpr_write=0xFF80FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80311270 func_80311270 preserves=true fpr_mask=0x00000000
