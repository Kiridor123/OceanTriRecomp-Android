#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80052524(CpuContext* ctx);
extern "C" uint64_t func_80052524_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_80131998(CpuContext* ctx);
extern "C" uint64_t func_80131998_ra38_1e2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double);
extern "C" void func_80224B28(CpuContext* ctx);
extern "C" uint64_t func_80224B28_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8025DE9C(CpuContext* ctx);
extern "C" uint64_t func_8025DE9C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8025E12C(CpuContext* ctx);
extern "C" uint64_t func_8025E12C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8025E2FC(CpuContext* ctx);
extern "C" uint64_t func_8025E2FC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8025E4AC(CpuContext* ctx);
extern "C" uint64_t func_8025E4AC_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_8025ECBC(CpuContext* ctx);
extern "C" uint64_t func_8025ECBC_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_8025ED64(CpuContext* ctx);
extern "C" uint64_t func_8025ED64_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_8025FA64(CpuContext* ctx);
extern "C" uint64_t func_8025FA64_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8025FF70(CpuContext* ctx);
extern "C" uint64_t func_8025FF70_ra38_1f0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double);
extern "C" void func_80260828(CpuContext* ctx);
extern "C" uint64_t func_80260828_ra38_1e2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double);
extern "C" void func_80264334(CpuContext* ctx);
extern "C" uint64_t func_80264334_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8026585C(CpuContext* ctx);
extern "C" uint64_t func_8026585C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8026FD70(CpuContext* ctx);
extern "C" uint64_t func_8026FD70_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8026FDF8(CpuContext* ctx);
extern "C" uint32_t func_8026FDF8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8027078C(CpuContext* ctx);
extern "C" uint64_t func_8027078C_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80277F24(CpuContext* ctx);
extern "C" uint64_t func_80277F24_ra38_1fc_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_80278D80(CpuContext* ctx);
extern "C" uint64_t func_80278D80_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80279C84(CpuContext* ctx);
extern "C" uint64_t func_80279C84_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80287348(CpuContext* ctx);
extern "C" uint64_t func_80287348_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8029F040(CpuContext* ctx);
extern "C" uint64_t func_8029F040_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8025F0EC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
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
    uint32_t xer = ctx->xer;

    goto loc_8025F0EC;

loc_8025F0EC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 316));
    r31 = (r3 + 4);
    r3 = 0;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl0_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl0_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CFB10;
    }
}

loc_inl0_0x800CFB08:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl0_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl0_0x800CFB24;
    }
}

loc_inl0_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl0_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r3 = (r30 + 72);
    r4 = (r30 + 60);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r4 = MemoryInline::FlatRead8((r30 + 1629));
    MemoryInline::FlatWrite8((r30 + 1628), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead8((r30 + 23));
    r0 = MemoryInline::FlatRead8((r30 + 22));
}

loc_8025F138:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8025F144;
    }
}

loc_8025F13C:
{
    r0 = (r4 | 1);
    MemoryInline::FlatWrite8((r30 + 1628), static_cast<uint8_t>(r0));
}

loc_8025F144:
{
    r29 = 0;
    MemoryInline::FlatWrite8((r30 + 1629), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r30 + 27), static_cast<uint8_t>(r29));
    r0 = MemoryInline::FlatRead8((r30 + 22));
    MemoryInline::FlatWrite8((r30 + 23), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 117));
    MemoryInline::FlatWrite8((r30 + 118), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 630), static_cast<uint8_t>(r29));
    r0 = MemoryInline::FlatRead32((r30 + 988));
    r0 = (r0 & -1048577);
    MemoryInline::FlatWrite32((r30 + 988), r0);
    r3 = r30;
    ctx->lr = 0x8025F178u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    InvokeDirectCpu<0x80260B9Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    xer = ctx->xer;
    MemoryInline::FlatWrite8((r30 + 777), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r30 + 1623), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r30 + 778), static_cast<uint8_t>(r29));
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8025F190:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025F1B4;
    }
}

loc_8025F194:
{
    r3 = r30;
    // inline leaf 0x8027E248 (15 guest instruction(s))
}

loc_inl1_0x8027E248:
{
    r0 = MemoryInline::FlatRead16((r3 + 850));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_inl1_0x8027E250:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_inl1_0x8027E274;
    }
}

loc_inl1_0x8027E254:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0 = MemoryInline::FlatRead8((r4 + 42));
}

loc_inl1_0x8027E264:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x8027E274;
    }
}

loc_inl1_0x8027E268:
{
    r0 = MemoryInline::FlatRead8((r3 + 1135));
}

loc_inl1_0x8027E270:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x8027E27C;
    }
}

loc_inl1_0x8027E274:
{
    r3 = 1;
    goto loc_inl1_cont_8027E248;
}

loc_inl1_0x8027E27C:
{
    r3 = 0;
}

loc_inl1_cont_8027E248:
{
    // end of inlined leaf 0x8027E248
}

loc_8025F1A0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8025F1B4;
    }
}

loc_8025F1A4:
{
    r3 = r30;
    ctx->lr = 0x8025F1ACu;
    if constexpr (KnownRegArgsCpuCall<0x8025E12Cu>(&func_8025E12C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8025E12C_27C4 = func_8025E12C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8025E12C_27C4);
        r4 = static_cast<uint32_t>(regargs_result_8025E12C_27C4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        InvokeDirectCpu<0x8025E12Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    }
    r3 = r30;
    ctx->lr = 0x8025F1B4u;
    if constexpr (KnownRegArgsCpuCall<0x80279C84u>(&func_80279C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80279C84_2F17 = func_80279C84_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80279C84_2F17);
        r4 = static_cast<uint32_t>(regargs_result_80279C84_2F17 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        InvokeDirectCpu<0x80279C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    }
}

loc_8025F1B4:
{
    r0 = MemoryInline::FlatRead8((r30 + 1132));
    MemoryInline::FlatWrite8((r30 + 1133), static_cast<uint8_t>(r0));
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8025F1C8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025F230;
    }
}

loc_8025F1CC:
{
    r3 = MemoryInline::FlatRead8((r30 + 8));
    ctx->lr = 0x8025F1D4u;
    if constexpr (KnownRegArgsCpuCall<0x80131998u>(&func_80131998)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        const auto regargs_result_80131998_387A = func_80131998_ra38_1e2_18_0(ctx, r3, r4, r5, f1.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80131998_387A);
        r4 = static_cast<uint32_t>(regargs_result_80131998_387A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        InvokeDirectCpu<0x80131998u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    }
}

loc_8025F1D8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025F1E8;
    }
}

loc_8025F1DC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 1132), static_cast<uint8_t>(r0));
    goto loc_8025F1F4;
}

loc_8025F1E8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 1132), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 1134), static_cast<uint8_t>(r0));
}

loc_8025F1F4:
{
    r3 = r30;
    r4 = 2;
    r5 = 1;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl2_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl2_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl2_0x8026FEF4;
    }
}

loc_inl2_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl2_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl2_0x8026FEF4;
    }
}

loc_inl2_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl2_cont_8026FECC;
}

loc_inl2_0x8026FEF4:
{
    r3 = 0;
}

loc_inl2_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_8025F208:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8025F244;
    }
}

loc_8025F20C:
{
    r3 = r30;
    r4 = 0;
    r5 = 6;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl3_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl3_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl3_0x8026FEF4;
    }
}

loc_inl3_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl3_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl3_0x8026FEF4;
    }
}

loc_inl3_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl3_cont_8026FECC;
}

loc_inl3_0x8026FEF4:
{
    r3 = 0;
}

loc_inl3_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_8025F220:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8025F244;
    }
}

loc_8025F224:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 1479), static_cast<uint8_t>(r0));
    goto loc_8025F244;
}

loc_8025F230:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 1132), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 1133), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 1134), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 1479), static_cast<uint8_t>(r0));
}

loc_8025F244:
{
    r3 = r30;
    ctx->lr = 0x8025F24Cu;
    if constexpr (KnownRegArgsCpuCall<0x8025ECBCu>(&func_8025ECBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        const auto regargs_result_8025ECBC_4A8F = func_8025ECBC_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8025ECBC_4A8F);
        r4 = static_cast<uint32_t>(regargs_result_8025ECBC_4A8F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8025ECBCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = r30;
    // inline leaf 0x8026FEA8 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    r4 = (r3 + -4);
    r3 = 2;
    r0 = (2 - r4);
    r3 = (r3 | ~r4);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_3 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8026FEA8
}

loc_8025F258:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025F264;
    }
}

loc_8025F25C:
{
    r3 = r30;
    ctx->lr = 0x8025F264u;
    if constexpr (KnownRegArgsCpuCall<0x80287348u>(&func_80287348)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80287348_52C3 = func_80287348_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80287348_52C3);
        r4 = static_cast<uint32_t>(regargs_result_80287348_52C3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80287348u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8025F264:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 948), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 949), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 1481), static_cast<uint8_t>(r0));
    r3 = r30;
    ctx->lr = 0x8025F27Cu;
    if constexpr (KnownRegArgsCpuCall<0x8026585Cu>(&func_8026585C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026585C_572A = func_8026585C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8026585C_572A);
        r4 = static_cast<uint32_t>(regargs_result_8026585C_572A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        InvokeDirectCpu<0x8026585Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    }
}

loc_8025F280:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8025F28C;
    }
}

loc_8025F284:
{
    r3 = r30;
    ctx->lr = 0x8025F28Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    InvokeDirectCpu<0x802629A4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    xer = ctx->xer;
}

loc_8025F28C:
{
    r3 = r30;
    ctx->lr = 0x8025F294u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    InvokeDirectCpu<0x802703C0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    xer = ctx->xer;
    r3 = r30;
    ctx->lr = 0x8025F29Cu;
    if constexpr (KnownRegArgsCpuCall<0x8027078Cu>(&func_8027078C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_8027078C_6594 = func_8027078C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8027078C_6594);
        r4 = static_cast<uint32_t>(regargs_result_8027078C_6594 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027078Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = r30;
    ctx->lr = 0x8025F2A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    InvokeDirectCpu<0x80270D08u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    xer = ctx->xer;
    r3 = r30;
    ctx->lr = 0x8025F2ACu;
    if constexpr (KnownRegArgsCpuCall<0x80264334u>(&func_80264334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80264334_6DFE = func_80264334_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80264334_6DFE);
        r4 = static_cast<uint32_t>(regargs_result_80264334_6DFE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        InvokeDirectCpu<0x80264334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead32((r30 + 940));
    MemoryInline::FlatWrite32((r30 + 944), r0);
    r29 = 0;
    MemoryInline::FlatWrite32((r30 + 940), r29);
    MemoryInline::FlatWrite8((r30 + 14), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r30 + 1620), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r30 + 616), static_cast<uint8_t>(r29));
    r3 = r30;
    ctx->lr = 0x8025F2D0u;
    if constexpr (KnownRegArgsCpuCall<0x8025DE9Cu>(&func_8025DE9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8025DE9C_76C8 = func_8025DE9C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8025DE9C_76C8);
        r4 = static_cast<uint32_t>(regargs_result_8025DE9C_76C8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        InvokeDirectCpu<0x8025DE9Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead8((r30 + 14));
}

loc_8025F2D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8025F2E8;
    }
}

loc_8025F2DC:
{
    MemoryInline::FlatWrite8((r30 + 14), static_cast<uint8_t>(r29));
    r3 = r30;
    ctx->lr = 0x8025F2E8u;
    if constexpr (KnownRegArgsCpuCall<0x8025DE9Cu>(&func_8025DE9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8025DE9C_7F59 = func_8025DE9C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8025DE9C_7F59);
        r4 = static_cast<uint32_t>(regargs_result_8025DE9C_7F59 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        InvokeDirectCpu<0x8025DE9Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    }
}

loc_8025F2E8:
{
    r3 = r30;
    ctx->lr = 0x8025F2F0u;
    if constexpr (KnownRegArgsCpuCall<0x8025E4ACu>(&func_8025E4AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8025E4AC_86F9 = func_8025E4AC_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8025E4AC_86F9);
        r4 = static_cast<uint32_t>(regargs_result_8025E4AC_86F9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8025E4ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead8((r30 + 778));
}

loc_8025F2F8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_8025F308;
    }
}

loc_8025F2FC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 778), static_cast<uint8_t>(r0));
    goto loc_8025F37C;
}

loc_8025F308:
{
    r3 = r30;
    // inline leaf 0x8027AC7C (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 1467));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8027AC7C
}

loc_8025F314:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8025F37C;
    }
}

loc_8025F318:
{
    r3 = r30;
    r4 = 128;
    r5 = 255;
    if constexpr (KnownRegArgsCpuCall<0x8025E2FCu>(&func_8025E2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8025E2FC_8FE9 = func_8025E2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8025E2FC_8FE9);
        r4 = static_cast<uint32_t>(regargs_result_8025E2FC_8FE9 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8025E2FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8025F32C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8025F360;
    }
}

loc_8025F330:
{
    r3 = r30;
    r4 = 137;
    r5 = 248;
    if constexpr (KnownRegArgsCpuCall<0x8025E2FCu>(&func_8025E2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8025E2FC_9445 = func_8025E2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8025E2FC_9445);
        r4 = static_cast<uint32_t>(regargs_result_8025E2FC_9445 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8025E2FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8025F344:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8025F360;
    }
}

loc_8025F348:
{
    r3 = r30;
    r4 = 137;
    r5 = 247;
    if constexpr (KnownRegArgsCpuCall<0x8025E2FCu>(&func_8025E2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8025E2FC_98A1 = func_8025E2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8025E2FC_98A1);
        r4 = static_cast<uint32_t>(regargs_result_8025E2FC_98A1 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8025E2FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8025F35C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025F37C;
    }
}

loc_8025F360:
{
    r0 = MemoryInline::FlatRead8((r30 + 10));
}

loc_8025F368:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(7))) {
        goto loc_8025F37C;
    }
}

loc_8025F36C:
{
}

loc_8025F370:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_8025F37C;
    }
}

loc_8025F374:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 778), static_cast<uint8_t>(r0));
}

loc_8025F37C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 1480), static_cast<uint8_t>(r0));
    r3 = r30;
    ctx->lr = 0x8025F38Cu;
    if constexpr (KnownRegArgsCpuCall<0x80278D80u>(&func_80278D80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80278D80_9EF8 = func_80278D80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80278D80_9EF8);
        r4 = static_cast<uint32_t>(regargs_result_80278D80_9EF8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80278D80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = r30;
    ctx->lr = 0x8025F394u;
    if constexpr (KnownRegArgsCpuCall<0x80277F24u>(&func_80277F24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80277F24_A283 = func_80277F24_ra38_1fc_18_0(ctx, r3, r4, r5, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80277F24_A283);
        r4 = static_cast<uint32_t>(regargs_result_80277F24_A283 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        InvokeDirectCpu<0x80277F24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    }
    r3 = r30;
    ctx->lr = 0x8025F39Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    InvokeDirectCpu<0x80260304u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    xer = ctx->xer;
    r3 = r30;
    // inline leaf 0x8027AF98 (19 guest instruction(s))
}

loc_inl6_0x8027AF98:
{
    r4 = MemoryInline::FlatRead16((r3 + 180));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2150084504);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl6_0x8027AFA0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x8027AFA4:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 180), static_cast<uint16_t>(r0));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x8027AFB0:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 60));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 156));
    f0.d = MH3_PerStep(f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 60), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 160));
    f0.d = MH3_PerStep(f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 64), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 68));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 164));
    f0.d = MH3_PerStep(f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 68), f0.d);
    goto loc_inl6_cont_8027AF98;
}

loc_inl6_return:
{
}

loc_inl6_cont_8027AF98:
{
    // end of inlined leaf 0x8027AF98
    r3 = r30;
    ctx->lr = 0x8025F3ACu;
    if constexpr (KnownRegArgsCpuCall<0x80260828u>(&func_80260828)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        const auto regargs_result_80260828_B390 = func_80260828_ra38_1e2_18_0(ctx, r3, r4, r5, f1.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80260828_B390);
        r4 = static_cast<uint32_t>(regargs_result_80260828_B390 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        InvokeDirectCpu<0x80260828u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    }
    r3 = r30;
    ctx->lr = 0x8025F3B4u;
    if constexpr (KnownRegArgsCpuCall<0x8026FD70u>(&func_8026FD70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_8026FD70_BA9F = func_8026FD70_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8026FD70_BA9F);
        r4 = static_cast<uint32_t>(regargs_result_8026FD70_BA9F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x8026FD70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
    }
    r3 = r30;
    ctx->lr = 0x8025F3BCu;
    if constexpr (KnownRegArgsCpuCall<0x8025ED64u>(&func_8025ED64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8025ED64_BE16 = func_8025ED64_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8025ED64_BE16);
        r4 = static_cast<uint32_t>(regargs_result_8025ED64_BE16 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8025ED64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = MemoryInline::FlatRead32((r30 + 316));
    ctx->lr = 0x8025F3C4u;
    if constexpr (KnownRegArgsCpuCall<0x80224B28u>(&func_80224B28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80224B28_C3D6 = func_80224B28_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80224B28_C3D6);
        r4 = static_cast<uint32_t>(regargs_result_80224B28_C3D6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        InvokeDirectCpu<0x80224B28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    }
    r3 = (r30 + 60);
    r4 = (r31 + 4);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead8((r30 + 9));
}

loc_8025F3D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8025F43C;
    }
}

loc_8025F3DC:
{
}

loc_8025F3E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8025F40C;
    }
}

loc_8025F3E4:
{
    r0 = MemoryInline::FlatRead8((r30 + 27));
}

loc_8025F3EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8025F43C;
    }
}

loc_8025F3F0:
{
    r3 = (r30 + 72);
    r4 = (r30 + 60);
    r5 = (r30 + 1452);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15072));
    r6 = r4;
    ctx->lr = 0x8025F408u;
    if constexpr (KnownRegArgsCpuCall<0x80052524u>(&func_80052524)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->cr = cr;
        const auto regargs_result_80052524_CEC0 = func_80052524_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80052524_CEC0);
        r4 = static_cast<uint32_t>(regargs_result_80052524_CEC0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80052524u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        cr = ctx->cr;
    }
    goto loc_8025F43C;
}

loc_8025F40C:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 76));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15068));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 96));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8025F420:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8025F43C;
    }
}

loc_8025F424:
{
    r3 = (r30 + 72);
    r4 = (r30 + 60);
    r5 = (r30 + 1452);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15064));
    r6 = r4;
    ctx->lr = 0x8025F43Cu;
    if constexpr (KnownRegArgsCpuCall<0x80052524u>(&func_80052524)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->cr = cr;
        const auto regargs_result_80052524_D78F = func_80052524_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80052524_D78F);
        r4 = static_cast<uint32_t>(regargs_result_80052524_D78F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80052524u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        cr = ctx->cr;
    }
}

loc_8025F43C:
{
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x8025F448u;
    if constexpr (KnownRegArgsCpuCall<0x8025FF70u>(&func_8025FF70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_8025FF70_DE27 = func_8025FF70_ra38_1f0_18_0(ctx, r3, r4, r5, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8025FF70_DE27);
        r4 = static_cast<uint32_t>(regargs_result_8025FF70_DE27 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        InvokeDirectCpu<0x8025FF70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    }
    r3 = r30;
    ctx->lr = 0x8025F450u;
    if constexpr (KnownRegArgsCpuCall<0x8025FA64u>(&func_8025FA64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8025FA64_E568 = func_8025FA64_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8025FA64_E568);
        r4 = static_cast<uint32_t>(regargs_result_8025FA64_E568 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        InvokeDirectCpu<0x8025FA64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 0;
    r5 = 20;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl7_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl7_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl7_0x8026FEF4;
    }
}

loc_inl7_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl7_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl7_0x8026FEF4;
    }
}

loc_inl7_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl7_cont_8026FECC;
}

loc_inl7_0x8026FEF4:
{
    r3 = 0;
}

loc_inl7_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_8025F464:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8025F480;
    }
}

loc_8025F468:
{
    r3 = r30;
    r4 = 0;
    r5 = 158;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl8_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl8_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl8_0x8026FEF4;
    }
}

loc_inl8_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl8_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl8_0x8026FEF4;
    }
}

loc_inl8_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl8_cont_8026FECC;
}

loc_inl8_0x8026FEF4:
{
    r3 = 0;
}

loc_inl8_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_8025F47C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025F488;
    }
}

loc_8025F480:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 616), static_cast<uint8_t>(r0));
}

loc_8025F488:
{
    r3 = r30;
    ctx->lr = 0x8025F490u;
    if constexpr (KnownRegArgsCpuCall<0x8026FD70u>(&func_8026FD70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_8026FD70_F426 = func_8026FD70_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8026FD70_F426);
        r4 = static_cast<uint32_t>(regargs_result_8026FD70_F426 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x8026FD70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
    }
    r3 = r31;
    ctx->lr = 0x8025F498u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    InvokeDirectCpu<0x800E0978u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    xer = ctx->xer;
    r3 = r30;
    ctx->lr = 0x8025F4A0u;
    if constexpr (KnownRegArgsCpuCall<0x8026FDF8u>(&func_8026FDF8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8026FDF8_FA79 = func_8026FDF8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8026FDF8_FA79;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8026FDF8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_8025F4A4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8025F4B0;
    }
}

loc_8025F4A8:
{
    r3 = r30;
    // inline leaf 0x8027D554 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 948), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8027D554
}

loc_8025F4B0:
{
    r3 = (r30 + 1156);
    if constexpr (KnownRegArgsCpuCall<0x8029F040u>(&func_8029F040)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8029F040_FE29 = func_8029F040_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8029F040_FE29);
        r4 = static_cast<uint32_t>(regargs_result_8029F040_FE29 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8029F040u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = (r30 + 1248);
    if constexpr (KnownRegArgsCpuCall<0x8029F040u>(&func_8029F040)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8029F040_1011A = func_8029F040_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8029F040_1011A);
        r4 = static_cast<uint32_t>(regargs_result_8029F040_1011A >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8029F040u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

extern "C" void func_8025F0EC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8025F0EC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x003FFFFF gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8025F0EC func_8025F0EC preserves=true fpr_mask=0x00000000
