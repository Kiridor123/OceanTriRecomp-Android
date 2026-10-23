#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803FD9DC(CpuContext* ctx);
extern "C" uint64_t func_803FD9DC_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803FFF5C(CpuContext* ctx);
extern "C" uint64_t func_803FFF5C_rac8_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80401264(CpuContext* ctx);
extern "C" uint64_t func_80401264_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804012CC(CpuContext* ctx);
extern "C" uint64_t func_804012CC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80401358(CpuContext* ctx);
extern "C" uint64_t func_80401358_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8040324C(CpuContext* ctx);
extern "C" uint64_t func_8040324C_rac8_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80403CEC(CpuContext* ctx);
extern "C" uint64_t func_80403CEC_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_803FFB7C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_10 = 0;
    uint32_t r30_addr_11 = 0;
    uint32_t r30_addr_12 = 0;
    uint32_t r30_addr_13 = 0;
    uint32_t r30_addr_14 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r30_addr_5 = 0;
    uint32_t r30_addr_6 = 0;
    uint32_t r30_addr_7 = 0;
    uint32_t r30_addr_8 = 0;
    uint32_t r30_addr_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_803FFB7C;

loc_803FFB7C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r6 = MemoryInline::FlatRead8((r3 + 24885));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(40));
}

loc_803FFB9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803FFCD4;
    }
}

loc_803FFBA0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FFBD4;
    }
}

loc_803FFBA4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(20));
}

loc_803FFBA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803FFC6C;
    }
}

loc_803FFBAC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FFBC8;
    }
}

loc_803FFBB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(10));
}

loc_803FFBB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803FFC5C;
    }
}

loc_803FFBB8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FFF40;
    }
}

loc_803FFBBC:
{
}

loc_803FFBC0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(5))) {
        goto loc_803FFC04;
    }
}

loc_803FFBC4:
{
    goto loc_803FFF40;
}

loc_803FFBC8:
{
}

loc_803FFBCC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(30))) {
        goto loc_803FFCA4;
    }
}

loc_803FFBD0:
{
    goto loc_803FFF40;
}

loc_803FFBD4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(70));
}

loc_803FFBD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803FFF1C;
    }
}

loc_803FFBDC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FFBF8;
    }
}

loc_803FFBE0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(60));
}

loc_803FFBE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803FFD34;
    }
}

loc_803FFBE8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803FFF40;
    }
}

loc_803FFBEC:
{
}

loc_803FFBF0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(50))) {
        goto loc_803FFD1C;
    }
}

loc_803FFBF4:
{
    goto loc_803FFF40;
}

loc_803FFBF8:
{
}

loc_803FFBFC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(80))) {
        goto loc_803FFF30;
    }
}

loc_803FFC00:
{
    goto loc_803FFF40;
}

loc_803FFC04:
{
    r5 = (r3 + 65536);
    r4 = MemoryInline::FlatRead8((r5 + -30379));
}

loc_803FFC10:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(5))) {
        goto loc_803FFC30;
    }
}

loc_803FFC14:
{
    r0 = 90;
    MemoryInline::FlatWrite8((r3 + 24884), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 24885), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 25944), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r5 + -30378), static_cast<uint8_t>(r4));
    goto loc_803FFF40;
}

loc_803FFC30:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r5 + -32700), r0);
}

loc_803FFC3C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(3))) {
        goto loc_803FFC54;
    }
}

loc_803FFC40:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 25945), static_cast<uint8_t>(r0));
    r0 = (r6 + 5);
    MemoryInline::FlatWrite8((r3 + 24885), static_cast<uint8_t>(r0));
    goto loc_803FFF40;
}

loc_803FFC54:
{
    r3 = (0 - r6);
    goto loc_803FFF44;
}

loc_803FFC5C:
{
    r0 = (r6 + 5);
    MemoryInline::FlatWrite8((r3 + 24885), static_cast<uint8_t>(r0));
    ctx->lr = 0x803FFC68u;
    if constexpr (KnownRegArgsCpuCall<0x803FFF5Cu>(&func_803FFF5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803FFF5C_1BEB = func_803FFF5C_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803FFF5C_1BEB);
        r4 = static_cast<uint32_t>(regargs_result_803FFF5C_1BEB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803FFF5Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_803FFF40;
}

loc_803FFC6C:
{
    r4 = 3;
    ctx->lr = 0x803FFC74u;
    if constexpr (KnownRegArgsCpuCall<0x803FD9DCu>(&func_803FD9DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803FD9DC_23CF = func_803FD9DC_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803FD9DC_23CF);
        r4 = static_cast<uint32_t>(regargs_result_803FD9DC_23CF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803FD9DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_803FFC78:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803FFC94;
    }
}

loc_803FFC7C:
{
    r3 = MemoryInline::FlatRead8((r30 + 24885));
    r0 = (r3 + 5);
    MemoryInline::FlatWrite8((r30 + 24885), static_cast<uint8_t>(r0));
    r3 = r30;
    ctx->lr = 0x803FFC90u;
    if constexpr (KnownRegArgsCpuCall<0x8040324Cu>(&func_8040324C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8040324C_2C8C = func_8040324C_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8040324C_2C8C);
        r4 = static_cast<uint32_t>(regargs_result_8040324C_2C8C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8040324Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_803FFF40;
}

loc_803FFC94:
{
    r3 = MemoryInline::FlatRead8((r30 + 24885));
    r0 = (r3 + 10);
    MemoryInline::FlatWrite8((r30 + 24885), static_cast<uint8_t>(r0));
    goto loc_803FFF40;
}

loc_803FFCA4:
{
    r4 = (r3 + 65536);
    r4 = MemoryInline::FlatRead8((r4 + -11264));
}

loc_803FFCB0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_803FFCC8;
    }
}

loc_803FFCB4:
{
    r0 = (r6 + 5);
    MemoryInline::FlatWrite8((r3 + 24885), static_cast<uint8_t>(r0));
    r5 = 6;
    ctx->lr = 0x803FFCC4u;
    if constexpr (KnownRegArgsCpuCall<0x80401264u>(&func_80401264)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80401264_3666 = func_80401264_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80401264_3666);
        r4 = static_cast<uint32_t>(regargs_result_80401264_3666 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80401264u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_803FFF40;
}

loc_803FFCC8:
{
    r0 = 70;
    MemoryInline::FlatWrite8((r3 + 24885), static_cast<uint8_t>(r0));
    goto loc_803FFF40;
}

loc_803FFCD4:
{
    r5 = (r3 + 65536);
    r0 = MemoryInline::FlatRead8((r5 + -11256));
}

loc_803FFCE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803FFD0C;
    }
}

loc_803FFCE4:
{
    r7 = MemoryInline::FlatRead32((r5 + -32164));
}

loc_803FFCEC:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_803FFD0C;
    }
}

loc_803FFCF0:
{
    r0 = (r6 + 5);
    MemoryInline::FlatWrite8((r3 + 24885), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8((r5 + -11264));
    r5 = MemoryInline::FlatRead32((r5 + -11260));
    r6 = 0;
    ctx->lr = 0x803FFD08u;
    if constexpr (KnownRegArgsCpuCall<0x804012CCu>(&func_804012CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804012CC_4131 = func_804012CC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804012CC_4131);
        r4 = static_cast<uint32_t>(regargs_result_804012CC_4131 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804012CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_803FFF40;
}

loc_803FFD0C:
{
    r4 = MemoryInline::FlatRead8((r3 + 24885));
    r0 = (r4 + 10);
    MemoryInline::FlatWrite8((r3 + 24885), static_cast<uint8_t>(r0));
    goto loc_803FFF40;
}

loc_803FFD1C:
{
    r0 = (r6 + 5);
    MemoryInline::FlatWrite8((r3 + 24885), static_cast<uint8_t>(r0));
    r4 = (r3 + 65536);
    r4 = MemoryInline::FlatRead8((r4 + -11264));
    ctx->lr = 0x803FFD30u;
    if constexpr (KnownRegArgsCpuCall<0x80401358u>(&func_80401358)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80401358_4A69 = func_80401358_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80401358_4A69);
        r4 = static_cast<uint32_t>(regargs_result_80401358_4A69 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80401358u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_803FFF40;
}

loc_803FFD34:
{
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -11256));
}

loc_803FFD40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803FFF0C;
    }
}

loc_803FFD44:
{
    r31 = 0;
    r3 = (r3 + -10740);
    r4 = 0;
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0;
    r5 = 0;
    r7 = (r30 + 65536);
    r0 = 8;
    ctr = r0;
}

loc_803FFD6C:
{
    goto loc_803FFD74;
}

loc_803FFD70:
{
    r31 = (r31 + 1);
}

loc_803FFD74:
{
    r4 = (r31 + 65536);
    r0 = (r4 + -11255);
    r30_addr_3 = (r30 + r0);
    r0 = MemoryInline::FlatRead8(r30_addr_3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803FFD88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_803FFD98;
    }
}

loc_803FFD8C:
{
}

loc_803FFD90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803FFE68;
    }
}

loc_803FFD94:
{
    goto loc_803FFD70;
}

loc_803FFD98:
{
    r31 = (r31 + 1);
    r4 = (r31 + 65536);
    r0 = (r4 + -11255);
    r30_addr_5 = (r30 + r0);
    r0 = MemoryInline::FlatRead8(r30_addr_5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803FFDB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_803FFD98;
    }
}

loc_803FFDB4:
{
    r4 = (r7 + r31);
    r0 = MemoryInline::FlatRead8((r4 + -11255));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803FFDC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(13))) {
        goto loc_803FFDD0;
    }
}

loc_803FFDC8:
{
}

loc_803FFDCC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_803FFDD4;
    }
}

loc_803FFDD0:
{
    MemoryInline::FlatWrite8((r4 + -11255), static_cast<uint8_t>(r5));
}

loc_803FFDD4:
{
    r0 = MemoryInline::FlatRead8((r4 + -11255));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803FFDE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803FFE68;
    }
}

loc_803FFDE4:
{
    r6 = r31;
    r31 = (r31 + 1);
    r0 = r3;
    r3 = (r3 + 1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4 = (r7 + r0);
    MemoryInline::FlatWrite32((r4 + -10740), r6);
    goto loc_803FFE08;
}

loc_803FFE04:
{
    r31 = (r31 + 1);
}

loc_803FFE08:
{
    r4 = (r31 + 65536);
    r0 = (r4 + -11255);
    r30_addr_7 = (r30 + r0);
    r0 = MemoryInline::FlatRead8(r30_addr_7);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803FFE1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(13))) {
        goto loc_803FFE3C;
    }
}

loc_803FFE20:
{
}

loc_803FFE24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_803FFE3C;
    }
}

loc_803FFE28:
{
}

loc_803FFE2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803FFE04;
    }
}

loc_803FFE30:
{
    goto loc_803FFE3C;
}

loc_803FFE34:
{
    r30_addr_10 = (r30 + r4);
    MemoryInline::FlatWrite8(r30_addr_10, static_cast<uint8_t>(r5));
    r31 = (r31 + 1);
}

loc_803FFE3C:
{
    r4 = (r31 + 65536);
    r4 = (r4 + -11255);
    r30_addr_9 = (r30 + r4);
    r0 = MemoryInline::FlatRead8(r30_addr_9);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803FFE50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(13))) {
        goto loc_803FFE34;
    }
}

loc_803FFE54:
{
}

loc_803FFE58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_803FFE34;
    }
}

loc_803FFE5C:
{
}

loc_803FFE60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803FFE68;
    }
}

loc_803FFE64:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803FFD6C;
    }
}

loc_803FFE68:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r5 = (r30 + r0);
    r4 = (8 - r3);
}

loc_803FFE78:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(8))) {
        goto loc_803FFF0C;
    }
}

loc_803FFE7C:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(29));
    r0 = (r0_rot_5 & 536870911);
}

loc_803FFE84:
{
    ctr = r0;
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_803FFEF8;
    }
}

loc_803FFE8C:
{
    r3 = (r5 + 65536);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + -10740), 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + -10740), r31);
    r5 = (r5 + 4);
    r3 = (r5 + 65536);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + -10740), r31);
    r5 = (r5 + 4);
    r3 = (r5 + 65536);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + -10740), r31);
    r5 = (r5 + 4);
    r3 = (r5 + 65536);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + -10740), r31);
    r5 = (r5 + 4);
    r3 = (r5 + 65536);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + -10740), r31);
    r5 = (r5 + 4);
    r3 = (r5 + 65536);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + -10740), r31);
    r5 = (r5 + 4);
    r3 = (r5 + 65536);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + -10740), r31);
    r5 = (r5 + 4);
    r3 = (r5 + 65536);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + -10740), r31);
    r5 = (r5 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803FFE8C;
    }
}

loc_803FFEF0:
{
    r4 = (r4 & 7);
}

loc_803FFEF4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_803FFF0C;
    }
}

loc_803FFEF8:
{
    ctr = r4;
}

loc_803FFEFC:
{
    r3 = (r5 + 65536);
    MemoryInline::FlatWrite32((r3 + -10740), r31);
    r5 = (r5 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803FFEFC;
    }
}

loc_803FFF0C:
{
    r3 = MemoryInline::FlatRead8((r30 + 24885));
    r0 = (r3 + 10);
    MemoryInline::FlatWrite8((r30 + 24885), static_cast<uint8_t>(r0));
    goto loc_803FFF40;
}

loc_803FFF1C:
{
    r0 = (r6 + 5);
    MemoryInline::FlatWrite8((r3 + 24885), static_cast<uint8_t>(r0));
    r4 = 0;
    ctx->lr = 0x803FFF2Cu;
    if constexpr (KnownRegArgsCpuCall<0x80403CECu>(&func_80403CEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80403CEC_6C2B = func_80403CEC_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80403CEC_6C2B);
        r4 = static_cast<uint32_t>(regargs_result_80403CEC_6C2B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80403CECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_803FFF40;
}

loc_803FFF30:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 24885), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_803FFF44;
}

loc_803FFF40:
{
    r3 = 0;
}

loc_803FFF44:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803FFB7C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803FFB7C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803FFB7C func_803FFB7C preserves=true fpr_mask=0x00000000
