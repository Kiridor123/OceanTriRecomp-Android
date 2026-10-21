#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F3988(CpuContext* ctx);
extern "C" uint64_t func_800F3988_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800F3B0C(CpuContext* ctx);
extern "C" uint64_t func_800F3B0C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80131C38(CpuContext* ctx);
extern "C" uint64_t func_80131C38_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_80144644(CpuContext* ctx);
extern "C" uint64_t func_80144644_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803AD958(CpuContext* ctx);
extern "C" uint32_t func_803AD958_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_800F3CBC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
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

    MKW_GUEST_ENTER(0x800F3CBCu);
    goto loc_800F3CBC;

loc_800F3CBC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r28 = r3;
    r26 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r26);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r26);
    }
    ctx->lr = 0x800F3CE4u;
    if constexpr (KnownRegArgsCpuCall<0x803AD958u>(&func_803AD958)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_803AD958_C32 = func_803AD958_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803AD958_C32;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803AD958u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_800F3CEC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_800F3FE4;
    }
}

loc_800F3CF0:
{
    ctx->lr = 0x800F3CF4u;
    if constexpr (KnownRegArgsCpuCall<0x803AD958u>(&func_803AD958)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_803AD958_FB2 = func_803AD958_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803AD958_FB2;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803AD958u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_800F3CFC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(6))) {
        goto loc_800F3FE4;
    }
}

loc_800F3D00:
{
    r29 = 0;
    r27 = r28;
}

loc_800F3D08:
{
    r25 = (r28 + r29);
    r0 = MemoryInline::FlatRead8((r25 + 473));
}

loc_800F3D14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F3D60;
    }
}

loc_800F3D18:
{
    r3 = MemoryInline::FlatRead16((r27 + 476));
}

loc_800F3D20:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(65535))) {
        goto loc_800F3D60;
    }
}

loc_800F3D24:
{
    r4 = (r1 + 20);
    r5 = (r1 + 16);
    ctx->lr = 0x800F3D30u;
    if constexpr (KnownRegArgsCpuCall<0x80144644u>(&func_80144644)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80144644_14FA = func_80144644_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80144644_14FA);
        r4 = static_cast<uint32_t>(regargs_result_80144644_14FA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80144644u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_800F3D38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F3D60;
    }
}

loc_800F3D3C:
{
    r3 = MemoryInline::FlatRead32((r1 + 20));
}

loc_800F3D44:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F3D60;
    }
}

loc_800F3D48:
{
    ctx->lr = 0x800F3D4Cu;
    if constexpr (KnownRegArgsCpuCall<0x80131C38u>(&func_80131C38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80131C38_19CC = func_80131C38_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80131C38_19CC);
        r4 = static_cast<uint32_t>(regargs_result_80131C38_19CC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80131C38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_800F3D50:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F3D60;
    }
}

loc_800F3D54:
{
    MemoryInline::FlatWrite8((r25 + 485), static_cast<uint8_t>(r26));
    MemoryInline::FlatWrite8((r25 + 488), static_cast<uint8_t>(r26));
    MemoryInline::FlatWrite8((r25 + 491), static_cast<uint8_t>(r26));
}

loc_800F3D60:
{
    r27 = (r27 + 2);
    r29 = (r29 + 1);
}

loc_800F3D6C:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(3))) {
        goto loc_800F3D08;
    }
}

loc_800F3D70:
{
    r31 = 0;
    MemoryInline::FlatWrite8((r28 + 98), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r28 + 100), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r28 + 94), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r28 + 99), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r28 + 101), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r28 + 95), static_cast<uint8_t>(r31));
    r29 = 0;
    r30 = r28;
    r26 = 180;
    r27 = 50;
}

loc_800F3D9C:
{
    r25 = (r28 + r29);
    r0 = MemoryInline::FlatRead8((r25 + 473));
}

loc_800F3DA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F3E7C;
    }
}

loc_800F3DAC:
{
    r4 = MemoryInline::FlatRead16((r30 + 476));
}

loc_800F3DB4:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(65535))) {
        goto loc_800F3E7C;
    }
}

loc_800F3DB8:
{
    r0 = MemoryInline::FlatRead8((r25 + 485));
}

loc_800F3DC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F3E7C;
    }
}

loc_800F3DC4:
{
    r0 = MemoryInline::FlatRead8((r25 + 491));
}

loc_800F3DCC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F3DDC;
    }
}

loc_800F3DD0:
{
    r0 = MemoryInline::FlatRead8((r25 + 488));
}

loc_800F3DD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F3E7C;
    }
}

loc_800F3DDC:
{
    r3 = MemoryInline::FlatRead8((r25 + 482));
    r5 = (r1 + 12);
    r6 = (r1 + 8);
    ctx->lr = 0x800F3DECu;
    if constexpr (KnownRegArgsCpuCall<0x800F3988u>(&func_800F3988)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800F3988_25D6 = func_800F3988_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800F3988_25D6);
        r4 = static_cast<uint32_t>(regargs_result_800F3988_25D6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F3988u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r3 = r28;
    r4 = MemoryInline::FlatRead16((r30 + 476));
    r5 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = 0x800F3DFCu;
    if constexpr (KnownRegArgsCpuCall<0x800F3B0Cu>(&func_800F3B0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800F3B0C_2A4A = func_800F3B0C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F3B0C_2A4A);
        r4 = static_cast<uint32_t>(regargs_result_800F3B0C_2A4A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->gpr[6] = r6;
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
        InvokeDirectCpu<0x800F3B0Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_800F3E04:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(-1))) {
        goto loc_800F3E7C;
    }
}

loc_800F3E08:
{
    r0 = MemoryInline::FlatRead8((r25 + 491));
}

loc_800F3E10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F3E5C;
    }
}

loc_800F3E14:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r5 = (r28 + r0);
    r0 = MemoryInline::FlatRead16((r5 + 84));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800F3E24:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F3E44;
    }
}

loc_800F3E28:
{
    r4 = (r28 + r4);
    r0 = MemoryInline::FlatRead8((r4 + 88));
}

loc_800F3E34:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(50))) {
        goto loc_800F3E40;
    }
}

loc_800F3E38:
{
    MemoryInline::FlatWrite16((r5 + 84), static_cast<uint16_t>(r26));
    goto loc_800F3E44;
}

loc_800F3E40:
{
    MemoryInline::FlatWrite16((r5 + 84), static_cast<uint16_t>(r31));
}

loc_800F3E44:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r3 = (r28 + r0);
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r3 + 94), static_cast<uint8_t>(r0));
    goto loc_800F3E70;
}

loc_800F3E5C:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r3 = (r28 + r0);
    MemoryInline::FlatWrite16((r3 + 84), static_cast<uint16_t>(r31));
    r3 = (r28 + r4);
    MemoryInline::FlatWrite8((r3 + 94), static_cast<uint8_t>(r27));
}

loc_800F3E70:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r3 + 98), static_cast<uint8_t>(r0));
}

loc_800F3E7C:
{
    r30 = (r30 + 2);
    r29 = (r29 + 1);
}

loc_800F3E88:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(3))) {
        goto loc_800F3D9C;
    }
}

loc_800F3E8C:
{
    r3 = MemoryInline::FlatRead8((r28 + 98));
}

loc_800F3E94:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F3FC0;
    }
}

loc_800F3E98:
{
    r0 = MemoryInline::FlatRead8((r28 + 99));
}

loc_800F3EA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F3FC0;
    }
}

loc_800F3EA4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_800F3EA8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800F3EB8;
    }
}

loc_800F3EAC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 101), static_cast<uint8_t>(r0));
    goto loc_800F3FC0;
}

loc_800F3EB8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800F3EC8;
    }
}

loc_800F3EBC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 100), static_cast<uint8_t>(r0));
    goto loc_800F3FC0;
}

loc_800F3EC8:
{
    r3 = MemoryInline::FlatRead8((r28 + 94));
}

loc_800F3ED0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(50))) {
        goto loc_800F3F1C;
    }
}

loc_800F3ED4:
{
    r0 = MemoryInline::FlatRead8((r28 + 95));
}

loc_800F3EDC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(50))) {
        goto loc_800F3F1C;
    }
}

loc_800F3EE0:
{
    r0 = MemoryInline::FlatRead8((r28 + 77));
}

loc_800F3EE8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800F3EF8;
    }
}

loc_800F3EEC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 101), static_cast<uint8_t>(r0));
    goto loc_800F3FC0;
}

loc_800F3EF8:
{
    r0 = MemoryInline::FlatRead8((r28 + 78));
}

loc_800F3F00:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800F3F10;
    }
}

loc_800F3F04:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 100), static_cast<uint8_t>(r0));
    goto loc_800F3FC0;
}

loc_800F3F10:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 101), static_cast<uint8_t>(r0));
    goto loc_800F3FC0;
}

loc_800F3F1C:
{
}

loc_800F3F20:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(50))) {
        goto loc_800F3FA4;
    }
}

loc_800F3F24:
{
    r0 = MemoryInline::FlatRead8((r28 + 95));
}

loc_800F3F2C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(50))) {
        goto loc_800F3FA4;
    }
}

loc_800F3F30:
{
    r4 = MemoryInline::FlatRead8((r28 + 77));
}

loc_800F3F38:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(1))) {
        goto loc_800F3F84;
    }
}

loc_800F3F3C:
{
    r0 = MemoryInline::FlatRead8((r28 + 78));
}

loc_800F3F44:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800F3F84;
    }
}

loc_800F3F48:
{
    r0 = MemoryInline::FlatRead16((r28 + 86));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = MemoryInline::FlatRead16((r28 + 84));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_800F3F54:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F3F64;
    }
}

loc_800F3F58:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 101), static_cast<uint8_t>(r0));
    goto loc_800F3FC0;
}

loc_800F3F64:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800F3F74;
    }
}

loc_800F3F68:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 100), static_cast<uint8_t>(r0));
    goto loc_800F3FC0;
}

loc_800F3F74:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800F3F84;
    }
}

loc_800F3F78:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 101), static_cast<uint8_t>(r0));
    goto loc_800F3FC0;
}

loc_800F3F84:
{
}

loc_800F3F88:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(1))) {
        goto loc_800F3F98;
    }
}

loc_800F3F8C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 101), static_cast<uint8_t>(r0));
    goto loc_800F3FC0;
}

loc_800F3F98:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 100), static_cast<uint8_t>(r0));
    goto loc_800F3FC0;
}

loc_800F3FA4:
{
}

loc_800F3FA8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(50))) {
        goto loc_800F3FB8;
    }
}

loc_800F3FAC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 100), static_cast<uint8_t>(r0));
    goto loc_800F3FC0;
}

loc_800F3FB8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 101), static_cast<uint8_t>(r0));
}

loc_800F3FC0:
{
    r0 = MemoryInline::FlatRead8((r28 + 68));
}

loc_800F3FC8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F3FD8;
    }
}

loc_800F3FCC:
{
    r0 = MemoryInline::FlatRead8((r28 + 69));
}

loc_800F3FD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F3FE4;
    }
}

loc_800F3FD8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 100), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 101), static_cast<uint8_t>(r0));
}

loc_800F3FE4:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

extern "C" void func_800F3CBC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800F3CBC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x003FFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800F3CBC func_800F3CBC preserves=true fpr_mask=0x00000000
