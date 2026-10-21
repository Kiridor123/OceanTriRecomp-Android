#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DC10C(CpuContext* ctx);
extern "C" uint64_t func_800DC10C_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_800DC3AC(CpuContext* ctx);
extern "C" uint64_t func_800DC3AC_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_800DC4B0(CpuContext* ctx);
extern "C" uint64_t func_800DC4B0_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800DC4C0(CpuContext* ctx);
extern "C" uint64_t func_800DC4C0_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800DC5C4(CpuContext* ctx);
extern "C" uint64_t func_800DC5C4_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);

extern "C" uint64_t func_8029AB14_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;

    MKW_GUEST_ENTER(0x8029AB14u);
    goto loc_8029AB14;

loc_8029AB14:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r4;
    r28 = r5;
    r31 = r6;
    r29 = r7;
    r30 = r8;
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r28 + 15));
}

loc_8029AB4C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8029AD04;
    }
}

loc_8029AB50:
{
    r0 = MemoryInline::FlatRead8((r28 + 77));
}

loc_8029AB58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(255))) {
        goto loc_8029AD04;
    }
}

loc_8029AB5C:
{
}

loc_8029AB60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8029AB88;
    }
}

loc_8029AB64:
{
}

loc_8029AB68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8029AC08;
    }
}

loc_8029AB6C:
{
}

loc_8029AB70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8029AC48;
    }
}

loc_8029AB74:
{
}

loc_8029AB78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8029AC88;
    }
}

loc_8029AB7C:
{
}

loc_8029AB80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8029ACC8;
    }
}

loc_8029AB84:
{
    goto loc_8029AB90;
}

loc_8029AB88:
{
    r3 = r31;
    ctx->lr = 0x8029AB90u;
    if constexpr (KnownRegArgsCpuCall<0x800DC4C0u>(&func_800DC4C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        const auto regargs_result_800DC4C0_DCC = func_800DC4C0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800DC4C0_DCC);
        r4 = static_cast<uint32_t>(regargs_result_800DC4C0_DCC >> 32);
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
        InvokeDirectCpu<0x800DC4C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
}

loc_8029AB90:
{
}

loc_8029AB94:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(1))) {
        goto loc_8029AD04;
    }
}

loc_8029AB98:
{
    r0 = MemoryInline::FlatRead16((r28 + 70));
    r0 = (r0 & 4);
}

loc_8029ABA4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8029ABC8;
    }
}

loc_8029ABA8:
{
    r3 = r28;
    // inline leaf 0x8029A7EC (6 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r3 = (r0 & 32768);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8029A7EC
}

loc_8029ABB4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8029ABD4;
    }
}

loc_8029ABB8:
{
    r0 = MemoryInline::FlatRead16((r28 + 72));
    r0 = (r0 & 16);
}

loc_8029ABC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029ABD4;
    }
}

loc_8029ABC8:
{
    r3 = r31;
    ctx->lr = 0x8029ABD0u;
    if constexpr (KnownRegArgsCpuCall<0x800DC4B0u>(&func_800DC4B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        const auto regargs_result_800DC4B0_1563 = func_800DC4B0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800DC4B0_1563);
        r4 = static_cast<uint32_t>(regargs_result_800DC4B0_1563 >> 32);
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
        InvokeDirectCpu<0x800DC4B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    goto loc_8029AD04;
}

loc_8029ABD4:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
}

loc_8029ABDC:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(60))) {
        goto loc_8029ABE8;
    }
}

loc_8029ABE0:
{
    r4 = 2;
    goto loc_8029ABFC;
}

loc_8029ABE8:
{
    r0 = (r4 ^ 30);
    r3 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 & r4);
    r0 = (r3 - r0);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
}

loc_8029ABFC:
{
    r3 = r31;
    ctx->lr = 0x8029AC04u;
    if constexpr (KnownRegArgsCpuCall<0x800DC3ACu>(&func_800DC3AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        const auto regargs_result_800DC3AC_1B0B = func_800DC3AC_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DC3AC_1B0B);
        r4 = static_cast<uint32_t>(regargs_result_800DC3AC_1B0B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800DC3ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
    }
    goto loc_8029AD04;
}

loc_8029AC08:
{
}

loc_8029AC0C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(1))) {
        goto loc_8029AD04;
    }
}

loc_8029AC10:
{
}

loc_8029AC14:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_8029AC38;
    }
}

loc_8029AC18:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r28 + 14), static_cast<uint8_t>(r0));
    r3 = 0;
    r4 = r27;
    r5 = r28;
    r6 = r31;
    ctx->lr = 0x8029AC34u;
    if constexpr (KnownRegArgsCpuCall<0x800DC10Cu>(&func_800DC10C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_800DC10C_20B4 = func_800DC10C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DC10C_20B4);
        r4 = static_cast<uint32_t>(regargs_result_800DC10C_20B4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800DC10Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
    }
    goto loc_8029AD04;
}

loc_8029AC38:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x8029AC44u;
    if constexpr (KnownRegArgsCpuCall<0x800DC5C4u>(&func_800DC5C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        const auto regargs_result_800DC5C4_24C9 = func_800DC5C4_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DC5C4_24C9);
        r4 = static_cast<uint32_t>(regargs_result_800DC5C4_24C9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800DC5C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
    }
    goto loc_8029AD04;
}

loc_8029AC48:
{
}

loc_8029AC4C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(1))) {
        goto loc_8029AD04;
    }
}

loc_8029AC50:
{
}

loc_8029AC54:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_8029AC78;
    }
}

loc_8029AC58:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r28 + 14), static_cast<uint8_t>(r0));
    r3 = 0;
    r4 = r27;
    r5 = r28;
    r6 = r31;
    ctx->lr = 0x8029AC74u;
    if constexpr (KnownRegArgsCpuCall<0x800DC10Cu>(&func_800DC10C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_800DC10C_2A72 = func_800DC10C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DC10C_2A72);
        r4 = static_cast<uint32_t>(regargs_result_800DC10C_2A72 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800DC10Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
    }
    goto loc_8029AD04;
}

loc_8029AC78:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x8029AC84u;
    if constexpr (KnownRegArgsCpuCall<0x800DC5C4u>(&func_800DC5C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        const auto regargs_result_800DC5C4_2E87 = func_800DC5C4_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DC5C4_2E87);
        r4 = static_cast<uint32_t>(regargs_result_800DC5C4_2E87 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800DC5C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
    }
    goto loc_8029AD04;
}

loc_8029AC88:
{
}

loc_8029AC8C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(1))) {
        goto loc_8029AD04;
    }
}

loc_8029AC90:
{
}

loc_8029AC94:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_8029ACB8;
    }
}

loc_8029AC98:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r28 + 14), static_cast<uint8_t>(r0));
    r3 = 0;
    r4 = r27;
    r5 = r28;
    r6 = r31;
    ctx->lr = 0x8029ACB4u;
    if constexpr (KnownRegArgsCpuCall<0x800DC10Cu>(&func_800DC10C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_800DC10C_3430 = func_800DC10C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DC10C_3430);
        r4 = static_cast<uint32_t>(regargs_result_800DC10C_3430 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800DC10Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
    }
    goto loc_8029AD04;
}

loc_8029ACB8:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x8029ACC4u;
    if constexpr (KnownRegArgsCpuCall<0x800DC5C4u>(&func_800DC5C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        const auto regargs_result_800DC5C4_3845 = func_800DC5C4_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DC5C4_3845);
        r4 = static_cast<uint32_t>(regargs_result_800DC5C4_3845 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800DC5C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
    }
    goto loc_8029AD04;
}

loc_8029ACC8:
{
}

loc_8029ACCC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(1))) {
        goto loc_8029AD04;
    }
}

loc_8029ACD0:
{
}

loc_8029ACD4:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_8029ACF8;
    }
}

loc_8029ACD8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 14), static_cast<uint8_t>(r0));
    r3 = 0;
    r4 = r27;
    r5 = r28;
    r6 = r31;
    ctx->lr = 0x8029ACF4u;
    if constexpr (KnownRegArgsCpuCall<0x800DC10Cu>(&func_800DC10C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_800DC10C_3DEE = func_800DC10C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DC10C_3DEE);
        r4 = static_cast<uint32_t>(regargs_result_800DC10C_3DEE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800DC10Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
    }
    goto loc_8029AD04;
}

loc_8029ACF8:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x8029AD04u;
    if constexpr (KnownRegArgsCpuCall<0x800DC5C4u>(&func_800DC5C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        const auto regargs_result_800DC5C4_4203 = func_800DC5C4_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DC5C4_4203);
        r4 = static_cast<uint32_t>(regargs_result_800DC5C4_4203 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800DC5C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
    }
}

loc_8029AD04:
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
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8029AB14(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8029AB14_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FF gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8029AB14 func_8029AB14 preserves=true fpr_mask=0x00000000
