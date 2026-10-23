#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80225798(CpuContext* ctx);
extern "C" uint64_t func_80225798_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_80225B98(CpuContext* ctx);
extern "C" uint64_t func_80225B98_ra58_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_80225DB8(CpuContext* ctx);
extern "C" uint64_t func_80225DB8_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_80225FAC(CpuContext* ctx);
extern "C" uint64_t func_80225FAC_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_80226148(CpuContext* ctx);
extern "C" uint64_t func_80226148_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_80226390(CpuContext* ctx);
extern "C" uint64_t func_80226390_ra58_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_8022678C(CpuContext* ctx);
extern "C" uint64_t func_8022678C_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_8026A38C(CpuContext* ctx);
extern "C" uint64_t func_8026A38C_ra58_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_80224E8C_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80224E8C;

loc_80224E8C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    // inline leaf 0x8026A36C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    r3 = MemoryInline::FlatRead16((r3 + 84));
    // end of inlined leaf 0x8026A36C
    r31 = r3;
    r30 = 2;
}

loc_80224EC0:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80224EF8;
    }
}

loc_80224EC4:
{
}

loc_80224EC8:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(1))) {
        goto loc_80224F0C;
    }
}

loc_80224ECC:
{
}

loc_80224ED0:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(3))) {
        goto loc_80224F20;
    }
}

loc_80224ED4:
{
}

loc_80224ED8:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(4))) {
        goto loc_80224F34;
    }
}

loc_80224EDC:
{
}

loc_80224EE0:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(7))) {
        goto loc_80224F48;
    }
}

loc_80224EE4:
{
}

loc_80224EE8:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(2))) {
        goto loc_80224F5C;
    }
}

loc_80224EEC:
{
}

loc_80224EF0:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(8))) {
        goto loc_80224F70;
    }
}

loc_80224EF4:
{
    goto loc_80224F84;
}

loc_80224EF8:
{
    r3 = r28;
    r4 = (r31 & 65535);
    ctx->lr = 0x80224F04u;
    if constexpr (KnownRegArgsCpuCall<0x80225798u>(&func_80225798)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80225798_F32 = func_80225798_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80225798_F32);
        r4 = static_cast<uint32_t>(regargs_result_80225798_F32 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80225798u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    r30 = r3;
    goto loc_80224F9C;
}

loc_80224F0C:
{
    r3 = r28;
    r4 = (r31 & 65535);
    ctx->lr = 0x80224F18u;
    if constexpr (KnownRegArgsCpuCall<0x80225DB8u>(&func_80225DB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80225DB8_1450 = func_80225DB8_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80225DB8_1450);
        r4 = static_cast<uint32_t>(regargs_result_80225DB8_1450 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80225DB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    r30 = r3;
    goto loc_80224F9C;
}

loc_80224F20:
{
    r3 = r28;
    r4 = (r31 & 65535);
    ctx->lr = 0x80224F2Cu;
    if constexpr (KnownRegArgsCpuCall<0x80225FACu>(&func_80225FAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80225FAC_1971 = func_80225FAC_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80225FAC_1971);
        r4 = static_cast<uint32_t>(regargs_result_80225FAC_1971 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80225FACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    r30 = r3;
    goto loc_80224F9C;
}

loc_80224F34:
{
    r3 = r28;
    r4 = (r31 & 65535);
    ctx->lr = 0x80224F40u;
    if constexpr (KnownRegArgsCpuCall<0x80226148u>(&func_80226148)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80226148_1E92 = func_80226148_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80226148_1E92);
        r4 = static_cast<uint32_t>(regargs_result_80226148_1E92 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80226148u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    r30 = r3;
    goto loc_80224F9C;
}

loc_80224F48:
{
    r3 = r28;
    r4 = (r31 & 65535);
    ctx->lr = 0x80224F54u;
    if constexpr (KnownRegArgsCpuCall<0x80226390u>(&func_80226390)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80226390_23CE = func_80226390_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80226390_23CE);
        r4 = static_cast<uint32_t>(regargs_result_80226390_23CE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80226390u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    r30 = r3;
    goto loc_80224F9C;
}

loc_80224F5C:
{
    r3 = r28;
    r4 = (r31 & 65535);
    ctx->lr = 0x80224F68u;
    if constexpr (KnownRegArgsCpuCall<0x80225B98u>(&func_80225B98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80225B98_290A = func_80225B98_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80225B98_290A);
        r4 = static_cast<uint32_t>(regargs_result_80225B98_290A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80225B98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    r30 = r3;
    goto loc_80224F9C;
}

loc_80224F70:
{
    r3 = r28;
    r4 = (r31 & 65535);
    ctx->lr = 0x80224F7Cu;
    if constexpr (KnownRegArgsCpuCall<0x8022678Cu>(&func_8022678C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8022678C_2E2B = func_8022678C_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8022678C_2E2B);
        r4 = static_cast<uint32_t>(regargs_result_8022678C_2E2B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8022678Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    r30 = r3;
    goto loc_80224F9C;
}

loc_80224F84:
{
    r3 = r28;
    // inline leaf 0x8026A404 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 24));
    // end of inlined leaf 0x8026A404
    r0 = (r3 & 255);
}

loc_80224F94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80224F9C;
    }
}

loc_80224F98:
{
    r30 = 1;
}

loc_80224F9C:
{
    r0 = (r31 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(254));
}

loc_80224FA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80225124;
    }
}

loc_80224FA8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80225030;
    }
}

loc_80224FAC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(207));
}

loc_80224FB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80225124;
    }
}

loc_80224FB4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80224FFC;
    }
}

loc_80224FB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(202));
}

loc_80224FBC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802250AC;
    }
}

loc_80224FC0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80224FEC;
    }
}

loc_80224FC4:
{
}

loc_80224FC8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(135))) {
        goto loc_80224FE0;
    }
}

loc_80224FCC:
{
}

loc_80224FD0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(62))) {
        goto loc_80225124;
    }
}

loc_80224FD4:
{
}

loc_80224FD8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(60))) {
        goto loc_80225120;
    }
}

loc_80224FDC:
{
    goto loc_80225124;
}

loc_80224FE0:
{
}

loc_80224FE4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(137))) {
        goto loc_80225124;
    }
}

loc_80224FE8:
{
    goto loc_80225120;
}

loc_80224FEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(204));
}

loc_80224FF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802250AC;
    }
}

loc_80224FF4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802250C8;
    }
}

loc_80224FF8:
{
    goto loc_80225124;
}

loc_80224FFC:
{
}

loc_80225000:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(219))) {
        goto loc_8022501C;
    }
}

loc_80225004:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(210));
}

loc_80225008:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80225124;
    }
}

loc_8022500C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_802250C8;
    }
}

loc_80225010:
{
}

loc_80225014:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(216))) {
        goto loc_80225124;
    }
}

loc_80225018:
{
    goto loc_802250C8;
}

loc_8022501C:
{
}

loc_80225020:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(253))) {
        goto loc_802250C8;
    }
}

loc_80225024:
{
}

loc_80225028:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(221))) {
        goto loc_80225124;
    }
}

loc_8022502C:
{
    goto loc_802250C8;
}

loc_80225030:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(356));
}

loc_80225034:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802250D0;
    }
}

loc_80225038:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80225074;
    }
}

loc_8022503C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(271));
}

loc_80225040:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802250C8;
    }
}

loc_80225044:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80225068;
    }
}

loc_80225048:
{
}

loc_8022504C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(263))) {
        goto loc_8022505C;
    }
}

loc_80225050:
{
}

loc_80225054:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(256))) {
        goto loc_80225124;
    }
}

loc_80225058:
{
    goto loc_802250C8;
}

loc_8022505C:
{
}

loc_80225060:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(265))) {
        goto loc_80225124;
    }
}

loc_80225064:
{
    goto loc_802250C8;
}

loc_80225068:
{
}

loc_8022506C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(313))) {
        goto loc_802250D0;
    }
}

loc_80225070:
{
    goto loc_80225124;
}

loc_80225074:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(519));
}

loc_80225078:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80225124;
    }
}

loc_8022507C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802250A0;
    }
}

loc_80225080:
{
}

loc_80225084:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(423))) {
        goto loc_80225094;
    }
}

loc_80225088:
{
}

loc_8022508C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(421))) {
        goto loc_80225120;
    }
}

loc_80225090:
{
    goto loc_80225124;
}

loc_80225094:
{
}

loc_80225098:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(500))) {
        goto loc_80225120;
    }
}

loc_8022509C:
{
    goto loc_80225124;
}

loc_802250A0:
{
}

loc_802250A4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(535))) {
        goto loc_80225124;
    }
}

loc_802250A8:
{
    goto loc_80225120;
}

loc_802250AC:
{
    r0 = MemoryInline::FlatRead8((r28 + 24));
}

loc_802250B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802250C0;
    }
}

loc_802250B8:
{
    r30 = 1;
    goto loc_80225124;
}

loc_802250C0:
{
    r30 = 2;
    goto loc_80225124;
}

loc_802250C8:
{
    r30 = 2;
    goto loc_80225124;
}

loc_802250D0:
{
    r3 = r28;
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15808));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -15812));
    ctx->lr = 0x802250E4u;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_4B7E = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_4B7E);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_4B7E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_802250E8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802250F4;
    }
}

loc_802250EC:
{
    r30 = 2;
    goto loc_80225124;
}

loc_802250F4:
{
    r3 = r28;
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15804));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -15812));
    ctx->lr = 0x80225108u;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_51B6 = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_51B6);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_51B6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_8022510C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80225118;
    }
}

loc_80225110:
{
    r30 = 1;
    goto loc_80225124;
}

loc_80225118:
{
    r30 = 2;
    goto loc_80225124;
}

loc_80225120:
{
    r30 = 2;
}

loc_80225124:
{
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80224E8C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80224E8C_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0xC000000F fpr_write=0xC000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80224E8C func_80224E8C preserves=true fpr_mask=0x00000000
