#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80469184(CpuContext* ctx);
extern "C" uint32_t func_80469184_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804699BC(CpuContext* ctx);
extern "C" uint64_t func_804699BC_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8046D2B4(CpuContext* ctx);
extern "C" uint64_t func_8046D2B4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8046D33C(CpuContext* ctx);
extern "C" uint64_t func_8046D33C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8046BCD8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
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

    MKW_GUEST_ENTER(0x8046BCD8u);
    goto loc_8046BCD8;

loc_8046BCD8:
{
    MemoryInline::FlatWriteRam32((r1 + -352), r1);
    r1 = (r1 + -352);
    r0 = ctx->lr;
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 356), r0);
    r30 = r3;
    // inline leaf 0x8046AA80 (12 guest instruction(s))
}

loc_inl0_0x8046AA80:
{
}

loc_inl0_0x8046AA84:
{
    r5 = 0;
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(2176))) {
        goto loc_inl0_0x8046AA94;
    }
}

loc_inl0_0x8046AA8C:
{
    r5 = 769;
    goto loc_inl0_0x8046AAA8;
}

loc_inl0_0x8046AA94:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r3 + 8), r4);
}

loc_inl0_0x8046AAA0:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x8046AAA8;
    }
}

loc_inl0_0x8046AAA4:
{
    MemoryInline::FlatWrite32((r3 + 4), r4);
}

loc_inl0_0x8046AAA8:
{
    r3 = r5;
}

loc_inl0_cont_8046AA80:
{
    // end of inlined leaf 0x8046AA80
    r31 = MemoryInline::FlatRead8((r30 + 20));
    r29 = MemoryInline::FlatRead32((r30 + 28));
}

loc_8046BD0C:
{
    r28 = MemoryInline::FlatRead32((r30 + 32));
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8046BD30;
    }
}

loc_8046BD14:
{
}

loc_8046BD18:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(16))) {
        goto loc_8046BD30;
    }
}

loc_8046BD1C:
{
}

loc_8046BD20:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(1))) {
        goto loc_8046BD8C;
    }
}

loc_8046BD24:
{
}

loc_8046BD28:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(17))) {
        goto loc_8046BD8C;
    }
}

loc_8046BD2C:
{
    goto loc_8046BDF0;
}

loc_8046BD30:
{
    r30 = MemoryInline::FlatRead8((r30 + 24));
}

loc_8046BD38:
{
    if ((static_cast<uint32_t>(r30) >= static_cast<uint32_t>(1))) {
        goto loc_8046BE40;
    }
}

loc_8046BD3C:
{
    r3 = (r1 + 264);
    r4 = 0;
    r5 = 64;
    if constexpr (KnownRegArgsCpuCall<0x80469184u>(&func_80469184)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80469184_F05 = func_80469184_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80469184_F05;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80469184u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = MemoryInline::FlatRead32((r13 + -16304));
    r0 = 128;
    r4 = 64;
    r5 = 17;
    r6 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r1 + 268), static_cast<uint8_t>(r0));
    r0 = (r6 + 1);
    r3 = (r1 + 264);
    MemoryInline::FlatWriteRam32((r1 + 264), r4);
    r4 = 64;
    MemoryInline::FlatWriteRam8((r1 + 272), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam32((r1 + 276), r6);
    MemoryInline::FlatWrite32((r13 + -16304), r0);
    ctx->lr = 0x8046BD84u;
    if constexpr (KnownRegArgsCpuCall<0x804699BCu>(&func_804699BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804699BC_1393 = func_804699BC_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804699BC_1393);
        r4 = static_cast<uint32_t>(regargs_result_804699BC_1393 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804699BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = 0;
    goto loc_8046BF3C;
}

loc_8046BD8C:
{
    // inline leaf 0x8046D3B0 (4 guest instruction(s))
    r3 = 0x80700000u;
    r3 = (r3 + -27328);
    r3 = MemoryInline::FlatRead32((r3 + 128));
    // end of inlined leaf 0x8046D3B0
}

loc_8046BD94:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r29))) {
        goto loc_8046BDA0;
    }
}

loc_8046BD98:
{
}

loc_8046BD9C:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r28))) {
        goto loc_8046BE40;
    }
}

loc_8046BDA0:
{
    r3 = (r1 + 200);
    r4 = 0;
    r5 = 64;
    if constexpr (KnownRegArgsCpuCall<0x80469184u>(&func_80469184)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80469184_1BC4 = func_80469184_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80469184_1BC4;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80469184u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = MemoryInline::FlatRead32((r13 + -16304));
    r0 = 128;
    r4 = 64;
    r5 = 17;
    r6 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r1 + 204), static_cast<uint8_t>(r0));
    r0 = (r6 + 1);
    r3 = (r1 + 200);
    MemoryInline::FlatWriteRam32((r1 + 200), r4);
    r4 = 64;
    MemoryInline::FlatWriteRam8((r1 + 208), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam32((r1 + 212), r6);
    MemoryInline::FlatWrite32((r13 + -16304), r0);
    ctx->lr = 0x8046BDE8u;
    if constexpr (KnownRegArgsCpuCall<0x804699BCu>(&func_804699BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804699BC_2054 = func_804699BC_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804699BC_2054);
        r4 = static_cast<uint32_t>(regargs_result_804699BC_2054 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804699BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = 0;
    goto loc_8046BF3C;
}

loc_8046BDF0:
{
    r3 = (r1 + 136);
    r4 = 0;
    r5 = 64;
    if constexpr (KnownRegArgsCpuCall<0x80469184u>(&func_80469184)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80469184_26B4 = func_80469184_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80469184_26B4;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80469184u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = MemoryInline::FlatRead32((r13 + -16304));
    r0 = 128;
    r4 = 64;
    r5 = 18;
    r6 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r1 + 140), static_cast<uint8_t>(r0));
    r0 = (r6 + 1);
    r3 = (r1 + 136);
    MemoryInline::FlatWriteRam32((r1 + 136), r4);
    r4 = 64;
    MemoryInline::FlatWriteRam8((r1 + 144), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam32((r1 + 148), r6);
    MemoryInline::FlatWrite32((r13 + -16304), r0);
    ctx->lr = 0x8046BE38u;
    if constexpr (KnownRegArgsCpuCall<0x804699BCu>(&func_804699BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804699BC_2B44 = func_804699BC_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804699BC_2B44);
        r4 = static_cast<uint32_t>(regargs_result_804699BC_2B44 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804699BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = 0;
    goto loc_8046BF3C;
}

loc_8046BE40:
{
    // inline leaf 0x8046D5B4 (4 guest instruction(s))
    r3 = 0x80700000u;
    r3 = (r3 + -27496);
    r3 = MemoryInline::FlatRead32((r3 + 152));
    // end of inlined leaf 0x8046D5B4
}

loc_8046BE48:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8046BE9C;
    }
}

loc_8046BE4C:
{
    r3 = (r1 + 72);
    r4 = 0;
    r5 = 64;
    if constexpr (KnownRegArgsCpuCall<0x80469184u>(&func_80469184)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80469184_32E5 = func_80469184_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80469184_32E5;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80469184u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = MemoryInline::FlatRead32((r13 + -16304));
    r0 = 128;
    r4 = 64;
    r5 = 22;
    r6 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r1 + 76), static_cast<uint8_t>(r0));
    r0 = (r6 + 1);
    r3 = (r1 + 72);
    MemoryInline::FlatWriteRam32((r1 + 72), r4);
    r4 = 64;
    MemoryInline::FlatWriteRam8((r1 + 80), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam32((r1 + 84), r6);
    MemoryInline::FlatWrite32((r13 + -16304), r0);
    ctx->lr = 0x8046BE94u;
    if constexpr (KnownRegArgsCpuCall<0x804699BCu>(&func_804699BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804699BC_3770 = func_804699BC_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804699BC_3770);
        r4 = static_cast<uint32_t>(regargs_result_804699BC_3770 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804699BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = 0;
    goto loc_8046BF3C;
}

loc_8046BE9C:
{
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 64;
    if constexpr (KnownRegArgsCpuCall<0x80469184u>(&func_80469184)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80469184_3DCE = func_80469184_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80469184_3DCE;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80469184u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = MemoryInline::FlatRead32((r13 + -16304));
    r0 = 128;
    r4 = 64;
    r5 = 0;
    r6 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    r0 = (r6 + 1);
    r3 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r4 = 64;
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam32((r1 + 20), r6);
    MemoryInline::FlatWrite32((r13 + -16304), r0);
    ctx->lr = 0x8046BEE4u;
    if constexpr (KnownRegArgsCpuCall<0x804699BCu>(&func_804699BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804699BC_4256 = func_804699BC_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804699BC_4256);
        r4 = static_cast<uint32_t>(regargs_result_804699BC_4256 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804699BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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

loc_8046BEE8:
{
    r3 = 0;
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8046BF0C;
    }
}

loc_8046BEF0:
{
}

loc_8046BEF4:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(16))) {
        goto loc_8046BF0C;
    }
}

loc_8046BEF8:
{
}

loc_8046BEFC:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(1))) {
        goto loc_8046BF24;
    }
}

loc_8046BF00:
{
}

loc_8046BF04:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(17))) {
        goto loc_8046BF24;
    }
}

loc_8046BF08:
{
    goto loc_8046BF3C;
}

loc_8046BF0C:
{
    r0 = (r31 + -16);
    r3 = r30;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r4 = (r4_rot_1 & 134217727);
    ctx->lr = 0x8046BF20u;
    if constexpr (KnownRegArgsCpuCall<0x8046D2B4u>(&func_8046D2B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8046D2B4_4B9A = func_8046D2B4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8046D2B4_4B9A);
        r4 = static_cast<uint32_t>(regargs_result_8046D2B4_4B9A >> 32);
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
        InvokeDirectCpu<0x8046D2B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    goto loc_8046BF3C;
}

loc_8046BF24:
{
    r0 = (r31 + -17);
    r3 = r29;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r4 = r28;
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r5 = (r5_rot_1 & 134217727);
    ctx->lr = 0x8046BF3Cu;
    if constexpr (KnownRegArgsCpuCall<0x8046D33Cu>(&func_8046D33C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8046D33C_5018 = func_8046D33C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8046D33C_5018);
        r4 = static_cast<uint32_t>(regargs_result_8046D33C_5018 >> 32);
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
        InvokeDirectCpu<0x8046D33Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8046BF3C:
{
    r0 = MemoryInline::FlatRead32((r1 + 356));
    ctx->lr = r0;
    r1 = (r1 + 352);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

extern "C" void func_8046BCD8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8046BCD8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8046BCD8 func_8046BCD8 preserves=true fpr_mask=0x00000000
