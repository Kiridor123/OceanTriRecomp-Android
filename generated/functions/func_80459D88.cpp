#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80459A14(CpuContext* ctx);
extern "C" uint32_t func_80459A14_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80459C9C(CpuContext* ctx);
extern "C" uint32_t func_80459C9C_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80459D88(CpuContext* ctx);
extern "C" uint64_t func_80459D88_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80459D88_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
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
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_80459D88;

loc_80459D88:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    r0 = (r4 + 64);
}

loc_80459D9C:
{
    r31 = r3;
    r30 = r4;
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(72))) {
        goto loc_80459FBC;
    }
}

loc_80459DB0:
{
    r5 = 0x80610000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = (r5 + -3240);
    r5_addr_1 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_1);
    ctr = r5;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80459DC8u:
        goto loc_80459DC8;
        break;
    case 0x80459FBCu:
        goto loc_80459FBC;
        break;
    case 0x80459DDCu:
        goto loc_80459DDC;
        break;
    case 0x80459DF4u:
        goto loc_80459DF4;
        break;
    case 0x80459E0Cu:
        goto loc_80459E0C;
        break;
    case 0x80459E24u:
        goto loc_80459E24;
        break;
    case 0x80459E3Cu:
        goto loc_80459E3C;
        break;
    case 0x80459E54u:
        goto loc_80459E54;
        break;
    case 0x80459E6Cu:
        goto loc_80459E6C;
        break;
    case 0x80459E84u:
        goto loc_80459E84;
        break;
    case 0x80459E9Cu:
        goto loc_80459E9C;
        break;
    case 0x80459EB4u:
        goto loc_80459EB4;
        break;
    case 0x80459ECCu:
        goto loc_80459ECC;
        break;
    case 0x80459EE4u:
        goto loc_80459EE4;
        break;
    case 0x80459EFCu:
        goto loc_80459EFC;
        break;
    case 0x80459F14u:
        goto loc_80459F14;
        break;
    case 0x80459F2Cu:
        goto loc_80459F2C;
        break;
    case 0x80459F44u:
        goto loc_80459F44;
        break;
    case 0x80459F5Cu:
        goto loc_80459F5C;
        break;
    case 0x80459F74u:
        goto loc_80459F74;
        break;
    case 0x80459F8Cu:
        goto loc_80459F8C;
        break;
    case 0x80459FA4u:
        goto loc_80459FA4;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_80459DC8:
{
    r4 = 0x80570000u;
    r5 = -20;
    r4 = (r4 + 11528);
    if constexpr (KnownRegArgsCpuCall<0x80459C9Cu>(&func_80459C9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80459C9C_1281 = func_80459C9C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80459C9C_1281;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80459C9Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8045A08C;
}

loc_80459DDC:
{
    r4 = 0x80570000u;
    r5 = -16;
    r4 = (r4 + 11528);
    r4 = (r4 + 46);
    if constexpr (KnownRegArgsCpuCall<0x80459C9Cu>(&func_80459C9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80459C9C_155A = func_80459C9C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80459C9C_155A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80459C9Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8045A08C;
}

loc_80459DF4:
{
    r4 = 0x80570000u;
    r5 = -10;
    r4 = (r4 + 11528);
    r4 = (r4 + 85);
    if constexpr (KnownRegArgsCpuCall<0x80459C9Cu>(&func_80459C9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80459C9C_1833 = func_80459C9C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80459C9C_1833;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80459C9Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8045A08C;
}

loc_80459E0C:
{
    r4 = 0x80570000u;
    r5 = -5;
    r4 = (r4 + 11528);
    r4 = (r4 + 109);
    if constexpr (KnownRegArgsCpuCall<0x80459C9Cu>(&func_80459C9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80459C9C_1B0C = func_80459C9C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80459C9C_1B0C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80459C9Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8045A08C;
}

loc_80459E24:
{
    r4 = 0x80570000u;
    r5 = -3;
    r4 = (r4 + 11528);
    r4 = (r4 + 122);
    if constexpr (KnownRegArgsCpuCall<0x80459C9Cu>(&func_80459C9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80459C9C_1DE5 = func_80459C9C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80459C9C_1DE5;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80459C9Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8045A08C;
}

loc_80459E3C:
{
    r4 = 0x80570000u;
    r5 = -3;
    r4 = (r4 + 11528);
    r4 = (r4 + 129);
    if constexpr (KnownRegArgsCpuCall<0x80459C9Cu>(&func_80459C9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80459C9C_20BE = func_80459C9C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80459C9C_20BE;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80459C9Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8045A08C;
}

loc_80459E54:
{
    r4 = 0x80570000u;
    r5 = -2;
    r4 = (r4 + 11528);
    r4 = (r4 + 135);
    if constexpr (KnownRegArgsCpuCall<0x80459C9Cu>(&func_80459C9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80459C9C_2397 = func_80459C9C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80459C9C_2397;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80459C9Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8045A08C;
}

loc_80459E6C:
{
    r4 = 0x80570000u;
    r5 = -2;
    r4 = (r4 + 11528);
    r4 = (r4 + 141);
    if constexpr (KnownRegArgsCpuCall<0x80459C9Cu>(&func_80459C9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80459C9C_2670 = func_80459C9C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80459C9C_2670;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80459C9Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8045A08C;
}

loc_80459E84:
{
    r4 = 0x80570000u;
    r5 = -2;
    r4 = (r4 + 11528);
    r4 = (r4 + 146);
    if constexpr (KnownRegArgsCpuCall<0x80459C9Cu>(&func_80459C9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80459C9C_2949 = func_80459C9C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80459C9C_2949;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80459C9Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8045A08C;
}

loc_80459E9C:
{
    r4 = 0x80570000u;
    r5 = -1;
    r4 = (r4 + 11528);
    r4 = (r4 + 150);
    if constexpr (KnownRegArgsCpuCall<0x80459C9Cu>(&func_80459C9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80459C9C_2C22 = func_80459C9C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80459C9C_2C22;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80459C9Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8045A08C;
}

loc_80459EB4:
{
    r4 = 0x80570000u;
    r5 = -1;
    r4 = (r4 + 11528);
    r4 = (r4 + 154);
    if constexpr (KnownRegArgsCpuCall<0x80459C9Cu>(&func_80459C9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80459C9C_2EFB = func_80459C9C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80459C9C_2EFB;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80459C9Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8045A08C;
}

loc_80459ECC:
{
    r4 = 0x80570000u;
    r5 = -1;
    r4 = (r4 + 11528);
    r4 = (r4 + 157);
    if constexpr (KnownRegArgsCpuCall<0x80459C9Cu>(&func_80459C9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80459C9C_31D4 = func_80459C9C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80459C9C_31D4;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80459C9Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8045A08C;
}

loc_80459EE4:
{
    r4 = 0x80570000u;
    r5 = 0;
    r4 = (r4 + 11528);
    r4 = (r4 + 159);
    if constexpr (KnownRegArgsCpuCall<0x80459C9Cu>(&func_80459C9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80459C9C_34AC = func_80459C9C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80459C9C_34AC;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80459C9Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8045A08C;
}

loc_80459EFC:
{
    r4 = 0x80570000u;
    r5 = 0;
    r4 = (r4 + 11528);
    r4 = (r4 + 161);
    if constexpr (KnownRegArgsCpuCall<0x80459C9Cu>(&func_80459C9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80459C9C_3784 = func_80459C9C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80459C9C_3784;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80459C9Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8045A08C;
}

loc_80459F14:
{
    r4 = 0x80570000u;
    r5 = 0;
    r4 = (r4 + 11528);
    r4 = (r4 + 163);
    if constexpr (KnownRegArgsCpuCall<0x80459C9Cu>(&func_80459C9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80459C9C_3A5C = func_80459C9C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80459C9C_3A5C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80459C9Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8045A08C;
}

loc_80459F2C:
{
    r4 = 0x80570000u;
    r5 = 0;
    r4 = (r4 + 11528);
    r4 = (r4 + 165);
    if constexpr (KnownRegArgsCpuCall<0x80459C9Cu>(&func_80459C9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80459C9C_3D34 = func_80459C9C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80459C9C_3D34;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80459C9Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8045A08C;
}

loc_80459F44:
{
    r4 = 0x80570000u;
    r5 = 1;
    r4 = (r4 + 11528);
    r4 = (r4 + 167);
    if constexpr (KnownRegArgsCpuCall<0x80459C9Cu>(&func_80459C9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80459C9C_400C = func_80459C9C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80459C9C_400C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80459C9Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8045A08C;
}

loc_80459F5C:
{
    r4 = 0x80570000u;
    r5 = 1;
    r4 = (r4 + 11528);
    r4 = (r4 + 170);
    if constexpr (KnownRegArgsCpuCall<0x80459C9Cu>(&func_80459C9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80459C9C_42E4 = func_80459C9C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80459C9C_42E4;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80459C9Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8045A08C;
}

loc_80459F74:
{
    r4 = 0x80570000u;
    r5 = 1;
    r4 = (r4 + 11528);
    r4 = (r4 + 173);
    if constexpr (KnownRegArgsCpuCall<0x80459C9Cu>(&func_80459C9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80459C9C_45BC = func_80459C9C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80459C9C_45BC;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80459C9Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8045A08C;
}

loc_80459F8C:
{
    r4 = 0x80570000u;
    r5 = 2;
    r4 = (r4 + 11528);
    r4 = (r4 + 176);
    if constexpr (KnownRegArgsCpuCall<0x80459C9Cu>(&func_80459C9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80459C9C_4894 = func_80459C9C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80459C9C_4894;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80459C9Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8045A08C;
}

loc_80459FA4:
{
    r4 = 0x80570000u;
    r5 = 2;
    r4 = (r4 + 11528);
    r4 = (r4 + 180);
    if constexpr (KnownRegArgsCpuCall<0x80459C9Cu>(&func_80459C9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80459C9C_4B6C = func_80459C9C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80459C9C_4B6C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80459C9Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8045A08C;
}

loc_80459FBC:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
    r3 = (r1 + 52);
    r0 = (r0 + r4);
    r4 = (static_cast<int32_t>(r0) >> 1);
    ctx->lr = 0x80459FD0u;
    if constexpr (KnownRegArgsCpuCall<0x80459D88u>(&func_80459D88)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80459D88_4EEC = func_80459D88_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80459D88_4EEC);
        r4 = static_cast<uint32_t>(regargs_result_80459D88_4EEC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80459D88u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    r4 = (r1 + 52);
    r3 = r31;
    r5 = r4;
    if constexpr (KnownRegArgsCpuCall<0x80459A14u>(&func_80459A14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80459A14_5394 = func_80459A14_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80459A14_5394;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80459A14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    r0 = (r30 & 1);
}

loc_80459FE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045A08C;
    }
}

loc_80459FE8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 42u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r31);
}

loc_80459FF0:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r31 + 4));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 42u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r1 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + 8), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r31 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r31 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 16), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r31 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r31 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 28), r0);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 24), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r31 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r31 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 36), r0);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 32), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r31 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r31 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 44), r0);
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 40), r3);
    }
    r0 = MemoryInline::ReadResolved16(guest_range_0, 40u, (r31 + 40));
    MemoryInline::WriteResolved16(guest_range_1, 40u, (r1 + 48), static_cast<uint16_t>(r0));
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(0))) {
        goto loc_8045A064;
    }
}

loc_8045A048:
{
    r4 = 0x80570000u;
    r3 = (r1 + 52);
    r4 = (r4 + 11528);
    r5 = 0;
    r4 = (r4 + 161);
    if constexpr (KnownRegArgsCpuCall<0x80459C9Cu>(&func_80459C9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80459C9C_664D = func_80459C9C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80459C9C_664D;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80459C9Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8045A07C;
}

loc_8045A064:
{
    r4 = 0x80570000u;
    r3 = (r1 + 52);
    r4 = (r4 + 11528);
    r5 = -1;
    r4 = (r4 + 157);
    if constexpr (KnownRegArgsCpuCall<0x80459C9Cu>(&func_80459C9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80459C9C_693B = func_80459C9C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80459C9C_693B;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80459C9Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8045A07C:
{
    r3 = r31;
    r4 = (r1 + 8);
    r5 = (r1 + 52);
    if constexpr (KnownRegArgsCpuCall<0x80459A14u>(&func_80459A14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80459A14_6BFA = func_80459A14_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80459A14_6BFA;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80459A14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
}

loc_8045A08C:
{
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80459D88(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80459D88_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80459D88 func_80459D88 preserves=true fpr_mask=0x00000000
