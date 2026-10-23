#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80040890(CpuContext* ctx);
extern "C" uint64_t func_80040890_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80044AB8(CpuContext* ctx);
extern "C" uint32_t func_80044AB8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800D849C(CpuContext* ctx);
extern "C" uint64_t func_800D849C_ra0_0_18_0(CpuContext*);
extern "C" void func_800E4B30(CpuContext* ctx);
extern "C" uint64_t func_800E4B30_ra0_0_18_0(CpuContext*);
extern "C" void func_800E4B70(CpuContext* ctx);
extern "C" uint64_t func_800E4B70_ra0_0_18_0(CpuContext*);
extern "C" void func_800E8338(CpuContext* ctx);
extern "C" uint64_t func_800E8338_ra0_0_18_0(CpuContext*);
extern "C" void func_800E8378(CpuContext* ctx);
extern "C" uint64_t func_800E8378_ra0_0_18_0(CpuContext*);
extern "C" void func_800E874C(CpuContext* ctx);
extern "C" uint64_t func_800E874C_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800F6398(CpuContext* ctx);
extern "C" uint64_t func_800F6398_ra0_0_18_0(CpuContext*);
extern "C" void func_803A91F0(CpuContext* ctx);
extern "C" uint64_t func_803A91F0_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80435DBC(CpuContext* ctx);
extern "C" uint64_t func_80435DBC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8045607C(CpuContext* ctx);
extern "C" uint32_t func_8045607C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_804D2BA0(CpuContext* ctx);
extern "C" uint64_t func_804D2BA0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804D2CC0(CpuContext* ctx);
extern "C" uint64_t func_804D2CC0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804E96A0(CpuContext* ctx);
extern "C" uint32_t func_804E96A0_ra68_1e_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_804EDCA0(CpuContext* ctx);
extern "C" uint64_t func_804EDCA0_ra0_0_18_0(CpuContext*);
extern "C" void func_804EEF40(CpuContext* ctx);
extern "C" uint64_t func_804EEF40_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_80435EA8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    const uint32_t r23_entry = r23;
    const uint32_t r24_entry = r24;
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;

    goto loc_80435EA8;

loc_80435EA8:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r29 = r3;
    r3 = 0x806D0000u;
    r30 = (r3 + 27968);
    r3 = 0x80660000u;
    r31 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r31 + 2160));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    MemoryInline::FlatWriteRam8((r30 + 11), static_cast<uint8_t>(r0));
    r23 = 1;
    MemoryInline::FlatWriteRam8((r31 + 2160), static_cast<uint8_t>(r23));
    r25 = -1;
    r28 = 2;
    r27 = 0;
    r26 = 3;
}

loc_80435EFC:
{
    ctx->lr = 0x80435F00u;
    if constexpr (KnownRegArgsCpuCall<0x804EDCA0u>(&func_804EDCA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804EDCA0_1396 = func_804EDCA0_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804EDCA0_1396);
        r4 = static_cast<uint32_t>(regargs_result_804EDCA0_1396 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804EDCA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80435F04:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_80435F18;
    }
}

loc_80435F08:
{
    r3 = 2;
    ctx->lr = 0x80435F10u;
    if constexpr (KnownRegArgsCpuCall<0x804EEF40u>(&func_804EEF40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_804EEF40_174F = func_804EEF40_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804EEF40_174F);
        r4 = static_cast<uint32_t>(regargs_result_804EEF40_174F >> 32);
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x804EEF40u>(ctx);
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
    }
    r3 = 3;
    ctx->lr = 0x80435F18u;
    if constexpr (KnownRegArgsCpuCall<0x804EEF40u>(&func_804EEF40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_804EEF40_1CF1 = func_804EEF40_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804EEF40_1CF1);
        r4 = static_cast<uint32_t>(regargs_result_804EEF40_1CF1 >> 32);
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x804EEF40u>(ctx);
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
    }
}

loc_80435F18:
{
}

loc_80435F1C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80435F30;
    }
}

loc_80435F20:
{
    r3 = r29;
    ctx->lr = 0x80435F28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x804AACC0u>(ctx);
    r0 = ctx->gpr[0];
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
    r24 = r3;
    goto loc_80435F34;
}

loc_80435F30:
{
    r24 = MemoryInline::FlatRead32((r13 + -18056));
}

loc_80435F34:
{
    MemoryInline::FlatWriteRam32((r30 + 4), r25);
}

loc_80435F3C:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(-1))) {
        goto loc_80435F5C;
    }
}

loc_80435F40:
{
}

loc_80435F44:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(4))) {
        goto loc_80435F68;
    }
}

loc_80435F48:
{
}

loc_80435F4C:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(6))) {
        goto loc_80435F70;
    }
}

loc_80435F50:
{
}

loc_80435F54:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(11))) {
        goto loc_80435F78;
    }
}

loc_80435F58:
{
    goto loc_80435F7C;
}

loc_80435F5C:
{
    MemoryInline::FlatWriteRam32((r30 + 4), r26);
    MemoryInline::FlatWriteRam8((r31 + 2161), static_cast<uint8_t>(r23));
    goto loc_80435F7C;
}

loc_80435F68:
{
    MemoryInline::FlatWriteRam32((r30 + 4), r27);
    goto loc_80435F7C;
}

loc_80435F70:
{
    MemoryInline::FlatWriteRam32((r30 + 4), r23);
    goto loc_80435F7C;
}

loc_80435F78:
{
    MemoryInline::FlatWriteRam32((r30 + 4), r28);
}

loc_80435F7C:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
}

loc_80435F84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_80435FCC;
    }
}

loc_80435F88:
{
    r3 = 0;
    ctx->lr = 0x80435F90u;
    if constexpr (KnownRegArgsCpuCall<0x800E874Cu>(&func_800E874C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E874C_2AE9 = func_800E874C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800E874C_2AE9);
        r4 = static_cast<uint32_t>(regargs_result_800E874C_2AE9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E874Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->lr = 0x80435F94u;
    if constexpr (KnownRegArgsCpuCall<0x800E8338u>(&func_800E8338)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E8338_2DE9 = func_800E8338_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_800E8338_2DE9);
        r4 = static_cast<uint32_t>(regargs_result_800E8338_2DE9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E8338u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->lr = 0x80435F98u;
    if constexpr (KnownRegArgsCpuCall<0x800E4B30u>(&func_800E4B30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E4B30_30E5 = func_800E4B30_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_800E4B30_30E5);
        r4 = static_cast<uint32_t>(regargs_result_800E4B30_30E5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E4B30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 1;
    ctx->lr = 0x80435FA0u;
    if constexpr (KnownRegArgsCpuCall<0x804E96A0u>(&func_804E96A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[11] = r11;
        const auto regargs_result_804E96A0_3426 = func_804E96A0_ra68_1e_8_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_804E96A0_3426;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x804E96A0u>(ctx);
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
    }
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    MemoryInline::FlatWriteRam8((r30 + 9), static_cast<uint8_t>(r0));
    ctx->lr = 0x80435FB4u;
    if constexpr (KnownRegArgsCpuCall<0x8045607Cu>(&func_8045607C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045607C_3947 = func_8045607C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8045607C_3947;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8045607Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    ctx->lr = 0x80435FB8u;
    if constexpr (KnownRegArgsCpuCall<0x80040890u>(&func_80040890)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_80040890_3B97 = func_80040890_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80040890_3B97);
        r4 = static_cast<uint32_t>(regargs_result_80040890_3B97 >> 32);
        r0 = ctx->gpr[0];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80040890u>(ctx);
        r0 = ctx->gpr[0];
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
    }
    ctx->lr = 0x80435FBCu;
    if constexpr (KnownRegArgsCpuCall<0x80435DBCu>(&func_80435DBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        const auto regargs_result_80435DBC_41A4 = func_80435DBC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80435DBC_41A4);
        r4 = static_cast<uint32_t>(regargs_result_80435DBC_41A4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
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
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        InvokeDirectCpu<0x80435DBCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
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
    ctx->lr = 0x80435FC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x8005C174u>(ctx);
    r0 = ctx->gpr[0];
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
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8003FFFCu>(ctx);
    ctx->lr = 0x80435FC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x800401A8u>(ctx);
    r0 = ctx->gpr[0];
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
    ctx->lr = 0x80435FCCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x8005B52Cu>(ctx);
    r0 = ctx->gpr[0];
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
}

loc_80435FCC:
{
}

loc_80435FD0:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(-1))) {
        goto loc_8043602C;
    }
}

loc_80435FD4:
{
    r0 = MemoryInline::FlatRead8((r13 + -18042));
}

loc_80435FDC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_80435FEC;
    }
}

loc_80435FE0:
{
    r0 = MemoryInline::FlatRead8((r13 + -18043));
}

loc_80435FE8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8043602C;
    }
}

loc_80435FEC:
{
    ctx->lr = 0x80435FF0u;
    if constexpr (KnownRegArgsCpuCall<0x804EDCA0u>(&func_804EDCA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804EDCA0_51E9 = func_804EDCA0_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804EDCA0_51E9);
        r4 = static_cast<uint32_t>(regargs_result_804EDCA0_51E9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804EDCA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80435FF4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_80435FFC;
    }
}

loc_80435FF8:
{
    ctx->lr = 0x80435FFCu;
    if constexpr (KnownRegArgsCpuCall<0x80044AB8u>(&func_80044AB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_80044AB8_5593 = func_80044AB8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80044AB8_5593;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80044AB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80435FFC:
{
    ctx->lr = 0x80436000u;
    if constexpr (KnownRegArgsCpuCall<0x800D849Cu>(&func_800D849C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D849C_5864 = func_800D849C_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_800D849C_5864);
        r4 = static_cast<uint32_t>(regargs_result_800D849C_5864 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800D849Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->lr = 0x80436004u;
    if constexpr (KnownRegArgsCpuCall<0x800F6398u>(&func_800F6398)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800F6398_5B60 = func_800F6398_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_800F6398_5B60);
        r4 = static_cast<uint32_t>(regargs_result_800F6398_5B60 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800F6398u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->lr = 0x80436008u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x804360B0u>(ctx);
    r0 = ctx->gpr[0];
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
    r0 = MemoryInline::FlatRead8((r13 + -18042));
}

loc_80436010:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80436018;
    }
}

loc_80436014:
{
    ctx->lr = 0x80436018u;
    if constexpr (KnownRegArgsCpuCall<0x804D2BA0u>(&func_804D2BA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        const auto regargs_result_804D2BA0_61B0 = func_804D2BA0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D2BA0_61B0);
        r4 = static_cast<uint32_t>(regargs_result_804D2BA0_61B0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
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
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        InvokeDirectCpu<0x804D2BA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
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

loc_80436018:
{
    r0 = MemoryInline::FlatRead8((r13 + -18043));
}

loc_80436020:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8043602C;
    }
}

loc_80436024:
{
    r3 = 0;
    ctx->lr = 0x8043602Cu;
    if constexpr (KnownRegArgsCpuCall<0x804D2CC0u>(&func_804D2CC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_804D2CC0_69C5 = func_804D2CC0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D2CC0_69C5);
        r4 = static_cast<uint32_t>(regargs_result_804D2CC0_69C5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x804D2CC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
    }
}

loc_8043602C:
{
}

loc_80436030:
{
    if ((static_cast<int32_t>(r24) != static_cast<int32_t>(0))) {
        goto loc_80435EFC;
    }
}

loc_80436034:
{
    r3 = 65536;
    r3 = (r3 + -32768);
    r3 = (r3 & 65535);
    ctx->lr = 0x80436044u;
    if constexpr (KnownRegArgsCpuCall<0x800E874Cu>(&func_800E874C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E874C_7064 = func_800E874C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800E874C_7064);
        r4 = static_cast<uint32_t>(regargs_result_800E874C_7064 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E874Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->lr = 0x80436048u;
    if constexpr (KnownRegArgsCpuCall<0x800E8378u>(&func_800E8378)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E8378_7364 = func_800E8378_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_800E8378_7364);
        r4 = static_cast<uint32_t>(regargs_result_800E8378_7364 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E8378u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->lr = 0x8043604Cu;
    if constexpr (KnownRegArgsCpuCall<0x800E4B70u>(&func_800E4B70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E4B70_7660 = func_800E4B70_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_800E4B70_7660);
        r4 = static_cast<uint32_t>(regargs_result_800E4B70_7660 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E4B70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead8((r30 + 11));
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2160), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r30 + 4));
}

loc_80436064:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_80436074;
    }
}

loc_80436068:
{
    r3 = MemoryInline::FlatRead8((r30 + 9));
    ctx->lr = 0x80436070u;
    if constexpr (KnownRegArgsCpuCall<0x804E96A0u>(&func_804E96A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[11] = r11;
        const auto regargs_result_804E96A0_7B2D = func_804E96A0_ra68_1e_8_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_804E96A0_7B2D;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x804E96A0u>(ctx);
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
    }
    ctx->lr = 0x80436074u;
    if constexpr (KnownRegArgsCpuCall<0x803A91F0u>(&func_803A91F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803A91F0_7F6E = func_803A91F0_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_803A91F0_7F6E);
        r4 = static_cast<uint32_t>(regargs_result_803A91F0_7F6E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803A91F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    }
}

loc_80436074:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[23] = r23_entry;
    ctx->gpr[24] = r24_entry;
    ctx->gpr[25] = r25_entry;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x007FFFFF gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80435EA8 func_80435EA8 preserves=true fpr_mask=0x00000000
