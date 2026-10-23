#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80049240(CpuContext* ctx);
extern "C" uint64_t func_80049240_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8004AF24(CpuContext* ctx);
extern "C" uint64_t func_8004AF24_ra28_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8004D900(CpuContext* ctx);
extern "C" uint64_t func_8004D900_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8004DC30(CpuContext* ctx);
extern "C" uint64_t func_8004DC30_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800DBC94(CpuContext* ctx);
extern "C" uint64_t func_800DBC94_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_801EC7AC(CpuContext* ctx);
extern "C" uint32_t func_801EC7AC_rac8_1fe_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801ECBA4(CpuContext* ctx);
extern "C" uint64_t func_801ECBA4_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_801ECDB4(CpuContext* ctx);
extern "C" uint64_t func_801ECDB4_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_801ED2E8(CpuContext* ctx);
extern "C" uint64_t func_801ED2E8_ra28_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_801EFF34(CpuContext* ctx);
extern "C" uint64_t func_801EFF34_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_801F31EC(CpuContext* ctx);
extern "C" uint64_t func_801F31EC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801F388C(CpuContext* ctx);
extern "C" uint64_t func_801F388C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801F3E50(CpuContext* ctx);
extern "C" uint64_t func_801F3E50_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801F4280(CpuContext* ctx);
extern "C" uint64_t func_801F4280_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_801F4D2C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;
    uint8_t* guest_range_9 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_801F4D2C;

loc_801F4D2C:
{
    ctx->lr = 0x801F4D30u;
    if constexpr (KnownRegArgsCpuCall<0x801ECBA4u>(&func_801ECBA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_801ECBA4_F1D = func_801ECBA4_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801ECBA4_F1D);
        r4 = static_cast<uint32_t>(regargs_result_801ECBA4_F1D >> 32);
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
        InvokeDirectCpu<0x801ECBA4u>(ctx);
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
    }
}

loc_801F4D34:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_801F4D44;
    }
}

loc_801F4D38:
{
}

loc_801F4D3C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_801F51F4;
    }
}

loc_801F4D40:
{
    goto loc_801F5398;
}

loc_801F4D44:
{
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 2u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r31 + 1), static_cast<uint8_t>(r0));
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 6), 0, 14u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 0u, (r31 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801F4D54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F4D8C;
    }
}

loc_801F4D58:
{
}

loc_801F4D5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801F4DCC;
    }
}

loc_801F4D60:
{
}

loc_801F4D64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801F4E14;
    }
}

loc_801F4D68:
{
}

loc_801F4D6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801F4E70;
    }
}

loc_801F4D70:
{
}

loc_801F4D74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_801F4EE4;
    }
}

loc_801F4D78:
{
}

loc_801F4D7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_801F4FD4;
    }
}

loc_801F4D80:
{
}

loc_801F4D84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_801F50DC;
    }
}

loc_801F4D88:
{
    goto loc_801F51D4;
}

loc_801F4D8C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r31 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801F4D94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F4DA4;
    }
}

loc_801F4D98:
{
}

loc_801F4D9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801F4DB8;
    }
}

loc_801F4DA0:
{
    goto loc_801F51D4;
}

loc_801F4DA4:
{
    r0 = 2;
    MemoryInline::WriteResolved8(guest_range_0, 0u, r31, static_cast<uint8_t>(r0));
    r3 = r31;
    ctx->lr = 0x801F4DB4u;
    if constexpr (KnownRegArgsCpuCall<0x801ED2E8u>(&func_801ED2E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801ED2E8_1EF8 = func_801ED2E8_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_801ED2E8_1EF8);
        r4 = static_cast<uint32_t>(regargs_result_801ED2E8_1EF8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801ED2E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_801F51D4;
}

loc_801F4DB8:
{
    r0 = 3;
    MemoryInline::WriteResolved8(guest_range_0, 0u, r31, static_cast<uint8_t>(r0));
    r3 = r31;
    ctx->lr = 0x801F4DC8u;
    if constexpr (KnownRegArgsCpuCall<0x801ED2E8u>(&func_801ED2E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801ED2E8_22B8 = func_801ED2E8_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_801ED2E8_22B8);
        r4 = static_cast<uint32_t>(regargs_result_801ED2E8_22B8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801ED2E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_801F51D4;
}

loc_801F4DCC:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r31 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801F4DD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F4DE4;
    }
}

loc_801F4DD8:
{
}

loc_801F4DDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801F4E00;
    }
}

loc_801F4DE0:
{
    goto loc_801F51D4;
}

loc_801F4DE4:
{
    r0 = 4;
    MemoryInline::WriteResolved8(guest_range_0, 0u, r31, static_cast<uint8_t>(r0));
    r3 = r31;
    ctx->lr = 0x801F4DF4u;
    if constexpr (KnownRegArgsCpuCall<0x801ED2E8u>(&func_801ED2E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801ED2E8_2855 = func_801ED2E8_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_801ED2E8_2855);
        r4 = static_cast<uint32_t>(regargs_result_801ED2E8_2855 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801ED2E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r31 + 84);
    ctx->lr = 0x801F4DFCu;
    if constexpr (KnownRegArgsCpuCall<0x801ECDB4u>(&func_801ECDB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_801ECDB4_2BA6 = func_801ECDB4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801ECDB4_2BA6);
        r4 = static_cast<uint32_t>(regargs_result_801ECDB4_2BA6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801ECDB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_801F51D4;
}

loc_801F4E00:
{
    r0 = 5;
    MemoryInline::WriteResolved8(guest_range_0, 0u, r31, static_cast<uint8_t>(r0));
    r3 = r31;
    ctx->lr = 0x801F4E10u;
    if constexpr (KnownRegArgsCpuCall<0x801ED2E8u>(&func_801ED2E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801ED2E8_2F61 = func_801ED2E8_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_801ED2E8_2F61);
        r4 = static_cast<uint32_t>(regargs_result_801ED2E8_2F61 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801ED2E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_801F51D4;
}

loc_801F4E14:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r31 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801F4E1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F4E34;
    }
}

loc_801F4E20:
{
}

loc_801F4E24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801F4E48;
    }
}

loc_801F4E28:
{
}

loc_801F4E2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801F4E5C;
    }
}

loc_801F4E30:
{
    goto loc_801F51D4;
}

loc_801F4E34:
{
    r0 = 6;
    MemoryInline::WriteResolved8(guest_range_0, 0u, r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 84);
    ctx->lr = 0x801F4E44u;
    if constexpr (KnownRegArgsCpuCall<0x801ECDB4u>(&func_801ECDB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_801ECDB4_35B3 = func_801ECDB4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801ECDB4_35B3);
        r4 = static_cast<uint32_t>(regargs_result_801ECDB4_35B3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801ECDB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_801F51D4;
}

loc_801F4E48:
{
    r0 = 7;
    MemoryInline::WriteResolved8(guest_range_0, 0u, r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 84);
    ctx->lr = 0x801F4E58u;
    if constexpr (KnownRegArgsCpuCall<0x801ECDB4u>(&func_801ECDB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_801ECDB4_3990 = func_801ECDB4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801ECDB4_3990);
        r4 = static_cast<uint32_t>(regargs_result_801ECDB4_3990 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801ECDB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_801F51D4;
}

loc_801F4E5C:
{
    r0 = 8;
    MemoryInline::WriteResolved8(guest_range_0, 0u, r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 84);
    ctx->lr = 0x801F4E6Cu;
    if constexpr (KnownRegArgsCpuCall<0x801ECDB4u>(&func_801ECDB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_801ECDB4_3D6D = func_801ECDB4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801ECDB4_3D6D);
        r4 = static_cast<uint32_t>(regargs_result_801ECDB4_3D6D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801ECDB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_801F51D4;
}

loc_801F4E70:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r31 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801F4E78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F4E90;
    }
}

loc_801F4E7C:
{
}

loc_801F4E80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801F4EAC;
    }
}

loc_801F4E84:
{
}

loc_801F4E88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801F4EC8;
    }
}

loc_801F4E8C:
{
    goto loc_801F51D4;
}

loc_801F4E90:
{
    r0 = 9;
    MemoryInline::WriteResolved8(guest_range_0, 0u, r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 116);
    r4 = 0;
    r5 = MemoryInline::ReadResolved32(guest_range_1, 10u, (r31 + 16));
    ctx->lr = 0x801F4EA8u;
    if constexpr (KnownRegArgsCpuCall<0x801EFF34u>(&func_801EFF34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_801EFF34_442B = func_801EFF34_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_801EFF34_442B);
        r4 = static_cast<uint32_t>(regargs_result_801EFF34_442B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        InvokeDirectCpu<0x801EFF34u>(ctx);
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
    }
    goto loc_801F51D4;
}

loc_801F4EAC:
{
    r0 = 10;
    MemoryInline::WriteResolved8(guest_range_0, 0u, r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 116);
    r4 = 5;
    r5 = MemoryInline::ReadResolved32(guest_range_1, 10u, (r31 + 16));
    ctx->lr = 0x801F4EC4u;
    if constexpr (KnownRegArgsCpuCall<0x801EFF34u>(&func_801EFF34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_801EFF34_4A82 = func_801EFF34_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_801EFF34_4A82);
        r4 = static_cast<uint32_t>(regargs_result_801EFF34_4A82 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        InvokeDirectCpu<0x801EFF34u>(ctx);
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
    }
    goto loc_801F51D4;
}

loc_801F4EC8:
{
    r0 = 11;
    MemoryInline::WriteResolved8(guest_range_0, 0u, r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 116);
    r4 = 4;
    r5 = MemoryInline::ReadResolved32(guest_range_1, 10u, (r31 + 16));
    ctx->lr = 0x801F4EE0u;
    if constexpr (KnownRegArgsCpuCall<0x801EFF34u>(&func_801EFF34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_801EFF34_50D9 = func_801EFF34_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_801EFF34_50D9);
        r4 = static_cast<uint32_t>(regargs_result_801EFF34_50D9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        InvokeDirectCpu<0x801EFF34u>(ctx);
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
    }
    goto loc_801F51D4;
}

loc_801F4EE4:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r31 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801F4EEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F4F0C;
    }
}

loc_801F4EF0:
{
}

loc_801F4EF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801F4F44;
    }
}

loc_801F4EF8:
{
}

loc_801F4EFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801F4F64;
    }
}

loc_801F4F00:
{
}

loc_801F4F04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801F4F9C;
    }
}

loc_801F4F08:
{
    goto loc_801F51D4;
}

loc_801F4F0C:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x801F4F14u;
    if constexpr (KnownRegArgsCpuCall<0x8004D900u>(&func_8004D900)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004D900_5962 = func_8004D900_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8004D900_5962);
        r4 = static_cast<uint32_t>(regargs_result_8004D900_5962 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8004D900u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801F4F18:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801F4F3C;
    }
}

loc_801F4F1C:
{
    r0 = 12;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 928);
    r4 = 0;
    r5 = 0;
    r6 = MemoryInline::FlatRead32((r31 + 16));
    // inline leaf 0x801F1FDC (15 guest instruction(s))
    r7 = 0;
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 24u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, r3, static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r3 + 1), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r3 + 4), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r3 + 2), static_cast<uint8_t>(r4));
    r0 = 20;
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r3 + 3), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved16(guest_range_2, 8u, (r3 + 8), static_cast<uint16_t>(r7));
    MemoryInline::WriteResolved16(guest_range_2, 12u, (r3 + 12), static_cast<uint16_t>(r7));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r3 + 16), r7);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r3 + 20), r6);
    }
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r3 + 7), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved16(guest_range_2, 10u, (r3 + 10), static_cast<uint16_t>(r7));
    // end of inlined leaf 0x801F1FDC
    goto loc_801F51D4;
}

loc_801F4F3C:
{
    r29 = 1;
    goto loc_801F51D4;
}

loc_801F4F44:
{
    r0 = 13;
    MemoryInline::WriteResolved8(guest_range_0, 0u, r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 928);
    r4 = 0;
    r5 = 1;
    r6 = MemoryInline::ReadResolved32(guest_range_1, 10u, (r31 + 16));
    // inline leaf 0x801F1FDC (15 guest instruction(s))
    r7 = 0;
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 24u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, r3, static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r3 + 1), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r3 + 4), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r3 + 2), static_cast<uint8_t>(r4));
    r0 = 20;
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r3 + 3), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved16(guest_range_3, 8u, (r3 + 8), static_cast<uint16_t>(r7));
    MemoryInline::WriteResolved16(guest_range_3, 12u, (r3 + 12), static_cast<uint16_t>(r7));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r3 + 16), r7);
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r3 + 20), r6);
    }
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r3 + 7), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved16(guest_range_3, 10u, (r3 + 10), static_cast<uint16_t>(r7));
    // end of inlined leaf 0x801F1FDC
    goto loc_801F51D4;
}

loc_801F4F64:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x801F4F6Cu;
    if constexpr (KnownRegArgsCpuCall<0x8004D900u>(&func_8004D900)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004D900_6A30 = func_8004D900_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8004D900_6A30);
        r4 = static_cast<uint32_t>(regargs_result_8004D900_6A30 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8004D900u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801F4F70:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801F4F94;
    }
}

loc_801F4F74:
{
    r0 = 14;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 928);
    r4 = 0;
    r5 = 2;
    r6 = MemoryInline::FlatRead32((r31 + 16));
    // inline leaf 0x801F1FDC (15 guest instruction(s))
    r7 = 0;
    guest_range_4 = MemoryInline::ResolveRangeHost(r3, 0, 24u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 0u, r3, static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_4, 1u, (r3 + 1), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_4, 4u, (r3 + 4), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r3 + 2), static_cast<uint8_t>(r4));
    r0 = 20;
    MemoryInline::WriteResolved8(guest_range_4, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 3u, (r3 + 3), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved16(guest_range_4, 8u, (r3 + 8), static_cast<uint16_t>(r7));
    MemoryInline::WriteResolved16(guest_range_4, 12u, (r3 + 12), static_cast<uint16_t>(r7));
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_4, 16u, (r3 + 16), r7);
        MemoryInline::WriteResolved32(guest_range_4, 20u, (r3 + 20), r6);
    }
    MemoryInline::WriteResolved8(guest_range_4, 7u, (r3 + 7), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved16(guest_range_4, 10u, (r3 + 10), static_cast<uint16_t>(r7));
    // end of inlined leaf 0x801F1FDC
    goto loc_801F51D4;
}

loc_801F4F94:
{
    r29 = 1;
    goto loc_801F51D4;
}

loc_801F4F9C:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x801F4FA4u;
    if constexpr (KnownRegArgsCpuCall<0x8004D900u>(&func_8004D900)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004D900_746A = func_8004D900_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8004D900_746A);
        r4 = static_cast<uint32_t>(regargs_result_8004D900_746A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8004D900u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801F4FA8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801F4FCC;
    }
}

loc_801F4FAC:
{
    r0 = 15;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 928);
    r4 = 0;
    r5 = 3;
    r6 = MemoryInline::FlatRead32((r31 + 16));
    // inline leaf 0x801F1FDC (15 guest instruction(s))
    r7 = 0;
    guest_range_5 = MemoryInline::ResolveRangeHost(r3, 0, 24u, false, true);
    MemoryInline::WriteResolved8(guest_range_5, 0u, r3, static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_5, 1u, (r3 + 1), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_5, 4u, (r3 + 4), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_5, 2u, (r3 + 2), static_cast<uint8_t>(r4));
    r0 = 20;
    MemoryInline::WriteResolved8(guest_range_5, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_5, 3u, (r3 + 3), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved16(guest_range_5, 8u, (r3 + 8), static_cast<uint16_t>(r7));
    MemoryInline::WriteResolved16(guest_range_5, 12u, (r3 + 12), static_cast<uint16_t>(r7));
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_5, 16u, (r3 + 16), r7);
        MemoryInline::WriteResolved32(guest_range_5, 20u, (r3 + 20), r6);
    }
    MemoryInline::WriteResolved8(guest_range_5, 7u, (r3 + 7), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved16(guest_range_5, 10u, (r3 + 10), static_cast<uint16_t>(r7));
    // end of inlined leaf 0x801F1FDC
    goto loc_801F51D4;
}

loc_801F4FCC:
{
    r29 = 1;
    goto loc_801F51D4;
}

loc_801F4FD4:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r31 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801F4FDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F4FFC;
    }
}

loc_801F4FE0:
{
}

loc_801F4FE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801F5034;
    }
}

loc_801F4FE8:
{
}

loc_801F4FEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801F506C;
    }
}

loc_801F4FF0:
{
}

loc_801F4FF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801F50A4;
    }
}

loc_801F4FF8:
{
    goto loc_801F51D4;
}

loc_801F4FFC:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x801F5004u;
    if constexpr (KnownRegArgsCpuCall<0x8004DC30u>(&func_8004DC30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004DC30_81A7 = func_8004DC30_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8004DC30_81A7);
        r4 = static_cast<uint32_t>(regargs_result_8004DC30_81A7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8004DC30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801F5008:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801F502C;
    }
}

loc_801F500C:
{
    r0 = 16;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 928);
    r4 = 1;
    r5 = 0;
    r6 = MemoryInline::FlatRead32((r31 + 16));
    // inline leaf 0x801F1FDC (15 guest instruction(s))
    r7 = 0;
    guest_range_6 = MemoryInline::ResolveRangeHost(r3, 0, 24u, false, true);
    MemoryInline::WriteResolved8(guest_range_6, 0u, r3, static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_6, 1u, (r3 + 1), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_6, 4u, (r3 + 4), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_6, 2u, (r3 + 2), static_cast<uint8_t>(r4));
    r0 = 20;
    MemoryInline::WriteResolved8(guest_range_6, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_6, 3u, (r3 + 3), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved16(guest_range_6, 8u, (r3 + 8), static_cast<uint16_t>(r7));
    MemoryInline::WriteResolved16(guest_range_6, 12u, (r3 + 12), static_cast<uint16_t>(r7));
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_6, 16u, (r3 + 16), r7);
        MemoryInline::WriteResolved32(guest_range_6, 20u, (r3 + 20), r6);
    }
    MemoryInline::WriteResolved8(guest_range_6, 7u, (r3 + 7), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved16(guest_range_6, 10u, (r3 + 10), static_cast<uint16_t>(r7));
    // end of inlined leaf 0x801F1FDC
    goto loc_801F51D4;
}

loc_801F502C:
{
    r29 = 1;
    goto loc_801F51D4;
}

loc_801F5034:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x801F503Cu;
    if constexpr (KnownRegArgsCpuCall<0x8004AF24u>(&func_8004AF24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004AF24_8BE1 = func_8004AF24_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004AF24_8BE1);
        r4 = static_cast<uint32_t>(regargs_result_8004AF24_8BE1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004AF24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_801F5040:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801F5064;
    }
}

loc_801F5044:
{
    r0 = 17;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 928);
    r4 = 1;
    r5 = 1;
    r6 = MemoryInline::FlatRead32((r31 + 16));
    // inline leaf 0x801F1FDC (15 guest instruction(s))
    r7 = 0;
    guest_range_7 = MemoryInline::ResolveRangeHost(r3, 0, 24u, false, true);
    MemoryInline::WriteResolved8(guest_range_7, 0u, r3, static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_7, 1u, (r3 + 1), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_7, 4u, (r3 + 4), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_7, 2u, (r3 + 2), static_cast<uint8_t>(r4));
    r0 = 20;
    MemoryInline::WriteResolved8(guest_range_7, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_7, 3u, (r3 + 3), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved16(guest_range_7, 8u, (r3 + 8), static_cast<uint16_t>(r7));
    MemoryInline::WriteResolved16(guest_range_7, 12u, (r3 + 12), static_cast<uint16_t>(r7));
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_7, 16u, (r3 + 16), r7);
        MemoryInline::WriteResolved32(guest_range_7, 20u, (r3 + 20), r6);
    }
    MemoryInline::WriteResolved8(guest_range_7, 7u, (r3 + 7), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved16(guest_range_7, 10u, (r3 + 10), static_cast<uint16_t>(r7));
    // end of inlined leaf 0x801F1FDC
    goto loc_801F51D4;
}

loc_801F5064:
{
    r29 = 1;
    goto loc_801F51D4;
}

loc_801F506C:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x801F5074u;
    if constexpr (KnownRegArgsCpuCall<0x8004DC30u>(&func_8004DC30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004DC30_966C = func_8004DC30_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8004DC30_966C);
        r4 = static_cast<uint32_t>(regargs_result_8004DC30_966C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8004DC30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801F5078:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801F509C;
    }
}

loc_801F507C:
{
    r0 = 18;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 928);
    r4 = 1;
    r5 = 2;
    r6 = MemoryInline::FlatRead32((r31 + 16));
    // inline leaf 0x801F1FDC (15 guest instruction(s))
    r7 = 0;
    guest_range_8 = MemoryInline::ResolveRangeHost(r3, 0, 24u, false, true);
    MemoryInline::WriteResolved8(guest_range_8, 0u, r3, static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_8, 1u, (r3 + 1), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_8, 4u, (r3 + 4), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_8, 2u, (r3 + 2), static_cast<uint8_t>(r4));
    r0 = 20;
    MemoryInline::WriteResolved8(guest_range_8, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_8, 3u, (r3 + 3), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved16(guest_range_8, 8u, (r3 + 8), static_cast<uint16_t>(r7));
    MemoryInline::WriteResolved16(guest_range_8, 12u, (r3 + 12), static_cast<uint16_t>(r7));
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_8, 16u, (r3 + 16), r7);
        MemoryInline::WriteResolved32(guest_range_8, 20u, (r3 + 20), r6);
    }
    MemoryInline::WriteResolved8(guest_range_8, 7u, (r3 + 7), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved16(guest_range_8, 10u, (r3 + 10), static_cast<uint16_t>(r7));
    // end of inlined leaf 0x801F1FDC
    goto loc_801F51D4;
}

loc_801F509C:
{
    r29 = 1;
    goto loc_801F51D4;
}

loc_801F50A4:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x801F50ACu;
    if constexpr (KnownRegArgsCpuCall<0x8004DC30u>(&func_8004DC30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004DC30_A0A6 = func_8004DC30_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8004DC30_A0A6);
        r4 = static_cast<uint32_t>(regargs_result_8004DC30_A0A6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8004DC30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801F50B0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801F50D4;
    }
}

loc_801F50B4:
{
    r0 = 19;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 928);
    r4 = 1;
    r5 = 3;
    r6 = MemoryInline::FlatRead32((r31 + 16));
    // inline leaf 0x801F1FDC (15 guest instruction(s))
    r7 = 0;
    guest_range_9 = MemoryInline::ResolveRangeHost(r3, 0, 24u, false, true);
    MemoryInline::WriteResolved8(guest_range_9, 0u, r3, static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_9, 1u, (r3 + 1), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_9, 4u, (r3 + 4), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_9, 2u, (r3 + 2), static_cast<uint8_t>(r4));
    r0 = 20;
    MemoryInline::WriteResolved8(guest_range_9, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_9, 3u, (r3 + 3), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved16(guest_range_9, 8u, (r3 + 8), static_cast<uint16_t>(r7));
    MemoryInline::WriteResolved16(guest_range_9, 12u, (r3 + 12), static_cast<uint16_t>(r7));
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_9, 16u, (r3 + 16), r7);
        MemoryInline::WriteResolved32(guest_range_9, 20u, (r3 + 20), r6);
    }
    MemoryInline::WriteResolved8(guest_range_9, 7u, (r3 + 7), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved16(guest_range_9, 10u, (r3 + 10), static_cast<uint16_t>(r7));
    // end of inlined leaf 0x801F1FDC
    goto loc_801F51D4;
}

loc_801F50D4:
{
    r29 = 1;
    goto loc_801F51D4;
}

loc_801F50DC:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r31 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801F50E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F5114;
    }
}

loc_801F50E8:
{
}

loc_801F50EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801F5130;
    }
}

loc_801F50F0:
{
}

loc_801F50F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801F514C;
    }
}

loc_801F50F8:
{
}

loc_801F50FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801F5168;
    }
}

loc_801F5100:
{
}

loc_801F5104:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_801F5184;
    }
}

loc_801F5108:
{
}

loc_801F510C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_801F51A0;
    }
}

loc_801F5110:
{
    goto loc_801F51D4;
}

loc_801F5114:
{
    r0 = 20;
    MemoryInline::WriteResolved8(guest_range_0, 0u, r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 912);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 10u, (r31 + 16));
    r5 = 0;
    ctx->lr = 0x801F512Cu;
    if constexpr (KnownRegArgsCpuCall<0x801F31ECu>(&func_801F31EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_801F31EC_AFDA = func_801F31EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801F31EC_AFDA);
        r4 = static_cast<uint32_t>(regargs_result_801F31EC_AFDA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x801F31ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_801F51D4;
}

loc_801F5130:
{
    r0 = 21;
    MemoryInline::WriteResolved8(guest_range_0, 0u, r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 872);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 10u, (r31 + 16));
    r5 = 0;
    ctx->lr = 0x801F5148u;
    if constexpr (KnownRegArgsCpuCall<0x801F388Cu>(&func_801F388C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_801F388C_B4D4 = func_801F388C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801F388C_B4D4);
        r4 = static_cast<uint32_t>(regargs_result_801F388C_B4D4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x801F388Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_801F51D4;
}

loc_801F514C:
{
    r0 = 22;
    MemoryInline::WriteResolved8(guest_range_0, 0u, r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 912);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 10u, (r31 + 16));
    r5 = 1;
    ctx->lr = 0x801F5164u;
    if constexpr (KnownRegArgsCpuCall<0x801F31ECu>(&func_801F31EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_801F31EC_B9CE = func_801F31EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801F31EC_B9CE);
        r4 = static_cast<uint32_t>(regargs_result_801F31EC_B9CE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x801F31ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_801F51D4;
}

loc_801F5168:
{
    r0 = 23;
    MemoryInline::WriteResolved8(guest_range_0, 0u, r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 872);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 10u, (r31 + 16));
    r5 = 1;
    ctx->lr = 0x801F5180u;
    if constexpr (KnownRegArgsCpuCall<0x801F388Cu>(&func_801F388C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_801F388C_BEC8 = func_801F388C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801F388C_BEC8);
        r4 = static_cast<uint32_t>(regargs_result_801F388C_BEC8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x801F388Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_801F51D4;
}

loc_801F5184:
{
    r0 = 24;
    MemoryInline::WriteResolved8(guest_range_0, 0u, r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 828);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 10u, (r31 + 16));
    r5 = 0;
    ctx->lr = 0x801F519Cu;
    if constexpr (KnownRegArgsCpuCall<0x801F3E50u>(&func_801F3E50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_801F3E50_C3C2 = func_801F3E50_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801F3E50_C3C2);
        r4 = static_cast<uint32_t>(regargs_result_801F3E50_C3C2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x801F3E50u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_801F51D4;
}

loc_801F51A0:
{
    r3 = MemoryInline::ReadResolved32(guest_range_1, 10u, (r31 + 16));
    r4 = 0;
    ctx->lr = 0x801F51ACu;
    if constexpr (KnownRegArgsCpuCall<0x801F4280u>(&func_801F4280)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_801F4280_C842 = func_801F4280_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801F4280_C842);
        r4 = static_cast<uint32_t>(regargs_result_801F4280_C842 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x801F4280u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_801F51B0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801F51D0;
    }
}

loc_801F51B4:
{
    r0 = 25;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 828);
    r4 = MemoryInline::FlatRead32((r31 + 16));
    r5 = 1;
    ctx->lr = 0x801F51CCu;
    if constexpr (KnownRegArgsCpuCall<0x801F3E50u>(&func_801F3E50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_801F3E50_CE11 = func_801F3E50_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801F3E50_CE11);
        r4 = static_cast<uint32_t>(regargs_result_801F3E50_CE11 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x801F3E50u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_801F51D4;
}

loc_801F51D0:
{
    r29 = 1;
}

loc_801F51D4:
{
}

loc_801F51D8:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_801F51E8;
    }
}

loc_801F51DC:
{
    r3 = 5;
    ctx->lr = 0x801F51E4u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_800DBC94_D338 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_D338);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_D338 >> 32);
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
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    }
    goto loc_801F5398;
}

loc_801F51E8:
{
    r3 = 2;
    ctx->lr = 0x801F51F0u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_800DBC94_DA54 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_DA54);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_DA54 >> 32);
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
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
    }
    goto loc_801F5398;
}

loc_801F51F4:
{
    r3 = r31;
    ctx->lr = 0x801F51FCu;
    if constexpr (KnownRegArgsCpuCall<0x801EC7ACu>(&func_801EC7AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_801EC7AC_E13C = func_801EC7AC_rac8_1fe_8_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = regargs_result_801EC7AC_E13C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        InvokeDirectCpu<0x801EC7ACu>(ctx);
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
    }
}

loc_801F5398:
{
    r0 = (r30 + -1);
}

loc_801F53A0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_801F53AC;
    }
}

loc_801F53A4:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
}

loc_801F53AC:
{
    r3 = 0x80200000u;
    r3 = (r3 + -22084);
    r4 = 0;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80049240u>(&func_80049240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80049240_E8FD = func_80049240_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80049240_E8FD);
        r4 = static_cast<uint32_t>(regargs_result_80049240_E8FD >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80049240u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801F4D2C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801F4D2C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0xE0003FFF gpr_write=0xE0001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801F4D2C func_801F4D2C preserves=true fpr_mask=0x00000000
