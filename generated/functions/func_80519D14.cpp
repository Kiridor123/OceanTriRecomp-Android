#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8051574C(CpuContext* ctx);
extern "C" uint64_t func_8051574C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80515A3C(CpuContext* ctx);
extern "C" uint64_t func_80515A3C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80515C2C(CpuContext* ctx);
extern "C" uint64_t func_80515C2C_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_805168F0(CpuContext* ctx);
extern "C" uint64_t func_805168F0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80517338(CpuContext* ctx);
extern "C" uint64_t func_80517338_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_805176AC(CpuContext* ctx);
extern "C" uint64_t func_805176AC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8051BD68(CpuContext* ctx);
extern "C" uint64_t func_8051BD68_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80519D14_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80519D14;

loc_80519D14:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r28 = 0x80630000u;
    r30 = r3;
    r28 = (r28 + 5184);
    ctx->lr = 0x80519D38u;
    if constexpr (KnownRegArgsCpuCall<0x8051BD68u>(&func_8051BD68)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8051BD68_A85 = func_8051BD68_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8051BD68_A85);
        r4 = static_cast<uint32_t>(regargs_result_8051BD68_A85 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8051BD68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r29 = r3;
    // inline leaf 0x8051BDDC (2 guest instruction(s))
    r3 = (r3 + 2056);
    // end of inlined leaf 0x8051BDDC
    r4 = MemoryInline::FlatRead32(r3);
    r3 = r29;
    r29 = MemoryInline::FlatRead32((r4 + 12));
    r31 = MemoryInline::FlatRead32((r29 + 44));
    // inline leaf 0x8051BDE4 (2 guest instruction(s))
    r3 = (r3 + 2112);
    // end of inlined leaf 0x8051BDE4
    r27 = (r3 + 864);
    r3 = r31;
    r4 = (r30 + 772);
    r5 = 0;
    r6 = 14;
    ctx->lr = 0x80519D6Cu;
    if constexpr (KnownRegArgsCpuCall<0x80515C2Cu>(&func_80515C2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80515C2C_FEB = func_80515C2C_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80515C2C_FEB);
        r4 = static_cast<uint32_t>(regargs_result_80515C2C_FEB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80515C2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80519D70:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80519D84;
    }
}

loc_80519D74:
{
    r0 = 7;
    r3 = 0;
    MemoryInline::FlatWrite32((r30 + 816), r0);
    goto loc_8051A02C;
}

loc_80519D84:
{
    r3 = (r30 + 772);
    r4 = (r13 + -19032);
    r5 = 5;
    if constexpr (KnownRegArgsCpuCall<0x80517338u>(&func_80517338)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80517338_1772 = func_80517338_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80517338_1772);
        r4 = static_cast<uint32_t>(regargs_result_80517338_1772 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x80517338u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80519D98:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80519DAC;
    }
}

loc_80519D9C:
{
    r0 = 7;
    r3 = 0;
    MemoryInline::FlatWrite32((r30 + 816), r0);
    goto loc_8051A02C;
}

loc_80519DAC:
{
    r0 = MemoryInline::FlatRead8((r30 + 780));
}

loc_80519DB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(32))) {
        goto loc_80519DC8;
    }
}

loc_80519DB8:
{
    r0 = 7;
    r3 = 0;
    MemoryInline::FlatWrite32((r30 + 816), r0);
    goto loc_8051A02C;
}

loc_80519DC8:
{
    r3 = (r30 + 781);
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x805176ACu>(&func_805176AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_805176AC_1EA6 = func_805176AC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_805176AC_1EA6);
        r4 = static_cast<uint32_t>(regargs_result_805176AC_1EA6 >> 32);
        r0 = ctx->gpr[0];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x805176ACu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_80519DD8:
{
    MemoryInline::FlatWrite32((r31 + 24), r3);
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_80519DF0;
    }
}

loc_80519DE0:
{
    r0 = 7;
    r3 = 0;
    MemoryInline::FlatWrite32((r30 + 816), r0);
    goto loc_8051A02C;
}

loc_80519DF0:
{
    r5 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r6 = (r1 + 12);
    r4 = 12;
    r7 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8051574Cu>(&func_8051574C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8051574C_246E = func_8051574C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8051574C_246E);
        r4 = static_cast<uint32_t>(regargs_result_8051574C_246E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x8051574Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80519E0C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_80519E20;
    }
}

loc_80519E10:
{
    r0 = 7;
    r3 = 0;
    MemoryInline::FlatWrite32((r30 + 816), r0);
    goto loc_8051A02C;
}

loc_80519E20:
{
    r3 = r31;
    r4 = (r28 + 136);
    r5 = (r1 + 8);
    ctx->lr = 0x80519E30u;
    if constexpr (KnownRegArgsCpuCall<0x805168F0u>(&func_805168F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_805168F0_2A47 = func_805168F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_805168F0_2A47);
        r4 = static_cast<uint32_t>(regargs_result_805168F0_2A47 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x805168F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80519E34:
{
    MemoryInline::FlatWrite32((r30 + 812), r3);
    r6 = r3;
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80519E50;
    }
}

loc_80519E40:
{
    r0 = 0;
    r3 = 0;
    MemoryInline::FlatWrite32((r30 + 816), r0);
    goto loc_8051A02C;
}

loc_80519E50:
{
}

loc_80519E54:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(256))) {
        goto loc_80519E68;
    }
}

loc_80519E58:
{
    r0 = 7;
    r3 = 0;
    MemoryInline::FlatWrite32((r30 + 816), r0);
    goto loc_8051A02C;
}

loc_80519E68:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_80519EC4;
    }
}

loc_80519E6C:
{
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r3 = r31;
    r4 = r27;
    ctx->lr = 0x80519E7Cu;
    if constexpr (KnownRegArgsCpuCall<0x80515C2Cu>(&func_80515C2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80515C2C_3283 = func_80515C2C_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80515C2C_3283);
        r4 = static_cast<uint32_t>(regargs_result_80515C2C_3283 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80515C2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80519E80:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80519E94;
    }
}

loc_80519E84:
{
    r0 = 7;
    r3 = 0;
    MemoryInline::FlatWrite32((r30 + 816), r0);
    goto loc_8051A02C;
}

loc_80519E94:
{
    r4 = MemoryInline::FlatRead32((r30 + 812));
    r3 = r27;
    if constexpr (KnownRegArgsCpuCall<0x805176ACu>(&func_805176AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_805176AC_39F2 = func_805176AC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_805176AC_39F2);
        r4 = static_cast<uint32_t>(regargs_result_805176AC_39F2 >> 32);
        r0 = ctx->gpr[0];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x805176ACu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_80519EA4:
{
    MemoryInline::FlatWrite32((r30 + 812), r3);
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_80519EBC;
    }
}

loc_80519EAC:
{
    r0 = 7;
    r3 = 0;
    MemoryInline::FlatWrite32((r30 + 816), r0);
    goto loc_8051A02C;
}

loc_80519EBC:
{
    MemoryInline::FlatWrite32((r31 + 12), r3);
    goto loc_80519ECC;
}

loc_80519EC4:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r31 + 12), r0);
}

loc_80519ECC:
{
    r0 = MemoryInline::FlatRead32((r29 + 8));
}

loc_80519ED4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80519EE4;
    }
}

loc_80519ED8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 824), r0);
    goto loc_80519FA4;
}

loc_80519EE4:
{
    r3 = r31;
    r4 = (r28 + 152);
    r5 = (r1 + 8);
    ctx->lr = 0x80519EF4u;
    if constexpr (KnownRegArgsCpuCall<0x805168F0u>(&func_805168F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_805168F0_418C = func_805168F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_805168F0_418C);
        r4 = static_cast<uint32_t>(regargs_result_805168F0_418C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x805168F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80519EF8:
{
    r29 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80519F18;
    }
}

loc_80519F00:
{
    r3 = 7;
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 816), r3);
    r3 = 0;
    MemoryInline::FlatWrite32((r30 + 824), r0);
    goto loc_8051A02C;
}

loc_80519F18:
{
    r3 = (r30 + 772);
    r4 = (r28 + 164);
    r5 = 8;
    if constexpr (KnownRegArgsCpuCall<0x80517338u>(&func_80517338)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80517338_4803 = func_80517338_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80517338_4803);
        r4 = static_cast<uint32_t>(regargs_result_80517338_4803 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x80517338u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80519F2C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80519F3C;
    }
}

loc_80519F30:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 824), r0);
    goto loc_80519F44;
}

loc_80519F3C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 824), r0);
}

loc_80519F44:
{
}

loc_80519F48:
{
    if ((static_cast<int32_t>(r29) > static_cast<int32_t>(256))) {
        goto loc_80519FA4;
    }
}

loc_80519F4C:
{
}

loc_80519F50:
{
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(0))) {
        goto loc_80519FA4;
    }
}

loc_80519F54:
{
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r3 = r31;
    r6 = (r28 + 176);
    r7 = 0;
    r5 = (r4 + r29);
    ctx->lr = 0x80519F6Cu;
    if constexpr (KnownRegArgsCpuCall<0x80515A3Cu>(&func_80515A3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80515A3C_4FF6 = func_80515A3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80515A3C_4FF6);
        r4 = static_cast<uint32_t>(regargs_result_80515A3C_4FF6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x80515A3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80519F70:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80519F7C;
    }
}

loc_80519F74:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 824), r0);
}

loc_80519F7C:
{
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r3 = r31;
    r6 = (r13 + -18972);
    r7 = 0;
    r5 = (r4 + r29);
    ctx->lr = 0x80519F94u;
    if constexpr (KnownRegArgsCpuCall<0x80515A3Cu>(&func_80515A3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80515A3C_5656 = func_80515A3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80515A3C_5656);
        r4 = static_cast<uint32_t>(regargs_result_80515A3C_5656 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x80515A3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80519F98:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80519FA4;
    }
}

loc_80519F9C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 824), r0);
}

loc_80519FA4:
{
    r3 = r31;
    r4 = (r28 + 188);
    r5 = (r1 + 8);
    ctx->lr = 0x80519FB4u;
    if constexpr (KnownRegArgsCpuCall<0x805168F0u>(&func_805168F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_805168F0_5C76 = func_805168F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_805168F0_5C76);
        r4 = static_cast<uint32_t>(regargs_result_805168F0_5C76 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x805168F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80519FB8:
{
    MemoryInline::FlatWrite32((r30 + 828), r3);
    r0 = r3;
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80519FD4;
    }
}

loc_80519FC4:
{
    r0 = 7;
    r3 = 0;
    MemoryInline::FlatWrite32((r30 + 816), r0);
    goto loc_8051A02C;
}

loc_80519FD4:
{
}

loc_80519FD8:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(256))) {
        goto loc_80519FE8;
    }
}

loc_80519FDC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 828), r0);
    goto loc_8051A018;
}

loc_80519FE8:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8051A010;
    }
}

loc_80519FEC:
{
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r3 = r31;
    r6 = (r13 + -18960);
    r7 = 59;
    r5 = (r4 + r0);
    ctx->lr = 0x8051A004u;
    if constexpr (KnownRegArgsCpuCall<0x80515A3Cu>(&func_80515A3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80515A3C_64D3 = func_80515A3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80515A3C_64D3);
        r4 = static_cast<uint32_t>(regargs_result_80515A3C_64D3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x80515A3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
    goto loc_8051A014;
}

loc_8051A010:
{
    r0 = 0;
}

loc_8051A014:
{
    MemoryInline::FlatWrite32((r30 + 828), r0);
}

loc_8051A018:
{
    r3 = 0;
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 816), r3);
    r3 = 1;
    MemoryInline::FlatWrite32((r31 + 20), r0);
}

loc_8051A02C:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80519D14(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80519D14_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x0000001E fpr_write=0x0000001E fpr_return=0x00000002 cr_read=0x23 cr_write=0x23 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80519D14 func_80519D14 preserves=true fpr_mask=0x00000000
