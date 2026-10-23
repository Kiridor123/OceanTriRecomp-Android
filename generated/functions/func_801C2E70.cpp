#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80130FD8(CpuContext* ctx);
extern "C" uint64_t func_80130FD8_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_8013599C(CpuContext* ctx);
extern "C" uint64_t func_8013599C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80137718(CpuContext* ctx);
extern "C" uint32_t func_80137718_ra8_0_10_0(CpuContext*, uint32_t);
extern "C" void func_80141BEC(CpuContext* ctx);
extern "C" uint64_t func_80141BEC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_801C2E70_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

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

    goto loc_801C2E70;

loc_801C2E70:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r3 = (r1 + 24);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r0 = (r30 & 255);
}

loc_801C2EA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801C2EBC;
    }
}

loc_801C2EA8:
{
}

loc_801C2EAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801C2F54;
    }
}

loc_801C2EB0:
{
}

loc_801C2EB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_801C2FF4;
    }
}

loc_801C2EB8:
{
    goto loc_801C309C;
}

loc_801C2EBC:
{
    r0 = (r31 & 255);
}

loc_801C2EC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801C2EDC;
    }
}

loc_801C2EC8:
{
}

loc_801C2ECC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_801C2EE8;
    }
}

loc_801C2ED0:
{
}

loc_801C2ED4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_801C2F48;
    }
}

loc_801C2ED8:
{
    goto loc_801C309C;
}

loc_801C2EDC:
{
    r3 = r29;
    if constexpr (KnownRegArgsCpuCall<0x80137718u>(&func_80137718)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80137718_CE0 = func_80137718_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_80137718_CE0;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80137718u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_801C309C;
}

loc_801C2EE8:
{
    r3 = r29;
    // inline leaf 0x8012D204 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 501));
    // end of inlined leaf 0x8012D204
}

loc_801C2EF4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C309C;
    }
}

loc_801C2EF8:
{
    r3 = r29;
    r4 = 53;
    r5 = (r1 + 24);
    ctx->lr = 0x801C2F08u;
    if constexpr (KnownRegArgsCpuCall<0x8013599Cu>(&func_8013599C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_8013599C_1188 = func_8013599C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013599C_1188);
        r4 = static_cast<uint32_t>(regargs_result_8013599C_1188 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8013599Cu>(ctx);
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
    r0 = 255;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = (r1 + 24);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = (r29 + 444);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = MemoryInline::FlatRead16((r29 + 26));
    r4 = 35;
    r5 = 1;
    r6 = MemoryInline::FlatRead8((r29 + 481));
    r7 = 255;
    r8 = 1;
    r9 = 3;
    r10 = 1;
    ctx->lr = 0x801C2F44u;
    if constexpr (KnownRegArgsCpuCall<0x80141BECu>(&func_80141BEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        const auto regargs_result_80141BEC_1806 = func_80141BEC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80141BEC_1806);
        r4 = static_cast<uint32_t>(regargs_result_80141BEC_1806 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80141BECu>(ctx);
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
    goto loc_801C309C;
}

loc_801C2F48:
{
    r3 = r29;
    ctx->lr = 0x801C2F50u;
    if constexpr (KnownRegArgsCpuCall<0x80130FD8u>(&func_80130FD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_80130FD8_2108 = func_80130FD8_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80130FD8_2108);
        r4 = static_cast<uint32_t>(regargs_result_80130FD8_2108 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80130FD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_801C309C;
}

loc_801C2F54:
{
    r0 = (r31 & 255);
}

loc_801C2F5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_801C2F7C;
    }
}

loc_801C2F60:
{
}

loc_801C2F64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(25))) {
        goto loc_801C2F88;
    }
}

loc_801C2F68:
{
}

loc_801C2F6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(51))) {
        goto loc_801C2F88;
    }
}

loc_801C2F70:
{
}

loc_801C2F74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(31))) {
        goto loc_801C2F94;
    }
}

loc_801C2F78:
{
    goto loc_801C309C;
}

loc_801C2F7C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 507), static_cast<uint8_t>(r0));
    goto loc_801C309C;
}

loc_801C2F88:
{
    r3 = r29;
    if constexpr (KnownRegArgsCpuCall<0x80137718u>(&func_80137718)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80137718_2A47 = func_80137718_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_80137718_2A47;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80137718u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_801C309C;
}

loc_801C2F94:
{
    r3 = r29;
    // inline leaf 0x8012D204 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 501));
    // end of inlined leaf 0x8012D204
}

loc_801C2FA0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C309C;
    }
}

loc_801C2FA4:
{
    r3 = r29;
    r4 = 53;
    r5 = (r1 + 24);
    ctx->lr = 0x801C2FB4u;
    if constexpr (KnownRegArgsCpuCall<0x8013599Cu>(&func_8013599C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_8013599C_2EF1 = func_8013599C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013599C_2EF1);
        r4 = static_cast<uint32_t>(regargs_result_8013599C_2EF1 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8013599Cu>(ctx);
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
    r0 = 255;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = (r1 + 24);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = (r29 + 444);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = MemoryInline::FlatRead16((r29 + 26));
    r4 = 35;
    r5 = 2;
    r6 = MemoryInline::FlatRead8((r29 + 481));
    r7 = 255;
    r8 = 1;
    r9 = 3;
    r10 = 1;
    ctx->lr = 0x801C2FF0u;
    if constexpr (KnownRegArgsCpuCall<0x80141BECu>(&func_80141BEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        const auto regargs_result_80141BEC_356F = func_80141BEC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80141BEC_356F);
        r4 = static_cast<uint32_t>(regargs_result_80141BEC_356F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80141BECu>(ctx);
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
    goto loc_801C309C;
}

loc_801C2FF4:
{
    r0 = (r31 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(91));
}

loc_801C2FFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C3094;
    }
}

loc_801C3000:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C3054;
    }
}

loc_801C3004:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(35));
}

loc_801C3008:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C3088;
    }
}

loc_801C300C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C3034;
    }
}

loc_801C3010:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(28));
}

loc_801C3014:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C309C;
    }
}

loc_801C3018:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C3028;
    }
}

loc_801C301C:
{
}

loc_801C3020:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(27))) {
        goto loc_801C3094;
    }
}

loc_801C3024:
{
    goto loc_801C309C;
}

loc_801C3028:
{
}

loc_801C302C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(30))) {
        goto loc_801C309C;
    }
}

loc_801C3030:
{
    goto loc_801C3088;
}

loc_801C3034:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(88));
}

loc_801C3038:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C3088;
    }
}

loc_801C303C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C309C;
    }
}

loc_801C3040:
{
}

loc_801C3044:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(55))) {
        goto loc_801C309C;
    }
}

loc_801C3048:
{
}

loc_801C304C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(53))) {
        goto loc_801C3088;
    }
}

loc_801C3050:
{
    goto loc_801C309C;
}

loc_801C3054:
{
}

loc_801C3058:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(152))) {
        goto loc_801C3074;
    }
}

loc_801C305C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(132));
}

loc_801C3060:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C3088;
    }
}

loc_801C3064:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C309C;
    }
}

loc_801C3068:
{
}

loc_801C306C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(93))) {
        goto loc_801C3088;
    }
}

loc_801C3070:
{
    goto loc_801C309C;
}

loc_801C3074:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(158));
}

loc_801C3078:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C3088;
    }
}

loc_801C307C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C309C;
    }
}

loc_801C3080:
{
}

loc_801C3084:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(154))) {
        goto loc_801C309C;
    }
}

loc_801C3088:
{
    r0 = 120;
    MemoryInline::FlatWrite32((r29 + 32), r0);
    goto loc_801C309C;
}

loc_801C3094:
{
    r0 = 120;
    MemoryInline::FlatWrite32((r29 + 32), r0);
}

loc_801C309C:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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

extern "C" void func_801C2E70(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801C2E70_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801C2E70 func_801C2E70 preserves=true fpr_mask=0x00000000
